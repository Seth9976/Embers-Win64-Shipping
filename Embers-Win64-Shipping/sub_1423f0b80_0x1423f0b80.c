// 函数: sub_1423f0b80
// 地址: 0x1423f0b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = arg2
int64_t arg_8 = arg2
int64_t var_28
int64_t* rax = sub_140b63b70(&arg_8, &var_28)
int16_t* const rbx = &data_142d40450

if (rax[1].d != 0)
    *rax

int64_t arg_10 = *(arg3 + 0x90)
int64_t var_38
int64_t* rax_2 = sub_140b63b70(&arg_10, &var_38)
int16_t* const r8

if (rax_2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_2

int16_t* var_48
sub_140a2e390(&var_48, u"%s__%s__EventFunc", r8)
int32_t var_40

if (var_40 != 0)
    rbx = var_48

int64_t result_1
sub_140b58260(&result_1, rbx, 1)
int16_t* rcx_4 = var_48
int64_t result = result_1
*(arg1 + 0x18) = result

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = var_38

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = var_28

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
