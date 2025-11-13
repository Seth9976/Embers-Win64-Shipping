// 函数: sub_1405be050
// 地址: 0x1405be050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x500) == 0)
    void*** var_28
    
    if (*(arg1 + 0x2ad) == 0)
        void*** rax_8 = j_sub_140a82f30(0xb8)
        void*** rdi_2
        
        if (rax_8 == 0)
            rdi_2 = nullptr
        else
            rdi_2 = sub_1405ab3f0(rax_8, arg1)
        
        int64_t* rax_10 = j_sub_140a82f30(0x18)
        int64_t* rbx_3 = rax_10
        
        if (rax_10 == 0)
            rbx_3 = nullptr
        else
            rax_10[1].d = 1
            *(rax_10 + 0xc) = 1
            *rbx_3 = &data_142d42ea8
            rbx_3[2] = rdi_2
        
        var_28 = rdi_2
        int64_t* var_20_1 = rbx_3
        
        if (arg1 + 0x500 == &var_28)
        label_1405be20e:
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    int64_t rdx_3 = *rbx_3
                    (*rdx_3)(rbx_3, rdx_3)
                    int32_t temp7_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        int64_t r8_1 = *rbx_3
                        (*(r8_1 + 8))(rbx_3, 1, r8_1)
        else
            *(arg1 + 0x500) = rdi_2
            int64_t* rdi_3 = *(arg1 + 0x508)
            var_28 = nullptr
            
            if (rbx_3 == rdi_3)
                goto label_1405be20e
            
            int64_t* var_20_2 = nullptr
            *(arg1 + 0x508) = rbx_3
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t temp9_1 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
                
                rbx_3 = var_20_2
                goto label_1405be20e
    else
        int64_t* rax_1 = sub_1405be290(&var_28)
        int64_t* rcx_1 = rax_1[1]
        
        if (rcx_1 != 0)
            rcx_1[1].d += 1
        
        void var_18
        
        if (arg1 + 0x500 == &var_18)
        label_1405be0d7:
            
            if (rcx_1 != 0)
                rcx_1[1].d -= 1
                
                if (rcx_1[1].d == 1)
                    (**rcx_1)(rcx_1)
                    int32_t temp2_1 = *(rcx_1 + 0xc)
                    *(rcx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rcx_1 + 8))(rcx_1, 1)
        else
            *(arg1 + 0x500) = *rax_1
            int64_t* rdi_1 = *(arg1 + 0x508)
            
            if (rcx_1 == rdi_1)
                goto label_1405be0d7
            
            *(arg1 + 0x508) = rcx_1
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp5_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp4_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)

return arg1 + 0x500
