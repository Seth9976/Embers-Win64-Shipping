// 函数: sub_1406d1ed0
// 地址: 0x1406d1ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_58
uint64_t* arg_8 = &var_58
var_58 = 0
int32_t rbx = arg2[1].d
int64_t rsi = *arg2

if (rbx != 0)
    sub_1405a4c70(&var_58, rbx, 0)
    memcpy(var_58, rsi, rbx * 2)
else
    int32_t var_4c_1 = 0

uint64_t var_68
arg_8 = &var_68
var_68 = 0
int32_t rbx_1 = arg1[1].d
int64_t rdi_1 = *arg1

if (rbx_1 != 0)
    sub_1405a4c70(&var_68, rbx_1, 0)
    memcpy(var_68, rdi_1, rbx_1 * 2)
else
    int32_t var_5c_1 = 0

uint64_t rdi_2 = &data_142d40450
int16_t* const rax = &data_142d40450

if (rbx != 0)
    rax = var_58

arg_8 = rax
int64_t var_48
sub_1406b35b0(&var_48, &data_143cdf120, &arg_8)
uint64_t var_78 = 0
char result

if (rbx_1 s> 1)
    int32_t var_70_1 = 0
    sub_1405947f0(&var_78, 7)
    int32_t rax_1 = var_70_1 + 7
    var_70_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_78)
    
    UnDecorator::getReferenceType(var_78, u".style", 0xe)
    int64_t var_28
    sub_1406b37a0(&var_28, &var_68, &var_78)
    uint64_t var_38
    sub_1406c8f40(&var_38, &var_48, &var_28)
    int64_t rcx_12 = var_28
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    sub_140a464c0()
    int32_t var_30
    
    if (var_30 != 0)
        rdi_2 = var_38
    
    char const (* r8_10)[0x4] = data_14399ea08
    result = (*(r8_10 + 0x48))(&data_14399ea08, rdi_2, r8_10)
    *arg3 = result
    uint64_t rcx_13 = var_38
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)
else
    arg_8 = &var_78
    int64_t rsi_1 = var_48
    int32_t var_40
    int32_t var_70 = var_40
    
    if (var_40 != 0)
        sub_1405a4c70(&var_78, var_40, 0)
        memcpy(var_78, rsi_1, var_40 * 2)
    else
        var_70 = 0
    
    sub_140a464c0()
    
    if (var_70 != 0)
        rdi_2 = var_78
    
    char const (* r8_7)[0x4] = data_14399ea08
    result = (*(r8_7 + 0x50))(&data_14399ea08, rdi_2, r8_7)
    *arg3 = result

uint64_t rcx_14 = var_78

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = var_48

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

uint64_t rcx_16 = var_68

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

uint64_t rcx_17 = var_58

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
