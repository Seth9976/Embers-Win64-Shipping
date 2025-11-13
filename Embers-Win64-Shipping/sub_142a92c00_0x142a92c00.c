// 函数: sub_142a92c00
// 地址: 0x142a92c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[4]

if (*arg1 == r8)
    int32_t rdx_1 = 2
    
    if (r8 == 8)
        rdx_1 = 4
    
    int64_t rax_1 = sub_142a5da90(&arg1[2], rdx_1 * r8, r8)
    
    if (rax_1 == 0)
        return rax_1

int64_t* rax_2 = j_sub_142a7dd00(0x10)
int64_t* rdx_3 = rax_2

if (rax_2 == 0)
    rdx_3 = nullptr
else
    *rdx_3 = 0
    rdx_3[1] = 0

int64_t rax_3 = sx.q(*arg1)
*arg1 = rax_3.d + 1
*(*(arg1 + 8) + (rax_3 << 3)) = rdx_3
return rdx_3
