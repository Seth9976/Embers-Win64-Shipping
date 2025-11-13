// 函数: sub_140a35a10
// 地址: 0x140a35a10
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
        rcx_1.w = sbb.w((rdx - 0x61).w, (rdx - 0x61).w, rdx - 0x61 u< 0x1a)
        rcx_1.w &= 0x20
        rdx.w -= rcx_1.w
        *(r9 + (i << 1)) = rdx.w
        i += 1
    while (i s< sx.q(rcx))

return i
