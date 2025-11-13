// 函数: sub_1427dbad0
// 地址: 0x1427dbad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_388 = 0
int64_t* var_390 = &arg_10
int64_t var_380 = 0
int64_t var_3a0 = 0
int64_t var_398 = 0
int64_t* var_3a8 = &arg_10
void var_308
sub_14280b7f0(&var_308)
int128_t zmm7 = *arg1
uint128_t zmm6 = zx.o(arg1[1].q)
int64_t** var_378 = &var_390
char arg_8 = 0
int64_t** var_370 = &var_3a8
char* var_328 = &arg_8
int128_t var_368 = zmm7
int64_t var_350 = arg2
uint64_t var_358 = zmm6.q
int64_t var_348 = arg3
int64_t* var_340 = arg4
int64_t var_338 = arg5
char var_330 = 1
int128_t var_320 = zx.o(0)
int64_t zmm6_1
int128_t zmm7_1
zmm6_1, zmm7_1 = sub_1427dfd80(&var_308, &var_378, 0)
int64_t var_358_1 = zmm6_1
var_378 = &var_390
int64_t var_350_1 = arg2
int64_t** var_370_1 = &var_3a8
int64_t var_348_1 = arg3
char* var_328_1 = &arg_8
int64_t* var_340_1 = arg4
int128_t var_368_1 = zmm7_1
int64_t var_338_1 = arg5
char var_330_1 = 1
int128_t var_320_1 = zx.o(0)
void var_118
sub_1427d3ed0(&var_378, &var_118)
void var_f8
sub_1427d3ed0(&var_378, &var_f8)
void var_d8
sub_1427d3ed0(&var_378, &var_d8)
void var_b8
sub_1427d3ed0(&var_378, &var_b8)
void var_98
sub_1427d3ed0(&var_378, &var_98)
void var_78
sub_1427d5160(&var_378, &var_78)
int32_t rax_2 = var_398:4.d
int64_t rbx_1
rbx_1.b = arg_8 == 0

if ((rax_2 & 0x7fffffff) != 0 && rax_2 s>= 0 && var_3a0 != 0)
    int64_t* rcx_9 = *var_3a8
    (*(*rcx_9 + 0x10))(rcx_9, var_3a0)

int32_t rax_5 = var_380:4.d

if ((rax_5 & 0x7fffffff) != 0 && rax_5 s>= 0 && var_388 != 0)
    int64_t* rcx_11 = *var_390
    int64_t r8_6 = *rcx_11
    (*(r8_6 + 0x10))(rcx_11, var_388, r8_6)

return zx.q(rbx_1.b)
