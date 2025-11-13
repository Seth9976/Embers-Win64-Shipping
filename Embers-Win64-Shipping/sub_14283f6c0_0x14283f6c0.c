// 函数: sub_14283f6c0
// 地址: 0x14283f6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1 & 0x7f
int512_t result

if ((arg1 & 0x380) != 0)
    result.o = ((arg1 u>> 7 & 7) + 0x7c) << 0x17 | rdx << 0x10
    return result

if (rdx == 0)
    result.o = rdx << 0x10
    return result

int32_t rcx_2 = 1

do
    rcx_2 -= 1
    rdx *= 2
while (rdx.b s>= 0)

result.o = (rcx_2 + 0x7c) << 0x17 | (rdx & 0x7f) << 0x10
return result
