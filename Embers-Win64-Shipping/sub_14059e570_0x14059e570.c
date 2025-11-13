// 函数: sub_14059e570
// 地址: 0x14059e570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = arg1
int64_t var_88
sub_140b294d0(&var_88, &var_68, 0)
sub_140a360c0(&var_88)
int16_t* const r14 = &data_142d40450

if (*arg2 != &data_142d40450)
    int32_t rdx_1 = 0
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405947f0(arg2, 0)
        rdx_1 = arg2[1].d
    
    arg2[1].d = rdx_1
    
    if (rdx_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)

if (*arg3 != &data_142d40450)
    int32_t rdx_2 = 0
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 0)
        sub_1405947f0(arg3, 0)
        rdx_2 = arg3[1].d
    
    arg3[1].d = rdx_2
    
    if (rdx_2 s> *(arg3 + 0xc))
        sub_140594770(arg3)

int32_t var_80
int64_t* rbx

if (var_80 == 0 || var_80 == 1)
    rbx.b = 0
else if (sub_140a32ae0(&var_88, &data_142d404b0, 1) != 0)
    rbx.b = 0
else
    int64_t r15_1 = var_88
    int64_t var_78 = 0
    int32_t var_70_1 = var_80
    
    if (var_80 != 0)
        sub_1405a4c70(&var_78, var_80, 0)
        memcpy(var_78, r15_1, var_80 * 2)
    else
        int32_t var_6c_1 = 0
    
    int64_t var_60
    int16_t** rax_3 = sub_140b7d8f0(&var_60)
    int64_t var_50
    int16_t** rax_4 = sub_140b19c30(&var_50, &var_78, 0)
    int16_t* rdx_6
    
    if (rax_3[1].d == 0)
        rdx_6 = &data_142d40450
    else
        rdx_6 = *rax_3
    
    if (rax_4[1].d != 0)
        r14 = *rax_4
    
    int32_t rax_5
    int32_t r8_2
    rax_5, r8_2 = sub_140a54510(r14, rdx_6)
    int64_t rcx_12 = var_50
    int16_t** rsi_2
    rsi_2.b = rax_5 == 0
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = var_60
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    if (rsi_2.b == 0)
        sub_140b1d530(&var_88)
        int64_t rcx_21 = var_78
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        rbx.b = 0
    else
        if (arg2 != &var_88)
            int64_t r14_1 = var_88
            r8_2 = *(arg2 + 0xc)
            arg2[1].d = var_80
            
            if (var_80 != 0 || r8_2 != 0)
                sub_1405a4c70(arg2, var_80, r8_2)
                memcpy(*arg2, r14_1, var_80 * 2)
            else
                *(arg2 + 0xc) = 0
        
        r8_2.b = 1
        sub_140597da0(arg3, sub_140b18720(&var_60, arg2, r8_2.b))
        int64_t rcx_18 = var_60
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        int64_t rcx_19 = var_78
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        rbx.b = 1

int64_t rcx_22 = var_88

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

return zx.q(rbx.b)
