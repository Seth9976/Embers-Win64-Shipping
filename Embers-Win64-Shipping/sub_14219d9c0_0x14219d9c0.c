// 函数: sub_14219d9c0
// 地址: 0x14219d9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421c0540(arg1, arg2, arg3)
void* r8 = arg1[0x3a]
int64_t r9 = sx.q(arg1[4].d) << 3
arg1[0x3b] = *(r9 + *(r8 + 0x100))
arg1[0x3c] = *(r9 + *(r8 + 0x110))
arg1[0x3d] = *(r9 + *(r8 + 0x120))
arg1[0x3e] = *(r9 + *(r8 + 0x130))
int64_t result = *(r8 + 0x140)
arg1[0x40] = *(r9 + result)
return result
