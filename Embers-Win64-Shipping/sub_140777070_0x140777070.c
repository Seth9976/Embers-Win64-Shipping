// 函数: sub_140777070
// 地址: 0x140777070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[0xa4].d
uint32_t rdi = zx.d(arg2)
int32_t result = r8 & 1

if (result == rdi)
    return result

arg1[0xa4].d = (r8 & 0xfffffffe) | rdi
sub_140752510(arg1)
return (*(*arg1 + 0x340))(arg1, zx.q(rdi.b))
