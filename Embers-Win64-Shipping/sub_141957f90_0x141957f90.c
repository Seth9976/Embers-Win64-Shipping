// 函数: sub_141957f90
// 地址: 0x141957f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HDC result = wglGetCurrentDC()

if (result != 0)
    result = wglMakeCurrent(nullptr, nullptr)
    
    if (result.d == 0)
        return wglMakeCurrent(nullptr, nullptr) __tailcall

return result
