// 函数: sub_140b388f0
// 地址: 0x140b388f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x58)
void** r9 = rax

if (rax == 0)
    return rax

*rax = 0
rax[1].b = *arg2
*(rax + 0xc) = *(arg2 + 4)
rax[2].d = *(arg2 + 8)
rax[3] = 0
r9[3] = *(arg2 + 0x10)
__builtin_memset(&arg2[0x10], 0, 0x20)
r9[4].d = *(arg2 + 0x18)
*(r9 + 0x24) = *(arg2 + 0x1c)
r9[5] = 0
r9[5] = *(arg2 + 0x20)
r9[6].d = *(arg2 + 0x28)
*(r9 + 0x34) = *(arg2 + 0x2c)
r9[7].d = *(arg2 + 0x30)
r9[8] = *(arg2 + 0x38)
r9[9] = *(arg2 + 0x40)
r9[0xa] = *(arg2 + 0x48)
*(arg2 + 0x48) = 0
*(arg2 + 0x40) = 0
void** rax_11 = *arg1
*arg1 = r9
*rax_11 = r9
rax_11.b = 1
return rax_11
