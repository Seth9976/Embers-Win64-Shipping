// 函数: sub_140958f20
// 地址: 0x140958f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0

if ((*(*arg1 + 0x260))(arg1, arg4) != 0)
    int64_t* var_48
    sub_140961370(&var_48, 0, arg4)
    int64_t* rcx_1 = var_48
    
    if (rcx_1 != 0)
        void var_38
        int64_t* rax_3 = (*(*rcx_1 + 0x100))(rcx_1, &var_38, arg3)
        
        if (arg2 != rax_3)
            *arg2 = *rax_3
            *rax_3 = 0
            int64_t rcx_3 = rax_3[1]
            int64_t* rdi_1 = arg2[1]
            
            if (rcx_3 != rdi_1)
                rax_3[1] = 0
                arg2[1] = rcx_3
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t temp7_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* var_30
        
        if (var_30 != 0)
            var_30[1].d -= 1
            
            if (var_30[1].d == 1)
                (**var_30)(var_30)
                int32_t temp3_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_30 + 8))(var_30, 1)
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t rbp_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*var_40 + 8))(var_40, zx.q(rbp_1))

if (*arg2 == 0)
    int64_t* rax_11 = sub_140963c50()
    
    if (rax_11 != 0)
        void var_28
        int64_t* rax_12 = (*(*rax_11 + 0x18))(rax_11, &var_28, arg3, arg4)
        
        if (arg2 != rax_12)
            *arg2 = *rax_12
            *rax_12 = 0
            int64_t rcx_13 = rax_12[1]
            int64_t* rbx_1 = arg2[1]
            
            if (rcx_13 != rbx_1)
                rax_12[1] = 0
                arg2[1] = rcx_13
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp8_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp5_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)

return arg2
