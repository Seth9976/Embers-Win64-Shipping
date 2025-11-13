// 函数: sub_140a17dd0
// 地址: 0x140a17dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x58)
void arg_8
void arg_10
void* const rax_1
void* rcx
int32_t rdx
int32_t rdi

if (rax == 0)
    rax_1 = nullptr
    rcx = &arg_8
    rdi = 0
    rdx = 2
else
    rax_1 = *(rax + 8)
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    rcx = &arg_10
    rdi = 1
    rdx = 0

*arg2 = rax_1
*rcx = 0

if (rdx != 0)
    sub_1405d1550(&arg_8, rdx)

if (rdi != 0)
    sub_1405d1550(&arg_10)

return arg2
