// 函数: sub_140e3bc80
// 地址: 0x140e3bc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e3c210(arg1, 0xc4)
int32_t zmm3[0x4] = zx.o(0)
void* rax = arg2 + 5
int32_t zmm2[0x4] = zx.o(0)
int64_t i_3 = 2
int64_t i

do
    int32_t zmm0[0x4] = zx.o(0)
    uint128_t zmm1 = _mm_unpacklo_epi8(zx.o(*(rax - 4)), zmm0[0].q)
    rax += 8
    zmm3 = _mm_add_epi32(_mm_unpacklo_epi16(zmm1, zmm0[0].q), zmm3)
    zmm2 = _mm_add_epi32(
        _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rax - 8)), zmm0[0].q), zmm0[0].q), zmm2)
    i = i_3
    i_3 -= 1
while (i != 1)
int32_t temp0_7[0x4] = _mm_add_epi32(zmm2, zmm3)
int32_t temp0_9[0x4] = _mm_add_epi32(temp0_7, _mm_bsrli_si128(temp0_7, 8))
int32_t r15 = _mm_add_epi32(temp0_9, _mm_bsrli_si128(temp0_9, 4))[0]
uint8_t arg_20 = ((r15 + 0x13) u>> 8).b
uint8_t rax_2

if (*(arg1 + 0x34b5) == i_3.b)
    rax_2 = 0
else
    int64_t* rcx = *arg1
    rax_2, i_3 = (*(*rcx + 8))(rcx, &arg_20, 1)
    
    rax_2 = rax_2 == 0 ? 0 : 1

*(arg1 + 0x34b5) = rax_2
arg_20 = (r15 + 0x13).b
char rax_5

if (rax_2 != 0)
    int64_t* rcx_1 = *arg1
    rax_5, i_3 = (*(*rcx_1 + 8))(rcx_1, &arg_20, 1)

if (rax_2 == 0 || rax_5 == 0)
    i_3.b = 0
else
    i_3.b = 1

char result_1
char result = (result_1 << 4) + arg4
*(arg1 + 0x34b5) = i_3.b
result_1 = result

if (i_3.b != 0)
    int64_t* rcx_2 = *arg1
    result = (*(*rcx_2 + 8))(rcx_2, &result_1, 1)

if (i_3.b == 0 || result == 0)
    result = 0
else
    result = 1

*(arg1 + 0x34b5) = result

for (char* i_1 = 1; i_1 s<= 0x10; )
    result_1 = *(i_1 + arg2)
    
    if (result == 0)
        result = 0
    else
        int64_t* rcx_4 = *arg1
        
        if ((*(*rcx_4 + 8))(rcx_4, &result_1, 1) == 0)
            result = 0
        else
            result = 1
    
    i_1 = &i_1[1]
    *(arg1 + 0x34b5) = result

if (r15 s> 0)
    char* i_2 = nullptr
    
    do
        result_1 = i_2[arg3]
        
        if (result == 0)
            result = 0
        else
            int64_t* rcx_6 = *arg1
            
            if ((*(*rcx_6 + 8))(rcx_6, &result_1, 1) == 0)
                result = 0
            else
                result = 1
        
        i_2 = &i_2[1]
        *(arg1 + 0x34b5) = result
    while (i_2 s< sx.q(r15))

return result
