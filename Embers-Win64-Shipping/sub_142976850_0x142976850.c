// 函数: sub_142976850
// 地址: 0x142976850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_1428a6a70(0x60)

if (rax != 0)
    int64_t rax_1 = sub_1428a6730(0x14)
    *(rax + 8) = rax_1
    
    if (rax_1 != 0)
        rax[4] = 0x14
        rax[8] = 0
        *rax = 0
        rax[9] = 4
        sub_14289a990(arg1, rax)
        sub_14289a9b0(arg1, 1)
        return 1
    
    sub_1428a5670((rax_1 + 0xd).d, (rax_1 + 0x71).d, (rax_1 + 0x41).d, "crypto\asn1\bio_asn1.c", 
        0x78)
    sub_1428a6780(rax)

return 0
