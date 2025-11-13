// 函数: sub_1406d1b90
// 地址: 0x1406d1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_1a8
sub_1406ca8a0(&var_1a8, arg1)
int16_t* var_1e8
sub_140b20ee0(&var_1e8, arg2, 0)
int64_t var_208
sub_1405ea1f0(&var_208, arg1, u".style")
arg_8 = 1
int64_t var_1c8
sub_140b20ee0(&var_1c8, &var_208, 0)
int64_t rcx_4 = var_208

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int16_t* const rdi_1 = &data_142d40450
int16_t* const rax = &data_142d40450
int32_t var_1e0

if (var_1e0 != 0)
    rax = var_1e8

int16_t* const arg_18 = rax
int64_t var_1d8
sub_1406b35b0(&var_1d8, &data_143cdf120, &arg_18)
int16_t* var_1f8
sub_1406c8f40(&var_1f8, &var_1d8, &var_1c8)
int64_t var_218 = 0
int32_t var_210 = 0
int512_t zmm2 = sub_141d49a40(sub_140a1ae20(), &var_1a8, &var_218, 0, 0, 0, nullptr, 1)
arg_18 = &var_208
var_208 = 0
int64_t rsi = var_218
int32_t var_200 = var_210

if (var_210 != 0)
    sub_1405a4c70(&var_208, var_210, 0)
    memcpy(var_208, rsi, var_210 * 2)
else
    int32_t var_1fc_1 = 0

arg_18 = &var_208
int64_t var_1b8
int64_t* rax_2 = sub_140686770(&var_1b8, &var_208, zmm2)
arg_8 = 0x11
int64_t rcx_11 = var_208

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

if (&var_218 != rax_2)
    int64_t rcx_12 = var_218
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    var_218 = *rax_2
    *rax_2 = 0
    var_210 = rax_2[1].d
    var_210 = *(rax_2 + 0xc)
    rax_2[1] = 0

int64_t rcx_13 = var_1b8

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int32_t var_1f0

if (var_1f0 != 0)
    rdi_1 = var_1f8

sub_140a464c0()
char result = sub_140b27210(&var_218, rdi_1, 0, &data_14399ea08, 0)
*arg3 = result
int64_t rcx_15 = var_218

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_1f8

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = var_1d8

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t rcx_18 = var_1c8

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int16_t* rcx_19 = var_1e8

if (rcx_19 != 0)
    result = sub_140a74f90(rcx_19)

int64_t var_b0

if (var_b0 != 0)
    result = sub_140a74f90(var_b0)

int64_t var_e0

if (var_e0 != 0)
    result = sub_140a74f90(var_e0)

int64_t var_f8

if (var_f8 != 0)
    result = sub_140a74f90(var_f8)

int64_t var_158

if (var_158 != 0)
    result = sub_140a74f90(var_158)

int64_t var_188

if (var_188 != 0)
    result = sub_140a74f90(var_188)

int64_t var_198

if (var_198 != 0)
    result = sub_140a74f90(var_198)

int64_t rcx_26 = var_1a8

if (rcx_26 == 0)
    return result

return sub_140a74f90(rcx_26)
