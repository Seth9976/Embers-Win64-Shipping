// 函数: sub_141955be0
// 地址: 0x141955be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f01c74 == 0)
    int128_t zmm1 = data_142ffb0b0
    WNDCLASSW wndClass
    wndClass.lpfnWndProc = DefWindowProcW
    wndClass.hIcon = 0
    wndClass.hCursor = 0
    wndClass.hbrBackground = zmm1.q
    wndClass.lpszMenuName = zmm1:8.q
    data_143f01c74 = 1
    wndClass.style.q = 0x20
    wndClass.cbClsExtra = 0
    wndClass.cbWndExtra = 0
    wndClass.hInstance = 0
    wndClass.lpszClassName = u"DummyGLWindow"
    RegisterClassW(&wndClass)

int32_t X = 0
int32_t Y = 0
sub_140af2b60()
sub_140b2ab20(&data_143dbb3f0, u"WinX=", &X)
sub_140af2b60()
sub_140b2ab20(&data_143dbb3f0, u"WinY=", &Y)
HWND hWnd = CreateWindowExW(WS_EX_WINDOWEDGE, DummyGLWindow", nullptr, WS_POPUP, X, Y, 1, 1, 
    nullptr, nullptr, nullptr, nullptr)
*arg1 = hWnd
arg1[3].b = 1
HDC rax_2
int64_t rdx
rax_2, rdx = GetDC(hWnd)
arg1[1] = rax_2
rdx.b = 1
return sub_141957e70(rax_2)
