// 函数: sub_141d97250
// 地址: 0x141d97250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = 0
int32_t var_a0 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x21)
int64_t* rcx = *arg1
int64_t var_70 = 0
int64_t var_68 = 0
int32_t var_60 = 0xffffffff
int64_t var_58
__builtin_memset(&var_58, 0, 0x40)
char var_78
int64_t rbx

if (sub_141da1e80(rcx, &arg1[1], &var_a8, 0) == 0 || var_78 == 0)
    rbx.b = 0
else
    rbx.b = 1

int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t var_38
sub_141d94e70(&var_38)
int64_t var_48
uint32_t result = sub_141d94e70(&var_48)
int64_t rcx_4 = var_58

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

if (var_70 != 0)
    result = sub_140a74f90(var_70)

int64_t rcx_6 = var_98

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t rsi = data_143f387e8
int64_t rcx_7

if (data_143de5480 == 0)
    rcx_7 = 0
else
    result = GetCurrentThreadId()
    rcx_7.b = result != data_143de5470

if (*(rsi + (rcx_7 << 2)) != 0 || rbx.b == 0)
    int16_t* var_b8
    sub_141d9ef80(*arg1, &var_b8, &arg1[1])
    result = sub_140b16090(&var_b8)
    
    if (result.b != 0)
        sub_140a464c0()
        int16_t* const rdx_2 = &data_142d40450
        int32_t var_b0
        
        if (var_b0 != 0)
            rdx_2 = var_b8
        
        result = (*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_2, 0, 0, 0)
        
        if (result.b != 0)
            *(arg2 + 8) = 0
    else
        *(arg2 + 8) = 2
    
    int16_t* rcx_10 = var_b8
    
    if (rcx_10 != 0)
        return sub_140a74f90(rcx_10)

return result
