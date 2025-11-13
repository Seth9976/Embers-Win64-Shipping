// 函数: sub_141c3c2c0
// 地址: 0x141c3c2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0xc)
int32_t rbx = 0
void* rsi = arg3
int32_t rdi = 0

if (r10 s> 0)
    int64_t r11_1 = 0
    int64_t r8 = 0
    
    do
        r8 += 4
        int32_t rax_1 = *(arg2 + (r11_1 << 2))
        r11_1 += 2
        rdi += 1
        *(r8 + *(arg1 + 0x10) - 4) = rax_1
        *(r8 + *(arg1 + 0x18) - 4) = *(arg2 + (r11_1 << 2) - 4)
        r10 = *(arg1 + 0xc)
    while (rdi s< r10)

int32_t rdi_1 = *(arg1 + 8)

if (r10 s< rdi_1)
    int64_t r8_1 = sx.q(r10 - 2) << 2
    int64_t rdx = sx.q(r10) << 2
    
    do
        int64_t rcx_3 = *(arg1 + 0x10)
        r8_1 -= 4
        r10 += 1
        rdx += 4
        *(rcx_3 + rdx - 4) = *(rcx_3 + r8_1 + 4)
        int64_t rax_6 = *(arg1 + 0x18)
        *(rax_6 + rdx - 4) = (*(rax_6 + r8_1 + 4) ^ 0x80000000)[0]
        rdi_1 = *(arg1 + 8)
    while (r10 s< rdi_1)

bool cond:0 = data_143de5480 == 0
int64_t rbp = data_143f34930
void* var_38 = rsi
int32_t var_30 = rdi_1
int64_t rcx_4

if (cond:0)
    rcx_4 = 0
else
    rcx_4.b = GetCurrentThreadId() != data_143de5470

if (*(rbp + (rcx_4 << 2)) != 0)
    return sub_141c3eb70(arg1 + 0x10, &var_38)

int128_t* r11_2 = *(arg1 + 0x10)
float zmm0[0x4]

if (rdi_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rdi_1)
    int32_t r9_1 = 0
    
    if (rdi_1 != 0)
        int128_t* r10_1 = r11_2
        
        do
            int32_t rdx_2 = r9_1
            uint32_t i = r9_1 u>> 1
            int32_t rcx_7 = temp0_1 - 1
            
            for (; i != 0; i u>>= 1)
                rcx_7 -= 1
                rdx_2 = (rdx_2 * 2) | (i & 1)
            
            uint64_t rdx_5 = zx.q(rdx_2 << rcx_7.b) & zx.q(rol.d(1, temp0_1.b) - 1)
            
            if (r9_1 u< rdx_5.d)
                zmm0 = *r10_1
                *r10_1 = *(r11_2 + (rdx_5 << 2))
                *(r11_2 + (rdx_5 << 2)) = zmm0[0]
            
            r9_1 += 1
            r10_1 += 4
        while (r9_1 u< rdi_1)

int128_t* r9_2 = *(arg1 + 0x18)

if (rdi_1 != 0)
    uint64_t rflags_2
    int32_t temp0_2
    temp0_2, rflags_2 = _bit_scan_forward(rdi_1)
    
    if (rdi_1 != 0)
        int128_t* r10_2 = r9_2
        
        do
            int32_t rdx_6 = rbx
            uint32_t i_1 = rbx u>> 1
            int32_t rcx_9 = temp0_2 - 1
            
            for (; i_1 != 0; i_1 u>>= 1)
                rcx_9 -= 1
                rdx_6 = (rdx_6 * 2) | (i_1 & 1)
            
            uint64_t rdx_9 = zx.q(rdx_6 << rcx_9.b) & zx.q(rol.d(1, temp0_2.b) - 1)
            
            if (rbx u< rdx_9.d)
                zmm0 = *r10_2
                *r10_2 = *(r9_2 + (rdx_9 << 2))
                *(r9_2 + (rdx_9 << 2)) = zmm0[0]
            
            rbx += 1
            r10_2 += 4
        while (rbx u< rdi_1)
        
        r9_2 = *(arg1 + 0x18)

float zmm1[0x4] = _mm_shuffle_ps(0xbf800000, 0xbf800000, 0)

if (rdi_1 s> 0)
    uint64_t i_4 = zx.q(((rdi_1 - 1) u>> 2) + 1)
    uint64_t i_2
    
    do
        zmm0 = *r9_2
        r9_2 = &r9_2[1]
        r9_2[-1] = _mm_mul_ps(zmm0, zmm1)
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    r9_2 = *(arg1 + 0x18)

sub_141c35660(*(arg1 + 0x10), r9_2, rdi_1)
int64_t result = memcpy(rsi, *(arg1 + 0x10), rdi_1 << 2)
float zmm2[0x4] = 1f f/ _mm_cvtepi32_ps(zx.o(rdi_1)).d
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0)

if (rdi_1 s> 0)
    uint64_t i_5 = zx.q(((rdi_1 - 1) u>> 2) + 1)
    uint64_t i_3
    
    do
        uint128_t zmm0_1 = *rsi
        rsi += 0x10
        *(rsi - 0x10) = _mm_mul_ps(zmm0_1, zmm2)
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

return result
