// 函数: sub_1428577b0
// 地址: 0x1428577b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (sub_142852cd0(0x200000, nullptr) == 0)
    return 0

void* result = sub_1428a6a70(0x1e0)

if (result == 0)
    sub_1428a5670((result + 0x14).d, 0xbd, (result + 0x41).d, "ssl\ssl_sess.c", 0x4a)
    return 0

*(result + 0x110) = 1
*(result + 0x114) = 1
*(result + 0x118) = 0x130
*(result + 0x11c) = _time64(nullptr)
CRITICAL_SECTION* rax_4 = sub_1428a5be0()
*(result + 0x1d8) = rax_4

if (rax_4 != 0)
    if (sub_1428a62f0(2, result, result + 0x140) != 0)
        return result
    
    sub_1428a5ba0(*(result + 0x1d8))
else
    sub_1428a5670((&rax_4->OwningThread + 4).d, 0xbd, (rax_4 + 0x41).d, "ssl\ssl_sess.c", 0x54)

sub_1428a6780(result)
return 0
