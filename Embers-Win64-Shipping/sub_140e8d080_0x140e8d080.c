// 函数: sub_140e8d080
// 地址: 0x140e8d080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e86990(arg1)
*(arg1 + 0x439) = 0

if (arg1[0x67] != 0)
    int64_t* rbx_1 = arg1[0x68]
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s> 0)
            if (rbx_1 != 0)
                if (rax_1 != 0)
                    rbx_1[1].d = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    arg1[0x67]
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)

void var_18

if (&arg1[0x67] != &var_18)
    arg1[0x67] = 0
    int64_t* rcx_4 = arg1[0x68]
    arg1[0x68] = 0
    
    if (rcx_4 != 0)
        int32_t temp0_1 = *(rcx_4 + 0xc)
        *(rcx_4 + 0xc) -= 1
        
        if (temp0_1 == 1)
            return (*(*rcx_4 + 8))(rcx_4, 1)

return &var_18
