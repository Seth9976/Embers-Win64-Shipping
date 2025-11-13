// 函数: sub_141a4a870
// 地址: 0x141a4a870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d3c6e0(arg1)

if (rax == 0)
label_141a4acdf:
    *arg2 = 0
    arg2[1] = 0
else
    void* rax_1 = (*(*rax + 0x280))(rax)
    
    if (rax_1 == 0)
        goto label_141a4acdf
    
    void arg_8
    sub_140d3a3a0(&arg_8, arg3)
    int32_t r14_1 = 0
    int128_t var_48
    
    if (*(rax_1 + 0x68) s<= 0)
    label_141a4aac9:
        int32_t r14_2 = 0
        
        if (*(rax_1 + 0x58) s<= 0)
            goto label_141a4acdf
        
        int64_t r15_2 = 0
        
        while (true)
            int32_t rax_25 = arg1[6]
            var_48 = *(*(rax_1 + 0x50) + r15_2 + 0x44)
            int32_t* r8_9
            
            if (rax_25 == arg1[0x11])
            label_141a4ab89:
                r8_9 = nullptr
            else
                int64_t rbx_4 = var_48.q
                void* r8_7 = &arg1[0x12]
                int64_t rdi_4 = var_48:8.q
                void* rdx_15 = *(r8_7 + 8)
                
                if (rdx_15 != 0)
                    r8_7 = rdx_15
                
                int32_t rax_35 = *(r8_7 + (((sx.q((rbx_4 u>> 0x20).d) ^ sx.q((rdi_4 u>> 0x20).d)
                    ^ sx.q(rdi_4.d) ^ sx.q(rbx_4.d)) & (sx.q(arg1[0x16]) - 1)) << 2))
                
                if (rax_35 == 0xffffffff)
                label_141a4ab89_1:
                    r8_9 = nullptr
                else
                    while (true)
                        r8_9 = sx.q(rax_35) * 0x38 + *(arg1 + 0x10)
                        
                        if (((r8_9[3] ^ var_48:0xc.d) | (r8_9[2] ^ rdi_4.d) | (r8_9[1] ^ var_48:4.d)
                                | (*r8_9 ^ rbx_4.d)) == 0)
                            break
                        
                        rax_35 = r8_9[0xc]
                        
                        if (rax_35 == 0xffffffff)
                            goto label_141a4ab89_2
                    
                    if (rax_35 == 0xffffffff)
                    label_141a4ab89_2:
                        r8_9 = nullptr
            
            void* rcx_41 = &r8_9[4]
            
            if (r8_9 == 0)
                rcx_41 = nullptr
            
            int32_t rax_37
            void* rbx_5
            
            if (rcx_41 == 0 || *rcx_41 == 0)
                sub_141a6b990(arg1, &var_48, arg4)
                void* r8_13
                
                if (arg1[6] == arg1[0x11])
                label_141a4ac78:
                    r8_13 = nullptr
                else
                    void* rdx_22 = *(arg1 + 0x50)
                    void* r8_11 = &arg1[0x12]
                    int64_t r10_5 = sx.q(var_48:0xc.d)
                    int32_t r11_4 = (var_48:8.q).d
                    int32_t rbx_6 = (var_48.q).d
                    int64_t rdi_5 = sx.q(var_48:4.d)
                    
                    if (rdx_22 != 0)
                        r8_11 = rdx_22
                    
                    int32_t rax_43 = *(r8_11 + (((r10_5 ^ sx.q(r11_4) ^ sx.q(rbx_6) ^ rdi_5)
                        & (sx.q(arg1[0x16]) - 1)) << 2))
                    
                    if (rax_43 == 0xffffffff)
                    label_141a4ac78_1:
                        r8_13 = nullptr
                    else
                        while (true)
                            r8_13 = sx.q(rax_43) * 0x38 + *(arg1 + 0x10)
                            
                            if (((*(r8_13 + 0xc) ^ r10_5.d) | (*(r8_13 + 8) ^ r11_4)
                                    | (*(r8_13 + 4) ^ rdi_5.d) | (rbx_6 ^ *r8_13)) == 0)
                                break
                            
                            rax_43 = *(r8_13 + 0x30)
                            
                            if (rax_43 == 0xffffffff)
                                goto label_141a4ac78_2
                        
                        if (rax_43 == 0xffffffff)
                        label_141a4ac78_2:
                            r8_13 = nullptr
                
                rcx_41 = r8_13 + 0x10
                
                if (r8_13 == 0)
                    rcx_41 = nullptr
                
                if (rcx_41 != 0)
                    goto label_141a4aba1
                
                rbx_5 = nullptr
                rax_37 = 0
            else
            label_141a4aba1:
                void* rax_36 = *(rcx_41 + 0x10)
                rbx_5 = rcx_41 + 8
                
                if (rax_36 != 0)
                    rbx_5 = rax_36
                
                rax_37 = *(rcx_41 + 0x18)
            
            void* rdi_6 = rbx_5 + (sx.q(rax_37) << 3)
            
            if (rbx_5 != rdi_6)
                while (sub_140664af0(rbx_5, &arg_8) == 0)
                    rbx_5 += 8
                    
                    if (rbx_5 == rdi_6)
                        goto label_141a4acbd
                
                break
            
        label_141a4acbd:
            r14_2 += 1
            r15_2 += 0x90
            
            if (r14_2 s>= *(rax_1 + 0x58))
                goto label_141a4acdf
        
        *arg2 = var_48
    else
        int64_t r15_1 = 0
        
        while (true)
            int32_t rax_3 = arg1[6]
            var_48 = *(*(rax_1 + 0x60) + r15_1 + 0x10)
            void* r8_2
            
            if (rax_3 == arg1[0x11])
            label_141a4a989:
                r8_2 = nullptr
            else
                int64_t rbx_1 = var_48.q
                void* r8 = &arg1[0x12]
                int64_t rdi_1 = var_48:8.q
                void* rdx_1 = *(r8 + 8)
                
                if (rdx_1 != 0)
                    r8 = rdx_1
                
                int32_t rax_13 = *(r8 + (((sx.q((rbx_1 u>> 0x20).d) ^ sx.q((rdi_1 u>> 0x20).d)
                    ^ sx.q(rbx_1.d) ^ sx.q(rdi_1.d)) & (sx.q(arg1[0x16]) - 1)) << 2))
                
                if (rax_13 == 0xffffffff)
                label_141a4a989_1:
                    r8_2 = nullptr
                else
                    while (true)
                        r8_2 = sx.q(rax_13) * 0x38 + *(arg1 + 0x10)
                        
                        if (((*(r8_2 + 8) ^ rdi_1.d) | (*(r8_2 + 4) ^ var_48:4.d)
                                | (*(r8_2 + 0xc) ^ var_48:0xc.d) | (rbx_1.d ^ *r8_2)) == 0)
                            break
                        
                        rax_13 = *(r8_2 + 0x30)
                        
                        if (rax_13 == 0xffffffff)
                            goto label_141a4a989_2
                    
                    if (rax_13 == 0xffffffff)
                    label_141a4a989_2:
                        r8_2 = nullptr
            
            void* rcx_14 = r8_2 + 0x10
            
            if (r8_2 == 0)
                rcx_14 = nullptr
            
            int32_t rax_15
            void* rbx_2
            
            if (rcx_14 == 0 || *rcx_14 == 0)
                sub_141a6b990(arg1, &var_48, arg4)
                int32_t* r8_6
                
                if (arg1[6] == arg1[0x11])
                label_141a4aa6b:
                    r8_6 = nullptr
                else
                    void* rdx_8 = *(arg1 + 0x50)
                    void* r8_4 = &arg1[0x12]
                    int64_t r10_3 = sx.q(var_48:0xc.d)
                    int32_t r11_2 = (var_48.q).d
                    int32_t rbx_3 = (var_48:8.q).d
                    int64_t rdi_2 = sx.q(var_48:4.d)
                    
                    if (rdx_8 != 0)
                        r8_4 = rdx_8
                    
                    int32_t rax_21 = *(r8_4 + (((r10_3 ^ sx.q(r11_2) ^ sx.q(rbx_3) ^ rdi_2)
                        & (sx.q(arg1[0x16]) - 1)) << 2))
                    
                    if (rax_21 == 0xffffffff)
                    label_141a4aa6b_1:
                        r8_6 = nullptr
                    else
                        while (true)
                            r8_6 = sx.q(rax_21) * 0x38 + *(arg1 + 0x10)
                            
                            if (((r8_6[2] ^ rbx_3) | (r8_6[1] ^ rdi_2.d) | (r8_6[3] ^ r10_3.d)
                                    | (*r8_6 ^ r11_2)) == 0)
                                break
                            
                            rax_21 = r8_6[0xc]
                            
                            if (rax_21 == 0xffffffff)
                                goto label_141a4aa6b_2
                        
                        if (rax_21 == 0xffffffff)
                        label_141a4aa6b_2:
                            r8_6 = nullptr
                
                rcx_14 = &r8_6[4]
                
                if (r8_6 == 0)
                    rcx_14 = nullptr
                
                if (rcx_14 != 0)
                    goto label_141a4a9a1
                
                rbx_2 = nullptr
                rax_15 = 0
            else
            label_141a4a9a1:
                void* rax_14 = *(rcx_14 + 0x10)
                rbx_2 = rcx_14 + 8
                
                if (rax_14 != 0)
                    rbx_2 = rax_14
                
                rax_15 = *(rcx_14 + 0x18)
            
            void* rdi_3 = rbx_2 + (sx.q(rax_15) << 3)
            
            if (rbx_2 != rdi_3)
                while (sub_140664af0(rbx_2, &arg_8) == 0)
                    rbx_2 += 8
                    
                    if (rbx_2 == rdi_3)
                        goto label_141a4aab0
                
                break
            
        label_141a4aab0:
            r14_1 += 1
            r15_1 += 0x48
            
            if (r14_1 s>= *(rax_1 + 0x68))
                goto label_141a4aac9
        
        *arg2 = var_48

return arg2
