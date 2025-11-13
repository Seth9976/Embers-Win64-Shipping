// 函数: sub_1428e37b0
// 地址: 0x1428e37b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t argp = arg2
int32_t rax = ioctlsocket(sx.q(arg1), 0x8004667e, &argp)

if (rax s< 0)
    sub_1428a5670(2, 5, WSAGetLastError(), "crypto\bio\b_sock.c", 0xc3)

int64_t result
result.b = rax == 0
return result
