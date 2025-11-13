// 函数: sub_142809c40
// 地址: 0x142809c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x10)
uint64_t r10_1 = zx.q(arg2) * 2
uint64_t r11 = zx.q(arg2)
int32_t* rcx = rax + (r10_1 << 3)

if (rcx != 0)
    int32_t* r8_3 = (zx.q(*(arg1 + 0x3c)) << 4) + rax
    *rcx = *r8_3
    *(rcx + 8) = *(r8_3 + 8)

int64_t rdx = *(arg1 + 0x18)
*(rdx + (r11 << 2)) = *(rdx + (zx.q(*(arg1 + 0x3c)) << 2))
int32_t rcx_2 = *(*(arg1 + 0x10) + (r10_1 << 3))
int32_t r10_2 = *(arg1 + 0x3c)
int32_t rcx_3 = rcx_2 + not.d(rcx_2 << 0xf)
uint32_t rcx_4 = ((zx.q(rcx_3 u>> 0xa) ^ zx.q(rcx_3)) * 9).d
uint32_t rcx_5 = rcx_4 ^ rcx_4 u>> 6
uint64_t rax_16 = zx.q(not.d(rcx_5 << 0xb) + rcx_5)
int64_t rax_17 = *(arg1 + 0x20)
uint64_t rdx_4 = (zx.q(rax_16.d) u>> 0x10 ^ rax_16) & zx.q(*(arg1 + 0x2c) - 1)
int32_t result = *(rax_17 + (rdx_4 << 2))

if (result == r10_2)
    *(rax_17 + (rdx_4 << 2)) = r11.d
    return result

int64_t r8_4 = *(arg1 + 0x18)
uint64_t result_1

do
    result_1 = zx.q(result)
    result = *(r8_4 + (result_1 << 2))
while (result != r10_2)

*(r8_4 + (result_1 << 2)) = r11.d
return result
