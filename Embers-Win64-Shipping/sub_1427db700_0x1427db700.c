// 函数: sub_1427db700
// 地址: 0x1427db700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_598 = 0
int64_t* var_5a0 = &arg_10
int64_t var_590 = 0
int64_t var_5b0 = 0
int64_t var_5a8 = 0
int64_t* var_5b8 = &arg_10
void var_518
physx::PxClothGeneratedInfo::PxClothGeneratedInfo(&var_518)
int128_t zmm7 = *arg1
uint128_t zmm6 = zx.o(arg1[1].q)
int64_t** var_588 = &var_5a0
char arg_8 = 0
int64_t** var_580 = &var_5b8
char* var_538 = &arg_8
int128_t var_578 = zmm7
int64_t var_560 = arg2
uint64_t var_568 = zmm6.q
int64_t var_558 = arg3
int64_t* var_550 = arg4
int64_t var_548 = arg5
char var_540 = 1
int128_t var_530 = zx.o(0)
void var_500
sub_1427d39b0(&var_588, &var_500)
void var_4e0
sub_1427d3b60(&var_588, &var_4e0)
void var_4c0
sub_1427d3cd0(&var_588, &var_4c0)
void var_4a0
sub_1427d3cd0(&var_588, &var_4a0)
void var_480
sub_1427d4850(&var_588, &var_480)
uint64_t var_568_1 = zmm6.q
var_588 = &var_5a0
int64_t var_560_1 = arg2
int64_t** var_580_1 = &var_5b8
int64_t var_558_1 = arg3
char* var_538_1 = &arg_8
int64_t* var_550_1 = arg4
int128_t var_578_1 = zmm7
int64_t var_548_1 = arg5
char var_540_1 = 1
int128_t var_530_1 = zx.o(0)
sub_1427df950(&var_518, &var_588, 0)
int64_t rbx_1
rbx_1.b = arg_8 == 0
int32_t rax_2 = var_5a8:4.d

if ((rax_2 & 0x7fffffff) != 0 && rax_2 s>= 0 && var_5b0 != 0)
    int64_t* rcx_8 = *var_5b8
    (*(*rcx_8 + 0x10))(rcx_8, var_5b0)

int32_t rax_5 = var_590:4.d

if ((rax_5 & 0x7fffffff) != 0 && rax_5 s>= 0 && var_598 != 0)
    int64_t* rcx_10 = *var_5a0
    int64_t r8_5 = *rcx_10
    (*(r8_5 + 0x10))(rcx_10, var_598, r8_5)

return zx.q(rbx_1.b)
