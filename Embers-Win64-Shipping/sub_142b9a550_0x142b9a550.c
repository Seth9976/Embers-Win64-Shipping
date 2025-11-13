// 函数: sub_142b9a550
// 地址: 0x142b9a550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg1
int32_t rax = arg1[1]
int32_t r11

if (rax s> r8)
    r8 = neg.d(r8)
    int32_t rcx = r8
    
    if (rax s<= r8)
        r11 = -0xb40000
        
        if (rax s> 0)
            r11 = 0xb40000
        
        rax = neg.d(rax)
    else
        r8 = rax
        r11 = 0x5a0000
        rax = rcx
else if (rax s>= neg.d(r8))
    r11 = 0
else
    int32_t rax_1 = neg.d(rax)
    r11 = -0x5a0000
    rax = r8
    r8 = rax_1

int32_t r10 = 1
void* const rbx = &data_14367f1c0
int32_t r9_3

for (int32_t i = 1; i s< 0x17; )
    if (rax s<= 0)
        r9_3 = r8 - ((r10 + rax) s>> i.b)
        rax += (r10 + r8) s>> i.b
        r11 -= *rbx
    else
        r9_3 = ((r10 + rax) s>> i.b) + r8
        rax -= (r10 + r8) s>> i.b
        r11 += *rbx
    
    r10 *= 2
    i += 1
    rbx += 4
    r8 = r9_3

*arg1 = r9_3

if (r11 s< 0)
    int32_t rax_6 = neg.d((8 - r11) & 0xfffffff0)
    arg1[1] = rax_6
    return rax_6

int32_t rax_3 = (r11 + 8) & 0xfffffff0
arg1[1] = rax_3
return rax_3
