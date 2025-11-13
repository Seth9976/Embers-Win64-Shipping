// 函数: sub_1427e6bb0
// 地址: 0x1427e6bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (arg2 u> (*(arg1 + 0x54) & 0x7fffffff))
    sub_1427e62e0(arg1, zx.q(rdi.d))

int64_t r9 = *(arg1 + 0x48)
int64_t rdx_1 = r9 + (rdi << 3)
int64_t* i = r9 + (zx.q(*(arg1 + 0x50)) << 3)
int64_t rax_3 = 0

if (*arg3 != 0)
    for (; i u< rdx_1; i = &i[1])
        if (i != 0)
            rax_3 = *arg3
            *i = rax_3
else if (rdx_1 u> i)
    int64_t rax_4 = memset(i, 0, zx.q(rdx_1.d - i.d) & 0xfffffff8)
    *(arg1 + 0x50) = rdi.d
    return rax_4

*(arg1 + 0x50) = rdi.d
return rax_3
