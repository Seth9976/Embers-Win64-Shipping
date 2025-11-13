// 函数: sub_141e59840
// 地址: 0x141e59840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_3 = arg1[0x44].d
int32_t result = r8_3 & 1
uint32_t r9 = zx.d(arg2)

if (result == r9)
    return result

arg1[0x44].d = (r8_3 & 0xfffffffe) | r9
return sub_141ee8490(arg1) __tailcall
