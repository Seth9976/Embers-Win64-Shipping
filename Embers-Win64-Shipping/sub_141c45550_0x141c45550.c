// 函数: sub_141c45550
// 地址: 0x141c45550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb0) != 0)
    return 

uint32_t rdx_1 = zx.d(*(arg1 + 2))
char var_28 = *arg1
int64_t var_20 = 0
int32_t var_18_1 = 0
sub_141c38410(&var_28, rdx_1, 1, 0)
int64_t rbp_1 = var_20
arg1[0x18] = var_28

if (&arg1[0x20] != &var_20)
    int64_t rsi_1 = sx.q(var_18_1)
    int32_t r8_1 = *(arg1 + 0x2c)
    *(arg1 + 0x28) = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_141c457d0(&arg1[0x20], rsi_1.d, r8_1)
        memcpy(*(arg1 + 0x20), rbp_1, (rsi_1 << 2).d)
    else
        *(arg1 + 0x2c) = 0

*(arg1 + 0x30) = rdx_1

if (rbp_1 != 0)
    sub_140a74f90(rbp_1)

uint32_t zmm2[0x4] = *(arg1 + 8)
uint64_t rax_4 = zx.q(*(arg1 + 2))
bool cond:1_1 = __andps_xmmxud_memxud(zmm2, data_142d3f770)[0] f> 9.99999994e-09f
*(arg1 + 0x38) = rax_4.d
uint128_t zmm1_1

if (cond:1_1)
    zmm1_1.d = _mm_cvtepi32_ps(zx.o(rax_4.d)).d f* zmm2[0]
label_141c45668:
    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
    zmm1_1.d = zmm1_1.d f- 0.5f
    rax_4 = zx.q(int.d(zmm1_1.d) s>> 1)
else
    char rcx_4 = *arg1
    
    if (rcx_4 != 0)
        if (rcx_4 u<= 2)
            zmm1_1.d = float.s(rax_4)
            zmm1_1.d = zmm1_1.d f* 0.5f
            goto label_141c45668
        
        if (rcx_4 == 3)
            zmm1_1.d = float.s(rax_4)
            zmm1_1.d = zmm1_1.d f* 0.338999987f
            goto label_141c45668
*(arg1 + 0x3c) = rax_4.d
int32_t rax_6 = *(arg1 + 0x4c)
*(arg1 + 0x48) = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405dadb0(&arg1[0x40], 0)

int64_t rbp_2 = sx.q(*(arg1 + 0x38))
int64_t rsi_2 = sx.q(*(arg1 + 0x48))
int32_t rax_7 = (rsi_2 + rbp_2).d
*(arg1 + 0x48) = rax_7

if (rax_7 s> *(arg1 + 0x4c))
    sub_1406105e0(&arg1[0x40])

memset(*(arg1 + 0x40) + (rsi_2 << 2), 0, rbp_2 << 2)
sub_141c45340(&arg1[0x70], arg1)
arg1[0xc] = 0
