// 函数: sub_141d6d3d0
// 地址: 0x141d6d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1e].b != 3)
    return sub_141d673e0(arg1, arg2) __tailcall

int64_t arg_18 = arg1[3]
int16_t* var_18
sub_140b63b70(&arg_18, &var_18)
int16_t* const rbx = &data_142d40450
int16_t* const r8 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    r8 = var_18

int16_t* var_28
sub_140a2e390(&var_28, u"Cannot synchronize when Sequence has authority (%s)", r8)
int32_t var_20

if (var_20 != 0)
    rbx = var_28

int64_t result = sub_140d23f50(rbx, 3)
int16_t* rcx_3 = var_28

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int16_t* rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
