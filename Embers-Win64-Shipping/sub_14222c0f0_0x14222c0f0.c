// 函数: sub_14222c0f0
// 地址: 0x14222c0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *arg1
int512_t zmm2
zmm2.o = 0x7f7fffff
char rcx = *(rax_1 + 0x18c)
int512_t zmm1

if ((rcx & 0x10) == 0)
    zmm1.o = 0x7f7fffff
else
    zmm1.o = *(rax_1 + 0x94)

if ((rcx & 8) != 0)
    zmm2.o = *(rax_1 + 0x98)

return sub_1422781b0(arg2, zmm1, zmm2) __tailcall
