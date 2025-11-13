// 函数: sub_1406cdd70
// 地址: 0x1406cdd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_88
sub_140b20ee0(&var_88, arg1, 0x5f)
int16_t* const rax = &data_142d40450
int32_t var_80

if (var_80 != 0)
    rax = var_88

int16_t* const arg_18 = rax
int64_t var_98
sub_1406b35b0(&var_98, &data_143cdf120, &arg_18)
int64_t var_a8
arg_18 = &var_a8
var_a8 = 0
int64_t rsi = var_98
int32_t var_90
int32_t var_a0 = var_90

if (var_90 != 0)
    sub_1405a4c70(&var_a8, var_90, 0)
    memcpy(var_a8, rsi, var_90 * 2)
else
    int32_t var_9c_1 = 0

int128_t var_78
sub_1406cb600(arg2, sub_1406cedb0(&var_78, &var_a8, arg3))
int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

void var_38
int64_t result = sub_1406cae40(&var_38)
int64_t var_48

if (var_48 != 0)
    result = sub_140a74f90(var_48)

int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_11 = var_78.q

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_98

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int16_t* rcx_13 = var_88

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
