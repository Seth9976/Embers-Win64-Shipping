// 函数: sub_140e6b680
// 地址: 0x140e6b680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x2b8)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x2c0)) * 2]; i != rsi_2; i = &i[2])
    int64_t* rbx_1 = i[1]
    void* rcx = *i
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (rcx != 0 && sub_140e6b750(rcx, arg2, arg3) != 0)
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        return 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return 0
