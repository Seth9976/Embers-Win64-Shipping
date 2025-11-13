// 函数: sub_140864010
// 地址: 0x140864010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *(arg3 + 0x24)
uint128_t zmm1 = zx.o(0)
float zmm2

if (*(arg1 + 0x3ec) != 0)
    void* rax_1 = *(arg1 + 0x450)
    void* rdx = arg1 + 0x3f0
    float zmm4 = 3.40282347e+38f
    
    if (rax_1 != 0)
        rdx = rax_1
    
    int96_t var_58_1 = (*(arg5 + 0x1d0)).12
    void* r8 = rdx + sx.q(*(arg1 + 0x458)) * 0xc
    
    if (rdx != r8)
        uint128_t zmm7 = var_58_1:8.d
        int128_t zmm8 = var_58_1:4.d
        int128_t zmm9 = var_58_1.d
        
        do
            zmm1 = zx.o(*rdx)
            float zmm3 = zmm9.d f- zmm1.d
            var_58_1:8.d = *(rdx + 8)
            zmm2 = zmm8.d f- _mm_shuffle_ps(zmm1, zmm1, 0x55).d
            zmm1.d = zmm7.d f- var_58_1:8.d
            rdx += 0xc
            zmm1.d = zmm1.d f* zmm1.d
            zmm4 = _mm_min_ss(zmm3 * zmm3 + zmm2 * zmm2 f+ zmm1.d, zmm4)
        while (rdx != r8)
    
    zmm1 = _mm_sqrt_ss(0, zmm4)

void* rax_4 = *(arg5 + 0x528)
uint128_t zmm0 = 0x3f800000

if (rax_4 != 0)
    *(rax_4 + 0x6b8) |= 0x800
    float temp0_4[0x4] = _mm_max_ss(zmm6[0], 0x3f800000)
    *(rax_4 + 0x44) = zmm1.d
    *(rax_4 + 0x48) = temp0_4[0]

if ((*(arg3 + 0x20) & 1) != 0)
    zmm2 = *(arg3 + 0x24)
    
    if (zmm1.d f< zmm2)
        zmm1.d = zmm1.d f/ zmm2
        zmm0.d = 1f f- zmm1.d
    else
        zmm0 = zx.o(0)

uint8_t rcx_1 = 0
uint8_t rax_5 = arg7[1].b
*arg7 = zmm0.d

if (zmm0.d f<= 0f)
    rcx_1 = 2

rcx_1 |= rax_5 & 0xfd
arg7[1].b = rcx_1
uint8_t rdx_1 = rcx_1

if ((*(arg2 + 0x34) & 1) != 0 && *(arg1 + 0x520) != 0)
    if ((*(arg3 + 0x20) & 4) != 0)
        zmm0.d = (*(*(arg1 + 0x10) + 0x520)).d f- *(arg5 + 0x26c)
        zmm0.d = zmm0.d f- data_14396fef4
        zmm0 = _mm_max_ss(zmm0.d, 0)
    
    if ((*(arg3 + 0x20) & 4) == 0 || zmm0.d f<= *(arg3 + 0x2c))
        rdx_1 = 0
    else
        rdx_1 = 2
    
    rdx_1 = (rdx_1 & 2) | rcx_1
    arg7[1].b = rdx_1

uint8_t rcx_2 = rdx_1

if (arg6 != 0 && *(arg4 + 0x28) == 0)
    if ((*(arg3 + 0x20) & 2) != 0)
        zmm0.d = float.s(zx.q(*(arg4 + 0x60)))
    
    if ((*(arg3 + 0x20) & 2) == 0 || zmm0.d f<= *(arg3 + 0x28))
        rcx_2 = 0
    else
        rcx_2 = 2
    
    rcx_2 = (rcx_2 & 2) | rdx_1

uint8_t result = ((rcx_2 u>> 1 ^ rax_5 u>> 1 ^ rcx_2) & 1) ^ rcx_2
arg7[1].b = result
return result
