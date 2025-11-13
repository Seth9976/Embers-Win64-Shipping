// 函数: sub_140902dc0
// 地址: 0x140902dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
int64_t var_18
int64_t* rax = sub_140902690(arg1, &var_18)
int16_t* const rbx_1 = &data_142d40450
int16_t* const var_28

if (rax[1].d == 0)
    var_28 = &data_142d40450
else
    var_28 = *rax

int32_t* const var_20 = &data_142d6bbe8
uint64_t var_38 = 0
int32_t var_30 = 0
sub_140b0f5f0(&var_38, &var_28, 2)

if (var_30 != 0)
    rbx_1 = var_38

int64_t result = (*(data_14399ea08 + 0x78))(&data_14399ea08, arg2, rbx_1, 0, 1)
uint64_t rcx_3 = var_38

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
