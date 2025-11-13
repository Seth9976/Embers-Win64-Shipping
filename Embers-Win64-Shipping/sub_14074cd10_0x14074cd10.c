// 函数: sub_14074cd10
// 地址: 0x14074cd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
uint64_t result = __security_cookie ^ &var_188
uint64_t result_1 = result

if (*(arg1 + 0x60) != 0)
    int64_t rcx_1 = sx.q(*(arg1 + 0x58)) ^ 1
    result = (rcx_1 + 3) * 2
    int64_t i_2 = sx.q(*(arg1 + (result << 3)))
    *(arg1 + 0x50) = 0
    
    if (i_2.d s> *(arg1 + 0x54))
        result = sub_140775d60(arg1 + 0x48, i_2.d)
    
    int64_t i_1 = i_2
    
    if (i_2.d s> 0)
        int64_t rcx_3 = rcx_1 << 4
        int64_t r15_1 = 0
        int64_t var_148_2 = rcx_3
        int64_t var_150_1 = 0
        int64_t i
        
        do
            void* rdi_2 = *(rcx_3 + arg1 + 0x28) + r15_1
            int32_t var_138 = 0xffffffff
            int32_t var_134_1 = 0
            void var_158
            void var_130
            sub_141eb54c0(&var_130, 0, &var_158, 0, nullptr)
            void var_c0
            sub_142259c00(&var_c0)
            sub_142277d10(&var_c0, 2)
            void* rcx_7 = *(arg1 + 0x60)
            int32_t var_a0_1 = 0
            char var_9c_1 = 0
            int32_t var_98_1 = 0
            int64_t var_60 = 0
            int32_t var_58_1 = 0
            char* var_50_1 = nullptr
            int32_t var_48_1 = 0
            char rax_2 = sub_141ec89a0(rcx_7, rdi_2, &var_138)
            int32_t rax_3
            
            if (rax_2 != 0 && var_48_1 != 0)
                rax_3 = 0
            
            char* rdx_3
            
            if (rax_2 == 0 || var_48_1 == 0 || var_48_1 s<= 0)
            label_14074cfb8:
                rdx_3 = var_50_1
            else
                rdx_3 = var_50_1
                char* rcx_8 = rdx_3
                
                do
                    if ((*rcx_8 & 1) != 0)
                        void* rsi_1 = sx.q(rax_3) * 0x88
                        void* rsi_2 = rsi_1 + rdx_3
                        
                        if (rsi_1 == neg.q(rdx_3))
                            goto label_14074cf1c
                        
                        if ((*rsi_2 & 1) == 0)
                            goto label_14074cf1c
                        
                        int64_t rdi_3 = sx.q(*(arg1 + 0x50))
                        int32_t rax_5 = (rdi_3 + 1).d
                        *(arg1 + 0x50) = rax_5
                        
                        if (rax_5 s> *(arg1 + 0x54))
                            sub_1407756d0(arg1 + 0x48)
                        
                        *(rdi_2 + 8) = rdi_3.d
                        int64_t* rdi_5 = rdi_3 * 0x34 + *(arg1 + 0x48)
                        rdi_5[6].b = *rsi_2 u>> 1 & 1
                        *rdi_5 = *(rsi_2 + 0x1c)
                        rdi_5[1].d = *(rsi_2 + 0x24)
                        *(rdi_5 + 0xc) = *(rsi_2 + 0x34)
                        *(rdi_5 + 0x14) = *(rsi_2 + 0x3c)
                        
                        if (sub_140d3e110(rsi_2 + 0x60) == 0)
                            *(rdi_5 + 0x24) = 0xffffffff
                            rdi_5[5] = 0
                            goto label_14074cfb8
                        
                        *(rdi_5 + 0x24) = *(sub_140d3c6e0(rsi_2 + 0x60) + 0xc)
                        rdi_5[5].d = *(sub_140d3c6e0(rsi_2 + 0x60) + 0x28)
                        *(rdi_5 + 0x2c) = *(sub_140d3c6e0(rsi_2 + 0x60) + 0x30)
                        rdx_3 = var_50_1
                        goto label_14074cf1c
                    
                    rax_3 += 1
                    rcx_8 = &rcx_8[0x88]
                while (rax_3 s< var_48_1)
            
        label_14074cf1c:
            
            if (rdx_3 != 0)
                sub_140a74f90(rdx_3)
            
            result = sub_140745b20(&var_60)
            int64_t var_d0
            
            if (var_d0 != 0)
                result = sub_140a74f90(var_d0)
            
            int64_t var_f0
            
            if (var_f0 != 0)
                result = sub_140a74f90(var_f0)
            
            rcx_3 = var_148_2
            r15_1 += 0xa0
            i = i_1
            i_1 -= 1
        while (i != 1)

__security_check_cookie(result_1 ^ &var_188)
return result
