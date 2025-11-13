// 函数: sub_1405aafc0
// 地址: 0x1405aafc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
arg1[0x44].b = 1
*arg1 = &data_142d44df0
arg1[0x45] = 0
arg1[0x46] = 0
int32_t rax = arg1[1].d
*(arg1 + 0x32) |= 2

if (((rax u>> 4).b & 1) == 0)
    void*** arg_8 = arg1
    void*** var_18
    void**** rax_2 = sub_1405a9d10(&var_18, &arg_8)
    int64_t* rdx_2 = rax_2[1]
    void*** r8_1 = *rax_2
    void*** var_28 = r8_1
    int64_t* var_20 = rdx_2
    
    if (rdx_2 != 0)
        rdx_2[1].d += 1
        rdx_2 = var_20
    
    if (&arg1[0x45] != &var_28)
        arg1[0x45] = r8_1
        var_28 = nullptr
        sub_1405aeff0(&arg1[0x46], &var_20)
        rdx_2 = var_20
    
    if (rdx_2 != 0)
        rdx_2[1].d -= 1
        
        if (rdx_2[1].d == 1)
            int64_t* rbx_1 = var_20
            (**rbx_1)(rbx_1, rdx_2)
            int32_t rax_5 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_5 == 1)
                int64_t* rcx_3 = var_20
                (*(*rcx_3 + 8))(rcx_3, 1)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t rsi_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_10 + 8))(var_10, zx.q(rsi_1))

return arg1
