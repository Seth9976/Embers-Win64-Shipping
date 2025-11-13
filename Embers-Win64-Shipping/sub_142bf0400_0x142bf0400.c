// 函数: sub_142bf0400
// 地址: 0x142bf0400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg3 + 0x88)
int32_t arg_18 = 0

if (sub_142b993e0(arg1, arg3 + 0xa0) != 0)
    return arg_18

int32_t r8 = *(arg3 + 0x98)
int64_t rax_2 = sub_142b99a90(rbp, 0x18, r8, r8 + 1, *(arg3 + 0x90), &arg_18)
*(arg3 + 0x90) = rax_2
int32_t rax_3 = arg_18

if (rax_3 == 0)
    int64_t rbx_1 = -1
    int64_t* r14_1 = rax_2 + zx.q(*(arg3 + 0x98)) * 0x18
    __builtin_memset(r14_1, 0, 0x18)
    
    do
        rbx_1 += 1
    while (arg1[rbx_1] != 0)
    
    if (rbx_1 + 1 u> 0xffffffff)
        return 6
    
    int64_t rax_4 = sub_142b99a90(rbp, 1, 0, (rbx_1 + 1).d, 0, &arg_18)
    *r14_1 = rax_4
    rax_3 = arg_18
    
    if (rax_3 == 0)
        memcpy(rax_4, arg1, (rbx_1 + 1).d)
        int64_t rcx_4 = *r14_1
        r14_1[1].d = arg2
        *(r14_1 + 0xc) = 0
        rax_3 = j_sub_142b9a810(rcx_4, zx.q(*(arg3 + 0x98) + 0x53), arg3 + 0xa0, rbp)
        
        if (rax_3 == 0)
            *(arg3 + 0x98) += 1

return rax_3
