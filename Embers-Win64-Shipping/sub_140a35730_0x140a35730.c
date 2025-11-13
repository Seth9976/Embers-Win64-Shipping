// 函数: sub_140a35730
// 地址: 0x140a35730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg2, arg1)
int32_t r8 = arg2[1].d
int64_t i = 0
int64_t r9 = *arg2
int32_t rcx_1 = r8 - 1

if (r8 == 0)
    rcx_1 = 0

if (rcx_1 s> 0)
    do
        uint32_t rdx_1 = zx.d(*(r9 + (i << 1)))
        int32_t rcx_2
        rcx_2.w = sbb.w((rdx_1 - 0x41).w, (rdx_1 - 0x41).w, rdx_1 - 0x41 u< 0x1a)
        rcx_2.w &= 0x20
        rcx_2.w += rdx_1.w
        *(r9 + (i << 1)) = rcx_2.w
        i += 1
    while (i s< sx.q(rcx_1))

return arg2
