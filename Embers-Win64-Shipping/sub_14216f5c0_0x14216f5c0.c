// 函数: sub_14216f5c0
// 地址: 0x14216f5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_60 = arg2
int32_t arg_10
sub_1405ba560(&data_143a2ec78, &arg_10, arg2)
int64_t rax = sx.q(arg_10)
void* const rcx_2

if (rax.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = (rax << 5) + data_143a2ec78

int64_t* result = rcx_2 + 8

if (rcx_2 == 0)
    result = nullptr

if (result != 0)
    int128_t zmm6
    zmm6.q = arg4.q f+ *result
    *result = zmm6.q
    return result

int64_t var_68 = *(arg2 + 0x18)
int16_t* var_50
sub_140b63b70(&var_68, &var_50)
int16_t* const rdx_2 = &data_142d40450
int32_t var_48

if (var_48 != 0)
    rdx_2 = var_50

void var_58
int64_t* rax_2
int64_t zmm6_1
rax_2, zmm6_1 = sub_140b58260(&var_58, rdx_2, 1)
int64_t var_38 = *rax_2
int16_t* rcx_6 = var_50

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t var_40 = zmm6_1
void** var_30 = &var_60
int64_t* var_28 = &var_40
return sub_14215a2a0(&data_143a2ec78, &arg_10, &var_30, nullptr)
