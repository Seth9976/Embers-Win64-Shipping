// 函数: sub_142a92b80
// 地址: 0x142a92b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[4]

if (*arg1 == r8)
    int32_t rdx_1 = 2
    
    if (r8 == 8)
        rdx_1 = 4
    
    int64_t rax_1 = sub_142a5da90(&arg1[2], rdx_1 * r8, r8)
    
    if (rax_1 == 0)
        return rax_1

int64_t rax_2 = j_sub_142a7dd00(0x20)
int64_t arg_8 = rax_2

if (rax_2 != 0)
    __builtin_memset(rax_2, 0, 0x20)

int64_t rcx_1 = sx.q(*arg1)
*arg1 = rcx_1.d + 1
*(*(arg1 + 8) + (rcx_1 << 3)) = rax_2
return rax_2
