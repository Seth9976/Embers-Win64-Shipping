// 函数: sub_142bdaa60
// 地址: 0x142bdaa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1
int64_t* rax = sub_142b99860(arg1, 0x9c8, &result_1)
int32_t result = result_1

if (result != 0)
    *arg3 = rax
    return result

*rax = arg1
rax[0x1b].d = zx.d(*(arg2 + 0x78))
void* r8_2 = rax + 0xe4
uint32_t i_2 = zx.d(*(arg2 + 0x7c))
void* rcx_1 = arg2 + 0x80

if (i_2 != 0)
    uint32_t i
    
    do
        int32_t rax_1 = sx.d(*rcx_1)
        rcx_1 += 2
        *r8_2 = rax_1
        r8_2 += 0xc
        i = i_2
        i_2 -= 1
    while (i != 1)

void* rdx = arg2 + 0x9a
*(rax + 0xd4) = zx.d(*(arg2 + 0x7c)) + 1
*(rax + 0xc) = zx.d(*(arg2 + 0x7a))
void* rcx_3 = &rax[3]
uint32_t i_3 = zx.d(*(arg2 + 0x7d))

if (i_3 != 0)
    uint32_t i_1
    
    do
        int32_t rax_5 = sx.d(*rdx)
        rdx += 2
        *rcx_3 = rax_5
        rcx_3 += 0xc
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

rax[1].d = zx.d(*(arg2 + 0x7d)) + 1
sub_142bda650(&rax[0x34], zx.d(*(arg2 + 8)), arg2 + 0xc, zx.d(*(arg2 + 9)), arg2 + 0x28, 
    *(arg2 + 0x74), 0)
int16_t rbx_1 = 1
sub_142bda650(&rax[0x34], zx.d(*(arg2 + 0xa)), arg2 + 0x3c, zx.d(*(arg2 + 0xb)), arg2 + 0x58, 
    *(arg2 + 0x74), 1)
uint32_t r9_2 = zx.d(*(arg2 + 8))
int32_t r8_5 = 0

if (r9_2 != 0)
    do
        uint64_t rax_10 = zx.q(r8_5)
        int16_t rdx_3 = *(arg2 + (zx.q(r8_5 + 1) << 1) + 0xc)
        r8_5 += 2
        rdx_3 -= *(arg2 + (rax_10 << 1) + 0xc)
        
        if (rdx_3 s<= rbx_1)
            rdx_3 = rbx_1
        
        rbx_1 = rdx_3
    while (r8_5 u< r9_2)

uint32_t r9_3 = zx.d(*(arg2 + 9))
int32_t r8_6 = 0

if (r9_3 != 0)
    do
        uint64_t rax_11 = zx.q(r8_6)
        int16_t rdx_4 = *(arg2 + 0x28 + (zx.q(r8_6 + 1) << 1))
        r8_6 += 2
        rdx_4 -= *(arg2 + 0x28 + (rax_11 << 1))
        
        if (rdx_4 s<= rbx_1)
            rdx_4 = rbx_1
        
        rbx_1 = rdx_4
    while (r8_6 u< r9_3)

uint32_t r9_4 = zx.d(*(arg2 + 0xa))
int32_t r8_7 = 0

if (r9_4 != 0)
    do
        uint64_t rax_12 = zx.q(r8_7)
        int16_t rdx_5 = *(arg2 + (zx.q(r8_7 + 1) << 1) + 0x3c)
        r8_7 += 2
        rdx_5 -= *(arg2 + (rax_12 << 1) + 0x3c)
        
        if (rdx_5 s<= rbx_1)
            rdx_5 = rbx_1
        
        rbx_1 = rdx_5
    while (r8_7 u< r9_4)

uint32_t r9_5 = zx.d(*(arg2 + 0xb))
int32_t r8_8 = 0

if (r9_5 != 0)
    do
        uint64_t rax_13 = zx.q(r8_8)
        int16_t rdx_6 = *(arg2 + 0x58 + (zx.q(r8_8 + 1) << 1))
        r8_8 += 2
        rdx_6 -= *(arg2 + 0x58 + (rax_13 << 1))
        
        if (rdx_6 s<= rbx_1)
            rdx_6 = rbx_1
        
        rbx_1 = rdx_6
    while (r8_8 u< r9_5)

uint32_t rax_14 = sub_142b91790(0x3e8, sx.d(rbx_1))

if (*(arg2 + 0x6c) s< rax_14)
    rax_14 = *(arg2 + 0x6c)

rax[0x136].d = rax_14
*(rax + 0x9b4) = *(arg2 + 0x70)
*(rax + 0x9bc) = *(arg2 + 0x74)
*(rax + 0xcc) = 0
rax[0x33] = 0
*arg3 = rax
return zx.q(result_1)
