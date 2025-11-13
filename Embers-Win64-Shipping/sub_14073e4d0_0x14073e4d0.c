// 函数: sub_14073e4d0
// 地址: 0x14073e4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_2 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_3 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
uint32_t i = zx.d(i_3)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        rdx += 1
    while (i s>= *(rcx + r8))

int64_t r11 = *(arg2 + 0x18)
int32_t* r15 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(rdx) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r12_1 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* rdi_1

if ((not.b(r12_1) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int32_t* rdx_2 = nullptr
        
        do
            i_1 -= *(rdx_2 + r8)
            rax_7 += 1
            rdx_2 = rax_7 << 2
            r9 += 1
        while (i_1 s>= *(rdx_2 + r8))
    
    rdi_1 = sx.q(i_1) + *(r11 + (sx.q(r9) << 3))

int32_t rdx_4 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_38 = rdx_4
int32_t var_30 = 0
int32_t rax_10
rax_10.b = rdx_4 != 0x7fff
int64_t result_1

if (rdx_4 == 0x7fff)
    result_1 = &var_30
else
    result_1 = zx.q(*(arg2 + 0x80) * rdx_4) + *(arg2 + 0x70)

if (sub_140d3c6e0(r15) != 0)
    sub_142591550()

int64_t result = *(r15 + 0x58)
void* rbp = nullptr
int64_t result_2 = 0

if (result != 0)
    int64_t rcx_7 = **(result + 0x58)
    result = sx.q(r15[0x1a])
    rbp = *(rcx_7 + (result << 3))
    
    if (r15[0x86].b != 0)
        result = sub_140d3c6e0(r15)
        int64_t result_3 = result
        
        if (result == 0)
            result_2 = rbp + 0x138
        else
            int64_t rax_13 = sub_142591550()
            void* rcx_9 = *(result_3 + 0x10)
            result = rax_13 + 0x30
            int64_t rdx_5 = sx.q(*(result + 8))
            
            if (rdx_5.d s> *(rcx_9 + 0x38) || *(*(rcx_9 + 0x30) + (rdx_5 << 3)) != result
                    || *(result_3 + 0x430) == 0)
                result_2 = rbp + 0x138
            else
                result = sub_141f66050(result_3, r15[0x1a])
                result_2 = result

if (*(arg2 + 0x40) s> 0)
    int64_t result_4 = result_1
    
    do
        if (result_2 == 0 || *(rbp + 0xec) s<= *rdi_1)
            result.b = 0
        else
            result.b = 1
        
        char temp0_1 = result.b
        result.b = neg.b(result.b)
        rdi_1 = &rdi_1[zx.q(r12_1)]
        *result_4 = sbb.d(result.d, result.d, temp0_1 != 0)
        i_2 += 1
        result = result_1
        result_4 = result + (sx.q(rax_10) << 2)
        result_1 = result_4
    while (i_2 s< *(arg2 + 0x40))

return result
