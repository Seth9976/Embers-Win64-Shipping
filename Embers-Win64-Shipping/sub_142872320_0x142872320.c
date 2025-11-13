// 函数: sub_142872320
// 地址: 0x142872320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
SetLastError(NO_ERROR)
void* rax = *(arg1 + 0xa8)

if (*(rax + 0x104) != 0)
    sub_142872450(arg1, 0)
    rax = *(arg1 + 0xa8)

*(rax + 0x110) = 1
int32_t rax_2 = (*(*(arg1 + 8) + 0x68))(arg1, 0x17, 0, arg2, arg3, arg4, arg5)

if (rax_2 != 0xffffffff || *(*(arg1 + 0xa8) + 0x110) != 2)
    *(*(arg1 + 0xa8) + 0x110) = 0
    return zx.q(rax_2)

sub_142856610(arg1, rax_2 + 2)
int32_t rax_4 = (*(*(arg1 + 8) + 0x68))(arg1, 0x17, 0, arg2, arg3, arg4, arg5)
sub_142856610(arg1, 0)
return zx.q(rax_4)
