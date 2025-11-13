// 函数: sub_142af0120
// 地址: 0x142af0120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 8)

if (*result s> 0 && arg2 != 7)
    return result

*result = arg2

if (*(arg1 + 0x30) s<= 0x7fffffff)
    bool cond:0_1 = *(arg1 + 0x38) s<= 0x7fffffff
    **(arg1 + 0x18) = *(arg1 + 0x30)
    
    if (cond:0_1)
        *(*(arg1 + 0x18) + 4) = *(arg1 + 0x38)
    else
        *(*(arg1 + 0x18) + 4) = 0xffffffff
else
    **(arg1 + 0x18) = 0
    *(*(arg1 + 0x18) + 4) = 0xffffffff

int64_t rax_5 = *(arg1 + 0x18)
int32_t arg_8 = 0
__builtin_memset(rax_5 + 8, 0, 0x40)
*(arg1 + 0x18)
int64_t r8_1 = *(arg1 + 0x20)
sub_142aea690(*(*(arg1 + 0x10) + 8), r8_1 - 0xf, r8_1, *(arg1 + 0x18) + 8, 0x10, &arg_8)
int64_t rdx_1 = *(arg1 + 0x20)
return sub_142aea690(*(*(arg1 + 0x10) + 8), rdx_1, rdx_1 + 0xf, *(arg1 + 0x18) + 0x28, 0x10, &arg_8)
