// 函数: sub_140d7ac60
// 地址: 0x140d7ac60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if (arg2[1].d s<= 0)
label_140d7acdd:
    *arg1 = nullptr
    arg1[1] = 0
else
    int64_t* rsi_1 = nullptr
    
    while (true)
        int64_t rax_1 = *arg2
        int64_t* rbx_1 = *(rsi_1 + rax_1 + 8)
        void* rcx = *(rsi_1 + rax_1)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (*(rcx + 0x28) == arg3)
            *arg1 = rcx
            arg1[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp3_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
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
        
        rdi += 1
        rsi_1 = &rsi_1[2]
        
        if (rdi s>= arg2[1].d)
            goto label_140d7acdd

return arg1
