// 函数: sub_1428e36a0
// 地址: 0x1428e36a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t optval = 0
int32_t optlen = 4

if (getsockopt(sx.q(arg1), 0xffff, 0x1007, &optval, &optlen) s>= 0)
    return zx.q(optval)

return WSAGetLastError()
