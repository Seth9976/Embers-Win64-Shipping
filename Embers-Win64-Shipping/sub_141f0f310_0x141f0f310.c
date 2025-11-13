// 函数: sub_141f0f310
// 地址: 0x141f0f310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x1f8)

if (result != 0 && *(result + 0xf0) == 3)
    result = sub_141dc9840(*(arg1 + 0xa0))
    
    if ((*(result + 0x1f6) & 8) == 0)
        if (data_143de5444 == 0)
            int64_t* r8_1 = *(arg1 + 0x1f8)
            int32_t r9_1 = data_143e1d9b4
            int64_t r10_1 = data_143e1d9a0
            int32_t rax = *(r8_1 + 0xc)
            void* const rdx_4
            
            if (rax s>= r9_1)
                rdx_4 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax)
                uint32_t rdx_2 = zx.d(temp0_1)
                int32_t rax_2 = temp1_1 + rdx_2
                rdx_4 = *(r10_1 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
            
            int64_t* rcx_4 = r8_1
            int32_t r15_2 = *(rdx_4 + 8) & 0x30000000
            
            if (r15_2 == 0 && ((*(arg1 + 8) u>> 0xf).b & 1) == 0)
                int32_t rax_9 = *(arg1 + 0xc)
                void* const rdx_8
                
                if (rax_9 s>= r9_1)
                    rdx_8 = nullptr
                else
                    int16_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(rax_9)
                    uint32_t rdx_6 = zx.d(temp2_1)
                    int32_t rax_11 = temp3_1 + rdx_6
                    rdx_8 = *(r10_1 + (sx.q(rax_11 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_11.w) - rdx_6) * 0x18
                
                rcx_4 = r8_1
                
                if (((*(rdx_8 + 8) u>> 0x1c).b & 1) == 0)
                    void*** rax_18 = j_sub_140a82f30(0xd8)
                    void*** rax_19
                    
                    if (rax_18 == 0)
                        rax_19 = nullptr
                    else
                        rax_19 = sub_141f02860(rax_18, arg1)
                    
                    rcx_4 = *(arg1 + 0x1f8)
                    *(arg1 + 0x210) = rax_19
            
            result = (*(*rcx_4 + 0x150))(rcx_4)
            uint64_t result_1 = result
            
            if (result != 0)
                void* rcx_9 = *(arg1 + 0x1f8)
                void* r14_1 = *(rcx_9 + 0x10)
                
                if (data_14399f9f8 == 0)
                    void* arg_18 = arg1
                    void** var_60_1 = &arg_18
                    void* (* var_68)(int64_t* arg1, uint32_t* arg2) = sub_141f09890
                    sub_140d32720(*(rcx_9 + 0x20), r14_1, &var_68)
                
                bool z_1
                
                if (0 == data_143e1adfc)
                    data_143e1adfc = 0
                    z_1 = true
                else
                    data_143e1adfc
                    z_1 = false
                
                if (not(z_1))
                    void* rcx_20 = *(arg1 + 0x210)
                    result = 0
                    int64_t arg_8 = 0
                    *(arg1 + 0x208) = 0
                    
                    if (rcx_20 != 0)
                        int64_t arg_10 = 0
                        *(rcx_20 + 0xb0) = 0
                else
                    int64_t arg_20 = *(r14_1 + 0x18)
                    int16_t* var_88
                    sub_140b63b70(&arg_20, &var_88)
                    int16_t* const rsi_1 = &data_142d40450
                    int16_t* const r8_3 = &data_142d40450
                    int32_t var_80
                    
                    if (var_80 != 0)
                        r8_3 = var_88
                    
                    int16_t* var_78
                    sub_140a2e390(&var_78, u"DESTROYED_%s_CHILDACTOR", r8_3)
                    int16_t* rcx_13 = var_88
                    
                    if (rcx_13 != 0)
                        sub_140a74f90(rcx_13)
                    
                    int16_t* rdx_12 = &data_142d40450
                    int32_t var_70
                    
                    if (var_70 != 0)
                        rdx_12 = var_78
                    
                    void var_98
                    void var_90
                    int64_t var_58
                    int16_t** rax_26 = sub_140b63b70(
                        sub_140d25240(&var_90, *(*(arg1 + 0x1f8) + 0x20), r14_1, 
                            *sub_140b58260(&var_98, rdx_12, 1)), 
                        &var_58)
                    
                    if (rax_26[1].d != 0)
                        rsi_1 = *rax_26
                    
                    int64_t* rcx_17 = *(arg1 + 0x1f8)
                    result = (*(*rcx_17 + 0x138))(rcx_17, rsi_1, 0, 5)
                    int64_t rcx_18 = var_58
                    
                    if (rcx_18 != 0)
                        result = sub_140a74f90(rcx_18)
                    
                    int16_t* rcx_19 = var_78
                    
                    if (rcx_19 != 0)
                        result = sub_140a74f90(rcx_19)
                
                if (r15_2 == 0)
                    result = sub_1420e0c80(result_1, *(arg1 + 0x1f8), 0, 1)
        
        *(arg1 + 0x1f8) = 0

return result
