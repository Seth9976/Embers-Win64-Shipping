// 函数: sub_140f2d400
// 地址: 0x140f2d400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* rax)[0x4] = *arg1
*rax = __maxss_xmmss_memss(arg3[2] + *arg3, *rax)
void* result = *arg1
*(result + 4) = __maxss_xmmss_memss(arg3[3] + arg3[1], *(result + 4))
return result
