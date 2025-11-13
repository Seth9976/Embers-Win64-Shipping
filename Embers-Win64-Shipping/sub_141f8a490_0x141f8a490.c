// 函数: sub_141f8a490
// 地址: 0x141f8a490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(*(arg1 + 0x28) + 0xa4) u>> 1).b & 1) == 0)
    return 0

int64_t var_68 = 0
int64_t var_60 = 0
sub_1405947f0(&var_68, 0xf)
int32_t rsi = var_60:4.d
int32_t rbx = var_60.d + 0xf
var_60.d = rbx

if (rbx s> rsi)
    sub_140594770(&var_68)
    rsi = var_60:4.d
    rbx = var_60.d

int64_t rdi = var_68
UnDecorator::getReferenceType(rdi, u"_ClassNetCache", 0x1e)
int64_t arg_8 = *(arg2 + 0x18)
int64_t var_58
sub_140b63b70(&arg_8, &var_58)
int32_t var_50
int64_t var_48

if (var_50 s> 1)
    int32_t rbx_1
    
    if (rbx == 0)
        rbx_1 = 0
    else
        rbx_1 = rbx - 1
    
    int32_t rcx_4
    
    if (var_50 == 0)
        rcx_4 = var_50 + 1
    
    if (var_50 != 0 || rbx_1 == 0)
        rcx_4 = 0
    
    var_60.d = var_50
    int32_t rdx_4 = var_50 + rcx_4 + rbx_1
    var_68 = var_58
    var_58 = 0
    int32_t var_4c
    var_60:4.d = var_4c
    var_50.q = 0
    
    if (rdx_4 s> var_4c)
        sub_1405947f0(&var_68, rdx_4)
    
    sub_140a20ba0(&var_68, rdi, rbx_1)
    var_48 = var_68
    int32_t var_40_1 = var_60.d
    int32_t var_3c_1 = var_60:4.d
else
    var_48 = rdi
    rdi = 0
    int32_t var_40 = rbx
    int32_t var_3c = rsi

int64_t rcx_7 = var_58

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t result_1
sub_142168720(*(*(arg1 + 0x28) + 0x68), &result_1, &var_48)
int64_t result = result_1
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_4 = *var_30
            (*(r8_4 + 8))(var_30, 1, r8_4)

int64_t rcx_13 = var_48

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return result
