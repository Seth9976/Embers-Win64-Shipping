// 函数: sub_140fc83d0
// 地址: 0x140fc83d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET s = *(arg1 + 0x28)
int32_t namelen = 0x80
int32_t result
result.b = getpeername(s, arg2 + 8, &namelen) == 0
return result
