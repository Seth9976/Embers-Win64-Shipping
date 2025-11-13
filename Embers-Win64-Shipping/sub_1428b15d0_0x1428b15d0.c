// 函数: sub_1428b15d0
// 地址: 0x1428b15d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint64_t result

if (arg4 u>= 0x40000000 || (arg4.b & 7) != 0)
    result = 0xffffffff
else if (sub_142893020(arg2, arg3, arg4.d) == 0)
    if (sub_142890eb0(arg1) == 0)
        result = sub_1428b1810(arg1, arg2, arg3, arg4)
    else if (arg2 != 0)
        memmove(&arg2[1], arg3, arg4.d)
        int64_t var_48
        sub_1428fe1b0(arg3, arg4, &var_48)
        *(arg4 + arg2 + 8) = var_48
        sub_1428b8960(&var_48, 0x14)
        
        if (sub_142897af0(sub_1406219d0(arg1), 8) s> 0)
            *arg2 = *sub_1406219d0(arg1)
            sub_1428b0fa0(arg1, &arg2[1], &arg2[1], arg4 + 8)
            sub_1428a75c0(arg2, nullptr, arg4 + 0x10)
            *sub_1406219d0(arg1) = 0x521e8792ca2dd4a
            sub_1428b0fa0(arg1, arg2, arg2, arg4 + 0x10)
            result = zx.q((arg4 + 0x10).d)
        else
            result = 0xffffffff
    else
        result = zx.q((arg4 + 0x10).d)
else
    sub_1428a5670(6, 0xab, 0xa2, "crypto\evp\e_des3.c", 0x18e)
    result = 0

__security_check_cookie(rax_1 ^ &var_78)
return result
