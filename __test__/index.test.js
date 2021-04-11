const os = require('os');
const ncScreen = require('../index');

test('getInfo return object contains width and height', () => {
    const info = ncScreen.getInfo();
    console.log('ncscreen output: ', ncScreen, ncScreen.getInfo());
    expect(typeof info).toBe('object');
    expect(info).not.toBe('null');
    expect(typeof info.width).toBe('number');
    expect(info.width).toBeGreaterThan(0);
    expect(typeof info.height).toBe('number');
    expect(info.height).toBeGreaterThan(0);
});

test('getInfo return object contains isRetina key while platform is osx', () => {
    const info = ncScreen.getInfo();
    const platform = os.platform();
    const osx = platform === 'darwin';
    if (osx) {
        expect(info).toHaveProperty('isRetina');
        expect(typeof info.isRetina).toBe('boolean');
    }
});
