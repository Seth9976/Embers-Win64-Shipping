// 函数: sub_142716380
// 地址: 0x142716380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x4b]

if (rdi == 0 || arg1[0x20] == 0)
    return 

int32_t rax = sub_1427009f0(rdi, arg2)

if (rax == 0xffffffff)
    arg1[0x4d].d &= 0xfffffffd
    arg1[0x4c] = -1
    return 

int64_t rsi_2 = sx.q(rax) * 0x90
void* rbp_2 = rdi[5] + rsi_2
int32_t rcx_2 = *(rbp_2 + 0x6c)

if (*(arg1 + 0x264) == rcx_2)
    return 

*(arg1 + 0x264) = rcx_2
arg1[0x4c].d = rax

if (rax s>= 0 && rax s< rdi[6].d)
    void* rax_2 = (*(*rdi + 0x150))(rdi)
    int64_t rcx_4 = rdi[5]
    int32_t i = 0
    int32_t zmm0_1 = *(rax_2 + 0x520)
    
    if (*(rsi_2 + rcx_4 + 0x88) s> 0)
        void* r8_1 = nullptr
        
        do
            int64_t rdx = sx.q(*(r8_1 + *(rcx_4 + rsi_2 + 0x80)))
            
            if (rdx.d s>= 0 && rdx.d s< rdi[8].d)
                *((rdx << 7) + rdi[7] + 0x68) = zmm0_1
                rcx_4 = rdi[5]
            
            i += 1
            r8_1 += 4
        while (i s< *(rcx_4 + rsi_2 + 0x88))

uint128_t zmm6_1
uint128_t zmm7_1
float zmm8_1
zmm6_1, zmm7_1, zmm8_1 =
    sub_1426f8f10(rbp_2, arg1[0x20], arg2, arg1[0x3c].d, &arg1[0x4e], arg1 + 0x284)
int32_t rdx_2 = 0

if (arg1[0x4f].d s> 1)
    rdx_2 = 2

int32_t rdx_3 = rdx_2 | (arg1[0x4d].d & 0xfffffffd)
arg1[0x4d].d = rdx_3

if ((rdx_3.b & 2) == 0)
    return 

void* r8_3 = arg1[0x20]
uint128_t var_28_1 = zmm6_1
arg1[0x50].d = 1
uint128_t var_38_1 = zmm7_1
float var_48_1 = zmm8_1
int64_t* rcx_10

if (*(r8_3 + 0x30) s<= 0)
    rcx_10 = &data_143b58088
else
    rcx_10 = (sx.q(*(r8_3 + 0x30) - 1) << 5) + *(r8_3 + 0x28)

uint128_t zmm3_1 = zx.o(*rcx_10)
uint128_t zmm1_1
zmm1_1.d = zmm3_1.d f- *(rbp_2 + 0x24)
float zmm2_1 = 1f f/ *(rbp_2 + 4)
int32_t var_50_1 = rcx_10[1].d
uint64_t var_58_1 = zmm3_1.q
zmm1_1.d = zmm1_1.d f* zmm2_1
int32_t r8_4 = int.d(zmm1_1.d)
zmm1_1.d = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55).d f- *(rbp_2 + 0x28)
zmm1_1.d = zmm1_1.d f* zmm2_1
int32_t rcx_11 = int.d(zmm1_1.d)
int32_t rax_10

if (r8_4 s>= 0 && r8_4 s< *(rbp_2 + 0x3c) && rcx_11 s>= 0)
    rax_10 = *(rbp_2 + 0x40)

int32_t rax_12

if (r8_4 s< 0 || r8_4 s>= *(rbp_2 + 0x3c) || rcx_11 s< 0 || rcx_11 s>= rax_10)
    rax_12 = -1
else
    rax_12 = rax_10 * r8_4 + rcx_11

int32_t r14_1
r14_1.b = rax_12 != 0xffffffff
arg1[0x4d].d = r14_1 | (rdx_3 & 0xfffffffe)
sub_141ead1f0(&arg1[0x29], nullptr, arg1[0x4e] + 0xc)
int32_t* rax_13 = arg1[0x4e]
uint128_t zmm6_2
zmm6_2.d = rax_13[3].d f- *rax_13
uint128_t zmm7_2
zmm7_2.d = rax_13[4].d f- rax_13[1]
float zmm8_2 = rax_13[5] f- rax_13[2]
uint128_t zmm0_2
zmm0_2.d = zmm6_2.d f* zmm6_2.d
uint128_t zmm2_2
zmm2_2.d = zmm7_2.d f* zmm7_2.d
zmm2_2.d = zmm2_2.d f+ zmm0_2.d
zmm2_2.d = zmm2_2.d f+ zmm8_2 * zmm8_2

if (zmm2_2.d f== 1f)
    goto label_14271668e

float var_50_2

if (zmm2_2.d f>= 9.99999994e-09f)
    float zmm3_2 = zmm2_2.d
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm2_2[0], zmm3_2)
    zmm3_2 = zmm3_2 * 0.5f
    zmm0_2.d = temp0_2.d f* temp0_2[0]
    zmm2_2.d = 0.5f - zmm3_2 f* zmm0_2.d
    zmm0_2.d = temp0_2.d f* zmm2_2.d
    temp0_2[0] = temp0_2[0] f+ zmm0_2.d
    zmm0_2.d = temp0_2.d f* (0.5f - zmm3_2 * temp0_2[0] * temp0_2[0])
    temp0_2[0] = temp0_2[0] f+ zmm0_2.d
    zmm6_2.d = zmm6_2.d f* temp0_2[0]
    zmm7_2.d = zmm7_2.d f* temp0_2[0]
    zmm8_2 = zmm8_2 * temp0_2[0]
label_14271668e:
    var_50_2 = zmm8_2
    var_58_1:4.d = zmm7_2.d
    var_58_1.d = zmm6_2.d
else
    var_58_1.d = data_143dbb1f8.d
    var_50_2 = data_143dbb200.d
    var_58_1:4.d = data_143dbb1fc

arg1[0x3f] = var_58_1
arg1[0x40].d = var_50_2
sub_142717810(arg1)
