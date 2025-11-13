// 函数: sub_1426ab050
// 地址: 0x1426ab050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
uint64_t r8_1

if (arg1[0xc].b != 0)
    int64_t rax_1 = *(arg1 + 8)
    r8_1 = zx.q(arg2.b)
    *(r8_1 + rax_1) -= 1
    result = *(arg1 + 8)

if (arg1[0xc].b == 0 || *(r8_1 + result) == 0)
    result = zx.q(*arg1) & zx.q(not.d(1 << (arg2 u% 0x20)))
    *arg1 = result.w

return result
