// 函数: sub_14126c520
// 地址: 0x14126c520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0x80000000
EnterCriticalSection(&data_143e8eab0)
int32_t rax = sub_14126d030(arg2)
int32_t r15 = data_143e8eb30
int32_t rbx_1 = rax & 0x7fffffff
int64_t r13 = data_143e8eb20
int32_t rdi_1 = r15 & rbx_1
int32_t r12_3 = (data_143e8eb34 + 1 + rbx_1) & r15
int32_t rbx_2

while (true)
    int64_t rbp_1 = sx.q(rdi_1)
    
    if (rbx_1 == *(r13 + (rbp_1 << 2))
            && sub_14125d210(arg2, sx.q(*(data_143e8eb10 + (rbp_1 << 2))) * 0x88 + data_143e8eaf0)
            != 0)
        rbx_2 = *(data_143e8eb10 + (rbp_1 << 2))
        break
    
    rdi_1 = (rdi_1 + 1) & r15
    
    if (rdi_1 == r12_3)
        rbx_2 = -1
        break

LeaveCriticalSection(&data_143e8eab0)

if (rbx_2 == 0xffffffff)
    *arg1 |= 0x40000000
    void arg_8
    void* var_50_1 = &arg_8
    void var_48
    int32_t var_44
    sub_141251f40(arg3, &var_44, sub_14126d030(arg2) & 0x7fffffff, arg2, &var_48)
    rbx_2 = var_44
    int32_t* rax_6
    
    if (*arg4 != 0)
        rax_6.b = 1
    else
        void* rax_7 = arg2[1]
        
        if (rax_7 == 0 || *(*(rax_7 + 0x18) + (sx.q(arg2[6].d) << 3)) != 0)
            void* rax_8 = arg2[2]
            
            if (rax_8 == 0 || *(*(rax_8 + 0x18) + (sx.q(*(arg2 + 0x34)) << 3)) != 0)
                void* rax_9 = arg2[3]
                
                if (rax_9 == 0 || *(*(rax_9 + 0x18) + (sx.q(arg2[7].d) << 3)) != 0)
                    void* rax_10 = arg2[4]
                    
                    if (rax_10 == 0 || *(*(rax_10 + 0x18) + (sx.q(*(arg2 + 0x3c)) << 3)) != 0)
                        rax_6 = arg2[5]
                        
                        if (rax_6 == 0 || *(*(rax_6 + 0x18) + (sx.q(arg2[8].d) << 3)) != 0)
                            rax_6.b = 0
                        else
                            rax_6.b = 1
                    else
                        rax_6.b = 1
                else
                    rax_6.b = 1
            else
                rax_6.b = 1
        else
            rax_6.b = 1
    
    *arg4 = rax_6.b

*arg1 &= 0xc0000000
*arg1 |= rbx_2 & 0x3fffffff
return arg1
