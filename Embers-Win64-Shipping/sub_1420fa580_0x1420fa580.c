// 函数: sub_1420fa580
// 地址: 0x1420fa580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg1 + 0x150))()

if (rax_1 == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t var_48 = 0
    int64_t var_40_1 = 0
    int64_t* rax_2 = sub_142168400()
    
    if ((*(*rax_2 + 0x2b8))(rax_2, rax_1, zx.q(arg1[0x17].d), &var_48, var_48, var_40_1) == 0)
        void** var_38
        sub_1420fb380(arg1, &var_38)
        int64_t* var_30
        int64_t* var_28
        int64_t var_20
        
        if (var_30 == 0)
        label_1420fa68e:
            
            if (var_20 != 0)
                sub_140a74f90(var_20)
            
            if (var_28 != 0)
                var_28[1].d -= 1
                
                if (var_28[1].d == 1)
                    (**var_28)(var_28)
                    int32_t temp1_1 = *(var_28 + 0xc)
                    *(var_28 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*var_28 + 8))(var_28, 1)
            
            int64_t rcx_11 = var_48
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            *arg2 = 0
            arg2[1] = 0
        else
            if ((*(*var_30 + 0x28))(var_30) == 0)
                goto label_1420fa68e
            
            int64_t* rax_9 = sub_142168400()
            (*(*rax_9 + 0x2b0))(rax_9, arg2, rax_1, var_30)
            
            if (var_20 != 0)
                sub_140a74f90(var_20)
            
            if (var_28 != 0)
                var_28[1].d -= 1
                
                if (var_28[1].d == 1)
                    (**var_28)(var_28)
                    int32_t temp3_1 = *(var_28 + 0xc)
                    *(var_28 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_28 + 8))(var_28, 1)
            
            int64_t rcx_7 = var_48
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
    else
        *arg2 = var_48
        arg2[1].d = var_40_1.d
        *(arg2 + 0xc) = var_40_1:4.d

return arg2
