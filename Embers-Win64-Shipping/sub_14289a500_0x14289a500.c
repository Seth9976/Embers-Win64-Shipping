// 函数: sub_14289a500
// 地址: 0x14289a500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = sub_1428a6a70(0x78)

if (result == 0)
    sub_1428a5670((&result[4]).d, (result + 0x6c).d, (result + 0x41).d, "crypto\bio\bio_lib.c", 
        0x4c)
    return 0

*result = arg1
*(result + 0x24) = 1
result[0xa].d = 1

if (sub_1428a62f0(0xc, result, &result[0xd]) != 0)
    CRITICAL_SECTION* rax_2 = sub_1428a5be0()
    result[0xe] = rax_2
    
    if (rax_2 != 0)
        int64_t rax_4 = *(arg1 + 0x48)
        int32_t rax_5
        
        if (rax_4 != 0)
            rax_5 = rax_4(result)
        
        if (rax_4 == 0 || rax_5 != 0)
            if (*(arg1 + 0x48) == 0)
                result[4].d = 1
            
            return result
        
        sub_1428a5670(rax_5 + 0x20, rax_5 + 0x6c, rax_5 + 0x46, "crypto\bio\bio_lib.c", 0x5f)
        sub_1428a5f50(0xc, result, &result[0xd])
        sub_1428a5ba0(result[0xe])
    else
        sub_1428a5670((&rax_2->SpinCount).d, (rax_2 + 0x6c).d, (rax_2 + 0x41).d, 
            "crypto\bio\bio_lib.c", 0x59)
        sub_1428a5f50(0xc, result, &result[0xd])

sub_1428a6780(result)
return 0
