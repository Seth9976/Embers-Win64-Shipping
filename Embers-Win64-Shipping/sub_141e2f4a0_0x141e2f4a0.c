// 函数: sub_141e2f4a0
// 地址: 0x141e2f4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x178)
int64_t rcx = sx.q(*(arg1 + 0x180))
void* rax = r8 + rcx * 0xc

if (r8 != rax)
    do
        int32_t zmm1 = *(r8 + 8)
        int32_t zmm0
        
        if (zmm1 f>= 0f)
            zmm0 = _mm_min_ss(*(arg1 + 0x90), zmm1)
        else
            zmm0 = (zx.o(0)).d
        
        *(r8 + 8) = zmm0
        r8 += 0xc
    while (r8 != rax)
    
    rcx = zx.q(*(arg1 + 0x180))

int32_t rdx_2 = sub_141e11140(*(arg1 + 0x178), rcx.d, arg2)

if (*(arg1 + 0x180) s<= 0)
    bool cond:1_1 = *(arg1 + 0x194) == 0
    *(arg1 + 0x190) = 0
    
    if (not(cond:1_1))
        rdx_2 = sub_140638c50(arg1 + 0x188, 0)
else
    int32_t rax_1 = *(arg1 + 0x194)
    *(arg1 + 0x190) = 0
    
    if (rax_1 s< 0 && rax_1 != 0)
        sub_140638c50(arg1 + 0x188, 0)
    
    rdx_2 = *(arg1 + 0x180)
    
    if (rdx_2 s> *(arg1 + 0x194))
        rdx_2 = sub_140638c50(arg1 + 0x188, rdx_2)
    
    int64_t* i = *(arg1 + 0x178)
    
    for (void* rbp_1 = i + sx.q(*(arg1 + 0x180)) * 0xc; i != rbp_1; i += 0xc)
        rdx_2 = sub_140664c50(arg1 + 0x188, i)

return sub_141e46d60(arg1, rdx_2.b) __tailcall
