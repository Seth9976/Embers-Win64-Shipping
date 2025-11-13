// 函数: sub_140764f00
// 地址: 0x140764f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r9 = *(arg2 + 0x20)
int32_t r8_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r9

if (r8_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r8_1 -= rax_1
        rcx += 1
        rax_1 = r9[rcx]
        rdx += 1
    while (r8_1 s>= rax_1)

int64_t r11 = *(arg2 + 0x18)
void* r14 = *(*(arg2 + 0x38) + (sx.q(*(*(r11 + (sx.q(rdx) << 3)) + sx.q(r8_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t rbp_1 = (rax_5 u>> 0xf).b
int32_t rdx_3 = rax_5 & 0x7fff
int32_t* result

if ((not.b(rbp_1) & 1) == 0)
    result = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)
else
    int32_t rax_7 = *r9
    int32_t r8_2 = 0
    
    if (rdx_3 s>= rax_7)
        int64_t rcx_2 = 0
        
        do
            rdx_3 -= rax_7
            rcx_2 += 1
            rax_7 = r9[rcx_2]
            r8_2 += 1
        while (rdx_3 s>= rax_7)
    
    result = sx.q(rdx_3) + *(r11 + (sx.q(r8_2) << 3))

uint32_t r8_3 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t r8_4 = r8_3 & 0x7fff
int32_t var_28 = r8_4
int32_t r11_1
r11_1.b = r8_4 != 0x7fff
int32_t var_24 = r11_1
int32_t* r10_4
void var_20

if (r8_4 == 0x7fff)
    r10_4 = &var_20
else
    r10_4 = zx.q(*(arg2 + 0x80) * r8_4) + *(arg2 + 0x70)
int32_t* var_18 = r10_4
int32_t rbx = *(r14 + 0x19c)

if (rbx - 1 s< 0)
    return memset(r10_4, 0xff, sx.q(*(arg2 + 0x40)) << 2)

int32_t rcx_5 = *(arg2 + 0x40)

if (*(r14 + 0x198) != 0)
    int32_t rsi_3 = 0
    
    if (rcx_5 s> 0)
        while (true)
            int32_t r8_6 = *result
            result = &result[zx.q(rbp_1)]
            int32_t rdx_6
            
            if (r8_6 s>= 0)
                rdx_6 = rbx - 1
                
                if (r8_6 s< rbx - 1)
                    rdx_6 = r8_6
            else
                rdx_6 = 0
            
            rsi_3 += 1
            *r10_4 = zx.d(*(*(r14 + 0x1a0) + (sx.q(rdx_6 + *(r14 + 0x198)) << 1)))
            
            if (rsi_3 s>= *(arg2 + 0x40))
                break
            
            r10_4 = &r10_4[sx.q(r11_1)]
            r11_1 = var_24
else
    int32_t r9_1 = 0
    
    if (rcx_5 s> 0)
        while (true)
            int32_t rdx_4 = *result
            result = &result[zx.q(rbp_1)]
            int32_t r8_5
            
            if (rdx_4 s>= 0)
                r8_5 = rbx - 1
                
                if (rdx_4 s< rbx - 1)
                    r8_5 = rdx_4
            else
                r8_5 = 0
            
            r9_1 += 1
            int32_t* var_18_1 = &r10_4[sx.q(r11_1)]
            *r10_4 = r8_5
            
            if (r9_1 s>= *(arg2 + 0x40))
                break
            
            r10_4 = var_18_1
            r11_1 = var_24

return result
