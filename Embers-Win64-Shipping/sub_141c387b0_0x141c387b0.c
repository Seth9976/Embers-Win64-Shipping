// 函数: sub_141c387b0
// 地址: 0x141c387b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2
int64_t r13 = sx.q(arg3)

if (arg4 == 0)
    rdi = arg2 - 1

int64_t r10 = arg1
int32_t rax_1 = rdi + 1

if ((rdi.b & 1) == 0)
    rax_1 = rdi

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_1)
uint128_t zmm7 = zx.o(0)
int32_t rax_4 = (temp1 - temp0) s>> 1
uint128_t result = _mm_cvtepi32_ps(zx.o(rdi - 1))
int128_t zmm8
zmm8.d = 6.28318548f f/ result.d

if (rax_4 s>= 0)
    int64_t rbx_1 = arg1
    double zmm6[0x2]
    double var_48_1[0x2] = zmm6
    int64_t i_2 = sx.q(rax_4 + 1)
    int64_t i
    
    do
        result.d = zmm7.d f+ zmm7.d
        zmm6 = zx.o(0)
        zmm6[0] = fconvert.d(cosf(result.d))
        zmm6[0] = zmm6[0] f* 0x3fb47ae147ae147b
        result.d = cosf(zmm7.d).d f* 0.5f
        zmm7.d = zmm7.d f+ zmm8.d
        result.q = fconvert.d(0.419999987f f- result.d)
        zmm6[0] = zmm6[0] f+ result.q
        result = _mm_cvtpd_ps(zmm6)
        int64_t rcx_1
        int64_t rdi_2
        
        if (r13.d s> 0)
            rdi_2, rcx_1 = __memfill_u32(rbx_1, result.d, r13)
        rbx_1 += r13 << 2
        i = i_2
        i_2 -= 1
    while (i != 1)
    r10 = arg1

if (rax_4 + 1 s< arg2)
    int64_t r8 = r10 + (sx.q((rax_4 + 1) * r13.d) << 2)
    uint128_t* rdx_1 = r10 + ((sx.q(rax_4) * 2 - sx.q(rax_4 + 1)) << 2)
    uint64_t i_3 = zx.q(arg2 - (rax_4 + 1))
    uint64_t i_1
    
    do
        result = *rdx_1
        int64_t rcx_4
        int64_t rdi_5
        
        if (r13.d s> 0)
            rdi_5, rcx_4 = __memfill_u32(r8, result.d, r13)
        r8 += r13 << 2
        rdx_1 -= 4
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
