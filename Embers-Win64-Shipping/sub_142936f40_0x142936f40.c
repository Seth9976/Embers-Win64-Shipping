// 函数: sub_142936f40
// 地址: 0x142936f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbp = sx.q(arg3)
int32_t* result

if (arg1 != 0)
    result = *arg1

if (arg1 != 0 && result != 0)
label_142936f89:
    
    if (sub_1428e61a0(result, *arg2, rbp.d) != 0)
        *arg2 += rbp
        
        if (arg1 != 0)
            *arg1 = result
        
        return result
else
    int32_t* result_1 = sub_1428c35d0()
    result = result_1
    
    if (result_1 != 0)
        goto label_142936f89

if (arg1 == 0 || *arg1 != result)
    sub_1428c3460(result)

sub_1428a5670(0x27, 0x66, 0x41, "crypto\ocsp\v3_ocsp.c", 0xce)
return nullptr
