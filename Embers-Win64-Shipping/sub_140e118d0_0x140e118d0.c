// 函数: sub_140e118d0
// 地址: 0x140e118d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2
char rax_1

if (rcx != 0)
    rax_1 = sub_140e1a1f0(rcx, arg3)

if (rcx == 0 || rax_1 == 0)
    *arg1 = 0
    arg1[1] = 0
else
    int64_t* rbx_1 = arg2[1]
    int64_t var_28 = *arg2
    int64_t* var_20_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void var_18
    int64_t* rax_3 = sub_140e11740(&var_18, &var_28)
    *arg1 = *rax_3
    void* rcx_3 = rax_3[1]
    arg1[1] = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp2_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return arg1
