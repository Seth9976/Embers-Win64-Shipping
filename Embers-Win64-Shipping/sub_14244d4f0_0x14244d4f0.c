// 函数: sub_14244d4f0
// 地址: 0x14244d4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* i_1 = *(arg1 + 0x38)
void* result = sx.q(*(arg1 + 0x40)) * 0xb0 + i_1
void* result_1 = result

if (i_1 != result)
    void* r15_1 = i_1 + 0x2c
    
    do
        void* i = i_1
        *(r15_1 - 8) = data_143dbb188
        *(r15_1 - 4) = data_143dbb18c
        *r15_1 = data_143dbb190
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x2c)
        int32_t var_5c_1 = 0x80
        int32_t var_58_1 = 0xffffffff
        int32_t var_54_1 = 0
        void* var_48_1 = nullptr
        int32_t var_40_1 = 0
        int64_t var_80_1
        
        do
            *(r15_1 - 8) += *(i + 0x18)
            *(r15_1 - 4) += *(i + 0x1c)
            *r15_1 += *(i + 0x20)
            void var_c0
            sub_1407d1800(&var_88, &var_c0, i, nullptr)
            void* rsi_1 = i + 0x80
            int16_t* rdx_2
            
            if (*(rsi_1 + 8) == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *rsi_1
            
            int64_t j_2
            sub_140b58260(&j_2, rdx_2, 1)
            int64_t rax_10 = sx.q(*(arg1 + 0x40))
            int32_t r10_1 = 0
            int64_t r9_1 = 0
            
            if (rax_10.d s<= 0)
            label_14244d684:
                i = nullptr
            else
                int64_t* r14_1 = *(arg1 + 0x38)
                int64_t j = j_2
                int64_t* r8_2 = r14_1
                
                while (*r8_2 != j)
                    int64_t* rax_11 = r8_2[1]
                    void* rdx_3 = &rax_11[sx.q(r8_2[2].d)]
                    
                    if (rax_11 != rdx_3)
                        while (*rax_11 != j)
                            rax_11 = &rax_11[1]
                            
                            if (rax_11 == rdx_3)
                                goto label_14244d672
                        
                        break
                    
                label_14244d672:
                    r10_1 += 1
                    r9_1 += 1
                    r8_2 = &r8_2[0x16]
                    
                    if (r9_1 s>= rax_10)
                        goto label_14244d684_1
                
                if (r10_1 == 0xffffffff)
                label_14244d684_1:
                    i = nullptr
                else
                    void* rdi_1 = sx.q(r10_1) * 0xb0
                    i = rdi_1 + r14_1
                    
                    if (rdi_1 != neg.q(r14_1) && var_80_1.d != var_54_1)
                        int64_t rdx_5 = sx.q(var_40_1 - 1) & sx.q(sub_140b5ead0(j.d) + j:4.d)
                        void var_50
                        void* rax_17 = &var_50
                        
                        if (var_48_1 != 0)
                            rax_17 = var_48_1
                        
                        int32_t j_1 = *(rax_17 + (rdx_5 << 2))
                        
                        if (j_1 != 0xffffffff)
                            int64_t r8_3 = var_88
                            
                            do
                                int64_t rcx_15 = sx.q(j_1) * 2
                                
                                if (*(r8_3 + (rcx_15 << 3)) == j)
                                    if (j_1 != 0xffffffff && r8_3 + (rcx_15 << 3) != 0)
                                        i = nullptr
                                        int64_t var_c8 = 0
                                        int64_t var_a0
                                        int64_t* rax_19 = sub_140b63b70(&var_c8, &var_a0)
                                        
                                        if (rsi_1 != rax_19)
                                            int64_t rcx_17 = *rsi_1
                                            
                                            if (rcx_17 != 0)
                                                sub_140a74f90(rcx_17)
                                            
                                            *rsi_1 = *rax_19
                                            *rax_19 = 0
                                            *(rsi_1 + 8) = rax_19[1].d
                                            *(rsi_1 + 0xc) = *(rax_19 + 0xc)
                                            rax_19[1] = 0
                                        
                                        int64_t rcx_19 = var_a0
                                        
                                        if (rcx_19 != 0)
                                            sub_140a74f90(rcx_19)
                                    
                                    break
                                
                                j_1 = *(r8_3 + (rcx_15 << 3) + 8)
                            while (j_1 != 0xffffffff)
        while (i != 0)
        
        int32_t var_40_2 = i.d
        
        if (var_48_1 != 0)
            sub_140a74f90(var_48_1)
        
        bool cond:0_1 = var_80_1:4.d == 0
        var_80_1.d = 0
        
        if (not(cond:0_1))
            sub_1405a5410(&var_88, 0)
        
        int32_t var_58_2 = 0xffffffff
        int32_t var_54_2 = 0
        int64_t var_78
        result = sub_14059a8e0(&var_78, 0)
        int64_t var_68
        
        if (var_68 != 0)
            result = sub_140a74f90(var_68)
        
        int64_t rcx_7 = var_88
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        i_1 += 0xb0
        r15_1 += 0xb0
    while (i_1 != result_1)

__security_check_cookie(rax_1 ^ &var_e8)
return result
