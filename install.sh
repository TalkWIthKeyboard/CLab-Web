#!/usr/bin/env bash
pip install virtualenv
virtualenv flask
flask/bin/pip install --upgrade pip
flask/bin/pip install setuptools --no-binary --upgrade
flask/bin/pip install flask==0.10.1
flask/bin/pip install flask-login==0.3.2
flask/bin/pip install flask-openid==1.2.5
flask/bin/pip install flask-mail==0.7.6
flask/bin/pip install sqlalchemy==0.9.6
flask/bin/pip install flask-sqlalchemy==0.16
flask/bin/pip install sqlalchemy-migrate==0.9.1
flask/bin/pip install flask-whooshalchemy==0.54a
flask/bin/pip install flask-wtf==0.12
flask/bin/pip install pytz==2013b
flask/bin/pip install flask-babel==0.8
flask/bin/pip install flup
flask/bin/pip install flask-uploads==0.1.3
flask/bin/pip install mysql-python==1.2.5
flask/bin/pip install simplejson==3.6.0
flask/bin/pip install jpush==3.0.1
flask/bin/pip install sqlalchemy_imageattach==0.8.2
flask/bin/pip install requests==2.4.0
flask/bin/pip install unicodecsv==0.11.0
flask/bin/pip install pymysql==0.7.2
flask/bin/pip install uwsgi
flask/bin/pip install Pillow
flask/bin/pip install PyJWT
