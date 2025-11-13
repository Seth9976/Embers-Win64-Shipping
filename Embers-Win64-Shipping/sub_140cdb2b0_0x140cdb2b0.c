// 函数: sub_140cdb2b0
// 地址: 0x140cdb2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx_2
int64_t var_38
int32_t var_30
int64_t var_28
int64_t var_18
wchar16 const* const rdx_2
int16_t* const r8

if (not(test_bit(arg3, 0x1c)))
    if ((arg3.b & 2) != 0)
        sub_140b63b70(arg1, &var_28)
        int16_t** rax_2 = sub_140a30480(&var_28, &var_18, nullptr)
        
        if (rax_2[1].d == 0)
            r8 = &data_142d40450
        else
            r8 = *rax_2
        
        rdx_2 = u""%s""
        goto label_140cdb375
    
    sub_140b63b70(arg1, &var_38)
    int32_t r8_2
    
    if (var_30 == 0)
        r8_2 = 0
    else
        r8_2 = var_30 - 1
    
    sub_140a20ba0(arg2, var_38, r8_2)
    rcx_2 = var_38
else
    sub_140b63b70(arg1, &var_28)
    int64_t* rax_1 = sub_140a30480(&var_28, &var_18, nullptr)
    
    if (rax_1[1].d == 0)
        r8 = &data_142d40450
        rdx_2 = u"FPrimaryAssetType(TEXT("%s"))"
    else
        r8 = *rax_1
        rdx_2 = u"FPrimaryAssetType(TEXT("%s"))"
    
label_140cdb375:
    sub_140a2e390(&var_38, rdx_2, r8)
    int32_t r8_4
    
    if (var_30 == 0)
        r8_4 = 0
    else
        r8_4 = var_30 - 1
    
    sub_140a20ba0(arg2, var_38, r8_4)
    int64_t rcx_6 = var_38
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int64_t rcx_7 = var_18
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    rcx_2 = var_28

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t result
result.b = 1
return result
