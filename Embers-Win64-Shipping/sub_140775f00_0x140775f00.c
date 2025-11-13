// 函数: sub_140775f00
// 地址: 0x140775f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2[0xa5]

if (*(arg1 + 8) == 0)
    if (rsi != 0)
        sub_140859420(rsi, 1, arg3)
    
    (*(*arg2 + 0x270))(arg2)
else
    (*(*arg2 + 0x268))(arg2, 0)

uint32_t rbp = zx.d(*(arg1 + 9))
int32_t rcx_3 = arg2[0xa4].d

if ((rcx_3 & 1) != rbp)
    arg2[0xa4].d = ((rcx_3 ^ rbp) & 1) ^ rcx_3
    sub_140752510(arg2)
    (*(*arg2 + 0x340))(arg2, zx.q(rbp.b))

*(arg2 + 0x54c) ^= ((zx.d(*(arg1 + 0xa)) * 2) ^ *(arg2 + 0x54c)) & 2

if (rsi != 0 && *(arg1 + 0x10) != 0)
    sub_14085ba80(rsi, *(arg1 + 0xc))

arg2[0xa6].b = *(arg1 + 0x14)
arg2[0xa8].d = *(arg1 + 0x18)
int32_t result = *(arg1 + 0x1c)
*(arg2 + 0x534) = result
arg2[0xa9].b = 0
return result
