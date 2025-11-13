// 函数: sub_1428bb930
// 地址: 0x1428bb930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    return 0

int64_t* rax_1 = sub_14289a060(arg1)
int64_t* rbx = rax_1

if (*rax_1 != 0)
    sub_140374100(&rax_1[2])
    sub_1428a6780(*rbx)

if (rbx[0xd] != 0)
    sub_14036ef90(&rbx[0x12])
    sub_1428a6780(rbx[0xd])

sub_1428a6780(rbx)
sub_14289a990(arg1, 0)
sub_14289a9b0(arg1, 0)
return 1
