// 函数: sub_1428a2750
// 地址: 0x1428a2750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    return 0

void* rax_1 = sub_1428db530(&data_1434eaa80)

if (rax_1 != 0)
    void* rax_2 = *(arg2 + 0x10)
    int32_t var_18_1
    int32_t r8_2
    
    if (rax_2 == 0)
        var_18_1 = 0x51
        r8_2 = 0x6f
    else
        int64_t r8_1 = *(rax_2 + 0x28)
        
        if (r8_1 == 0)
            var_18_1 = 0x4d
            r8_2 = 0x7c
        else
            int32_t rax_3 = r8_1(rax_1, arg2)
            
            if (rax_3 != 0)
                sub_1428c3d60(*arg1, &data_1434eaa80)
                *arg1 = rax_1
                *(rax_1 + 0x10) = arg2
                sub_142896e70(arg2)
                return 1
            
            var_18_1 = 0x49
            r8_2 = rax_3 + 0x7e
    
    sub_1428a5670(0xb, 0x78, r8_2, "crypto\x509\x_pubkey.c", var_18_1)

sub_1428c3d60(rax_1, &data_1434eaa80)
return 0
