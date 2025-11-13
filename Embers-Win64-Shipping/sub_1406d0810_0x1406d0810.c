// 函数: sub_1406d0810
// 地址: 0x1406d0810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
sub_1406c8fb0(&var_28, &data_143cdf120)
uint64_t var_48
uint64_t* arg_8 = &var_48
var_48 = 0
int32_t rbx = arg1[1].d
int64_t rsi = *arg1

if (rbx != 0)
    sub_1405a4c70(&var_48, rbx, 0)
    memcpy(var_48, rsi, rbx * 2)
else
    int32_t var_3c_1 = 0

int16_t* var_38
int64_t var_18
sub_1406c8f40(&var_38, &var_28, sub_140b18970(&var_18, arg1))
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140a464c0()
int16_t* const rdx_4 = &data_142d40450
int16_t* const r8_4 = &data_142d40450

if (rbx != 0)
    r8_4 = var_48

int32_t var_30

if (var_30 != 0)
    rdx_4 = var_38

char result = (*(data_14399ea08 + 0x40))(&data_14399ea08, rdx_4, r8_4, 0, 1, 0, 1)
*arg2 = result
int16_t* rcx_6 = var_38

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

uint64_t rcx_7 = var_48

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = var_28

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
