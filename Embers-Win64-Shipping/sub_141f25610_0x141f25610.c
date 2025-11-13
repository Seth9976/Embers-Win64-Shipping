// 函数: sub_141f25610
// 地址: 0x141f25610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = arg1[0x3f].b
char rdi = *(arg1 + 0x8a)
arg1[0x3f].b = rbx & 0xfe
int64_t result = (*(*arg1 + 0x528))()
rbx = (rbx ^ arg1[0x3f].b) & 1
arg1[0x3e] = arg2
arg1[0x3f].b ^= rbx

if ((rdi & 1) == 0)
    return result

int512_t zmm1
zmm1.o = zx.o(0)
return (*(*arg1 + 0x520))(arg1, zmm1)
