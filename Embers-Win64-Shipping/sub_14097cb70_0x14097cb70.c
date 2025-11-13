// 函数: sub_14097cb70
// 地址: 0x14097cb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x70) = 1
void* const rax_1

if (arg3 == 0)
    rax_1 = nullptr
else
    rax_1 = (*(*arg3 + 0x150))(arg3)

sub_140d3a3a0(arg1 + 0x74, rax_1)
int32_t result

if (arg3 == 0 || arg3[0x45] == 0)
    int64_t var_90_1 = 0
    result = sub_140d23f50(u"UInAppPurchaseRestoreCallbackProxy::Trigger - Invalid player state", 3)
else
    int64_t arg_8 = 0
    void var_58
    int64_t* rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_140b58170(&var_58, "OnlineSubsystem", 1)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, *rax_2, zmm1_1) == 0)
    label_14097cef9:
        int64_t var_98_1 = 0
        result = sub_140d23f50(UInAppPurchaseRestoreCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem", 
            3)
    else
        void var_50
        int64_t rbx_2 = *sub_140b58170(&var_50, "OnlineSubsystem", 1)
        j_sub_140b3db50()
        int64_t* rax_5 = sub_140b3da90(&data_143de7d78, rbx_2)
        int64_t r8 = *rax_5
        
        if ((*(r8 + 0x70))(rax_5, 0, r8) == 0)
            goto label_14097cef9
        
        int64_t arg_18 = 0
        int64_t* rax_7 = sub_14093f850(&arg_18)
        
        if (rax_7 == 0)
            goto label_14097cef9
        
        int64_t r8_1 = *rax_7
        int64_t* var_88
        (*(r8_1 + 0x90))(rax_7, &var_88, r8_1)
        
        if (var_88 == 0)
            int64_t arg_20 = 0
            result = sub_140d23f50(UInAppPurchaseRestoreCallbackProxy::Trigger - In-App Purchases are not supported by Onl", 
                3)
        else
            *(arg1 + 0x70) = 0
            void*** rax_8 = sub_140a84c80(0, 0x30, 0)
            void*** var_68 = rax_8
            
            if (rax_8 != 0)
                *rax_8 = &data_142e33718
                sub_140d3a3a0(&rax_8[1], arg1)
                rax_8[2] = sub_14096d870
                rax_8[4] = sub_140a387b0()
                *rax_8 = &data_142e33770
            
            if (&var_68 != arg1 + 0x48)
                if (rax_8 != 0)
                    (*rax_8)[8](rax_8, arg1 + 0x48)
                else if (*(arg1 + 0x50) != 0)
                    int64_t* rcx_9 = *(arg1 + 0x48)
                    
                    if (rcx_9 != 0)
                        (*(*rcx_9 + 0x38))(rcx_9, 0)
                        int64_t rcx_10 = *(arg1 + 0x48)
                        
                        if (rcx_10 != 0)
                            *(arg1 + 0x48) = sub_140a84c80(rcx_10, 0, 0)
                        
                        *(arg1 + 0x50) = 0
            
            if (rax_8 != 0)
                (*rax_8)[7](rax_8, 0)
                void*** rax_14 = sub_140a84c80(rax_8, 0, 0)
                var_68 = rax_14
                
                if (rax_14 != 0)
                    sub_140a74f90(rax_14)
            
            int64_t* rcx_14 = var_88
            void var_48
            *(arg1 + 0x58) = *(*(*rcx_14 + 0x68))(rcx_14, &var_48, arg1 + 0x48)
            int32_t* rax_17 = j_sub_140a82f30(0x18)
            int32_t* rdi_2 = rax_17
            
            if (rax_17 == 0)
                rdi_2 = nullptr
            else
                *rax_17 = 0
                *(rax_17 + 8) = 0
                *(rax_17 + 0x10) = 0
            
            void*** rax_18 = j_sub_140a82f30(0x18)
            void*** rbx_4 = rax_18
            
            if (rax_18 == 0)
                rbx_4 = nullptr
            else
                rax_18[1].d = 1
                *(rax_18 + 0xc) = 1
                *rbx_4 = &data_142e348c8
                rbx_4[2] = rdi_2
            
            int32_t* var_a8 = rdi_2
            void*** var_a0 = rbx_4
            
            if (arg1 + 0x60 != &var_a8)
                *(arg1 + 0x60) = rdi_2
                var_a8 = nullptr
                sub_1405aeff0(arg1 + 0x68, &var_a0)
                rbx_4 = var_a0
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t rax_21 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rax_21 == 1)
                        (*rbx_4)[1](rbx_4, 1)
            
            int64_t var_78 = *(arg1 + 0x60)
            int64_t* rax_24 = *(arg1 + 0x68)
            
            if (rax_24 != 0)
                rax_24[1].d += 1
            
            int64_t* rcx_19 = var_88
            result = (*(*rcx_19 + 0x60))(rcx_19, arg2, &var_78)
            
            if (rax_24 != 0)
                result = rax_24[1].d
                rax_24[1].d -= 1
                
                if (result == 1)
                    (**rax_24)(rax_24)
                    result = *(rax_24 + 0xc)
                    *(rax_24 + 0xc) -= 1
                    
                    if (result == 1)
                        result = (*(*rax_24 + 8))(rax_24, 1)
        
        int64_t* var_80
        
        if (var_80 != 0)
            result = var_80[1].d
            var_80[1].d -= 1
            
            if (result == 1)
                result = (**var_80)(var_80)
                int32_t rsi_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    result = (*(*var_80 + 8))(var_80, zx.q(rsi_1))

if (*(arg1 + 0x70) != 0 && arg3 != 0)
    return sub_14096d870(arg1, 2)

return result
