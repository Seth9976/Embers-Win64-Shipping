// 函数: sub_141c7e460
// 地址: 0x141c7e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *(*(arg1 + 0x10) + 0x18)
int64_t var_58
sub_140b63b70(&arg_8, &var_58)
int64_t arg_10 = *(arg1 + 0x18)
int64_t var_48
int32_t rcx_2 = sub_140b63b70(&arg_10, &var_48)
int32_t var_40
int32_t var_70 = var_40
int64_t var_78 = var_48
var_48 = 0
int32_t rdx_3 = var_40 + sbb.d(rcx_2, rcx_2, var_40 != 0) + 2
var_40.q = 0
int32_t var_3c

if (rdx_3 s> var_3c)
    sub_1405947f0(&var_78, rdx_3)

int32_t r14 = 1
sub_140a20ba0(&var_78, &data_142d404d4, 1)
int32_t rax_5 = var_70
int64_t rsi = var_78
var_78 = 0
var_70.q = 0
int64_t rbx_1
int32_t r14_1
int32_t r15
int32_t var_50

if (rax_5 s> 1)
    int32_t rbx_3
    
    if (var_50 == 0)
        rbx_3 = 0
    else
        rbx_3 = var_50 - 1
    
    if (rax_5 != 0 || rbx_3 == 0)
        r14 = 0
    
    int64_t var_68 = rsi
    int32_t rdx_5 = r14 + rax_5 + rbx_3
    
    if (rdx_5 s> var_3c)
        sub_1405947f0(&var_68, rdx_5)
    
    sub_140a20ba0(&var_68, var_58, rbx_3)
    rbx_1 = var_68
    rsi = 0
    r14_1 = rax_5
    r15 = var_3c
    var_68 = 0
    int32_t var_60_1
    var_60_1.q = 0
else
    rbx_1 = var_58
    r14_1 = var_50
    int32_t var_4c
    r15 = var_4c
    var_58 = 0
    var_50.q = 0
void var_38
void* result = &var_38

if (arg2 != &var_38)
    int64_t rcx_10 = *arg2
    
    if (rcx_10 != 0)
        result = sub_140a74f90(rcx_10)
    
    *arg2 = rbx_1
    arg2[1].d = r14_1
    *(arg2 + 0xc) = r15
else if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

if (rsi != 0)
    result = sub_140a74f90(rsi)

int64_t rcx_13 = var_48

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = var_58

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
