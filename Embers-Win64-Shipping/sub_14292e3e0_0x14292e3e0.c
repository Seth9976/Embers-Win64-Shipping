// 函数: sub_14292e3e0
// 地址: 0x14292e3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result_1 = sub_142899e40(arg2, 0x208)
int64_t* result = result_1
int32_t var_18
int32_t r8

if (result_1 != 0)
    int64_t* i
    
    do
        sub_142899cf0(result, 0x78, 0, arg1)
        int64_t* rcx_2 = *arg1
        
        if (rcx_2 == 0)
            var_18 = 0x259
            r8 = 0x44
            goto label_14292e485
        
        if (sub_1406938b0(sub_142891580(rcx_2)) == arg3)
            return result
        
        i = sub_142899e40(sub_14289a660(result), 0x208)
        result = i
    while (i != 0)

var_18 = 0x254
r8 = 0x6c
label_14292e485:
sub_1428a5670(0x21, 0x7f, r8, "crypto\pkcs7\pk7_doit.c", var_18)
return 0
