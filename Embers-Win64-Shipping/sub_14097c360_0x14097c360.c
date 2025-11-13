// 函数: sub_14097c360
// 地址: 0x14097c360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x70) = 1
int32_t r13 = 0
void* const rax_1

if (arg2 == 0)
    rax_1 = nullptr
else
    rax_1 = (*(*arg2 + 0x150))(arg2)

sub_140d3a3a0(arg1 + 0x74, rax_1)
int32_t result

if (arg2 == 0 || arg2[0x45] == 0)
    int64_t var_a0_1 = 0
    r13 = 4
    result = sub_140d23f50(u"UInAppPurchaseCallbackProxy::Trigger - Invalid player state", 3)
else
    int64_t arg_8 = 0
    void var_68
    int64_t* rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_140b58170(&var_68, "OnlineSubsystem", 1)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, *rax_2, zmm1_1) == 0)
    label_14097c74c:
        int64_t var_a8_1 = 0
        r13 = 4
        result = sub_140d23f50(
            UInAppPurchaseCallbackProxy::Trigger - Invalid or uninitialized OnlineSubsystem", 3)
    else
        void var_60
        int64_t rbx_2 = *sub_140b58170(&var_60, "OnlineSubsystem", 1)
        j_sub_140b3db50()
        int64_t* rax_5 = sub_140b3da90(&data_143de7d78, rbx_2)
        int64_t r8 = *rax_5
        
        if ((*(r8 + 0x70))(rax_5, 0, r8) == 0)
            goto label_14097c74c
        
        int64_t arg_10 = 0
        int64_t* rax_7 = sub_14093f850(&arg_10)
        
        if (rax_7 == 0)
            goto label_14097c74c
        
        int64_t r8_1 = *rax_7
        int64_t* var_98
        (*(r8_1 + 0x90))(rax_7, &var_98, r8_1)
        
        if (var_98 == 0)
            int64_t arg_20 = 0
            r13 = 5
            result = sub_140d23f50(UInAppPurchaseCallbackProxy::Trigger - In-App Purchases are not "
            "supported by Online Subsystem", 3)
        else
            *(arg1 + 0x70) = 0
            void*** rax_8 = sub_140a84c80(0, 0x30, 0)
            void*** var_78 = rax_8
            
            if (rax_8 != 0)
                *rax_8 = &data_142e33718
                sub_140d3a3a0(&rax_8[1], arg1)
                rax_8[2] = sub_14096cca0
                rax_8[4] = sub_140a387b0()
                *rax_8 = &data_142e33770
            
            if (&var_78 != arg1 + 0x48)
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
                var_78 = rax_14
                
                if (rax_14 != 0)
                    sub_140a74f90(rax_14)
            
            int64_t* rcx_14 = var_98
            void var_58
            *(arg1 + 0x58) = *(*(*rcx_14 + 0x40))(rcx_14, &var_58, arg1 + 0x48)
            int32_t* rax_17 = j_sub_140a82f30(0xb0)
            int32_t* rbx_4 = rax_17
            
            if (rax_17 == 0)
                rbx_4 = nullptr
            else
                *rax_17 = 0
                rax_17[1].b = 0
                __builtin_memset(&rax_17[2], 0, 0x50)
                __builtin_memset(&rax_17[0x18], 0, 0x50)
            
            void*** rax_18 = j_sub_140a82f30(0x18)
            void*** rdi_2 = rax_18
            
            if (rax_18 == 0)
                rdi_2 = nullptr
            else
                rax_18[1].d = 1
                *(rax_18 + 0xc) = 1
                *rdi_2 = &data_142e348e8
                rdi_2[2] = rbx_4
            
            int32_t* var_b8 = rbx_4
            void*** var_b0 = rdi_2
            
            if (arg1 + 0x60 != &var_b8)
                *(arg1 + 0x60) = rbx_4
                var_b8 = nullptr
                sub_1405aeff0(arg1 + 0x68, &var_b0)
                rdi_2 = var_b0
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t rax_21 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rax_21 == 1)
                        (*rdi_2)[1](rdi_2, 1)
            
            int64_t var_88 = *(arg1 + 0x60)
            int64_t* rax_24 = *(arg1 + 0x68)
            
            if (rax_24 != 0)
                rax_24[1].d += 1
            
            int64_t* rcx_19 = var_98
            result = (*(*rcx_19 + 0x38))(rcx_19, arg3, &var_88)
            
            if (rax_24 != 0)
                result = rax_24[1].d
                rax_24[1].d -= 1
                
                if (result == 1)
                    (**rax_24)(rax_24)
                    result = *(rax_24 + 0xc)
                    *(rax_24 + 0xc) -= 1
                    
                    if (result == 1)
                        result = (*(*rax_24 + 8))(rax_24, 1)
        
        int64_t* var_90
        
        if (var_90 != 0)
            result = var_90[1].d
            var_90[1].d -= 1
            
            if (result == 1)
                result = (**var_90)(var_90)
                int32_t rsi_1 = *(var_90 + 0xc)
                *(var_90 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    result = (*(*var_90 + 8))(var_90, zx.q(rsi_1))

if (*(arg1 + 0x70) != 0 && arg2 != 0)
    return sub_14096cca0(arg1, r13)

return result
