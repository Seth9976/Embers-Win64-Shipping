// 函数: sub_142c3dce0
// 地址: 0x142c3dce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12
uint64_t var_20 = r12
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
sub_142bf4e80(arg2)
int32_t r9 = *(arg2 + 0x60)
int32_t var_84 = r9
uint64_t r15 = 0
*(arg2 + 0x5c) = 0
int32_t r14 = 0
int128_t* result

if (r9 != 0)
    while (*(arg2 + 0x58) != 0)
        uint64_t rdx = zx.q(*(arg2 + 0x5c))
        int64_t r8 = *(arg2 + 0x70)
        int32_t rdi_1 = *(r8 + rdx * 0x14)
        uint32_t var_88
        
        if (rdi_1 - 0x302e u> 1)
            r15 = zx.q(*(arg2 + 0x64))
            uint64_t rax_16
            
            if (rdi_1 - 0x1100 u<= 0x5f || rdi_1 - 0xa960 u<= 0x1c)
                rax_16 = zx.q((rdx + 1).d)
            
            int32_t rdx_13
            int32_t* r9_5
            
            if ((rdi_1 - 0x1100 u<= 0x5f || rdi_1 - 0xa960 u<= 0x1c) && rax_16.d u< r9)
                r12 = zx.q(*(r8 + rax_16 * 0x14))
                
                if ((r12 - 0x1160).d u<= 0x47 || (r12 - 0xd7b0).d u<= 0x16)
                    uint64_t rax_19 = zx.q((rdx + 2).d)
                    int32_t var_80_1 = 0
                    int32_t rsi_2 = 0
                    
                    if (rax_19.d u< r9)
                        rsi_2 = *(r8 + rax_19 * 0x14)
                        
                        if (rsi_2 - 0x11a8 u<= 0x57 || rsi_2 - 0xd7cb u<= 0x30)
                            var_80_1 = rsi_2 - 0x11a7
                        else
                            rsi_2 = 0
                    
                    int32_t r14_2
                    r14_2.b = rsi_2 != 0
                    int32_t r8_5 = r14_2 + 2 + rdx.d
                    
                    if (r8_5 - rdx.d u>= 2)
                        sub_142bf5c70(arg2, rdx.d, r8_5)
                    
                    char rax_31
                    
                    if (rdi_1 - 0x1100 u<= 0x12 && (r12 - 0x1161).d u<= 0x14
                            && (rsi_2 == 0 || rsi_2 - 0x11a8 u<= 0x1a))
                        uint32_t rdx_12 = var_80_1 - 0x28469c + (rdi_1 * 0x15 + r12.d) * 0x1c
                        var_88 = rdx_12
                        rax_31 = sub_142c3e360(arg3, rdx_12, arg1)
                    
                    if (rdi_1 - 0x1100 u<= 0x12 && (r12 - 0x1161).d u<= 0x14
                            && (rsi_2 == 0 || rsi_2 - 0x11a8 u<= 0x1a) && rax_31 != 0)
                        r9_5 = &var_88
                        rdx_13 = r14_2 + 2
                        goto label_142c3dfc2
                    
                    *(*(arg2 + 0x70) + zx.q(*(arg2 + 0x5c)) * 0x14 + 0x12) = 1
                    sub_142c08c10(arg2)
                    *(*(arg2 + 0x70) + zx.q(*(arg2 + 0x5c)) * 0x14 + 0x12) = 2
                    arg1 = sub_142c08c10(arg2)
                    int32_t rax_38
                    
                    if (rsi_2 == 0)
                        rax_38 = 2
                    else
                        *(*(arg2 + 0x70) + zx.q(*(arg2 + 0x5c)) * 0x14 + 0x12) = 3
                        arg1 = sub_142c08c10(arg2)
                        rax_38 = 3
                    
                    r14 = rax_38 + r15.d
                label_142c3e036:
                    
                    if (*(arg2 + 0x1c) == 0)
                        sub_142bf52d0(arg2, r15.d, r14)
                else
                    arg1 = sub_142c08c10(arg2)
            else if (rdi_1 - 0xac00 u> 0x2ba3)
                arg1 = sub_142c08c10(arg2)
            else
                int64_t rdx_15 = *(arg3 + 0x48)
                var_88 = 0
                void* r10_2 = *(arg3 + 0x40)
                int32_t rcx_27 = var_84
                r12.b = (*(r10_2 + 0x130))(arg3, rdx_15, zx.q(rdi_1), &var_88, *(r10_2 + 0x20)) != 0
                uint32_t r8_9 = (rdi_1 - 0xac00) u/ 0x24c
                var_88 = r8_9
                int32_t rsi_4 = (rdi_1 - 0xac00) u% 0x24c
                uint32_t r9_11 = rsi_4 u/ 0x1c
                int32_t rsi_5 = rsi_4 u% 0x1c
                
                if (rsi_4 != r9_11 * 0x1c)
                    goto label_142c3e13c
                
                uint64_t rax_44 = zx.q(*(arg2 + 0x5c) + 1)
                
                if (rax_44.d u>= rcx_27)
                    goto label_142c3e13c
                
                int32_t rdx_18 = *(*(arg2 + 0x70) + rax_44 * 0x14)
                int32_t var_7c
                
                if (rdx_18 - 0x11a8 u> 0x1a)
                label_142c3e139:
                    rcx_27 = var_84
                label_142c3e13c:
                    
                    if (r12.b == 0)
                    label_142c3e17b:
                        void* r10_3 = *(arg3 + 0x40)
                        int64_t rdx_23 = *(arg3 + 0x48)
                        int32_t var_58 = r8_9 + 0x1100
                        var_7c = 0
                        
                        if ((*(r10_3 + 0x130))(arg3, rdx_23, r8_9 + 0x1100, &var_7c, 
                                *(r10_3 + 0x20)) != 0)
                            void* r10_4 = *(arg3 + 0x40)
                            int64_t rdx_24 = *(arg3 + 0x48)
                            var_7c = 0
                            
                            if ((*(r10_4 + 0x130))(arg3, rdx_24, zx.q(r9_11 + 0x1161), &var_7c, 
                                    *(r10_4 + 0x20)) == 0)
                                goto label_142c3e27a
                            
                            bool cond:2_1 = rsi_5 != 0
                            
                            if (rsi_5 == 0)
                                goto label_142c3e208
                            
                            if (sub_142c3e360(arg3, rsi_5 + 0x11a7, arg1) != 0)
                                cond:2_1 = rsi_5 != 0
                            label_142c3e208:
                                int32_t rdi_3
                                rdi_3.b = cond:2_1
                                int32_t rdi_4 = rdi_3 + 2
                                result, arg1 = sub_142bf5610(arg2, 1, rdi_4, &var_58)
                                
                                if (r12.b != 0 && rsi_5 == 0)
                                    result, arg1 = sub_142c08c10(arg2)
                                    rdi_4 += 1
                                
                                if (*(arg2 + 0x58) == 0)
                                    goto label_142c3e2f7
                                
                                int64_t r8_14 = *(arg2 + 0x78)
                                uint64_t rdx_26 = zx.q((r15 + 1).d)
                                r14 = rdi_4 + r15.d
                                *(r8_14 + r15 * 0x14 + 0x12) = 1
                                uint64_t rdx_27 = zx.q(rdx_26.d + 1)
                                *(r8_14 + rdx_26 * 0x14 + 0x12) = 2
                                
                                if (rdx_27.d u< r14)
                                    *(r8_14 + rdx_27 * 0x14 + 0x12) = 3
                                
                                goto label_142c3e036
                        
                    label_142c3e27a:
                        
                        if (rsi_5 == 0)
                            int32_t rdx_28 = *(arg2 + 0x5c)
                            uint64_t rax_62 = zx.q(rdx_28 + 1)
                            
                            if (rax_62.d u< var_84)
                                int32_t r8_15 = *(*(arg2 + 0x70) + rax_62 * 0x14)
                                
                                if ((r8_15 - 0x11a8 u<= 0x57 || r8_15 - 0xd7cb u<= 0x30) && 2 u>= 2)
                                    sub_142bf5c70(arg2, rdx_28, rdx_28 + 2)
                    else if (rsi_5 == 0)
                        uint64_t rax_51 = zx.q(*(arg2 + 0x5c) + 1)
                        
                        if (rax_51.d u>= rcx_27)
                            goto label_142c3e2c3
                        
                        int32_t rdx_22 = *(*(arg2 + 0x70) + rax_51 * 0x14)
                        
                        if (rdx_22 - 0x11a8 u<= 0x57 || rdx_22 - 0xd7cb u<= 0x30)
                            goto label_142c3e17b
                    
                label_142c3e2c3:
                    
                    if (r12.b == 0)
                        arg1 = sub_142c08c10(arg2)
                    else
                        r14 = (r15 + 1).d
                        arg1 = sub_142c08c10(arg2)
                else
                    int32_t rdx_20 = rdx_18 - 0x11a7 + rdi_1
                    var_7c = rdx_20
                    
                    if (sub_142c3e360(arg3, rdx_20, arg1) == 0)
                        int32_t rcx_30 = *(arg2 + 0x5c)
                        
                        if (2 u>= 2)
                            sub_142bf5c70(arg2, rcx_30, rcx_30 + 2)
                        
                        r8_9 = var_88
                        goto label_142c3e139
                    
                    r9_5 = &var_7c
                    rdx_13 = 2
                label_142c3dfc2:
                    result, arg1 = sub_142bf5610(arg2, rdx_13, 1, r9_5)
                    
                    if (*(arg2 + 0x58) == 0)
                        goto label_142c3e2f7
                    
                    r14 = (r15 + 1).d
        else if (r15.d u>= r14 || r14 != *(arg2 + 0x64))
            int32_t rax_11
            
            if ((*(arg2 + 0x18) & 0x10) == 0)
                int64_t rdx_7 = *(arg3 + 0x48)
                var_88 = 0
                void* r10_1 = *(arg3 + 0x40)
                rax_11 = (*(r10_1 + 0x130))(arg3, rdx_7, 0x25cc, &var_88, *(r10_1 + 0x20))
            
            if ((*(arg2 + 0x18) & 0x10) != 0 || rax_11 == 0)
                arg1 = sub_142c08c10(arg2)
                r14 = *(arg2 + 0x64)
                r15 = zx.q(r14)
            else
                int32_t var_6c
                int32_t rax_12 = sub_142bf49d0(arg3, rdi_1, 0, &var_6c, arg1)
                int32_t rax_13
                
                if (rax_12 != 0)
                    rax_13 = sub_142bf4a30(arg3, zx.q(var_6c))
                
                int32_t var_78
                
                if (rax_12 == 0 || rax_13 != 0)
                    var_78 = rdi_1
                    int32_t var_74_2 = 0x25cc
                else
                    var_78 = 0x25cc
                    int32_t var_74_1 = rdi_1
                
                arg1 = sub_142bf5610(arg2, 1, 2, &var_78)
                r14 = *(arg2 + 0x64)
                r15 = zx.q(r14)
        else
            sub_142bf5b60(arg2, r15.d, rdx.d)
            int32_t var_70
            int32_t rax_4 = sub_142bf49d0(arg3, rdi_1, 0, &var_70, sub_142c08c10(arg2))
            int32_t rax_5
            
            if (rax_4 != 0)
                rax_5, arg1 = sub_142bf4a30(arg3, zx.q(var_70))
            
            if (rax_4 != 0 && rax_5 == 0)
                r14 = *(arg2 + 0x64)
                r15 = zx.q(r14)
            else
                sub_142bf52d0(arg2, r15.d, r14 + 1)
                int64_t rdx_5 = *(arg2 + 0x78)
                uint64_t rcx_6 = zx.q(r14) * 5
                arg1.o = *(rdx_5 + (rcx_6 << 2))
                int32_t rsi_1 = *(rdx_5 + (rcx_6 << 2) + 0x10)
                int128_t* rdi_2 = rdx_5 + zx.q(r15.d) * 0x14
                int128_t var_68_1 = arg1.o
                memmove(rdx_5 + zx.q((r15 + 1).d) * 0x14, rdi_2, (r14 - r15.d) * 0x14)
                arg1.o = var_68_1
                *rdi_2 = arg1.o
                rdi_2[1].d = rsi_1
                r14 = *(arg2 + 0x64)
                r15 = zx.q(r14)
        r9 = var_84
        
        if (*(arg2 + 0x5c) u>= r9)
            break

result = sub_142bf5b20(arg2)
label_142c3e2f7:
__security_check_cookie(rax_1 ^ &var_b8)
return result
