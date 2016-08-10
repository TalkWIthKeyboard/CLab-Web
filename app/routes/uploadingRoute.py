from app import app
from flask import Flask,render_template,request,jsonify
import os
import sys

reload(sys)

sys.setdefaultencoding('utf8')


@app.route('/clab/uploading',methods=['GET'])
def index():
    return render_template('uploadingManage.html')

def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1] in app.config['ALLOWED_EXTENSIONS']

@app.route('/clab/uploading/submitForm/textarea',methods=['POST'])
def submit_textarea_form():
    if request.method == 'POST':
        try:
            rule = request.form['rule']
            if rule:
                fileHandle = open('app/static/CLab10/examples/shirt/shirt.cp','w')
                fileHandle.write(rule)
                os.system('cd app/static/CLab10/examples/shirt; python work.py')
                return jsonify(dict(message=0))
            else:
                return jsonify(dict(message=1))
        except Exception,e:
            return jsonify(dict(message=2))

@app.route('/clab/uploading/submitForm/file',methods=['POST'])
def submit_file_form():
    if request.method == 'POST':
        try:
            file = request.form['file']
            if file and allowed_file(file):
                path = os.path.join(app.config['UPLOAD_FOLDER'], 'shirt.cp')
                file.save(path)
                os.system('cd ../static/CLab10/examples/shirt; ./shirt')
                return jsonify(dict(message=0))
            else:
                return jsonify(dict(message=1))
        except:
            return jsonify(dict(message=2))

