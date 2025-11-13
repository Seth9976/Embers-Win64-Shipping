// 函数: sub_1428968f0
// 地址: 0x1428968f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = sub_1428a6a70(0x48)

if (result == 0)
    sub_1428a5670((result + 6).d, (result + 0x6a).d, (result + 0x41).d, "crypto\evp\p_lib.c", 0x91)
    return 0

result[6].d = 1
*result = 0
result[1].d = 1
CRITICAL_SECTION* rax_1 = sub_1428a5be0()
result[8] = rax_1

if (rax_1 != 0)
    return result

sub_1428a5670((&rax_1->DebugInfo + 6).d, (rax_1 + 0x6a).d, (rax_1 + 0x41).d, "crypto\evp\p_lib.c", 
    0x9a)
sub_1428a6780(result)
return 0
