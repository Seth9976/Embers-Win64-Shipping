// 函数: sub_141d5db30
// 地址: 0x141d5db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x80)
int64_t rdi = 0

if (rax != 0)
    rdi = sub_141998570(*(rax + 0x60), *(rax + 0x64), *(rax + 0x3c), 1)

void* rax_2 = *(arg1 + 0x88)

if (rax_2 != 0)
    rdi += sub_141998570(*(rax_2 + 0x60), *(rax_2 + 0x64), *(rax_2 + 0x3c), 1)

int64_t* result = *(arg1 + 0xa0)
*result = rdi
return result
