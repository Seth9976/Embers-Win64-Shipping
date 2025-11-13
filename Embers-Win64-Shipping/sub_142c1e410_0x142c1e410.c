// 函数: sub_142c1e410
// 地址: 0x142c1e410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0x80)
void* rcx = *(rdi + 0x18)
int32_t rsi = *(rdi + 0x20)
uint32_t rdx = *(rcx + 0x2c)
int32_t rbx = sx.d(zx.w(*(arg1 + 2)) * 0x100 + zx.w(*(arg1 + 3)))

if (rdx == 0)
    rdx = sub_142bf7870(rcx)

uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(rsi)).d f* _mm_cvtepi32_ps(zx.o(rbx)).d
zmm2.d = zmm2.d f/ float.s(zx.q(rdx))
*arg4 = zmm2.d
int32_t rsi_1 = *(rdi + 0x24)
void* rcx_1 = *(rdi + 0x18)
int32_t rbx_1 = sx.d(zx.w(*(arg1 + 4)) * 0x100 + zx.w(*(arg1 + 5)))
uint32_t result_1 = *(rcx_1 + 0x2c)

if (result_1 == 0)
    result_1 = sub_142bf7870(rcx_1)

int128_t* const rsi_2 = &data_14369a5d0
int32_t rbx_2 = 0
uint64_t result = zx.q(result_1)
zmm2.d = _mm_cvtepi32_ps(zx.o(rsi_1)).d f* _mm_cvtepi32_ps(zx.o(rbx_1)).d
zmm2.d = zmm2.d f/ float.s(result)
*arg5 = zmm2.d
uint64_t rbp = zx.q(*(rdi + 0x28))
uint128_t zmm0

if (rbp.d != 0 || *(rdi + 0x34) != 0)
    uint16_t rdx_3 = zx.w(*(arg1 + 6))
    uint64_t r8 = zx.q(*(arg1 + 7))
    int128_t* const rcx_4
    
    if (0 != rdx_3 * 0x100 + r8.w)
        rcx_4 = (zx.q(rdx_3.b) << 8) + arg1 + r8
    else
        rcx_4 = &data_14369a5d0
    
    uint32_t rax_5 = zx.d(*(rcx_4 + 5))
    uint32_t rdx_5 = zx.d(*(rcx_4 + 4)) << 8
    uint32_t rdx_6 = rdx_5 + rax_5
    
    if (rdx_5 == neg.d(rax_5))
        result = 0
    else if (rdx_6 u<= 3)
        if (rbp.d == 0)
            result = 0
        else
            int32_t rax_6 = sub_142c1ea80(rcx_4, rbp.d)
            
            if (rax_6 == 0)
                result = 0
            else
                result = divs.dp.q(sx.o(sx.q(*(rdi + 0x20)) * sx.q(rax_6)), rbp)
    else if (rdx_6 != 0x8000)
        result = 0
    else
        result = sub_142c1fca0(rcx_4, rdi, *(arg2 + 0xa8))
    
    zmm0.d = _mm_cvtepi32_ps(zx.o(result.d)).d f+ *arg4
    *arg4 = zmm0.d

uint64_t rbp_1 = zx.q(*(rdi + 0x2c))

if (rbp_1.d != 0 || *(rdi + 0x34) != 0)
    uint16_t rdx_11 = zx.w(*(arg1 + 8))
    uint64_t r8_2 = zx.q(*(arg1 + 9))
    
    if (0 != rdx_11 * 0x100 + r8_2.w)
        rsi_2 = (zx.q(rdx_11.b) << 8) + arg1 + r8_2
    
    result = zx.q(*(rsi_2 + 5))
    uint32_t rdx_13 = zx.d(*(rsi_2 + 4)) << 8
    int32_t rdx_14 = rdx_13 + result.d
    
    if (rdx_13 != neg.d(result.d))
        if (rdx_14 u<= 3)
            if (rbp_1.d != 0)
                result = sub_142c1ea80(rsi_2, rbp_1.d)
                
                if (result.d != 0)
                    result = divs.dp.q(sx.o(sx.q(*(rdi + 0x24)) * sx.q(result.d)), rbp_1)
                    rbx_2 = result.d
        else if (rdx_14 == 0x8000)
            result = sub_142c1fda0(rsi_2, rdi, *(arg2 + 0xa8))
            rbx_2 = result.d
    
    zmm0.d = _mm_cvtepi32_ps(zx.o(rbx_2)).d f+ *arg5
    *arg5 = zmm0.d

return result
