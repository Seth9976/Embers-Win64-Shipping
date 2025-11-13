// 函数: sub_14076ded0
// 地址: 0x14076ded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_3 = 0
int32_t r9 = 0
int32_t* r8 = *(arg2 + 0x20)
int16_t i_4 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_4)

if (i s>= *r8)
    int64_t rax_1 = 0
    int32_t* rcx = nullptr
    
    do
        i -= *(rcx + r8)
        rax_1 += 1
        rcx = rax_1 << 2
        r9 += 1
    while (i s>= *(rcx + r8))

int64_t r11 = *(arg2 + 0x18)
int32_t* r14 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(r9) << 3)))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r12_1 = (rax_5 u>> 0xf).b
int32_t i_1 = rax_5 & 0x7fff
int32_t* rdi_1

if ((not.b(r12_1) & 1) == 0)
    rdi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_1 s>= *r8)
        int64_t rax_7 = 0
        int32_t* rdx_1 = nullptr
        
        do
            i_1 -= *(rdx_1 + r8)
            rax_7 += 1
            rdx_1 = rax_7 << 2
            r9_1 += 1
        while (i_1 s>= *(rdx_1 + r8))
    
    rdi_1 = sx.q(i_1) + *(r11 + (sx.q(r9_1) << 3))

int32_t rdx_3 = zx.d(rax[2]) & 0x7fff
*(arg2 + 0x10) = &rax[3]
int32_t var_38 = rdx_3
int32_t var_30 = 0
int32_t result_1
result_1.b = rdx_3 != 0x7fff
void* var_28

if (rdx_3 == 0x7fff)
    var_28 = &var_30
else
    var_28 = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)

void* result = sub_140d3c6e0(r14)

if (result != 0)
    result = sub_142591550()

void* r15 = *(r14 + 0x58)

if (r15 != 0 && r14[0x86].b != 0)
    result = sub_140d3c6e0(r14)
    void* result_2 = result
    
    if (result != 0)
        void* rax_10 = sub_142591550()
        void* rcx_8 = *(result_2 + 0x10)
        result = rax_10 + 0x30
        int64_t rdx_4 = sx.q(*(result + 8))
        
        if (rdx_4.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rdx_4 << 3)) == result
                && *(result_2 + 0x430) != 0)
            result = sub_141f66050(result_2, r14[0x1a])

if (r15 == 0)
    int32_t i_2 = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_7 = var_28
            i_2 += 1
            result = sx.q(result_1)
            var_28 = rdx_7 + (result << 2)
            *rdx_7 = 0
        while (i_2 s< *(arg2 + 0x40))
else
    int32_t r10_2 = *(r15 + 0x1b0)
    
    if (*(arg2 + 0x40) s> 0)
        do
            int32_t rcx_11 = *rdi_1
            rdi_1 = &rdi_1[zx.q(r12_1)]
            char r8_1
            
            if (rcx_11 s< 0 || rcx_11 s>= r10_2)
                r8_1 = 0
            else
                r8_1 = 1
            
            int32_t* rdx_6 = var_28
            int64_t result_3 = sx.q(result_1)
            result = zx.q(sbb.d(result_3.d, result_3.d, r8_1 != 0))
            var_28 = &rdx_6[result_3]
            i_3 += 1
            *rdx_6 = result.d
        while (i_3 s< *(arg2 + 0x40))

return result
