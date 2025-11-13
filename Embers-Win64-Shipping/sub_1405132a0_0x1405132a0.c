// 函数: sub_1405132a0
// 地址: 0x1405132a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(7)
int32_t rax
bool z

rax = z ? 0x20 : 0x1f - temp0

int32_t rax_2 = rax << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(6)

if (rax_2 == 0)
    data_143f3ab20 = 0
    return zx.q(not.d(rax_2))

int32_t result = not.d(rax_2)
data_143f3ab20 = (0x20 - (0x1f - temp0_1)) & result
return result
