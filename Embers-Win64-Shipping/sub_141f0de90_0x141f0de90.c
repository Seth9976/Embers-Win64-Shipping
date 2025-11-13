// 函数: sub_141f0de90
// 地址: 0x141f0de90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_2 = arg1[0x14]
uint64_t result

if (i_2 == 0 || *(i_2 + 0xf0) == 3 || arg1[0x3e] == 0)
label_141f0df64:
    result = sub_141f0f310(arg1)
    
    if (arg1[0x3e] != 0)
        result = sub_142452380()
        
        if (result != 0)
            void* rdx_3 = arg1[0x3e]
            int64_t r8_2 = result + 0x30
            result = sx.q(*(result + 0x38))
            
            if (result.d s<= *(rdx_3 + 0x38))
                uint64_t result_1 = result
                result = *(rdx_3 + 0x30)
                
                if (*(result + (result_1 << 3)) == r8_2 && rdx_3 != 0)
                    uint64_t result_3 = arg1[0x15]
                    
                    if (result_3 != 0)
                    label_141f0dfe7:
                        void* i = i_2
                        uint64_t r14
                        r14.b = 1
                        char rcx_7
                        
                        if (i_2 != 0)
                            do
                                if (r14.b == 0)
                                    goto label_141f0e37d
                                
                                int64_t r15_1 = *(i + 0x10)
                                void* const rbx_2
                                
                                if (arg1[0x3e] == 0)
                                    rbx_2 = nullptr
                                else
                                    void* rax_8 = sub_142452380()
                                    
                                    if (rax_8 == 0)
                                        rbx_2 = nullptr
                                    else
                                        rbx_2 = arg1[0x3e]
                                        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                                        
                                        if (rax_9.d s> *(rbx_2 + 0x38)
                                                || *(*(rbx_2 + 0x30) + (rax_9 << 3))
                                                != rax_8 + 0x30)
                                            rbx_2 = nullptr
                                
                                rcx_7 = 0
                                i = sub_141dcb210(i)
                                result = zx.q(r14.b)
                                
                                if (r15_1 != rbx_2)
                                    rcx_7 = result.b
                                
                                r14 = zx.q(rcx_7)
                            while (i != 0)
                        
                        if (i_2 == 0 || rcx_7 != 0)
                            int64_t var_58
                            sub_142427eb0(&var_58)
                            char var_2f
                            char var_2f_1 = var_2f | 0xc
                            char var_30_1 = 1
                            
                            if (i_2 == 0)
                                int64_t var_38_2 = 0
                            else
                                int64_t var_38_1 = sub_141dc9840(i_2)
                            
                            var_58 = arg1[0x41]
                            void* rax_14 = arg1[0x40]
                            char var_2e_1 = 3
                            
                            if (rax_14 != 0)
                                int64_t rbx_3 = *(rax_14 + 0x10)
                                void* const rdx_5
                                
                                if (arg1[0x3e] == 0)
                                    rdx_5 = nullptr
                                else
                                    void* rax_15 = sub_142452380()
                                    
                                    if (rax_15 == 0)
                                        rdx_5 = nullptr
                                    else
                                        rdx_5 = arg1[0x3e]
                                        int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                                        int64_t rax_17
                                        
                                        if (rax_16.d s> *(rdx_5 + 0x38)
                                                || *(*(rdx_5 + 0x30) + (rax_16 << 3))
                                                != rax_15 + 0x30)
                                            rax_17 = 0
                                        else
                                            rax_17.b = 1
                                        
                                        if (rax_17.b == 0)
                                            rdx_5 = nullptr
                                
                                if (rbx_3 == rdx_5)
                                    int64_t var_50_1 = arg1[0x40]
                            
                            int32_t rdx_6 = arg1[1].d
                            int32_t var_2c
                            int32_t rcx_12 = var_2c | 0x2100000
                            int32_t var_2c_1 = rcx_12
                            
                            if (((rdx_6 u>> 3).b & 1) == 0)
                                rcx_12 &= 0xfffffff7
                                var_2c_1 = rcx_12
                            
                            uint8_t rdx_7 = (rdx_6 u>> 6).b
                            
                            if ((rdx_7 & 1) != 0)
                                int32_t var_2c_2 = rcx_12 | 0x40
                            else if ((*(*arg1 + 0xf0))(arg1, rdx_7) != 0)
                                var_2c_2 = var_2c_1 | 0x40
                            
                            if ((*(arg1 + 0x14c) & 1) == 0)
                                sub_1405c6ac0(arg1, 0, 0)
                            
                            float zmm1_1[0x4] = *(arg1 + 0x1d0)
                            float zmm2_1[0x4] = *(arg1 + 0x1c0)
                            float var_94_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)[0]
                            uint32_t temp0_3 =
                                _mm_movemask_ps(_mm_cmpeq_ps(*(arg1 + 0x180), zmm2_1, 4))
                            float var_98 = zmm1_1[0]
                            float var_90_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                            float var_68[0x4] = zmm2_1
                            
                            if (temp0_3 != 0)
                                *(arg1 + 0x180) = zmm2_1
                                void var_78
                                int32_t* rax_24 = sub_140adf5d0(&var_68, &var_78)
                                arg1[0x32] = *rax_24
                                arg1[0x33].d = rax_24[2]
                            
                            bool cond:3_1 = arg1[0x3e] == 0
                            int32_t rax_26 = arg1[0x33].d
                            int64_t var_88 = arg1[0x32]
                            int32_t var_80_1 = rax_26
                            int64_t* rdx_9
                            
                            if (cond:3_1)
                                rdx_9 = nullptr
                            else
                                void* rax_27 = sub_142452380()
                                
                                if (rax_27 == 0)
                                    rdx_9 = nullptr
                                else
                                    rdx_9 = arg1[0x3e]
                                    int64_t rax_28 = sx.q(*(rax_27 + 0x38))
                                    
                                    if (rax_28.d s> rdx_9[7].d
                                            || *(rdx_9[6] + (rax_28 << 3)) != rax_27 + 0x30)
                                        rdx_9 = nullptr
                            
                            result = sub_1420efae0(result_3, rdx_9, &var_98, &var_88, &var_58)
                            arg1[0x3f] = result
                            
                            if (result != 0)
                                arg1[0x41] = *(result + 0x18)
                                sub_140d3a3a0(result + 0x160, arg1)
                                int64_t* r9_2 = arg1[0x42]
                                
                                if (r9_2 != 0)
                                    r9_2 = r9_2[0x19]
                                
                                sub_141dc3850(arg1[0x3f], &arg1[0x38], 0, r9_2)
                                void* rax_30 = arg1[0x3f]
                                int64_t* rsi_1 = *(rax_30 + 0x130)
                                
                                if (rsi_1 != 0)
                                    char rbx_4 = *(rsi_1 + 0x14f)
                                    *(rsi_1 + 0x14f) = *(arg1 + 0x14f)
                                    sub_141f32b40(rsi_1, arg1, &data_143a2de4c, 0)
                                    *(rsi_1 + 0x14f) = rbx_4
                                    rax_30 = arg1[0x3f]
                                
                                sub_141ef6150(arg1, *(rax_30 + 0x5b) & 1)
                                result = arg1[0x42]
                                
                                if (result != 0)
                                    int32_t* i_1 = *(result + 0xb8)
                                    
                                    for (void* r14_3 = &i_1[sx.q(*(result + 0xc0)) * 0x10]; 
                                            i_1 != r14_3; i_1 = &i_1[0x10])
                                        result = sub_140d3c6e0(i_1)
                                        uint64_t result_2 = result
                                        
                                        if (result != 0)
                                            result = sub_141dc5a00(result)
                                            
                                            if (result == 0)
                                                sub_141dbac70(result_2, arg1[0x3f], 
                                                    &data_143a2de48, *(i_1 + 8))
                                                int64_t* var_a8_1
                                                var_a8_1.b = 0
                                                result =
                                                    sub_141dd70d0(result_2, &i_1[4], 0, nullptr, 0)
                    else
                        result = sub_141ee69e0(arg1)
                        result_3 = result
                        
                        if (result != 0)
                            goto label_141f0dfe7
    
label_141f0e37d:
    int64_t* rcx_28 = arg1[0x42]
    
    if (rcx_28 != 0)
        result = (**rcx_28)(rcx_28, 1)
        arg1[0x42] = 0
else
    void* rax_1 = sub_142452380()
    
    if (rax_1 == 0)
        goto label_141f0df64
    
    void* rdx_1 = arg1[0x3e]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30
            || rdx_1 == 0)
        goto label_141f0df64
    
    void* rax_4 = sub_142452380()
    int64_t rax_5
    int64_t* rbx_1
    
    if (rax_4 != 0)
        rbx_1 = arg1[0x3e]
        rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_4 == 0 || rax_5.d s> rbx_1[7].d || *(rbx_1[6] + (rax_5 << 3)) != rax_4 + 0x30)
        rbx_1 = nullptr
    
    result = rbx_1[0x23]
    
    if (result == 0)
        (*(*rbx_1 + 0x390))(rbx_1)
        result = rbx_1[0x23]
        
        if (result == 0 || (*(result + 0x5b) & 1) == 0)
            goto label_141f0df64
    else if ((*(result + 0x5b) & 1) == 0)
        goto label_141f0df64

return result
