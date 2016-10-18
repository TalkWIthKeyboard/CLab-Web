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

def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1] in app.config['ALLOWED_EXTENSIONS']

@app.route('/clab/uploading/submitForm/textarea',methods=['POST'])
def submit_textarea_form():
    if request.method == 'POST':
        dict = {}
        try:
            rule = request.form['rule']
            if rule:
                write_file('app/static/CLab10/examples/shirt/shirt.cp',rule)
                p = subprocess.call('cd app/static/CLab10/examples/shirt && python work.py',shell=True)
                dict['detail'] = read_file('app/static/CLab10/examples/shirt/outputDump.dump')
                dict['summary'] = read_file('app/static/CLab10/examples/shirt/output.txt')
                dict['error'] = ''
                return jsonify(dict)
            else:
                dict['error'] = '没有输入!'
                return jsonify(dict)
        except Exception,e:
            dict['error'] = e.message
            return jsonify(dict)


# @app.route('/clab/uploading/submitForm/file',methods=['POST'])
# def submit_file_form():
#     if request.method == 'POST':
#         try:
#             file = request.form['file']
#             if file and allowed_file(file):
#                 path = os.path.join(app.config['UPLOAD_FOLDER'], 'shirt.cp')
#                 file.save(path)
#                 os.system('cd ../static/CLab10/examples/shirt; ./shirt')
#                 return jsonify(dict(message=0))
#             else:
#                 return jsonify(dict(message=1))
#         except:
#             return jsonify(dict(message=2))




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
