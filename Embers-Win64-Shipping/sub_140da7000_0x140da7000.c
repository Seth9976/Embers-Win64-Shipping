// 函数: sub_140da7000
// 地址: 0x140da7000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x18)

if (rbx == 0)
    *arg2 = 0
    arg2[1] = 0
else
    void* rax_2 = sub_140d21950(rbx, sub_140e28000())
    int64_t r8_1 = *rax_2
    void var_18
    int64_t* rax_3 = (*(r8_1 + 0x30))(rax_2, &var_18, r8_1)
    *arg2 = *rax_3
    void* rcx_3 = rax_3[1]
    arg2[1] = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t rsi_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_10 + 8))(var_10, zx.q(rsi_1))

return arg2
