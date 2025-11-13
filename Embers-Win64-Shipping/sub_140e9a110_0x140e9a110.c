// 函数: sub_140e9a110
// 地址: 0x140e9a110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int64_t* rsi = *(rcx + 0x3b8)
void* rbp_2 = &rsi[sx.q(*(rcx + 0x3c0)) * 2]

if (rsi == rbp_2)
label_140e9a1ee:
    void** rcx_5 = *(rcx + 0x3b8)
    *arg2 = *rcx_5
    void* rax_9 = rcx_5[1]
    arg2[1] = rax_9
    
    if (rax_9 != 0)
        *(rax_9 + 8) += 1
else
    while (true)
        int64_t* rbx_1 = rsi[1]
        void* rdi_1 = *rsi
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (*(rdi_1 + 0x1b8) != 0)
            int64_t* rcx_1 = *(rdi_1 + 0x1b0)
            
            if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
                int64_t* rcx_2
                
                if (*(rdi_1 + 0x1b8) == 0)
                    rcx_2 = nullptr
                else
                    rcx_2 = *(rdi_1 + 0x1b0)
                
                char arg_8
                (*(*rcx_2 + 0x48))(rcx_2, &arg_8)
                *(rdi_1 + 0x1a8) = arg_8
        
        if (*(rdi_1 + 0x1a8) == data_1439ae51c)
            *arg2 = rdi_1
            arg2[1] = rbx_1
            
            if (rbx_1 != 0)
                int32_t rax_11 = rbx_1[1].d
                rbx_1[1].d = rax_11
                
                if (rax_11 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            break
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi = &rsi[2]
        
        if (rsi == rbp_2)
            rcx = *arg1
            goto label_140e9a1ee

return arg2
