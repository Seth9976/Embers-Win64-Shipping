// 函数: sub_1417b0b60
// 地址: 0x1417b0b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x30)

if (rdi s<= 0)
    return 0

int32_t rax = sub_140b212b0(*(arg1 + 0x28), 0xc, 0)
int32_t rbx = rax

if (rdi s<= 1)
    return rax

uint64_t i_1 = zx.q(rdi - 1)
int64_t r14_1 = 0xc
uint64_t i

do
    int32_t rax_1 = sub_140b212b0(*(arg1 + 0x28) + r14_1, 0xc, 0)
    int32_t rbx_2 = (rbx - rax_1) ^ rax_1 u>> 0xd
    r14_1 += 0xc
    int32_t r8_3 = (0x9e3779b9 - rbx_2 - rax_1) ^ rbx_2 << 8
    int32_t rbx_6 = (rax_1 - r8_3 - rbx_2) ^ r8_3 u>> 0xd
    int32_t rdx_4 = (rbx_2 - r8_3 - rbx_6) ^ rbx_6 u>> 0xc
    int32_t r8_6 = (r8_3 - rdx_4 - rbx_6) ^ rdx_4 << 0x10
    int32_t rbx_9 = (rbx_6 - r8_6 - rdx_4) ^ r8_6 u>> 5
    int32_t rdx_7 = (rdx_4 - r8_6 - rbx_9) ^ rbx_9 u>> 3
    int32_t r8_9 = (r8_6 - rdx_7 - rbx_9) ^ rdx_7 << 0xa
    rbx = (rbx_9 - r8_9 - rdx_7) ^ r8_9 u>> 0xf
    i = i_1
    i_1 -= 1
while (i != 1)
return rbx
