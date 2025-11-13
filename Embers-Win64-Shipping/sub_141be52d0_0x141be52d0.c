// 函数: sub_141be52d0
// 地址: 0x141be52d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t result = *arg2
*(arg1 + 0x38) = result

if (*(arg1 + 0x48) != 0)
    int64_t* rbx_1 = *(arg1 + 0x50)
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s> 0)
            int64_t* rcx = nullptr
            char var_28_1 = 1
            int64_t var_20 = 0
            int32_t var_18_1 = 0
            int128_t result_1 = result
            
            if (rbx_1 != 0)
                if (rax_1 != 0)
                    rbx_1[1].d = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rcx = *(arg1 + 0x48)
            
            sub_140f60540(rcx, &result_1)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp1_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            return sub_140745b20(&var_20)

return result
