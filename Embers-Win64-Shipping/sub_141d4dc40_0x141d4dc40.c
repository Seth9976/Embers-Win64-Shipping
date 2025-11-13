// 函数: sub_141d4dc40
// 地址: 0x141d4dc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx == 0)
    *arg2 = 0
    return arg2

int64_t* rax_1 = (*(*rcx + 0x10))(rcx)
int64_t r8 = *rax_1
void arg_8
*arg2 = *(*(r8 + 8))(rax_1, &arg_8, r8)
return arg2
