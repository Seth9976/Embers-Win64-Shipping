// 函数: sub_1428a7820
// 地址: 0x1428a7820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
WSASetLastError(0)
int32_t rax = send(sx.q(*(arg1 + 0x30)), arg2, arg3, 0)
sub_142899cc0(arg1, 0xf)

if (rax s<= 0 && sub_1428a7be0(rax) != 0)
    sub_14289a9a0(arg1, 0xa)

return zx.q(rax)
