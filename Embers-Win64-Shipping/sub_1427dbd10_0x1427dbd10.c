// 函数: sub_1427dbd10
// 地址: 0x1427dbd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_2e8 = 0
int64_t* var_2f0 = &arg_10
int64_t var_2e0 = 0
int64_t var_300 = 0
int64_t var_2f8 = 0
int64_t* var_308 = &arg_10
void var_268
sub_14280ba10(&var_268)
int128_t zmm7 = *arg1
uint128_t zmm6 = zx.o(arg1[1].q)
int64_t** var_2d8 = &var_2f0
char arg_8 = 0
int64_t** var_2d0 = &var_308
char* var_288 = &arg_8
int128_t var_2c8 = zmm7
int64_t var_2b0 = arg2
uint64_t var_2b8 = zmm6.q
int64_t var_2a8 = arg3
int64_t* var_2a0 = arg4
int64_t var_298 = arg5
char var_290 = 1
int128_t var_280 = zx.o(0)
int64_t zmm6_1
int128_t zmm7_1
zmm6_1, zmm7_1 = sub_1427dfd80(&var_268, &var_2d8, 0)
int64_t var_2b8_1 = zmm6_1
var_2d8 = &var_2f0
int64_t var_2b0_1 = arg2
int64_t** var_2d0_1 = &var_308
int64_t var_2a8_1 = arg3
char* var_288_1 = &arg_8
int64_t* var_2a0_1 = arg4
int128_t var_2c8_1 = zmm7_1
int64_t var_298_1 = arg5
char var_290_1 = 1
int128_t var_280_1 = zx.o(0)
void var_90
sub_1427d3ed0(&var_2d8, &var_90)
void var_70
sub_1427d3ed0(&var_2d8, &var_70)
int32_t rax_2 = var_2f8:4.d
int64_t rbx_1
rbx_1.b = arg_8 == 0

if ((rax_2 & 0x7fffffff) != 0 && rax_2 s>= 0 && var_300 != 0)
    int64_t* rcx_5 = *var_308
    (*(*rcx_5 + 0x10))(rcx_5, var_300)

int32_t rax_5 = var_2e0:4.d

if ((rax_5 & 0x7fffffff) != 0 && rax_5 s>= 0 && var_2e8 != 0)
    int64_t* rcx_7 = *var_2f0
    int64_t r8_2 = *rcx_7
    (*(r8_2 + 0x10))(rcx_7, var_2e8, r8_2)

return zx.q(rbx_1.b)
