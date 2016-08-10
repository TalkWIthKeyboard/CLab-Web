from flask import Flask

app = Flask(__name__, static_url_path='')
app.config.from_object('config')

# models

# routes
from app.routes import uploadingRoute