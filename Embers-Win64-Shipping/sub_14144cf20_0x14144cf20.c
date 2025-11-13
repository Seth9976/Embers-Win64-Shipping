// 函数: sub_14144cf20
// 地址: 0x14144cf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t* rcx = arg4[0x9ad]
int64_t* rbx = nullptr
int64_t r14 = arg4[0x2b5]
int64_t* var_260
__builtin_memset(&var_260, 0, 0x18)
int64_t* var_268 = rcx

if (rcx != 0)
    (*(*rcx + 0x30))(zx.o(0))
    rbx = var_260

int64_t* rcx_1 = arg4[0x9ae]

if (rcx_1 != 0)
    (*(*rcx_1 + 0x30))(rcx_1)

if (rbx != 0)
    (*(*rbx + 0x38))(rbx)

int128_t var_258
int64_t* rcx_3 = var_258.q

if (rcx_3 != 0)
    (*(*rcx_3 + 0x38))(rcx_3)

int64_t* rcx_4 = arg4[0x9b0]
int64_t* rbx_1 = var_258:8.q
var_258:8.q = rcx_4

if (rcx_4 != 0)
    (*(*rcx_4 + 0x30))()

if (rbx_1 != 0)
    (*(*rbx_1 + 0x38))(rbx_1)

int64_t var_248 = r14 + 0x8a8
int64_t var_238 = 0
int128_t var_108
__builtin_memset(&var_108, 0, 0x40)
int32_t var_134 = 1
int64_t var_240 = r14 + 0x8b0
int32_t var_130 = 0x3f800000
int128_t var_98
__builtin_memset(&var_98, 0, 0x30)
int64_t var_230 = r14 + 0x8c0
int64_t var_a8 = *arg7
int64_t var_a0 = arg7[2]
int32_t rax_13 = arg4[0x2b3].d
int32_t var_144 = *(arg4 + 0x159c)
int32_t var_140 = arg4[0x2b4].d
int32_t var_13c = *(arg4 + 0x15a4)
int32_t var_128 = arg8.d
int32_t var_124 = 0x3f800000
int32_t var_11c = *(data_143ed6078 + 4)
char var_120 = 1
int32_t rcx_8 = *(data_143ed6090 + 4)
bool var_114 = *(data_143ed60a8 + 4) != 0
int32_t var_110 = *(data_143ed60c0 + 4)
int128_t var_158
int128_t var_218 = var_158
int32_t var_10c = (*(data_143ed60d8 + 4)).d
int32_t var_12c = int.d(fconvert.t(arg9))
int64_t rax_25 = arg4[0x2b5]
int128_t var_58
int128_t var_158_1 = var_58
int64_t rcx_10 = rax_25 + 0xa60

if (rax_25 == 0)
    rcx_10 = 0

int64_t var_168 = rcx_10
int128_t var_228 = var_168.o
var_168.o = (arg5 + 0x590).o
int128_t var_208 = rax_13.o
int128_t var_1f8 = 4.o
int128_t var_1e8 = var_128.o
int128_t var_1d8 = rcx_8.o
int128_t var_1c8 = var_108
int128_t var_1b8
__builtin_memset(&var_1b8, 0, 0x30)
int128_t var_c8
int128_t var_188 = var_c8
int128_t var_b8
int128_t var_178 = var_b8
uint128_t var_88
sub_14144de80(arg3, arg4, arg6, &var_268, &var_a8, &var_208, &var_168, &var_228, &var_88)
int64_t* rcx_12 = var_258:8.q
int64_t rax_26 = var_88.q
arg2[1] = 0
*arg2 = rax_26

if (rcx_12 != 0)
    (*(*rcx_12 + 0x38))(rcx_12)

int64_t* rcx_13 = var_258.q

if (rcx_13 != 0)
    (*(*rcx_13 + 0x38))(rcx_13)

if (rcx_1 != 0)
    int64_t rdx_1 = *rcx_1
    (*(rdx_1 + 0x38))(rcx_1, rdx_1)

int64_t* rcx_15 = var_268

if (rcx_15 != 0)
    int64_t rdx_2 = *rcx_15
    (*(rdx_2 + 0x38))(rcx_15, rdx_2)

__security_check_cookie(rax_1 ^ &var_2b8)
return arg2
