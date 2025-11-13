// 函数: sub_1413df390
// 地址: 0x1413df390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1 = arg1[2].d
void* rax = *arg1

if (zmm1 <= 0f)
    *(rax + 0x48) = 0xbf800000
    void* rax_2 = *arg1
    *(rax_2 + 0x50) = 0x3f800000
    return rax_2

*(rax + 0x48) = 1f / zmm1
void* rax_1 = *arg1
*(rax_1 + 0x50) = (*(arg1 + 0xc) f+ arg1[1].d f+ arg1[2].d) f* *(rax_1 + 0x48)
return rax_1
