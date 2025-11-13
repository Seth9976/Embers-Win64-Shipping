// 函数: sub_1418b6820
// 地址: 0x1418b6820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_98 = nullptr
int32_t i_2 = 0
sub_140a2ccb0(arg2, &var_98, U",", 1)
char result = (*(*arg1 + 0xd8))(arg1, &var_98)

if (result != 0)
    int64_t* rax_2 = var_98
    int16_t* var_58 = nullptr
    int32_t rbx_1 = rax_2[1].d
    int64_t rdi_1 = *rax_2
    int32_t var_50_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_58, rbx_1, 0)
        memcpy(var_58, rdi_1, rbx_1 * 2)
    else
        int32_t var_4c_1 = 0
    
    _DeleteExceptionPtr(&var_58)
    int64_t var_88 = 0
    int32_t var_80_1 = 0
    sub_1405947f0(&var_88, 2)
    int32_t rax_3 = var_80_1 + 2
    var_80_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_88)
    
    sub_1405a7220(var_88, 2, U"(", 2, 0x3f)
    sub_140a2fba0(&var_58, &var_88, 1)
    int64_t rcx_9 = var_88
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t* rax_4 = var_98
    int64_t var_68 = 0
    int32_t rbx_2 = rax_4[3].d
    int64_t rdi_2 = rax_4[2]
    
    if (rbx_2 != 0)
        sub_1405a4c70(&var_68, rbx_2, 0)
        memcpy(var_68, rdi_2, rbx_2 * 2)
    else
        int32_t var_5c_1 = 0
    
    _DeleteExceptionPtr(&var_68)
    int64_t* rax_5 = var_98
    int64_t var_78 = 0
    int32_t rbx_3 = rax_5[5].d
    int64_t rdi_3 = rax_5[4]
    
    if (rbx_3 != 0)
        sub_1405a4c70(&var_78, rbx_3, 0)
        memcpy(var_78, rdi_3, rbx_3 * 2)
    else
        int32_t var_6c_1 = 0
    
    int64_t zmm0_1 = _DeleteExceptionPtr(&var_78)
    int64_t* rax_6 = var_98
    wchar16* _String
    
    if (rax_6[7].d == 0)
        _String = &data_142d40450
    else
        _String = rax_6[6]
    
    _wtof(_String)
    int64_t rdi_4 = var_68
    uint64_t var_48 = 0
    int32_t var_40_1 = rbx_2
    int128_t zmm6
    zmm6.d = fconvert.s(zmm0_1)
    
    if (rbx_2 != 0)
        sub_1405a4c70(&var_48, rbx_2, 0)
        memcpy(var_48, rdi_4, rbx_2 * 2)
    else
        int32_t var_3c_1 = 0
    
    int64_t rdi_5 = var_78
    uint64_t var_38 = 0
    int32_t var_30_1 = rbx_3
    
    if (rbx_3 != 0)
        sub_1405a4c70(&var_38, rbx_3, 0)
        memcpy(var_38, rdi_5, rbx_3 * 2)
    else
        int32_t var_2c_1 = 0
    
    int32_t var_28_1 = zmm6.d
    result = (*(*arg1 + 0x50))(arg1, &var_58, &var_48)
    uint64_t rcx_21 = var_38
    
    if (rcx_21 != 0)
        result = sub_140a74f90(rcx_21)
    
    uint64_t rcx_22 = var_48
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)
    
    int64_t rcx_23 = var_78
    
    if (rcx_23 != 0)
        result = sub_140a74f90(rcx_23)
    
    int64_t rcx_24 = var_68
    
    if (rcx_24 != 0)
        result = sub_140a74f90(rcx_24)
    
    int16_t* rcx_25 = var_58
    
    if (rcx_25 != 0)
        result = sub_140a74f90(rcx_25)

int32_t i_1 = i_2
int64_t* rbx_6 = var_98

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_26 = *rbx_6
        
        if (rcx_26 != 0)
            result = sub_140a74f90(rcx_26)
        
        rbx_6 = &rbx_6[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_6 = var_98

if (rbx_6 == 0)
    return result

return sub_140a74f90(rbx_6)
