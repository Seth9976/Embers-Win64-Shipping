// 函数: sub_141bb0ae0
// 地址: 0x141bb0ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d3c6e0(arg1 + 0x28)

if (rax == 0)
    *arg2 = 0
    arg2[1] = 0
else
    char arg_8 = 0
    
    if (*(arg1 + 0x61) == 0 || *(arg1 + 0x60) == 0)
        int64_t var_88 = 0
        int64_t var_80_1 = 0
        void* var_60
        
        if (sub_141b72c00(rax, arg1 + 0x30, &var_88, &var_60) == 0)
            int64_t rcx_2 = var_88
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            goto label_141bb0b7a
        
        void arg_18
        
        if (&arg_18 != arg1 + 0x60)
            *(arg1 + 0x60) = 0x100
        
        *arg2 = var_88
        arg2[1].d = var_80_1.d
        *(arg2 + 0xc) = var_80_1:4.d
    else
    label_141bb0b7a:
        char arg_20 = 2
        
        if (*(arg1 + 0x61) == 0 || *(arg1 + 0x60) == 2)
            sub_1405d9400()
            int64_t var_78 = data_143cd6fd8
            int64_t* rcx_4 = data_143cd6fe0
            
            if (rcx_4 != 0)
                rcx_4[1].d += 1
            
            int32_t var_68_1 = data_143cd6fe8
            void* var_58
            
            if (sub_141b72d60(rax, arg1 + 0x30, &var_78, &var_58) == 0)
                if (rcx_4 != 0)
                    rcx_4[1].d -= 1
                    
                    if (rcx_4[1].d == 1)
                        (**rcx_4)(rcx_4)
                        int32_t rsi_2 = *(rcx_4 + 0xc)
                        *(rcx_4 + 0xc) -= 1
                        
                        if (rsi_2 == 1)
                            (*(*rcx_4 + 8))(rcx_4, zx.q(rsi_2))
                
                goto label_141bb0c7b
            
            void var_98
            
            if (&var_98 != arg1 + 0x60)
                *(arg1 + 0x60) = 0x102
            
            sub_140596d10(arg2, sub_140ac6680(&var_78))
            
            if (rcx_4 != 0)
                rcx_4[1].d -= 1
                
                if (rcx_4[1].d == 1)
                    (**rcx_4)(rcx_4)
                    int32_t rsi_1 = *(rcx_4 + 0xc)
                    *(rcx_4 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        (*(*rcx_4 + 8))(rcx_4, zx.q(rsi_1))
        else
        label_141bb0c7b:
            char rax_16 = *(arg1 + 0x61)
            char var_97_1 = 3
            void* r15_1
            
            if (rax_16 == 0 || *(arg1 + 0x60) == 3)
                r15_1 = arg1 + 0x30
                int32_t var_90
                void* var_50
                
                if (sub_141b723c0(rax, r15_1, &var_90, &var_50) == 0)
                    rax_16 = *(arg1 + 0x61)
                    goto label_141bb0cd3
                
                void var_96
                
                if (&var_96 != arg1 + 0x60)
                    *(arg1 + 0x60) = 0x103
                
                int32_t rdx_6 = var_90
                *arg2 = 0
                arg2[1] = 0
                sub_140a20c40(arg2, rdx_6)
            else
                r15_1 = arg1 + 0x30
            label_141bb0cd3:
                char var_95_1 = 4
                int32_t var_8c
                void* var_48
                
                if (rax_16 == 0 || *(arg1 + 0x60) == 4)
                    if (sub_141b72520(rax, r15_1, &var_8c, &var_48) == 0)
                        *arg2 = 0
                        arg2[1] = 0
                    else
                        void var_94
                        
                        if (&var_94 != arg1 + 0x60)
                            *(arg1 + 0x60) = 0x104
                        
                        sub_140a31300(arg2, _mm_cvtps_pd(var_8c).q, 1)
                else
                    *arg2 = 0
                    arg2[1] = 0

return arg2
