// 函数: sub_14073e9d0
// 地址: 0x14073e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t i_6 = 0
int32_t r9 = 0
int32_t* rax_1 = *(arg2 + 0x20)
int16_t i_7 = *rax & 0x7fff
*(arg2 + 0x10) = &rax[1]
uint32_t i = zx.d(i_7)

if (i s>= *rax_1)
    int64_t rcx = 0
    int32_t* r8_1 = nullptr
    
    do
        i -= *(r8_1 + rax_1)
        rcx += 1
        r8_1 = rcx << 2
        r9 += 1
    while (i s>= *(r8_1 + rax_1))

int64_t r11 = *(arg2 + 0x18)
int32_t* r15 = *(*(arg2 + 0x38) + (sx.q(*(sx.q(i) + *(r11 + (sx.q(r9) << 3)))) << 3))
uint32_t rcx_4 = zx.d(rax[1])
*(arg2 + 0x10) = &rax[2]
uint8_t r12_1 = (rcx_4 u>> 0xf).b
int32_t i_1 = rcx_4 & 0x7fff
int32_t* rsi_1

if ((not.b(r12_1) & 1) == 0)
    rsi_1 = zx.q(*(arg2 + 0x80) * i_1) + *(arg2 + 0x70)
else
    int32_t r9_1 = 0
    
    if (i_1 s>= *rax_1)
        int64_t rcx_6 = 0
        int32_t* r8_3 = nullptr
        
        do
            i_1 -= *(r8_3 + rax_1)
            rcx_6 += 1
            r8_3 = rcx_6 << 2
            r9_1 += 1
        while (i_1 s>= *(r8_3 + rax_1))
    
    rsi_1 = sx.q(i_1) + *(r11 + (sx.q(r9_1) << 3))

uint32_t rcx_8 = zx.d(rax[2])
*(arg2 + 0x10) = &rax[3]
int32_t i_2 = rcx_8 & 0x7fff

if ((not.b((rcx_8 u>> 0xf).b) & 1) != 0 && i_2 s>= *rax_1)
    int64_t rdx_4 = 0
    int32_t* r8_4 = nullptr
    
    do
        i_2 -= *(r8_4 + rax_1)
        rdx_4 += 1
        r8_4 = rdx_4 << 2
    while (i_2 s>= *(r8_4 + rax_1))

uint32_t rcx_9 = zx.d(rax[3])
*(arg2 + 0x10) = &rax[4]
int32_t i_3 = rcx_9 & 0x7fff

if ((not.b((rcx_9 u>> 0xf).b) & 1) != 0 && i_3 s>= *rax_1)
    int64_t rdx_7 = 0
    int32_t* r8_5 = nullptr
    
    do
        i_3 -= *(r8_5 + rax_1)
        rdx_7 += 1
        r8_5 = rdx_7 << 2
    while (i_3 s>= *(r8_5 + rax_1))

uint32_t rcx_10 = zx.d(rax[4])
*(arg2 + 0x10) = &rax[5]
int32_t i_4 = rcx_10 & 0x7fff

if ((not.b((rcx_10 u>> 0xf).b) & 1) != 0 && i_4 s>= *rax_1)
    int64_t rdx_10 = 0
    int32_t* r8_6 = nullptr
    
    do
        i_4 -= *(r8_6 + rax_1)
        rdx_10 += 1
        r8_6 = rdx_10 << 2
    while (i_4 s>= *(r8_6 + rax_1))

int32_t rdx_12 = zx.d(rax[5]) & 0x7fff
*(arg2 + 0x10) = &rax[6]
int32_t var_38 = rdx_12
int32_t var_30 = 0
int32_t result_1
result_1.b = rdx_12 != 0x7fff
void* var_28

if (rdx_12 == 0x7fff)
    var_28 = &var_30
else
    var_28 = zx.q(*(arg2 + 0x80) * rdx_12) + *(arg2 + 0x70)

if (sub_140d3c6e0(r15) != 0)
    sub_142591550()

void* rax_4 = *(r15 + 0x58)
void* rdx_13 = nullptr
void* r14_1

if (rax_4 != 0)
    r14_1 = *(**(rax_4 + 0x58) + (sx.q(r15[0x1a]) << 3))
    
    if (r15[0x86].b != 0)
        void* rax_7 = sub_140d3c6e0(r15)
        void* rax_8
        void* rcx_17
        int64_t rdx_14
        
        if (rax_7 != 0)
            rax_8 = sub_142591550()
            rcx_17 = *(rax_7 + 0x10)
            rdx_14 = sx.q(*(rax_8 + 0x38))
        
        if (rax_7 == 0 || rdx_14.d s> *(rcx_17 + 0x38)
                || *(*(rcx_17 + 0x30) + (rdx_14 << 3)) != rax_8 + 0x30 || *(rax_7 + 0x430) == 0)
            rdx_13 = r14_1 + 0x138
        else
            rdx_13 = sub_141f66050(rax_7, r15[0x1a])

int64_t* r14_2

if (rax_4 == 0 || r14_1 == 0)
    r14_2 = nullptr
else
    r14_2 = *(r14_1 + 0x18)

uint64_t result = zx.q(*(arg2 + 0x40))

if (rdx_13 == 0)
    int32_t i_5 = 0
    
    if (result.d s> 0)
        do
            void* rdx_17 = var_28
            i_5 += 1
            result = sx.q(result_1)
            var_28 = rdx_17 + (result << 2)
            *rdx_17 = 0
        while (i_5 s< *(arg2 + 0x40))
else if (result.d s> 0)
    do
        uint64_t rbp_2 = zx.q(*rsi_1)
        rsi_1 = &rsi_1[zx.q(r12_1)]
        int32_t rax_12
        
        if (r14_2 != 0)
            rax_12 = (*(*r14_2 + 0x58))(r14_2)
        
        char r8_7
        
        if (r14_2 == 0 || rax_12 s<= ((rbp_2 << 1) + 2).d + rbp_2.d)
            r8_7 = 0
        else
            r8_7 = 1
        
        int32_t* rdx_16 = var_28
        int64_t result_2 = sx.q(result_1)
        result = zx.q(sbb.d(result_2.d, result_2.d, r8_7 != 0))
        var_28 = &rdx_16[result_2]
        i_6 += 1
        *rdx_16 = result.d
    while (i_6 s< *(arg2 + 0x40))

return result
