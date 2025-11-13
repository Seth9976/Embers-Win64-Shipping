// 函数: sub_142934220
// 地址: 0x142934220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* result = sub_1428a6a70(0x50)

if (result != 0)
    *(result + 8) = sub_1428daf90()
    int64_t rax_1 = sub_1428c35d0()
    int64_t rcx_1 = *(result + 8)
    *(result + 0x10) = rax_1
    
    if (rcx_1 != 0 && rax_1 != 0)
        return result
    
    sub_1428daf30(rcx_1)
    sub_1428c3460(*(result + 0x10))
    sub_1428965a0(*(result + 0x18))
    
    if (*(result + 0x30) != 0)
        sub_1428a6780(*(result + 0x28))
    
    sub_1428a6780(result)

sub_1428a5670(0xd, 0xad, 0x41, "crypto\asn1\x_pkey.c", 0x20)
return 0
