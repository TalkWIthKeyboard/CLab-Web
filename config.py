import os
basedir = os.path.abspath(os.path.dirname(__file__))

UPLOAD_FOLDER = os.path.join(basedir, 'app/static/CLab10/examples/shirt')

UPLOAD_FOLDER_CHECKOUT = os.path.join(basedir, 'app/static/Search/document')

ALLOWED_EXTENSIONS = ['txt', 'input', 'cp']