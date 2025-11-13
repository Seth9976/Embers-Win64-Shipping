// 函数: sub_141952200
// 地址: 0x141952200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe].b = 1
CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x28)
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)

arg1[0xf] = lpCriticalSection_1
data_143eff974 = data_143effa98(0x6789) != 0
sub_141955be0(arg1)
sub_141955d20(arg1, 4, 3, 0)
HDC param0_4 = wglGetCurrentDC()
HGLRC param1_4 = wglGetCurrentContext()
HDC param0_3 = arg1[1]
HGLRC param1 = arg1[2]

if (param1_4 != param1 || param0_4 != param0_3)
    if (wglMakeCurrent(param0_3, param1) == 0)
        wglMakeCurrent(nullptr, nullptr)
else
    rsi = 1

sub_14190e1c0()
data_143f00198(1, arg1 + 0x24)
data_143f001a8(zx.q(*(arg1 + 0x24)))
sub_14190e2d0()
data_143f00108(1, &arg1[4])

if (rsi == 0)
    HDC param0
    HGLRC param1_1
    
    if (param1_4 == 0)
        param1_1 = nullptr
        param0 = nullptr
    else
        param1_1 = param1_4
        param0 = param0_4
    
    if (wglMakeCurrent(param0, param1_1) == 0)
        wglMakeCurrent(nullptr, nullptr)

sub_141955be0(&arg1[6])
sub_141955d20(&arg1[6], 4, 3, arg1[2])
HDC param0_5 = wglGetCurrentDC()
HGLRC param1_5 = wglGetCurrentContext()
HDC param0_1 = arg1[7]
HGLRC param1_2 = arg1[8]
HGLRC rbp

if (param1_5 != param1_2 || param0_5 != param0_1)
    rbp.b = 0
    
    if (wglMakeCurrent(param0_1, param1_2) == 0)
        wglMakeCurrent(nullptr, nullptr)
else
    rbp.b = 1

sub_14190e1c0()
data_143f00198(1, arg1 + 0x54)
data_143f001a8(zx.q(*(arg1 + 0x54)))
sub_14190e2d0()
data_143f00108(1, &arg1[0xa])

if (rbp.b == 0)
    HDC param0_2
    HGLRC param1_3
    
    if (param1_5 == 0)
        param1_3 = nullptr
        param0_2 = nullptr
    else
        param1_3 = param1_5
        param0_2 = param0_5
    
    if (wglMakeCurrent(param0_2, param1_3) == 0)
        wglMakeCurrent(nullptr, nullptr)

if (wglMakeCurrent(arg1[1], arg1[2]) == 0)
    wglMakeCurrent(nullptr, nullptr)

return arg1
