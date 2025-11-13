// 函数: sub_1420fc400
// 地址: 0x1420fc400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg1 + 0x150))()

if (rax_1 == 0)
    arg2[1] = 0
    arg2[2] = 0
    *arg2 = &data_142e259e0
    arg2[3] = 0
    arg2[4] = 0
else
    int64_t* rax_2 = sub_142168400()
    int64_t arg_8 = 0
    void var_18
    int64_t* rax_3 = (*(*rax_2 + 0x2a8))(rax_2, &var_18, rax_1, zx.q(arg1[0x17].d), 0)
    *arg2 = &data_142e25968
    arg2[1] = *rax_3
    void* rcx_2 = rax_3[1]
    arg2[2] = rcx_2
    
    if (rcx_2 != 0)
        *(rcx_2 + 8) += 1
    
    *arg2 = &data_142e259e0
    arg2[3] = 0
    arg2[4] = 0
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

return arg2
