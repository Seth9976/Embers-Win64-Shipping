// 函数: sub_140b54b50
// 地址: 0x140b54b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbx = *(arg1 + 0x29)

if ((rbx & 1) != 0)
    *arg2 = 0
    return 

int64_t rax = *(arg1 + 0xa8)
int32_t i = 0
int32_t rbp_1 = rax.d & 7
char* r11_2 = (rax s>> 3) + *(arg1 + 0x90)
int64_t r14 = *(arg1 + 0xa0)
int32_t rsi = 0
int32_t r10 = 0

do
    rax += 8
    
    if (rax s> r14)
        *(arg1 + 0x29) = rbx | 1
        break
    
    *(arg1 + 0xa8) = rax
    uint8_t rdx_1 = *r11_2
    char* rcx_2
    rcx_2.b = rbp_1 != 0
    char r8_1 = *(rcx_2 + r11_2) & ((1 << rbp_1.b) - 1)
    r11_2 = &r11_2[1]
    r8_1 = r8_1 << ((8 - rbp_1.b) & 7) | (rdx_1 u>> rbp_1.b & ((1 << (8 - rbp_1.b)) - 1))
    rsi |= zx.d(r8_1) u>> 1 << r10.b
    
    if ((r8_1 & 1) == 0)
        break
    
    i += 1
    r10 += 7
while (i u< 5)

*arg2 = rsi
