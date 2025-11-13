// 函数: sub_14236b9b0
// 地址: 0x14236b9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)
sub_142361e40(arg1)

if (r14.d s< arg1[0xa].d)
    int32_t rbp_1 = arg1[0xa].d
    arg1[0xa].d = rbp_1 + 1
    
    if (rbp_1 + 1 s> *(arg1 + 0x54))
        sub_1405a4cf0(&arg1[9])
    
    int64_t rbx_1 = r14 << 2
    int64_t rdx_3 = arg1[9] + rbx_1
    memmove(rdx_3 + 4, rdx_3, (rbp_1 - r14.d) << 2)
    *(rbx_1 + arg1[9]) = 1
else
    int64_t rbx = sx.q(arg1[0xa].d)
    int32_t rax = (rbx + 1).d
    arg1[0xa].d = rax
    
    if (rax s> *(arg1 + 0x54))
        sub_1405a4cf0(&arg1[9])
    
    *(arg1[9] + (rbx << 2)) = 1

return sub_14236b800(arg1, r14.d) __tailcall
