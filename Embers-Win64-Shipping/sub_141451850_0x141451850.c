// 函数: sub_141451850
// 地址: 0x141451850
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
int64_t var_90 = arg7[2]
int32_t rax_4 = arg4[0x2b3].d
int32_t var_134 = *(arg4 + 0x159c)
int32_t var_130 = arg4[0x2b4].d
int32_t var_12c = *(arg4 + 0x15a4)
void* rax_8 = data_143ed6078
int32_t var_114 = 0x3f800000
int128_t var_88
__builtin_memset(&var_88, 0, 0x30)
int32_t var_10c = *(rax_8 + 4)
int32_t var_118 = arg8.d
int32_t rcx_3 = *(data_143ed6090 + 4)
char var_110 = 1
bool var_104 = *(data_143ed60a8 + 4) != 0
int32_t var_100 = *(data_143ed60c0 + 4)
int32_t var_fc = (*(data_143ed60d8 + 4)).d
int32_t var_11c = int.d(fconvert.t(arg9))
int64_t rax_16 = arg4[0x2b5]
int128_t var_148
int128_t var_208 = var_148
int64_t rcx_5 = rax_16 + 0xa30
int128_t var_48
int128_t var_148_1 = var_48

if (rax_16 == 0)
    rcx_5 = 0

int64_t var_158 = rcx_5
int128_t var_218 = var_158.o
var_158.o = (arg5 + 0x560).o
int128_t var_1f8 = rax_4.o
int128_t var_1e8 = 4.o
int128_t var_1d8 = var_118.o
int128_t var_1c8 = rcx_3.o
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
int64_t* rcx_7 = var_248:8.q
int64_t rax_17 = var_78.q
arg2[1] = 0
*arg2 = rax_17

if (rcx_7 != 0)
    (*(*rcx_7 + 0x38))(rcx_7)

int64_t* rcx_8 = var_248.q

if (rcx_8 != 0)
    (*(*rcx_8 + 0x38))(rcx_8)

int64_t* rcx_9 = var_258:8.q

if (rcx_9 != 0)
    int64_t rdx_2 = *rcx_9
    (*(rdx_2 + 0x38))(rcx_9, rdx_2)

int64_t* rcx_10 = var_258.q

if (rcx_10 != 0)
    int64_t rdx_3 = *rcx_10
    (*(rdx_3 + 0x38))(rcx_10, rdx_3)

__security_check_cookie(rax_1 ^ &var_2a8)
return arg2
