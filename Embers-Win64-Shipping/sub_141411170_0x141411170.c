// 函数: sub_141411170
// 地址: 0x141411170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x18)
*(arg1 + 0x18) = arg3
*(arg1 + 0x1c) = 0
void arg_8
void arg_10
void* const rax
void* rcx
int32_t rdx
int32_t rdi

if (arg2 == 0)
    rcx = &arg_8
    rax = nullptr
    rdi = 0
    rdx = 2
else
    rax = *(arg2 + 0x130)
    
    if (rax != 0)
        *(rax + 8) += 1
    
    rcx = &arg_10
    rdi = 1
    rdx = 0

*(arg1 + 0x20) = rax
*rcx = 0

if (rdx != 0)
    sub_1405d1550(&arg_8, rdx)

if (rdi != 0)
    sub_1405d1550(&arg_10)

return arg1
