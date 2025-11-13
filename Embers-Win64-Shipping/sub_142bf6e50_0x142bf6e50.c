// 函数: sub_142bf6e50
// 地址: 0x142bf6e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg3)
uint64_t r9 = 0
int32_t r8 = *arg1
int64_t* rdx = *(arg1 + 8)
int64_t var_18 = arg2[1].q
int128_t* result

if (r8 != 0)
    int64_t* rax_1 = rdx
    
    while (*rax_1 != (*arg2).q)
        r9 = zx.q(r9.d + 1)
        rax_1 = &rax_1[3]
        
        if (r9.d u>= r8)
            goto label_142bf6ec4
    
    result = &rdx[r9 * 3]

if (r8 == 0 || result == 0)
label_142bf6ec4:
    int128_t* result_1 = sub_142bf78c0(arg1)
    result = result_1
    *result_1 = *arg2
    result_1[1].q = arg2[1].q
    LeaveCriticalSection(arg3)
else
    if (arg4 == 0)
        LeaveCriticalSection(arg3)
        return nullptr
    
    int128_t var_28_1 = *result
    int64_t var_18_1 = result[1].q
    *result = *arg2
    result[1].q = arg2[1].q
    LeaveCriticalSection(arg3)
    
    if (var_18_1 != 0)
        var_18_1(var_28_1:8.q)

return result
