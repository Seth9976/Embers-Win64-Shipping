// 函数: sub_140fcada0
// 地址: 0x140fcada0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) != 2)
    int64_t rax
    rax.b = 1
    return rax

SOCKET s = *(arg1 + 0x28)
uint32_t optval = zx.d(arg2)
int32_t rax_2
rax_2.b = setsockopt(s, 6, 1, &optval, 4) == 0
return rax_2
