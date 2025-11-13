// 函数: sub_140e67030
// 地址: 0x140e67030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68

if (*(arg1 + 0x1b8) s<= 0)
    *arg2 = 0
    int32_t i_4 = *(arg1 + 0x188)
    int64_t* rbx_4 = *(arg1 + 0x180)
    arg2[1].d = i_4
    
    if (i_4 != 0)
        sub_1405a4be0(arg2, i_4, 0)
        int64_t* rcx_12 = *arg2
        int32_t i
        
        do
            *rcx_12 = *rbx_4
            void* rax_13 = rbx_4[1]
            rcx_12[1] = rax_13
            
            if (rax_13 != 0)
                *(rax_13 + 8) += 1
            
            rcx_12 = &rcx_12[2]
            rbx_4 = &rbx_4[2]
            i = i_4
            i_4 -= 1
        while (i != 1)
    else
        *(arg2 + 0xc) = 0
else
    int64_t rax_2 = *(arg1 + 0x1b0)
    void* rdx = nullptr
    int32_t r8_1 = 1
    int64_t rcx_1 = sx.q(*(arg1 + 0x1b8)) * 2
    void* var_38_1 = nullptr
    int32_t rdi = 0
    int64_t* rbx_1 = *(rax_2 + (rcx_1 << 3) - 8)
    int64_t rbp_1 = *(rax_2 + (rcx_1 << 3) - 0x10)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        r8_1 = 1
        rdi = 0
        rdx = var_38_1
    
    void var_48
    
    if (rdi + 1 s> r8_1)
        sub_140dbc6f0(&var_48, rdi)
        rdx = var_38_1
    
    void* rcx_3 = &var_48
    
    if (rdx != 0)
        rcx_3 = rdx
    
    int64_t rax_5 = sx.q(rdi) * 2
    *(rcx_3 + (rax_5 << 3)) = rbp_1
    *(rcx_3 + (rax_5 << 3) + 8) = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int32_t i_3 = rdi + 1
    void* rbx_2 = var_38_1
    *arg2 = 0
    arg2[1].d = i_3
    
    if (i_3 != 0)
        sub_1405a4be0(arg2, i_3, 0)
        int64_t* rdx_3 = *arg2
        void* rcx_7 = &var_48
        
        if (rbx_2 != 0)
            rcx_7 = rbx_2
        
        int32_t i_1
        
        do
            *rdx_3 = *rcx_7
            void* rax_9 = *(rcx_7 + 8)
            rdx_3[1] = rax_9
            
            if (rax_9 != 0)
                *(rax_9 + 8) += 1
            
            rdx_3 = &rdx_3[2]
            rcx_7 += 0x10
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        i_3 = rdi + 1
        rbx_2 = var_38_1
    else
        *(arg2 + 0xc) = 0
    
    void* rsi_1 = &var_48
    
    if (rbx_2 != 0)
        rsi_1 = rbx_2
    
    if (i_3 != 0)
        void* rsi_2 = rsi_1 + 8
        int32_t i_2
        
        do
            int64_t* rbx_3 = *rsi_2
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp6_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            rsi_2 += 0x10
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        rbx_2 = var_38_1
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)

__security_check_cookie(rax_1 ^ &var_68)
return arg2
