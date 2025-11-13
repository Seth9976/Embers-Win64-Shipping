// 函数: sub_142899cf0
// 地址: 0x142899cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg1 == 0)
    return 0

void* rax = *arg1

if (rax == 0 || *(rax + 0x40) == 0)
    sub_1428a5670(0x20, 0x67, 0x79, "crypto\bio\bio_lib.c", 0x206)
    return -2

int64_t r10_1 = arg1[1]
int32_t var_28
int32_t var_20
int32_t var_18
int64_t var_10
int32_t result

if (r10_1 != 0 || arg1[2] != r10_1)
    int64_t rax_1 = arg1[2]
    
    if (rax_1 == 0)
        var_20 = 1
        var_28 = arg3
        result = r10_1(arg1, 6, arg4, zx.q(arg2), var_28, 1)
    else
        var_10 = 0
        var_18 = 1
        var_20 = arg3
        var_28 = arg2
        result = rax_1(arg1, 6, arg4, 0, var_28, var_20, 1, 0)

if ((r10_1 == 0 && arg1[2] == r10_1) || result s> 0)
    result = (*(*arg1 + 0x40))(arg1, zx.q(arg2), zx.q(arg3), arg4, var_28, var_20, var_18, var_10)
    int64_t r11_1 = arg1[1]
    
    if (r11_1 != 0 || arg1[2] != r11_1)
        int64_t r10_2 = arg1[2]
        
        if (r10_2 == 0)
            return r11_1(arg1, 0x86, arg4, zx.q(arg2), arg3, result)
        
        return r10_2(arg1, 0x86, arg4, 0, arg2, arg3, result, 0)

return result
