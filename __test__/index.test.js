const ncScreen = require('../index');

test('getInfo return object contains width and height', () => {
    const info = ncScreen.getInfo();
    console.log('ncscreen output: ', ncScreen, ncScreen.getInfo());
    expect(typeof info).toBe('object');
    expect(info).not.toBe('null');
    expect(typeof info.width).toBe('number');
    expect(typeof info.height).toBe('number');
    expect(typeof info.height).toBe('number');
});
