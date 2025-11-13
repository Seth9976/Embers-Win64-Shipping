// 函数: sub_1427dc4e0
// 地址: 0x1427dc4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = (*(*arg4 + 0x18))(arg4)
int64_t var_368 = 0
int64_t* var_370 = &arg_10
int64_t var_360 = 0
int64_t var_380 = 0
int64_t var_378 = 0
int64_t* var_388 = &arg_10
void var_2e8
physx::PxParticleSystemGeneratedInfo::PxParticleSystemGeneratedInfo(&var_2e8)
int128_t zmm0 = *arg1
int64_t zmm1 = arg1[1].q
int64_t** var_358 = &var_370
char arg_8 = 0
int64_t** var_350 = &var_388
int64_t var_318 = arg5
int128_t var_348 = zmm0
char* var_308 = &arg_8
int64_t var_338 = zmm1
int64_t var_330 = arg2
int64_t var_328 = arg3
int64_t* var_320 = arg4
char var_310 = 1
int128_t var_300 = zx.o(0)
sub_1427defd0(&var_2e8, &var_358, 0)
int32_t rax_3 = var_378:4.d
int128_t* rbx
rbx.b = arg_8 == 0

if ((rax_3 & 0x7fffffff) != 0 && rax_3 s>= 0 && var_380 != 0)
    int64_t* rcx_3 = *var_388
    (*(*rcx_3 + 0x10))(rcx_3, var_380)

int32_t rax_6 = var_360:4.d

if ((rax_6 & 0x7fffffff) != 0 && rax_6 s>= 0 && var_368 != 0)
    int64_t* rcx_5 = *var_370
    int64_t r8 = *rcx_5
    (*(r8 + 0x10))(rcx_5, var_368, r8)

return zx.q(rbx.b)
