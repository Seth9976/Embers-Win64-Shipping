// 函数: sub_142007680
// 地址: 0x142007680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx == 0)
    *arg2 = zx.o(0)
    return 

int32_t rax
int32_t zmm0
zmm0, rax = sub_142004530(rcx)
uint128_t zmm7 = *(arg1 + 0x14)
float zmm2[0x4] = zmm7
zmm2[0] = zmm2[0] f/ zmm0
int32_t rdx = int.d(zmm2[0])

if (rdx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx)).d f== zmm2[0]))
    zmm2 = _mm_cvtepi32_ps(zx.o(rdx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))

void* r14 = *arg1
int32_t i = 0
zmm2[0] = zmm2[0] f* zmm0
zmm7.d = zmm7.d f- zmm2[0]

if (*(r14 + 0x30) s<= 0)
    return 

int32_t* rdi_1 = nullptr

do
    void* rsi_1 = *(r14 + 0x28)
    uint128_t zmm0_1
    int32_t zmm6_1
    zmm0_1, zmm6_1, zmm7 = sub_141f86ef0(sub_141f8b8d0(rsi_1 + 8 + rdi_1), zmm7, zx.o(0))
    rax = *(rdi_1 + rsi_1)
    uint128_t zmm1_1 = zmm0_1
    
    if ((rax.b & 1) != 0)
        zmm0_1 = *arg2
        
        if (not(zmm1_1.d f< zmm0_1.d))
            zmm0_1 = _mm_min_ss(zmm1_1.d, zmm6_1)
        
        *arg2 = zmm0_1.d
        rax = *(rdi_1 + rsi_1)
    
    if ((rax.b & 2) != 0)
        zmm0_1 = *(arg2 + 4)
        
        if (not(zmm1_1.d f< zmm0_1.d))
            zmm0_1 = _mm_min_ss(zmm1_1.d, zmm6_1)
        
        *(arg2 + 4) = zmm0_1.d
        rax = *(rdi_1 + rsi_1)
    
    if ((rax.b & 4) != 0)
        zmm0_1 = *(arg2 + 8)
        
        if (not(zmm1_1.d f< zmm0_1.d))
            zmm0_1 = _mm_min_ss(zmm1_1.d, zmm6_1)
        
        *(arg2 + 8) = zmm0_1.d
        rax = *(rdi_1 + rsi_1)
    
    if ((rax.b & 8) != 0)
        zmm0_1 = *(arg2 + 0xc)
        
        if (not(zmm1_1.d f< zmm0_1.d))
            zmm0_1 = _mm_min_ss(zmm1_1.d, zmm6_1)
        
        *(arg2 + 0xc) = zmm0_1.d
    
    i += 1
    rdi_1 = &rdi_1[0x24]
while (i s< *(r14 + 0x30))
