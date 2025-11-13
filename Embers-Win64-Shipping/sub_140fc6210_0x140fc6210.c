// 函数: sub_140fc6210
// 地址: 0x140fc6210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET s = *(arg1 + 0x28)
int32_t namelen = 0x80
return getsockname(s, arg2 + 8, &namelen)
