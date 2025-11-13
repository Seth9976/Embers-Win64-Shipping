// 函数: sub_142401640
// 地址: 0x142401640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_14240d4a0(arg1 + 0x80, arg2)

if (result == 0xffffffff)
    int64_t rdi_1 = sx.q(*(arg1 + 0x88))
    int32_t rax = (rdi_1 + 1).d
    *(arg1 + 0x88) = rax
    
    if (rax s> *(arg1 + 0x8c))
        sub_1405c4ec0(arg1 + 0x80)
    
    result = sub_1423fb8b0(*(arg1 + 0x80) + rdi_1 * 0x28, arg2)

if (arg3 == 0)
    return result

return sub_14240edd0() __tailcall
