// 函数: sub_1415276d0
// 地址: 0x1415276d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x30)
int64_t rbp = sx.q(arg2)
int64_t r9_1 = rbp * 3
double zmm0 = *(arg1 + 0x80) f* *(rax + (r9_1 << 3))
void* r10 = rax + (r9_1 << 3)
*arg3 = zmm0
double zmm1 = *(arg1 + 0x88) f* *(r10 + 8) + zmm0
*arg3 = zmm1
zmm0 = *(arg1 + 0x90) f* *(r10 + 0x10) f- *(arg1 + 0x98) + zmm1
*arg3 = zmm0

if (not(zmm0 >= -1.9999999999999999e-11))
    return -1

if (not(zmm0 <= 1.9999999999999999e-11))
    return 1

int32_t rdx = *(arg1 + 0x74)
int32_t rax_3 = 0

if (rdx s> 0)
    int32_t* r8 = *(arg1 + 0x78)
    int32_t* rcx = r8
    
    do
        if (*rcx == rbp.d)
            return zx.q(r8[sx.q(rax_3) + 1])
        
        rax_3 += 2
        rcx = &rcx[2]
    while (rax_3 s< rdx)

int32_t rax_4 = *(arg1 + 0x70)
int64_t rsi_1

if (rdx != rax_4)
    rsi_1 = *(arg1 + 0x78)
else
    int32_t rax_5 = rax_4 * 2
    int64_t rcx_1 = sx.q(rax_5)
    *(arg1 + 0x70) = rax_5
    int64_t rax_6 = 4 * rcx_1
    
    if (mulu.dp.q(4, rcx_1) u>> 0x40 != zx.o(0))
        rax_6 = -1
    
    int64_t rax_7 = j_sub_140a82f30(rax_6)
    rsi_1 = rax_7
    int32_t i = 0
    
    if (*(arg1 + 0x74) s> 0)
        int64_t r8_1 = 0
        
        do
            r8_1 += 4
            i += 1
            *(r8_1 + rax_7 - 4) = *(r8_1 + *(arg1 + 0x78) - 4)
        while (i s< *(arg1 + 0x74))
    
    j_sub_140a74f90(*(arg1 + 0x78))
    rdx = *(arg1 + 0x74)
    *(arg1 + 0x78) = rsi_1

*(rsi_1 + (sx.q(rdx) << 2)) = rbp.d
int64_t rcx_5 = sx.q(*(arg1 + 0x74))
*(arg1 + 0x74) = (rcx_5 + 1).d
zmm0 = *arg3
int32_t rdi_2

if (zmm0 <= 9.9999999999999994e-12)
    int32_t rdi_1
    rdi_1.b = zmm0 >= -9.9999999999999994e-12
    rdi_2 = rdi_1 - 1
else
    rdi_2 = 1

*(*(arg1 + 0x78) + (rcx_5 << 2) + 4) = rdi_2
int64_t rcx_6 = sx.q(*(arg1 + 0x74))
*(arg1 + 0x74) = (rcx_6 + 1).d
return zx.q(*(*(arg1 + 0x78) + (rcx_6 << 2)))
