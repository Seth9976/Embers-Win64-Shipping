// 函数: sub_141c4d870
// 地址: 0x141c4d870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1 + 0x38
__builtin_memset(arg1, 0, 0x50)
int64_t i_1 = 2
int32_t r14_1 = arg3 * arg4
*(arg1 + 0x50) = 1
*(arg1 + 0x54) = arg3
*(arg1 + 0x58) = arg4
*(arg1 + 0x60) = arg2
int64_t i

do
    int32_t rax_1 = rbx[1]
    int32_t rdi_1 = 0
    *rbx = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_1405dadb0(&rbx[-2], 0)
        rdi_1 = *rbx
    
    int32_t rax_2 = rdi_1 + r14_1
    *rbx = rax_2
    
    if (rax_2 s> rbx[1])
        sub_1406105e0(&rbx[-2])
    
    memset(*(rbx - 8) + (sx.q(rdi_1) << 2), 0, sx.q(r14_1) << 2)
    rbx = &rbx[4]
    i = i_1
    i_1 -= 1
while (i != 1)
return arg1
