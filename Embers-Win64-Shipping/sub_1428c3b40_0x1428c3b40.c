// 函数: sub_1428c3b40
// 地址: 0x1428c3b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
__chkstk(0x40)
int64_t rax = 0
int64_t var_18[0x2]
var_18[0] = 0
int32_t arg_8 = 0

if (*arg1 != 0)
    goto label_1428c3b89

if (sub_1428c37f0(arg1) != 0)
    rax = var_18[0]
label_1428c3b89:
    int32_t* rbx_1 = *arg1
    
    if (arg3 == 0)
        *rbx_1 = rax.d
        return 1
    
    if (sub_1428e5140(&var_18, &arg_8, &arg_10, arg3) != 0)
        bool cond:1_1
        
        if ((*(arg4 + 0x20) & 2) != 0)
            rax = var_18[0]
            
            if (arg_8 != 0)
                if (rax u> 0x80000000)
                    sub_1428a5670(0xd, 0x69, 0xe0, "crypto\asn1\x_int64.c", 0xcd)
                    return 0
                
                *rbx_1 = neg.q(rax).d
                return 1
            
            cond:1_1 = rax u<= 0x7fffffff
        label_1428c3c65:
            
            if (cond:1_1)
                *rbx_1 = rax.d
                return 1
            
            sub_1428a5670(0xd, 0x69, 0xdf, "crypto\asn1\x_int64.c", 0xd4)
            return 0
        
        if (arg_8 == 0)
            rax = var_18[0]
            cond:1_1 = rax u<= 0xffffffff
            goto label_1428c3c65
        
        sub_1428a5670(0xd, 0x69, 0xe2, "crypto\asn1\x_int64.c", 0xc8)

return 0
