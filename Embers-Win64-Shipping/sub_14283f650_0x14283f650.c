// 函数: sub_14283f650
// 地址: 0x14283f650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1 & 0x3f
int512_t result

if ((arg1 & 0x3c0) != 0)
    result.o = ((arg1 u>> 6 & 0xf) + 0x78) << 0x17 | rdx << 0x11
    return result

if (rdx == 0)
    result.o = rdx << 0x11
    return result

int32_t rcx_2 = 1

do
    rcx_2 -= 1
    rdx *= 2
while ((rdx.b & 0x40) == 0)

result.o = (rcx_2 + 0x78) << 0x17 | (rdx & 0x3f) << 0x11
return result
