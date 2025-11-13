// 函数: sub_140ea39e0
// 地址: 0x140ea39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi_2 = (sx.q(*(arg1 + 0x30)) << 4) + *(arg1 + 0x28)
bool result = arg2:4.d != 0

if ((sub_140b5b8a0(arg2.d, 0) == 0 | result) != 0 && *(rsi_2 - 0x10) != 0)
    int64_t* rax = sub_140d3c6e0(*(arg1 + 8) + 0x38)
    
    if (rax != 0)
        int64_t rdx_1 = *rax
        result = (*(rdx_1 + 0x260))(rax, rdx_1)
    
    if (rax == 0 || result == 0)
        return sub_140ea3860(*(rsi_2 - 0x10), arg2, arg3, arg1)

return result
