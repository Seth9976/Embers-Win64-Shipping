// 函数: sub_1404046b0
// 地址: 0x1404046b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
char* rdx_1 = sx.q(*(*(arg1 + 0x88) + ((sx.q(*(arg1 + 8)) * (sx.q(arg3) + 1) + sx.q(arg2)) << 1)))
    + *(arg1 + 0x90)
uint32_t r8 = zx.d(*rdx_1)
int32_t r10_3 = (r8 + 1) s>> 1

if (zx.d(rdx_1[sx.q(r10_3)]) s< arg4 - 1)
    r9 = r10_3
else
    r8 = r10_3

int32_t r10_6 = (r9 + 1 + r8) s>> 1

if (zx.d(rdx_1[sx.q(r10_6)]) s< arg4 - 1)
    r9 = r10_6
else
    r8 = r10_6

int32_t r10_9 = (r9 + 1 + r8) s>> 1

if (zx.d(rdx_1[sx.q(r10_9)]) s< arg4 - 1)
    r9 = r10_9
else
    r8 = r10_9

int32_t r10_12 = (r9 + 1 + r8) s>> 1

if (zx.d(rdx_1[sx.q(r10_12)]) s< arg4 - 1)
    r9 = r10_12
else
    r8 = r10_12

int32_t r10_15 = (r9 + 1 + r8) s>> 1

if (zx.d(rdx_1[sx.q(r10_15)]) s< arg4 - 1)
    r9 = r10_15
else
    r8 = r10_15

int32_t r10_18 = (r9 + 1 + r8) s>> 1

if (zx.d(rdx_1[sx.q(r10_18)]) s< arg4 - 1)
    r9 = r10_18
else
    r8 = r10_18

uint32_t rax_10

if (r9 != 0)
    rax_10 = zx.d(rdx_1[sx.q(r9)])
else
    rax_10 = -1

if (arg4 - 1 - rax_10 s<= zx.d(rdx_1[sx.q(r8)]) - (arg4 - 1))
    r8 = r9

return zx.q(r8)
