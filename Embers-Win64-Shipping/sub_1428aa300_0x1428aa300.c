// 函数: sub_1428aa300
// 地址: 0x1428aa300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax = sub_1428a6730(0x18)

if (rax == 0)
    sub_1428a5670((rax + 0xb).d, 0x99, (rax + 0x41).d, "crypto\x509\by_dir.c", 0x62)
    return 0

int64_t rax_2 = sub_1428a7510()
*rax = rax_2
int32_t rax_3

if (rax_2 != 0)
    rax[1] = 0
    CRITICAL_SECTION* rax_4 = sub_1428a5be0()
    rax[2] = rax_4
    
    if (rax_4 != 0)
        *(arg1 + 0x10) = rax
        return 1
    
    sub_1428a71f0(*rax)
    rax_3 = 0x6e
else
    rax_3 = 0x67

sub_1428a5670(0xb, 0x99, 0x41, "crypto\x509\by_dir.c", rax_3)
sub_1428a6780(rax)
return 0
