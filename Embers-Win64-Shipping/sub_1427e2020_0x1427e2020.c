// 函数: sub_1427e2020
// 地址: 0x1427e2020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_328 = *(arg3 + 0x10)
int64_t var_320 = 0
int64_t var_318 = 0
void var_2d8
physx::PxParticleSystemGeneratedInfo::PxParticleSystemGeneratedInfo(&var_2d8)
int64_t var_308 = arg2
int64_t* var_310 = &var_328
int64_t var_300 = arg1
void* var_2f8 = arg3
int64_t r9
int64_t var_2f0 = r9
int128_t var_2e8 = zx.o(0)
sub_1427df480(&var_2d8, &var_310, 0)
int32_t result = var_318:4.d

if ((result & 0x7fffffff) == 0 || result s< 0 || var_320 == 0)
    return result

int64_t* rcx_2 = *var_328
return (*(*rcx_2 + 0x10))(rcx_2, var_320)
