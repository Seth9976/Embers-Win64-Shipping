// 函数: sub_1427dcaa0
// 地址: 0x1427dcaa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_4b8 = 0
int64_t* var_4c0 = &arg_10
int64_t var_4b0 = 0
int64_t var_4d0 = 0
int64_t var_4c8 = 0
int64_t* var_4d8 = &arg_10
void var_438
physx::PxRigidDynamicGeneratedInfo::PxRigidDynamicGeneratedInfo(&var_438)
int128_t zmm7 = *arg1
uint128_t zmm6 = zx.o(arg1[1].q)
int64_t** var_4a8 = &var_4c0
char arg_8 = 0
int64_t** var_4a0 = &var_4d8
char* var_458 = &arg_8
int128_t var_498 = zmm7
int64_t var_480 = arg2
uint64_t var_488 = zmm6.q
int64_t var_478 = arg3
int64_t* var_470 = arg4
int64_t var_468 = arg5
char var_460 = 1
int128_t var_450 = zx.o(0)
int64_t var_488_1 = sub_1427df290(&var_438, &var_4a8, 0)
var_4a8 = &var_4c0
int64_t var_480_1 = arg2
int64_t** var_4a0_1 = &var_4d8
int64_t var_478_1 = arg3
char* var_458_1 = &arg_8
int64_t* var_470_1 = arg4
int128_t var_498_1 = zmm7
int64_t var_468_1 = arg5
char var_460_1 = 1
int128_t var_450_1 = zx.o(0)
sub_1427e0250(&var_438, &var_4a8, 0)
int32_t rax_2 = var_4c8:4.d
int64_t rbx_1
rbx_1.b = arg_8 == 0

if ((rax_2 & 0x7fffffff) != 0 && rax_2 s>= 0 && var_4d0 != 0)
    int64_t* rcx_4 = *var_4d8
    (*(*rcx_4 + 0x10))(rcx_4, var_4d0)

int32_t rax_5 = var_4b0:4.d

if ((rax_5 & 0x7fffffff) != 0 && rax_5 s>= 0 && var_4b8 != 0)
    int64_t* rcx_6 = *var_4c0
    int64_t r8 = *rcx_6
    (*(r8 + 0x10))(rcx_6, var_4b8, r8)

return zx.q(rbx_1.b)
