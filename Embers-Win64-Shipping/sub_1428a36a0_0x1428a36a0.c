// 函数: sub_1428a36a0
// 地址: 0x1428a36a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
label_1428a3709:
    sub_1428a5670(0xb, 0x80, 0x75, "crypto\x509\x509_cmp.c", 0x12c)
else
    int32_t* rax_1 = sub_1428a2680(*(arg1 + 0x50))
    
    if (rax_1 == 0)
        goto label_1428a3709
    
    int32_t rax_2 = sub_1428963a0(rax_1, arg2)
    
    if (rax_2 == 0xfffffffe)
        goto label_1428a3709
    
    if (rax_2 == 0xffffffff)
        sub_1428a5670(0xb, 0x80, 0x73, "crypto\x509\x509_cmp.c", 0x129)
    else if (rax_2 == 0)
        sub_1428a5670(0xb, 0x80, rax_2 + 0x74, "crypto\x509\x509_cmp.c", 0x126)
    else if (rax_2 s> 0)
        return 1

return 0
