// 函数: sub_1429d5450
// 地址: 0x1429d5450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 8)
uint16_t rsi = 0
int32_t i = 0

if (*(rdx + 4) s<= 0)
    return 

char* rax = nullptr

do
    int64_t rdi_1 = sx.q(*(*(arg1 + 0xd8) + (rax << 2)))
    
    if (rdi_1.d != 0xffffffff)
        uint8_t r10_1 = rax[*(rdx + 0xf0)]
        uint16_t r8_1 = zx.w(r10_1 u>> 2) & 1
        uint16_t r9_1 = ((((zx.w(r10_1 u>> 1) & 1) | r8_1 << 0xb) << 2
            | (((zx.w(r10_1) & 1) | (rsi & 0xfffe)) & 0xcfbb)) & 0xbfff)
            | ((zx.w(r10_1 u>> 3) & 1) | (r8_1 & 0xfff9) << 6) << 6
        int16_t rdx_3 = 0
        
        if ((r10_1 & 5) == 5)
            rdx_3 = 0x4000
        
        int16_t rcx_8 = 4
        r9_1 |= rdx_3
        
        if ((r10_1 & 0xc) == 0)
            rcx_8 = 1
        
        rsi = r9_1 ^ ((rcx_8 << 7 ^ r9_1) & 0x780)
        *(*(*(arg1 + 0x10) + 0x1b0) + (rdi_1 << 1)) = rsi
    
    rdx = *(arg1 + 8)
    i += 1
    rax = &rax[1]
while (i s< *(rdx + 4))
