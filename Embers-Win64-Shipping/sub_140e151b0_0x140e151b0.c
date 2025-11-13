// 函数: sub_140e151b0
// 地址: 0x140e151b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x50) == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* rbx_1 = *(arg1 - 0x48)
    
    if (rbx_1 == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s<= 0)
            *arg2 = 0
            arg2[1] = 0
        else
            void* rcx = nullptr
            
            if (rbx_1 == 0)
                goto label_140e151fd
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rax_1 += 1
                rbx_1[1].d = rax_1
            label_140e151fd:
                
                if (rbx_1 != 0)
                    rcx = *(arg1 - 0x50)
                
                if (rbx_1 != 0)
                    rbx_1[1].d = rax_1 + 1
            
            *arg2 = *(rcx + 0x910)
            void* rax_4 = *(rcx + 0x918)
            arg2[1] = rax_4
            
            if (rax_4 != 0)
                *(rax_4 + 8) += 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
