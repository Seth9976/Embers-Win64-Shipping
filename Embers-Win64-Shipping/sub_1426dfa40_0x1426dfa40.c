// 函数: sub_1426dfa40
// 地址: 0x1426dfa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *arg2
void* r10_1 = zx.q(*(arg1 + 0x52)) + *(zx.q(*(r11 + 0x260)) * 0x58 + *(r11 + 0x110) + 0x30)
int32_t r9_1 = -2
char rax_2 = *(r10_1 + 9)

if (arg3 == 0xffffffff)
    *(r10_1 + 8) = 1
    *(r10_1 + 9) = rax_2 & 0xfb
    *(r10_1 + 4) = *(arg2 + 0x34)
    return 0

if ((rax_2 & 3) != 0 && (*(r11 + 0x190) == 0 || (*(r11 + 0x19b) & 1) != 0))
    r9_1 = 1
    *(r10_1 + 9) = rax_2 & 0xfd
else if ((rax_2 & 4) != 0)
    r9_1 = 0
    *(r10_1 + 9) = rax_2 & 0xfb

if (arg3 == r9_1 && *(r10_1 + 4) == *(arg2 + 0x34))
    arg2[8].d |= 2

*(r10_1 + 4) = *(arg2 + 0x34)
return zx.q(r9_1)
