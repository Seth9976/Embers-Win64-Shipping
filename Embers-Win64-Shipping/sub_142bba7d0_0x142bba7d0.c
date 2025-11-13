// 函数: sub_142bba7d0
// 地址: 0x142bba7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x2a0)
void var_2f8
memset(&var_2f8, 0, 0x2c0)
*(arg1 + 0x2e8) = -1
arg1[0xbc] = 0
arg1[0x61] = 7
arg1[0x62] = 1
arg1[0x46] = 4
arg1[0x72] = 0xf5c
arg1[0x60] = 0x27a000
int32_t rax = sub_142bba5b0(&var_2f8, *(arg1 + 0xa0), *(arg1 + 0x98), rdi, arg2)
int32_t arg_8 = rax

if (rax == 0)
    int64_t var_260
    int32_t var_258
    int32_t rax_1 = sub_142bbb3c0(arg1, &var_2f8, var_260, var_258)
    arg_8 = rax_1
    
    if (rax_1 == 0)
        int32_t rax_2 = sub_142bba0d0(&var_2f8, rdi, arg2)
        arg_8 = rax_2
        
        if (rax_2 == 0)
            int64_t var_250
            int32_t var_248
            int32_t rax_3 = sub_142bbb3c0(arg1, &var_2f8, var_250, var_248)
            arg_8 = rax_3
            
            if (rax_3 == 0)
                arg1[0x47].b &= 0xfe
                int32_t* rdx_4 = *(arg1 + 0x2e0)
                
                if (rdx_4 != 0 && *rdx_4 != 1 << (rdx_4[1]).b)
                    sub_142bb8820(arg1)
                
                void* rax_5 = *(arg1 + 0x2e0)
                
                if (rax_5 != 0)
                    int32_t rcx_7 = *(rax_5 + 0x2f8)
                    
                    if (rcx_7 != 0 && rcx_7 != *(rax_5 + 4))
                        *(rax_5 + 0x2f8) = 0
                
                int32_t* rax_6 = *(arg1 + 0x2e0)
                
                if (rax_6 != 0 && (*rax_6 == 0 || rax_6[1] == 0))
                    sub_142bb8820(arg1)
                
                void* rdx_5 = *(arg1 + 0x2e0)
                
                if (rdx_5 != 0)
                    int32_t r8_3 = *(rdx_5 + 4)
                    int32_t rcx_9 = 0
                    
                    if (r8_3 != 0)
                        do
                            if (*(rdx_5 + (zx.q(rcx_9) + 7) * 0x18) == 0)
                                sub_142bb8820(arg1)
                                break
                            
                            rcx_9 += 1
                        while (rcx_9 u< r8_3)
                
                if (*(arg1 + 0x2e0) == 0)
                    arg1[0xbc] = 0
                label_142bba9cd:
                    int32_t var_1d8
                    arg1[0x90] = var_1d8
                    int32_t var_90
                    
                    if (var_90 != 0)
                        int32_t var_b0
                        arg1[0x88] = var_b0
                        int64_t var_a8
                        *(arg1 + 0x208) = var_a8
                        int64_t var_80
                        *(arg1 + 0x228) = var_80
                        int64_t var_78
                        *(arg1 + 0x230) = var_78
                        int64_t var_48
                        *(arg1 + 0x238) = var_48
                        int32_t var_90_1 = 0
                        int64_t var_48_1 = 0
                    
                    if (*(*(arg1 + 0xd0) + 0x50) == 0)
                        int32_t rax_18 = arg_8
                        int32_t var_158
                        
                        if (var_158 == 0)
                            rax_18 = 3
                        
                        arg_8 = rax_18
                    
                    bool cond:0_1 = arg1[0x78] != 1
                    int64_t var_170
                    *(arg1 + 0x210) = var_170
                    int64_t var_148
                    *(arg1 + 0x250) = var_148
                    int64_t var_140
                    *(arg1 + 0x258) = var_140
                    int64_t var_1d0
                    *(arg1 + 0x218) = var_1d0
                    int64_t var_1a8
                    *(arg1 + 0x248) = var_1a8
                    int32_t var_158_1 = 0
                    int64_t var_1d0_1 = 0
                    int64_t var_1a8_1 = 0
                    
                    if (not(cond:0_1))
                        int32_t rcx_12 = 0
                        int32_t r15_1 = 0
                        int32_t arg_10 = 0
                        int32_t rdi_1 = 0
                        int32_t var_21c
                        
                        if (var_21c s> 0)
                            char** r12_1 = nullptr
                            int64_t r13_1 = 0
                            
                            do
                                *(*(arg1 + 0x1f8) + r13_1) = 0
                                *(r12_1 + *(arg1 + 0x200)) = ".notdef"
                                int64_t var_210
                                char* r14_1 = *(r12_1 + var_210)
                                
                                if (r14_1 != 0)
                                    int32_t r11_1 = arg1[0x90]
                                    int32_t r9_4 = 0
                                    
                                    if (r11_1 s> 0)
                                        while (true)
                                            int64_t r10_1 = *(*(arg1 + 0x248) + (sx.q(r9_4) << 3))
                                            char* rax_28 = r14_1
                                            uint32_t i
                                            uint32_t rdx_6
                                            
                                            do
                                                rdx_6 = zx.d(*rax_28)
                                                i = zx.d(*(rax_28 + r10_1 - r14_1))
                                                
                                                if (rdx_6 != i)
                                                    break
                                                
                                                rax_28 = &rax_28[1]
                                            while (i != 0)
                                            
                                            if (rdx_6 - i == 0)
                                                int64_t rcx_13 = 0
                                                *(*(arg1 + 0x1f8) + r13_1) = r9_4.w
                                                *(r12_1 + *(arg1 + 0x200)) = r10_1
                                                
                                                while (true)
                                                    char rax_31 = (*".notdef")[rcx_13]
                                                    rcx_13 += 1
                                                    
                                                    if (rax_31 != *(r10_1 + rcx_13 - 1))
                                                        rcx_12 = arg_10
                                                        
                                                        if (rdi_1 s< r15_1)
                                                            r15_1 = rdi_1
                                                        
                                                        if (rdi_1 s>= rcx_12)
                                                            rcx_12 = rdi_1 + 1
                                                            arg_10 = rcx_12
                                                        
                                                        break
                                                    
                                                    if (rcx_13 == 8)
                                                        rcx_12 = arg_10
                                                        break
                                                
                                                break
                                            
                                            r9_4 += 1
                                            
                                            if (r9_4 s>= r11_1)
                                                rcx_12 = arg_10
                                                break
                                
                                rdi_1 += 1
                                r13_1 += 2
                                r12_1 = &r12_1[1]
                            while (rdi_1 s< var_21c)
                        
                        arg1[0x7b] = r15_1
                        int32_t var_240
                        arg1[0x7a] = var_240
                        arg1[0x7c] = rcx_12
                    
                    if (arg1[0x61] u> 0x3e8)
                        arg1[0x61] = 7
                    
                    if (arg1[0x62] u> 0x3e8)
                        arg1[0x62] = 1
                else
                    int32_t r9_3 = arg1[0xbc]
                    
                    if (r9_3 == 0)
                        goto label_142bba9cd
                    
                    *(arg1 + 0x2f8) = sub_142b99a90(*(arg1 + 0x98), 4, 0, r9_3, 0, &arg_8)
                    
                    if (arg_8 == 0)
                        goto label_142bba9cd
                    
                    arg1[0xbc] = 0

sub_142bbba20(&var_2f8)
return zx.q(arg_8)
