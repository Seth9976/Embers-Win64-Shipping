// 函数: sub_142063a80
// 地址: 0x142063a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)
void* rsi_2 = (r14 << 6) + *arg1
uint64_t result

if (arg3 == arg4)
    result.b = 1
    return result

int32_t i = *(rsi_2 + 0xc)

if (i s< 0)
    result.b = 0
    return result

int64_t rdi
rdi.b = 0

for (; i s<= *(rsi_2 + 0x1c); i += 1)
    if (sub_142063a80(arg1, zx.q(i), zx.q(arg3), zx.q(arg4 + 1), r14.d) != 0 || rdi.b != 0)
        rdi.b = 1

return zx.q(rdi.b)
