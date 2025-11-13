// 函数: sub_1427db910
// 地址: 0x1427db910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_428 = 0
int64_t* var_430 = &arg_10
int64_t var_420 = 0
int64_t var_440 = 0
int64_t var_438 = 0
int64_t* var_448 = &arg_10
void var_3a8
sub_14280b470(&var_3a8)
int128_t zmm7 = *arg1
uint128_t zmm6 = zx.o(arg1[1].q)
int64_t** var_418 = &var_430
char arg_8 = 0
int64_t** var_410 = &var_448
char* var_3c8 = &arg_8
int128_t var_408 = zmm7
int64_t var_3f0 = arg2
uint64_t var_3f8 = zmm6.q
int64_t var_3e8 = arg3
int64_t* var_3e0 = arg4
int64_t var_3d8 = arg5
char var_3d0 = 1
int128_t var_3c0 = zx.o(0)
int64_t zmm6_1
int128_t zmm7_1
zmm6_1, zmm7_1 = sub_1427dfd80(&var_3a8, &var_418, 0)
int64_t var_3f8_1 = zmm6_1
var_418 = &var_430
int64_t var_3f0_1 = arg2
int64_t** var_410_1 = &var_448
int64_t var_3e8_1 = arg3
char* var_3c8_1 = &arg_8
int64_t* var_3e0_1 = arg4
int128_t var_408_1 = zmm7_1
int64_t var_3d8_1 = arg5
char var_3d0_1 = 1
int128_t var_3c0_1 = zx.o(0)
sub_1427dfc00(&var_3a8, &var_418, 0)
int32_t rax_2 = var_438:4.d
int64_t rbx_1
rbx_1.b = arg_8 == 0

if ((rax_2 & 0x7fffffff) != 0 && rax_2 s>= 0 && var_440 != 0)
    int64_t* rcx_4 = *var_448
    (*(*rcx_4 + 0x10))(rcx_4, var_440)

int32_t rax_5 = var_420:4.d

if ((rax_5 & 0x7fffffff) != 0 && rax_5 s>= 0 && var_428 != 0)
    int64_t* rcx_6 = *var_430
    int64_t r8 = *rcx_6
    (*(r8 + 0x10))(rcx_6, var_428, r8)

return zx.q(rbx_1.b)
