// 函数: sub_142882370
// 地址: 0x142882370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rcx = *(arg1 + 0xa8)

if (*(rcx + 0xe8) == 0)
    int64_t arg_8
    int32_t rax_1 = sub_142899cf0(*(rcx + 0xe0), 3, 0, &arg_8)
    
    if (rax_1 s<= 0)
        sub_142856580(arg1, 0x50, 0x125, 0x14c, "ssl\s3_enc.c", 0x188)
        return 0
    
    *(*(arg1 + 0xa8) + 0xe8) = sub_142891ee0()
    
    if (*(*(arg1 + 0xa8) + 0xe8) == 0)
        sub_142856580(arg1, 0x50, 0x125, 0x41, "ssl\s3_enc.c", 0x18f)
        return 0
    
    int32_t* rax_5 = sub_14285b130(arg1)
    
    if (rax_5 == 0)
    label_142882453:
        sub_142856580(arg1, 0x50, 0x125, 0x44, "ssl\s3_enc.c", 0x197)
        return 0
    
    if (sub_1428919c0(*(*(arg1 + 0xa8) + 0xe8), rax_5, nullptr) == 0)
        goto label_142882453
    
    if (sub_142891c10(*(*(arg1 + 0xa8) + 0xe8), arg_8, sx.q(rax_1)) == 0)
        goto label_142882453

sub_142899e70(*(*(arg1 + 0xa8) + 0xe0))
*(*(arg1 + 0xa8) + 0xe0) = 0
int32_t var_20_2
int32_t r9_2

if (sub_1406938b0(sub_142891580(*(*(arg1 + 0xa8) + 0xe8))) == 0x72)
    int64_t* rax_12 = sub_142891ee0()
    
    if (rax_12 != 0)
        int32_t rax_13 = sub_142891c70(rax_12, *(*(arg1 + 0xa8) + 0xe8))
        
        if (rax_13 != 0)
            int32_t rax_15 = sub_1428916c0(sub_142891580(rax_12))
            int32_t rsi_1 = rax_15
            
            if (rax_15 s< 0)
                sub_142856580(arg1, 0x50, 0x11d, 0x44, "ssl\s3_enc.c", 0x1c3)
                sub_142891f10(rax_12)
                return 0
            
            int32_t rax_16
            
            if (arg2 != 0)
                rax_16 = sub_142891c10(rax_12, arg2, arg3)
            
            if (arg2 != 0 && rax_16 s<= 0)
                sub_142856580(arg1, 0x50, 0x11d, 0x44, "ssl\s3_enc.c", 0x1ce)
                rsi_1 = 0
            else
                *(*(arg1 + 0x508) + 8)
                
                if (sub_142891e60(rax_12) s<= 0)
                    sub_142856580(arg1, 0x50, 0x11d, 0x44, "ssl\s3_enc.c", 0x1ce)
                    rsi_1 = 0
                else if (sub_1428918e0(rax_12, arg4, nullptr) s<= 0)
                    sub_142856580(arg1, 0x50, 0x11d, 0x44, "ssl\s3_enc.c", 0x1ce)
                    rsi_1 = 0
            
            sub_142891ea0(rax_12)
            return sx.q(rsi_1)
        
        var_20_2 = 0x1bc
        r9_2 = rax_13 + 0x44
    else
        var_20_2 = 0x1b7
        r9_2 = (rax_12 + 0x41).d
else
    var_20_2 = 0x1b0
    r9_2 = 0x144

sub_142856580(arg1, 0x50, 0x11d, r9_2, "ssl\s3_enc.c", var_20_2)
return 0
