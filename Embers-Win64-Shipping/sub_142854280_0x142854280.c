// 函数: sub_142854280
// 地址: 0x142854280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* result = sub_1428a6a70(0x228)

if (result == 0)
    sub_1428a5670((result + 0x14).d, 0xa2, (result + 0x41).d, "ssl\ssl_cert.c", 0x37)
    return 0

result[0x40].d = 1
*result = &result[4]
result[0x3f] = sub_142854730
result[0x43].d = 1
result[0x41] = 0
CRITICAL_SECTION* rax_2 = sub_1428a5be0()
result[0x44] = rax_2

if (rax_2 != 0)
    return result

sub_1428a5670((&rax_2->OwningThread + 4).d, 0xa2, (rax_2 + 0x41).d, "ssl\ssl_cert.c", 0x42)
sub_1428a6780(result)
return 0
