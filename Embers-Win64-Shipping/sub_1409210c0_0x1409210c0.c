// 函数: sub_1409210c0
// 地址: 0x1409210c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg3[1].d
void* var_a8 = arg1
int64_t* var_a0 = arg4
int32_t result

if (rax == 0)
    int64_t var_118 = 0
    int32_t var_110_1 = 0
    sub_1405947f0(&var_118, rax + 0x4f)
    int32_t rax_1 = var_110_1 + 0x4f
    var_110_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_118)
    
    UnDecorator::getReferenceType(var_118, 
        FOnlinePurchaseNull::Checkout failed, there were no entries passed to purchase", 0x9e)
    result = sub_14091d040(&var_a8, &var_118)
    int64_t rcx_4 = var_118
    
    if (rcx_4 != 0)
        return sub_140a74f90(rcx_4)
else if (rax == 1)
    void* rbx_1 = *arg3
    
    if (*(rbx_1 + 0x20) != 1)
        int64_t var_f8 = 0
        int32_t var_f0_1 = 0
        sub_1405947f0(&var_f8, 0x67)
        int32_t rax_5 = var_f0_1 + 0x67
        var_f0_1 = rax_5
        
        if (rax_5 s> 0)
            sub_140594770(&var_f8)
        
        UnDecorator::getReferenceType(var_f8, 
            FOnlinePurchaseNull::Checkout failed, purchase quantity not set to one. We currently only "
        "support one.", 0xce)
        result = sub_14091d040(&var_a8, &var_f8)
        int64_t rcx_14 = var_f8
        
        if (rcx_14 != 0)
            return sub_140a74f90(rcx_14)
    else if (*(rbx_1 + 0x18) s> 1)
        int64_t* rcx_20 = *(arg1 + 0x30)
        int64_t* var_38
        (*(*rcx_20 + 0x98))(rcx_20, &var_38)
        int64_t* rcx_21 = var_38
        int64_t var_98
        (*(*rcx_21 + 0x50))(rcx_21, &var_98, rbx_1 + 0x10)
        int64_t* var_90
        
        if (var_98 == 0)
            int64_t var_d8 = 0
            int32_t var_d0_1 = 0
            sub_1405947f0(&var_d8, 0x4a)
            int32_t rax_11 = var_d0_1 + 0x4a
            var_d0_1 = rax_11
            
            if (rax_11 s> 0)
                sub_140594770(&var_d8)
            
            UnDecorator::getReferenceType(var_d8, 
                FOnlinePurchaseNull::Checkout failed, Could not find corresponding offer.", 0x94)
            result = sub_14091d040(&var_a8, &var_d8)
            int64_t rcx_26 = var_d8
            
            if (rcx_26 != 0)
                result = sub_140a74f90(rcx_26)
        else if (*(arg1 + 0x98) == 0)
            if (arg4 != arg1 + 0x88)
                if (*(arg1 + 0x98) != 0)
                    *(arg1 + 0x98) = 0
                    sub_140745b20(arg1 + 0x88)
                
                *(arg1 + 0x88) = 0
                *(arg1 + 0x90) = 0
                
                if (arg4[1].d != 0)
                    int64_t* rcx_33 = *arg4
                    
                    if (rcx_33 != 0)
                        (*(*rcx_33 + 0x40))(rcx_33, arg1 + 0x88)
                
                *(arg1 + 0x98) = 1
            
            int64_t* rdi_2 = *(arg1 + 0x28)
            int64_t r15_1 = 0
            
            if (rdi_2 != 0)
                int32_t rax_14 = 0
                bool z_1
                
                if (0 == rdi_2[1].d)
                    rdi_2[1].d = 0
                    z_1 = true
                else
                    rax_14 = rdi_2[1].d
                    z_1 = false
                
                if (z_1)
                label_140921489:
                    rdi_2 = nullptr
                else
                    while (true)
                        bool z_2
                        
                        if (rax_14 == rdi_2[1].d)
                            rdi_2[1].d = rax_14 + 1
                            z_2 = true
                        else
                            rdi_2[1].d
                            z_2 = false
                        
                        if (z_2)
                            if (rdi_2 != 0)
                                r15_1 = *(arg1 + 0x20)
                                *(rdi_2 + 0xc) += 1
                                rdi_2[1].d -= 1
                                
                                if (rdi_2[1].d == 1)
                                    (**rdi_2)(rdi_2)
                                    int32_t rax_18 = *(rdi_2 + 0xc)
                                    *(rdi_2 + 0xc) -= 1
                                    
                                    if (rax_18 == 1)
                                        (*(*rdi_2 + 8))(rdi_2, 1)
                            
                            break
                        
                        rax_14 = 0
                        bool z_3
                        
                        if (0 == rdi_2[1].d)
                            rdi_2[1].d = 0
                            z_3 = true
                        else
                            rax_14 = rdi_2[1].d
                            z_3 = false
                        
                        if (z_3)
                            goto label_140921489
            
            void** const var_88 = &data_142e1f860
            int128_t var_80_1 = zx.o(0)
            void var_70
            sub_140596d10(&var_70, arg2 + 0x18)
            int64_t rax_20 = *(arg2 + 0x28)
            int64_t rax_21 = var_98
            var_88 = &data_142e1f860
            
            if (var_90 != 0)
                var_90[1].d += 1
            
            if (rdi_2 != 0)
                *(rdi_2 + 0xc) += 1
            
            void* r15_2 = *(arg1 + 0x30)
            void*** var_b8 = nullptr
            void*** rax_23 = sub_140a84c80(0, 0x70, 0)
            var_b8 = rax_23
            int32_t var_b0_1 = 7
            
            if (rax_23 != 0)
                *rax_23 = &data_142e219d0
                rax_23[2] = 0
                rax_23[3] = 0
                rax_23[1] = &data_142e1f860
                sub_140596d10(&rax_23[4], &var_70)
                rax_23[6] = rax_20
                rax_23[1] = &data_142e1f860
                rax_23[7] = rax_21
                rax_23[8] = var_90
                rax_23[9] = r15_1
                rax_23[0xa] = rdi_2
                int64_t var_58_2
                __builtin_memset(&var_58_2, 0, 0x20)
                rax_23[0xc] = sub_140a387b0()
                *rax_23 = &data_142e21a28
            
            sub_14093f370(r15_2, &var_b8)
            void*** rax_31
            
            if (var_b0_1 == 0)
                rax_31 = var_b8
            label_14092160d:
                
                if (rax_31 != 0)
                    sub_140a74f90(rax_31)
            else
                void*** rcx_40 = var_b8
                
                if (rcx_40 != 0)
                    (*rcx_40)[7](rcx_40, 0)
                    rax_31 = var_b8
                    
                    if (rax_31 != 0)
                        rax_31 = sub_140a84c80(rax_31, 0, 0)
                        var_b8 = rax_31
                    
                    int32_t var_b0_2 = 0
                    goto label_14092160d
            result = sub_14091a610(&var_88)
            
            if (rdi_2 != 0)
                result = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rdi_2 + 8))(rdi_2, 1)
        else
            int64_t var_c8 = 0
            int32_t var_c0_1 = 0
            sub_1405947f0(&var_c8, 0x4e)
            int32_t rax_12 = var_c0_1 + 0x4e
            var_c0_1 = rax_12
            
            if (rax_12 s> 0)
                sub_140594770(&var_c8)
            
            UnDecorator::getReferenceType(var_c8, 
                FOnlinePurchaseNull::Checkout failed, there was another purchase in progress.", 0x9c)
            result = sub_14091d040(&var_a8, &var_c8)
            int64_t rcx_31 = var_c8
            
            if (rcx_31 != 0)
                result = sub_140a74f90(rcx_31)
        
        if (var_90 != 0)
            var_90[1].d -= 1
            
            if (var_90[1].d == 1)
                result = (**var_90)(var_90)
                int32_t temp2_1 = *(var_90 + 0xc)
                *(var_90 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*var_90 + 8))(var_90, 1)
        
        int64_t* var_30
        
        if (var_30 != 0)
            result = var_30[1].d
            var_30[1].d -= 1
            
            if (result == 1)
                result = (**var_30)(var_30)
                int32_t rsi_1 = *(var_30 + 0xc)
                *(var_30 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    return (*(*var_30 + 8))(var_30, zx.q(rsi_1))
    else
        int64_t var_e8 = 0
        int32_t var_e0_1 = 0
        sub_1405947f0(&var_e8, 0x38)
        int32_t rax_7 = var_e0_1 + 0x38
        var_e0_1 = rax_7
        
        if (rax_7 s> 0)
            sub_140594770(&var_e8)
        
        UnDecorator::getReferenceType(var_e8, 
            FOnlinePurchaseNull::Checkout failed, OfferId is blank.", 0x70)
        result = sub_14091d040(&var_a8, &var_e8)
        int64_t rcx_19 = var_e8
        
        if (rcx_19 != 0)
            return sub_140a74f90(rcx_19)
else
    int64_t var_108 = 0
    int32_t var_100_1 = 0
    sub_1405947f0(&var_108, 0x78)
    int32_t rax_3 = var_100_1 + 0x78
    var_100_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_108)
    
    UnDecorator::getReferenceType(var_108, 
        FOnlinePurchaseNull::Checkout failed, there were more than one entry passed to purchase. We "
    "currently only support one.", 0xf0)
    result = sub_14091d040(&var_a8, &var_108)
    int64_t rcx_9 = var_108
    
    if (rcx_9 != 0)
        return sub_140a74f90(rcx_9)

return result
