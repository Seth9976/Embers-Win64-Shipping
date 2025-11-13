// 函数: sub_14222c150
// 地址: 0x14222c150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *arg1
float zmm3[0x4]

if ((*(rax_1 + 0x84) & 1) == 0)
    zmm3 = 0x3f800000
else
    zmm3 = *(rax_1 + 0x1a0)

return sub_1422355c0(rax_1 + 0x9c, arg2, *(rax_1 + 0x88), zmm3) __tailcall
