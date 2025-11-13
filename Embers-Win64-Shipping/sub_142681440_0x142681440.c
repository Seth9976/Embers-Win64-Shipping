// 函数: sub_142681440
// 地址: 0x142681440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(data_143dbb1f8.q)
void** const var_48 = &data_143459b08
uint64_t var_5c = zmm0.q
uint64_t var_38 = 0
int64_t var_30
__builtin_memset(&var_30, 0, 0x19)
int64_t var_14 = 0
int32_t rax = data_143dbb200
int32_t var_60 = rax
int32_t var_54 = rax
int32_t var_c = 0x3f800000
void* var_40 = arg2
zmm0.q = zmm0.q
*(arg2 + 0x30) = zmm0
*(arg2 + 0x40) = var_5c
*(arg2 + 0x48) = 0.d
void** var_28
sub_1426811a0(arg1, &var_38, &var_28, arg2 + 0x30)
int64_t result = sub_142696ee0(&var_48)
void** rcx_1 = var_28

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

uint64_t rcx_2 = var_38

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
