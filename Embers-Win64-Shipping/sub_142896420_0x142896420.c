// 函数: sub_142896420
// 地址: 0x142896420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if (*arg1 != *arg2)
    return 0xffffffff

void* rax_2 = *(arg1 + 0x10)

if (rax_2 != 0)
    int64_t r8_1 = *(rax_2 + 0x90)
    
    if (r8_1 != 0)
        jump(r8_1)

return 0xfffffffe
