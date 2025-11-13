// 函数: sub_14097d260
// 地址: 0x14097d260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x60) = 1
void* const rax_1

if (arg2 == 0)
    rax_1 = nullptr
else
    rax_1 = (*(*arg2 + 0x150))(arg2)

sub_140d3a3a0(arg1 + 0x64, rax_1)
void*** result

if (arg2 == 0 || arg2[0x45] == 0)
    int64_t var_a8_1 = 0
    result = sub_140d23f50(u"UInAppPurchaseCallbackProxy::Trigger - Invalid player state", 3)
else
    int64_t arg_8 = 0
    void var_a0
    int64_t* rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_140b58170(&var_a0, "OnlineSubsystem", 1)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, *rax_2, zmm1_1) == 0)
    label_14097d5c6:
        int64_t arg_20 = 0
        result = sub_140d23f50(
            UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem", 3)
    else
        void var_98
        int64_t rbx_2 = *sub_140b58170(&var_98, "OnlineSubsystem", 1)
        j_sub_140b3db50()
        int64_t* rax_5 = sub_140b3da90(&data_143de7d78, rbx_2)
        int64_t r8_1 = *rax_5
        
        if ((*(r8_1 + 0x70))(rax_5, 0, r8_1) == 0)
            goto label_14097d5c6
        
        int64_t arg_10 = 0
        int64_t* rax_7 = sub_14093f850(&arg_10)
        
        if (rax_7 == 0)
            goto label_14097d5c6
        
        int64_t r8_2 = *rax_7
        void var_90
        int64_t* rax_8 = (*(r8_2 + 0xa0))(rax_7, &var_90, r8_2)
        
        if (arg1 + 0x90 != rax_8)
            *(arg1 + 0x90) = *rax_8
            *rax_8 = 0
            sub_1405aeff0(arg1 + 0x98, &rax_8[1])
        
        int64_t* var_88
        
        if (var_88 != 0)
            var_88[1].d -= 1
            
            if (var_88[1].d == 1)
                (**var_88)(var_88)
                int32_t rdi_1 = *(var_88 + 0xc)
                *(var_88 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_88 + 8))(var_88, zx.q(rdi_1))
        
        if (*(arg1 + 0x90) == 0)
            int64_t arg_18 = 0
            result = sub_140d23f50(UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not "
            "supported by Online Subsystem", 3)
        else
            int64_t rdx_8 = 0
            void** var_80
            void* rcx_13 = sub_1420fc400(sub_14226dd50(arg2), &var_80)[1]
            int64_t* rbx_4 = *(rcx_13 + 0x10)
            
            if (rbx_4 != 0)
                int32_t rax_14 = rbx_4[1].d
                
                if (rax_14 != 0)
                    rbx_4[1].d = rax_14 + 1
                    rax_14.b = 1
                
                if (rax_14.b == 0)
                    rbx_4 = nullptr
                
                if (rbx_4 != 0)
                    rdx_8 = *(rcx_13 + 8)
                    rbx_4[1].d += 1
            
            void var_58
            int64_t rax_16
            int64_t* rcx_15
            
            if (arg1 + 0x80 != &var_58)
                *(arg1 + 0x80) = rdx_8
                int64_t* rdi_2 = *(arg1 + 0x88)
                
                if (rbx_4 == rdi_2)
                    goto label_14097d462
                
                *(arg1 + 0x88) = rbx_4
                
                if (rdi_2 == 0)
                    goto label_14097d489
                
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d != 1)
                    goto label_14097d489
                
                (**rdi_2)(rdi_2)
                int32_t temp6_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp6_1 != 1)
                    goto label_14097d489
                
                rax_16 = *rdi_2
                rcx_15 = rdi_2
                goto label_14097d486
            
        label_14097d462:
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d != 1)
                    goto label_14097d489
                
                (**rbx_4)(rbx_4)
                int32_t temp2_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp2_1 != 1)
                    goto label_14097d489
                
                rax_16 = *rbx_4
                rcx_15 = rbx_4
            label_14097d486:
                (*(rax_16 + 8))(rcx_15, 1)
            label_14097d489:
                
                if (rbx_4 != 0)
                    rbx_4[1].d -= 1
                    
                    if (rbx_4[1].d == 1)
                        (**rbx_4)(rbx_4)
                        int32_t temp8_1 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_4 + 8))(rbx_4, 1)
            
            var_80 = &data_142e259e0
            int64_t var_68
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            int64_t* var_70
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    int32_t temp7_1 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*var_70 + 8))(var_70, 1)
            
            int64_t* rdi_3 = *(arg1 + 0x90)
            void*** result_1 = nullptr
            void*** result_2 = sub_140a84c80(0, 0x30, 0)
            result_1 = result_2
            int32_t var_b0_1 = 3
            
            if (result_2 != 0)
                *result_2 = &data_142dc0378
                sub_140d3a3a0(&result_2[1], arg1)
                result_2[2] = sub_14096e650
                result_2[4] = sub_140a387b0()
                *result_2 = &data_142dc03d0
            
            result = (*(*rdi_3 + 0x28))(rdi_3, *(arg1 + 0x80), 0, &result_1)
            
            if (var_b0_1 == 0)
                result = result_1
            label_14097d5a7:
                
                if (result != 0)
                    result = sub_140a74f90(result)
            else
                void*** result_3 = result_1
                
                if (result_3 != 0)
                    (*result_3)[7](result_3, 0)
                    result = result_1
                    
                    if (result != 0)
                        result = sub_140a84c80(result, 0, 0)
                        result_1 = result
                    
                    int32_t var_b0_2 = 0
                    goto label_14097d5a7

if (*(arg1 + 0x60) != 0 && arg2 != 0)
    return sub_14096e4f0(arg1)

return result
