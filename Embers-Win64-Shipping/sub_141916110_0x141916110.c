// 函数: sub_141916110
// 地址: 0x141916110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(*(arg2 + 0x2c))
uint64_t rsi = zx.q(arg3)
uint64_t rcx
int16_t* rbx_1

if (r10 == 0)
    rcx = 0
    rbx_1 = 0x80a
label_14191618e:
    sub_1405d16e0(arg1 + ((rsi + 0xad + rcx) << 3), arg4)
    *(rbx_1 + arg1) |= (1 << (rsi.d u% 0x20)).w
    *(arg1 + 0x808) = 1
    return 

if (r10 == 1)
    rcx = 0xe
    rbx_1 = 0x80c
    goto label_14191618e

if (r10 == 2)
    rcx = 0x1c
    rbx_1 = 0x80e
    goto label_14191618e

if (r10 == 3)
    rcx = 0x2a
    rbx_1 = 0x810
    goto label_14191618e

if (r10 != 4)
    return 

rcx = zx.q(r10 + 0x34)
rbx_1 = 0x812
goto label_14191618e
