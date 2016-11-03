# -*- coding: utf-8 -*-
from app import app
from flask import request,jsonify,render_template
from app.routes.uploadingRoute import read_file,write_file,allowed_file
import sys
import os
import subprocess

reload(sys)

sys.setdefaultencoding('utf8')

@app.route('/checkout',methods=['POST','GET'])
def check_out():
    if request.method == 'POST':
        dict = {}
        try:
            input = request.form['input']
            if input:
                write_file('app/static/Search/document/input.txt', input)
                dict = make_dict()
                return jsonify(dict)
            else:
                dict['error'] = '没有输入!'
                return jsonify(dict)
        except Exception, e:
            dict['error'] = e.message
            return jsonify(dict)
    else:
        return render_template('checkout.html')

@app.route('/checkout/uploadFile',methods=['POST'])
def checkout_upload_file():
    '''
        从文件上传规则，进行clab计算并返回结果
    '''
    if request.method == 'POST':
        dict = {}
        try:
            file = request.files['file']
            fileName = file.filename
            if file and allowed_file(fileName):
                path = os.path.join(app.config['UPLOAD_FOLDER_CHECKOUT'], 'input.txt')
                file.save(path)
                dict = make_dict()
                dict['input'] = read_file('app/static/Search/document/input.txt')
                return jsonify(dict)
            else:
                dict['error'] = '输入格式错误！'
                return jsonify(dict)
        except Exception,e:
            dict['error'] = e.message
            return jsonify(dict)


def make_dict():
    '''
        注入java程序获得输出
    '''
    dict = {}
    try:
        subprocess.call('cd app/static/Search && python work.py', shell=True)
        dict['output'] = read_file('app/static/Search/document/output.txt')
        dict['error'] = ''
        return dict
    except Exception,e:
        dict['error'] = e.message
        return dict