// 函数: sub_141ba2d60
// 地址: 0x141ba2d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    int64_t var_38
    sub_141bab3c0(arg3, &var_38)
    int64_t* var_30
    
    if (var_38 == 0)
    label_141ba2e19:
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp3_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
    else
        int64_t var_28 = *arg4
        int64_t var_20_1 = arg4[1]
        void* rax_3 = arg4[2]
        void* var_18_1 = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        var_38.o = var_38.o
        
        if (var_30 != 0)
            var_30[1].d += 1
        
        sub_140e54f20(arg2, sub_140e0dfe0(arg2, &var_38, &var_28, arg5))
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp5_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
            
            goto label_141ba2e19

sub_140596b00(arg1, arg2)
int64_t* rbx_2 = arg4[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

return arg1
