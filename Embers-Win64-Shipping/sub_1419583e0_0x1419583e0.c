// 函数: sub_1419583e0
// 地址: 0x1419583e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (wglGetCurrentContext() != 0)
    data_143effa18()

HDC param0

if (*(arg1 + 0x68) != 1)
    param0 = *(arg1 + 0x38)
else
    param0 = *(**(arg1 + 0x60) + 8)

BOOL result = wglMakeCurrent(param0, *(arg1 + 0x40))

if (result != 0)
    return result

return wglMakeCurrent(nullptr, nullptr) __tailcall
