// 函数: sub_14171e000
// 地址: 0x14171e000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm4 = arg2[1]
uint128_t zmm5 = arg2[2]
float zmm3 = *arg2
void* rcx = **arg1
uint128_t zmm2

if (zmm3 >= 0f)
    zmm2 = *(rcx + 0x1c)
else
    zmm2 = *(rcx + 0x10)

int32_t arg_18 = zmm2.d
int32_t var_e8 = zmm2.d
int128_t zmm15

if (zmm4.d f>= 0f)
    zmm15 = *(rcx + 0x20)
else
    zmm15 = *(rcx + 0x14)

int32_t var_e4 = zmm15.d

if (zmm5.d f>= 0f)
    zmm2 = *(rcx + 0x24)
else
    zmm2 = *(rcx + 0x18)

int32_t arg_20 = zmm2.d
int32_t var_e0 = zmm2.d

if (zmm3 <= -0f)
    zmm2 = *(rcx + 0x1c)
else
    zmm2 = *(rcx + 0x10)

int32_t arg_8 = zmm2.d
int32_t var_108 = zmm2.d
int128_t zmm14

if ((zmm4 ^ data_142d3f780).d f>= 0f)
    zmm14 = *(rcx + 0x20)
else
    zmm14 = *(rcx + 0x14)

int32_t var_104 = zmm14.d
uint128_t zmm0

if ((zmm5 ^ data_142d3f780)[0] >= 0f)
    zmm0 = *(rcx + 0x24)
else
    zmm0 = *(rcx + 0x18)

int64_t* rcx_1 = arg1[1]
int32_t arg_10 = zmm0.d
int32_t var_100 = zmm0.d
void* r8 = *rcx_1
zmm4 = zx.o(*(r8 + 0x10))
int32_t rax_1 = *(r8 + 0x18)
zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
int128_t* rax_2 = rcx_1[1]
zmm5 = _mm_unpacklo_ps(zmm4, rax_1[0].q)
zmm2 = _mm_unpacklo_ps(zmm0, 0)
float zmm11[0x4] = *rax_2
float zmm6[0x4] = rax_2[1]
int32_t rax_3 = *(r8 + 0x18)
zmm5 = _mm_unpacklo_ps(zmm5, zmm2.q)
float temp0_4[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_4)
float temp0_8[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
uint64_t var_d8 = zmm4.q
uint64_t var_f8 = zmm4.q
float temp0_11[0x4] = _mm_sub_ps(temp0_7, zmm0)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_8)
float temp0_17[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd2), temp0_4), zmm0)
zmm0 = _mm_add_ps(_mm_mul_ps(temp0_10, temp0_12), zmm5)
zmm5 = _mm_unpacklo_ps(zmm4, rax_3[0].q)
float temp0_21[0x4] = _mm_add_ps(temp0_17, zmm0)
zmm5 = _mm_unpacklo_ps(zmm5, _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0).q)
float temp0_25[0x4] = _mm_add_ps(temp0_21, zmm6)
zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xc9), temp0_8)
float temp0_29[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_4)
float temp0_30[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
var_d8.d = temp0_25[0]
float temp0_32[0x4] = _mm_sub_ps(temp0_29, zmm0)
var_d8:4.d = temp0_30[0]
float result_2 = temp0_31[0]
float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
float temp0_34[0x4] = _mm_mul_ps(temp0_10, temp0_33)
zmm0 = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
zmm2 = _mm_shuffle_ps(temp0_33, temp0_33, 0xd2)
zmm0 = _mm_mul_ps(zmm0, temp0_8)
zmm2 = _mm_mul_ps(zmm2, temp0_4)
float temp0_39[0x4] = _mm_add_ps(temp0_34, zmm5)
zmm2 = _mm_sub_ps(zmm2, zmm0)
int64_t* rbx = arg1[2]
zmm15.d = zmm15.d f- temp0_30[0]
zmm2 = _mm_add_ps(zmm2, temp0_39)
int64_t rdi = sx.q(rbx[1].d)
zmm15.d = zmm15.d f* arg2[1]
zmm2 = _mm_add_ps(zmm2, zmm6)
int32_t rax_4 = (rdi + 1).d
var_f8.d = zmm2.d
zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
zmm14.d = zmm14.d f- zmm0.d
var_f8:4.d = zmm0.d
zmm0.d = arg_8.d f- zmm2.d
float temp0_44[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float result_1 = temp0_44[0]
zmm14.d = zmm14.d f* arg2[1]
zmm0.d = zmm0.d f* *arg2
zmm14.d = zmm14.d f+ zmm0.d
zmm0.d = arg_10.d f- temp0_44[0]
zmm0.d = zmm0.d f* arg2[2]
zmm14.d = zmm14.d f+ zmm0.d
zmm0.d = arg_18.d f- temp0_25[0]
zmm0.d = zmm0.d f* *arg2
zmm15.d = zmm15.d f+ zmm0.d
zmm0.d = arg_20.d f- temp0_31[0]
zmm0.d = zmm0.d f* arg2[2]
rbx[1].d = rax_4
zmm15.d = zmm15.d f+ zmm0.d
float result
int64_t* rbx_1
int64_t rdi_1

if ((zmm14 ^ data_142d3f780).d f< zmm15.d)
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_6 = *rbx
    int64_t rdx_4 = rdi * 3
    *(rcx_6 + (rdx_4 << 2)) = var_e8.q
    *(rcx_6 + (rdx_4 << 2) + 8) = var_e0
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_8 = (rdi_1 + 1).d
    rbx_1[1].d = rax_8
    
    if (rax_8 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_d8)
    result = result_2
else
    if (rax_4 s> *(rbx + 0xc))
        sub_14083a7e0(rbx)
    
    int64_t rcx_3 = *rbx
    int64_t rdx_1 = rdi * 3
    *(rcx_3 + (rdx_1 << 2)) = var_108.q
    *(rcx_3 + (rdx_1 << 2) + 8) = var_100
    rbx_1 = arg1[3]
    rdi_1 = sx.q(rbx_1[1].d)
    int32_t rax_6 = (rdi_1 + 1).d
    rbx_1[1].d = rax_6
    
    if (rax_6 s> *(rbx_1 + 0xc))
        sub_14083a7e0(rbx_1)
    
    zmm0 = zx.o(var_f8)
    result = result_1

int64_t rcx_8 = *rbx_1
int64_t rdx_6 = rdi_1 * 3
*(rcx_8 + (rdx_6 << 2)) = zmm0.q
*(rcx_8 + (rdx_6 << 2) + 8) = result
return result
