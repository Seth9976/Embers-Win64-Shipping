// 函数: sub_141b97f90
// 地址: 0x141b97f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[0x22].d
int32_t rbx_1 = rbx - 1

if (rbx - 1 s< 0)
    return 

int64_t rsi_1 = sx.q(rbx_1) << 3
int64_t rbp_1 = rsi_1
int64_t r12_2 = sx.q(rbx_1 + 1) << 3
int32_t temp1_1

do
    if (rbx_1 s>= 0 && rbx_1 s< arg1[0x22].d)
        int64_t* r14_1 = *(rsi_1 + arg1[0x21])
        void* rax_3 = r14_1[6]
        
        if (rax_3 != 0)
            *(rax_3 + 0x28) = 0
        
        int32_t rax_4 = arg1[0x22].d
        int32_t rcx_1 = rax_4 - rbx_1
        
        if (rcx_1 != 1)
            int64_t rax_5 = arg1[0x21]
            memmove(rax_5 + rbp_1, r12_2 + rax_5, (rcx_1 - 1) << 3)
            rax_4 = arg1[0x22].d
        
        arg1[0x22].d = rax_4 - 1
        sub_1405c53d0(&arg1[0x21])
        (*(*arg1 + 0x2d8))(arg1, r14_1)
        int64_t rdx_3
        rdx_3.b = 1
        (*(*r14_1 + 0x260))(r14_1, rdx_3)
        r14_1[5] = 0
        r14_1[6] = 0
        int64_t* var_38
        sub_141bab3c0(arg1, &var_38)
        int64_t* rcx_8 = var_38
        
        if (rcx_8 != 0)
            sub_140e19ef0(rcx_8, 5)
        
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp4_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
    
    r12_2 -= 8
    rbp_1 -= 8
    rsi_1 -= 8
    temp1_1 = rbx_1
    rbx_1 -= 1
while (temp1_1 - 1 s>= 0)
