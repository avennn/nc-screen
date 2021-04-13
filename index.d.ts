interface ScreenInfo {
    width: number;
    height: number;
    isRetina?: boolean;
}

export function getInfo(): ScreenInfo;
