// 函数: sub_141048c60
// 地址: 0x141048c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint64_t result

if (arg6 != 0)
    int64_t* rcx = *(arg1 + 0x18)
    int64_t* var_a8
    int64_t* var_b0_1 = &var_a8
    void* const var_b8_1 = &data_142f017a8
    void*** rbx_1 = nullptr
    int32_t rax_3 = *arg5
    var_a8 = nullptr
    int64_t* r15_1 = *(arg3 + 0x20)
    int32_t result_1 =
        (*(*rcx + 0xe8))(rcx, r15_1, arg4, arg2, rax_3, 0, var_b8_1, var_b0_1, var_a8, arg7)
    
    if (arg8 == 0)
        goto label_141048d5e
    
    if (result_1 s>= 0)
    label_141048d79:
        void* r14_1 = *(arg3 + 0x10)
        void var_88
        (*(*r15_1 + 0x40))(r15_1, &var_88)
        void*** rax_5 = j_sub_140a82f30(0x128)
        
        if (rax_5 != 0)
            int32_t var_80
            var_b0_1.d = var_80
            rbx_1 =
                sub_14103f260(rax_5, r14_1, *(r14_1 + 0x14), var_a8, *arg5, arg2, arg3, var_b0_1.d)
        
        *arg6 = rbx_1
        rbx_1[1].d += 1
    else
        int64_t var_98
        int64_t* var_c0_2 = &var_98
        int32_t var_c8_1
        var_c8_1.q = *(arg1 + 0x18)
        var_98 = 0
        int64_t var_90_1 = 0
        sub_14106a020(result_1, "hr", 
            "D:/Build/++UE4/Sync/Engine/Source/Runtime/D3D12RHI/Private/D3D12Resources.cpp", 0x187, 
            var_c8_1)
    label_141048d5e:
        
        if (result_1 s>= 0)
            goto label_141048d79
    
    int64_t* rcx_8 = var_a8
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x10))(rcx_8)
    
    result = zx.q(result_1)
else
    result = 0x80004003

__security_check_cookie(rax_1 ^ &var_e8)
return result
