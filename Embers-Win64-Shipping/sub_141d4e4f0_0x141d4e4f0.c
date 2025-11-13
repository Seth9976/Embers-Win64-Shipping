// 函数: sub_141d4e4f0
// 地址: 0x141d4e4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx == 0)
    *arg2 = 0
    return arg2

int64_t* rax_2 = (*(*rcx + 0x10))(rcx)
int64_t r8 = *rax_2
void arg_8
int64_t rcx_2 = *(*(r8 + 0x30))(rax_2, &arg_8, r8)
int64_t rax_4 = 0

if (rcx_2 - *(arg1 + 0x30) s>= 0)
    rax_4 = rcx_2 - *(arg1 + 0x30)

*arg2 = rax_4
return arg2
