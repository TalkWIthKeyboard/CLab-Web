from app import app
from flask import Flask,render_template,request,jsonify
import os

#入口
@app.route('/clab/uploading',methods=['GET'])
def index():
    return render_template('uploadingManage.html')

def allowed_file(filename):
    return '.' in filename and \
           filename.rsplit('.', 1)[1] in app.config['ALLOWED_EXTENSIONS']

@app.route('/clab/uploading/submitForm',methods=['POST'])
def submit_form():
    if request.method == 'POST':
        try:
            rule = request.form['rule']
            file = request.form['file']
            #走text上传
            if rule:
                fileHandle = open('../static/CLab10/examples/shirt/shirt.cc','w')
                fileHandle.write(rule)
            #走fileinput上传
            else:
                if file and allowed_file(file):
                    path = os.path.join(app.config['UPLOAD_FOLDER'], 'shirt.cc')
                    file.save(path)
                else:
                    return jsonify(dict(message=1))

            os.system('cd ../static/CLab10/examples/shirt; ./shirt')
            return jsonify(dict(message=0))
        except:
            return jsonify(message=2)




