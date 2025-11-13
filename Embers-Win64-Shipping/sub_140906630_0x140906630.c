// 函数: sub_140906630
// 地址: 0x140906630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58
sub_140b1a780(&var_58, arg2)
int32_t var_50
int32_t rbx = var_50

if (rbx s<= 1)
    goto label_1409068a3

int32_t r15_1 = 1
int64_t* result

if (sub_140a32ae0(&var_58, &data_142d404c4, 1) != 0)
    rbx = var_50
label_1409068a3:
    result = &var_58
    
    if (arg1 + 0xa0 != &var_58)
        int64_t rsi_3 = var_58
        int32_t r8_7 = *(arg1 + 0xac)
        *(arg1 + 0xa8) = rbx
        
        if (rbx != 0 || r8_7 != 0)
            sub_1405a4c70(arg1 + 0xa0, rbx, r8_7)
            result = memcpy(*(arg1 + 0xa0), rsi_3, rbx * 2)
        else
            *(arg1 + 0xac) = 0
else
    int64_t var_78
    sub_140b11c80(&var_78, &var_58)
    int64_t var_48
    int16_t* var_38
    sub_140b11a30(&var_38, sub_140b25050(&var_48))
    int64_t rcx_5 = var_48
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int32_t rdi_2
    int32_t var_70
    
    if (sub_140a32a50(&var_78, &var_38, 1) == 0)
        rdi_2 = var_70
    else
        int16_t* const rdx_3 = &data_142d40450
        int32_t var_30
        
        if (var_30 != 0)
            rdx_3 = var_38
        
        sub_140b20770(&var_78, rdx_3)
        int64_t var_68 = 0
        int32_t var_60_1 = 0
        sub_1405947f0(&var_68, 3)
        int32_t var_5c
        int32_t r12_1 = var_5c
        int32_t rdi_1 = var_60_1 + 3
        
        if (rdi_1 s> r12_1)
            sub_140594770(&var_68)
            r12_1 = var_5c
        
        int64_t rsi_1 = var_68
        UnDecorator::getReferenceType(rsi_1, &data_142e1ac80, 6)
        int32_t r12_2
        int64_t r14_1
        int64_t r15_2
        
        if (rdi_1 s> 1)
            int32_t r14_3
            
            if (var_70 == 0)
                r14_3 = 0
            else
                r14_3 = var_70 - 1
            
            if (rdi_1 != 0 || r14_3 == 0)
                r15_1 = 0
            
            var_68 = rsi_1
            int32_t rdx_8 = r15_1 + rdi_1 + r14_3
            rsi_1 = 0
            
            if (rdx_8 s> r12_1)
                sub_1405947f0(&var_68, rdx_8)
            
            sub_140a20ba0(&var_68, var_78, r14_3)
            r15_2 = var_68
            rdi_2 = rdi_1
            r12_2 = r12_1
            var_68 = 0
            int64_t var_60_2 = 0
            r14_1 = var_78
        else
            rdi_2 = var_70
            r14_1 = var_78
            var_48 = 0
            
            if (rdi_2 != 0)
                sub_1405a4c70(&var_48, rdi_2, 0)
                r15_2 = var_48
                memcpy(r15_2, r14_1, rdi_2 * 2)
                int32_t var_3c
                r12_2 = var_3c
                r14_1 = var_78
            else
                r12_2 = 0
                r15_2 = 0
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        int32_t var_6c_1 = r12_2
        var_78 = r15_2
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
            rdi_2 = rdi_2
    result = &var_78
    
    if (arg1 + 0xa0 != &var_78)
        int64_t r14_4 = var_78
        int32_t r8_4 = *(arg1 + 0xac)
        *(arg1 + 0xa8) = rdi_2
        
        if (rdi_2 != 0 || r8_4 != 0)
            sub_1405a4c70(arg1 + 0xa0, rdi_2, r8_4)
            result = memcpy(*(arg1 + 0xa0), r14_4, rdi_2 * 2)
        else
            *(arg1 + 0xac) = 0
    
    int16_t* rcx_19 = var_38
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = var_78
    
    if (rcx_20 != 0)
        result = sub_140a74f90(rcx_20)

int64_t rcx_23 = var_58

if (rcx_23 == 0)
    return result

return sub_140a74f90(rcx_23)
