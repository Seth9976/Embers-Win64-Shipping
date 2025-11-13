// 函数: sub_1418098f0
// 地址: 0x1418098f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143ef9d10)

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= *(arg1 + 0x20))
        break
    
    int64_t* rax_3 = (sx.q(i) << 4) + *(arg1 + 0x18)
    int64_t* rbx_1 = rax_3[1]
    int64_t* rcx = *rax_3
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    (*(*rcx + 0xc8))(rcx, arg2)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

void* rdi = *(arg1 + 0x28)

if (rdi != 0)
    int64_t* var_58 = nullptr
    int64_t var_50_1 = 0
    
    while (true)
        void* rdx_1 = **(rdi + 0x78)
        
        if (rdx_1 == 0)
            break
        
        int64_t rsi_1 = *(rdx_1 + 8)
        int64_t rcx_3 = *(rdi + 0x78)
        *(rdi + 0x78) = rdx_1
        *(rdx_1 + 8) = 0
        j_sub_140a74f90(rcx_3)
        int64_t rbx_2 = sx.q(var_50_1.d)
        int32_t rax_8 = (rbx_2 + 1).d
        var_50_1.d = rax_8
        
        if (rax_8 s> var_50_1:4.d)
            sub_1405a4d70(&var_58)
        
        var_58[rbx_2] = rsi_1
    
    int64_t* rcx_5 = var_58
    int64_t* rdi_1 = rcx_5
    int64_t* var_68_1 = rcx_5
    void* rbp_1 = &rcx_5[sx.q(var_50_1.d)]
    void* var_60_1 = rbp_1
    
    if (rcx_5 != rbp_1)
        void* rsi_2 = arg1
        
        do
            int64_t* rbx_3 = *rdi_1
            (*(*rbx_3 + 0xf0))(rbx_3)
            int64_t* r12_1 = rbx_3[2]
            int64_t r13_1 = 0
            
            if (r12_1 != 0)
                int32_t rax_12 = r12_1[1].d
                
                if (rax_12 == 0)
                    r12_1 = nullptr
                else
                    r12_1[1].d = rax_12 + 1
                    
                    if (r12_1 != 0)
                        r13_1 = rbx_3[1]
            
            int64_t rcx_7 = sx.q(*(rsi_2 + 0x20))
            
            if (rcx_7.d != 0)
                int32_t rbx_4 = 0
                int32_t r14_1 = 0
                int32_t arg_20 = 0
                int64_t rdi_2 = 0
                bool r8_1 = **(rsi_2 + 0x18) != r13_1
                bool arg_18 = r8_1
                
                do
                    int64_t r9_1 = sx.q(r14_1)
                    rdi_2 += 1
                    r14_1 += 1
                    
                    if (rdi_2 s< rcx_7)
                        int64_t* rcx_10 = (rdi_2 << 4) + *(rsi_2 + 0x18)
                        
                        do
                            int32_t rax_15
                            rax_15.b = *rcx_10 != r13_1
                            
                            if (zx.d(r8_1) != rax_15)
                                break
                            
                            r14_1 += 1
                            rdi_2 += 1
                            rcx_10 = &rcx_10[2]
                        while (rdi_2 s< rcx_7)
                    
                    int32_t i_2 = r14_1 - r9_1.d
                    
                    if (r8_1 == 0)
                        if (i_2 != 0)
                            int64_t* rsi_6 = (r9_1 << 4) + 8 + *(arg1 + 0x18)
                            int32_t i_1
                            
                            do
                                int64_t* rbx_5 = *rsi_6
                                
                                if (rbx_5 != 0)
                                    rbx_5[1].d -= 1
                                    
                                    if (rbx_5[1].d == 1)
                                        (**rbx_5)(rbx_5)
                                        int32_t temp6_1 = *(rbx_5 + 0xc)
                                        *(rbx_5 + 0xc) -= 1
                                        
                                        if (temp6_1 == 1)
                                            (*(*rbx_5 + 8))(rbx_5, 1)
                                
                                rsi_6 = &rsi_6[2]
                                i_1 = i_2
                                i_2 -= 1
                            while (i_1 != 1)
                            r8_1 = arg_18
                            rbx_4 = arg_20
                        
                        rsi_2 = arg1
                    else
                        if (rbx_4 != r9_1.d)
                            memmove((sx.q(rbx_4) << 4) + *(rsi_2 + 0x18), 
                                (r9_1 << 4) + *(rsi_2 + 0x18), i_2 << 4)
                            r8_1 = arg_18
                        
                        rbx_4 += i_2
                        arg_20 = rbx_4
                    
                    r8_1 ^= 1
                    arg_18 = r8_1
                while (rdi_2 s< rcx_7)
                
                rdi_1 = var_68_1
                rbp_1 = var_60_1
                *(rsi_2 + 0x20) = rbx_4
            
            if (r12_1 != 0)
                r12_1[1].d -= 1
                
                if (r12_1[1].d == 1)
                    (**r12_1)(r12_1)
                    int32_t temp3_1 = *(r12_1 + 0xc)
                    *(r12_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*r12_1 + 8))(r12_1, 1)
            
            rdi_1 = &rdi_1[1]
            var_68_1 = rdi_1
        while (rdi_1 != rbp_1)
        
        rcx_5 = var_58
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

LeaveCriticalSection(&data_143ef9d10)
int64_t result
result.b = 1
return result
