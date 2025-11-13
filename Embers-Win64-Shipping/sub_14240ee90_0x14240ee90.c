// 函数: sub_14240ee90
// 地址: 0x14240ee90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1

if (arg2 != 0)
    int64_t* rax_1 = sub_1424c7800()
    void* r13_1 = rax_1[0x23]
    
    if (r13_1 != 0)
    label_14240ef15:
        
        if (rbp + 0x130 != r13_1 + 0x28)
            int64_t rdi_1 = sx.q(*(r13_1 + 0x30))
            int64_t rsi_1 = *(r13_1 + 0x28)
            int32_t r8_1 = *(rbp + 0x13c)
            *(rbp + 0x138) = rdi_1.d
            
            if (rdi_1.d != 0 || r8_1 != 0)
                sub_140808f70(rbp + 0x130, rdi_1.d, r8_1)
                memcpy(*(rbp + 0x130), rsi_1, (rdi_1 * 0x18).d)
            else
                *(rbp + 0x13c) = 0
        
        if (rbp + 0x150 != r13_1 + 0x90)
            int32_t i_6 = *(rbp + 0x158)
            
            if (i_6 != 0)
                int64_t* rdi_3 = *(rbp + 0x150) + 0x20
                int32_t i
                
                do
                    int64_t* rbx_3 = *rdi_3
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp4_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                    
                    rdi_3 = &rdi_3[5]
                    i = i_6
                    i_6 -= 1
                while (i != 1)
            
            int32_t i_4 = *(r13_1 + 0x98)
            void* rdi_4 = *(r13_1 + 0x90)
            int32_t r8_4 = *(rbp + 0x15c)
            *(rbp + 0x158) = i_4
            
            if (i_4 != 0 || r8_4 != 0)
                sub_1407751d0(rbp + 0x150, i_4, r8_4)
                int64_t* r8_5 = *(rbp + 0x150)
                
                if (i_4 != 0)
                    void* rdx_4 = &r8_5[3]
                    void* rcx_6 = rdi_4 + 0x18
                    int32_t i_1
                    
                    do
                        *r8_5 = *(rcx_6 - 0x18)
                        *(rdx_4 - 0x10) = *(rcx_6 - 0x10)
                        *(rdx_4 - 8) = *(rcx_6 - 8)
                        *rdx_4 = *rcx_6
                        void* rax_9 = *(rcx_6 + 8)
                        *(rdx_4 + 8) = rax_9
                        
                        if (rax_9 != 0)
                            *(rax_9 + 8) += 1
                        
                        r8_5 = &r8_5[5]
                        rdx_4 += 0x28
                        rcx_6 += 0x28
                        i_1 = i_4
                        i_4 -= 1
                    while (i_1 != 1)
            else
                *(rbp + 0x15c) = 0
        
        if (rbp + 0x140 != r13_1 + 0x80)
            int32_t i_7 = *(rbp + 0x148)
            
            if (i_7 != 0)
                int64_t* rdi_6 = *(rbp + 0x140) + 0x20
                int32_t i_2
                
                do
                    int64_t* rbx_4 = *rdi_6
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            (**rbx_4)(rbx_4)
                            int32_t temp5_1 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (temp5_1 == 1)
                                (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    rdi_6 = &rdi_6[5]
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
            
            int32_t i_5 = *(r13_1 + 0x88)
            void* rdi_7 = *(r13_1 + 0x80)
            int32_t r8_6 = *(rbp + 0x14c)
            *(rbp + 0x148) = i_5
            
            if (i_5 != 0 || r8_6 != 0)
                sub_1407751d0(rbp + 0x140, i_5, r8_6)
                int64_t* r8_7 = *(rbp + 0x140)
                
                if (i_5 != 0)
                    void* r9_1 = rdi_7 + 8
                    int32_t i_3
                    
                    do
                        *r8_7 = *(r9_1 - 8)
                        r8_7[1].b ^= (r8_7[1].b ^ *r9_1) & 1
                        char rcx_10 = ((*r9_1 ^ r8_7[1].b) & 2) ^ r8_7[1].b
                        r8_7[1].b = rcx_10
                        char rdx_6 = ((*r9_1 ^ rcx_10) & 4) ^ rcx_10
                        r8_7[1].b = rdx_6
                        r8_7[1].b = ((*r9_1 ^ rdx_6) & 8) ^ rdx_6
                        r8_7[2] = *(r9_1 + 8)
                        r8_7[3] = *(r9_1 + 0x10)
                        void* rax_17 = *(r9_1 + 0x18)
                        r8_7[4] = rax_17
                        
                        if (rax_17 != 0)
                            *(rax_17 + 8) += 1
                        
                        r8_7 = &r8_7[5]
                        r9_1 += 0x28
                        i_3 = i_5
                        i_5 -= 1
                    while (i_3 != 1)
            else
                *(rbp + 0x14c) = 0
        
        int64_t* rbp_1 = *(r13_1 + 0xa0)
        void* r12_3 = &rbp_1[sx.q(*(r13_1 + 0xa8)) * 2]
        
        if (rbp_1 != r12_3)
            int64_t arg_18 = 0
            
            do
                int64_t rdi_8 = sx.q(*(rbp + 0x148))
                int32_t rax_18 = (rdi_8 + 1).d
                *(rbp + 0x148) = rax_18
                
                if (rax_18 s> *(rbp + 0x14c))
                    sub_1405c4ec0(rbp + 0x140)
                
                int64_t r14_3 = *(rbp + 0x140)
                int64_t rsi_2 = rdi_8 * 5
                int64_t* rdi_9 = data_143e202c8
                int64_t rax_19 = data_143e202b8
                int64_t rcx_12 = data_143e202c0
                
                if (rdi_9 != 0)
                    rdi_9[1].d += 1
                
                *(r14_3 + (rsi_2 << 3) + 8) &= 0xf0
                *(r14_3 + (rsi_2 << 3)) = 0
                *(r14_3 + (rsi_2 << 3) + 0x10) = rax_19
                *(r14_3 + (rsi_2 << 3) + 0x18) = rcx_12
                *(r14_3 + (rsi_2 << 3) + 0x20) = rdi_9
                
                if (rdi_9 != 0)
                    int32_t rax_20 = rdi_9[1].d
                    rdi_9[1].d = rax_20
                    
                    if (rax_20 == 0)
                        (**rdi_9)(rdi_9)
                        int32_t temp8_1 = *(rdi_9 + 0xc)
                        *(rdi_9 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rdi_9 + 8))(rdi_9, 1)
                
                *(r14_3 + (rsi_2 << 3)) = *rbp_1
                int64_t var_68
                int64_t* rax_24 = sub_140b63b70(&rbp_1[1], &var_68)
                
                if (rax_24[1].d != 0)
                    *rax_24
                
                sub_140b58260(&arg_18, u"Speech", 1)
                int64_t var_78
                int64_t* rax_25 = sub_140b63b70(&arg_18, &var_78)
                int16_t* const r8_8
                
                if (rax_25[1].d == 0)
                    r8_8 = &data_142d40450
                else
                    r8_8 = *rax_25
                
                int16_t* var_88
                sub_140a2e390(&var_88, u"%s_%s", r8_8)
                int16_t* const rdx_10 = &data_142d40450
                int32_t var_80
                
                if (var_80 != 0)
                    rdx_10 = var_88
                
                int64_t arg_20
                sub_140b58260(&arg_20, rdx_10, 1)
                int16_t* rcx_20 = var_88
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                int64_t rcx_21 = var_78
                
                if (rcx_21 != 0)
                    sub_140a74f90(rcx_21)
                
                int64_t rcx_22 = var_68
                
                if (rcx_22 != 0)
                    sub_140a74f90(rcx_22)
                
                *(r14_3 + (rsi_2 << 3) + 0x10) = arg_20
                int64_t* rax_28 = r14_3 + 0x18 + (rsi_2 << 3)
                void var_50
                
                if (rax_28 != &var_50)
                    *rax_28 = 0
                    int64_t* rdi_11 = rax_28[1]
                    
                    if (rdi_11 != 0)
                        rax_28[1] = 0
                        rdi_11[1].d -= 1
                        
                        if (rdi_11[1].d == 1)
                            (**rdi_11)(rdi_11)
                            int32_t temp10_1 = *(rdi_11 + 0xc)
                            *(rdi_11 + 0xc) -= 1
                            
                            if (temp10_1 == 1)
                                (*(*rdi_11 + 8))(rdi_11, 1)
                
                rbp_1 = &rbp_1[2]
            while (rbp_1 != r12_3)
        
        rbp = arg1
    else
        int64_t rdx = *rax_1
        (*(rdx + 0x390))(rax_1, rdx)
        r13_1 = rax_1[0x23]
        
        if (r13_1 != 0)
            goto label_14240ef15

sub_14241e8d0(rbp + 0x1c0)
sub_14241e9d0(rbp + 0x210)
uint64_t result = sub_14241e7d0(rbp + 0x170)
*(rbp + 0x2b4) &= 0xfe
return result
