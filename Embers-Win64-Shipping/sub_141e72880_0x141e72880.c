// 函数: sub_141e72880
// 地址: 0x141e72880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* rdx = *arg1
int64_t* rsi = *(rdx + 0x70)
void* r15_2 = &rsi[sx.q(*(rdx + 0x78)) * 2]
uint128_t zmm6
uint128_t var_38 = zmm6

if (rsi != r15_2)
    do
        int64_t* rbx_1 = rsi[1]
        int64_t* rcx = *rsi
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        (*(*rcx + 0x28))(rcx, *arg1, zx.q(*(arg1 + 0xc)), &arg1[2], arg1[8].d.d)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_5 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi = &rsi[2]
    while (rsi != r15_2)
    
    rdx = *arg1

int32_t rcx_5 = *(arg1 + 0xc)
int32_t r8_2 = *(rdx + 0x138)
float zmm1[0x4]

if (rcx_5 s>= r8_2)
    int64_t i_1 = sx.q(rcx_5 - r8_2 + 1)
    
    if (rcx_5 - r8_2 + 1 s> 0)
        int64_t rsi_1 = sx.q(*(rdx + 0x138))
        int64_t r15_4 = rsi_1 * 0xc0
        int64_t i
        
        do
            zmm1 = data_143dbb0d0
            int64_t rbx_2 = *arg1
            int32_t var_d0 = var_d0 & 0xfffffffe
            uint128_t var_118_1 = data_143dbb0c0
            uint128_t var_f8_1 = data_143dbb0e0
            float var_e8[0x4]
            __builtin_memset(&var_e8, 0, 0x18)
            void var_cc
            sub_141e90730(&var_cc)
            int64_t var_60_1 = rbx_2
            int64_t rbx_3 = sx.q(*(rdx + 0x138))
            int32_t var_a8_1 = 0
            int32_t var_a0_1 = 0
            int32_t rax_10 = (rbx_3 + 1).d
            uint128_t var_98
            __builtin_memset(&var_98, 0, 0x38)
            *(rdx + 0x138) = rax_10
            
            if (rax_10 s> *(rdx + 0x13c))
                sub_1408094f0(rdx + 0x130)
            
            int128_t* rdx_5 = rbx_3 * 0xc0 + *(rdx + 0x130)
            *rdx_5 = var_118_1
            rdx_5[1] = zmm1
            rdx_5[2] = var_f8_1
            rdx_5[3] = var_e8
            int64_t var_d8
            rdx_5[4] = var_d8.o
            float var_c8[0x4]
            rdx_5[5] = var_c8
            uint128_t var_b8
            rdx_5[6] = var_b8
            rdx_5[7] = var_a8_1.o
            rdx_5[8] = var_98
            float var_88[0x4]
            rdx_5[9] = var_88
            int64_t var_78
            rdx_5[0xa] = var_78.o
            int64_t var_68
            rdx_5[0xb] = var_68.o
            
            if (rsi_1.d s>= 0 && rsi_1.d s< *(rdx + 0x138))
                *(r15_4 + *(rdx + 0x130) + 0x78) = rsi_1.d
            
            rsi_1 = zx.q(rsi_1.d + 1)
            r15_4 += 0xc0
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_5 = *(arg1 + 0xc)

int64_t rdx_6 = *(rdx + 0x130)
uint128_t zmm0 = arg1[8].d
int64_t rcx_7 = sx.q(rcx_5) * 0xc0
zmm6 = *(rcx_7 + rdx_6 + 0x10)
int32_t* rax_13
float zmm2
uint128_t zmm3

if (zmm0.d f<= 0f)
    int32_t var_124_1 = data_143dbb200
    uint64_t var_12c
    rax_13 = &var_12c
    var_12c = data_143dbb1f8.q
else
    zmm3 = *(arg1 + 0x20)
    int32_t var_138
    rax_13 = &var_138
    zmm2 = 1f f/ zmm0.d
    float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    zmm0.d = zmm3.d f- zmm6.d
    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    zmm0.d = zmm0.d f* zmm2
    var_138 = zmm0.d
    zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
    temp0_3[0] = temp0_3[0] f- zmm0.d
    zmm3.d = zmm3.d f- _mm_shuffle_ps(zmm6, zmm6, 0xaa).d
    temp0_3[0] = temp0_3[0] * zmm2
    zmm3.d = zmm3.d f* zmm2
    float var_134_1 = temp0_3[0]
    int32_t var_130_1 = zmm3.d

int32_t rax_15 = rax_13[2]
*(rcx_7 + rdx_6 + 0x30) = *rax_13
*(rcx_7 + rdx_6 + 0x38) = rax_15
uint128_t zmm5 = *(arg1 + 0x20)
zmm2 = data_143a2d454
int32_t rax_16 = arg1[1].d
float temp0_7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
zmm3.d = zmm5.d f- zmm6.d
*(rcx_7 + rdx_6 + 0x74) = rax_16
zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
temp0_7[0] = temp0_7[0] f- zmm0.d
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
zmm0 = *(arg1 + 0x10)
zmm5.d = zmm5.d f- _mm_shuffle_ps(zmm6, zmm6, 0xaa).d
*(rcx_7 + rdx_6) = zmm0
zmm1 = *(arg1 + 0x20)
temp0_7[0] = temp0_7[0] * temp0_7[0]
zmm3.d = zmm3.d f* zmm3.d
zmm5.d = zmm5.d f* zmm5.d
temp0_7[0] = temp0_7[0] f+ zmm3.d
*(rcx_7 + rdx_6 + 0x10) = zmm1
*(rcx_7 + rdx_6 + 0x20) = *(arg1 + 0x30)
temp0_7[0] = temp0_7[0] f+ zmm5.d

if (not(temp0_7[0] <= zmm2 * zmm2))
    rdx_6.b = 1
    sub_141e8cc70(*arg1, rdx_6.b)

int64_t* rcx_9 = *arg1
int64_t result = (*(*rcx_9 + 0x150))(rcx_9, rdx + 0x130)
__security_check_cookie(rax_1 ^ &var_168)
return result
