// 函数: sub_141048420
// 地址: 0x141048420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t* var_88 = arg5
uint64_t result

if (arg7 != 0)
    int64_t* rcx = *(arg1 + 0x18)
    int64_t* var_a8
    int64_t* var_b0_1 = &var_a8
    void* const var_b8_1 = &data_142f017a8
    int128_t* var_c0_1 = arg6
    int32_t rax_3 = *arg5
    uint64_t r8_2 = zx.q(arg2[3].d u>> 5) & 1
    void*** rdi_1 = nullptr
    var_a8 = nullptr
    int32_t result_1 =
        (*(*rcx + 0xd8))(rcx, arg4, r8_2, arg2, rax_3, var_c0_1, var_b8_1, var_b0_1, var_a8)
    
    if (arg9 == 0)
        goto label_141048524
    
    int32_t var_c8_1
    
    if (result_1 s>= 0)
    label_14104853e:
        void*** rax_4 = j_sub_140a82f30(0x128)
        
        if (rax_4 != 0)
            int32_t rcx_4
            
            if (arg3 != 0)
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_forward(arg3)
                rcx_4 = temp0_1
                int32_t var_a0_1 = rcx_4
            else
                rcx_4 = arg3 + 0x20
            
            var_b0_1.d = *arg4
            var_b8_1 = nullptr
            var_c0_1 = arg2
            rdi_1 = sub_14103f260(rax_4, *(arg1 + (zx.q(rcx_4) << 3) + 0x9d8), arg3, var_a8, 
                *var_88, var_c0_1, var_b8_1, var_b0_1.d)
        
        *arg7 = rdi_1
        rdi_1[1].d += 1
        int32_t rax_10 = *arg4
        
        if (rax_10 == 1)
        label_1410485b6:
            void* rbx_1 = *arg7
            int64_t* rcx_6 = *(rbx_1 + 0x20)
            void var_78
            (*(*rcx_6 + 0x50))(rcx_6, &var_78)
            int64_t* rax_12 = sub_141022ce0(*(rbx_1 + 0x10))
            var_c8_1.q = &var_78
            (*(*rax_12 + 0xc8))(rax_12, &var_88, 0, 1, var_c8_1, var_c0_1, var_b8_1, var_b0_1)
            
            if (data_1439b4ad4 != 0)
                *(rbx_1 + 0x38) = *(rbx_1 + 0x20)
                *(rbx_1 + 0x40) = var_88
                
                if (data_1439b4ad4 != 0)
                    sub_1410146b0(*(rbx_1 + 0x10) + 0x910, rbx_1 + 0x30)
        else if (rax_10 == 4 && *4 == 1)
            goto label_1410485b6
    else
        int64_t var_98
        var_c0_1 = &var_98
        var_c8_1.q = *(arg1 + 0x18)
        var_98 = 0
        int64_t var_90_1 = 0
        sub_14106a020(result_1, "hr", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Resources.cpp", 0x163, 
            var_c8_1)
    label_141048524:
        
        if (result_1 s>= 0)
            goto label_14104853e
    int64_t* rcx_11 = var_a8
    
    if (rcx_11 != 0)
        (*(*rcx_11 + 0x10))(rcx_11)
    
    result = zx.q(result_1)
else
    result = 0x80004003

__security_check_cookie(rax_1 ^ &var_e8)
return result
