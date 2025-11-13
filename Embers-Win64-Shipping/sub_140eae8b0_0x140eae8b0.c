// 函数: sub_140eae8b0
// 地址: 0x140eae8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x3c0)
int32_t rdi = 0
int128_t zmm6
int128_t var_38 = zmm6
int32_t r14 = 2
char var_58
int64_t* var_50

if (rax s> 0)
    void* rbp_1 = arg1 + 0x3b8
    int64_t r12_1 = 0
    
    do
        int64_t* rbx_3 = (r12_1 << 4) + *rbp_1
        int64_t* rcx = *rbx_3
        int32_t rax_2 = (*(*rcx + 0x280))(rcx)
        int64_t* rcx_1 = *rbx_3
        int32_t rsi_1 = rax_2
        
        if (r14 s<= rax_2)
            rax_2 = r14
        
        r14 = rax_2
        int32_t rax_4 = (*(*rcx_1 + 0x240))(rcx_1)
        
        if (rax_4 == 0)
            int64_t* rbx_7 = rbx_3[1]
            
            if (rbx_7 != 0)
                rbx_7[1].d += 1
            
            if (rsi_1 != 2)
                rdi += 1
                r12_1 += 1
            else
                sub_140dbae50(rbp_1, rdi, rsi_1 - 1, 1)
                sub_140f5b590(*(arg1 + 0x3a8), rdi)
            
            if (rbx_7 != 0)
                rbx_7[1].d -= 1
                
                if (rbx_7[1].d == 1)
                    (**rbx_7)(rbx_7)
                    int32_t temp3_1 = *(rbx_7 + 0xc)
                    *(rbx_7 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_7 + 8))(rbx_7, 1)
        else if (rax_4 == 1)
            int64_t* r14_1 = rbx_3[1]
            void* r15_1 = *rbx_3
            
            if (r14_1 != 0)
                r14_1[1].d += 1
            
            if (rsi_1 != 2)
                int32_t rax_5
                int32_t rax_6
                
                if (*(r15_1 + 0x3c0) != 1)
                    rax_5 = sub_140f47e50(*(r15_1 + 0x3a8))
                    rax_6 = sub_140f47e50(*(arg1 + 0x3a8))
                
                if (*(r15_1 + 0x3c0) == 1 || rax_5 == rax_6)
                    int32_t zmm0_1 = sub_140eaf0e0(r15_1)
                    zmm6.d = (*(r15_1 + 0x3a0)).d f/ zmm0_1
                    sub_140dbae50(rbp_1, rdi, 1, 1)
                    sub_140f5b590(*(arg1 + 0x3a8), rdi)
                    int32_t i = 0
                    
                    if (*(r15_1 + 0x3c0) s> 0)
                        int64_t* rsi_2 = nullptr
                        
                        do
                            int64_t rax_7 = *(r15_1 + 0x3b8)
                            int64_t* rbx_5 = *(rsi_2 + rax_7 + 8)
                            void* rcx_9 = *(rsi_2 + rax_7)
                            var_58.q = rcx_9
                            var_50 = rbx_5
                            
                            if (rbx_5 != 0)
                                rbx_5[1].d += 1
                            
                            *(rcx_9 + 0x3a0) = zmm6.d f* *(rcx_9 + 0x3a0)
                            sub_140ea15b0(arg1, &var_58, rdi)
                            rdi += 1
                            r12_1 += 1
                            
                            if (rbx_5 != 0)
                                rbx_5[1].d -= 1
                                
                                if (rbx_5[1].d == 1)
                                    (**rbx_5)(rbx_5)
                                    int32_t temp7_1 = *(rbx_5 + 0xc)
                                    *(rbx_5 + 0xc) -= 1
                                    
                                    if (temp7_1 == 1)
                                        (*(*rbx_5 + 8))(rbx_5, 1)
                            
                            i += 1
                            rsi_2 = &rsi_2[2]
                        while (i s< *(r15_1 + 0x3c0))
                    
                    rbp_1 = arg1 + 0x3b8
                else
                    rdi += 1
                    r12_1 += 1
            else
                sub_140dbae50(rbp_1, rdi, rsi_1 - 1, 1)
                sub_140f5b590(*(arg1 + 0x3a8), rdi)
            
            if (r14_1 != 0)
                r14_1[1].d -= 1
                
                if (r14_1[1].d == 1)
                    (**r14_1)(r14_1)
                    int32_t temp5_1 = *(r14_1 + 0xc)
                    *(r14_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*r14_1 + 8))(r14_1, 1)
            
            r14 = rax_2
        
        rax = *(arg1 + 0x3c0)
    while (rdi s< rax)

if (rax == 1)
    int64_t* rcx_15 = **(arg1 + 0x3b8)
    int32_t rax_14 = (*(*rcx_15 + 0x240))(rcx_15)
    int32_t rax_17
    
    if (rax_14 != 1)
        int64_t* rcx_16 = **(arg1 + 0x3b8)
        rax_17 = (*(*rcx_16 + 0x240))(rcx_16)
    
    if (rax_14 == 1 || rax_17 == 2)
        void** rax_18 = *(arg1 + 0x3b8)
        int64_t* rbx_6 = rax_18[1]
        void* rbp_2 = *rax_18
        
        if (rbx_6 != 0)
            rbx_6[1].d += 1
        
        sub_140dbae50(arg1 + 0x3b8, 0, 1, 1)
        sub_140f5b590(*(arg1 + 0x3a8), 0)
        int32_t rax_19 = sub_140f47e50(*(rbp_2 + 0x3a8))
        sub_140f5e590(*(arg1 + 0x3a8), rax_19)
        int32_t zmm0_3 = sub_140eaf0e0(rbp_2)
        int32_t i_1 = 0
        zmm6.d = (*(rbp_2 + 0x3a0)).d f/ zmm0_3
        
        if (*(rbp_2 + 0x3c0) s> 0)
            int64_t rdi_1 = 0
            
            do
                int64_t* rdx_8 = *(rbp_2 + 0x3b8) + rdi_1
                void* rax_20 = *rdx_8
                *(rax_20 + 0x3a0) = zmm6.d f* *(rax_20 + 0x3a0)
                sub_140ea15b0(arg1, rdx_8, 0xffffffff)
                i_1 += 1
                rdi_1 += 0x10
            while (i_1 s< *(rbp_2 + 0x3c0))
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp1_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)

if (r14 == 1 && *(arg1 + 0x390) != 0)
    void* rax_23 = *(arg1 + 0x398)
    
    if (rax_23 != 0 && *(rax_23 + 8) s> 0)
        char rcx_25 = data_1439ae51d
        var_58 = rcx_25
        *(arg1 + 0x1a8) = rcx_25
        char var_57_1 = r14.b
        var_50 = nullptr
        int32_t var_48_1 = 0
        *(arg1 + 0x1a9) = r14.b
        sub_1407473e0(arg1 + 0x1b0, &var_50)
        sub_140745b20(&var_50)

return zx.q(r14)
