// 函数: sub_14097bef0
// 地址: 0x14097bef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*(arg1 + 0x60) = 1
void* const rax_1

if (arg2 == 0)
    rax_1 = nullptr
else
    rax_1 = (*(*arg2 + 0x150))(arg2)

sub_140d3a3a0(arg1 + 0x64, rax_1)
uint64_t result

if (arg2 == 0 || arg2[0x45] == 0)
    int64_t var_d0_1 = 0
    result = sub_140d23f50(u"UInAppPurchaseCallbackProxy::Trigger - Invalid player state", 3)
else
    int64_t arg_8 = 0
    void var_a0
    int64_t* rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_140b58170(&var_a0, "OnlineSubsystem", 1)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, *rax_2, zmm1_1) == 0)
    label_14097c2ef:
        int64_t var_d8_1 = 0
        result = sub_140d23f50(
            UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem", 3)
    else
        void var_98
        int64_t rbx_2 = *sub_140b58170(&var_98, "OnlineSubsystem", 1)
        j_sub_140b3db50()
        int64_t* rax_5 = sub_140b3da90(&data_143de7d78, rbx_2)
        int64_t r8 = *rax_5
        
        if ((*(r8 + 0x70))(rax_5, 0, r8) == 0)
            goto label_14097c2ef
        
        int64_t arg_10 = 0
        int64_t* rax_7 = sub_14093f850(&arg_10)
        
        if (rax_7 == 0)
            goto label_14097c2ef
        
        int64_t r8_1 = *rax_7
        void var_90
        int64_t* rax_8 = (*(r8_1 + 0xa0))(rax_7, &var_90, r8_1)
        
        if (arg1 + 0x90 != rax_8)
            *(arg1 + 0x90) = *rax_8
            *rax_8 = 0
            sub_1405aeff0(arg1 + 0x98, &rax_8[1])
        
        int64_t* var_88
        
        if (var_88 != 0)
            var_88[1].d -= 1
            
            if (var_88[1].d == 1)
                (**var_88)(var_88)
                int32_t r14_1 = *(var_88 + 0xc)
                *(var_88 + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*var_88 + 8))(var_88, zx.q(r14_1))
        
        if (*(arg1 + 0x90) == 0)
            int64_t arg_20 = 0
            result = sub_140d23f50(UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not "
            "supported by Online Subsystem", 3)
        else
            *(arg1 + 0x60) = 0
            void*** rax_12 = sub_140a84c80(0, 0x30, 0)
            
            if (rax_12 != 0)
                *rax_12 = &data_142e33878
                sub_140d3a3a0(&rax_12[1], arg1)
                rax_12[2] = sub_14096aff0
                rax_12[4] = sub_140a387b0()
                *rax_12 = &data_142e338d0
            
            void var_58
            
            if (&var_58 != arg1 + 0x48)
                if (rax_12 != 0)
                    (*rax_12)[8](rax_12, arg1 + 0x48)
                else if (*(arg1 + 0x50) != 0)
                    int64_t* rcx_13 = *(arg1 + 0x48)
                    
                    if (rcx_13 != 0)
                        (*(*rcx_13 + 0x38))(rcx_13, 0)
                        int64_t rcx_14 = *(arg1 + 0x48)
                        
                        if (rcx_14 != 0)
                            *(arg1 + 0x48) = sub_140a84c80(rcx_14, 0, 0)
                        
                        *(arg1 + 0x50) = 0
            
            if (rax_12 != 0)
                (*rax_12)[7](rax_12, 0)
                int64_t rax_18 = sub_140a84c80(rax_12, 0, 0)
                
                if (rax_18 != 0)
                    sub_140a74f90(rax_18)
            
            int64_t var_e8 = 0
            int32_t var_e0_1 = 0
            int64_t var_c8_1 = 0
            int64_t var_c0_1 = 0
            int64_t var_b8
            sub_140596d10(&var_b8, arg3)
            int64_t rbx_5 = sx.q(var_e0_1)
            int32_t rax_19 = (rbx_5 + 1).d
            var_e0_1 = rax_19
            
            if (rax_19 s> 0)
                sub_1405c4ec0(&var_e8)
            
            int64_t* rdx_11 = var_e8 + rbx_5 * 0x28
            *rdx_11 = var_c8_1
            rdx_11[1].d = var_c0_1.d
            *(rdx_11 + 0xc) = var_c0_1:4.d
            rdx_11[2] = var_b8
            int32_t var_b0
            rdx_11[3].d = var_b0
            int32_t var_ac
            *(rdx_11 + 0x1c) = var_ac
            rdx_11[4].d = 1
            void** var_80
            void* rcx_23 = sub_1420fc400(sub_14226dd50(arg2), &var_80)[1]
            int64_t* rbx_6 = *(rcx_23 + 0x10)
            
            if (rbx_6 != 0)
                int32_t rax_29 = rbx_6[1].d
                
                if (rax_29 != 0)
                    rbx_6[1].d = rax_29 + 1
                    rax_29.b = 1
                
                if (rax_29.b == 0)
                    rbx_6 = nullptr
                
                if (rbx_6 != 0)
                    rdi = *(rcx_23 + 8)
                    rbx_6[1].d += 1
            
            void var_48
            int64_t rax_31
            int64_t* rcx_25
            
            if (arg1 + 0x80 != &var_48)
                *(arg1 + 0x80) = rdi
                int64_t* rdi_1 = *(arg1 + 0x88)
                
                if (rbx_6 == rdi_1)
                    goto label_14097c22c
                
                *(arg1 + 0x88) = rbx_6
                
                if (rdi_1 == 0)
                    goto label_14097c253
                
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d != 1)
                    goto label_14097c253
                
                (**rdi_1)(rdi_1)
                int32_t temp6_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp6_1 != 1)
                    goto label_14097c253
                
                rax_31 = *rdi_1
                rcx_25 = rdi_1
                goto label_14097c250
            
        label_14097c22c:
            
            if (rbx_6 != 0)
                rbx_6[1].d -= 1
                
                if (rbx_6[1].d != 1)
                    goto label_14097c253
                
                (**rbx_6)(rbx_6)
                int32_t temp2_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp2_1 != 1)
                    goto label_14097c253
                
                rax_31 = *rbx_6
                rcx_25 = rbx_6
            label_14097c250:
                (*(rax_31 + 8))(rcx_25, 1)
            label_14097c253:
                
                if (rbx_6 != 0)
                    rbx_6[1].d -= 1
                    
                    if (rbx_6[1].d == 1)
                        (**rbx_6)(rbx_6)
                        int32_t temp8_1 = *(rbx_6 + 0xc)
                        *(rbx_6 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rbx_6 + 8))(rbx_6, 1)
            
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
            
            int64_t* rcx_32 = *(arg1 + 0x90)
            (*(*rcx_32 + 0x10))(rcx_32, *(arg1 + 0x80), &var_e8, arg1 + 0x48)
            result = sub_1405ded70(&var_e8)

if (*(arg1 + 0x60) != 0 && arg2 != 0)
    return sub_14096e4f0(arg1)

return result
