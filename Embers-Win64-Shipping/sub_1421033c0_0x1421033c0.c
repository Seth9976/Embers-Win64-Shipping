// 函数: sub_1421033c0
// 地址: 0x1421033c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_b8

if (sub_14243af00(arg4) == 0)
    int64_t* rdi_3
    
    if (arg1[0x13] == 0)
        rdi_3 = nullptr
    else
        void* rax_12 = sub_14256a090()
        
        if (rax_12 == 0)
            rdi_3 = nullptr
        else
            rdi_3 = arg1[0x13]
            int64_t rax_13 = sx.q(*(rax_12 + 0x38))
            
            if (rax_13.d s> rdi_3[7].d || *(rdi_3[6] + (rax_13 << 3)) != rax_12 + 0x30)
                rdi_3 = nullptr
    
    sub_142427eb0(&var_b8)
    int32_t var_8c
    int32_t var_8c_1 = var_8c | 0x40
    arg1[6] = sub_1420efae0(arg4, rdi_3, nullptr, nullptr, &var_b8)
    int64_t** rax_16 = sub_1423dd2a0(data_143f5b298, arg4)
    int64_t* r8_4 = *rax_16
    int64_t* rcx_25 = r8_4
    void* rdx_11 = &r8_4[sx.q(rax_16[1].d)]
    
    if (r8_4 == rdx_11)
    label_142103655:
        rcx_25.b = 0xff
    else
        while (*rcx_25 != arg1)
            rcx_25 = &rcx_25[1]
            
            if (rcx_25 == rdx_11)
                goto label_142103655
        
        rcx_25 = (rcx_25 - r8_4) s>> 3
    
    *(arg1[6] + 0x3d4) = rcx_25.b
    *(arg1[6] + 0x298) = arg1
else
    int16_t* const rdi_1 = &data_142d40450
    int16_t* r8
    
    if (arg2[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *arg2
    
    void var_88
    sub_1423fb9e0(&var_88, nullptr, r8, 0)
    int64_t var_c8
    (*(*arg1 + 0x2a8))(arg1, &var_c8)
    wchar16* var_e8
    int32_t var_e0
    int32_t var_c0
    
    if (var_c0 != 0 && var_c0 - 1 s> 0)
        sub_140a2e390(&var_e8, u"Name=%s", var_c8)
        wchar16* rdx_1 = &data_142d40450
        
        if (var_e0 != 0)
            rdx_1 = var_e8
        
        sub_142401e40(&var_88, rdx_1)
        wchar16* rcx_5 = var_e8
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    
    int64_t var_d8
    (*(*arg1 + 0x2b0))(arg1, &var_d8)
    int32_t var_d0
    
    if (var_d0 != 0 && var_d0 - 1 s> 0)
        sub_140a2e390(&var_e8, u"%s", var_d8)
        
        if (var_e0 != 0)
            rdi_1 = var_e8
        
        sub_142401e40(&var_88, rdi_1)
        wchar16* rcx_9 = var_e8
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
    
    sub_1420fb380(arg1, &var_b8)
    int64_t* rax_7 = sub_1423dd2a0(data_143f5b298, arg4)
    int64_t* r8_3 = *rax_7
    int64_t* rcx_12 = r8_3
    void* rdx_6 = &r8_3[sx.q(rax_7[1].d)]
    
    if (r8_3 == rdx_6)
    label_142103516:
        rcx_12.b = 0xff
    else
        while (*rcx_12 != arg1)
            rcx_12 = &rcx_12[1]
            
            if (rcx_12 == rdx_6)
                goto label_142103516
        
        rcx_12 = (rcx_12 - r8_3) s>> 3
    
    arg1[6] = sub_1420f02b0(arg4, arg1, 1, &var_88, &var_b8, arg3, rcx_12.b)
    var_b8 = &data_142e259e0
    int64_t var_a0
    
    if (var_a0 != 0)
        sub_140a74f90(var_a0)
    
    int64_t* var_a8
    
    if (var_a8 != 0)
        var_a8[1].d -= 1
        
        if (var_a8[1].d == 1)
            (**var_a8)(var_a8)
            int32_t temp1_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_a8 + 8))(var_a8, 1)
    
    int64_t rcx_17 = var_d8
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int64_t rcx_18 = var_c8
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    sub_14094c030(&var_88)
void* result
result.b = arg1[6] != 0
return result
