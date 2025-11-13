// 函数: sub_140d34e00
// 地址: 0x140d34e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = *(arg2 + 0x20)
int512_t zmm0
zmm0.o = zx.o(0)
int128_t var_18 = zx.o(0)
uint32_t r9 = zx.d(*rax)
*(arg2 + 0x20) = &rax[1]
int64_t result = (&data_143e1cd60)[zx.q(r9)](zmm0, arg4, &var_18, &data_143e1cd60, var_18)

if (arg3 != 0)
    result = var_18.q
    *arg3 = result

return result
