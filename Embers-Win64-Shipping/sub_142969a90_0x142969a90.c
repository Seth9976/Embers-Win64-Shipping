// 函数: sub_142969a90
// 地址: 0x142969a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
int64_t var_18
int32_t arg_8
int32_t rdx

if (arg1 != 0)
    uint8_t* rax_1 = sub_142975e60(arg1, arg2, &var_18, &arg_8)
    
    if (rax_1 != 0)
        arg1 = var_18
        rdx = arg_8
        goto label_142969b44
    
    sub_1428a5670((&rax_1[0x23]).d, (&rax_1[0x74]).d, (&rax_1[0x41]).d, "crypto\pkcs12\p12_key.c", 
        0x41)
else
    var_18 = arg1
    rdx = arg1.d
    arg_8 = arg1.d
label_142969b44:
    int32_t rax_8 = sub_142969640(arg1, rdx, arg3, arg4, arg5, arg6, arg7, arg8, arg9)
    
    if (rax_8 s> 0)
        sub_1428a6890(var_18, sx.q(arg_8), "crypto\pkcs12\p12_key.c", 0x48)
        return zx.q(rax_8)
return 0
