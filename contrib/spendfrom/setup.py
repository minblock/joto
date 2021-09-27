from distutils.core import setup
setup(name='JOTOCOINspendfrom',
      version='1.0',
      description='Command-line utility for jotocoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@jotocoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
