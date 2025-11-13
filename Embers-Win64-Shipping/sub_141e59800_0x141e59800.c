// 函数: sub_141e59800
// 地址: 0x141e59800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_2 = arg1[0x44].d
int32_t result = r8_2 u>> 2 & 1
uint64_t r9 = zx.q(arg2)

if (result == r9.d)
    return result

arg1[0x44].d = (r9 << 2).d | (r8_2 & 0xfffffffb)
return sub_141ee8490(arg1) __tailcall
