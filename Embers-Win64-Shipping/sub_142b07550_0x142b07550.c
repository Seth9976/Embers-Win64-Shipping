// 函数: sub_142b07550
// 地址: 0x142b07550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 8)
char* r15 = *(arg1 + 0x10)
int16_t* rbx = *(arg1 + 0x20)
int64_t rbp = *(arg1 + 0x18)
int64_t r12 = *(arg1 + 0x28)

if (rsi == 0)
    *arg2 = 1
    return 

int16_t* r10 = *(rsi + 0x10)

if (*arg2 s<= 0)
    int32_t arg_18 = 0xef
    int32_t arg_20 = 0xf0
    
    while (true)
        uint64_t rax
        
        if (r15 u< rbp)
            if (rbx u>= r12)
                *arg2 = 0xf
                break
            
            uint32_t rdi_1 = zx.d(*r15)
            r15 = &r15[1]
            int16_t rax_1 = *r10
            
            if (rax_1 != 0xef)
                if (rax_1 != 0xf0)
                    if (rax_1 == 0xd9)
                        int32_t r9_2 = 0x200d
                        
                        if (rdi_1.b == 0xe8)
                            r9_2 = 0x20
                        
                        if (*(r10 + 0x2c) != 0)
                            int16_t rax_18 = r10[0x16]
                            
                            if (rbx u>= *(arg1 + 0x28))
                                void* rdx_2 = *(arg1 + 8)
                                *(rdx_2 + (sx.q(*(rdx_2 + 0x5d)) << 1) + 0x90) = rax_18
                                void* rax_22 = *(arg1 + 8)
                                *(rax_22 + 0x5d) += 1
                                *arg2 = 0xf
                            else
                                *rbx = rax_18
                                rbx = &rbx[1]
                                int32_t* rcx_6 = *(arg1 + 0x30)
                                
                                if (rcx_6 != 0)
                                    *rcx_6 = r15.d - *(arg1 + 0x10) - 1
                                    *(arg1 + 0x30) += 4
                            
                            *(r10 + 0x2c) = 0
                        
                        if (r9_2 - 0x966 u<= 0x16a5 || r9_2 - 0xa1 u<= 0x8c2 || r9_2 u>= 0x200e)
                            r9_2 += zx.d(r10[4])
                        
                        if (rbx u>= *(arg1 + 0x28))
                            void* rcx_9 = *(arg1 + 8)
                            *(rcx_9 + (sx.q(*(rcx_9 + 0x5d)) << 1) + 0x90) = r9_2.w
                            void* rax_30 = *(arg1 + 8)
                            *(rax_30 + 0x5d) += 1
                            *arg2 = 0xf
                        else
                            *rbx = r9_2.w
                            rbx = &rbx[1]
                            int32_t* rcx_8 = *(arg1 + 0x30)
                            
                            if (rcx_8 != 0)
                                *rcx_8 = r15.d - *(arg1 + 0x10) - 2
                                *(arg1 + 0x30) += 4
                        
                        *r10 = 0xfffe
                    
                    if (zx.d(rdi_1.b) - 0xa u> 0xe6)
                        goto label_142b07a00
                    
                    uint16_t rax_46
                    uint32_t r11_1
                    
                    switch (rdi_1.b)
                        case 0xa, 0xd
                            *(r10 + 0x19) = 1
                        label_142b07a00:
                            r11_1 = zx.d(*((zx.q(rdi_1.b) << 1) + 0x1436688a0))
                            
                            if (rdi_1.b u> 0xa0
                                    && (r10[8].b & *((zx.q(r11_1) & 0x7f) + 0x143668720)) == 0
                                    && (r10[4] != 0x300 || r11_1 != 0x931))
                                r11_1 = 0xffff
                            
                            rax_46 = zx.w(rdi_1.b)
                            goto label_142b07a43
                        case 0xb, 0xc, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 
                                0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 
                                0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 
                                0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 
                                0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 0x43, 
                                0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 
                                0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 
                                0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 
                                0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 
                                0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 
                                0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 
                                0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 
                                0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 
                                0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 
                                0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 
                                0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 
                                0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 
                                0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 
                                0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 
                                0xdf, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, 0xeb, 0xec, 0xed, 
                                0xee
                            goto label_142b07a00
                        case 0xd9, 0xef, 0xf0
                            *r10 = zx.w(rdi_1.b)
                            
                            if (*(rsi + 0x48) != 0xffff)
                                if (*(r10 + 0x2c) != 0)
                                    int16_t rax_35 = r10[0x16]
                                    
                                    if (rbx u>= *(arg1 + 0x28))
                                        void* rdx_3 = *(arg1 + 8)
                                        *(rdx_3 + (sx.q(*(rdx_3 + 0x5d)) << 1) + 0x90) = rax_35
                                        void* rax_39 = *(arg1 + 8)
                                        *(rax_39 + 0x5d) += 1
                                        *arg2 = 0xf
                                    else
                                        *rbx = rax_35
                                        rbx = &rbx[1]
                                        int32_t* rcx_12 = *(arg1 + 0x30)
                                        
                                        if (rcx_12 != 0)
                                            *rcx_12 = r15.d - *(arg1 + 0x10) - 1
                                            *(arg1 + 0x30) += 4
                                    
                                    *(r10 + 0x2c) = 0
                                
                                int32_t rcx_14 = *(rsi + 0x48)
                                
                                if (rcx_14 - 0x966 u<= 0x16a5 || rcx_14 - 0xa1 u<= 0x8c2
                                        || rcx_14 s>= 0x200e)
                                    *(rsi + 0x48) = zx.d(r10[4]) + rcx_14
                                
                                rax = zx.q(*(rsi + 0x48))
                                
                                if (rbx u>= *(arg1 + 0x28))
                                    void* rdx_4 = *(arg1 + 8)
                                    *(rdx_4 + (sx.q(*(rdx_4 + 0x5d)) << 1) + 0x90) = rax.w
                                    rax = *(arg1 + 8)
                                    *(rax + 0x5d) += 1
                                    *arg2 = 0xf
                                    *(rsi + 0x48) = 0xffff
                                else
                                    *rbx = rax.w
                                    rbx = &rbx[1]
                                    int32_t* rcx_15 = *(arg1 + 0x30)
                                    
                                    if (rcx_15 == 0)
                                        *(rsi + 0x48) = 0xffff
                                    else
                                        *rcx_15 = r15.d - *(arg1 + 0x10) - 2
                                        *(arg1 + 0x30) += 4
                                        *(rsi + 0x48) = 0xffff
                            
                            goto label_142b080b1
                        case 0xe0
                            int32_t rcx_18 = 1
                            int64_t rax_56 = 1
                            
                            while (*((rax_56 << 2) + 0x143668aa0) != zx.w(*r10))
                                rcx_18 += 1
                                rax_56 += 1
                                
                                if (rcx_18 s>= 2)
                                    goto label_142b07a00
                            
                            r11_1 = zx.d(*((rax_56 << 2) + 0x143668aa2))
                            
                            if ((r10[8].b & *(zx.q(r11_1.b) + 0x143668720)) == 0)
                                goto label_142b07a00
                            
                            *r10 = 0xfffe
                        label_142b08076:
                            *(rsi + 0x48) = 0xffff
                        case 0xe8
                            if (*r10 != 0xe8)
                                goto label_142b07a00
                            
                            rax_46 = -2
                            r11_1 = 0x200c
                        label_142b07a43:
                            *r10 = rax_46
                            int32_t rdx_5 = *(rsi + 0x48)
                            
                            if (rdx_5 == 0xffff)
                                goto label_142b0807d
                            
                            int32_t rcx_17
                            
                            if (r10[4] == 0x100)
                                rcx_17 = *(r10 + 0x2c)
                            
                            if (r10[4] == 0x100 && rcx_17 != 0 && rcx_17 - 0xa00 u<= 0x4f
                                    && (*(sx.q(rcx_17 - 0xa00) + 0x1436686d0) & 1) != 0
                                    && rdx_5 == 0x94d && r11_1 + 0x100 == rcx_17)
                                int32_t rdx_8 = r15.d - *(arg1 + 0x10) - 3
                                
                                if (rbx u>= *(arg1 + 0x28))
                                    void* rcx_33 = *(arg1 + 8)
                                    *(rcx_33 + (sx.q(*(rcx_33 + 0x5d)) << 1) + 0x90) = 0xa71
                                    void* rax_91 = *(arg1 + 8)
                                    *(rax_91 + 0x5d) += 1
                                    *arg2 = 0xf
                                else
                                    *rbx = 0xa71
                                    rbx = &rbx[1]
                                    int32_t* rax_55 = *(arg1 + 0x30)
                                    
                                    if (rax_55 != 0)
                                        *rax_55 = rdx_8
                                        *(arg1 + 0x30) += 4
                                
                                int16_t rax_92 = r10[0x16]
                                
                                if (rbx u>= *(arg1 + 0x28))
                                    void* rdx_13 = *(arg1 + 8)
                                    *(rdx_13 + (sx.q(*(rdx_13 + 0x5d)) << 1) + 0x90) = rax_92
                                    rax = *(arg1 + 8)
                                    *(rax + 0x5d) += 1
                                    *arg2 = 0xf
                                    *(r10 + 0x2c) = 0
                                    *(rsi + 0x48) = 0xffff
                                else
                                    *rbx = rax_92
                                    rbx = &rbx[1]
                                    rax = *(arg1 + 0x30)
                                    
                                    if (rax == 0)
                                        *(r10 + 0x2c) = 0
                                        *(rsi + 0x48) = 0xffff
                                    else
                                        *rax = rdx_8
                                        *(arg1 + 0x30) += 4
                                        *(r10 + 0x2c) = 0
                                        *(rsi + 0x48) = 0xffff
                                
                                goto label_142b080b1
                            
                            if (*(r10 + 0x2c) != 0)
                                int16_t rax_93 = r10[0x16]
                                
                                if (rbx u>= *(arg1 + 0x28))
                                    void* rdx_14 = *(arg1 + 8)
                                    *(rdx_14 + (sx.q(*(rdx_14 + 0x5d)) << 1) + 0x90) = rax_93
                                    void* rax_97 = *(arg1 + 8)
                                    *(rax_97 + 0x5d) += 1
                                    *arg2 = 0xf
                                else
                                    *rbx = rax_93
                                    rbx = &rbx[1]
                                    int32_t* rcx_35 = *(arg1 + 0x30)
                                    
                                    if (rcx_35 != 0)
                                        *rcx_35 = r15.d - *(arg1 + 0x10) - 1
                                        *(arg1 + 0x30) += 4
                                
                                *(r10 + 0x2c) = 0
                            
                            int16_t r9_3 = r10[4]
                            
                            if (r9_3 != 0x100)
                            label_142b07ffc:
                                int32_t rcx_40 = *(rsi + 0x48)
                                
                                if (rcx_40 - 0x966 u<= 0x16a5 || rcx_40 - 0xa1 u<= 0x8c2
                                        || rcx_40 s>= 0x200e)
                                    *(rsi + 0x48) = zx.d(r9_3) + rcx_40
                                
                            label_142b0802a:
                                int16_t rax_112 = *(rsi + 0x48)
                                
                                if (rbx u>= *(arg1 + 0x28))
                                    void* rdx_16 = *(arg1 + 8)
                                    *(rdx_16 + (sx.q(*(rdx_16 + 0x5d)) << 1) + 0x90) = rax_112
                                    void* rax_116 = *(arg1 + 8)
                                    *(rax_116 + 0x5d) += 1
                                    *arg2 = 0xf
                                else
                                    *rbx = rax_112
                                    rbx = &rbx[1]
                                    int32_t* rcx_41 = *(arg1 + 0x30)
                                    
                                    if (rcx_41 != 0)
                                        *rcx_41 = r15.d - *(arg1 + 0x10) - 2
                                        *(arg1 + 0x30) += 4
                            else
                                int32_t rcx_37
                                
                                if (r11_1 == 0x902)
                                    rcx_37 = *(rsi + 0x48)
                                
                                if (r11_1 == 0x902 && rcx_37 - 0x900 u<= 0x4f
                                        && *(sx.q(rcx_37 - 0x900) + 0x1436686d0) u>> 1 != 0)
                                    r11_1 = 0x970
                                    
                                    if (rcx_37 - 0x966 u<= 0x16a5 || rcx_37 - 0xa1 u<= 0x8c2
                                            || rcx_37 s>= 0x200e)
                                        *(rsi + 0x48) = rcx_37 + 0x100
                                    
                                    goto label_142b0802a
                                
                                if (r9_3 != 0x100 || r11_1 != 0x94d)
                                    goto label_142b07ffc
                                
                                int32_t rcx_39 = *(rsi + 0x48) + 0x100
                                
                                if (rcx_39 - 0xa00 u> 0x4f
                                        || (*(sx.q(rcx_39 - 0xa00) + 0x1436686d0) & 1) == 0)
                                    goto label_142b07ffc
                                
                                *(r10 + 0x2c) = rcx_39
                            
                            goto label_142b08076
                        case 0xe9
                            if (*r10 == 0xe8)
                                rax_46 = -2
                                r11_1 = 0x200d
                                goto label_142b07a43
                            
                            if (r10[4] == 0x100 && *r10 == 0xc0)
                                if (*(r10 + 0x2c) != 0)
                                    int16_t rax_59 = r10[0x16]
                                    
                                    if (rbx u>= *(arg1 + 0x28))
                                        void* rdx_10 = *(arg1 + 8)
                                        *(rdx_10 + (sx.q(*(rdx_10 + 0x5d)) << 1) + 0x90) = rax_59
                                        void* rax_63 = *(arg1 + 8)
                                        *(rax_63 + 0x5d) += 1
                                        *arg2 = 0xf
                                    else
                                        *rbx = rax_59
                                        rbx = &rbx[1]
                                        int32_t* rcx_19 = *(arg1 + 0x30)
                                        
                                        if (rcx_19 != 0)
                                            *rcx_19 = r15.d - *(arg1 + 0x10) - 1
                                            *(arg1 + 0x30) += 4
                                    
                                    *(r10 + 0x2c) = 0
                                
                                if (rbx u>= *(arg1 + 0x28))
                                    void* rcx_26 = *(arg1 + 8)
                                    *(rcx_26 + (sx.q(*(rcx_26 + 0x5d)) << 1) + 0x90) = 0xa5c
                                    void* rax_76 = *(arg1 + 8)
                                    *(rax_76 + 0x5d) += 1
                                    *arg2 = 0xf
                                label_142b07cf9:
                                    void* rcx_27 = *(arg1 + 8)
                                    *(rcx_27 + (sx.q(*(rcx_27 + 0x5d)) << 1) + 0x90) = 0xa4d
                                    void* rax_78 = *(arg1 + 8)
                                    *(rax_78 + 0x5d) += 1
                                label_142b07d16:
                                    void* rcx_28 = *(arg1 + 8)
                                    *(rcx_28 + (sx.q(*(rcx_28 + 0x5d)) << 1) + 0x90) = 0xa39
                                    rax = *(arg1 + 8)
                                    *(rax + 0x5d) += 1
                                    *(rsi + 0x48) = 0xffff
                                    *r10 = 0xfffe
                                else
                                    *rbx = 0xa5c
                                    rbx = &rbx[1]
                                    int32_t* rcx_21 = *(arg1 + 0x30)
                                    
                                    if (rcx_21 != 0)
                                        *rcx_21 = r15.d - *(arg1 + 0x10) - 2
                                        *(arg1 + 0x30) += 4
                                    
                                    if (*arg2 s> 0)
                                        goto label_142b07cf9
                                    
                                    if (rbx u>= *(arg1 + 0x28))
                                        void* rcx_25 = *(arg1 + 8)
                                        *(rcx_25 + (sx.q(*(rcx_25 + 0x5d)) << 1) + 0x90) = 0xa4d
                                        void* rax_74 = *(arg1 + 8)
                                        *(rax_74 + 0x5d) += 1
                                        *arg2 = 0xf
                                        goto label_142b07d16
                                    
                                    *rbx = 0xa4d
                                    rbx = &rbx[1]
                                    int32_t* rcx_22 = *(arg1 + 0x30)
                                    
                                    if (rcx_22 != 0)
                                        *rcx_22 = r15.d - *(arg1 + 0x10) - 2
                                        *(arg1 + 0x30) += 4
                                    
                                    if (*arg2 s> 0)
                                        goto label_142b07d16
                                    
                                    if (rbx u>= *(arg1 + 0x28))
                                        void* rcx_24 = *(arg1 + 8)
                                        *(rcx_24 + (sx.q(*(rcx_24 + 0x5d)) << 1) + 0x90) = 0xa39
                                        rax = *(arg1 + 8)
                                        *(rax + 0x5d) += 1
                                        *arg2 = 0xf
                                        *(rsi + 0x48) = 0xffff
                                        *r10 = 0xfffe
                                    else
                                        *rbx = 0xa39
                                        rbx = &rbx[1]
                                        int32_t* rcx_23 = *(arg1 + 0x30)
                                        
                                        if (rcx_23 == 0)
                                            *(rsi + 0x48) = 0xffff
                                            *r10 = 0xfffe
                                        else
                                            *rcx_23 = r15.d - *(arg1 + 0x10) - 2
                                            *(arg1 + 0x30) += 4
                                            *(rsi + 0x48) = 0xffff
                                            *r10 = 0xfffe
                                
                                goto label_142b080b1
                            
                            int32_t rcx_29 = 1
                            int64_t rax_80 = 1
                            
                            while (*((rax_80 << 2) + 0x143668ab0) != zx.w(*r10))
                                rcx_29 += 1
                                rax_80 += 1
                                
                                if (rcx_29 s>= 0x10)
                                    goto label_142b07a00
                            
                            r11_1 = zx.d(*((rax_80 << 2) + 0x143668ab2))
                            
                            if ((r10[8].b & *(zx.q(r11_1.b) + 0x143668720)) == 0)
                                goto label_142b07a00
                            
                            *r10 = 0xfffe
                            *(rsi + 0x48) = 0xffff
                            
                            if (r10[4] == 0x100)
                                if (*(r10 + 0x2c) != 0)
                                    int16_t rax_83 = r10[0x16]
                                    
                                    if (rbx u>= *(arg1 + 0x28))
                                        void* rdx_12 = *(arg1 + 8)
                                        *(rdx_12 + (sx.q(*(rdx_12 + 0x5d)) << 1) + 0x90) = rax_83
                                        void* rax_87 = *(arg1 + 8)
                                        *(rax_87 + 0x5d) += 1
                                        *arg2 = 0xf
                                    else
                                        *rbx = rax_83
                                        rbx = &rbx[1]
                                        int32_t* rcx_30 = *(arg1 + 0x30)
                                        
                                        if (rcx_30 != 0)
                                            *rcx_30 = r15.d - *(arg1 + 0x10) - 1
                                            *(arg1 + 0x30) += 4
                                    
                                    *(r10 + 0x2c) = 0
                                
                                if (r11_1 - 0x966 u<= 0x16a5 || r11_1 - 0xa1 u<= 0x8c2
                                        || r11_1 u>= 0x200e)
                                    r11_1 += zx.d(r10[4])
                                
                                if (rbx u< *(arg1 + 0x28))
                                    *rbx = r11_1.w
                                    goto label_142b07747
                                
                                void* rcx_32 = *(arg1 + 8)
                                *(rcx_32 + (sx.q(*(rcx_32 + 0x5d)) << 1) + 0x90) = r11_1.w
                                rax = *(arg1 + 8)
                                *(rax + 0x5d) += 1
                                *arg2 = 0xf
                                goto label_142b080b1
                        case 0xea
                            if (*r10 != 0xea)
                                goto label_142b07a00
                            
                            r11_1 = 0x965
                            *r10 = 0xfffe
                            *(rsi + 0x48) = 0xffff
                        label_142b0808a:
                            *(rsi + 0x48) = zx.d(r11_1.w)
                            
                            if (*(r10 + 0x19) == 1)
                                r10[4] = r10[2]
                                *(r10 + 0x10) = *(r10 + 0x14)
                                *(r10 + 0x19) = 0
                            
                            goto label_142b080b1
                    
                label_142b0807d:
                    
                    if (r11_1 != 0xffff)
                        goto label_142b0808a
                    
                    *arg2 = 0xa
                else if (0xee - rdi_1.b u> 0x4d)
                    *r10 = 0xfffe
                    *arg2 = 0xc
                else if (rdi_1.b == 0xbf || rdi_1.b == 0xb8)
                    int32_t r9_1 = 0x952
                    
                    if (rdi_1.b == 0xbf)
                        r9_1 = 0x970
                    
                    if ((r10[8].b & *(zx.q(r9_1.b) + 0x143668720)) != 0)
                        *r10 = 0xfffe
                        
                        if (*(r10 + 0x2c) != 0)
                            int16_t rax_9 = r10[0x16]
                            
                            if (rbx u>= *(arg1 + 0x28))
                                void* rdx_1 = *(arg1 + 8)
                                *(rdx_1 + (sx.q(*(rdx_1 + 0x5d)) << 1) + 0x90) = rax_9
                                void* rax_13 = *(arg1 + 8)
                                *(rax_13 + 0x5d) += 1
                                *arg2 = 0xf
                            else
                                *rbx = rax_9
                                rbx = &rbx[1]
                                int32_t* rcx_2 = *(arg1 + 0x30)
                                
                                if (rcx_2 != 0)
                                    *rcx_2 = r15.d - *(arg1 + 0x10) - 1
                                    *(arg1 + 0x30) += 4
                            
                            *(r10 + 0x2c) = 0
                        
                        if (r9_1 - 0x966 u<= 0x16a5 || r9_1 - 0xa1 u<= 0x8c2 || r9_1 u>= 0x200e)
                            r9_1 += zx.d(r10[4])
                        
                        if (rbx u>= *(arg1 + 0x28))
                            void* rcx_5 = *(arg1 + 8)
                            *(rcx_5 + (sx.q(*(rcx_5 + 0x5d)) << 1) + 0x90) = r9_1.w
                            rax = *(arg1 + 8)
                            *(rax + 0x5d) += 1
                            *arg2 = 0xf
                            goto label_142b080b1
                        
                        *rbx = r9_1.w
                    label_142b07747:
                        int32_t* rcx_4 = *(arg1 + 0x30)
                        rbx = &rbx[1]
                        
                        if (rcx_4 != 0)
                            *rcx_4 = r15.d - *(arg1 + 0x10) - 2
                            *(arg1 + 0x30) += 4
                        
                        goto label_142b080b1
                    
                    *arg2 = 0xa
                else
                    *arg2 = 0xa
            else if (0x4b - rdi_1.b u> 9)
                if (rdi_1.b == 0x40)
                    r10[4] = r10[2]
                    *(r10 + 0x10) = *(r10 + 0x14)
                    *r10 = 0xfffe
                    goto label_142b080b1
                
                if ((rdi_1 - 0x21).b u<= 0x1e)
                    *r10 = 0xfffe
                    goto label_142b080b1
                
                *arg2 = 0xc
                *r10 = 0xfffe
            else
                uint64_t rdx = (zx.q(rdi_1.b) & 0xf) << 2
                int16_t rcx_1 = *(rdx + 0x143668c18) * 0x80
                *(r10 + 0x10) = zx.d(*(rdx + 0x143668c1a))
                r10[4] = rcx_1
                *r10 = 0xfffe
            label_142b080b1:
                
                if (*arg2 s> 0)
                    break
                
                continue
            
            *(*(arg1 + 8) + 0x41) = rdi_1.b
            *(*(arg1 + 8) + 0x40) = 1
        
        if (*arg2 s> 0)
            break
        
        if (*(arg1 + 2) != 0 && r15 == rbp)
            int16_t rdx_17 = *r10
            void* rcx_43 = *(arg1 + 8)
            
            if (rdx_17 - 0xef u<= 1 || rdx_17 == 0xd9)
                *(rcx_43 + 0x41) = *r10
                *(rcx_43 + 0x40) = 1
                *r10 = 0xfffe
            else
                *(rcx_43 + 0x40) = 0
            
            int32_t rcx_44 = *(rsi + 0x48)
            
            if (rcx_44 != 0xffff)
                if (rcx_44 - 0x966 u<= 0x16a5 || rcx_44 - 0xa1 u<= 0x8c2 || rcx_44 s>= 0x200e)
                    *(rsi + 0x48) = zx.d(r10[4]) + rcx_44
                
                rax = zx.q(*(rsi + 0x48))
                
                if (rbx u>= *(arg1 + 0x28))
                    void* rdx_18 = *(arg1 + 8)
                    *(rdx_18 + (sx.q(*(rdx_18 + 0x5d)) << 1) + 0x90) = rax.w
                    rax = *(arg1 + 8)
                    *(rax + 0x5d) += 1
                    *arg2 = 0xf
                else
                    *rbx = rax.w
                    rbx = &rbx[1]
                    int32_t* rcx_45 = *(arg1 + 0x30)
                    
                    if (rcx_45 != 0)
                        *rcx_45 = r15.d - *(arg1 + 0x10) - 1
                        *(arg1 + 0x30) += 4
                
                *(rsi + 0x48) = 0xffff
        
        break

*(arg1 + 0x20) = rbx
*(arg1 + 0x10) = r15
