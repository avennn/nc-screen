<a href="README.md">English</a>｜<a href="README.zh_CN.md">简体中文</a>

# nc-screen

[![Build Status](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/avennn/nc-screen)
[![Download](https://img.shields.io/npm/dw/nc-screen)](https://www.npmjs.com/package/nc-screen)
[![Coverage](https://img.shields.io/badge/coverage-100%25-brightgreen)](https://github.com/avennn/nc-screen)
[![Npm](https://img.shields.io/npm/v/nc-screen)](https://github.com/avennn/nc-screen)
[![Node](https://img.shields.io/node/v/nc-screen)](./package.json)
[![License](https://img.shields.io/npm/l/nc-screen)](./LICENSE)

获取屏幕宽高的 Nodejs C++插件。

## 安装

```sh
npm install nc-screen
```

或者

```sh
yarn add nc-screen
```

## 使用

```js
const { getInfo } = require('nc-screen');

console.log(getInfo()); // {width: 1920, heigth: 1080}
```

## 编译

```sh
sudo yarn build
```

or

```sh
sudo npm run build
```

## 变更日志

你可以从这个[文件](./CHANGELOG.md)看到历史变更.

## 作者

[Thomas Leung](https://github.com/avennn)

## 许可证

[MIT](./LICENSE)
