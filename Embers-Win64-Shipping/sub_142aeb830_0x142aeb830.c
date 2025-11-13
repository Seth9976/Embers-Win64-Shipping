// 函数: sub_142aeb830
// 地址: 0x142aeb830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = *(arg1 + 8)

if (*r8 s> 0)
    return 

void* rdi_1 = *(*(arg1 + 0x10) + 0x20)
int32_t rdx = *(rdi_1 + 8)
char rax_2

if (rdx + 1 s< 0 || *(rdi_1 + 0xc) s< rdx + 1)
    rax_2 = sub_142aeb240(rdi_1, rdx + 1, r8)

if ((rdx + 1 s>= 0 && *(rdi_1 + 0xc) s>= rdx + 1) || rax_2 != 0)
    *(*(rdi_1 + 0x18) + (sx.q(*(rdi_1 + 8)) << 3)) = sx.q(arg2)
    *(rdi_1 + 8) += 1

if (*(*(*(arg1 + 0x10) + 0x20) + 8) s> 0xfffff0 && **(arg1 + 8) s<= 0)
    sub_142af0120(arg1, 0x10314)
