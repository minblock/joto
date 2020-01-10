from distutils.core import setup
setup(name='JOTOspendfrom',
      version='1.0',
      description='Command-line utility for joto "coin control"',
      author='Gavin Andresen',
      author_email='gavin@jotofoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
