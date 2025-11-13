// 函数: sub_1427e6a90
// 地址: 0x1427e6a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (arg2 u> (*(arg1 + 0x21c) & 0x7fffffff))
    sub_1427e6120(arg1, zx.q(rdi.d))

int64_t r9 = arg1[0x42]
int64_t rdx_1 = r9 + (rdi << 3)
int64_t* i = r9 + (zx.q(arg1[0x43].d) << 3)
int64_t result = 0

if (*arg3 != 0)
    for (; i u< rdx_1; i = &i[1])
        if (i != 0)
            result = *arg3
            *i = result
else if (rdx_1 u> i)
    result = memset(i, 0, zx.q(rdx_1.d - i.d) & 0xfffffff8)

arg1[0x43].d = rdi.d
return result
