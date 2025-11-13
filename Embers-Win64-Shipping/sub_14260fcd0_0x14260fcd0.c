// 函数: sub_14260fcd0
// 地址: 0x14260fcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_3 = not.q(arg2 << 0x1f) + arg2
int64_t r8_4 = (r8_3 u>> 0x14 ^ r8_3) * 0x41
int64_t r8_5 = r8_4 ^ r8_4 u>> 0xc
int64_t rcx_3 = not.q(r8_5 << 0x16) + r8_5
uint64_t rbx_3 = (rcx_3 u>> 0x20 ^ zx.q(rcx_3.d)) & zx.q(*(arg1 + 0x1c) - 1)
int16_t i = *(arg1[1] + (rbx_3 << 1))

if (i != 0xffff)
    int64_t r8_6 = *arg1
    
    do
        uint64_t i_1 = zx.q(i)
        uint64_t rax_8 = zx.q(i_1.d) << 5
        
        if (*(r8_6 + rax_8 + 0x18) == arg2)
            return rax_8 + r8_6
        
        i = *(arg1[2] + (i_1 << 1))
    while (i != 0xffff)

int32_t r11 = *(arg1 + 0x24)

if (r11 s>= arg1[4].d)
    return 0

uint64_t r8_7 = zx.q(r11.w)
*(arg1 + 0x24) = r11 + 1
void* result = (zx.q(r8_7.d) << 5) + *arg1
*(result + 0xc) = 0
*(result + 0x18) = arg2
*(result + 0x14) = 0
*(arg1[2] + (r8_7 << 1)) = *(arg1[1] + (rbx_3 << 1))
*(arg1[1] + (rbx_3 << 1)) = r11.w
return result
