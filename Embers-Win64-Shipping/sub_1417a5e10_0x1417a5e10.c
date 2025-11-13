// 函数: sub_1417a5e10
// 地址: 0x1417a5e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[3].d != 0)
    int64_t r9 = sx.q(arg1[3].d)
    uint64_t rbx = zx.q(*(arg1[2] + (r9 << 1) - 2))
    arg1[3].d = (r9 - 1).d
    sub_1405a50a0(&arg1[2])
    *(*arg1 + (rbx << 3)) = *arg2
    return zx.q(rbx.d)

int64_t rbx_1 = sx.q(arg1[1].d)
int32_t rax_4 = (rbx_1 + 1).d
arg1[1].d = rax_4

if (rax_4 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rbx_1 << 3)) = *arg2
return zx.q(rbx_1.w)
