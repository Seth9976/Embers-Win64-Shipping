// 函数: sub_1427dc640
// 地址: 0x1427dc640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_358 = 0
int64_t* var_360 = &arg_10
int64_t var_350 = 0
int64_t var_370 = 0
int64_t var_368 = 0
int64_t* var_378 = &arg_10
void var_2d8
sub_14280bb70(&var_2d8)
int128_t zmm7 = *arg1
uint128_t zmm6 = zx.o(arg1[1].q)
int64_t** var_348 = &var_360
char arg_8 = 0
int64_t** var_340 = &var_378
char* var_2f8 = &arg_8
int128_t var_338 = zmm7
int64_t var_320 = arg2
uint64_t var_328 = zmm6.q
int64_t var_318 = arg3
int64_t* var_310 = arg4
int64_t var_308 = arg5
char var_300 = 1
int128_t var_2f0 = zx.o(0)
int64_t zmm6_1
int128_t zmm7_1
zmm6_1, zmm7_1 = sub_1427dfd80(&var_2d8, &var_348, 0)
int64_t var_328_1 = zmm6_1
var_348 = &var_360
int64_t var_320_1 = arg2
int64_t** var_340_1 = &var_378
int64_t var_318_1 = arg3
char* var_2f8_1 = &arg_8
int64_t* var_310_1 = arg4
int128_t var_338_1 = zmm7_1
int64_t var_308_1 = arg5
char var_300_1 = 1
int128_t var_2f0_1 = zx.o(0)
void var_d0
sub_1427d52d0(&var_348, &var_d0)
void var_b0
sub_1427d5440(&var_348, &var_b0)
void var_90
sub_1427d3ed0(&var_348, &var_90)
void var_70
sub_1427d3ed0(&var_348, &var_70)
int32_t rax_2 = var_368:4.d
int64_t rbx_1
rbx_1.b = arg_8 == 0

if ((rax_2 & 0x7fffffff) != 0 && rax_2 s>= 0 && var_370 != 0)
    int64_t* rcx_7 = *var_378
    (*(*rcx_7 + 0x10))(rcx_7, var_370)

int32_t rax_5 = var_350:4.d

if ((rax_5 & 0x7fffffff) != 0 && rax_5 s>= 0 && var_358 != 0)
    int64_t* rcx_9 = *var_360
    int64_t r8_4 = *rcx_9
    (*(r8_4 + 0x10))(rcx_9, var_358, r8_4)

return zx.q(rbx_1.b)
