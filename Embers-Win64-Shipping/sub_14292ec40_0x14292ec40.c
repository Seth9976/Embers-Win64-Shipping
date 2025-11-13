// 函数: sub_14292ec40
// 地址: 0x14292ec40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rsi = 0
int32_t* result = nullptr

if (arg1 != 0)
    result = *arg1
    
    if (result != 0)
    label_14292ecc9:
        int64_t rax_2 = sub_1428d5de0(arg2)
        rsi = rax_2
        
        if (rax_2 != 0)
            if (sub_142898d50(result, rax_2) == 0)
                goto label_14292ecea
            
            if (*arg1 == 0)
                *arg1 = result
            
            return result
    else
        int32_t* result_1 = sub_142898ba0()
        result = result_1
        
        if (result_1 != 0)
            goto label_14292ecc9
        
    label_14292ecea:
        sub_1428a5670(0xb, 0x87, 0x41, "crypto\x509\x509_att.c", 0x62)
else
    sub_1428a5670(0xb, 0x87, 0x43, "crypto\x509\x509_att.c", 0x50)

sub_1428d5e00(rsi)
sub_142898a10(result)
return nullptr
