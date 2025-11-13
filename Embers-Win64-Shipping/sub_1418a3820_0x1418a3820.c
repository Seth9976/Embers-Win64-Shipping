// 函数: sub_1418a3820
// 地址: 0x1418a3820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
uint128_t zmm6 = zx.o(0)
EnterCriticalSection(arg1 + 0x90)
uint64_t rcx_1 = zx.q(*(arg1 + 0x88))

if (rcx_1.d u>= arg3)
    zmm6 = zx.o(*(arg1 + 0x80))
    r14 = rcx_1.d
    *(arg1 + 0x80) = 0
    *(arg1 + 0x88) = 0
    zmm6.q = zmm6.q f/ float.d(rcx_1)

*arg2 = zmm6.q
arg2[1].d = r14

if (arg1 != -0x90)
    LeaveCriticalSection(arg1 + 0x90)

return arg2
