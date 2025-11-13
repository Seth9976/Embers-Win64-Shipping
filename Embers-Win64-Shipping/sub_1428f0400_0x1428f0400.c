// 函数: sub_1428f0400
// 地址: 0x1428f0400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0

if (arg1 == 0)
    sub_1428a5670(0x10, 0x97, 0x43, "crypto\ec\ec_asn1.c", 0x454)
    return 0

uint64_t rax_1 =
    sub_142919ee0(*(arg1 + 0x18), *(arg1 + 0x20), zx.q(*(arg1 + 0x34)), nullptr, 0, nullptr)

if (arg2 != 0 && rax_1 != 0)
    char* rax_2 = *arg2
    
    if (rax_2 == 0)
        rax_2 = sub_1428a6730(rax_1)
        *arg2 = rax_2
        
        if (rax_2 == 0)
            sub_1428a5670((&rax_2[0x10]).d, 0x97, (&rax_2[0x41]).d, "crypto\ec\ec_asn1.c", 0x461)
            return 0
        
        rbp = 1
    
    if (sub_142919ee0(*(arg1 + 0x18), *(arg1 + 0x20), zx.q(*(arg1 + 0x34)), rax_2, rax_1, nullptr)
            == 0)
        sub_1428a5670(0x10, 0x97, 0x10, "crypto\ec\ec_asn1.c", 0x468)
        
        if (rbp != 0)
            sub_1428a6780(*arg2)
            *arg2 = 0
        
        return 0
    
    if (rbp == 0)
        *arg2 += rax_1

return zx.q(rax_1.d)
