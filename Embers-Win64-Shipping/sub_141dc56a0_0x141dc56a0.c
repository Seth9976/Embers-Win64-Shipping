// 函数: sub_141dc56a0
// 地址: 0x141dc56a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t r9 = 0
int32_t rbx = *(arg1 + 0x30)
int32_t rdi = 0
int32_t r11_2 = (*(arg1 + 0x44) + *(arg1 + 0x24)) * 0x50 + *(arg1 + 0x34) * 0x70
void* rax_3 = *(arg1 + 0x28)

if (rbx s>= 2)
    uint64_t i_1 = zx.q(((rbx - 2) u>> 1) + 1)
    rdi = (((rbx - 2) u>> 1) + 1) * 2
    uint64_t i
    
    do
        uint64_t rcx_4 = zx.q(*(rax_3 + 0x84))
        r8 += *(rax_3 + 0x14) * 0x48
        rax_3 += 0xe0
        r9 += (rcx_4 * 9).d << 3
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rdi s< rbx)
    r11_2 += *(rax_3 + 0x14) * 0x48

return zx.q(r8 + r9 + r11_2)
