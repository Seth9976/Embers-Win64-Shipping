// 函数: sub_141bb9220
// 地址: 0x141bb9220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x48))()
void* rbx = *(arg2 + 0x10)

if (rbx != 0 && sub_140be1130(rbx, sub_141c00390()) != 0 && rax_1 != 0)
    void var_18
    int64_t* rax_4 = sub_141bab3c0(arg2, &var_18)
    int64_t* rbx_1 = rax_4[1]
    int64_t rbp_1 = *rax_4
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
    
    if (rbp_1 != 0)
        int64_t rdx_2 = rbp_1 + 0x3a8
        
        if (rbp_1 == 0)
            rdx_2 = 0
        
        int64_t result = (*(*(rax_1 + 0x4f8) + 0x48))(rax_1 + 0x4f8, rdx_2, 0)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                int64_t r8_1 = *rbx_1
                (*r8_1)(rbx_1, arg3, r8_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        return result
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return 0
