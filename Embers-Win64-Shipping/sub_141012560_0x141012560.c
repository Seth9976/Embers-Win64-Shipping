// 函数: sub_141012560
// 地址: 0x141012560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9_1 = (arg2 u>> 4).d
int32_t r10_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
void* rbx = arg2
arg2.b = 0
int64_t r8 = *(arg1 + 0xd0)
int32_t r11_2 = neg.d(r10_1 + r9_1) ^ r10_1 u>> 0xd
int32_t r9_4 = (r9_1 - r10_1 - r11_2) ^ r11_2 u>> 0xc
int32_t r10_4 = (r10_1 - r9_4 - r11_2) ^ r9_4 << 0x10
int32_t r11_5 = (r11_2 - r10_4 - r9_4) ^ r10_4 u>> 5
int32_t r9_7 = (r9_4 - r10_4 - r11_5) ^ r11_5 u>> 3
int32_t r10_7 = (r10_4 - r9_7 - r11_5) ^ r9_7 << 0xa
int32_t r11_8 = (r11_5 - r10_7 - r9_7) ^ r10_7 u>> 0xf
uint64_t r9_9 = zx.q(*(arg1 + 0xe8)) & zx.q(r11_8)
uint64_t result

if (r8 != 0)
    result = zx.q(r9_9.d)
    
    if (*(r9_9 + r8) s>= 0)
        do
            if (rbx == *(*(arg1 + 0xd8) + (result << 3)))
                return result
            
            r9_9 = zx.q(r9_9.d + 1)
            arg2.b += 1
            result = zx.q(r9_9.d)
        while (*(r9_9 + r8) s>= arg2.b)

sub_141011ff0(arg1 + 0xc8, arg2.b, arg1 + 0xc8, r9_9.d, rbx, r11_8, arg4)

if (rbx != 0)
    *(rbx + 8) += 1

int64_t rsi_1 = sx.q(*(arg1 + 0x100))
int32_t rax_15 = (rsi_1 + 1).d
*(arg1 + 0x100) = rax_15

if (rax_15 s> *(arg1 + 0x104))
    sub_1405a4d70(arg1 + 0xf8)

result = *(arg1 + 0xf8)
*(result + (rsi_1 << 3)) = rbx

if (arg3 == 0)
    return result

*(arg3 + 8) += 1
int64_t rdi_1 = sx.q(*(arg1 + 0x110))
int32_t rax_16 = (rdi_1 + 1).d
*(arg1 + 0x110) = rax_16

if (rax_16 s> *(arg1 + 0x114))
    sub_1405a4d70(arg1 + 0x108)

arg4.q = 0
*(*(arg1 + 0x108) + (rdi_1 << 3)) = arg3
return sub_1405d1550(&arg4)
