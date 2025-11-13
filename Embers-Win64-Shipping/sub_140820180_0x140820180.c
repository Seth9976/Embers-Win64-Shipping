// 函数: sub_140820180
// 地址: 0x140820180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int64_t count = sx.q(arg2)
int32_t r8 = (rdi + count).d
arg1[1].d = r8

if (r8 s> *(arg1 + 0xc))
    sub_1405daba0(arg1)

memset(rdi + *arg1, 0, count)
return zx.q(rdi.d)
