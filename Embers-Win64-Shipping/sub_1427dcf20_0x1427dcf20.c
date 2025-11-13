// 函数: sub_1427dcf20
// 地址: 0x1427dcf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_308 = 0
int64_t* var_310 = &arg_10
int64_t var_300 = 0
int64_t var_320 = 0
int64_t var_318 = 0
int64_t* var_328 = &arg_10
void var_288
sub_14280c040(&var_288)
int128_t zmm7 = *arg1
uint128_t zmm6 = zx.o(arg1[1].q)
int64_t** var_2f8 = &var_310
char arg_8 = 0
int64_t** var_2f0 = &var_328
char* var_2a8 = &arg_8
int128_t var_2e8 = zmm7
int64_t var_2d0 = arg2
uint64_t var_2d8 = zmm6.q
int64_t var_2c8 = arg3
int64_t* var_2c0 = arg4
int64_t var_2b8 = arg5
char var_2b0 = 1
int128_t var_2a0 = zx.o(0)
int64_t zmm6_1
int128_t zmm7_1
zmm6_1, zmm7_1 = sub_1427dfd80(&var_288, &var_2f8, 0)
int64_t var_2d8_1 = zmm6_1
var_2f8 = &var_310
int64_t var_2d0_1 = arg2
int64_t** var_2f0_1 = &var_328
int64_t var_2c8_1 = arg3
char* var_2a8_1 = &arg_8
int64_t* var_2c0_1 = arg4
int128_t var_2e8_1 = zmm7_1
int64_t var_2b8_1 = arg5
char var_2b0_1 = 1
int128_t var_2a0_1 = zx.o(0)
void var_b0
sub_1427d57c0(&var_2f8, &var_b0)
void var_90
sub_1427d5860(&var_2f8, &var_90)
void var_70
sub_1427d3ed0(&var_2f8, &var_70)
int32_t rax_2 = var_318:4.d
int64_t rbx_1
rbx_1.b = arg_8 == 0

if ((rax_2 & 0x7fffffff) != 0 && rax_2 s>= 0 && var_320 != 0)
    int64_t* rcx_6 = *var_328
    (*(*rcx_6 + 0x10))(rcx_6, var_320)

int32_t rax_5 = var_300:4.d

if ((rax_5 & 0x7fffffff) != 0 && rax_5 s>= 0 && var_308 != 0)
    int64_t* rcx_8 = *var_310
    int64_t r8_3 = *rcx_8
    (*(r8_3 + 0x10))(rcx_8, var_308, r8_3)

return zx.q(rbx_1.b)
