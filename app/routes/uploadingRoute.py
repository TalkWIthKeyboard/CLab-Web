# -*- coding: utf-8 -*-
from app import app
from flask import Flask,render_template,request,jsonify,redirect,url_for
import os
import sys
import subprocess

reload(sys)

sys.setdefaultencoding('utf8')

@app.route('/', methods=['GET'])
def init():
    return redirect(url_for('index'))

@app.route('/clab/uploading',methods=['GET'])
def index():
    return render_template('uploadingManage.html')

@app.route('/clab/uploading/submitForm/textarea',methods=['POST'])
def submit_textarea_form():
    '''
        从文本输入规则，进行clab计算并返回结果
    '''
    if request.method == 'POST':
        dict = {}
        try:
            rule = request.form['rule']
            if rule:
                write_file('app/static/CLab10/examples/shirt/shirt.cp',rule)
                dict = make_dict()
                return jsonify(dict)
            else:
                dict['error'] = '没有输入!'
                return jsonify(dict)
        except Exception,e:
            dict['error'] = e.message
            return jsonify(dict)


@app.route('/clab/uploadFile',methods=['POST'])
def upload_file():
    '''
        从文件上传规则，进行clab计算并返回结果
    '''
    if request.method == 'POST':
        dict = {}
        try:
            file = request.files['file']
            fileName = file.filename
            if file and allowed_file(fileName):
                path = os.path.join(app.config['UPLOAD_FOLDER'], 'shirt.cp')
                dict['input'] = read_file('app/static/CLab10/examples/shirt/shirt.cp')
                file.save(path)
                dict = make_dict()
                return jsonify(dict)
            else:
                dict['error'] = '输入格式错误！'
                return jsonify(dict)
        except Exception,e:
            dict['error'] = e.message
            return jsonify(dict)


def read_file(path):
    '''
        读文件
    '''
    file = open(path, 'r')
    info = file.read()
    file.close()
    return info

def write_file(path,content):
    '''
        写文件
    '''
    file = open(path, 'w')
    file.write(content)
    file.close()

def make_dict():
    '''
        注入c程序获得输出
    '''
    dict = {}
    try:
        subprocess.call('cd app/static/CLab10/examples/shirt && python work.py', shell=True)
        dict['detail'] = read_file('app/static/CLab10/examples/shirt/outputDump.dump')
        dict['summary'] = read_file('app/static/CLab10/examples/shirt/output.out')
        dict['error'] = ''
        return dict
    except Exception,e:
        dict['error'] = e.message
        return dict

def allowed_file(filename):
    '''
        验证上传文件的格式是否合法
    '''
    return '.' in filename and \
           filename.rsplit('.', 1)[1] in app.config['ALLOWED_EXTENSIONS']
