// 函数: sub_1427dc2f0
// 地址: 0x1427dc2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_3e8 = 0
int64_t* var_3f0 = &arg_10
int64_t var_3e0 = 0
int64_t var_400 = 0
int64_t var_3f8 = 0
int64_t* var_408 = &arg_10
void var_368
physx::PxParticleFluidGeneratedInfo::PxParticleFluidGeneratedInfo(&var_368)
int128_t zmm7 = *arg1
uint128_t zmm6 = zx.o(arg1[1].q)
int64_t** var_3d8 = &var_3f0
char arg_8 = 0
int64_t** var_3d0 = &var_408
char* var_388 = &arg_8
int128_t var_3c8 = zmm7
int64_t var_3b0 = arg2
uint64_t var_3b8 = zmm6.q
int64_t var_3a8 = arg3
int64_t* var_3a0 = arg4
int64_t var_398 = arg5
char var_390 = 1
int128_t var_380 = zx.o(0)
int64_t zmm6_1
int128_t zmm7_1
zmm6_1, zmm7_1 = sub_1427defd0(&var_368, &var_3d8, 0)
int64_t var_3b8_1 = zmm6_1
var_3d8 = &var_3f0
int64_t var_3b0_1 = arg2
int64_t** var_3d0_1 = &var_408
int64_t var_3a8_1 = arg3
char* var_388_1 = &arg_8
int64_t* var_3a0_1 = arg4
int128_t var_3c8_1 = zmm7_1
int64_t var_398_1 = arg5
char var_390_1 = 1
int128_t var_380_1 = zx.o(0)
void var_b0
sub_1427d3ed0(&var_3d8, &var_b0)
void var_90
sub_1427d3ed0(&var_3d8, &var_90)
void var_70
sub_1427d3ed0(&var_3d8, &var_70)
int32_t rax_2 = var_3f8:4.d
int64_t rbx_1
rbx_1.b = arg_8 == 0

if ((rax_2 & 0x7fffffff) != 0 && rax_2 s>= 0 && var_400 != 0)
    int64_t* rcx_6 = *var_408
    (*(*rcx_6 + 0x10))(rcx_6, var_400)

int32_t rax_5 = var_3e0:4.d

if ((rax_5 & 0x7fffffff) != 0 && rax_5 s>= 0 && var_3e8 != 0)
    int64_t* rcx_8 = *var_3f0
    int64_t r8_3 = *rcx_8
    (*(r8_3 + 0x10))(rcx_8, var_3e8, r8_3)

return zx.q(rbx_1.b)
