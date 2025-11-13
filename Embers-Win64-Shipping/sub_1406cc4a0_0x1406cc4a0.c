// 函数: sub_1406cc4a0
// 地址: 0x1406cc4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_68
uint64_t* arg_8 = &var_68
var_68 = 0
int32_t rbx = arg2[1].d
int64_t rsi = *arg2

if (rbx != 0)
    sub_1405a4c70(&var_68, rbx, 0)
    memcpy(var_68, rsi, rbx * 2)
else
    int32_t var_5c_1 = 0

uint64_t var_58
arg_8 = &var_58
var_58 = 0
int32_t rbx_1 = arg1[1].d
int64_t rsi_1 = *arg1
int32_t var_50 = rbx_1

if (rbx_1 != 0)
    sub_1405a4c70(&var_58, rbx_1, 0)
    memcpy(var_58, rsi_1, rbx_1 * 2)
else
    int32_t var_4c_1 = 0

int16_t* const rbx_2 = &data_142d40450
uint64_t* rax = &data_142d40450

if (rbx != 0)
    rax = var_68

arg_8 = rax
int16_t* var_48
sub_1406b35b0(&var_48, &data_143cdf120, &arg_8)
char result

if (arg1[1].d s> 1)
    int64_t var_78 = 0
    int32_t var_70_1 = 0
    sub_1405947f0(&var_78, 7)
    int32_t rax_1 = var_70_1 + 7
    var_70_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_78)
    
    UnDecorator::getReferenceType(var_78, u".style", 0xe)
    int64_t var_28
    sub_1406b37a0(&var_28, &var_58, &var_78)
    int16_t* var_38
    sub_1406c8f40(&var_38, &var_48, &var_28)
    int64_t rcx_11 = var_28
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    sub_140a464c0()
    int32_t var_30
    
    if (var_30 != 0)
        rbx_2 = var_38
    
    result = (*(data_14399ea08 + 0x30))(&data_14399ea08, rbx_2, 0, 0, 0)
    *arg3 = result
    int16_t* rcx_12 = var_38
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_78
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)
else
    int32_t var_40
    
    if (var_40 != 0)
        rbx_2 = var_48
    
    result = sub_1406d3d50(rbx_2)
    *arg3 = result

int16_t* rcx_14 = var_48

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

uint64_t rcx_15 = var_58

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

uint64_t rcx_16 = var_68

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
