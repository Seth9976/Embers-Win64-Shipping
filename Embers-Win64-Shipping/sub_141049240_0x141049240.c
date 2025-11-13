// 函数: sub_141049240
// 地址: 0x141049240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint64_t r11 = zx.q(arg5)
int512_t zmm0
zmm0.o = 1
int32_t rax_2 = (zmm0.o).q.d
int64_t var_d0 = 0

if (not(test_bit(arg6, 9)))
    rax_2 = 8

int32_t var_c0 = 1
int64_t var_b4 = 1
int64_t var_70
var_70.d = rax_2
int128_t zmm1 = 1.o
int128_t zmm2 = r11.o
int128_t zmm3 = 0x10001:4.o
int128_t var_a0 = zmm1
int128_t var_90 = zmm2
int128_t var_80 = zmm3

if ((8 & arg6.b) != 0)
    var_70.d = rax_2 | 4

int64_t** rax_4 = *(arg1 + 0x20)
zmm0.o = zx.o(var_70)
int32_t r9 = 4

if ((arg6 & 0x120) == 0)
    r9 = arg4

int128_t var_68 = zmm1
int128_t var_58 = zmm2
int128_t var_48 = zmm3
int64_t var_38 = (zmm0.o).q
uint64_t rax_5 = sub_140fffee0(*rax_4, arg3, &var_68, r9, zmm0, arg4, r11.d, arg6, arg7)

if (*(rax_5 + 0xd0) != 0)
    *(rax_5 + 0x11) = 0

*arg2 = rax_5
*(rax_5 + 8) += 1
__security_check_cookie(rax_1 ^ &var_118)
return arg2
