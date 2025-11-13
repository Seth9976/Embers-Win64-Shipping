// 函数: sub_14093fbe0
// 地址: 0x14093fbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 == 0)
label_14093fcef:
    *arg1 = nullptr
    arg1[1] = 0
else
    int32_t rdi_1 = 0
    
    while (true)
        int64_t* rcx = *arg2
        int64_t* var_28
        (*(*rcx + 0xf0))(rcx, &var_28, zx.q(rdi_1))
        int64_t* rcx_1 = var_28
        int64_t* var_20
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
            int64_t* rcx_2 = *arg2
            
            if ((*(*rcx_2 + 0x110))(rcx_2, var_28) == 2)
                *arg1 = var_28
                arg1[1] = var_20
                int64_t var_20_1 = 0
                var_28 = nullptr
                break
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp2_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
        
        rdi_1 += 1
        
        if (rdi_1 s>= 4)
            int32_t rdi_2 = 0
            
            while (true)
                int64_t* rcx_5 = *arg2
                int64_t* var_18
                (*(*rcx_5 + 0xf0))(rcx_5, &var_18, zx.q(rdi_2))
                int64_t* rcx_6 = var_18
                int64_t* var_10
                
                if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
                    *arg1 = var_18
                    arg1[1] = var_10
                    int64_t var_10_1 = 0
                    var_18 = nullptr
                    break
                
                if (var_10 != 0)
                    var_10[1].d -= 1
                    
                    if (var_10[1].d == 1)
                        (**var_10)(var_10)
                        int32_t temp4_1 = *(var_10 + 0xc)
                        *(var_10 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*var_10 + 8))(var_10, 1)
                
                rdi_2 += 1
                
                if (rdi_2 s>= 4)
                    goto label_14093fcef
            
            break

int64_t* rdi_3 = arg2[1]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rbx_3 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rbx_3 == 1)
            (*(*rdi_3 + 8))(rdi_3, zx.q(rbx_3))

return arg1
