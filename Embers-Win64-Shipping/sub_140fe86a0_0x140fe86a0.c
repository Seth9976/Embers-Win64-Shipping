// 函数: sub_140fe86a0
// 地址: 0x140fe86a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg1)
int32_t rdx
bool z

rdx = z ? 0x20 : 0x1f - temp0_1

int32_t rdx_2 = rdx << 0x1a s>> 0x1f
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg1 - 1)

if (rdx_2 == 0)
    return 0

return zx.q(0x20 - (0x1f - temp0)) & zx.q(not.d(rdx_2))
