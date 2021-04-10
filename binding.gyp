{
    "targets": [{
        "target_name": "ncscreen",
        "cflags!": [ "-fno-exceptions" ],
        "cflags_cc!": [ "-fno-exceptions" ],
        "sources": [
            "src/main.cpp",
        ],
        'include_dirs': [
            "<!@(node -p \"require('node-addon-api').include\")"
        ],
        'libraries': [],
        'dependencies': [
            "<!(node -p \"require('node-addon-api').gyp\")"
        ],
        'conditions': [
            ['OS == "mac"', {
                'include_dirs': [
                    'System/Library/Frameworks/ApplicationServices.framework/Headers'
                ],
                'link_settings': {
                    'libraries': [
                        '-framework ApplicationServices',
                    ]
                }
            }],
        ],
        'defines': [ 'NAPI_DISABLE_CPP_EXCEPTIONS' ]
    }]
}