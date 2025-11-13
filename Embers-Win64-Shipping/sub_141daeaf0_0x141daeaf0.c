// 函数: sub_141daeaf0
// 地址: 0x141daeaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result
void** const var_28

if (*(arg1 + 0x230) s> 1)
    int64_t* rax_1 = sub_141802500()
    int64_t r8 = *rax_1
    int64_t* var_48
    (*(r8 + 0x40))(rax_1, &var_48, r8)
    int16_t* const r8_1 = &data_142d40450
    int64_t* rsi_1 = var_48
    
    if (arg2[1].d != 0)
        *arg2
    
    if (*(arg1 + 0x230) != 0)
        r8_1 = *(arg1 + 0x228)
    
    int64_t var_38
    sub_140a2e390(&var_38, u"%sevent/%s", r8_1)
    (*(*rsi_1 + 0x50))(rsi_1, &var_38)
    int64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t* var_78 = nullptr
    int32_t var_70_1 = 0
    sub_1405947f0(&var_78, 4)
    int32_t rax_3 = var_70_1 + 4
    var_70_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_78)
    
    UnDecorator::getReferenceType(var_78, &data_142d85f90, 8)
    int64_t* rcx_9 = var_48
    (*(*rcx_9 + 0x48))(rcx_9, &var_78)
    int64_t* rcx_10 = var_78
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t* rsi_2 = var_48
    var_78 = nullptr
    var_70_1 = 0
    
    if (arg3 != &var_78 && arg3[1].d != 0)
        int64_t* rcx_11 = *arg3
        
        if (rcx_11 != 0)
            (*(*rcx_11 + 0x40))(rcx_11, &var_78)
    
    int64_t* rax_7 = (*(*rsi_2 + 0x90))(rsi_2)
    int64_t* rcx_13 = nullptr
    int32_t rdx_6 = 0
    int64_t* var_58 = nullptr
    int32_t var_50_1 = 0
    
    if (var_70_1 != 0)
        int64_t* rax_8 = var_78
        
        if (rax_8 != 0)
            int64_t r8_2 = *rax_8
            (*(r8_2 + 0x40))(rax_8, &var_58, r8_2)
            rdx_6 = var_50_1
            rcx_13 = var_58
    
    int64_t* var_68 = nullptr
    int32_t var_60_1 = 0
    
    if (rdx_6 != 0 && rcx_13 != 0)
        (*(*rcx_13 + 0x40))(rcx_13, &var_68)
    
    void*** rax_10 = sub_140a84c80(0, 0x30, 0)
    
    if (rax_10 != 0)
        var_38 = 0
        int32_t var_30_1 = 0
        
        if (var_60_1 != 0)
            int64_t* rcx_15 = var_68
            
            if (rcx_15 != 0)
                int64_t r8_3 = *rcx_15
                (*(r8_3 + 0x40))(rcx_15, &var_38, r8_3)
        
        sub_141da5090(rax_10, arg1, sub_141dac8d0, &var_38)
    
    sub_140745b20(&var_68)
    sub_140745b20(&var_58)
    
    if (&var_28 == rax_7)
        goto label_141daed36
    
    if (rax_10 != 0)
        (*rax_10)[8](rax_10, rax_7)
    label_141daed36:
        
        if (rax_10 != 0)
            (*rax_10)[7](rax_10, 0)
            int64_t rax_13 = sub_140a84c80(rax_10, 0, 0)
            
            if (rax_13 != 0)
                sub_140a74f90(rax_13)
    else if (rax_7[1].d != 0)
        int64_t* rcx_27 = *rax_7
        
        if (rcx_27 != 0)
            (*(*rcx_27 + 0x38))(rcx_27, 0)
            int64_t rcx_28 = *rax_7
            
            if (rcx_28 != 0)
                *rax_7 = sub_140a84c80(rcx_28, 0, 0)
            
            rax_7[1].d = 0
    
    sub_140745b20(&var_78)
    uint128_t zmm0_1 = var_48.o
    var_38.o = zmm0_1
    void* rax_14 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    result = sub_141da6730(arg1, 0xf, &var_38, 0, 0)
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            result = (**var_40)(var_40)
            int32_t temp1_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*var_40 + 8))(var_40, 1)
else
    int64_t* rbx_1 = nullptr
    int64_t var_20_1 = 6
    int64_t var_18_1 = 0
    var_28 = &data_1432388d8
    int64_t var_10_1 = 0
    
    if (arg3[1].d != 0)
        rbx_1 = *arg3
    
    result = (*(*rbx_1 + 0x48))(rbx_1, &var_28)
    
    if (var_18_1 != 0)
        return sub_140a74f90(var_18_1)
return result
