// 函数: sub_1428ef5a0
// 地址: 0x1428ef5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg1 == 0)
    sub_1428a5670(0x10, 0x108, 0x7c, "crypto\ec\ec_asn1.c", 0x32d)
    return 0

int32_t rax_1 = *arg1

if (rax_1 == 0)
    char* rax_3 = sub_1428c0250(sub_1428a96d0(*(arg1 + 8)))
    
    if (rax_3 != 0)
        sub_14289a9e0(rax_3, 1)
        return rax_3
    
    sub_1428a5670(0x10, 0x108, (&rax_3[0x77]).d, "crypto\ec\ec_asn1.c", 0x335)
else if (rax_1 == 1)
    char** rax_5 = sub_1428eeee0(*(arg1 + 8))
    
    if (rax_5 != 0)
        sub_14289a9e0(rax_5, 0)
        return rax_5
    
    sub_1428a5670(0x10, 0x108, 0x10, "crypto\ec\ec_asn1.c", 0x33d)
else if (rax_1 != 2)
    sub_1428a5670(0x10, 0x108, 0x73, "crypto\ec\ec_asn1.c", 0x344)

return 0
