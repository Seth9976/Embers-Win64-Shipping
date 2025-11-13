// 函数: sub_142b9a640
// 地址: 0x142b9a640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *arg1
int32_t r11 = arg2
int32_t r8 = arg1[1]

if (arg2 s< 0xffd30000)
    uint64_t i_3 = zx.q((0xffd2ffff - arg2) u/ 0x5a0000 + 1)
    r11 += ((0xffd2ffff - arg2) u/ 0x5a0000 + 1) * 0x5a0000
    uint64_t i
    
    do
        int32_t rcx = r8
        r8 = neg.d(r10)
        r10 = rcx
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r11 s> 0x2d0000)
    uint64_t i_4 = zx.q((r11 - 0x2d0001) u/ 0x5a0000 + 1)
    r11 += ((r11 - 0x2d0001) u/ 0x5a0000 + 1) * 0xffa60000
    uint64_t i_1
    
    do
        int32_t r8_2 = neg.d(r8)
        r8 = r10
        r10 = r8_2
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int32_t r9_7 = 1
void* const rbx = &data_14367f1c0
int32_t result
int32_t rdx_4

for (int32_t i_2 = 1; i_2 s< 0x17; )
    if (r11 s>= 0)
        rdx_4 = r10 - ((r9_7 + r8) s>> i_2.b)
        result = (r9_7 + r10) s>> i_2.b
        r8 += result
        r11 -= *rbx
    else
        result = (r9_7 + r10) s>> i_2.b
        rdx_4 = ((r9_7 + r8) s>> i_2.b) + r10
        r8 -= result
        r11 += *rbx
    
    r9_7 *= 2
    i_2 += 1
    rbx += 4
    r10 = rdx_4

*arg1 = rdx_4
arg1[1] = r8
return result
