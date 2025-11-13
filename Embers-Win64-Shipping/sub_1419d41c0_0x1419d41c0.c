// 函数: sub_1419d41c0
// 地址: 0x1419d41c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_1419cb2a0(arg3, arg2, arg4)

if (rax == 0)
    return rax

arg1[2].d = arg3
int64_t* rcx_1 = *rax
(*(*rcx_1 + 8))(rcx_1)
AcquireSRWLockExclusive(&arg1[4])
ReleaseSRWLockExclusive(&arg1[4])
int64_t rbx_1 = sx.q(arg1[1].d)
int32_t rax_2 = (rbx_1 + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rbx_1 << 3)) = rax
arg1[3] += sx.q(rax[2].d)
int64_t rax_4
rax_4.b = 1
return rax_4
