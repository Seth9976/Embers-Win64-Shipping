// 函数: sub_1423937c0
// 地址: 0x1423937c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x200)
int512_t zmm1
zmm1.o = data_142d3f800
int64_t* rcx = data_143f0f180
int128_t var_48
__builtin_memset(&var_48, 0xff, 0x20)
int64_t var_18 = 0
int64_t var_28 = (zx.o(0)).q
int32_t var_10 = 0
(*(*rcx + 0x1f0))(zx.o(0), &var_48)

if (var_18 s<= 0 || arg2 != 0 || *(arg1 + 0x1d6) != 0)
    *(rbx + 0xf8) = var_28
    *(rbx + 0x100) = 0x7fffffffffffffff
    *(rbx + 0x108) = 0x3fffffffffffffff
    *(rbx + 0xf0) = 0
    *(rbx + 0x110) = 0
else
    int64_t rdx_1 = *(arg1 + 0x360)
    *(rbx + 0x108) = sx.q(*(arg1 + 0x1b4)) << 0x14
    int128_t var_38
    *(rbx + 0xf0) = var_38:8.q
    *(rbx + 0xf8) = var_28
    *(rbx + 0x100) = var_18
    *(rbx + 0x110) = rdx_1

*(rbx + 0xe8) = 0
int64_t rsi_1 = sx.q(data_143f3c520)
int64_t rbp = data_143f3c518
int64_t var_58 = 0
int32_t var_50 = rsi_1.d

if (rsi_1.d != 0)
    sub_1407751d0(&var_58, rsi_1.d, 0)
    memcpy(var_58, rbp, (rsi_1 * 0x28).d)
else
    int32_t var_4c_1 = 0

void* var_68 = arg1 + 0x210
sub_1423916e0(rbx + 8, &var_58, *(arg1 + 0x384), arg1 + 0x340)
int32_t result = *(arg1 + 0x384)
*(arg1 + 0x388) = result
return result
