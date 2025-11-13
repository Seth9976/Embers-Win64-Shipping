// 函数: sub_140cdb150
// 地址: 0x140cdb150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx_7
int64_t var_38
int32_t var_30
int64_t var_28
int64_t var_18

if (test_bit(arg3, 0x1c))
    int64_t* rax_2 = sub_140a30480(sub_140cebfd0(arg1, &var_18), &var_28, nullptr)
    int16_t* const r8
    
    if (rax_2[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *rax_2
    
    sub_140a2e390(&var_38, u"FPrimaryAssetId(TEXT("%s"))", r8)
    int32_t rdx_3
    
    if (var_30 == 0)
        rdx_3 = 0
    else
        rdx_3 = var_30 - 1
    
    sub_140a20ba0(arg2, var_38, rdx_3)
    int64_t rcx_3 = var_38
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rcx_7 = var_18
else if ((arg3.b & 2) != 0)
    int64_t* rax_5 = sub_140a30480(sub_140cebfd0(arg1, &var_28), &var_18, nullptr)
    int16_t* const r8_3
    
    if (rax_5[1].d == 0)
        r8_3 = &data_142d40450
    else
        r8_3 = *rax_5
    
    sub_140a2e390(&var_38, u""%s"", r8_3)
    int32_t rdx_10
    
    if (var_30 == 0)
        rdx_10 = 0
    else
        rdx_10 = var_30 - 1
    
    sub_140a20ba0(arg2, var_38, rdx_10)
    int64_t rcx_11 = var_38
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_18
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    rcx_7 = var_28
else
    int64_t* rax_3 = sub_140cebfd0(arg1, &var_18)
    int32_t rcx_5 = rax_3[1].d
    int32_t r8_2 = rcx_5 - 1
    
    if (rcx_5 == 0)
        r8_2 = 0
    
    sub_140a20ba0(arg2, *rax_3, r8_2)
    rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t result
result.b = 1
return result
