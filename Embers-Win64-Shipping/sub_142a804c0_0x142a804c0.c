// 函数: sub_142a804c0
// 地址: 0x142a804c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t i = sx.q(*(arg1 + 0x14))
int64_t rdx = *(arg1 + 0x70)
int32_t r10 = 0
char* r11 = *(arg1 + 0x78)
int32_t r9 = 0
uint32_t rsi = zx.d(*(arg1 + 0x8d))
int32_t rbp = 0
*(arg1 + 0x144) = 0
int32_t r12 = **(arg1 + 0xd0)

if (i s> 0)
    char* rdx_1 = rdx - r11
    int32_t r14_1 = 1
    char* arg_18 = rdx_1
    int64_t rax_2 = neg.q(r11)
    int32_t* r15_1 = nullptr
    
    do
        char rbx_1 = *(rdx_1 + r11)
        char rcx_1 = *r11
        
        if (rbx_1 - 0x14 u<= 1)
            r10 += 1
            
            if (r10 s> *(arg1 + 0x144))
                *(arg1 + 0x144) = r10
        else if (rbx_1 == 0x16)
            r10 -= 1
        else if (rbx_1 == 7)
            r10 = 0
        
        if (*(arg1 + 0x8e) != 0 && rbp == r12 && r14_1 s< *(arg1 + 0xc8))
            int64_t rax_4 = *(arg1 + 0xd0)
            r14_1 += 1
            r15_1 = &r15_1[2]
            rsi = *(r15_1 + rax_4 + 4)
            r12 = *(r15_1 + rax_4)
        
        char rdx_2 = rcx_1
        rcx_1 &= 0x7f
        rdx_2 &= 0x80
        
        if (zx.d(rcx_1) s< rsi || rcx_1 u> 0x7d)
            if (rcx_1 != 0)
                *arg2 = 1
                return 0
            
            if (rbx_1 != 7)
                rcx_1 = rsi.b
                *r11 = rsi.b | rdx_2
        
        uint64_t rax_8 = zx.q(rcx_1) & 1
        
        if (rdx_2 == 0)
            r9 = r9 | *((rax_8 << 2) + 0x143641188) | 1 << (zx.d(rbx_1) u% 0x20)
        else
            r9 |= *((rax_8 << 2) + 0x143641190)
        
        r11 = &r11[1]
        rdx_1 = arg_18
        rbp += 1
    while (&r11[rax_2] s< i)

if ((r9 & 0x7fdfd8) != 0)
    r9 |= *(((zx.q(*(arg1 + 0x8d)) & 1) << 2) + &data_143641180)

*(arg1 + 0xbc) = r9
uint64_t rax

if ((r9 & 0x20e002) == 0)
    rax.b = (r9.b & 0x20) != 0

if ((r9 & 0x20e002) != 0 || (rax.b & (r9 & 0x7ddfd8) != 0) != 0)
    rdi.b = (r9 & 0x1901825) != 0
    rdi += 1

return zx.q(rdi)
