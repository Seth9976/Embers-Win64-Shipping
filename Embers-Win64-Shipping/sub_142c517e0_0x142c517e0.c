// 函数: sub_142c517e0
// 地址: 0x142c517e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int64_t result = sx.q(*(arg2 + 0x70))

if (result.d s>= 0 && result.d s< *(arg1 + 0x408))
    int32_t rsi_1 = 0
    int32_t var_158_1 = 1
    void* r12_2 = result * 0x624 + *(arg1 + 0x400)
    int64_t rcx = *(arg1 + 8)
    int64_t var_c8
    int64_t* var_160_1 = &var_c8
    int32_t var_100 = 0
    int32_t var_104 = 0
    void* var_d0 = nullptr
    var_c8 = 0
    
    if ((*(arg1 + 0xb8))(rcx, zx.q(*(r12_2 + 4)), &var_100, &var_d0, &var_104, var_160_1, var_158_1)
            u<= 1)
        void var_98
        memset(&var_98, 0, 0x50)
        int32_t r14_1 = var_104
        
        if (r14_1 s> 1)
            int64_t r9_2 = 0xffffffff
            int32_t rdi_1 = var_100
            int32_t r10_1 = 0
            int32_t r8_2 = 0
            
            if (rdi_1 s> 0)
                void* r15_1 = var_d0
                int32_t* r11_1 = r15_1 + 0x40
                int32_t rax_3
                int32_t rdx_1
                
                do
                    rdx_1 = *r11_1
                    r11_1 = &r11_1[0x14]
                    bool cond:1_1 = rdx_1 s<= r10_1
                    rax_3 = r8_2
                    
                    if (rdx_1 s<= r10_1)
                        rdx_1 = r10_1
                    
                    if (cond:1_1)
                        rax_3 = r9_2.d
                    
                    r8_2 += 1
                    r9_2 = sx.q(rax_3)
                    r10_1 = rdx_1
                while (r8_2 s< rdi_1)
                
                if (rdx_1 s> 1 && rax_3 s>= 0 && r9_2.d s< rdi_1)
                    uint64_t rdx_2 = zx.q(*(r12_2 + 4))
                    int64_t r9_3 = var_c8
                    int64_t rcx_2 = *(arg1 + 8)
                    int64_t rdi_3 = r9_2 * 0xa
                    int32_t var_fc
                    int32_t* var_168_2 = &var_fc
                    var_fc = 0
                    
                    if ((*(arg1 + 0xc0))(rcx_2, rdx_2, zx.q(r14_1), r9_3, var_168_2) == 0)
                        int32_t r8_4 = var_fc
                        
                        if (r8_4 s>= 0)
                            int64_t rcx_3 = *(arg1 + 8)
                            int32_t r12_3 = 2
                            int32_t var_108 = 0
                            int32_t var_118_1 = 2
                            int64_t var_a0
                            int64_t* var_120_1 = &var_a0
                            int32_t var_f4
                            int32_t* var_128_1 = &var_f4
                            int64_t var_a8
                            int64_t* var_130_1 = &var_a8
                            int32_t var_f0
                            int32_t* var_138_1 = &var_f0
                            int64_t var_b0
                            int64_t* var_140_1 = &var_b0
                            int32_t var_ec
                            int32_t* var_148_1 = &var_ec
                            int64_t var_b8
                            int64_t* var_150_1 = &var_b8
                            int32_t var_e8
                            var_158_1.q = &var_e8
                            void* var_d8
                            int64_t* var_160_2 = &var_d8
                            int32_t* var_168_3 = &var_108
                            var_d8 = nullptr
                            var_e8 = 0
                            __builtin_memset(&var_b8, 0, 0x20)
                            uint64_t rdx_3 = zx.q(*(r12_2 + 4))
                            var_ec = 0
                            var_f0 = 0
                            var_f4 = 0
                            
                            if ((*(arg1 + 0xc8))(rcx_3, rdx_3, r8_4, &var_98, var_168_3, var_160_2, 
                                    var_158_1, var_150_1, var_148_1, var_140_1, var_138_1, 
                                    var_130_1, var_128_1, var_120_1, var_118_1) == 0)
                                int32_t r9_5 = var_108
                                
                                if (r9_5 s> 1)
                                    *(arg2 + 0x64) = *(r15_1 + (rdi_3 << 3) + 0x20)
                                    *(arg2 + 0x68) = *(r15_1 + (rdi_3 << 3) + 0x24)
                                
                                *(arg2 + 0x58) = 1
                                int32_t var_88
                                *(arg2 + 0x60) = var_88
                                int32_t var_84
                                *(arg2 + 0x5c) = var_84
                                
                                if (var_84 s< 3)
                                    r12_3 = 0
                                else if (var_84 s<= 4)
                                    r12_3 = 1
                                else if (var_84 s> 6)
                                    r12_3 = 0
                                
                                int32_t r14_2 = 0
                                
                                if (r9_5 s> 0)
                                    int64_t r15_2 = 0
                                    
                                    do
                                        int32_t rcx_6 = 0
                                        int32_t rdx_4 = *(arg2 + 0x48)
                                        void* r10_3 = var_d8 + r15_2
                                        
                                        if (rdx_4 s> 0)
                                            void* r11_2 = *(arg2 + 0x50)
                                            int32_t* rax_10 = r11_2 + 0x1c8
                                            
                                            do
                                                if (*rax_10 == *(r10_3 + 8))
                                                    void* rdi_4 = sx.q(rcx_6) * 0x1d0
                                                    void* rdi_5 = rdi_4 + r11_2
                                                    
                                                    if (rdi_4 != neg.q(r11_2))
                                                        int32_t rcx_8 = *(rdi_5 + 0x120) | 0x20
                                                        *(rdi_5 + 0x120) = rcx_8
                                                        int32_t rax_12 = *(r10_3 + 0x24)
                                                        *(rdi_5 + 0x154) = rax_12
                                                        int32_t rdx_5 = *(r10_3 + 0x28)
                                                        *(rdi_5 + 0x158) = rdx_5
                                                        
                                                        if (r12_3 == rax_12 && var_88 - 1 == rdx_5)
                                                            *(rdi_5 + 0x120) = rcx_8 | 0x40
                                                        
                                                        uint64_t r8_6 = zx.q(*(r10_3 + 8))
                                                        int64_t rcx_10 = *(arg1 + 8)
                                                        void* var_e0
                                                        int64_t* var_168_4 = &var_e0
                                                        int32_t var_f8 = 0
                                                        var_e0 = nullptr
                                                        
                                                        if ((*(arg1 + 0xd0))(rcx_10, 
                                                                zx.q(*(r12_2 + 4)), r8_6, &var_f8, 
                                                                var_168_4) == 0 && var_f8 s> 0)
                                                            int32_t rcx_11 = *(var_e0 + 0x2c)
                                                            
                                                            if (rcx_11 + 1 u> 1 && rcx_11 != 0xb4)
                                                                *(rdi_5 + 0x120) |= 0x80
                                                        
                                                        sub_142c4c1d0(&var_e0)
                                                        r9_5 = var_108
                                                    
                                                    break
                                                
                                                rcx_6 += 1
                                                rax_10 = &rax_10[0x74]
                                            while (rcx_6 s< rdx_4)
                                        
                                        r14_2 += 1
                                        r15_2 += 0x70
                                    while (r14_2 s< r9_5)
                            
                            sub_142c4c1d0(&var_d8)
                            sub_142c4c1d0(&var_b8)
                            sub_142c4c1d0(&var_b0)
                            sub_142c4c1d0(&var_a8)
                            sub_142c4c1d0(&var_a0)
    
    sub_142c4c1d0(&var_d0)
    result = sub_142c4c1d0(&var_c8)
    
    if (*(arg2 + 0x58) != 0)
        int32_t i = 0
        
        if (*(arg2 + 0x48) s> 0)
            int64_t r9_7 = 0
            
            do
                void* rcx_21 = *(arg2 + 0x50) + r9_7
                result = zx.q(*(rcx_21 + 0x120))
                
                if ((result.b & 0x20) != 0)
                    int32_t r11_3 = *(arg2 + 0x5c)
                    int32_t r10_4 = rsi_1 + 1
                    int32_t rax_17 = result.d & 0x80
                    
                    if (rax_17 == 0)
                        r10_4 = rsi_1
                    
                    int32_t rax_21
                    
                    if (rax_17 == 0)
                        *(rcx_21 + 0x138) = divs.dp.d(sx.q(*(arg2 + 0x64)), r11_3)
                        rax_21 = *(arg2 + 0x68)
                    else
                        *(rcx_21 + 0x138) = divs.dp.d(sx.q(*(arg2 + 0x68)), r11_3)
                        rax_21 = *(arg2 + 0x64)
                    
                    rsi_1 = r10_4
                    *(arg2 + 0x60)
                    *(rcx_21 + 0x13c) = divs.dp.d(sx.q(rax_21), *(arg2 + 0x60))
                    *(rcx_21 + 0x130) = *(rcx_21 + 0x154) * *(rcx_21 + 0x138)
                    result = zx.q(*(rcx_21 + 0x158) * *(rcx_21 + 0x13c))
                    *(rcx_21 + 0x134) = result.d
                    *(rcx_21 + 0x140) = *(rcx_21 + 0x130)
                
                i += 1
                r9_7 += 0x1d0
            while (i s< *(arg2 + 0x48))
        
        if (rsi_1 == *(arg2 + 0x5c))
            int32_t rcx_22 = *(arg2 + 0x64)
            result = zx.q(*(arg2 + 0x68))
            *(arg2 + 0x64) = result.d
            *(arg2 + 0x68) = rcx_22

__security_check_cookie(rax_1 ^ &var_188)
return result
