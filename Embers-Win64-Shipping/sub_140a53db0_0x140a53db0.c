// 函数: sub_140a53db0
// 地址: 0x140a53db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = data_143db3770

if (rcx == 0 || rcx == 1)
    int64_t var_18
    int64_t* rax_2 = sub_140b13b30(&var_18)
    int16_t* const rcx_2
    
    if (rax_2[1].d == 0)
        rcx_2 = &data_142d40450
    else
        rcx_2 = *rax_2
    
    int16_t* const var_28 = rcx_2
    uint64_t var_38 = 0
    wchar16 const* const var_20_1 = u"Shaders"
    int64_t var_30_1 = 0
    sub_140b0f5f0(&var_38, &var_28, 2)
    int64_t rcx_4 = data_143db3768
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rcx = var_30_1.d
    data_143db3768 = var_38
    data_143db3774 = var_30_1:4.d
    int64_t rax_5 = var_18
    var_38 = 0
    int64_t var_30_2 = 0
    data_143db3770 = rcx
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
        rcx = data_143db3770

if (rcx != 0)
    return data_143db3768

return &data_142d40450
