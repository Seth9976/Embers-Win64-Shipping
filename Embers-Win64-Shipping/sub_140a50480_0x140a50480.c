// 函数: sub_140a50480
// 地址: 0x140a50480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
int64_t** rbp = nullptr

while (true)
    bool z_1
    
    if (0 == *(arg1 + 0x90))
        *(arg1 + 0x90) = 0
        z_1 = true
    else
        int64_t rax_1
        rax_1.b = *(arg1 + 0x90)
        z_1 = false
    
    if (not(z_1))
        break
    
    while (true)
        bool z_2
        
        if (0 == *(arg1 + 0x90))
            *(arg1 + 0x90) = 0
            z_2 = true
        else
            int64_t rax_2
            rax_2.b = *(arg1 + 0x90)
            z_2 = false
        
        if (not(z_2))
            break
        
        EnterCriticalSection(arg1 + 0x10)
        int64_t* rax_3 = *(arg1 + 0x38)
        
        if (rax_3 != 0)
            if (rbp != 0)
                *rbp = rax_3
            else
                r14 = rax_3
            
            rbp = *(arg1 + 0x40)
            *(arg1 + 0x40) = 0
            *(arg1 + 0x38) = 0
        
        int64_t* r12_1 = r14
        
        if (arg1 != -0x10)
            LeaveCriticalSection(arg1 + 0x10)
        
        if (r14 == 0)
            break
        
        int64_t* rsi_1 = r14
        int64_t** rax_4 = nullptr
        r14 = *r14
        
        if (r14 != 0)
            rax_4 = rbp
        
        rbp = rax_4
        void* rax_5 = rsi_1[5]
        
        if ((zx.q(*(rax_5 + 0x18)) << 0x20 | zx.q(*(rax_5 + 8))) == 0)
            int64_t* arg_10
            int64_t** rax_7 = sub_140a956f0(&arg_10, rsi_1[6])
            
            if (&rsi_1[5] != rax_7)
                int64_t* rbx_2 = rsi_1[5]
                rsi_1[5] = *rax_7
                *rax_7 = nullptr
                
                if (rbx_2 != 0)
                    int32_t rax_8 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_8 == 1)
                        sub_140a99090(rbx_2)
                        j_sub_140a74f90(rbx_2)
            
            int64_t* rbx_3 = arg_10
            
            if (rbx_3 != 0)
                int32_t rax_9 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_9 == 1 && rbx_3 != 0)
                    sub_140a99090(rbx_3)
                    j_sub_140a74f90(rbx_3)
        
        int64_t* rbx_4 = rsi_1[3]
        
        if ((*(*rbx_4 + 8))(rbx_4) != rsi_1[7])
            (*(*rbx_4 + 8))(rbx_4)
            (*(*rbx_4 + 0x10))(rbx_4, rsi_1[7])
        
        (*(*rbx_4 + 0x20))(rbx_4, *rsi_1[5], rsi_1[6])
        EnterCriticalSection(arg1 + 0x48)
        
        if (*(arg1 + 0x70) != 0)
            **(arg1 + 0x78) = rsi_1
        else
            *(arg1 + 0x70) = rsi_1
        
        *(arg1 + 0x78) = r12_1
        *rsi_1 = 0
        
        if (arg1 != -0x48)
            LeaveCriticalSection(arg1 + 0x48)
        
        int64_t* rcx_17 = **(arg1 + 8)
        (*(*rcx_17 + 0x10))(rcx_17)
    
    int64_t* rcx_18 = *(arg1 + 0x80)
    (*(*rcx_18 + 0x20))(rcx_18, 0xffffffff, 0)

return 0
