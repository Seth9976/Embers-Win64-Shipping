// 函数: sub_141fa5000
// 地址: 0x141fa5000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int64_t rax_1 = (*(*arg2 + 0x20))(arg2)
int64_t* rcx_1 = *arg1
arg1[1] = rax_1
int64_t arg_8 = 0
int64_t* rdx = rcx_1[1]
int64_t* r8 = *rdx

if (&r8[1] u<= rdx[1])
    arg_8 = *r8
    int64_t* rax_4 = rcx_1[1]
    *rax_4 += 8
    return arg1

int64_t* rdx_1 = &arg_8

if ((*(rcx_1 + 0x29) & 0x20) != 0)
    sub_140b540d0(rcx_1, rdx_1, arg4)
    return arg1

(*(*rcx_1 + 0x150))(arg3, rdx_1, 8)
return arg1
