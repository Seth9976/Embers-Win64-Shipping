// 函数: sub_1410539f0
// 地址: 0x1410539f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t r10 = zx.q(arg4)
int512_t zmm0
zmm0.o = 1
int32_t rax_2 = (zmm0.o).q.d
int64_t var_c0 = 0

if (not(test_bit(arg5, 9)))
    rax_2 = 8

int32_t var_b0 = 1
int64_t var_a4 = 1
int64_t var_60
var_60.d = rax_2
int128_t zmm1 = 1.o
int128_t zmm2 = r10.o
int128_t zmm3 = 0x10001:4.o
int128_t var_90 = zmm1
int128_t var_80 = zmm2
int128_t var_70 = zmm3

if ((8 & arg5.b) != 0)
    var_60.d = rax_2 | 4

int64_t** rax_4 = *(arg1 + 0x20)
zmm0.o = zx.o(var_60)
int32_t r9 = 4

if ((arg5 & 0x120) == 0)
    r9 = arg3

int32_t var_e0 = r10.d
int128_t var_58 = zmm1
int128_t var_48 = zmm2
int128_t var_38 = zmm3
int64_t var_28 = (zmm0.o).q
uint64_t rax_5 = sub_140fffee0(*rax_4, nullptr, &var_58, r9, zmm0, arg3, var_e0, arg5, arg6)

if (*(rax_5 + 0xd0) != 0)
    *(rax_5 + 0x11) = 0

*arg2 = rax_5
*(rax_5 + 8) += 1
__security_check_cookie(rax_1 ^ &var_108)
return arg2
