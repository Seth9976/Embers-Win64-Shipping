// 函数: sub_14289ad50
// 地址: 0x14289ad50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg1 == 0)
    return 0

void* rax_1 = *arg1

if (rax_1 == 0 || *(rax_1 + 0x10) == 0)
    sub_1428a5670(0x20, 0x80, 0x79, "crypto\bio\bio_lib.c", 0x149)
    return 0xfffffffe

int64_t r10 = arg1[1]
int32_t var_38
int32_t var_30
int32_t var_28
int64_t var_20
int32_t result

if (r10 != 0 || arg1[2] != 0)
    int64_t rax_2 = arg1[2]
    
    if (rax_2 == 0)
        if (arg3 u> 0x7fffffff)
            return -1
        
        var_30 = 1
        var_38 = 0
        result = r10(arg1, 3, arg2, zx.q(arg3.d), 0, 1)
    else
        var_20 = 0
        var_28 = 1
        var_30 = 0
        var_38 = 0
        result = rax_2(arg1, 3, arg2, arg3, 0, 0, 1, 0)

if ((r10 == 0 && arg1[2] == 0) || result s> 0)
    if (arg1[4].d == 0)
        sub_1428a5670(0x20, 0x80, 0x78, "crypto\bio\bio_lib.c", 0x153)
        return -2
    
    result = (*(*arg1 + 0x10))(arg1, arg2, arg3, arg4, var_38, var_30, var_28, var_20)
    
    if (result s> 0)
        arg1[0xc] += *arg4
    
    if (arg1[1] != 0 || arg1[2] != 0)
        return sub_14289aa80(arg1, 0x83, arg2, arg3, 0, 0, result, arg4)

return result
