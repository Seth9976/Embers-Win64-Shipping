// 函数: sub_140cacde0
// 地址: 0x140cacde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int64_t* rax = sub_140cc3cb0(arg6)
int64_t* rcx_1 = rax

if (rax == 0)
    int64_t* rax_1 = j_sub_140a82f30(zx.q((&rax[4]).d))
    rcx_1 = rax_1
    
    if (rax_1 == 0)
        rcx_1 = rax_1
    else
        __builtin_memset(rcx_1, 0, 0x20)

arg1[2] = arg6
int64_t rdi_1 = sx.q(arg5)
arg1[1] = rcx_1
int32_t rax_2 = rcx_1[1].d + rdi_1.d
rcx_1[1].d = rax_2

if (rax_2 s> *(rcx_1 + 0xc))
    sub_1405a4d70(rcx_1)

memcpy(*arg1[1], *arg3 + (sx.q(arg4) << 3), (rdi_1 << 3).d)
return arg1
