// 函数: sub_140d44640
// 地址: 0x140d44640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b63b70(arg1, &var_18)

if ((arg3 & 0x10000000) == 0)
    int32_t rcx_3 = rax[1].d
    int32_t r8_2 = rcx_3 - 1
    
    if (rcx_3 == 0)
        r8_2 = 0
    
    sub_140a20ba0(arg2, *rax, r8_2)
else
    int16_t* const r8
    
    if (rax[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *rax
    
    int64_t var_28
    sub_140a2e390(&var_28, u"FKey(TEXT("%s"))", r8)
    int32_t var_20
    int32_t rdx_2
    
    if (var_20 == 0)
        rdx_2 = 0
    else
        rdx_2 = var_20 - 1
    
    sub_140a20ba0(arg2, var_28, rdx_2)
    int64_t rcx_2 = var_28
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t result
result.b = 1
return result
