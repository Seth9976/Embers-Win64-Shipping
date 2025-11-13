// 函数: sub_142c66c70
// 地址: 0x142c66c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

enum WSA_ERROR optval = WSA_WAIT_EVENT_0
int32_t optlen = 4
SleepEx(0, 0)
enum WSA_ERROR optval_1

if (getsockopt(arg1, 0xffff, 0x1007, &optval, &optlen) == 0)
    optval_1 = optval
else
    optval_1 = WSAGetLastError()

char rcx_1

if (optval_1 == WSA_WAIT_EVENT_0 || optval_1 == WSAEISCONN)
    rcx_1 = 1
else
    rcx_1 = 0

if (arg2 != 0)
    *arg2 = optval_1

return zx.q(rcx_1)
