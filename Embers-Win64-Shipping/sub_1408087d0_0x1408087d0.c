// 函数: sub_1408087d0
// 地址: 0x1408087d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x98) = 0
*(arg1 + 0xa0) = 0
*(arg1 + 0x48) = 0

if (*(arg1 + 0x4c) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0x40, 0)

*(arg1 + 0x50) = 0
*(arg1 + 0x54) = 0xffffffff
int32_t rax = *(arg1 + 0x6c)
*(arg1 + 0x68) = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(arg1 + 0x60, 0)

sub_1407e7150(arg1, 1)
void* rcx_3 = *(arg1 + 0xa0)
uint64_t result = 0xffffffff

if (0xffffffff == *(rcx_3 + 8))
    *(rcx_3 + 8) = 0
else
    result = zx.q(*(rcx_3 + 8))

*(arg1 + 0x98) = *(arg1 + 0xa0)
*(arg1 + 0xa0) = 0
return result
