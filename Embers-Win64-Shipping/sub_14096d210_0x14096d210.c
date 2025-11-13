// 函数: sub_14096d210
// 地址: 0x14096d210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
sub_140d23f50(u"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Start", 3)
*(arg1 + 0x50) = 0

if (arg2 != 0)
    int64_t var_b8_1 = 0
    sub_140d23f50(u"UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - WasSuccessful", 3)
    int64_t var_b0_1 = 0
    void var_58
    int64_t* rax_1
    int512_t zmm1_1
    rax_1, zmm1_1 = sub_140b58170(&var_58, "OnlineSubsystem", 1)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, *rax_1, zmm1_1) != 0)
        void var_50
        int64_t rbx_2 = *sub_140b58170(&var_50, "OnlineSubsystem", 1)
        j_sub_140b3db50()
        int64_t* rax_4 = sub_140b3da90(&data_143de7d78, rbx_2)
        int64_t r8_2 = *rax_4
        
        if ((*(r8_2 + 0x70))(rax_4, 0, r8_2) != 0)
            int64_t var_a8 = 0
            int64_t* rax_6 = sub_14093f850(&var_a8)
            
            if (rax_6 != 0)
                int64_t r8_3 = *rax_6
                int64_t* var_68
                (*(r8_3 + 0x98))(rax_6, &var_68, r8_3)
                
                if (var_68 != 0)
                    int64_t var_a0_1 = 0
                    sub_140d23f50(
                        UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Interface is g", 3)
                    void* var_c8 = nullptr
                    int32_t i_2 = 0
                    int64_t var_98_1 = 0
                    sub_140d23f50(UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Getting Cached Offers", 
                        3)
                    int64_t* rcx_5 = var_68
                    (*(*rcx_5 + 0x48))(rcx_5, &var_c8)
                    int64_t var_90_1 = 0
                    sub_140d23f50(UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - "
                    "Converting to proxy store offer", 3)
                    sub_1409581b0(arg1, &var_c8, arg1 + 0x58)
                    int64_t var_88_1 = 0
                    sub_140d23f50(UInAppPurchaseQueryCallbackProxy2::OnInAppPurchaseRead - Done", 3)
                    int32_t i_1 = i_2
                    *(arg1 + 0x50) = 1
                    
                    if (i_1 != 0)
                        int64_t* rdi_2 = var_c8 + 8
                        int32_t i
                        
                        do
                            int64_t* rbx_3 = *rdi_2
                            
                            if (rbx_3 != 0)
                                rbx_3[1].d -= 1
                                
                                if (rbx_3[1].d == 1)
                                    (**rbx_3)(rbx_3)
                                    int32_t temp3_1 = *(rbx_3 + 0xc)
                                    *(rbx_3 + 0xc) -= 1
                                    
                                    if (temp3_1 == 1)
                                        (*(*rbx_3 + 8))(rbx_3, 1)
                            
                            rdi_2 = &rdi_2[2]
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                    
                    void* rcx_9 = var_c8
                    
                    if (rcx_9 != 0)
                        sub_140a74f90(rcx_9)
                
                int64_t* var_60
                
                if (var_60 != 0)
                    var_60[1].d -= 1
                    
                    if (var_60[1].d == 1)
                        (**var_60)(var_60)
                        int32_t rax_12 = *(var_60 + 0xc)
                        *(var_60 + 0xc) -= 1
                        
                        if (rax_12 == 1)
                            (*(*var_60 + 8))(var_60, 1)

int64_t* result = sub_140d3c6e0(arg1 + 0x48)

if (result != 0)
    int64_t* rax_14 = sub_140a84c80(0, 0x20, 0)
    int64_t* var_78 = rax_14
    int64_t* rdi_3 = rax_14
    
    if (rax_14 != 0)
        rdi_3[1] = arg1
        *rdi_3 = &data_142e33b38
        rdi_3[3] = sub_140a387b0()
        *rdi_3 = &data_142e33b90
    
    void var_48
    int64_t* rax_16 = sub_140958da0(&var_48, nullptr, 0xff)
    int64_t* rbx_6 = *rax_16 + 0x10
    *rbx_6 = 0
    rbx_6[1].d = 0
    
    if (&var_78 != rbx_6 && rdi_3 != 0)
        int64_t r8_9 = *rdi_3
        (*(r8_9 + 0x40))(rdi_3, rbx_6, r8_9)
    
    rbx_6[2].d = 2
    void* rcx_15 = *rax_16
    int32_t r8_10 = rax_16[2].d
    int64_t* rdx_11 = rax_16[1]
    int64_t* rbx_7 = *(rcx_15 + 0x30)
    int64_t* var_80_1 = rbx_7
    int32_t* rsi_2 = &rbx_7[9]
    
    if (rbx_7 != 0)
        *rsi_2 += 1
        rdi_3 = var_78
        rbx_7 = var_80_1
    
    result = sub_140978a40(rcx_15, rdx_11, r8_10, 1)
    
    if (rbx_7 != 0)
        int32_t r14_1 = *rsi_2
        *rsi_2 -= 1
        
        if (r14_1 == 1)
            result = sub_140a2f6e0(var_80_1)
        
        rdi_3 = var_78
    
    if (rdi_3 != 0)
        (*(*rdi_3 + 0x38))(rdi_3, 0)
        result = sub_140a84c80(rdi_3, 0, 0)
        
        if (result != 0)
            return sub_140a74f90(result)

return result
