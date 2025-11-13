// 函数: sub_1427a7370
// 地址: 0x1427a7370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) != 2)
    sub_14279c150(arg2)
else
    void* rax_1 = *(arg1 + 0x50)
    void* rcx = arg1 + 0x60
    
    if (rax_1 != 0)
        rcx = rax_1
    
    void var_28
    int64_t* rax_4 = (*(arg1 + 0x40))(&var_28, (*(*rcx + 8))(rcx), arg3)
    *arg2 = *rax_4
    arg2[1] = rax_4[1]
    arg2[2] = rax_4[2]
    rax_4[2] = 0
    rax_4[1] = 0
    arg2[3].b = rax_4[3].b
    *(arg2 + 0x19) = *(rax_4 + 0x19)
    *(arg2 + 0x1a) = *(rax_4 + 0x1a)
    int64_t* var_18
    
    if (var_18 != 0)
        var_18[1].d -= 1
        
        if (var_18[1].d == 1)
            (**var_18)(var_18)
            int32_t temp1_1 = *(var_18 + 0xc)
            *(var_18 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_18 + 8))(var_18, 1)

return arg2
