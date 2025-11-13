// 函数: sub_1426e6da0
// 地址: 0x1426e6da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140ce3290(arg1)
int32_t rdx = *(arg1 + 0xac)

if (test_bit(rdx, 8))
    int32_t rdx_1 = rdx & 0xfffffeff
    result = rdx_1 & 0xffffff9f
    rdx = (rdx_1 u>> 2 & 0x20) | result
    *(arg1 + 0xac) = rdx

uint64_t rcx = zx.q(arg1[0x16].d)

if ((rcx.b & 4) == 0)
    result = (((rcx << 3).d ^ rdx) & 0x18) ^ rdx
    *(arg1 + 0xac) = result
    arg1[0x16].d = rcx.d | 4

return result
