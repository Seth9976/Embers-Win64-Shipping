// 函数: sub_1427e25a0
// 地址: 0x1427e25a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_1d8 = *(arg3 + 0x10)
int64_t var_1d0 = 0
int64_t var_1c8 = 0
void var_188
physx::PxShapeGeneratedInfo::PxShapeGeneratedInfo(&var_188)
int64_t var_1b8 = arg2
int64_t* var_1c0 = &var_1d8
int64_t var_1b0 = arg1
void* var_1a8 = arg3
int64_t r9
int64_t var_1a0 = r9
int128_t var_198 = zx.o(0)
sub_1427e10f0(&var_188, &var_1c0, 0)
int32_t result = var_1c8:4.d

if ((result & 0x7fffffff) == 0 || result s< 0 || var_1d0 == 0)
    return result

int64_t* rcx_2 = *var_1d8
return (*(*rcx_2 + 0x10))(rcx_2, var_1d0)
