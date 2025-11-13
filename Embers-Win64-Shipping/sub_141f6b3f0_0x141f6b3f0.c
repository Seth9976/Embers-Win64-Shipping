// 函数: sub_141f6b3f0
// 地址: 0x141f6b3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18
void* result = sub_140b2ab20(*arg2, u"PaintedVertices(", &arg_18)

if (result.b != 0)
    int64_t var_38
    sub_140a2e390(&var_38, u"%d", zx.q(arg_18))
    int32_t var_30
    int32_t rcx_2 = var_30 + 0x11
    
    if (var_30 == 0)
        rcx_2 = 0x12
    
    int32_t r14_1 = 0
    int64_t var_48 = 0
    *arg2 = &(*arg2)[sx.q(rcx_2)]
    int32_t rdx = 0
    int16_t* rdi_1 = *arg2
    int32_t rcx_3 = 0
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    
    if (rdi_1 != 0 && *rdi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_48, rbx_1.d + 1)
            rcx_3 = var_3c_1
            rdx = var_40_1
        
        int32_t rax_3 = rdx + rbx_1.d + 1
        int32_t var_40_2 = rax_3
        
        if (rax_3 s> rcx_3)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, rdi_1, (rbx_1.d + 1) * 2)
    
    void* var_58 = nullptr
    int32_t i_4 = 0
    int32_t rbx_3 = 0
    double zmm0_1 = sub_140a2ccb0(&var_48, &var_58, U",", 0)
    int32_t rcx_8 = arg_18
    int32_t rax_4 = *(arg1 + 0x28) + rcx_8
    *(arg1 + 0x28) = rax_4
    
    if (rax_4 s> *(arg1 + 0x2c))
        zmm0_1 = sub_1405c4e40(arg1 + 0x20)
        rcx_8 = arg_18
    
    int32_t r15_1 = 0
    
    if (rcx_8 s> 0)
        do
            int64_t* rax_7 = (sx.q(rbx_3) << 4) + var_58
            int16_t* rcx_10
            
            if (rax_7[1].d == 0)
                rcx_10 = &data_142d40450
            else
                rcx_10 = *rax_7
            
            int64_t rsi_2 = sx.q(r15_1) << 5
            sub_140b2abf0(rcx_10, &data_142d6ad0c, rsi_2 + *(arg1 + 0x20), zmm0_1)
            int64_t* rax_10 = (sx.q(rbx_3 + 1) << 4) + var_58
            int16_t* rcx_11
            
            if (rax_10[1].d == 0)
                rcx_11 = &data_142d40450
            else
                rcx_11 = *rax_10
            
            sub_140b2abf0(rcx_11, &data_142d6ad14, *(arg1 + 0x20) + 4 + rsi_2, zmm0_1)
            int64_t* rax_13 = (sx.q(rbx_3 + 2) << 4) + var_58
            int16_t* rcx_12
            
            if (rax_13[1].d == 0)
                rcx_12 = &data_142d40450
            else
                rcx_12 = *rax_13
            
            sub_140b2abf0(rcx_12, &data_142d6ad24, *(arg1 + 0x20) + 8 + rsi_2, zmm0_1)
            int64_t* rax_16 = (sx.q(rbx_3 + 3) << 4) + var_58
            int16_t* rcx_13
            
            if (rax_16[1].d == 0)
                rcx_13 = &data_142d40450
            else
                rcx_13 = *rax_16
            
            sub_140b2abf0(rcx_13, &data_142d6ad0c, *(arg1 + 0x20) + 0x10 + rsi_2, zmm0_1)
            int64_t* rax_19 = (sx.q(rbx_3 + 4) << 4) + var_58
            int16_t* rcx_14
            
            if (rax_19[1].d == 0)
                rcx_14 = &data_142d40450
            else
                rcx_14 = *rax_19
            
            sub_140b2abf0(rcx_14, &data_142d6ad14, *(arg1 + 0x20) + 0x14 + rsi_2, zmm0_1)
            int64_t* rax_22 = (sx.q(rbx_3 + 5) << 4) + var_58
            int16_t* rcx_15
            
            if (rax_22[1].d == 0)
                rcx_15 = &data_142d40450
            else
                rcx_15 = *rax_22
            
            sub_140b2abf0(rcx_15, &data_142d6ad24, *(arg1 + 0x20) + 0x18 + rsi_2, zmm0_1)
            int16_t** rax_25 = (sx.q(rbx_3 + 6) << 4) + var_58
            int16_t* rcx_16
            
            if (rax_25[1].d == 0)
                rcx_16 = &data_142d40450
            else
                rcx_16 = *rax_25
            
            sub_140b2abf0(rcx_16, &data_142e6e290, *(arg1 + 0x20) + 0x1c + rsi_2, zmm0_1)
            int64_t* rax_28 = (sx.q(rbx_3 + 7) << 4) + var_58
            int16_t* rcx_17
            
            if (rax_28[1].d == 0)
                rcx_17 = &data_142d40450
            else
                rcx_17 = *rax_28
            
            sub_140b2aa20(rcx_17, &data_142d6acfc, *(arg1 + 0x20) + 0xc + rsi_2)
            int64_t* rax_31 = (sx.q(rbx_3 + 8) << 4) + var_58
            int16_t* rcx_18
            
            if (rax_31[1].d == 0)
                rcx_18 = &data_142d40450
            else
                rcx_18 = *rax_31
            
            sub_140b2aa20(rcx_18, &data_142d6acf4, *(arg1 + 0x20) + 0xd + rsi_2)
            int64_t* rax_34 = (sx.q(rbx_3 + 9) << 4) + var_58
            int16_t* rcx_19
            
            if (rax_34[1].d == 0)
                rcx_19 = &data_142d40450
            else
                rcx_19 = *rax_34
            
            sub_140b2aa20(rcx_19, &data_142d6acec, *(arg1 + 0x20) + 0xe + rsi_2)
            int64_t rax_35 = sx.q(rbx_3 + 0xa)
            rbx_3 += 0xb
            int64_t* rax_37 = (rax_35 << 4) + var_58
            int16_t* rcx_20
            
            if (rax_37[1].d == 0)
                rcx_20 = &data_142d40450
            else
                rcx_20 = *rax_37
            
            sub_140b2aa20(rcx_20, &data_142d6ad04, *(arg1 + 0x20) + 0xf + rsi_2)
            r15_1 += 1
        while (r15_1 s< arg_18)
    
    void* rbx_14 = var_58
    int64_t i_3 = sx.q(rbx_3 - 1)
    
    if (rbx_3 - 1 s> 0)
        int32_t* rdx_16 = rbx_14 + 8
        int64_t i
        
        do
            int32_t rax_39 = *rdx_16
            int32_t rcx_22 = r14_1 - 1 + rax_39
            rdx_16 = &rdx_16[4]
            
            if (rax_39 == 0)
                rcx_22 = r14_1
            
            r14_1 = rcx_22 + 1
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = i_4
    result = sx.q(r14_1) * 2
    *arg2 += result
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_23 = *rbx_14
            
            if (rcx_23 != 0)
                result = sub_140a74f90(rcx_23)
            
            rbx_14 += 0x10
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rbx_14 = var_58
    
    if (rbx_14 != 0)
        result = sub_140a74f90(rbx_14)
    
    int64_t rcx_25 = var_48
    
    if (rcx_25 != 0)
        result = sub_140a74f90(rcx_25)
    
    int64_t rcx_26 = var_38
    
    if (rcx_26 != 0)
        return sub_140a74f90(rcx_26)

return result
