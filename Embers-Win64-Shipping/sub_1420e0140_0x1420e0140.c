// 函数: sub_1420e0140
// 地址: 0x1420e0140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = nullptr

if (sub_140d23dc0(arg1, 0x30) != 0)
    return 0

void* r13 = *(arg1 + 0x20)

if (r13 != 0)
    int16_t* var_60
    int64_t* rax_1 = sub_140baaa80(&var_60, arg2)
    int32_t rbx_1 = *(r13 + 0xd8)
    int16_t* var_80
    int32_t rbx_2
    int16_t* r12_1
    
    if (rbx_1 s> 1)
        int32_t rax_2 = rax_1[1].d
        int32_t r14_1 = rax_2 - 1
        
        if (rax_2 == 0)
            r14_1 = 0
        
        int32_t rax_3
        
        if (rbx_1 == 0)
            rax_3 = rbx_1 + 1
        
        if (rbx_1 != 0 || r14_1 == 0)
            rax_3 = 0
        
        int64_t r12_2 = *(r13 + 0xd0)
        int32_t rcx_1 = r14_1 + rax_3
        var_80 = nullptr
        
        if (rbx_1 != 0 || rcx_1 != 0)
            sub_1405a4c70(&var_80, rbx_1 + rcx_1, 0)
            memcpy(var_80, r12_2, rbx_1 * 2)
        else
            int32_t var_74_1 = 0
        
        sub_140a20ba0(&var_80, *rax_1, r14_1)
        r12_1 = var_80
        rbx_2 = rbx_1
    else
        r12_1 = *rax_1
        *rax_1 = 0
        rbx_2 = rax_1[1].d
        rax_1[1] = 0
    
    int16_t* rcx_5 = var_60
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t* rax_5 = sub_140baa480(&var_60, sub_1420e4db0(arg1, &var_80))
    int64_t rcx_8 = *rax_5
    int32_t rdx_6 = rax_5[1].d
    int32_t rdx_7 = neg.d(rdx_6)
    *rax_5 = 0
    int32_t r8_4 = rax_5[1].d
    int64_t var_70 = rcx_8
    int32_t rcx_9 = *(rax_5 + 0xc)
    int32_t rdx_10 = sbb.d(rdx_7, rdx_7, rdx_6 != 0) + 2 + r8_4
    int32_t var_64_1 = rcx_9
    rax_5[1] = 0
    
    if (rdx_10 s> rcx_9)
        sub_1405947f0(&var_70, rdx_10)
    
    sub_140a20ba0(&var_70, &data_142d5a024, 1)
    int16_t* rcx_12 = var_60
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int16_t* rcx_13 = var_80
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int16_t* rsi_3
    
    if (r8_4 s> 1)
        int32_t r14_2 = rbx_2 - 1
        
        if (rbx_2 == 0)
            r14_2 = 0
        
        int32_t rax_6
        
        if (r8_4 == 0)
            rax_6 = r8_4 + 1
        
        if (r8_4 != 0 || r14_2 == 0)
            rax_6 = 0
        
        var_80 = nullptr
        int32_t rcx_16 = rax_6 + r14_2
        
        if (r8_4 != 0 || rcx_16 != 0)
            sub_1405a4c70(&var_80, r8_4 + rcx_16, 0)
            memcpy(var_80, var_70, r8_4 * 2)
        else
            int32_t var_74_2 = 0
        
        sub_140a20ba0(&var_80, r12_1, r14_2)
        rsi_3 = var_80
        rbx_2 = r8_4
        var_80 = nullptr
        int32_t var_78_2
        var_78_2.q = 0
    else
        var_60 = nullptr
        
        if (rbx_2 != 0)
            sub_1405a4c70(&var_60, rbx_2, 0)
            rsi_3 = var_60
            memcpy(rsi_3, r12_1, rbx_2 * 2)
        else
            rsi_3 = nullptr
    
    int16_t* const rdx_16 = &data_142d40450
    
    if (rbx_2 != 0)
        rdx_16 = rsi_3
    
    int64_t arg_20
    sub_140b58260(&arg_20, rdx_16, 1)
    
    if (rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    int64_t* rcx_22 = *(r13 + 0x98)
    int64_t rax_7 = sx.q(*(r13 + 0xa0))
    int64_t* r14_3 = rcx_22
    int64_t rbx_3 = arg_20
    int64_t* arg_18 = rcx_22
    void* r12_3 = &rcx_22[rax_7]
    
    if (rcx_22 != r12_3)
        while (true)
            void* rsi_4 = *r14_3
            
            if ((*(rsi_4 + 0xba) & 2) == 0)
                sub_140d30800(rsi_4 + 0x38, &var_60)
                int64_t var_50
                int16_t** rax_8 = sub_140baf760(&var_50, &var_60)
                int16_t* rdx_19
                
                if (rax_8[1].d == 0)
                    rdx_19 = &data_142d40450
                else
                    rdx_19 = *rax_8
                
                *(rsi_4 + 0x138) = *sub_140b58260(&var_80, rdx_19, 1)
                int64_t rcx_27 = var_50
                
                if (rcx_27 != 0)
                    sub_140a74f90(rcx_27)
                
                int16_t* rcx_28 = var_60
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
                
                *(rsi_4 + 0xba) |= 2
            
            if (*(rsi_4 + 0x138) == rbx_3)
                break
            
            r14_3 = &r14_3[1]
            
            if (r14_3 == r12_3)
                goto label_1420e046d
    
    if (rcx_22 == r12_3 || ((r14_3 - arg_18) s>> 3).d == 0xffffffff)
    label_1420e046d:
        int64_t* rsi_5 = *(arg1 + 0x10)
        arg_18 = nullptr
        
        if ((1 & sub_140b5b8a0(0, 0)) != 0)
            sub_140d19010(r13, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        result = sub_140d2dfc0(rsi_5, r13, 0, 0x40, 0, 0, 0, 0, 0)
        int32_t rcx_31
        rcx_31.b = *(arg1 + 0x54) == 0
        int64_t rcx_33
        
        if ((rcx_31.b & sub_140b5b8a0(*(arg1 + 0x50), 0)) == 0)
            rcx_33 = *(arg1 + 0x50)
        else
            rcx_33 = *sub_1420e4d10(arg1, &arg_18)
        
        result[0xa] = rcx_33
        sub_1420ee550(result, arg_20)
        (*(*result + 0x260))(result, 0)
        char rax_15 = *(result + 0xba)
        
        if ((rax_15 & 8) != 0)
            *(result + 0xba) = rax_15 & 0xf7
            
            if (sub_140d23dc0(result, 0x30) == 0)
                void* rcx_37 = result[4]
                
                if (rcx_37 != 0)
                    sub_14244a940(rcx_37, result)
        
        *(result + 0x80) = *(arg1 + 0x80)
        *(result + 0x90) = *(arg1 + 0x90)
        *(result + 0xa0) = *(arg1 + 0xa0)
        sub_14242c7b0(r13, result)
    
    int64_t rax_17 = var_70
    
    if (rax_17 != 0)
        sub_140a74f90(rax_17)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)

return result
