// 函数: sub_14083d1c0
// 地址: 0x14083d1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbx = &data_142d40450

if (arg2[1].d != 0)
    *arg2

int64_t* var_48
int64_t** rax = sub_14082fa30(*(arg1 + 0x28), &var_48)
int64_t* r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

int16_t* var_58
sub_140a2e390(&var_58, u"%s%s", r8)
int64_t* rcx_2 = var_48

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t var_50

if (var_50 != 0)
    rbx = var_58

int64_t arg_8
sub_140b58260(&arg_8, rbx, 1)
int64_t var_38 = arg_8
int64_t var_30 = data_14396f0b8
int16_t var_28 = data_14396f0c0
int64_t var_20 = 0
int64_t var_18 = 0
int32_t var_26 = 0xffffffff
int64_t result = (*(*(arg1 + 0x40) + 0x30))(arg1 + 0x40, &var_38)

if (result != 0)
    result = sx.q(*result)
    
    if (result.d != 0xffffffff)
        result += *(arg1 + 0x60)
        *result = arg3
        *(arg1 + 0xf0) |= 1

if (var_20 != 0)
    result = sub_140a74f90(var_20)

int16_t* rcx_6 = var_58

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
