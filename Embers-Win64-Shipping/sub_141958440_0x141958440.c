// 函数: sub_141958440
// 地址: 0x141958440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x78)
enum DISP_CHANGE result = EnterCriticalSection(lpCriticalSection)

if (arg5 != 0)
    HMONITOR hMonitor = MonitorFromWindow(*arg2, MONITOR_DEFAULTTOPRIMARY)
    var_1a4
    memset(&var_1a4, 0, 0x64)
    MONITORINFO lpmi
    lpmi.cbSize = 0x68
    GetMonitorInfoW(hMonitor, &lpmi)
    DEVMODEW devMode
    devMode.dmBitsPerPel = 0x20
    devMode.dmSize = 0xdc
    devMode.dmPelsWidth = arg3
    devMode.dmPelsHeight = arg4
    devMode.dmFields = 0x1c0000
    void lpszDeviceName
    result = ChangeDisplaySettingsExW(&lpszDeviceName, &devMode, nullptr, CDS_FULLSCREEN, 0)
else if (arg6 != 0)
    result = ChangeDisplaySettingsW(nullptr, 0)

*(arg1 + 0x70) = 1
arg2[5].d = arg8
*(arg2 + 0x2c) = arg7

if (data_143eff5c7 == 0)
    HDC param0_2 = wglGetCurrentDC()
    HGLRC param1_3 = wglGetCurrentContext()
    HDC param0 = arg2[1]
    HGLRC param1_2 = param1_3
    HGLRC param1 = arg2[2]
    param1_3.b = param0_2 == param0
    int64_t r12
    
    if (param1_2 != param1 || param1_3.b == 0)
        r12.b = 0
        
        if (wglMakeCurrent(param0, param1) == 0)
            wglMakeCurrent(nullptr, nullptr)
    else
        r12.b = 1
    
    data_143f000f8(0x8d40, zx.q(arg2[4].d))
    int64_t var_1c8
    var_1c8.d = 0
    data_143f00120(0x8d40, 0x8ce0, zx.q(arg7), zx.q(arg8), var_1c8)
    data_143effb70(0, 0, zx.q(arg3), zx.q(arg4))
    result = data_143effb98(0x1800, 0, &data_143f01c78)
    
    if (r12.b == 0)
        HDC param0_1
        HGLRC param1_1
        
        if (param1_2 == 0)
            param1_1 = nullptr
            param0_1 = nullptr
        else
            param1_1 = param1_2
            param0_1 = param0_2
        
        result = wglMakeCurrent(param0_1, param1_1)
        
        if (result == DISP_CHANGE_SUCCESSFUL)
            result = wglMakeCurrent(nullptr, nullptr)

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
