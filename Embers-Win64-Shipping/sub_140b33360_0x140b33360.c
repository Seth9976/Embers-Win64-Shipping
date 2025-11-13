// 函数: sub_140b33360
// 地址: 0x140b33360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg1
int64_t var_18
wchar16 const* const rdx_5

if (r8 == 0)
    rdx_5 = u"%lld"
label_140b33422:
    sub_140a2e390(&var_18, rdx_5, *(arg1 + 8))
label_140b3342f:
    int32_t var_10
    int32_t r8_13
    
    if (var_10 == 0)
        r8_13 = 0
    else
        r8_13 = var_10 - 1
    
    sub_140a20ba0(arg2, var_18, r8_13)
    int64_t rcx_9 = var_18
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    return 

if (r8 == 1)
    rdx_5 = u"%llu"
    goto label_140b33422

if (r8 == 2)
    sub_140a2e390(&var_18, u"%f", *(arg1 + 8))
    goto label_140b3342f

if (r8 == 3)
    int32_t r8_6 = arg1[6]
    
    if (r8_6 == 0)
        return sub_140a20ba0(arg2, &data_142d40450, 0) __tailcall
    
    return sub_140a20ba0(arg2, *(arg1 + 0x10), r8_6 - 1) __tailcall

if (r8 != 4)
    return 

int64_t rdx = *(arg1 + 8)
int64_t r8_4 = -1

do
    r8_4 += 1
while (*(rdx + (r8_4 << 1)) != 0)

return sub_140a20ba0(arg2, rdx, r8_4.d) __tailcall
