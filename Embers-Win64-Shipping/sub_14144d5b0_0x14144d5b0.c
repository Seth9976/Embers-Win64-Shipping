// 函数: sub_14144d5b0
// 地址: 0x14144d5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int128_t var_258
__builtin_memset(&var_258, 0, 0x20)
sub_1414618c0(arg4, &var_258)
int32_t var_104 = 1
int128_t var_d8
__builtin_memset(&var_d8, 0, 0x40)
int32_t var_100 = 0x3f800000
int64_t var_78 = *arg7
int64_t var_70 = arg7[1]
int32_t rax_4 = arg4[0x2b3].d
int32_t var_114 = *(arg4 + 0x159c)
int32_t var_110 = arg4[0x2b4].d
int32_t var_10c = *(arg4 + 0x15a4)
char var_f0 = 1
int64_t var_ec = 8
int32_t var_e0 = 1
int32_t var_dc = 0x3f800000
int32_t var_108 = 6
bool var_e4 = *(data_143ed60a8 + 4) != 0
int128_t var_68 = zx.o(0)
int128_t zmm0 = arg8
int32_t var_fc = int.d(fconvert.t(arg9))
int32_t var_f8 = zmm0.d
int32_t var_f4 = zmm0.d
int64_t rax_12 = arg4[0x2b5]
uint128_t var_138 = zx.o(0)
int128_t var_128 = zx.o(0)
int64_t rcx_2 = rax_12 + 0xa00

if (rax_12 == 0)
    rcx_2 = 0

int128_t var_148
int128_t var_208 = var_148
int64_t var_158 = rcx_2
int128_t var_48
int128_t var_148_1 = var_48
int128_t var_218 = var_158.o
var_158.o = (arg5 + 0x530).o
int128_t var_1f8 = rax_4.o
int128_t var_1e8 = var_108.o
int128_t var_1d8 = var_f8.o
int128_t var_1c8 = var_ec:4.o
int128_t var_1b8 = var_d8
int128_t var_1a8
__builtin_memset(&var_1a8, 0, 0x30)
int128_t var_98
int128_t var_178 = var_98
int128_t var_88
int128_t var_168 = var_88
sub_14144de80(arg3, arg4, arg6, &var_258, &var_78, &var_1f8, &var_158, &var_218, &var_138)
int128_t var_248
int64_t* rcx_4 = var_248:8.q
*arg2 = var_138.q
arg2[1] = var_138:8.q

if (rcx_4 != 0)
    (*(*rcx_4 + 0x38))(rcx_4)

int64_t* rcx_5 = var_248.q

if (rcx_5 != 0)
    (*(*rcx_5 + 0x38))(rcx_5)

int64_t* rcx_6 = var_258:8.q

if (rcx_6 != 0)
    int64_t rdx_2 = *rcx_6
    (*(rdx_2 + 0x38))(rcx_6, rdx_2)

int64_t* rcx_7 = var_258.q

if (rcx_7 != 0)
    int64_t rdx_3 = *rcx_7
    (*(rdx_3 + 0x38))(rcx_7, rdx_3)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
