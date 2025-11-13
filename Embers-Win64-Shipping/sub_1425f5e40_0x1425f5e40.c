// 函数: sub_1425f5e40
// 地址: 0x1425f5e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140b2b230(&var_38)
void* result
int64_t var_58
int32_t var_4c
int64_t var_48
int32_t var_3c
int32_t var_30
void var_28

if (*(arg1 + 0x31) == 0)
    int32_t rsi_2 = *(arg1 + 0x40)
    int32_t rcx_8
    int64_t r14_3
    
    if (var_30 s> 1)
        int32_t r15_3 = rsi_2 - 1
        
        if (rsi_2 == 0)
            r15_3 = 0
        
        int32_t rax_2
        
        if (var_30 == 0)
            rax_2 = var_30 + 1
        
        if (var_30 != 0 || r15_3 == 0)
            rax_2 = 0
        
        int64_t rsi_3 = var_38
        int32_t rcx_11 = rax_2 + r15_3
        var_58 = 0
        
        if (var_30 != 0 || rcx_11 != 0)
            sub_1405a4c70(&var_58, rcx_11 + var_30, 0)
            memcpy(var_58, rsi_3, var_30 * 2)
        else
            var_4c = 0
        
        sub_140a20ba0(&var_58, *(arg1 + 0x38), r15_3)
        rcx_8 = var_4c
        r14_3 = var_58
        rsi_2 = var_30
        int32_t var_50_2
        var_50_2.q = 0
        var_58 = 0
    else
        int64_t r15_2 = *(arg1 + 0x38)
        r14_3 = 0
        var_48 = 0
        
        if (rsi_2 != 0)
            sub_1405a4c70(&var_48, rsi_2, 0)
            r14_3 = var_48
            memcpy(r14_3, r15_2, rsi_2 * 2)
            rcx_8 = var_3c
        else
            rcx_8 = 0
    
    var_48 = r14_3
    int32_t rax_3
    rax_3.b = rsi_2 == 0
    int32_t rdx_10 = rsi_2 + 4 + rax_3
    
    if (rdx_10 s> rcx_8)
        sub_1405947f0(&var_48, rdx_10)
    
    sub_140a20ba0(&var_48, u".mp4", 4)
    int64_t rsi_4 = var_48
    result = &var_28
    var_48 = 0
    int32_t var_40_2
    var_40_2.q = 0
    
    if (arg1 + 0x48 != &var_28)
        int64_t rcx_17 = *(arg1 + 0x48)
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        *(arg1 + 0x48) = rsi_4
        *(arg1 + 0x50) = rsi_2
        *(arg1 + 0x54) = rcx_8
    else if (rsi_4 != 0)
        result = sub_140a74f90(rsi_4)
else
    *(arg1 + 0x58) += 1
    int16_t* const r8_1
    
    if (*(arg1 + 0x40) == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *(arg1 + 0x38)
    
    sub_140a2e390(&var_48, u"%s_%d.mp4", r8_1)
    int32_t var_40
    int32_t r14 = var_40
    int64_t rsi_1
    int32_t r15
    
    if (var_30 s> 1)
        int32_t r14_1
        
        if (r14 == 0)
            r14_1 = 0
        else
            r14_1 = r14 - 1
        
        int32_t rax_1
        
        if (var_30 == 0)
            rax_1 = var_30 + 1
        
        if (var_30 != 0 || r14_1 == 0)
            rax_1 = 0
        
        int64_t r15_1 = var_38
        int32_t rcx_2 = rax_1 + r14_1
        var_58 = 0
        
        if (var_30 != 0 || rcx_2 != 0)
            sub_1405a4c70(&var_58, rcx_2 + var_30, 0)
            memcpy(var_58, r15_1, var_30 * 2)
        else
            var_4c = 0
        
        sub_140a20ba0(&var_58, var_48, r14_1)
        rsi_1 = var_58
        r14 = var_30
        r15 = var_4c
        var_58 = 0
        int32_t var_50_1
        var_50_1.q = 0
    else
        rsi_1 = var_48
        r15 = var_3c
        var_48 = 0
        var_40.q = 0
    
    result = &var_28
    
    if (arg1 + 0x48 != &var_28)
        int64_t rcx_6 = *(arg1 + 0x48)
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        *(arg1 + 0x48) = rsi_1
        *(arg1 + 0x50) = r14
        *(arg1 + 0x54) = r15
    else if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)
    
    int64_t rcx_18 = var_48
    
    if (rcx_18 != 0)
        result = sub_140a74f90(rcx_18)
int64_t rcx_19 = var_38

if (rcx_19 == 0)
    return result

return sub_140a74f90(rcx_19)
