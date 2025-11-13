// 函数: sub_14202df00
// 地址: 0x14202df00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2b8) != 0)
    int64_t* rcx = *(arg1 + 0x2b0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rbx = arg3[1]
        
        if (rbx != 0)
            rbx[1].d += 1
        
        int64_t* rcx_1
        
        if (*(arg1 + 0x2b8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x2b0)
        
        int64_t var_18 = *arg3
        int64_t* var_10_1 = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
        
        char result = (*(*rcx_1 + 0x48))(rcx_1, zx.q(arg2), &var_18)
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                int64_t rdx_1 = *rbx
                (*rdx_1)(rbx, rdx_1)
                int32_t temp4_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        int64_t* rbx_1 = arg3[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        return result

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return 0
