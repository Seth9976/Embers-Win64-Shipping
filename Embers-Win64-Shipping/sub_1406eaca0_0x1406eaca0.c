// 函数: sub_1406eaca0
// 地址: 0x1406eaca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(arg1[2], 0).b == 0
int64_t result
result.b = arg1[3] != 0
result.b |= r8
int64_t* r14

if (result.b == 0)
label_1406eae47:
    r14 = &arg2[4]
label_1406eae4b:
    int64_t rcx_21 = *r14
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int64_t rcx_22 = arg2[2]
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    int64_t rcx_23 = *arg2
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
    
    result.b = 0
else
    result = sub_140d3c6e0(arg1)
    
    if (result == 0)
        goto label_1406eae47
    
    r14 = &arg2[4]
    
    if (sub_140d1fd20(result, *(arg1 + 8)) == 0)
        goto label_1406eae4b
    
    int64_t var_50
    sub_140596d10(&var_50, arg2)
    int64_t var_40
    sub_140596d10(&var_40, &arg2[2])
    int64_t var_30
    sub_140596d10(&var_30, r14)
    char rax = arg2[6].b
    uint64_t var_88 = 0
    int64_t var_80
    __builtin_memset(&var_80, 0, 0x29)
    sub_140597df0(&var_88, &var_50)
    uint64_t var_78
    sub_140597df0(&var_78, &var_40)
    uint64_t var_68
    sub_140597df0(&var_68, &var_30)
    int64_t* rax_2 = sub_140d3c6e0(arg1)
    int64_t rax_3 = sub_140d1fd30(rax_2, *(arg1 + 8))
    int64_t r9_1 = *rax_2
    int64_t var_70
    int64_t var_60
    (*(r9_1 + 0x210))(rax_2, rax_3, &var_88, r9_1, var_88, var_80, var_78, var_70, var_68, var_60, 
        rax)
    uint64_t rcx_12 = var_68
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    uint64_t rcx_13 = var_78
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    uint64_t rcx_14 = var_88
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    int64_t rcx_15 = var_30
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
    
    int64_t rcx_16 = var_40
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int64_t rcx_17 = var_50
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int64_t rcx_18 = *r14
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    int64_t rcx_19 = arg2[2]
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = *arg2
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    result.b = 1
return result
