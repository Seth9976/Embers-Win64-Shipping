// 函数: sub_14233d080
// 地址: 0x14233d080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140865380(arg1, *(arg3 + 8))
int32_t i_1 = 0

if (*(arg3 + 8) s> 0)
    int32_t i
    
    do
        int32_t rax = sub_1422c5b90(*(arg2 + 8))
        void*** rax_1 = j_sub_140a82f30(0x2c0)
        double zmm0_1[0x2]
        
        if (rax == 0)
            if (rax_1 != 0)
                sub_142048200(rax_1, arg4, *(arg2 + 0x28))
                *rax_1 = &data_1432aa678
                sub_142048030(&rax_1[0x34])
            
            int64_t rbx_2 = sx.q(arg1[1].d)
            int32_t rax_2 = (rbx_2 + 1).d
            arg1[1].d = rax_2
            
            if (rax_2 s> *(arg1 + 0xc))
                sub_1405a4d70(arg1)
            
            *(*arg1 + (rbx_2 << 3)) = rax_1
            double var_2a8_1[0x2] = *arg2
            zmm0_1 = arg2[2]
            uint128_t var_298_1 = arg2[1]
            double var_288_1[0x2] = zmm0_1
            uint128_t var_218 = rax_1.o
            uint128_t var_208_1 = var_2a8_1
            int64_t var_1e8_1 = (_mm_unpackhi_pd(zmm0_1, zmm0_1[0])).q
            uint128_t var_1f8_1 = var_298_1
            
            if (sub_140a80f40() == 0)
                uint32_t rax_5
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_5.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_5.b == 0))
                    void var_c8
                    int64_t* rax_6 = sub_142332580(&var_c8, nullptr, 0xff)
                    void* rcx_7 = *rax_6
                    *(rcx_7 + 0x10) = rax_1.o
                    *(rcx_7 + 0x20) = var_2a8_1
                    *(rcx_7 + 0x30) = var_298_1
                    *(rcx_7 + 0x40) = var_1e8_1
                    void* rcx_8 = *rax_6
                    int32_t r8_1 = rax_6[2].d
                    int64_t* rdx_5 = rax_6[1]
                    int64_t* rbx_3 = *(rcx_8 + 0x50)
                    int64_t* var_278_1 = rbx_3
                    int32_t* rsi_1 = &rbx_3[9]
                    
                    if (rbx_3 != 0)
                        *rsi_1 += 1
                        rbx_3 = var_278_1
                    
                    sub_14080ccb0(rcx_8, rdx_5, r8_1, 1)
                    
                    if (rbx_3 != 0)
                        int32_t rax_7 = *rsi_1
                        *rsi_1 -= 1
                        
                        if (rax_7 == 1)
                            sub_140a2f6e0(var_278_1)
                else
                    double var_170[0x2] = rax_1.o
                    uint64_t var_140_1 = var_1e8_1
                    double var_160_1[0x2] = var_2a8_1
                    double var_150_1[0x2] = var_298_1
                    sub_14232d260(&var_170)
            else
                sub_14232d260(&var_218)
            
            void*** rax_8 = j_sub_140a82f30(0x248)
            void*** rbx_4
            
            if (rax_8 == 0)
                rbx_4 = nullptr
            else
                rbx_4 = sub_142329940(rax_8, arg4)
            
            int64_t rsi_2 = sx.q(arg1[3].d)
            int32_t rax_10 = (rsi_2 + 1).d
            arg1[3].d = rax_10
            
            if (rax_10 s> *(arg1 + 0x1c))
                sub_1405a4d70(&arg1[2])
            
            void*** var_240_1 = rax_1
            *(arg1[2] + (rsi_2 << 3)) = rbx_4
            char rax_12 = sub_140a80f40()
            
            if (rax_12 != 0)
                sub_142053370(rax_1, rbx_4)
                (*rbx_4)[5](rbx_4)
            else if (data_143f138f4 != rax_12)
            label_14233d341:
                void var_b0
                int64_t* rax_15 = sub_1423326d0(&var_b0, nullptr, 0xff)
                *(*rax_15 + 0x10) = rbx_4.o
                void* rcx_16 = *rax_15
                int32_t r8_2 = rax_15[2].d
                int64_t* rdx_9 = rax_15[1]
                int64_t* rbx_5 = *(rcx_16 + 0x28)
                int64_t* var_270_1 = rbx_5
                int32_t* rdi_2 = &rbx_5[9]
                
                if (rbx_5 != 0)
                    *rdi_2 += 1
                    rbx_5 = var_270_1
                
                sub_1405e48c0(rcx_16, rdx_9, r8_2, 1)
                
                if (rbx_5 != 0)
                    int32_t rax_16 = *rdi_2
                    *rdi_2 -= 1
                    
                    if (rax_16 == 1)
                        sub_140a2f6e0(var_270_1)
            else if (data_143de5480 == rax_12)
                sub_142053370(rax_1, rbx_4)
                (*rbx_4)[5](rbx_4)
            else
                uint32_t rax_13
                rax_13.b = GetCurrentThreadId() == data_143de5470
                
                if (rax_13.b == 0)
                    goto label_14233d341
                
                sub_142053370(rax_1, rbx_4)
                (*rbx_4)[5](rbx_4)
        else if (rax != 1)
            if (rax_1 != 0)
                sub_142048200(rax_1, arg4, *(arg2 + 0x28))
                *rax_1 = &data_1432aa7f8
                sub_142048030(&rax_1[0x34])
            
            int64_t rbx_10 = sx.q(arg1[1].d)
            int32_t rax_32 = (rbx_10 + 1).d
            arg1[1].d = rax_32
            
            if (rax_32 s> *(arg1 + 0xc))
                sub_1405a4d70(arg1)
            
            *(*arg1 + (rbx_10 << 3)) = rax_1
            double var_2a8_3[0x2] = *arg2
            zmm0_1 = arg2[2]
            uint128_t var_298_3 = arg2[1]
            double var_288_3[0x2] = zmm0_1
            uint128_t var_1a8 = rax_1.o
            uint128_t var_198_1 = var_2a8_3
            int64_t var_178_1 = (_mm_unpackhi_pd(zmm0_1, zmm0_1[0])).q
            uint128_t var_188_1 = var_298_3
            
            if (sub_140a80f40() == 0)
                uint32_t rax_35
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_35.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_35.b == 0))
                    void var_68
                    void** rax_36 = sub_142332580(&var_68, nullptr, 0xff)
                    void* rcx_40 = *rax_36
                    *(rcx_40 + 0x10) = rax_1.o
                    *(rcx_40 + 0x20) = var_2a8_3
                    *(rcx_40 + 0x30) = var_298_3
                    *(rcx_40 + 0x40) = var_178_1
                    void* rcx_41 = *rax_36
                    int32_t r8_7 = rax_36[2].d
                    int64_t* rdx_23 = rax_36[1]
                    int64_t* rbx_11 = *(rcx_41 + 0x50)
                    int64_t* var_258_1 = rbx_11
                    int32_t* rsi_5 = &rbx_11[9]
                    
                    if (rbx_11 != 0)
                        *rsi_5 += 1
                        rbx_11 = var_258_1
                    
                    sub_14080ccb0(rcx_41, rdx_23, r8_7, 1)
                    
                    if (rbx_11 != 0)
                        int32_t rax_37 = *rsi_5
                        *rsi_5 -= 1
                        
                        if (rax_37 == 1)
                            sub_140a2f6e0(var_258_1)
                else
                    double var_100[0x2] = rax_1.o
                    uint64_t var_d0_1 = var_178_1
                    double var_f0_1[0x2] = var_2a8_3
                    double var_e0_1[0x2] = var_298_3
                    sub_14232d260(&var_100)
            else
                sub_14232d260(&var_1a8)
            
            void*** rax_38 = j_sub_140a82f30(0x248)
            void*** rbx_12
            
            if (rax_38 == 0)
                rbx_12 = nullptr
            else
                rbx_12 = sub_142329940(rax_38, arg4)
            
            int64_t rsi_6 = sx.q(arg1[3].d)
            int32_t rax_40 = (rsi_6 + 1).d
            arg1[3].d = rax_40
            
            if (rax_40 s> *(arg1 + 0x1c))
                sub_1405a4d70(&arg1[2])
            
            void*** var_220_1 = rax_1
            *(arg1[2] + (rsi_6 << 3)) = rbx_12
            char rax_42 = sub_140a80f40()
            
            if (rax_42 != 0)
                sub_142053370(rax_1, rbx_12)
                (*rbx_12)[5](rbx_12)
            else if (data_143f138f4 != rax_42)
            label_14233d8a2:
                void var_50
                void** rax_45 = sub_1423326d0(&var_50, nullptr, 0xff)
                *(*rax_45 + 0x10) = rbx_12.o
                void* rcx_49 = *rax_45
                int32_t r8_8 = rax_45[2].d
                int64_t* rdx_27 = rax_45[1]
                int64_t* rbx_13 = *(rcx_49 + 0x28)
                int64_t* var_250_1 = rbx_13
                void* rdi_4 = &rbx_13[9]
                
                if (rbx_13 != 0)
                    *rdi_4 += 1
                    rbx_13 = var_250_1
                
                sub_1405e48c0(rcx_49, rdx_27, r8_8, 1)
                
                if (rbx_13 != 0)
                    int32_t rax_46 = *rdi_4
                    *rdi_4 -= 1
                    
                    if (rax_46 == 1)
                        sub_140a2f6e0(var_250_1)
            else if (data_143de5480 == rax_42)
                sub_142053370(rax_1, rbx_12)
                (*rbx_12)[5](rbx_12)
            else
                uint32_t rax_43
                rax_43.b = GetCurrentThreadId() == data_143de5470
                
                if (rax_43.b == 0)
                    goto label_14233d8a2
                
                sub_142053370(rax_1, rbx_12)
                (*rbx_12)[5](rbx_12)
        else
            if (rax_1 != 0)
                sub_142048200(rax_1, arg4, *(arg2 + 0x28))
                *rax_1 = &data_1432aa738
                sub_142048030(&rax_1[0x34])
            
            int64_t rbx_6 = sx.q(arg1[1].d)
            int32_t rax_17 = (rbx_6 + 1).d
            arg1[1].d = rax_17
            
            if (rax_17 s> *(arg1 + 0xc))
                sub_1405a4d70(arg1)
            
            *(*arg1 + (rbx_6 << 3)) = rax_1
            double var_2a8_2[0x2] = *arg2
            zmm0_1 = arg2[2]
            uint128_t var_298_2 = arg2[1]
            double var_288_2[0x2] = zmm0_1
            uint128_t var_1e0 = rax_1.o
            uint128_t var_1d0_1 = var_2a8_2
            int64_t var_1b0_1 = (_mm_unpackhi_pd(zmm0_1, zmm0_1[0])).q
            uint128_t var_1c0_1 = var_298_2
            
            if (sub_140a80f40() == 0)
                uint32_t rax_20
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_20.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_20.b == 0))
                    void var_98
                    void** rax_21 = sub_142332580(&var_98, nullptr, 0xff)
                    void* rcx_24 = *rax_21
                    *(rcx_24 + 0x10) = rax_1.o
                    *(rcx_24 + 0x20) = var_2a8_2
                    *(rcx_24 + 0x30) = var_298_2
                    *(rcx_24 + 0x40) = var_1b0_1
                    void* rcx_25 = *rax_21
                    int32_t r8_4 = rax_21[2].d
                    int64_t* rdx_14 = rax_21[1]
                    int64_t* rbx_7 = *(rcx_25 + 0x50)
                    int64_t* var_268_1 = rbx_7
                    int32_t* rsi_3 = &rbx_7[9]
                    
                    if (rbx_7 != 0)
                        *rsi_3 += 1
                        rbx_7 = var_268_1
                    
                    sub_14080ccb0(rcx_25, rdx_14, r8_4, 1)
                    
                    if (rbx_7 != 0)
                        int32_t rax_22 = *rsi_3
                        *rsi_3 -= 1
                        
                        if (rax_22 == 1)
                            sub_140a2f6e0(var_268_1)
                else
                    double var_138[0x2] = rax_1.o
                    uint64_t var_108_1 = var_1b0_1
                    double var_128_1[0x2] = var_2a8_2
                    double var_118_1[0x2] = var_298_2
                    sub_14232d260(&var_138)
            else
                sub_14232d260(&var_1e0)
            
            void*** rax_23 = j_sub_140a82f30(0x248)
            void*** rbx_8
            
            if (rax_23 == 0)
                rbx_8 = nullptr
            else
                rbx_8 = sub_142329940(rax_23, arg4)
            
            int64_t rsi_4 = sx.q(arg1[3].d)
            int32_t rax_25 = (rsi_4 + 1).d
            arg1[3].d = rax_25
            
            if (rax_25 s> *(arg1 + 0x1c))
                sub_1405a4d70(&arg1[2])
            
            void*** var_230_1 = rax_1
            *(arg1[2] + (rsi_4 << 3)) = rbx_8
            char rax_27 = sub_140a80f40()
            
            if (rax_27 != 0)
                sub_142053370(rax_1, rbx_8)
                (*rbx_8)[5](rbx_8)
            else if (data_143f138f4 != rax_27)
            label_14233d5f9:
                void var_80
                void** rax_30 = sub_1423326d0(&var_80, nullptr, 0xff)
                *(*rax_30 + 0x10) = rbx_8.o
                void* rcx_33 = *rax_30
                int32_t r8_5 = rax_30[2].d
                int64_t* rdx_18 = rax_30[1]
                int64_t* rbx_9 = *(rcx_33 + 0x28)
                int64_t* var_260_1 = rbx_9
                void* rdi_3 = &rbx_9[9]
                
                if (rbx_9 != 0)
                    *rdi_3 += 1
                    rbx_9 = var_260_1
                
                sub_1405e48c0(rcx_33, rdx_18, r8_5, 1)
                
                if (rbx_9 != 0)
                    int32_t rax_31 = *rdi_3
                    *rdi_3 -= 1
                    
                    if (rax_31 == 1)
                        sub_140a2f6e0(var_260_1)
            else if (data_143de5480 == rax_27)
                sub_142053370(rax_1, rbx_8)
                (*rbx_8)[5](rbx_8)
            else
                uint32_t rax_28
                rax_28.b = GetCurrentThreadId() == data_143de5470
                
                if (rax_28.b == 0)
                    goto label_14233d5f9
                
                sub_142053370(rax_1, rbx_8)
                (*rbx_8)[5](rbx_8)
        result = arg3
        i = i_1 + 1
        i_1 = i
    while (i s< *(result + 8))

return result
