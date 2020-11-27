project('TestD', ['d', 'cpp'], default_options : ['cpp_std=c++17'])

src = [
    'cpp/istring_view.cpp',
    'cpp/ispan.hpp',
    'main.d',
    'lib.cpp',
    'd/istring_view.d',
    'd/ispan.d'
]

executable('unit', src, include_directories: ['d'])
