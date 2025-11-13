// 函数: sub_14097daa0
// 地址: 0x14097daa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 1
void* const rax_1

if (arg2 == 0)
    rax_1 = nullptr
else
    rax_1 = (*(*arg2 + 0x150))(arg2)

sub_140d3a3a0(arg1 + 0x48, rax_1)
int32_t result
wchar16 const* const rcx_19

if (arg2 == 0 || arg2[0x45] == 0)
    int64_t var_b0_1 = 0
    rcx_19 = u"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid player state"
label_14097dd6b:
    result = sub_140d23f50(rcx_19, 3)
label_14097dd70:
    
    if (arg2 != 0)
        int64_t var_a8_1 = 0
        sub_140d23f50(u"UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Failed to even submit", 3)
        return sub_14096d210(arg1, 0)
else
    int64_t arg_8 = 0
    void var_90
    int64_t* rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_140b58170(&var_90, "OnlineSubsystem", 1)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, *rax_2, zmm1_1) == 0)
    label_14097dd4b:
        int64_t var_b8_1 = 0
        rcx_19 = UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Invalid or uninitialized OnlineSubsystem"
        goto label_14097dd6b
    
    void var_88
    int64_t rbx_2 = *sub_140b58170(&var_88, "OnlineSubsystem", 1)
    j_sub_140b3db50()
    int64_t* rax_5 = sub_140b3da90(&data_143de7d78, rbx_2)
    int64_t r8 = *rax_5
    
    if ((*(r8 + 0x70))(rax_5, 0, r8) == 0)
        goto label_14097dd4b
    
    int64_t arg_10 = 0
    int64_t* rax_7 = sub_14093f850(&arg_10)
    
    if (rax_7 == 0)
        goto label_14097dd4b
    
    int64_t r8_1 = *rax_7
    int64_t* var_a0
    (*(r8_1 + 0x98))(rax_7, &var_a0, r8_1)
    char rdx_5 = 3
    
    if (var_a0 == 0)
        int64_t var_c0_1 = 0
        result = sub_140d23f50(UInAppPurchaseQueryCallbackProxy2::TriggerQuery - In App Purchases "
        "are not supported by Online Subsyste", rdx_5)
    else
        int64_t arg_20 = 0
        sub_140d23f50(UInAppPurchaseQueryCallbackProxy2::TriggerQuery - GetUniqueNetIdFromCachedControllerId", 
            rdx_5)
        void** var_80
        sub_1420fc400(sub_14226dd50(arg2), &var_80)
        int64_t var_c8_1 = 0
        sub_140d23f50(UInAppPurchaseQueryCallbackProxy2::TriggerQuery - Querying Store Interface", 
            3)
        int64_t* rsi_1 = var_a0
        void*** var_d8 = nullptr
        r12.b = 0
        void*** rax_9 = sub_140a84c80(0, 0x30, 0)
        var_d8 = rax_9
        int32_t var_d0_1 = 3
        
        if (rax_9 != 0)
            *rax_9 = &data_142e33a88
            sub_140d3a3a0(&rax_9[1], arg1)
            rax_9[2] = sub_14096d210
            rax_9[4] = sub_140a387b0()
            *rax_9 = &data_142e33ae0
        
        int64_t var_78
        (*(*rsi_1 + 0x40))(rsi_1, var_78, arg3, &var_d8)
        void*** rax_13
        
        if (var_d0_1 == 0)
            rax_13 = var_d8
        label_14097dc9f:
            
            if (rax_13 != 0)
                sub_140a74f90(rax_13)
        else
            void*** rcx_11 = var_d8
            
            if (rcx_11 != 0)
                (*rcx_11)[7](rcx_11, 0)
                rax_13 = var_d8
                
                if (rax_13 != 0)
                    rax_13 = sub_140a84c80(rax_13, 0, 0)
                    var_d8 = rax_13
                
                int32_t var_d0_2 = 0
                goto label_14097dc9f
        result = 0x42e259e0
        var_80 = &data_142e259e0
        int64_t var_68
        
        if (var_68 != 0)
            result = sub_140a74f90(var_68)
        
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                result = (**var_70)(var_70)
                int32_t temp2_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*var_70 + 8))(var_70, 1)
    
    int64_t* var_98
    
    if (var_98 != 0)
        result = var_98[1].d
        var_98[1].d -= 1
        
        if (result == 1)
            result = (**var_98)(var_98)
            int32_t rsi_2 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (rsi_2 == 1)
                result = (*(*var_98 + 8))(var_98, zx.q(rsi_2))
    
    if (r12.b != 0)
        goto label_14097dd70
return result
