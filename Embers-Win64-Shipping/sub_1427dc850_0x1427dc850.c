// 函数: sub_1427dc850
// 地址: 0x1427dc850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_3b8 = 0
int64_t* var_3c0 = &arg_10
int64_t var_3b0 = 0
int64_t var_3d0 = 0
int64_t var_3c8 = 0
int64_t* var_3d8 = &arg_10
void var_338
sub_14280bdc0(&var_338)
int128_t zmm7 = *arg1
uint128_t zmm6 = zx.o(arg1[1].q)
int64_t** var_3a8 = &var_3c0
char arg_8 = 0
int64_t** var_3a0 = &var_3d8
char* var_358 = &arg_8
int128_t var_398 = zmm7
int64_t var_380 = arg2
uint64_t var_388 = zmm6.q
int64_t var_378 = arg3
int64_t* var_370 = arg4
int64_t var_368 = arg5
char var_360 = 1
int128_t var_350 = zx.o(0)
int64_t zmm6_1
int128_t zmm7_1
zmm6_1, zmm7_1 = sub_1427dfd80(&var_338, &var_3a8, 0)
int64_t var_388_1 = zmm6_1
var_3a8 = &var_3c0
int64_t var_380_1 = arg2
int64_t** var_3a0_1 = &var_3d8
int64_t var_378_1 = arg3
char* var_358_1 = &arg_8
int64_t* var_370_1 = arg4
int128_t var_398_1 = zmm7_1
int64_t var_368_1 = arg5
char var_360_1 = 1
int128_t var_350_1 = zx.o(0)
void var_130
sub_1427d55b0(&var_3a8, &var_130)
void var_110
sub_1427d3ed0(&var_3a8, &var_110)
void var_f0
sub_1427d3ed0(&var_3a8, &var_f0)
void var_d0
sub_1427d3ed0(&var_3a8, &var_d0)
void var_b0
sub_1427d5650(&var_3a8, &var_b0)
void var_90
sub_1427d3ed0(&var_3a8, &var_90)
void var_70
sub_1427d3ed0(&var_3a8, &var_70)
int32_t rax_2 = var_3c8:4.d
int64_t rbx_1
rbx_1.b = arg_8 == 0

if ((rax_2 & 0x7fffffff) != 0 && rax_2 s>= 0 && var_3d0 != 0)
    int64_t* rcx_10 = *var_3d8
    (*(*rcx_10 + 0x10))(rcx_10, var_3d0)

int32_t rax_5 = var_3b0:4.d

if ((rax_5 & 0x7fffffff) != 0 && rax_5 s>= 0 && var_3b8 != 0)
    int64_t* rcx_12 = *var_3c0
    int64_t r8_7 = *rcx_12
    (*(r8_7 + 0x10))(rcx_12, var_3b8, r8_7)

return zx.q(rbx_1.b)
