// 函数: sub_1403fa800
// 地址: 0x1403fa800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int32_t rcx = *(arg1 + 4)
int64_t rbp = arg4
uint64_t result = zx.q(*(arg1 + 0x30))
int32_t r12 = *(arg1 + 0x28)
int32_t i_8 = arg2
int32_t arg_10 = rcx

if (arg2 == 0)
    i_8 = arg2 + 1
    result = zx.q(result.d << arg7.b)
    r12 -= arg7
    rcx = arg_10

int32_t rdi = arg6
int32_t r15 = 0
int32_t rdx = 0
int32_t result_1 = result.d
int32_t var_68 = 0
int32_t var_64 = 0
int32_t r10_1 = result.d * i_8
int32_t var_60 = r10_1

do
    if (i_8 s> 0)
        float* rdi_2 = (sx.q(rdx) << 2) + rbp
        uint64_t i_7 = zx.q(i_8)
        int64_t rbx_1 = arg3 + (sx.q((r10_1 + rcx) * r15) << 2)
        uint64_t i
        
        do
            sub_1404028b0(arg1 + 0x50, rbx_1, rdi_2, *(arg1 + 0x48), rcx, r12, i_8)
            rcx = arg_10
            rdi_2 = &rdi_2[1]
            rbx_1 += sx.q(result.d) << 2
            i = i_7
            i_7 -= 1
        while (i != 1)
        r15 = var_68
        rdx = var_64
        r10_1 = var_60
        result = zx.q(result_1)
        rbp = arg4
        rdi = arg6
        arg3 = arg_18
    
    rcx = arg_10
    r15 += 1
    rdx += r10_1
    var_68 = r15
    var_64 = rdx
while (r15 s< rdi)

int64_t r9_1 = sx.q(arg5)
int64_t r11 = sx.q(result.d)
int64_t i_9 = sx.q(i_8)
uint128_t zmm1
uint128_t zmm2

if (rdi == 2 && r9_1.d == 1)
    int64_t rcx_3 = sx.q(r10_1)
    int64_t r8_1 = 0
    float zmm0
    
    if (rcx_3 s>= 4)
        result = rbp + 4
        int64_t rdi_4 = i_9 * r11
        int64_t i_6 = ((rcx_3 - 4) u>> 2) + 1
        r8_1 = i_6 << 2
        int64_t i_1
        
        do
            zmm1 = *(result + (rdi_4 << 2) - 4)
            zmm0 = *(result - 4)
            result += 0x10
            zmm1.d = zmm1.d f* 0.5f
            zmm1.d = zmm1.d f+ zmm0 * 0.5f
            zmm0 = *(result - 0x10) * 0.5f
            *(result - 0x14) = zmm1.d
            zmm2.d = (*(result + (rdi_4 << 2) - 0x10)).d f* 0.5f
            zmm2.d = zmm2.d f+ zmm0
            zmm0 = *(result - 0xc) * 0.5f
            *(result - 0x10) = zmm2.d
            zmm1.d = (*(result + (rdi_4 << 2) - 0xc)).d f* 0.5f
            zmm1.d = zmm1.d f+ zmm0
            zmm0 = *(result - 8) * 0.5f
            *(result - 0xc) = zmm1.d
            zmm2.d = (*(result + (rdi_4 << 2) - 8)).d f* 0.5f
            zmm2.d = zmm2.d f+ zmm0
            *(result - 8) = zmm2.d
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    if (r8_1 s< rcx_3)
        result = (r8_1 << 2) + rbp
        int64_t i_5 = rcx_3 - r8_1
        int64_t i_2
        
        do
            zmm1 = *(result + ((i_9 * r11) << 2))
            zmm0 = *result
            result += 4
            zmm1.d = zmm1.d f* 0.5f
            zmm1.d = zmm1.d f+ zmm0 * 0.5f
            *(result - 4) = zmm1.d
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)

if (arg8 != 1)
    int64_t r8_2 = 0
    int64_t r10_2 = sx.q(r10_1)
    result = zx.q(divs.dp.d(sx.q(r10_1), arg8))
    int64_t r9_2 = sx.q(result.d)
    
    do
        uint64_t rdx_8 = 0
        
        if (r9_2 s>= 4)
            zmm2 = _mm_cvtepi32_ps(zx.o(arg8))
            void* rcx_5 = ((i_9 * r11 * r8_2) << 2) + rbp
            result = ((r9_2 - 4) u>> 2) + 1
            rdx_8 = result << 2
            uint64_t i_3
            
            do
                rcx_5 += 0x10
                zmm1.d = zmm2.d f* *(rcx_5 - 0xc)
                *(rcx_5 - 0x10) = zmm2.d f* *(rcx_5 - 0x10)
                *(rcx_5 - 0xc) = zmm1.d
                zmm1.d = zmm2.d f* *(rcx_5 - 4)
                *(rcx_5 - 8) = zmm2.d f* *(rcx_5 - 8)
                *(rcx_5 - 4) = zmm1.d
                i_3 = result
                result -= 1
            while (i_3 != 1)
        
        if (rdx_8 s< r9_2)
            zmm1 = _mm_cvtepi32_ps(zx.o(arg8))
            result = r9_2 - rdx_8
            void* rcx_7 = ((i_9 * r11 * r8_2 + rdx_8) << 2) + rbp
            rdx_8 += result
            uint64_t i_4
            
            do
                rcx_7 += 4
                *(rcx_7 - 4) = zmm1.d f* *(rcx_7 - 4)
                i_4 = result
                result -= 1
            while (i_4 != 1)
        
        if (rdx_8 s< r10_2)
            result = 0
            __builtin_memset(((i_9 * r11 * r8_2 + rdx_8) << 2) + rbp, 0, (r10_2 - rdx_8) << 2)
        
        r8_2 += 1
    while (r8_2 s< r9_1)

return result
