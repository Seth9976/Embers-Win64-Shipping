// 函数: sub_14144bea0
// 地址: 0x14144bea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int128_t var_258
__builtin_memset(&var_258, 0, 0x20)
sub_1414618c0(arg4, &var_258)
int32_t var_e4 = 1
int128_t var_b8
__builtin_memset(&var_b8, 0, 0x40)
int32_t var_e0 = 0x3f800000
int64_t var_118 = *arg7
int64_t var_110 = arg7[1]
int64_t var_108 = arg7[2]
int64_t var_100 = arg7[3]
int32_t rax_6 = arg4[0x2b3].d
int32_t var_f4 = *(arg4 + 0x159c)
int32_t var_f0 = arg4[0x2b4].d
int32_t var_ec = *(arg4 + 0x15a4)
int32_t var_d4 = 0x3f800000
int32_t var_d8 = arg8.d
int32_t var_cc = *(data_143ed6078 + 4)
char var_d0 = 1
int32_t var_c8 = 0
int32_t var_c0 = 1
int32_t var_bc = 0x3f800000
int32_t var_e8 = 5
bool var_c4 = *(data_143ed60a8 + 4) != 0
uint128_t var_158 = zx.o(0)
int32_t var_dc = int.d(fconvert.t(arg9))
int128_t var_148 = zx.o(0)
int64_t rax_15 = arg4[0x2b5]
int128_t var_128
int128_t var_208 = var_128
int64_t rcx_3 = rax_15 + 0xa00
int128_t var_48
int128_t var_128_1 = var_48

if (rax_15 == 0)
    rcx_3 = 0

int64_t var_138 = rcx_3
int128_t var_218 = var_138.o
var_138.o = (arg5 + 0x530).o
int128_t var_1f8 = rax_6.o
int128_t var_1e8 = var_e8.o
int128_t var_1d8 = var_d8.o
int128_t var_1c8 = var_c8.o
int128_t var_1b8 = var_b8
int128_t var_1a8
__builtin_memset(&var_1a8, 0, 0x30)
int128_t var_78
int128_t var_178 = var_78
int128_t var_68
int128_t var_168 = var_68
sub_14144de80(arg3, arg4, arg6, &var_258, &var_118, &var_1f8, &var_138, &var_218, &var_158)
int128_t var_248
int64_t* rcx_5 = var_248:8.q
*arg2 = var_158.q
arg2[1] = var_158:8.q
arg2[2] = var_148.q
arg2[3] = var_148:8.q

if (rcx_5 != 0)
    (*(*rcx_5 + 0x38))(rcx_5)

int64_t* rcx_6 = var_248.q

if (rcx_6 != 0)
    (*(*rcx_6 + 0x38))(rcx_6)

int64_t* rcx_7 = var_258:8.q

if (rcx_7 != 0)
    int64_t rdx_2 = *rcx_7
    (*(rdx_2 + 0x38))(rcx_7, rdx_2)

int64_t* rcx_8 = var_258.q

if (rcx_8 != 0)
    int64_t rdx_3 = *rcx_8
    (*(rdx_3 + 0x38))(rcx_8, rdx_3)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
