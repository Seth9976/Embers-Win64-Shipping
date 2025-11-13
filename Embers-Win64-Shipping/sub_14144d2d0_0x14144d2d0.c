// 函数: sub_14144d2d0
// 地址: 0x14144d2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int128_t var_258
__builtin_memset(&var_258, 0, 0x20)
sub_1414618c0(arg4, &var_258)
int32_t var_124 = 1
int128_t var_f8
__builtin_memset(&var_f8, 0, 0x40)
int32_t var_120 = 0x3f800000
int64_t var_98 = *arg7
int64_t var_90 = arg7[1]
int32_t rax_4 = arg4[0x2b3].d
int32_t var_134 = *(arg4 + 0x159c)
int32_t var_130 = arg4[0x2b4].d
int32_t var_12c = *(arg4 + 0x15a4)
void* rax_8 = data_143ed5fd0
int32_t var_114 = 0x3f800000
int128_t var_88
__builtin_memset(&var_88, 0, 0x30)
int32_t var_10c = *(rax_8 + 4)
int32_t var_118 = arg8.d
bool var_104 = *(data_143ed5fe8 + 4) != 0
char var_110 = 1
int32_t var_11c = arg9
int32_t var_100 = *(data_143ed6000 + 4)
int32_t var_108 = 0
int32_t var_fc = 0x3f800000
int64_t rax_14 = arg4[0x2b5]
int128_t var_148
int128_t var_208 = var_148
int64_t rcx_4 = rax_14 + 0x958
int128_t var_48
int128_t var_148_1 = var_48

if (rax_14 == 0)
    rcx_4 = 0

int64_t var_158 = rcx_4
int128_t var_218 = var_158.o
var_158.o = (arg5 + 0x488).o
int128_t var_1f8 = rax_4.o
int128_t var_1e8 = 2.o
int128_t var_1d8 = var_118.o
int128_t var_1c8 = var_108.o
int128_t var_1b8 = var_f8
int128_t var_1a8
__builtin_memset(&var_1a8, 0, 0x30)
int128_t var_b8
int128_t var_178 = var_b8
int128_t var_a8
int128_t var_168 = var_a8
uint128_t var_78
sub_14144de80(arg3, arg4, arg6, &var_258, &var_98, &var_1f8, &var_158, &var_218, &var_78)
int128_t var_248
int64_t* rcx_6 = var_248:8.q
*arg2 = var_78.q

if (rcx_6 != 0)
    (*(*rcx_6 + 0x38))(rcx_6)

int64_t* rcx_7 = var_248.q

if (rcx_7 != 0)
    (*(*rcx_7 + 0x38))(rcx_7)

int64_t* rcx_8 = var_258:8.q

if (rcx_8 != 0)
    int64_t rdx_2 = *rcx_8
    (*(rdx_2 + 0x38))(rcx_8, rdx_2)

int64_t* rcx_9 = var_258.q

if (rcx_9 != 0)
    int64_t rdx_3 = *rcx_9
    (*(rdx_3 + 0x38))(rcx_9, rdx_3)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
