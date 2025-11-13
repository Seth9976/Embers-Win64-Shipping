// 函数: sub_14293b1a0
// 地址: 0x14293b1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = sub_1428a6a70(0x30)

if (result == 0)
    sub_1428a5670((&result[5]).d, (&result[0xd]).d, (result + 0x41).d, "crypto\ui\ui_lib.c", 0x1c)
    return 0

CRITICAL_SECTION* rax_1 = sub_1428a5be0()
result[5] = rax_1

if (rax_1 != 0)
    void* rax_3 = sub_14296b2d0()
    
    if (rax_3 == 0)
        rax_3 = sub_14296b760()
    
    *result = rax_3
    
    if (sub_1428a62f0(0xb, result, &result[3]) != 0)
        return result
else
    sub_1428a5670((&rax_1[1]).d, (rax_1 + 0x68).d, (rax_1 + 0x41).d, "crypto\ui\ui_lib.c", 0x22)

sub_1428a6780(result)
return 0
