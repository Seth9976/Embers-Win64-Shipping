// 函数: sub_1418a2ff0
// 地址: 0x1418a2ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x78)
int64_t rax = *(arg1 + 0xc0)
int128_t zmm6 = zx.o(0)

if (rax s> 0)
    zmm6.d = float.s(*(arg1 + 0xc8))
    zmm6.d = zmm6.d f/ float.s(rax)

if (arg1 != -0x78)
    LeaveCriticalSection(arg1 + 0x78)

return zmm6.d
