// 函数: sub_1428c38f0
// 地址: 0x1428c38f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
__chkstk(0x40)
int64_t rax = 0
int64_t var_18[0x2]
var_18[0] = 0
int32_t arg_8 = 0

if (*arg1 != 0)
    goto label_1428c3939

if (sub_1428c37f0(arg1) != 0)
    rax = var_18[0]
label_1428c3939:
    int64_t* rbx_1 = *arg1
    
    if (arg3 == 0)
        *rbx_1 = rax
        return 1
    
    if (sub_1428e5140(&var_18, &arg_8, &arg_10, arg3) != 0)
        if ((*(arg4 + 0x20) & 2) != 0)
            rax = var_18[0]
            
            if (arg_8 != 0)
                rax = neg.q(rax)
            else if (rax u> 0x7fffffffffffffff)
                sub_1428a5670(0xd, 0x70, 0xdf, "crypto\asn1\x_int64.c", 0x66)
                return 0
            
            *rbx_1 = rax
            return 1
        
        if (arg_8 == 0)
            *rbx_1 = var_18[0]
            return 1
        
        sub_1428a5670(0xd, 0x70, 0xe2, "crypto\asn1\x_int64.c", 0x61)

return 0
