// 函数: sub_140cf02e0
// 地址: 0x140cf02e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(*arg3 + 8)
int64_t* r8 = rcx[1]
int64_t* r10 = *r8
int64_t arg_8

if (&r10[1] u> r8[1])
    int64_t* rdx = &arg_8
    
    if ((*(rcx + 0x29) & 0x20) != 0)
        sub_140b540d0(rcx, rdx, arg6)
    else
        (*(*rcx + 0x150))(arg5, rdx, 8)
else
    arg_8 = *r10
    int64_t* rax_3 = rcx[1]
    *rax_3 += 8

int64_t rax_5 = arg_8
arg5 = float.d(rax_5)

if (rax_5 s< 0)
    arg5 = arg5 f+ 1.8446744073709552e+19

*(sx.q(*(arg2 + 0x4c)) + sx.q(*(arg2 + 0x3c) * *(arg7 + 0x40)) + arg4) = arg5
return arg1
