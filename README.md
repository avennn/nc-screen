# nc-screen

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/avennn/nc-screen)
[![Coverage](https://img.shields.io/badge/coverage-100%-brightgreen)](https://github.com/avennn/nc-screen)
[![License](https://img.shields.io/badge/license-MIT-green)](./LICENSE)

Nodejs C++ addon to get device screen size

## Install

```sh
npm install nc-screen
```

or

```sh
yarn add nc-screen
```

## Usage

```js
const { getInfo } = require('nc-screen');

console.log(getInfo()); // {width: 1920, heigth: 1080}
```

## Compile

```sh
sudo yarn build
```

or

```sh
sudo npm run build
```

## Change Log

You can read history changes from this [doc](./CHANGELOG.md).

## Author

name: Javen Leung

email: 914301050@qq.com

## LICENSE

[MIT](./LICENSE)
