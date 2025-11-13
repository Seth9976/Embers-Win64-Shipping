// 函数: sub_140f0a570
// 地址: 0x140f0a570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1

if (*(arg1 + 0x4b8) != 0)
    rax_1 = *(arg1 + 0x4c0)

if (*(arg1 + 0x4b8) == 0 || rax_1 == 0 || *(rax_1 + 8) s<= 0)
    int32_t var_30_1 = 0
    int64_t* (* var_38)(void* arg1) = sub_140f19d90
    var_38.o = var_38.o
    void var_28
    void var_18
    int64_t* rax_3 = sub_140e20c50(arg1, &var_28, 0x3f400000, sub_140dd1ff0(&var_18, arg1, &var_38))
    *(arg1 + 0x4b8) = *rax_3
    void* rbx_1 = rax_3[1]
    int64_t* rcx_3 = *(arg1 + 0x4c0)
    
    if (rbx_1 != rcx_3)
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
            rcx_3 = *(arg1 + 0x4c0)
        
        if (rcx_3 != 0)
            int32_t temp2_1 = *(rcx_3 + 0xc)
            *(rcx_3 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_3 + 8))(rcx_3, 1)
        
        *(arg1 + 0x4c0) = rbx_1
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_20 + 8))(var_20, 1)

return sub_140594850() __tailcall
