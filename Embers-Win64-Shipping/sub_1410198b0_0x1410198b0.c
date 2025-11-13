// 函数: sub_1410198b0
// 地址: 0x1410198b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t rsi = zx.q(arg5)
int512_t zmm0
zmm0.o = 1
int32_t rax_2 = (zmm0.o).q.d
int64_t var_f0 = 0

if ((arg6.b & 8) != 0)
    rax_2 = 4

int32_t var_e0 = 1
int64_t var_d4 = 1
int64_t var_90
var_90.d = rax_2
int128_t zmm1 = 1.o
int128_t zmm2 = rsi.o
int128_t zmm3 = 0x10001:4.o
int128_t var_c0 = zmm1
int128_t var_b0 = zmm2
int128_t var_a0 = zmm3

if (not(test_bit(arg6, 9)))
    var_90.d = rax_2 | 8

int64_t** rax_4 = *(arg1 + 0x20)
zmm0.o = zx.o(var_90)
int128_t var_88 = zmm1
int128_t var_78 = zmm2
int128_t var_68 = zmm3
int64_t var_58 = (zmm0.o).q
uint64_t rax_5
int512_t zmm0_1
rax_5, zmm0_1 = sub_140fff8d0(*rax_4, arg3, &var_88, 4, zmm0, arg4, rsi.d, arg6, arg7)

if (*(rax_5 + 0xd0) != 0)
    *(rax_5 + 0x11) = 0

int32_t var_110_1 = 1
*arg8 = sub_141001e00(arg1, arg3, rax_5, 0, zmm0_1, rsi.d)
*arg2 = rax_5
*(rax_5 + 8) += 1
__security_check_cookie(rax_1 ^ &var_138)
return arg2
