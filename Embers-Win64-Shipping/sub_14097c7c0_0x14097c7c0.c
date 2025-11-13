// 函数: sub_14097c7c0
// 地址: 0x14097c7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x48) = 0
void* const rax_1

if (arg3 == 0)
    rax_1 = nullptr
else
    rax_1 = (*(*arg3 + 0x150))(arg3)

sub_140d3a3a0(arg1 + 0x4c, rax_1)
void*** result
wchar16 const* const rcx_27

if (arg3 == 0 || arg3[0x45] == 0)
    int64_t var_b0_1 = 0
    rcx_27 = u"UInAppPurchaseRestoreCallbackProxy2::Trigger - Invalid player state"
label_14097cb2c:
    result = sub_140d23f50(rcx_27, 3)
    
    if (arg3 != 0)
        *(arg1 + 0x48) = 0
        return sub_14096d730(arg1)
else
    int64_t arg_8 = 0
    void var_80
    int64_t* rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_140b58170(&var_80, "OnlineSubsystem", 1)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, *rax_2, zmm1_1) == 0)
    label_14097cb0c:
        int64_t var_b8_1 = 0
        rcx_27 =
            UInAppPurchaseRestoreCallbackProxy2::Trigger - Invalid or uninitialized OnlineSubsystem"
        goto label_14097cb2c
    
    void var_78
    int64_t rbx_2 = *sub_140b58170(&var_78, "OnlineSubsystem", 1)
    j_sub_140b3db50()
    int64_t* rax_5 = sub_140b3da90(&data_143de7d78, rbx_2)
    int64_t r8 = *rax_5
    
    if ((*(r8 + 0x70))(rax_5, 0, r8) == 0)
        goto label_14097cb0c
    
    int64_t arg_18 = 0
    int64_t* rax_7 = sub_14093f850(&arg_18)
    
    if (rax_7 == 0)
        goto label_14097cb0c
    
    int64_t r8_1 = *rax_7
    void var_70
    int64_t* rax_8 = (*(r8_1 + 0xa0))(rax_7, &var_70, r8_1)
    
    if (arg1 + 0x68 != rax_8)
        *(arg1 + 0x68) = *rax_8
        *rax_8 = 0
        sub_1405aeff0(arg1 + 0x70, &rax_8[1])
    
    int64_t* var_68
    
    if (var_68 != 0)
        var_68[1].d -= 1
        
        if (var_68[1].d == 1)
            (**var_68)(var_68)
            int32_t r14_1 = *(var_68 + 0xc)
            *(var_68 + 0xc) -= 1
            
            if (r14_1 == 1)
                (*(*var_68 + 8))(var_68, zx.q(r14_1))
    
    if (*(arg1 + 0x68) == 0)
        int64_t arg_20 = 0
        rcx_27 = UInAppPurchaseRestoreCallbackProxy2::Trigger - In-App Purchases are not supported "
        "by Online Subsystem"
        goto label_14097cb2c
    
    int64_t rdx_8 = 0
    void** var_60
    void* rcx_13 = sub_1420fc400(sub_14226dd50(arg3), &var_60)[1]
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
    
    int64_t var_a0_1 = rdx_8
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    int64_t var_90_1 = 0
    void** const var_a8 = &data_142e259e0
    int64_t var_88_1 = 0
    sub_14094ded0(arg1 + 0x78, &var_a8)
    
    if (var_90_1 != 0)
        sub_140a74f90(var_90_1)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp3_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp4_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    var_60 = &data_142e259e0
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    int64_t* var_50
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp6_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_50 + 8))(var_50, 1)
    
    int64_t* rdi_2 = *(arg1 + 0x68)
    void*** result_1 = nullptr
    void*** result_2
    int64_t r8_2
    result_2, r8_2 = sub_140a84c80(0, 0x30, 0)
    result_1 = result_2
    int32_t var_c0_1 = 3
    
    if (result_2 != 0)
        *result_2 = &data_142dc0378
        sub_140d3a3a0(&result_2[1], arg1)
        result_2[2] = sub_14096e6b0
        result_2[4] = sub_140a387b0()
        *result_2 = &data_142dc03d0
    
    r8_2.b = 1
    result = (*(*rdi_2 + 0x28))(rdi_2, *(arg1 + 0x80), r8_2, &result_1)
    
    if (var_c0_1 == 0)
        result = result_1
    label_14097caed:
        
        if (result != 0)
            return sub_140a74f90(result)
    else
        void*** result_3 = result_1
        
        if (result_3 != 0)
            (*result_3)[7](result_3, 0)
            result = result_1
            
            if (result != 0)
                result = sub_140a84c80(result, 0, 0)
                result_1 = result
            
            int32_t var_c0_2 = 0
            goto label_14097caed
return result
