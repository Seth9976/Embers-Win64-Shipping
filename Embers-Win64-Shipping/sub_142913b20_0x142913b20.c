// 函数: sub_142913b20
// 地址: 0x142913b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = sub_1428a6a70(0x28)

if (rax == 0)
    sub_1428a5670((rax + 0xf).d, (rax + 0x7b).d, (rax + 0x41).d, "crypto\hmac\hm_pmeth.c", 0x20)
    return 0

*(rax + 0xc) = 4
int64_t* rax_2 = sub_1428be080()
*(rax + 0x20) = rax_2

if (rax_2 == 0)
    sub_1428a6780(rax)
    return 0

*(arg1 + 0x28) = rax
*(arg1 + 0x48) = 0
return 1
