// 函数: sub_140fca150
// 地址: 0x140fca150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET s = *(arg1 + 0x28)
uint32_t optval = zx.d(arg2)
int32_t result
result.b = setsockopt(s, 0xffff, 0x20, &optval, 4) == 0
return result
