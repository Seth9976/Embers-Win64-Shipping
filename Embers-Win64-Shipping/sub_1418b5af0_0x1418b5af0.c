// 函数: sub_1418b5af0
// 地址: 0x1418b5af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = nullptr
int32_t i_2 = 0
sub_140a2ccb0(arg2, &var_38, U",", 1)
char result = (*(*arg1 + 0xc8))(arg1, &var_38)

if (result != 0)
    int64_t* rax_2 = var_38
    int16_t* var_28 = nullptr
    int32_t rbx_1 = rax_2[1].d
    int64_t rsi_1 = *rax_2
    int32_t var_20_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_28, rbx_1, 0)
        memcpy(var_28, rsi_1, rbx_1 * 2)
    else
        int32_t var_1c_1 = 0
    
    _DeleteExceptionPtr(&var_28)
    int64_t var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 2)
    int32_t rax_3 = var_40_1 + 2
    var_40_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_48)
    
    sub_1405a7220(var_48, 2, U"(", 2, 0x3f)
    sub_140a2fba0(&var_28, &var_48, 1)
    int64_t rcx_9 = var_48
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    int64_t* rax_4 = var_38
    int64_t var_18 = 0
    int32_t rbx_2 = rax_4[3].d
    int64_t rsi_2 = rax_4[2]
    int32_t var_10_1 = rbx_2
    
    if (rbx_2 != 0)
        sub_1405a4c70(&var_18, rbx_2, 0)
        memcpy(var_18, rsi_2, rbx_2 * 2)
    else
        int32_t var_c_1 = 0
    
    _DeleteExceptionPtr(&var_18)
    int64_t* rax_5 = var_38
    int16_t* var_58 = nullptr
    int32_t rbx_3 = rax_5[5].d
    int64_t rsi_3 = rax_5[4]
    
    if (rbx_3 != 0)
        sub_1405a4c70(&var_58, rbx_3, 0)
        memcpy(var_58, rsi_3, rbx_3 * 2)
    else
        int32_t var_4c_1 = 0
    
    _DeleteExceptionPtr(&var_58)
    sub_140a2fa70(&var_58, &data_142da76f4, 1)
    int16_t* const rcx_17 = &data_142d40450
    int16_t* rdx_10 = &data_142d40450
    
    if (data_143efaf18 != 0)
        rdx_10 = data_143efaf10
    
    if (rbx_3 != 0)
        rcx_17 = var_58
    
    if (sub_140a54510(rcx_17, rdx_10) != 0)
        int64_t* rax_8 = (*(*arg1 + 0xb8))(arg1, &var_48, &var_58)
        
        if (&var_58 != rax_8)
            int16_t* rcx_19 = var_58
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            var_58 = *rax_8
            *rax_8 = 0
            int32_t var_50_2 = rax_8[1].d
            int32_t var_4c_2 = *(rax_8 + 0xc)
            rax_8[1] = 0
        
        int64_t rcx_21 = var_48
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
    
    result = (*(*arg1 + 0x58))(arg1, &var_28, &var_18, &var_58)
    int16_t* rcx_23 = var_58
    
    if (rcx_23 != 0)
        result = sub_140a74f90(rcx_23)
    
    int64_t rcx_24 = var_18
    
    if (rcx_24 != 0)
        result = sub_140a74f90(rcx_24)
    
    int16_t* rcx_25 = var_28
    
    if (rcx_25 != 0)
        result = sub_140a74f90(rcx_25)

int32_t i_1 = i_2
int64_t* rbx_5 = var_38

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_26 = *rbx_5
        
        if (rcx_26 != 0)
            result = sub_140a74f90(rcx_26)
        
        rbx_5 = &rbx_5[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_5 = var_38

if (rbx_5 == 0)
    return result

return sub_140a74f90(rbx_5)
