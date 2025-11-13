// 函数: sub_1421b0a60
// 地址: 0x1421b0a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg3 + 0xa8)

if (rax == 0)
    rax = sub_141ee69e0(arg3)

void*** result = nullptr

if (*(rax + 0x1b0) != 0 && data_143a2ecfc != 0 && data_1439c7a6a != 0 && data_1439c7a18 != 0
        && data_1439c88a8 != 0 && data_1439c7a17 != 0 && data_1439c7a0c != 0)
    int64_t rsi_1 = *(arg3 + 0x588)
    void*** rax_1 = j_sub_140a82f30(0x2a0)
    
    if (rax_1 != 0)
        result = sub_1421a8c00(rax_1, rsi_1, arg1 + 0x30)
    
    (*result)[1](result, arg2, arg3)

return result
