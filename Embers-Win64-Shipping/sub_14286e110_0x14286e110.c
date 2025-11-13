// 函数: sub_14286e110
// 地址: 0x14286e110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = sub_1428a6730(0x60)

if (rax == 0)
    sub_1428a5670((rax + 0x14).d, 0x27b, (rax + 0x41).d, "ssl\record\rec_layer_d1.c", 0x18)
    return 0

*(arg1 + 0xeb0) = rax
*(rax + 0x28) = sub_1428857f0()
*(rax + 0x38) = sub_1428857f0()
int64_t rax_4 = sub_1428857f0()
int64_t rcx_1 = *(rax + 0x28)
*(rax + 0x48) = rax_4

if (rcx_1 != 0 && *(rax + 0x38) != 0 && rax_4 != 0)
    return 1

sub_142885710(rcx_1)
sub_142885710(*(rax + 0x38))
sub_142885710(*(rax + 0x48))
sub_1428a6780(rax)
*(arg1 + 0xeb0) = 0
return 0
