// 函数: sub_1428a78a0
// 地址: 0x1428a78a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg2 == 0)
    return 0

WSASetLastError(0)
int32_t rax = recv(sx.q(*(arg1 + 0x30)), arg2, arg3, 0)
sub_142899cc0(arg1, 0xf)

if (rax s<= 0 && sub_1428a7be0(rax) != 0)
    sub_14289a9a0(arg1, 9)

return zx.q(rax)
