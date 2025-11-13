// 函数: sub_140b178a0
// 地址: 0x140b178a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50

if (arg3 != &var_50)
    int64_t rcx = *arg3
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *arg3 = 0
    arg3[1] = 0

int16_t* const rdi = &data_142d40450
int16_t* const rsi_1

if (arg2[1].d == 0)
    rsi_1 = &data_142d40450
else
    rsi_1 = *arg2

uint32_t var_78
uint32_t var_74
uint32_t var_70
uint32_t var_6c
uint32_t arg_8
uint32_t arg_10
uint32_t arg_18
uint32_t arg_20
sub_140b734e0(&var_70, &var_74, &var_6c, &var_78, &arg_20, &arg_18, &arg_10, &arg_8)
uint32_t* var_80
var_80.d = arg_8
uint32_t* var_88
var_88.d = arg_10
uint32_t* var_90
var_90.d = arg_18
uint32_t* var_98
var_98.d = arg_20
int64_t var_68
sub_140b0a2c0(&var_68, var_70, var_74, var_78, var_98.d, var_90.d, var_88.d, var_80.d)
sub_140b28970(&var_68, &var_50, u"%Y.%m.%d-%H.%M.%S")

if (arg1[1].d != 0)
    rdi = *arg1

int16_t* const var_98_1 = rsi_1
int64_t var_60
sub_140a2e390(&var_60, u"%s_%s.%s", rdi)
int32_t result = &var_60

if (arg3 == &var_60)
    int64_t rcx_6 = var_60
    
    if (rcx_6 != 0)
        result = sub_140a74f90(rcx_6)
else
    int64_t rcx_5 = *arg3
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *arg3 = var_60
    int32_t var_58
    arg3[1].d = var_58
    int32_t result_1
    result = result_1
    *(arg3 + 0xc) = result
    var_58.q = 0
    var_60 = 0

int64_t rcx_7 = var_50

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
