// 函数: sub_141123c40
// 地址: 0x141123c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2)
void* rcx_1 = result * 0x58 + arg1

if (*(rcx_1 + 0x50) != 0)
    *(rcx_1 + 0x50) = 0
    bool cond:0_1 = *(rcx_1 + 0x4c) == 0
    *(rcx_1 + 0x48) = 0
    
    if (not(cond:0_1))
        result = sub_140775b80(rcx_1, 0)
    
    *(arg1 + 0x160) -= 1

return result
