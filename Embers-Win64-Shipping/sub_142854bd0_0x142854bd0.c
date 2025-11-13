// 函数: sub_142854bd0
// 地址: 0x142854bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t buffer1_1 = 0
int64_t buffer2 = 0
int64_t count = sx.q(sub_1428ac180(arg1, &buffer1_1))
int32_t rax_1 = sub_1428ac180(arg2, &buffer2)
int64_t buffer1 = buffer1_1
int32_t rdi

if (count.d s< 0 || rax_1 s< 0)
    rdi = -2
else if (count.d == rax_1)
    rdi = memcmp(buffer1, buffer2, count)
else
    rdi = count.d - rax_1

sub_1428a6780(buffer1)
sub_1428a6780(buffer2)
return zx.q(rdi)
