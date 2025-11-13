// 函数: sub_140f03150
// 地址: 0x140f03150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x2a0) == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* rbx_1 = *(arg1 - 0x298)
    
    if (rbx_1 == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s<= 0)
            *arg2 = 0
            arg2[1] = 0
        else
            int64_t rcx = 0
            
            if (rbx_1 != 0)
                if (rax_1 != 0)
                    rbx_1[1].d = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rcx = *(arg1 - 0x2a0)
            
            *arg2 = rcx
            arg2[1] = rbx_1
            
            if (rbx_1 != 0)
                int32_t rax_2 = rbx_1[1].d
                rbx_1[1].d = rax_2
                
                if (rax_2 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp0_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp0_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
