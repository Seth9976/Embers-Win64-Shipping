// 函数: sub_142bfd560
// 地址: 0x142bfd560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
void* rax = sub_142bfd9f0(arg3, &var_38, zx.d(*arg1))
void var_20
void* rax_1 = sub_142bfd9f0(arg3, &var_20, zx.d(*arg2))
uint64_t count = zx.q(*(rax_1 + 0x10))
int32_t rax_2 = *(rax + 0x10)

if (count.d != rax_2)
    return zx.q(rax_2 - count.d)

if (count.d != 0)
    return memcmp(*(rax + 8), *(rax_1 + 8), count)

return 0
