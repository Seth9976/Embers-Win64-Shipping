// 函数: sub_142932b80
// 地址: 0x142932b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rsi = arg2
int32_t r14 = 0
void* _Str1 = nullptr

if (arg1 != 0)
    int32_t r8 = 0
    char* rax_1 = arg1
    
    if (arg2 s> 0)
        do
            if (*rax_1 == 0x3a)
                _Str1 = &rax_1[1]
                r14 = arg1.d - _Str1.d + arg2
                rsi = rax_1.d - arg1.d
                break
            
            rax_1 = &rax_1[1]
            r8 += 1
        while (r8 s< arg2)
    
    int32_t rax_2 = sub_142932e90(arg1, rsi)
    
    if (rax_2 == 0xffffffff)
        sub_1428a5670(rax_2 + 0xe, 0xb1, 0xc2, "crypto\asn1\asn1_gen.c", 0x10a)
        sub_1428a4880(2)
    else if (test_bit(rax_2, 0x10))
        if (rax_2 - 0x10001 u> 7)
            return 1
        
        int32_t var_38_2
        int32_t var_30_1
        int32_t arg_8
        uint32_t arg_18
        int32_t rax_8
        uint32_t rdx_4
        int32_t r8_5
        int32_t r9_3
        
        switch (rax_2)
            case 0x10001
                if (*arg3 == 0xffffffff)
                    rax_8 = sub_142933980(_Str1, r14, arg3, &arg3[1])
                label_142932d74:
                    
                    if (rax_8 != 0)
                        return 1
                else
                    sub_1428a5670(0xd, 0xb1, 0xb5, "crypto\asn1\asn1_gen.c", 0x120)
            case 0x10002
                if (sub_142933980(_Str1, r14, &arg_18, &arg_8) != 0)
                    r8_5 = arg_8
                    r9_3 = 1
                    rdx_4 = arg_18
                    var_30_1 = 0
                    var_38_2 = 0
                label_142932d6f:
                    rax_8 = sub_142932ab0(arg3, rdx_4, r8_5, r9_3, var_38_2, var_30_1)
                    goto label_142932d74
            case 0x10003
                return 1
            case 0x10004
                var_30_1 = 1
                rdx_4 = 3
                var_38_2 = 1
                r9_3 = 0
                goto label_142932d69
            case 0x10005
                var_30_1 = 1
                rdx_4 = 4
                var_38_2 = 0
                r9_3 = 0
                goto label_142932d69
            case 0x10006
                r9_3 = 1
                var_30_1 = 1
                var_38_2 = 0
                rdx_4 = 0x10
            label_142932d69:
                r8_5 = 0
                goto label_142932d6f
            case 0x10007
                r9_3 = 1
                var_30_1 = 1
                var_38_2 = 0
                rdx_4 = 0x11
                goto label_142932d69
            case 0x10008
                int32_t var_38_1
                
                if (_Str1 != 0)
                    if (strncmp(_Str1, "ASCII", 5) == 0)
                        arg3[3] = 1
                        return 1
                    
                    if (strncmp(_Str1, "UTF8", 4) == 0)
                        arg3[3] = 2
                        return 1
                    
                    if (strncmp(_Str1, "HEX", 3) == 0)
                        arg3[3] = 3
                        return 1
                    
                    if (strncmp(_Str1, "BITLIST", 7) == 0)
                        arg3[3] = 4
                        return 1
                    
                    var_38_1 = 0x151
                else
                    var_38_1 = 0x145
                
                sub_1428a5670(0xd, 0xb1, 0xa0, "crypto\asn1\asn1_gen.c", var_38_1)
    else
        arg3[2] = rax_2
        *(arg3 + 0x10) = _Str1
        
        if (_Str1 != 0 || *(sx.q(rsi) + arg1) == 0)
            return 0
        
        sub_1428a5670((_Str1 + 0xd).d, 0xb1, 0xbd, "crypto\asn1\asn1_gen.c", 0x115)

return 0xffffffff
