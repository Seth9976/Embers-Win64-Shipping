// 函数: sub_1425eaa50
// 地址: 0x1425eaa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0)
    return 7

int32_t rax = sub_1425ec4c0(arg1)
int32_t rsi = rax

if (rax == 0)
    int64_t rbx_1 = -1
    bool cond:0_1
    
    do
        cond:0_1 = arg2[rbx_1 + 1] != 0
        rbx_1 += 1
    while (cond:0_1)
    *arg1 = 0xa
    char* _Destination = CoTaskMemAlloc(rbx_1 + 1)
    *(arg1 + 8) = _Destination
    
    if (_Destination != 0)
        strncpy(_Destination, arg2, rbx_1 + 1)
        return zx.q(rsi)
    
    rsi = 6

return zx.q(rsi)
