// 函数: sub_1428e4f50
// 地址: 0x1428e4f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg4 == 0)
    sub_1428a5670(0xd, 0xe2, 0xde, "crypto\asn1\a_int.c", 0x9a)
    return 0

int32_t r8_1 = zx.d(*arg3) & 0x80

if (arg2 != 0)
    *arg2 = r8_1

if (arg4 == 1)
    if (arg1 != 0)
        char rax_2 = *arg3
        
        if (r8_1 != 0)
            rax_2 = not.b(rax_2) + 1
        
        *arg1 = rax_2
    
    return 1

char rcx = *arg3
void* rbx = nullptr
int32_t rax_4 = 0

if (rcx == 0)
    rax_4 = 1
    rbx = 1
label_1428e50aa:
    
    if (r8_1 == (zx.d(arg3[1]) & 0x80))
        sub_1428a5670(0xd, 0xe2, 0xdd, "crypto\asn1\a_int.c", 0xbb)
        return 0
else if (rcx == 0xff)
    void* i = 1
    int32_t rdx = 0
    
    if (arg4 u> 1)
        if (arg4 - 1 u>= 8)
            uint128_t zmm2 = zx.o(0)
            uint128_t zmm3 = zx.o(0)
            uint128_t zmm1
            
            do
                uint128_t zmm0 = zx.o(0)
                zmm2 |= _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(arg3 + i)), zmm0.q), zmm0.q)
                zmm1 = _mm_unpacklo_epi8(zx.o(*(arg3 + i + 4)), zmm0.q)
                i += 8
                zmm1 = _mm_unpacklo_epi16(zmm1, zmm0.q) | zmm3
                zmm3 = zmm1
            while (i u< arg4 - (zx.q((arg4 - 1).d) & 7))
            
            zmm2 |= zmm1
            zmm2 |= _mm_bsrli_si128(zmm2, 8)
            rdx = (zmm2 | _mm_bsrli_si128(zmm2, 4)).d
        
        while (i u< arg4)
            uint32_t rcx_3 = zx.d(*(i + arg3))
            i += 1
            rdx |= rcx_3
    
    rax_4.b = rdx != 0
    rbx.b = rdx != 0
    
    if (rdx != 0)
        goto label_1428e50aa

int64_t result = arg4 - zx.q(rax_4)

if (arg1 != 0)
    int64_t var_8_1 = arg5
    void* r8_3 = rbx + arg3 + result
    uint32_t rdi_1 = zx.d((sbb.d(arg5.d, arg5.d, r8_1 != 0)).b)
    uint32_t rcx_8 = rdi_1 & 1
    
    if (result != 0)
        char* i_1 = r8_3 - rbx - arg3
        
        do
            uint32_t rax_6 = zx.d(*(r8_3 - 1))
            r8_3 -= 1
            i_1 -= 1
            uint32_t rcx_9 = rcx_8 + (rax_6 ^ rdi_1)
            *(i_1 + arg1) = rcx_9.b
            rcx_8 = rcx_9 u>> 8
        while (i_1 != 0)

return result
