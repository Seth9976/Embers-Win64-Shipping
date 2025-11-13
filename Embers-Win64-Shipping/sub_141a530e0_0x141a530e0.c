// 函数: sub_141a530e0
// 地址: 0x141a530e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = *(arg1 + 0x58)
int64_t rbx
rbx.b = ((*(arg1 + 0x50)).b & 3) == 3
arg2[2].b &= 0xfc
void** rax_2 = sub_140a82f30(0x18, 8)
arg2[2].b |= 1
bool cond:0 = (arg2[2].b & 2) != 0
*arg2 = rax_2

if (cond:0)
    rax_2 = arg2

*(rax_2 + 9) = rbx.b
*(rax_2 + 0x11) = rbx.b
rax_2[1].b = 0
*rax_2 = &data_14302f3d8
rax_2[2].b = rdi
return arg2
