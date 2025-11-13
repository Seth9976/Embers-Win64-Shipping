// 函数: sub_141479db0
// 地址: 0x141479db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2
int32_t rax_3

while (true)
    void* rdx = *(arg1 + 0x78)
    int64_t r9 = sx.q(rdi) * 0x14
    void* rcx_1 = &arg1[4]
    int64_t arg_8 = r9
    
    if (rdx != 0)
        rcx_1 = rdx
    
    void* rcx_2 = rcx_1 + r9
    int128_t zmm0 = *rcx_2
    int32_t rdx_1 = *rcx_2
    
    if (rdx_1 == 0xffffffff)
        if ((*(rcx_2 + 0x10)).b == 0)
            uint32_t r11_1 = zx.d(*(rcx_2 + 0xc))
            
            if (r11_1 u>= arg3)
                uint32_t r10_1 = zx.d(*(rcx_2 + 0xe))
                
                if (r10_1 u>= arg4)
                    int32_t r8_2 = zx.d(*(rcx_2 + 8)) + arg3
                    
                    if (arg5 != 0)
                        int32_t r9_3 = zx.d(*(rcx_2 + 0xa)) + arg4
                        char temp0_1 = arg1[3].b
                        
                        if (temp0_1 != 0)
                            uint64_t rflags_1
                            char temp0_2
                            temp0_2, rflags_1 = _bit_scan_reverse(r8_2)
                            int32_t rcx_4
                            
                            if (temp0_1 == 0)
                                rcx_4 = 0x20
                            else
                                rcx_4 = 0x1f - temp0_2
                            
                            int32_t rcx_6 = rcx_4 << 0x1a s>> 0x1f
                            uint64_t rflags_2
                            char temp0_3
                            temp0_3, rflags_2 = _bit_scan_reverse(r8_2 - 1)
                            char rdx_2
                            
                            if (rcx_6 == 0)
                                rdx_2 = 0x20
                            else
                                rdx_2 = 0x1f - temp0_3
                            
                            r8_2 = 1 << ((not.d(rcx_6)).b & (0x20 - rdx_2))
                            uint64_t rflags_3
                            char temp0_4
                            temp0_4, rflags_3 = _bit_scan_reverse(r9_3)
                            int32_t rcx_9
                            
                            if (r8_2 == 0)
                                rcx_9 = 0x20
                            else
                                rcx_9 = 0x1f - temp0_4
                            
                            int32_t rcx_11 = rcx_9 << 0x1a s>> 0x1f
                            uint64_t rflags_4
                            char temp0_5
                            temp0_5, rflags_4 = _bit_scan_reverse(r9_3 - 1)
                            char rdx_3
                            
                            if (rcx_11 == 0)
                                rdx_3 = 0x20
                            else
                                rdx_3 = 0x1f - temp0_5
                            
                            r9_3 = 1 << ((not.d(rcx_11)).b & (0x20 - rdx_3))
                            int32_t rcx_14 = arg1[2]
                            
                            if (rcx_14 == 1)
                                int32_t rax_12 = r9_3 * 2
                                
                                if (r8_2 s>= rax_12)
                                    rax_12 = r8_2
                                
                                r8_2 = rax_12
                                int32_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q(rax_12)
                                int32_t rax_15 = (temp3_1 - temp2_1) s>> 1
                                
                                if (r9_3 s>= rax_15)
                                    rax_15 = r9_3
                                
                                r9_3 = rax_15
                            else if (rcx_14 == 2)
                                if (r8_2 s>= r9_3)
                                    r9_3 = r8_2
                                
                                r8_2 = r9_3
                        
                        if (r8_2 s<= 0x2000 && r9_3 s<= 0x2000)
                            r9 = arg_8
                        label_141479f9b:
                            
                            if (r11_1 == arg3 && r10_1 == arg4)
                                return rdi
                            
                            void* rax_16 = *(arg1 + 0x78)
                            void* rcx_16 = &arg1[4]
                            void* r8_5
                            
                            if (r11_1 - arg3 u<= r10_1 - arg4)
                                if (rax_16 != 0)
                                    rcx_16 = rax_16
                                
                                *(rcx_16 + r9) = arg1[0x20]
                                int64_t rdi_3 = sx.q(arg1[0x20])
                                int32_t rax_26 = (rdi_3 + 1).d
                                arg1[0x20] = rax_26
                                
                                if (rax_26 s> arg1[0x21])
                                    sub_1413f6cc0(&arg1[4], rdi_3.d)
                                    r9 = arg_8
                                
                                void* r8_6 = *(arg1 + 0x78)
                                void* rdx_10 = &arg1[4]
                                int16_t r14_3 = zmm0:0xc.w
                                int16_t r15_2 = zmm0:0xa.w
                                int16_t r12_2 = zmm0:8.w
                                
                                if (r8_6 != 0)
                                    rdx_10 = r8_6
                                
                                void* rax_27 = rdx_10 + rdi_3 * 0x14
                                
                                if (rax_27 != 0)
                                    *rax_27 = -1
                                    *(rax_27 + 8) = r12_2
                                    *(rax_27 + 0xa) = r15_2
                                    *(rax_27 + 0xc) = r14_3
                                    *(rax_27 + 0xe) = arg4.w
                                    *(rax_27 + 0x10) = 0
                                    r8_6 = *(arg1 + 0x78)
                                
                                void* rcx_24 = &arg1[4]
                                
                                if (r8_6 != 0)
                                    rcx_24 = r8_6
                                
                                *(rcx_24 + r9 + 4) = arg1[0x20]
                                int64_t rdi_4 = sx.q(arg1[0x20])
                                int32_t rax_29 = (rdi_4 + 1).d
                                arg1[0x20] = rax_29
                                
                                if (rax_29 s> arg1[0x21])
                                    sub_1413f6cc0(&arg1[4], rdi_4.d)
                                    r9 = arg_8
                                
                                void* rax_30 = *(arg1 + 0x78)
                                void* rdx_12 = &arg1[4]
                                
                                if (rax_30 != 0)
                                    rdx_12 = rax_30
                                
                                r8_5 = rdx_12 + rdi_4 * 0x14
                                
                                if (r8_5 != 0)
                                    *(r8_5 + 8) = r12_2
                                    *(r8_5 + 0xa) = r15_2 + arg4.w
                                    *(r8_5 + 0xc) = r14_3
                                    *(r8_5 + 0xe) = zmm0:0xe.w - arg4.w
                                    *(r8_5 + 0x10) = 0
                                    *r8_5 = -1
                            else
                                if (rax_16 != 0)
                                    rcx_16 = rax_16
                                
                                *(rcx_16 + r9) = arg1[0x20]
                                int64_t rdi_1 = sx.q(arg1[0x20])
                                int32_t rax_18 = (rdi_1 + 1).d
                                arg1[0x20] = rax_18
                                
                                if (rax_18 s> arg1[0x21])
                                    sub_1413f6cc0(&arg1[4], rdi_1.d)
                                    r9 = arg_8
                                
                                void* r8_4 = *(arg1 + 0x78)
                                void* rdx_6 = &arg1[4]
                                int16_t r14_2 = zmm0:0xe.w
                                int16_t r15_1 = zmm0:0xa.w
                                int16_t r12_1 = zmm0:8.w
                                
                                if (r8_4 != 0)
                                    rdx_6 = r8_4
                                
                                void* rax_19 = rdx_6 + rdi_1 * 0x14
                                
                                if (rax_19 != 0)
                                    *rax_19 = -1
                                    *(rax_19 + 8) = r12_1
                                    *(rax_19 + 0xa) = r15_1
                                    *(rax_19 + 0xc) = arg3.w
                                    *(rax_19 + 0xe) = r14_2
                                    *(rax_19 + 0x10) = 0
                                    r8_4 = *(arg1 + 0x78)
                                
                                void* rcx_19 = &arg1[4]
                                
                                if (r8_4 != 0)
                                    rcx_19 = r8_4
                                
                                *(rcx_19 + r9 + 4) = arg1[0x20]
                                int64_t rdi_2 = sx.q(arg1[0x20])
                                int32_t rax_21 = (rdi_2 + 1).d
                                arg1[0x20] = rax_21
                                
                                if (rax_21 s> arg1[0x21])
                                    sub_1413f6cc0(&arg1[4], rdi_2.d)
                                    r9 = arg_8
                                
                                void* rax_22 = *(arg1 + 0x78)
                                void* rdx_8 = &arg1[4]
                                
                                if (rax_22 != 0)
                                    rdx_8 = rax_22
                                
                                r8_5 = rdx_8 + rdi_2 * 0x14
                                
                                if (r8_5 != 0)
                                    *(r8_5 + 0xa) = r15_1
                                    *(r8_5 + 8) = r12_1 + arg3.w
                                    *(r8_5 + 0xe) = r14_2
                                    *(r8_5 + 0xc) = zmm0:0xc.w - arg3.w
                                    *(r8_5 + 0x10) = 0
                                    *r8_5 = -1
                            void* rax_33 = *(arg1 + 0x78)
                            void* rcx_27 = &arg1[4]
                            
                            if (rax_33 != 0)
                                rcx_27 = rax_33
                            
                            rdi = *(rcx_27 + r9)
                            continue
                    else if (r8_2 u<= *arg1 && zx.d(*(rcx_2 + 0xa)) + arg4 u<= arg1[1])
                        goto label_141479f9b
        
        return -1
    
    rax_3 = sub_141479db0(arg1, rdx_1, zx.q(arg3), zx.q(arg4), arg5)
    
    if (rax_3 != 0xffffffff)
        break
    
    rdi = zmm0:4.d

return rax_3
