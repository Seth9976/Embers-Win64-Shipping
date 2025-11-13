// 函数: sub_141dae020
// 地址: 0x141dae020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = arg4[1].d

if (r15 s<= 1)
    int64_t rax
    rax.b = 0
    return rax

int16_t* var_48
int16_t* var_38

if (*(arg1 + 0x40) s<= 1)
    int64_t* rbx_2 = *(arg1 + 0x10)
    int64_t* rax_6 = sub_14180a750(&var_48, arg1 + 0x60)
    int16_t* r8_7 = &data_142d40450
    int16_t* const rdx_11
    
    if (rax_6[1].d == 0)
        rdx_11 = &data_142d40450
    else
        rdx_11 = *rax_6
    
    int16_t* const rcx_17
    
    if (*(arg1 + 0x58) == 0)
        rcx_17 = &data_142d40450
    else
        rcx_17 = *(arg1 + 0x50)
    
    if (arg4[1].d != 0)
        *arg4
    
    if (arg3[1].d != 0)
        r8_7 = *arg3
    
    int32_t rax_7 = *(arg1 + 0x48)
    int16_t* const var_70_1 = rdx_11
    int32_t var_78_1 = rax_7
    int32_t var_80_1 = rax_7
    int16_t* const var_88_1 = rcx_17
    sub_140a2e390(&var_38, 
        %sreplay/%s/event?group=%s&time1=%i&time2=%i&meta=%s&incrementSize=false", r8_7)
    (*(*rbx_2 + 0x50))(rbx_2, &var_38)
    int16_t* rcx_20 = var_38
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    int16_t* rcx_15 = var_48
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)
else
    int64_t rbx = *arg4
    int16_t* rsi_1 = nullptr
    int16_t* var_58 = nullptr
    sub_1405a4c70(&var_58, r15 + 1, 0)
    memcpy(var_58, rbx, r15 * 2)
    sub_140a20ba0(&var_58, &data_142d99650, 1)
    int16_t* r13_1 = var_58
    int32_t rbx_1 = *(arg1 + 0x40)
    var_58 = nullptr
    int32_t var_50_1
    var_50_1.q = 0
    
    if (r15 s> 1)
        int32_t r15_2 = rbx_1 - 1
        
        if (rbx_1 == 0)
            r15_2 = 0
        
        int32_t rcx_6
        
        if (r15 == 0)
            rcx_6 = r15 + 1
        
        if (r15 != 0 || r15_2 == 0)
            rcx_6 = 0
        
        var_48 = r13_1
        int32_t rdx_5 = rcx_6 + r15 + r15_2
        int32_t var_4c
        int32_t var_3c_1 = var_4c
        
        if (rdx_5 s> var_4c)
            sub_1405947f0(&var_48, rdx_5)
        
        sub_140a20ba0(&var_48, *(arg1 + 0x38), r15_2)
        rsi_1 = var_48
        rbx_1 = r15
    else
        int64_t r15_1 = *(arg1 + 0x38)
        var_38 = nullptr
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_38, rbx_1, 0)
            rsi_1 = var_38
            memcpy(rsi_1, r15_1, rbx_1 * 2)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
    
    int64_t* r15_3 = *(arg1 + 0x10)
    int64_t* rax_2 = sub_14180a750(&var_48, arg1 + 0x60)
    int16_t* const r8_6 = &data_142d40450
    int16_t* const r10_1
    
    if (rax_2[1].d == 0)
        r10_1 = &data_142d40450
    else
        r10_1 = *rax_2
    
    int16_t* const rdx_8
    
    if (*(arg1 + 0x58) == 0)
        rdx_8 = &data_142d40450
    else
        rdx_8 = *(arg1 + 0x50)
    
    int16_t* const rcx_10 = &data_142d40450
    
    if (rbx_1 != 0)
        rcx_10 = rsi_1
    
    if (arg4[1].d != 0)
        *arg4
    
    if (arg3[1].d != 0)
        r8_6 = *arg3
    
    int32_t rax_3 = *(arg1 + 0x48)
    int16_t* const var_68_1 = r10_1
    int64_t var_70
    var_70.d = rax_3
    int32_t var_78 = rax_3
    int32_t var_80
    var_80.q = rdx_8
    int16_t* const var_88 = rcx_10
    sub_140a2e390(&var_38, 
        %sreplay/%s/event/%s?group=%s&time1=%i&time2=%i&meta=%s&incrementSize=false", r8_6)
    (*(*r15_3 + 0x50))(r15_3, &var_38)
    int16_t* rcx_13 = var_38
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int16_t* rcx_14 = var_48
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
int64_t rax_5
rax_5.b = 1
return rax_5
