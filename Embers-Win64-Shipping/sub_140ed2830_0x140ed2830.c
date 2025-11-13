// 函数: sub_140ed2830
// 地址: 0x140ed2830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x240) != 0)
    int64_t* rcx = *(arg1 + 0x238)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rbx_1 = arg2[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int64_t* rcx_1
        
        if (*(arg1 + 0x240) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x238)
        
        int64_t var_18 = *arg2
        int64_t* var_10 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        char rax_4 = (*(*rcx_1 + 0x48))(rcx_1, &var_18)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                int64_t rdx_1 = *rbx_1
                (*rdx_1)(rbx_1, rdx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        return zx.q(rax_4)

return 1
