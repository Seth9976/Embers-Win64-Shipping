// 函数: sub_1407daf70
// 地址: 0x1407daf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t* r8 = *(arg2 + 0x20)
int32_t r9_1 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t rdx = 0
int32_t rax_1 = *r8

if (r9_1 s>= rax_1)
    int64_t rcx = 0
    
    do
        r9_1 -= rax_1
        rcx += 1
        rax_1 = r8[rcx]
        rdx += 1
    while (r9_1 s>= rax_1)

void* r11 = *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(rdx) << 3)) + sx.q(r9_1))) << 3))
uint32_t rax_5 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]

if ((not.b((rax_5 u>> 0xf).b) & 1) != 0)
    int32_t rax_7 = *r8
    int32_t rcx_3 = rax_5 & 0x7fff
    
    if (rcx_3 s>= rax_7)
        int64_t rdx_3 = 0
        
        do
            rcx_3 -= rax_7
            rdx_3 += 1
            rax_7 = r8[rdx_3]
        while (rcx_3 s>= rax_7)

uint32_t rax_8 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]

if ((not.b((rax_8 u>> 0xf).b) & 1) != 0)
    int32_t rax_10 = *r8
    int32_t rcx_5 = rax_8 & 0x7fff
    
    if (rcx_5 s>= rax_10)
        int64_t rdx_4 = 0
        
        do
            rcx_5 -= rax_10
            rdx_4 += 1
            rax_10 = r8[rdx_4]
        while (rcx_5 s>= rax_10)

uint32_t rax_11 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]

if ((not.b((rax_11 u>> 0xf).b) & 1) != 0)
    int32_t i = rax_11 & 0x7fff
    
    if (i s>= *r8)
        int64_t rax_13 = 0
        int32_t* rdx_5 = nullptr
        
        do
            i -= *(rdx_5 + r8)
            rax_13 += 1
            rdx_5 = rax_13 << 2
        while (i s>= *(rdx_5 + r8))

uint32_t rax_14 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]

if ((not.b((rax_14 u>> 0xf).b) & 1) != 0)
    int32_t rax_16 = *r8
    int32_t rcx_8 = rax_14 & 0x7fff
    
    if (rcx_8 s>= rax_16)
        int64_t rdx_6 = 0
        
        do
            rcx_8 -= rax_16
            rdx_6 += 1
            rax_16 = r8[rdx_6]
        while (rcx_8 s>= rax_16)

uint32_t rax_17 = zx.d(rax[5])
*(arg2 + 0x10) = &rax[6]

if ((not.b((rax_17 u>> 0xf).b) & 1) != 0)
    int32_t rax_19 = *r8
    int32_t rcx_10 = rax_17 & 0x7fff
    
    if (rcx_10 s>= rax_19)
        int64_t rdx_7 = 0
        
        do
            rcx_10 -= rax_19
            rdx_7 += 1
            rax_19 = r8[rdx_7]
        while (rcx_10 s>= rax_19)

int32_t rcx_12 = zx.d(rax[6]) & 0x7fff
*(arg2 + 0x10) = &rax[7]
int32_t var_38 = rcx_12
int32_t r9_7
r9_7.b = rcx_12 != 0x7fff
int32_t var_34 = r9_7
int32_t* rdx_10
void var_30

if (rcx_12 == 0x7fff)
    rdx_10 = &var_30
else
    rdx_10 = zx.q(*(arg2 + 0x80) * rcx_12) + *(arg2 + 0x70)
int32_t* var_28 = rdx_10
uint32_t rcx_13 = zx.d(rax[7])
*(arg2 + 0x10) = &rax[8]
int32_t r8_3 = rcx_13 & 0x7fff
int32_t var_20 = r8_3
int64_t result
result.b = r8_3 != 0x7fff
int32_t result_1 = result.d
int64_t result_2

if (r8_3 == 0x7fff)
    void var_18
    result = &var_18
    result_2 = &var_18
else
    result_2 = zx.q(*(arg2 + 0x80) * r8_3) + *(arg2 + 0x70)

void* rbx = *(r11 + 8)

if (rbx != 0)
    int64_t* rbx_1 = *(rbx + 0x50)
    int32_t rdx_11 = *(r11 + 0x17c)
    uint32_t rax_22 = zx.d(*(rbx_1 + 0x5f))
    
    if (rax_22 s>= rdx_11)
        rdx_11 = rax_22
    
    int32_t rax_23 = sub_1423647f0(rbx_1, rdx_11)
    int64_t* rbx_3 = *(*rbx_1 + (sx.q(rax_23) << 3))
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    void* var_48
    result = sub_14229e7e0(&rbx_3[0x2f], &var_48)
    int32_t i_1 = 0
    
    if (*(arg2 + 0x40) s> 0)
        int32_t* r8_5 = var_28
        
        do
            *r8_5 = 0
            i_1 += 1
            *result_2 = 0
            r8_5 = &var_28[sx.q(var_34)]
            result = result_2
            var_28 = r8_5
            result_2 = result + (sx.q(result_1) << 2)
        while (i_1 s< *(arg2 + 0x40))
    
    if (rbx_3 != 0)
        result = zx.q(rbx_3[1].d)
        rbx_3[1].d -= 1
        
        if (result.d == 1)
            return (**rbx_3)(rbx_3, 1)
else
    int32_t r8_4 = 0
    
    if (*(arg2 + 0x40) s> 0)
        while (true)
            r8_4 += 1
            int32_t* var_28_1 = &rdx_10[sx.q(r9_7)]
            *rdx_10 = 0
            int32_t* result_3 = result_2
            result = sx.q(result_1)
            result_2 = &result_3[result]
            *result_3 = 0
            
            if (r8_4 s>= *(arg2 + 0x40))
                break
            
            rdx_10 = var_28_1
            r9_7 = var_34

return result
