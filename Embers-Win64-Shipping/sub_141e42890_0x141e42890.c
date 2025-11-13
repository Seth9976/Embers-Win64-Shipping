// 函数: sub_141e42890
// 地址: 0x141e42890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int128_t* rbx = arg3
float var_88
sub_141e41f00(arg1, &var_88, arg2)
float zmm7[0x4] = var_88
truncf(zmm7[0])
int32_t rax_2 = int.d(zmm7[0])
zmm7[0] = zmm7[0] - zmm7[0]
int128_t* rdx_1

if (rax_2 s>= 0 && rax_2 s< *(arg1 + 0xe0))
    rdx_1 = *(arg1 + 0xd8) + sx.q(rax_2) * 0x18

float var_70
int128_t zmm10
int64_t zmm11

if (rax_2 s< 0 || rax_2 s>= *(arg1 + 0xe0) || rdx_1 == 0)
    var_88.q = -1
    int32_t var_80_1 = 0xffffffff
    zmm11 = _mm_unpacklo_ps(zx.o(0), 0)[0].q
    int32_t var_7c_1 = 0
    zmm10 = var_88.o
    var_70 = 0f
else
    float zmm0[0x4] = 0x3f800000
    zmm10 = *rdx_1
    zmm11 = rdx_1[1].q
    zmm0[0] = 1f - zmm7[0]
    var_70 = zmm0[0]

int64_t rsi = sx.q(*(rbx + 0x78))
int32_t rax_5 = (rsi + 1).d
*(rbx + 0x78) = rax_5

if (rax_5 s> *(rbx + 0x7c))
    sub_141e47cf0(rbx, rsi.d)

int128_t* rax_6 = rbx[7].q
int128_t* rdx_3 = rbx
zmm7[0] = zmm7[0] + 1f

if (rax_6 != 0)
    rdx_3 = rax_6

int64_t rcx_2 = rsi * 0x1c
*(rdx_3 + rcx_2) = zmm10
*(rdx_3 + rcx_2 + 0x10) = zmm11
*(rdx_3 + rcx_2 + 0x18) = var_70
int32_t rax_8 = int.d(zmm7[0])
int128_t* rdx_4

if (rax_8 s>= 0 && rax_8 s< *(arg1 + 0xe0))
    rdx_4 = *(arg1 + 0xd8) + sx.q(rax_8) * 0x18

float result
int64_t rcx_5
float zmm6[0x4]

if (rax_8 s< 0 || rax_8 s>= *(arg1 + 0xe0) || rdx_4 == 0)
    int64_t rdi_2 = sx.q(*(rbx + 0x78))
    float temp0_2[0x4] = _mm_unpacklo_ps(zx.o(0), 0)
    var_88.q = -1
    int32_t var_80_2 = 0xffffffff
    int32_t rax_13 = (rdi_2 + 1).d
    int32_t var_7c_2 = 0
    zmm6 = var_88.o
    result = 0f
    *(rbx + 0x78) = rax_13
    
    if (rax_13 s> *(rbx + 0x7c))
        sub_141e47cf0(rbx, rdi_2.d)
    
    int128_t* rax_14 = rbx[7].q
    
    if (rax_14 != 0)
        rbx = rax_14
    
    rcx_5 = rdi_2 * 0x1c
    *(rbx + rcx_5) = zmm6
    *(rbx + rcx_5 + 0x10) = temp0_2.q
else
    int64_t rdi_1 = sx.q(*(rbx + 0x78))
    zmm6 = *rdx_4
    int64_t zmm8_1 = rdx_4[1].q
    int32_t rax_11 = (rdi_1 + 1).d
    result = zmm7[0]
    *(rbx + 0x78) = rax_11
    
    if (rax_11 s> *(rbx + 0x7c))
        sub_141e47cf0(rbx, rdi_1.d)
    
    int128_t* rax_12 = rbx[7].q
    
    if (rax_12 != 0)
        rbx = rax_12
    
    rcx_5 = rdi_1 * 0x1c
    *(rbx + rcx_5) = zmm6
    *(rbx + rcx_5 + 0x10) = zmm8_1
*(rbx + rcx_5 + 0x18) = result
__security_check_cookie(rax_1 ^ &var_a8)
return result
