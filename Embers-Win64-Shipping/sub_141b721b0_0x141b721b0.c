// 函数: sub_141b721b0
// 地址: 0x141b721b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x48))()

if (rax_1 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t var_18
    (*(*(rax_1 + 0x4f8) + 0xd0))(rax_1 + 0x4f8, &var_18, arg3)
    int64_t rax_3 = var_18
    int64_t rcx_1 = rax_3 - 0x3a8
    
    if (rax_3 == 0)
        rcx_1 = 0
    
    *arg2 = rcx_1
    int64_t* var_10
    arg2[1] = var_10
    
    if (var_10 != 0)
        var_10[1].d += 1
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp1_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)

return arg2
