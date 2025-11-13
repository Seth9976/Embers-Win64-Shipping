// 函数: sub_140a35810
// 地址: 0x140a35810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_1 = arg1[1].d
int64_t i = 0
int64_t r9 = *arg1
int32_t rcx = rdx_1 - 1

if (rdx_1 == 0)
    rcx = 0

if (rcx s> 0)
    do
        uint32_t rdx = zx.d(*(r9 + (i << 1)))
        int32_t rcx_1
        rcx_1.w = sbb.w((rdx - 0x41).w, (rdx - 0x41).w, rdx - 0x41 u< 0x1a)
        rcx_1.w &= 0x20
        rcx_1.w += rdx.w
        *(r9 + (i << 1)) = rcx_1.w
        i += 1
    while (i s< sx.q(rcx))

return i
