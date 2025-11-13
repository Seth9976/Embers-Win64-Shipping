// 函数: sub_140e14d30
// 地址: 0x140e14d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) == 0)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 == 0)
        *arg2 = 0
        arg2[1] = 0
    else
        int32_t rcx = rbx_1[1].d
        
        if (rcx s<= 0)
            *arg2 = 0
            arg2[1] = 0
        else
            int64_t* rax_1 = rbx_1
            
            if (rbx_1 != 0)
                if (rcx == 0)
                    rbx_1 = nullptr
                    rax_1 = nullptr
                else
                    rbx_1[1].d = rcx + 1
                    rax_1 = rbx_1
            
            int64_t* rcx_1 = nullptr
            
            if (rax_1 != 0)
                rcx_1 = *(arg1 + 0x18)
            
            if (*(rcx_1 + 0x2a) == 4)
            label_140e14ed0:
                
                if (rbx_1 == 0)
                    *arg2 = 0
                    arg2[1] = 0
                else
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp2_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
                    
                    *arg2 = 0
                    arg2[1] = 0
            else
                int64_t* var_48
                (*(*rcx_1 + 0x1b8))(rcx_1, &var_48)
                int64_t* rcx_2 = var_48
                int64_t* var_40
                
                if (rcx_2 == 0)
                    if (var_40 != 0)
                        var_40[1].d -= 1
                        
                        if (var_40[1].d == 1)
                            (**var_40)(var_40)
                            int32_t temp4_1 = *(var_40 + 0xc)
                            *(var_40 + 0xc) -= 1
                            
                            if (temp4_1 == 1)
                                (*(*var_40 + 8))(var_40, 1)
                    
                    goto label_140e14ed0
                
                void var_38
                void var_28
                sub_140596d10(arg2, 
                    sub_140ac6680(sub_140e114f0(*(*(*rcx_2 + 8))(rcx_2, &var_38), &var_28, 0)))
                int64_t* var_20
                
                if (var_20 != 0)
                    var_20[1].d -= 1
                    
                    if (var_20[1].d == 1)
                        (**var_20)(var_20)
                        int32_t rbp_1 = *(var_20 + 0xc)
                        *(var_20 + 0xc) -= 1
                        
                        if (rbp_1 == 1)
                            (*(*var_20 + 8))(var_20, zx.q(rbp_1))
                
                int64_t* var_30
                
                if (var_30 != 0)
                    var_30[1].d -= 1
                    
                    if (var_30[1].d == 1)
                        (**var_30)(var_30)
                        int32_t temp7_1 = *(var_30 + 0xc)
                        *(var_30 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*var_30 + 8))(var_30, 1)
                
                if (var_40 != 0)
                    var_40[1].d -= 1
                    
                    if (var_40[1].d == 1)
                        (**var_40)(var_40)
                        int32_t temp9_1 = *(var_40 + 0xc)
                        *(var_40 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*var_40 + 8))(var_40, 1)
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp10_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
