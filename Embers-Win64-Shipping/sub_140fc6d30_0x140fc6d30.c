// 函数: sub_140fc6d30
// 地址: 0x140fc6d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

int32_t rcx_3 = (zx.d(arg2) u>> 1 & 1) << 2
int32_t rdx_1 = rcx_3 | 8

if ((arg2.b u>> 2 & 1) == 0)
    rdx_1 = rcx_3

int32_t rcx_5 = rdx_1 | 0x400

if ((arg2.b u>> 3 & 1) == 0)
    rcx_5 = rdx_1

int32_t rdx_3 = rcx_5 | 1

if ((arg2.b u>> 4 & 1) == 0)
    rdx_3 = rcx_5

int32_t rcx_7 = rdx_3 | 0x800

if ((arg2.b u>> 7 & 1) == 0)
    rcx_7 = rdx_3

int32_t rdx_5 = rcx_7 | 0x100

if ((arg2.b & 1) == 0)
    rdx_5 = rcx_7

int32_t rcx_9 = rdx_5 | 2

if ((arg2.b u>> 5 & 1) == 0)
    rcx_9 = rdx_5

int16_t r8
r8.b = arg2.b u>> 6
r8.b &= 1

if (r8.b == 0)
    return zx.q(rcx_9)

return zx.q(rcx_9) | 0x20000
