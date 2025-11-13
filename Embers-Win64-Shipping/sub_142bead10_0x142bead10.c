// 函数: sub_142bead10
// 地址: 0x142bead10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r11_1 = zx.q(*(arg1 + 0x2c)) + arg1[7]
int64_t rbx = arg1[8]
char* r10 = r11_1
int32_t rdi = arg1[6].d

if (arg6 u<= 0x64)
    if (rdi == 0)
    label_142bead94:
        
        if (arg6 != 0)
            return 0x15
        
        return 0x9d
    
    uint32_t r8_2
    
    while (true)
        r8_2 = zx.d(*r10) << 8 | zx.d(r10[1])
        
        if (arg2 u>= r8_2 && arg2 u<= (zx.d(r10[2]) << 8 | zx.d(r10[3])))
            break
        
        r10 = &r10[8]
        int32_t temp0_1 = rdi
        rdi -= 1
        
        if (temp0_1 == 1)
            goto label_142bead94
    
    uint32_t rcx_9 = ((zx.d(r10[4]) << 8 | zx.d(r10[5])) << 8 | zx.d(r10[6])) << 8 | zx.d(r10[7])
    
    if (rcx_9 u<= rbx.d - r11_1.d)
        char* r11_2 = &r11_1[zx.q(rcx_9)]
        
        if (&r11_2[8] u<= rbx)
            uint32_t rbp_3 = zx.d(r11_2[2]) << 8 | zx.d(r11_2[3])
            uint32_t rdi_7 =
                ((zx.d(r11_2[4]) << 8 | zx.d(r11_2[5])) << 8 | zx.d(r11_2[6])) << 8 | zx.d(r11_2[7])
            uint64_t rcx_13 = zx.q((zx.d(*r11_2) << 8 | zx.d(r11_2[1])) - 1)
            uint32_t rdx_8
            uint32_t r9_6
            
            if (rcx_13.d u<= 0x12)
                switch (rcx_13)
                    case 0
                        void* r11_4 = &r11_2[8 + zx.q((arg2 - r8_2) << 2)]
                        
                        if (r11_4 + 8 u<= rbx)
                            rdx_8 = ((zx.d(*r11_4) << 8 | zx.d(*(r11_4 + 1))) << 8
                                | zx.d(*(r11_4 + 2))) << 8 | zx.d(*(r11_4 + 3))
                            r9_6 = ((zx.d(*(r11_4 + 4)) << 8 | zx.d(*(r11_4 + 5))) << 8
                                | zx.d(*(r11_4 + 6))) << 8 | zx.d(*(r11_4 + 7))
                            
                            if (rdx_8 != r9_6)
                                goto label_142beb187
                    case 1
                        if (&r11_2[0x14] u<= rbx)
                            uint16_t* r9_7 = arg1[3]
                            uint32_t rcx_22 = ((zx.d(r11_2[8]) << 8 | zx.d(r11_2[9])) << 8
                                | zx.d(r11_2[0xa])) << 8 | zx.d(r11_2[0xb])
                            
                            if (&r11_2[0x11] u<= rbx)
                                *r9_7 = zx.w(r11_2[0xc])
                                r9_7[1] = zx.w(r11_2[0xd])
                                r9_7[2] = sx.w(r11_2[0xe])
                                r9_7[3] = sx.w(r11_2[0xf])
                                r9_7[4] = zx.w(r11_2[0x10])
                                
                                if (&r11_2[0x14] u<= rbx)
                                    r9_7[5] = sx.w(r11_2[0x11])
                                    r9_7[6] = sx.w(r11_2[0x12])
                                    r9_7[7] = zx.w(r11_2[0x13])
                                    rdx_8 = (arg2 - r8_2) * rcx_22
                                    arg1[4].b = 1
                                    r9_6 = rcx_22 + rdx_8
                                label_142beb187:
                                    
                                    if (rdx_8 u<= r9_6)
                                        return sub_142bea6d0(arg1, rbp_3, rdi_7 + rdx_8, 
                                            r9_6 - rdx_8, arg5, arg3, arg4, arg6, arg7)
                    case 2
                        void* r11_5 = &r11_2[8 + zx.q((arg2 - r8_2) * 2)]
                        
                        if (r11_5 + 4 u<= rbx)
                            rdx_8 = zx.d(*r11_5) << 8 | zx.d(*(r11_5 + 1))
                            r9_6 = zx.d(*(r11_5 + 2)) << 8 | zx.d(*(r11_5 + 3))
                            
                            if (rdx_8 != r9_6)
                                goto label_142beb187
                    case 3
                        void* r11_6 = &r11_2[0xc]
                        
                        if (r11_6 u<= rbx)
                            uint32_t r10_8 = ((zx.d(*(r11_6 - 4)) << 8 | zx.d(*(r11_6 - 3))) << 8
                                | zx.d(*(r11_6 - 2))) << 8 | zx.d(*(r11_6 - 1))
                            
                            if (r11_6 + 4 u<= rbx && r10_8 u<= ((rbx - r11_6) s>> 2).d - 1)
                                int32_t r8_3 = 0
                                
                                if (r10_8 != 0)
                                    while ((zx.d(*r11_6) << 8 | zx.d(*(r11_6 + 1))) != arg2)
                                        r11_6 += 4
                                        r8_3 += 1
                                        
                                        if (r8_3 u>= r10_8)
                                            goto label_142bead94
                                    
                                    rdx_8 = zx.d(*(r11_6 + 2)) << 8 | zx.d(*(r11_6 + 3))
                                    r9_6 = zx.d(*(r11_6 + 6)) << 8 | zx.d(*(r11_6 + 7))
                                    
                                    if (r8_3 u< r10_8)
                                        goto label_142beb187
                    case 4, 0x12
                        if (&r11_2[0x18] u<= rbx)
                            uint16_t* rcx_26 = arg1[3]
                            uint32_t r10_15 = ((zx.d(r11_2[8]) << 8 | zx.d(r11_2[9])) << 8
                                | zx.d(r11_2[0xa])) << 8 | zx.d(r11_2[0xb])
                            
                            if (&r11_2[0x11] u<= rbx)
                                *rcx_26 = zx.w(r11_2[0xc])
                                rcx_26[1] = zx.w(r11_2[0xd])
                                rcx_26[2] = sx.w(r11_2[0xe])
                                rcx_26[3] = sx.w(r11_2[0xf])
                                rcx_26[4] = zx.w(r11_2[0x10])
                                
                                if (&r11_2[0x14] u<= rbx)
                                    rcx_26[5] = sx.w(r11_2[0x11])
                                    rcx_26[6] = sx.w(r11_2[0x12])
                                    rcx_26[7] = zx.w(r11_2[0x13])
                                    arg1[4].b = 1
                                    void* r9_13 = &r11_2[0x17]
                                    uint32_t r11_13 = (
                                        (zx.d(r11_2[0x14]) << 8 | zx.d(r11_2[0x15])) << 8
                                        | zx.d(r11_2[0x16])) << 8 | zx.d(*r9_13)
                                    
                                    if (r11_13 u<= ((rbx - &r11_2[0x18]) s>> 1).d)
                                        int32_t r8_5 = 0
                                        
                                        if (r11_13 != 0)
                                            while (true)
                                                uint32_t rcx_28 = zx.d(*(r9_13 + 1))
                                                r9_13 += 2
                                                
                                                if ((rcx_28 << 8 | zx.d(*r9_13)) == arg2)
                                                    break
                                                
                                                r8_5 += 1
                                                
                                                if (r8_5 u>= r11_13)
                                                    goto label_142bead94
                                            
                                            if (r8_5 u< r11_13)
                                                rdx_8 = r8_5 * r10_15
                                                r9_6 = r10_15 + rdx_8
                                                goto label_142beb187
        
        goto label_142bead94

return 8
