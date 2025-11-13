// 函数: sub_142c64a40
// 地址: 0x142c64a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(recv(arg1, arg2, arg3, 0))

if (rcx != -1)
    *arg4 = rcx
    return 0

int32_t rcx_1 = 0x38

if (WSAGetLastError() == WSAEWOULDBLOCK)
    rcx_1 = 0x51

return zx.q(rcx_1)
