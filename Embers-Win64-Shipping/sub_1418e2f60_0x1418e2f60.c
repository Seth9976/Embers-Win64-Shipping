// 函数: sub_1418e2f60
// 地址: 0x1418e2f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_141992c00(&arg_8, 0)

if (*(arg1 + 0x58) == 0)
    data_143f0f1bb = 0
    data_1439c79e0 = 0
    sub_1418dd560(arg1)
    sub_1418ed510(arg1)
    void* rsi_1 = *(arg1 + 0x58)
    int64_t* rcx_3 = data_143efb500
    data_143f0f21d = 1
    data_143f0f21e = 0
    bool cond:0_1 = *(*(arg1 + 0x58) + 0xb78) != 0
    data_1439c7a68 = 0
    data_143f0f1c3 = cond:0_1
    data_143f0f1f6 = 1
    data_143f0f1b7 = 1
    int32_t rax_3 = (*(*rcx_3 + 0x90))(rcx_3)
    int64_t* rcx_4 = data_143efb500
    data_143f0f223 = rax_3 != 0
    data_143f0f224 = (*(*rcx_4 + 0x90))(rcx_4) s> 1
    data_1439c7a0e = data_143f0f223 != 0
    void* rax_6
    
    if (*(*(arg1 + 0x58) + 0x157c) != 0x1002)
        rax_6.b = 0
    else
        int64_t rdi_1 = data_143efb108
        int64_t rcx_5
        
        if (data_143de5480 == 0)
            rcx_5 = 0
        else
            rcx_5.b = GetCurrentThreadId().d != data_143de5470
        
        if (*(rdi_1 + (rcx_5 << 2)) s<= 0)
            rax_6.b = 0
        else
            void* rcx_6 = *(arg1 + 0x58)
            
            if (*(rcx_6 + 0x1a58) == *(rcx_6 + 0x1a50))
                rax_6.b = 0
            else
                rax_6.b = 1
    
    data_143f0f1c5 = rax_6.b
    int32_t rax_7 = data_1439c7a70
    data_1439c7a15 = 1
    data_143f0f1d0 = 1
    data_143f0f19d = 1
    int32_t rcx_7 = *(rsi_1 + 0x8f4)
    
    if (rcx_7 s<= rax_7)
        rax_7 = rcx_7
    
    data_1439c7a70 = rax_7
    int32_t rcx_8 = *(rsi_1 + 0x8f4)
    int32_t rax_8 = data_1439c7a74
    bool cond:4_1 = rcx_8 == rax_8
    
    if (rcx_8 s<= rax_8)
        rax_8 = rcx_8
    
    data_1439c7a74 = rax_8
    int32_t r8_1 = *(rsi_1 + 0x8f4)
    data_1439c7a78 = r8_1
    data_1439c7a80 = zx.q(*(rsi_1 + 0x904))
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse(r8_1)
    int32_t rcx_9
    
    rcx_9 = cond:4_1 ? 0x20 : 0x1f - temp0_1
    
    int32_t rcx_11 = rcx_9 << 0x1a s>> 0x1f
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(r8_1 - 1)
    int32_t rdx_1
    
    if (rcx_11 == 0)
        rdx_1 = 0x20
    else
        rdx_1 = 0x1f - temp0_2
    
    int32_t rax_14 = ((0x20 - rdx_1) & not.d(rcx_11)) + 1
    
    if (rax_14 s>= 0xe)
        rax_14 = 0xe
    
    data_1439c7a00 = rax_14
    data_1439c7a8c = *(rsi_1 + 0x8fc)
    data_1439c7a24 = *(rsi_1 + 0x900)
    data_1439c7a3c = 1
    data_143f0f1bf = 1
    sub_1418c6e70()
    data_143f0f1c8 = 1
    data_143f0f142 = 0
    int64_t* var_38 = nullptr
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 7)
    int32_t rax_17 = var_30_1 + 7
    var_30_1 = rax_17
    
    if (rax_17 s> 0)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, u"Vulkan", 0xe)
    sub_142064b30(data_143f426f8, &var_38)
    int64_t* rcx_17 = var_38
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int64_t* rdi_2 = data_143db18d0
    data_1439c7a1c = 0x3f800000
    
    if (rdi_2 == 0)
        sub_140a53c40()
        rdi_2 = data_143db18d0
    
    var_38 = nullptr
    void*** rax_18 = sub_140a84c80(0, 0x20, 0)
    var_38 = rax_18
    var_30_1 = 2
    
    if (rax_18 != 0)
        *rax_18 = &data_142d40dc0
        rax_18[1] = sub_1418ed470
        rax_18[3] = sub_140a387b0()
        *rax_18 = &data_142d40e18
    
    *(arg1 + 0x78) = (*(*rdi_2 + 0x98))(rdi_2, r.Vulkan.SavePipelineCache", Save pipeline cache."
        , &var_38, 0)
    int64_t* rax_23
    
    if (var_30_1 == 0)
        rax_23 = var_38
    label_1418e32b6:
        
        if (rax_23 != 0)
            sub_140a74f90(rax_23)
    else
        int64_t* rcx_19 = var_38
        
        if (rcx_19 != 0)
            (*(*rcx_19 + 0x38))(rcx_19, 0)
            rax_23 = var_38
            
            if (rax_23 != 0)
                rax_23 = sub_140a84c80(rax_23, 0, 0)
                var_38 = rax_23
            
            var_30_1 = 0
            goto label_1418e32b6
    int64_t* rsi_3 = data_143db18d0
    
    if (rsi_3 == 0)
        sub_140a53c40()
        rsi_3 = data_143db18d0
    
    var_38 = nullptr
    int64_t* rax_24 = sub_140a84c80(0, 0x20, 0)
    var_38 = rax_24
    var_30_1 = 2
    
    if (rax_24 != 0)
        *rax_24 = &data_142d40dc0
        rax_24[1] = sub_1418eb830
        rax_24[3] = sub_140a387b0()
        *rax_24 = &data_142d40e18
    
    *(arg1 + 0x80) =
        (*(*rsi_3 + 0x98))(rsi_3, r.Vulkan.RebuildPipelineCache", Rebuilds pipeline cache."
        , &var_38, 0)
    int64_t* rax_29
    
    if (var_30_1 == 0)
        rax_29 = var_38
    label_1418e339e:
        
        if (rax_29 != 0)
            sub_140a74f90(rax_29)
    else
        int64_t* rcx_23 = var_38
        
        if (rcx_23 != 0)
            (*(*rcx_23 + 0x38))(rcx_23, 0)
            rax_29 = var_38
            
            if (rax_29 != 0)
                rax_29 = sub_140a84c80(rax_29, 0, 0)
                var_38 = rax_29
            
            var_30_1 = 0
            goto label_1418e339e
    int64_t rcx_26 = *(*(arg1 + 0x58) + 0x1a50)
    data_143f02bb8 = rcx_26
    data_143f02bc0 = rcx_26
    data_143f02d88 = *(*(arg1 + 0x58) + 0x1a58)
    sub_1419a3ff0()
    data_143f0f19c = 1

return sub_141994c70(&arg_8)
