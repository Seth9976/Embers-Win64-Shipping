// 函数: sub_142b57560
// 地址: 0x142b57560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[4]

if (*arg1 == r8)
    int32_t rdx = 2
    
    if (r8 == 8)
        rdx = 4
    
    int64_t rax_1 = sub_142a5da90(&arg1[2], rdx * r8, r8)
    
    if (rax_1 == 0)
        return rax_1

int64_t* rax_2 = j_sub_142a7dd00(0x58)
int64_t* arg_8 = rax_2
int64_t* rdx_3

if (rax_2 == 0)
    rdx_3 = nullptr
else
    rdx_3 = sub_142b579b0(rax_2, *arg2, arg3)

int64_t rax_4 = sx.q(*arg1)
*arg1 = rax_4.d + 1
*(*(arg1 + 8) + (rax_4 << 3)) = rdx_3
return rdx_3
