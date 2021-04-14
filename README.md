# nc-screen

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/avennn/nc-screen)
[![Download](https://img.shields.io/npm/dw/nc-screen)](https://www.npmjs.com/package/nc-screen)
[![Coverage](https://img.shields.io/badge/coverage-100%25-brightgreen)](https://github.com/avennn/nc-screen)
[![Npm](https://img.shields.io/npm/v/nc-screen)](https://github.com/avennn/nc-screen)
[![Node](https://img.shields.io/node/v/nc-screen)](./package.json)
[![License](https://img.shields.io/npm/l/nc-screen)](./LICENSE)

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
