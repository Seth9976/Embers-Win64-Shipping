// 函数: sub_142b182a0
// 地址: 0x142b182a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 1)
    return 

int32_t rbx_1 = 0
int64_t rcx = sx.q(arg3)
int32_t r10_1 = 0
int32_t r11_1 = 0
int64_t i = 0

if (rcx s>= 2)
    do
        int32_t rax_1
        rax_1.b = (*(arg2 + (i << 3)) & 0xffff00ff003f) != 0
        r10_1 += rax_1 + 1
        int32_t rax_3
        rax_3.b = (*(arg2 + (i << 3) + 8) & 0xffff00ff003f) != 0
        i += 2
        r11_1 += rax_3 + 1
    while (i s< rcx - 1)

if (i s< rcx)
    rbx_1.b = (*(arg2 + (i << 3)) & 0xffff00ff003f) != 0
    rbx_1 += 1

int32_t rbx_2 = rbx_1 + r11_1 + r10_1
int64_t r8 = *(arg2 + (sx.q(arg3 - 1) << 3))
uint32_t rdx_1 = r8.d u>> 8
int32_t rcx_3 = (r8 s>> 0x20).d
int32_t rdi_5 = (rdx_1 & 0xff00) | (r8.d & 0x3f) | rcx_3 << 0x10
int32_t rdi_10

if (rdi_5 != 0)
    rdi_10 = rdi_5 | 0xc0
else
    rdi_10 = ((r8.d & 0xff00) | (rdx_1 & 0xff0000)) u>> 8 | (rcx_3 & 0xffff0000)

if (rbx_2 s> sub_142a86d70(*(arg1 + 8), rdi_10))
    sub_142a86e40(*(arg1 + 8), rdi_10, rbx_2, *(arg1 + 0x10))
