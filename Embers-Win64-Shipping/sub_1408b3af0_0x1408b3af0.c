// 函数: sub_1408b3af0
// 地址: 0x1408b3af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1
int32_t rsi = *arg4
int64_t rbx = 0
int64_t r14 = 1
int32_t r15 = arg1
int128_t zmm6 = 0x3f800000
int32_t* var_c8 = nullptr
int32_t var_bc = 0

if (rsi s< 1)
    rsi = 1

int32_t var_c0 = rsi
sub_1406105e0(&var_c8)
int32_t* rbp = var_c8
int64_t rsi_1 = sx.q(rsi)

if (rsi_1 s>= 4)
    void* rax_1 = &rbp[2]
    int64_t i_1 = ((rsi_1 - 4) u>> 2) + 1
    rbx = i_1 << 2
    int64_t i
    
    do
        rax_1 += 0x10
        *(rax_1 - 0x18) = 1f f/ zmm6.d
        zmm6.d = zmm6.d f* *arg2
        *(rax_1 - 0x14) = 1f f/ zmm6.d
        zmm6.d = zmm6.d f* *arg2
        *(rax_1 - 0x10) = 1f f/ zmm6.d
        zmm6.d = zmm6.d f* *arg2
        *(rax_1 - 0xc) = 1f f/ zmm6.d
        zmm6.d = zmm6.d f* *arg2
        i = i_1
        i_1 -= 1
    while (i != 1)

while (rbx s< rsi_1)
    rbp[rbx] = 1f f/ zmm6.d
    rbx += 1
    zmm6.d = zmm6.d f* *arg2

uint32_t zmm0_2[0x4]
int128_t zmm7
uint32_t zmm9[0x4]
int128_t zmm10
int128_t zmm11
zmm0_2, zmm7, zmm9, zmm10, zmm11 = sub_1408b32e0(&arg_8, arg5)
float zmm13 = *arg3
int128_t zmm1_1
zmm1_1.d = zmm7.d f- _mm_and_ps(zmm0_2, 0x7fffffff)[0]
zmm1_1.d = zmm1_1.d f* zmm1_1.d
int128_t zmm6_1
zmm6_1.d = zmm1_1.d f* *rbp
_mm_max_ss(_mm_min_ss(zmm13 f* zmm1_1.d, zmm7.d), 0)

if (rsi_1 s> 1)
    uint32_t var_68_1[0x4] = zmm9
    zmm9 = *arg2
    int128_t var_78_1 = zmm10
    zmm10 = *(arg5 + 4)
    int128_t var_88_1 = zmm11
    zmm11 = *(arg5 + 8)
    
    do
        zmm10.d = zmm10.d f* zmm9[0]
        r15 += 1
        zmm9[0] = zmm9[0] f* *arg5
        arg_8 = r15
        zmm11.d = zmm11.d f* zmm9[0]
        *arg5 = zmm9[0]
        *(arg5 + 4) = zmm10.d
        *(arg5 + 8) = zmm11.d
        float zmm8_1
        uint32_t zmm12_1[0x4]
        float zmm13_1
        int32_t zmm14_1
        zmm0_2, zmm6_1, zmm7, zmm8_1, zmm9, zmm10, zmm11, zmm12_1, zmm13_1, zmm14_1 =
            sub_1408b32e0(&arg_8, arg5)
        float zmm1_2 = zmm7.d f- _mm_and_ps(zmm0_2, zmm12_1)[0]
        zmm1_2 = zmm1_2 * zmm1_2 * zmm8_1
        zmm8_1 = zmm13_1 * zmm1_2
        zmm1_2 = zmm1_2 f* rbp[r14]
        r14 += 1
        zmm6_1.d = zmm6_1.d f+ zmm1_2
        _mm_max_ss(_mm_min_ss(zmm8_1, zmm7.d), zmm14_1)
    while (r14 s< rsi_1)

zmm6_1.d = zmm6_1.d f* 1.25f
zmm6_1.d = zmm6_1.d f- zmm7.d
sub_140a74f90(rbp)
int512_t result
result.o = zmm6_1
return result
