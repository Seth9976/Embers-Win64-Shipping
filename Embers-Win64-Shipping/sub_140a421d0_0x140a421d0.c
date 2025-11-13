// 函数: sub_140a421d0
// 地址: 0x140a421d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_140a46530(&var_18)
int16_t* var_38
sub_140b18970(&var_38, &var_18)
int16_t* const rax = &data_142d40450
int16_t* const rcx_2 = &data_142d40450
int32_t var_30

if (var_30 != 0)
    rcx_2 = var_38

if (arg1[1].d != 0)
    rax = *arg1

int16_t* const var_28 = rax
int16_t* const var_20 = rcx_2
uint64_t var_48 = 0
int64_t var_40 = 0
int64_t result = sub_140b0f5f0(&var_48, &var_28, 2)
uint64_t rcx_4 = var_48

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int16_t* rcx_5 = var_38

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = var_18

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
