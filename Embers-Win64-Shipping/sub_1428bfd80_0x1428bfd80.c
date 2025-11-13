// 函数: sub_1428bfd80
// 地址: 0x1428bfd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
void* rax = *arg1
int64_t r8 = *(rax + 0x70)

if (r8 == 0)
    int32_t rdx = (r8 + 0x7f).d
    sub_1428a5670(rdx - 0x6f, rdx, rdx - 0x3d, "crypto\ec\ec_lib.c", 0x292)
    return 0

if (rax == *arg2)
    jump(r8)

sub_1428a5670(0x10, 0x7f, 0x65, "crypto\ec\ec_lib.c", 0x296)
return 0
