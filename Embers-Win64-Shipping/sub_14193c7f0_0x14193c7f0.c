// 函数: sub_14193c7f0
// 地址: 0x14193c7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx_1 = *(arg1 + 0x60) u>> arg2
int64_t r8 = sx.q(*(arg1 + 0x3c)) * 5
uint32_t r10_1 = *(arg1 + 0x64) u>> arg2
uint32_t rdi = *((r8 << 3) + &data_1439c85ec)
uint32_t rbx = *((r8 << 3) + 0x1439c85e8)
int32_t rsi = (&data_1439c85f4)[r8 * 2]
uint32_t rax_1 = rbx

if (rdx_1 u>= rbx)
    rax_1 = rdx_1

uint32_t temp0 = divu.dp.d(0:(rax_1 - 1 + rbx), rbx)
*arg3 = temp0 * rsi
uint32_t rcx_2 = rdi

if (r10_1 u>= rdi)
    rcx_2 = r10_1

return zx.q(divu.dp.d(0:(rdi - 1 + rcx_2), rdi) * temp0 * rsi)
