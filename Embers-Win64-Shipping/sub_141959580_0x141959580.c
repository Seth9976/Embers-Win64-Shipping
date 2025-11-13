// 函数: sub_141959580
// 地址: 0x141959580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void**** result

if (data_1439c7a08 != 1)
label_141959618:
    int32_t var_28_1 = 0x2f
    void var_138
    void* var_30_1 = &var_138
    int64_t var_38_1 = 0
    sub_1405a7220(&var_138, 0x30, "FOpenGLDynamicRHI::RHICreateUnorderedAccessView", 0x30, 0x3f)
    sub_140af98a0("Unknown", 0xc7, u"%s not implemented yet", var_30_1)
    
    if (var_38_1 != 0)
        sub_140a74f90(var_38_1)
    
    sub_140afbb40()
    void*** rax_5 = j_sub_140a82f30(0x28)
    
    if (rax_5 == 0)
        rax_5 = nullptr
    else
        *rax_5 = &data_142d3ff08
        rax_5[1].d = 0
        *rax_5 = &data_142ff8b28
        *(rax_5 + 0xc) = 0
        rax_5[2].w = 0x100
        rax_5[3] = 0
        rax_5[4].d = 0
        *(rax_5 + 0x24) = 0
    
    *arg2 = rax_5
    
    if (rax_5 != 0)
        rax_5[1].d += 1
    
    result = arg2
else
    int32_t rax_2 = *(arg3 + 0x18)
    void*** rax_3
    char r9_1
    
    if (rax_2 != 0x10)
        if (rax_2 != 4)
            goto label_141959618
        
        rax_3 = j_sub_140a82f30(zx.q(rax_2 + 0x34))
        
        if (rax_3 == 0)
            goto label_1419595f9
        
        r9_1 = 0xd
        goto label_1419595f4
    
    rax_3 = j_sub_140a82f30(zx.q(rax_2 + 0x28))
    void*** rbx_1
    
    if (rax_3 == 0)
    label_1419595f9:
        rbx_1 = nullptr
    else
        r9_1 = 1
    label_1419595f4:
        rbx_1 = sub_141951880(rax_3, arg1, arg3, r9_1)
    
    *arg2 = rbx_1
    result = arg2
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1

__security_check_cookie(rax_1 ^ &var_168)
return result
