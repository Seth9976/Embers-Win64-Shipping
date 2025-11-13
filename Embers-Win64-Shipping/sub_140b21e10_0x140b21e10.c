// 函数: sub_140b21e10
// 地址: 0x140b21e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg1[1].d
int32_t result_1 = rdx - 1

if (rdx == 0)
    result_1 = -1

int32_t result_2 = rdx - 1

if (rdx == 0)
    result_2 = -1

int32_t result_3 = result_2

if (rdx == 0)
    result_3 = 0

if (result_3 == 0x20)
    return sub_140b21fc0(arg1, 0, arg2) __tailcall

int32_t result = result_1

if (rdx == 0)
    result = 0

if (result == 0x24)
    return sub_140b21fc0(arg1, result - 0x23, arg2) __tailcall

if (result == 0x26)
    int64_t var_18 = 0
    int32_t var_10 = 0
    sub_1405947f0(&var_18, result - 0x24)
    int32_t rax_2 = var_10 + 2
    var_10 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_18)
    
    sub_1405a7220(var_18, 2, &(*U"},{]")[2], 2, 0x3f)
    char rax_3 = sub_140a32a50(arg1, &var_18, 1)
    int64_t rcx_8 = var_18
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    if (rax_3 == 0)
        return sub_140b21fc0(arg1, 3, arg2) __tailcall
    
    return sub_140b21fc0(arg1, 2, arg2) __tailcall

if (result == 0x44)
    return sub_140b21fc0(arg1, result - 0x40, arg2) __tailcall

if (rdx == 0)
    result_1 = result_2

if (result == 0x23)
    return sub_140b21fc0(arg1, result - 0x1e, arg2) __tailcall

if (rdx == 0)
    result_1 = 0

if (result_1 == 0x16)
    return sub_140b21fc0(arg1, result_1 - 0x10, arg2) __tailcall

result.b = 0
return result
