// 函数: sub_1425eab10
// 地址: 0x1425eab10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 7

int32_t rax = sub_1425ec4c0(arg1)
int32_t rsi = rax

if (rax == 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    *arg1 = 0xb
    wchar16* _Destination = CoTaskMemAlloc((rbx_1 + 1) * 2)
    *(arg1 + 8) = _Destination
    
    if (_Destination != 0)
        wcsncpy(_Destination, arg2, rbx_1 + 1)
        return zx.q(rsi)
    
    rsi = 6

return zx.q(rsi)
