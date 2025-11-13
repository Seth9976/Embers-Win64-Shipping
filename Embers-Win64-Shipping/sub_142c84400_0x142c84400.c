// 函数: sub_142c84400
// 地址: 0x142c84400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
char buf = 0xff
char arg_11 = arg2.b
char arg_12 = arg3.b

if (send(arg1[0x47], &buf, 3, 0) s< 0)
    arg4 = sub_142c64760(rbp, "Sending data failed (%d)", zx.q(WSAGetLastError()), arg4)

return sub_142c83c00(*arg1, "SENT", arg2, arg3, arg4)
