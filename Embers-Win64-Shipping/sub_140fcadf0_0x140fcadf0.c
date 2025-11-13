// 函数: sub_140fcadf0
// 地址: 0x140fcadf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET s = *(arg1 + 0x28)
uint32_t argp = zx.d(arg2)
int32_t result
result.b = ioctlsocket(s, 0x8004667e, &argp) == 0
return result
