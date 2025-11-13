// 函数: sub_141ede5e0
// 地址: 0x141ede5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[4].d

if (rax s>= *(arg1 + 0x5c))
    int32_t i = 0
    
    if (rax s> 0)
        do
            (*(*arg1 + 0x10))(arg1, (sx.q(i) << 4) + arg1[3])
            i += 1
        while (i s< arg1[4].d)
    
    if (*(arg1 + 0x24) s< 0)
        sub_14095cd40(&arg1[3], 0)
    else
        int32_t i_2 = arg1[4].d
        
        if (i_2 != 0)
            int64_t* rsi_2 = arg1[3] + 8
            int32_t i_1
            
            do
                int64_t* rbx_1 = *rsi_2
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp2_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                
                rsi_2 = &rsi_2[2]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        arg1[4].d = 0

if (arg1[6].d == 0)
    int64_t* var_28
    (*(*arg1 + 8))(arg1, &var_28)
    int64_t* rcx_5 = var_28
    (*(*rcx_5 + 8))(rcx_5)
    *arg2 = var_28
    int64_t var_20
    arg2[1] = var_20
    return arg2

int64_t rax_9 = arg1[5]
int64_t rdx_5 = sx.q(arg1[6].d) * 2
int64_t* rdi_1 = *(rax_9 + (rdx_5 << 3) - 0x10)
int64_t rbx_2 = *(rax_9 + (rdx_5 << 3) - 8)
*(rax_9 + (rdx_5 << 3) - 8) = 0
*(rax_9 + (rdx_5 << 3) - 0x10) = 0
sub_140dbae50(&arg1[5], arg1[6].d - 1, 1, 0)
(*(*rdi_1 + 8))(rdi_1)
*arg2 = rdi_1
arg2[1] = rbx_2
return arg2
