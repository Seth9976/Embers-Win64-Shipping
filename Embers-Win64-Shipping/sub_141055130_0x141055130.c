// 函数: sub_141055130
// 地址: 0x141055130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void**** result = arg2
void* var_58 = arg1
void arg_28
void* var_60 = &arg_28
int64_t* var_50 = &arg_18
int64_t rcx_1 = **(arg1 + 0x20)
int32_t rdx_1 = (1 << (data_1439c7a34).b) - 1
void* var_68 = arg4
void*** i_1 = sub_14103ad60(rcx_1, rdx_1, &var_68)
int64_t r12 = sx.q(*(arg4 + 0x10))
void*** i_2 = i_1

if (r12.d != 0)
    void*** i = i_1
    int64_t r15_1 = r12
    
    if (i_1 != 0)
        void* r13 = arg4
        
        do
            int32_t j_1 = i[0x16].d
            int64_t* rdi_1 = i[0x15]
            
            if (j_1 != 0)
                int32_t j
                
                do
                    int64_t* rbx = *rdi_1
                    
                    if (rbx != 0)
                        rbx[1].d -= 1
                        
                        if (rbx[1].d == 1)
                            char rax_3
                            
                            if (rbx[2].b == 0 && data_143f0f1d0 == 0)
                                rax_3 = sub_1405949a0()
                            
                            if (rbx[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
                                (**rbx)(rbx, 1)
                            else
                                bool z_1
                                
                                if (0 == *(rbx + 0xc))
                                    *(rbx + 0xc) = 1
                                    z_1 = true
                                else
                                    *(rbx + 0xc)
                                    z_1 = false
                                
                                if (z_1)
                                    sub_1405dcc10(&data_143f02390, rbx)
                    
                    rdi_1 = &rdi_1[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                r13 = arg4
            
            int32_t rbx_1 = 0
            i[0x16].d = 0
            
            if (*(i + 0xb4) != r12.d)
                sub_1405c5570(&i[0x15], r12.d)
                rbx_1 = i[0x16].d
            
            int32_t rax_6 = rbx_1 + r12.d
            i[0x16].d = rax_6
            
            if (rax_6 s> *(i + 0xb4))
                sub_1405a4d70(&i[0x15])
            
            memset(&i[0x15][sx.q(rbx_1)], 0, r15_1 << 3)
            int64_t rdi_2 = 0
            
            if (r15_1 s> 0)
                do
                    void* rax_8 = *(r13 + 8)
                    void* rcx_7 = rax_8
                    char r8_2 = *(r13 + 8) & 1
                    
                    if (r8_2 != 0)
                        rcx_7 = (rcx_7 s>> 1) + r13 + 8
                    
                    uint32_t rdx_5 = zx.d(*(rcx_7 + (rdi_2 << 2) + 2))
                    
                    if (rdx_5.b u> 0x14 || not(test_bit(0x191000, rdx_5)))
                        void* rdx_6
                        
                        if (rdx_5.b - 9 u<= 2)
                        label_141055329:
                            
                            if (r8_2 != 0)
                                rax_8 = (rax_8 s>> 1) + r13 + 8
                            
                            rdx_6 = *(zx.q(*(rax_8 + (rdi_2 << 2))) + arg_18)
                            
                            if (rdx_6 != 0)
                                rdx_6 = *(rdx_6 + 0x10)
                        else
                            rdx_5.b -= 0xd
                            
                            if (rdx_5.b u<= 2)
                                goto label_141055329
                            
                            if (r8_2 != 0)
                                rax_8 = (rax_8 s>> 1) + r13 + 8
                            
                            rdx_6 = *(zx.q(*(rax_8 + (rdi_2 << 2))) + arg_18)
                        
                        int64_t rax_13 = i[0x15]
                        int64_t* rbx_2 = *(rax_13 + (rdi_2 << 3))
                        *(rax_13 + (rdi_2 << 3)) = rdx_6
                        
                        if (rdx_6 != 0)
                            *(rdx_6 + 8) += 1
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                char rax_15
                                
                                if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_15 = sub_1405949a0()
                                
                                if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_15 != 0))
                                    (**rbx_2)(rbx_2, 1)
                                else
                                    bool z_2
                                    
                                    if (0 == *(rbx_2 + 0xc))
                                        *(rbx_2 + 0xc) = 1
                                        z_2 = true
                                    else
                                        *(rbx_2 + 0xc)
                                        z_2 = false
                                    
                                    if (z_2)
                                        sub_1405dcc10(&data_143f02390, rbx_2)
                    
                    rdi_2 += 1
                while (rdi_2 s< r15_1)
                
                r13 = arg4
                r12 = zx.q(r15_1.d)
            
            i = i[6]
        while (i != 0)
        
        i_2 = i_1
        result = arg2

*result = i_2

if (i_2 != 0)
    i_2[1].d += 1

return result
