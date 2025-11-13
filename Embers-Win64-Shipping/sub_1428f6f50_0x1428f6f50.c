// 函数: sub_1428f6f50
// 地址: 0x1428f6f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t result
void var_20

if (arg1 u> 0xffff)
    sub_1428b7080(&var_20, 0xb, "\W%08lX", zx.q(arg1))
    
    if (arg4(arg5, &var_20, 0xa) == 0)
        result = 0xffffffff
    else
        result = 0xa
else if (arg1 u<= 0xff)
    char var_28 = arg1.b
    int16_t rax_4
    
    if (arg1.b u<= 0x7f)
        rax_4 = *(&data_143517b90 + (zx.q(arg1.b) << 1))
    else
        rax_4 = 4
    
    rax_4 &= arg2
    
    if ((rax_4.b & 0x61) != 0)
        if ((rax_4.b & 8) != 0)
            if (arg3 != 0)
                *arg3 = 1
            
            goto label_1428f703d
        
        if (arg4(arg5, &data_142d6bc40, 1) == 0)
            result = 0xffffffff
        else if (arg4(arg5, &var_28, 1) != 0)
            result = 2
        else
            result = 0xffffffff
    else if ((0x406 & rax_4) != 0)
        sub_1428b7080(&var_20, 0xb, "\%02X", zx.q(arg1.b))
        
        if (arg4(arg5, &var_20, 3) == 0)
            result = 0xffffffff
        else
            result = 3
    else if (arg1.b != 0x5c || (0x40f & arg2) == 0)
    label_1428f703d:
        
        if (arg4(arg5, &var_28, 1) != 0)
            result = 1
        else
            result = 0xffffffff
    else if (arg4(arg5, &data_1434d3558, 2) == 0)
        result = 0xffffffff
    else
        result = 2
else
    sub_1428b7080(&var_20, 0xb, "\U%04lX", zx.q(arg1))
    
    if (arg4(arg5, &var_20, 6) == 0)
        result = 0xffffffff
    else
        result = 6
__security_check_cookie(rax_1 ^ &var_48)
return result
