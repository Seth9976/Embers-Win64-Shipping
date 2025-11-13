// 函数: sub_14207f710
// 地址: 0x14207f710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = nullptr
uint64_t result = arg1
void* rsi = arg2
int32_t rdi = 0
int32_t i_2 = 0
void* var_c0 = nullptr
int32_t i_4 = 0
int32_t var_b4 = 0
int32_t arg_18 = 0

if (*(arg1 + 0x30) s> 0)
    int64_t r13_1 = 0
    int64_t var_b0_1 = 0
    void* r14
    void* var_40_1 = r14
    
    while (true)
        int32_t* r15_1 = *(result + 0x28)
        r14.b = 0
        int32_t rcx
        rcx.b = *(r15_1 + r13_1 + 0x10) == 0
        
        if ((rcx.b & sub_140b5b8a0(*(r15_1 + r13_1 + 0xc), 0)) != 0)
            void* rbx_2 = *(rsi + 0xd0)
            void* rsi_2 = sx.q(*(rsi + 0xd8)) * 0x38 + rbx_2
            
            if (rbx_2 != rsi_2)
                do
                    if (*(r15_1 + r13_1 + 4) == *(rbx_2 + 4))
                        void* rax_3 = *(rbx_2 + 0x20)
                        void* rdi_1 = &data_143f47950
                        int64_t* rcx_1 = &data_143f47940
                        
                        if (rax_3 != 0)
                            rdi_1 = rax_3
                        
                        int64_t* rax_4 = *(rbx_2 + 0x10)
                        
                        if (rax_4 != 0)
                            rcx_1 = rax_4
                        
                        if (rcx_1[1].d == 0)
                        label_14207f7fa:
                            
                            if (*(rdi_1 + 8) == 0)
                                r14.b = 1
                                break
                        else
                            int64_t* rcx_2 = *rcx_1
                            
                            if (rcx_2 == 0)
                                goto label_14207f7fa
                            
                            if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
                                goto label_14207f7fa
                    
                    rbx_2 += 0x38
                while (rbx_2 != rsi_2)
                
                rdi = arg_18
            
            rsi = arg2
        
        if (r14.b != 0)
            r15 = var_c0
        else
            int32_t rax_7 = *(r15_1 + r13_1)
            int64_t rdi_2 = *(r15_1 + r13_1 + 4)
            int32_t rcx_3 = rax_7
            void* r12 = *(rsi + 0xa0)
            rax_7.b &= 1
            int64_t rbx_3 = *(r15_1 + r13_1 + 0xc)
            int64_t var_7c_1 = rdi_2
            int64_t var_68_1 = 0
            int32_t var_50_1 = 0
            int64_t var_70 = 0
            uint8_t var_80
            uint8_t rcx_4 = (((rcx_3 u>> 1).b & 1) * 2) | rax_7.b | (var_80 & 0xfc)
            var_80 = rcx_4
            void*** rax_9 = j_sub_140a82f30(0x20)
            void*** r14_1 = rax_9
            
            if (rax_9 == 0)
                r14_1 = nullptr
            else
                rax_9[1].d = 1
                *(rax_9 + 0xc) = 1
                *r14_1 = &data_1432ad958
                sub_140d3a3a0(&r14_1[2], nullptr)
                r14_1[3] = 0
            
            uint128_t zmm0_1 = (&r14_1[2]).o
            void*** rsi_3 = _mm_bsrli_si128(zmm0_1, 8).q
            
            if (rsi_3 != 0)
                rsi_3[1].d += 1
                rsi_3 = r14_1
            
            r14 = nullptr
            int64_t var_60_1 = zmm0_1.q
            void* rax_11 = zmm0_1:8.q
            
            if (rax_11 != 0)
                r14 = rax_11
            
            void* var_58_1 = r14
            
            if (rsi_3 != 0)
                rsi_3[1].d -= 1
                
                if (rsi_3[1].d == 1)
                    (**rsi_3)(rsi_3)
                    int32_t temp3_1 = *(rsi_3 + 0xc)
                    *(rsi_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*rsi_3)[1](rsi_3, 1)
            
            int32_t* rsi_4 = zmm0_1.q
            sub_140d3a3a0(rsi_4, r12)
            *(rsi_4 + 8) = rbx_3
            
            if ((*(r15_1 + r13_1) & 4) != 0)
                int32_t rbx_4 = *(arg2 + 0xd8)
                int32_t rbx_5 = rbx_4 - 1
                
                if (rbx_4 - 1 s>= 0)
                    int64_t r14_2 = sx.q(rbx_5) * 0x38
                    int64_t r15_2 = r14_2
                    int64_t r13_2 = sx.q(rbx_5 + 1) * 0x38
                    int32_t temp5_1
                    
                    do
                        int64_t rcx_11 = *(arg2 + 0xd0)
                        
                        if (*(r14_2 + rcx_11 + 4) == rdi_2)
                            void* rax_16 = *(r14_2 + rcx_11 + 0x20)
                            void* r12_1 = &data_143f47950
                            
                            if (rax_16 != 0)
                                r12_1 = rax_16
                            
                            int64_t* rax_17 = *(r14_2 + rcx_11 + 0x10)
                            int64_t* rcx_12 = &data_143f47940
                            
                            if (rax_17 != 0)
                                rcx_12 = rax_17
                            
                            int64_t* rcx_13
                            
                            if (rcx_12[1].d != 0)
                                rcx_13 = *rcx_12
                            
                            if (rcx_12[1].d != 0 && rcx_13 != 0)
                                if ((*(*rcx_13 + 0x28))(rcx_13) != 0 || *(r12_1 + 8) != 0)
                                    goto label_14207f9ce
                            else if (*(r12_1 + 8) != 0)
                            label_14207f9ce:
                                sub_140e53610(*(arg2 + 0xd0) + 0x10 + r15_2)
                                int32_t rcx_17 = *(arg2 + 0xd8)
                                int32_t rax_21 = rcx_17 - rbx_5
                                
                                if (rax_21 != 1)
                                    int64_t rcx_18 = *(arg2 + 0xd0)
                                    memmove(rcx_18 + r15_2, rcx_18 + r13_2, (rax_21 - 1) * 0x38)
                                    rcx_17 = *(arg2 + 0xd8)
                                
                                *(arg2 + 0xd8) = rcx_17 - 1
                                sub_1407c4070(arg2 + 0xd0)
                        
                        r13_2 -= 0x38
                        r15_2 -= 0x38
                        r14_2 -= 0x38
                        temp5_1 = rbx_5
                        rbx_5 -= 1
                    while (temp5_1 - 1 s>= 0)
                    r13_1 = var_b0_1
                    rsi_4 = zmm0_1.q
            
            int64_t i_5 = sx.q(i_4)
            i_2 = (i_5 + 1).d
            i_4 = i_2
            
            if (i_2 s> var_b4)
                sub_1407c3b60(&var_c0)
                i_4 = i_2
            
            r15 = var_c0
            uint8_t* rcx_23 = i_5 * 0x38 + r15
            *rcx_23 = rcx_4
            *(rcx_23 + 4) = rdi_2
            *(rcx_23 + 0x10) = 0
            *(rcx_23 + 0x18) = 0
            *(rcx_23 + 0x20) = rsi_4
            *(rcx_23 + 0x28) = r14
            
            if (r14 != 0)
                *(r14 + 8) += 1
            
            *(rcx_23 + 0x30) = 0
            sub_140e53610(&var_70)
            rdi = arg_18
        
        result = arg1
        rdi += 1
        r13_1 += 0x14
        arg_18 = rdi
        var_b0_1 = r13_1
        
        if (rdi s>= *(result + 0x30))
            break
        
        rsi = arg2
    
    if (i_2 s> 0)
        void* rbx_6 = r15 + 0x18
        uint64_t i_3 = zx.q(i_2)
        uint64_t i
        
        do
            int64_t rsi_6 = sx.q(*(arg2 + 0xd8))
            int32_t rax_26 = (rsi_6 + 1).d
            *(arg2 + 0xd8) = rax_26
            
            if (rax_26 s> *(arg2 + 0xdc))
                sub_1407c3b60(arg2 + 0xd0)
            
            char* rcx_27 = rsi_6 * 0x38 + *(arg2 + 0xd0)
            *rcx_27 = *(rbx_6 - 0x18)
            *(rcx_27 + 4) = *(rbx_6 - 0x14)
            *(rcx_27 + 0x10) = *(rbx_6 - 8)
            void* rax_30 = *rbx_6
            *(rcx_27 + 0x18) = rax_30
            
            if (rax_30 != 0)
                *(rax_30 + 8) += 1
            
            *(rcx_27 + 0x20) = *(rbx_6 + 8)
            void* rax_32 = *(rbx_6 + 0x10)
            *(rcx_27 + 0x28) = rax_32
            
            if (rax_32 != 0)
                *(rax_32 + 8) += 1
            
            result = zx.q(*(rbx_6 + 0x18))
            rbx_6 += 0x38
            *(rcx_27 + 0x30) = result.d
            i = i_3
            i_3 -= 1
        while (i != 1)

if (i_2 != 0)
    void* rbx_7 = r15 + 0x10
    int32_t i_1
    
    do
        result = sub_140e53610(rbx_7)
        rbx_7 += 0x38
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r15 == 0)
    return result

return sub_140a74f90(r15)
