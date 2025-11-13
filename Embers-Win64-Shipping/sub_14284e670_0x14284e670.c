// 函数: sub_14284e670
// 地址: 0x14284e670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t rbx = zx.q(arg3)
sub_1428a6780(*(arg1 + 0x268))
int64_t rax = sub_1428a6af0(arg2, zx.q(rbx.d), "ssl\ssl_lib.c", 0xaba)
*(arg1 + 0x268) = rax

if (rax != 0)
    *(arg1 + 0x270) = rbx
    return 0

sub_1428a5670((rax + 0x14).d, 0x157, (rax + 0x41).d, "ssl\ssl_lib.c", 0xabc)
return 1
