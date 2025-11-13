// 函数: sub_140fcaa00
// 地址: 0x140fcaa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET s = *(arg1 + 0x28)
int16_t r8
int16_t arg_12 = r8
uint16_t optval = zx.w(arg2)
int32_t result
result.b = setsockopt(s, 0xffff, 0x80, &optval, 4) == 0
return result
