// 函数: sub_141a82120
// 地址: 0x141a82120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg15
int64_t r12 = 0
int32_t rax = *(r14 + 0xc)
r14[1].d = 0

if (rax s< 0 && rax != 0)
    sub_1405a5220(r14, 0)

uint128_t zmm0 = arg14
uint128_t zmm8 = zx.o(0)
uint128_t zmm2 = arg9
int32_t arg_30
uint128_t zmm7
zmm7.d = arg_30.d f- zmm0.d
void* rdx = *arg2
arg15.d = 0
zmm7.d = zmm7.d f* arg8
zmm7.d = zmm7.d f+ zmm0.d
zmm7.d = zmm7.d f/ zmm0.d
int64_t var_198
uint64_t var_168
float var_158
int32_t rax_1
float zmm6[0x4]

if (zmm2.d f!= 0f)
    int64_t* rcx_1
    
    if (arg11[1].d == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *arg11
    
    (*(*rcx_1 + 0x48))(rcx_1, rdx + 4, zmm2, &arg15)
    var_198 = 0
    int32_t var_190_1 = 0
    uint64_t* rax_3
    rax_3, zmm6, zmm7, zmm8 = sub_141a1d730(arg2, &var_158, zmm0, &var_198)
    var_168 = *rax_3
    rax_1 = rax_3[1].d
else
    var_168 = *(rdx + 4)
    rax_1 = *(rdx + 0xc)

int64_t result_2 = sx.q(arg1[1].d)
int32_t var_160 = rax_1
arg_30.b = 0
int32_t* var_128 = &arg_30
void*** (* var_130)() = j_sub_141a7e490
void* rax_4
uint128_t zmm0_1
rax_4, zmm0_1 = sub_140a756e0(&var_130, &data_1439dace8)
int64_t rbx_1 = sx.q(*(rax_4 + 0x18))

if (result_2.d s> rbx_1.d)
    *(rax_4 + 0x18) = result_2.d
    
    if (result_2.d s> *(rax_4 + 0x1c))
        sub_1406105e0(rax_4 + 0x10)
    
    zmm0_1 = memset(*(rax_4 + 0x10) + (rbx_1 << 2), 0, sx.q(result_2.d - rbx_1.d) << 2)
else if (result_2.d s< rbx_1.d && result_2.d != rbx_1.d)
    *(rax_4 + 0x18) = result_2.d
    zmm0_1 = sub_1405dac90(rax_4 + 0x10)

int64_t rdi_3 = sx.q(r14[1].d)

if (result_2.d s> rdi_3.d)
    r14[1].d = result_2.d
    int32_t i_1 = result_2.d - rdi_3.d
    
    if (result_2.d s> *(r14 + 0xc))
        zmm0_1 = sub_140638970(r14)
    
    uint128_t* rcx_10 = rdi_3 * 0x30 + *r14
    
    if (i_1 != 0)
        uint32_t zmm3[0x4] = data_143f2b540
        int32_t i
        
        do
            float zmm1_2[0x4] = data_143f2b550
            zmm1_2[0].q = zx.o(0) u>> 0x40
            zmm0_1 = _mm_shuffle_ps(zx.o(0), zmm1_2, 0xc4)
            *rcx_10 = zmm0_1
            rcx_10[1] = zx.o(0)
            rcx_10 = &rcx_10[3]
            rcx_10[-1] = _mm_and_ps(data_143f2b550, zmm3)
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (result_2.d s< rdi_3.d && result_2.d != rdi_3.d)
    r14[1].d = result_2.d
    zmm0_1 = sub_1407c4120(r14)

float var_58[0x4] = zmm6
int64_t result = result_2
int64_t result_1 = result
int64_t var_188
float var_178
uint64_t var_148[0x2]

if (result_2.d s> 0)
    int64_t rdi_4 = 0
    var_198 = 0
    int32_t var_190_2 = 0
    var_188 = 0
    int32_t var_180_1 = 0
    
    do
        if (rdi_4 s<= 0)
            zmm0_1 = zmm8
        else
            zmm2.d = zmm7.d f* *(*arg13 + (rdi_4 << 2))
            
            if (arg11[1].d == 0)
                (*(*nullptr + 0x48))(0, &var_168, zmm2, &arg15)
            else
                int64_t* rcx_12 = *arg11
                (*(*rcx_12 + 0x48))(rcx_12, &var_168, zmm2, &arg15)
        
        *(*(rax_4 + 0x10) + (rdi_4 << 2)) = zmm0_1.d
        int64_t rbx_3 = *r14
        uint64_t* rax_12
        int64_t zmm9_1
        rax_12, zmm9_1 = sub_141a1d730(arg2, &var_178, *(*(rax_4 + 0x10) + (rdi_4 << 2)), &var_198)
        int64_t zmm0_2 = rax_12[1].d
        float zmm6_1[0x4] = *rax_12
        uint128_t zmm2_1 = _mm_unpacklo_ps(*(rax_12 + 4), zmm9_1)
        *(r12 + rbx_3 + 0x10) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_1, zmm0_2), zmm2_1.q)
        uint64_t* rax_14
        int64_t zmm9_2
        rax_14, zmm6, zmm7, zmm8, zmm9_2 =
            sub_141a1d730(arg4, &var_148, *(*(rax_4 + 0x10) + (rdi_4 << 2)), &var_188)
        rdi_4 += 1
        float zmm1_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm2 = *(rax_14 + 4)
        float zmm3_1[0x4] = _mm_unpacklo_ps(*rax_14, rax_14[1].d.q)
        int32_t var_150_1 = _mm_shuffle_ps(zmm6, zmm6, 0xaa).d
        *(r12 + rbx_3 + 0x20) = _mm_unpacklo_ps(zmm3_1, _mm_unpacklo_ps(zmm2, zmm9_2).q)
        r12 += 0x30
        int32_t var_160_1 = var_150_1
        result = result_1
        zmm0_1 = _mm_unpacklo_ps(zmm6, zmm1_3[0].q)
        var_168 = zmm0_1.q
    while (rdi_4 s< result)
    
    result_2 = zx.q(result.d)
    r12 = 0

arg14 = 0

if (result s> 0)
    zmm0_1 = data_142d3f660
    float (* rdi_5)[0x4] = nullptr
    int128_t zmm11
    zmm11.d = 1f f/ arg5
    var_148[0] = 0x10
    uint128_t var_118 = zmm0_1
    
    do
        int64_t r15_1 = *r14
        uint128_t var_f8
        float zmm0_3
        float zmm9_3
        int32_t zmm10_1
        int32_t zmm12_1
        float zmm13_1
        float zmm14_1[0x4]
        zmm0_3, zmm9_3, zmm10_1, zmm12_1, zmm13_1, zmm14_1 =
            sub_141a7fc30(arg3, &var_f8, *(*(rax_4 + 0x10) + (r12 << 2)), &var_118)
        int64_t* rcx_16
        
        if (arg6[1].d == 0)
            rcx_16 = nullptr
        else
            rcx_16 = *arg6
        
        (*(*rcx_16 + 0x48))(rcx_16)
        zmm0_3 = zmm0_3 + zmm13_1
        float zmm1_4
        float zmm2_2
        
        if (arg10 != 3)
            zmm2_2 = zmm9_3
            
            if (arg10 != 1)
                zmm1_4 = zmm9_3
                
                if (arg10 != 2)
                    zmm0_3 = zmm9_3
            else
                zmm1_4 = zmm0_3
                zmm0_3 = zmm9_3
        else
            zmm2_2 = zmm0_3
            zmm1_4 = zmm9_3
            zmm0_3 = zmm9_3
        
        var_158 = zmm0_3
        float var_154_1 = zmm1_4
        float var_150_2 = zmm2_2
        float var_108[0x4]
        result = sub_140ade170(&var_158, &var_108)
        float zmm4_1[0x4] = data_14399f720
        int32_t rdx_11 = arg14
        float zmm8_1[0x4] = zmm4_1
        float zmm0_4[0x4]
        float zmm1_5[0x4]
        float zmm3_2[0x4]
        float zmm5_1[0x4]
        float zmm7_1[0x4]
        
        if (rdx_11 s< (result_2 - 1).d)
            zmm1_5 = *(rdi_5 + r15_1 + 0x10)
            int64_t rax_19 = *r14
            zmm0_4 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0x55)
            zmm5_1 = *(rdi_5 + rax_19 + 0x40)
            zmm7_1 = zmm5_1
            zmm7_1[0] = zmm7_1[0] - zmm1_5[0]
            zmm6 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
            zmm6[0] = zmm6[0] - zmm0_4[0]
            zmm1_5 = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xaa)
            zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
            zmm5_1[0] = zmm5_1[0] - zmm1_5[0]
            var_198.d = zmm7_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
            zmm2.d = zmm6.d f* zmm6[0]
            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
            zmm2.d = zmm2.d f+ zmm7_1[0]
            var_198:4.d = zmm6[0]
            float var_190_3 = zmm5_1[0]
            zmm2.d = zmm2.d f+ zmm5_1[0]
            
            if (not(zmm2.d f<= zmm10_1))
                zmm3_2 = zx.o(0)
                zmm8_1 = zx.o(0)
                zmm8_1[0] = zmm14_1[0]
                zmm3_2[0] = zmm2[0]
                int64_t rax_21 = *arg1
                zmm4_1 = _mm_rsqrt_ss(zmm3_2[0], zmm3_2[0])
                zmm3_2[0] = zmm3_2[0] * zmm8_1[0]
                zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                zmm3_2[0] = zmm3_2[0] * zmm4_1[0]
                zmm2.d = zmm8_1.d f- zmm3_2[0]
                zmm4_1[0] = zmm4_1[0] f* zmm2.d
                zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                zmm3_2[0] = zmm3_2[0] * zmm4_1[0]
                zmm8_1[0] = zmm8_1[0] - zmm3_2[0]
                zmm4_1[0] = zmm4_1[0] * zmm8_1[0]
                zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                zmm6[0] = zmm6[0] * zmm4_1[0]
                zmm7_1[0] = zmm7_1[0] * zmm4_1[0]
                zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                var_198:4.d = zmm6[0]
                var_198.d = zmm7_1[0]
                float var_190_4 = zmm5_1[0]
                zmm6 = *(rdi_5 + rax_21 + 0x30)
                zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                zmm1_5 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float var_170_1
                
                if (arg10 != 1)
                    if (arg10 != 2)
                        zmm5_1 = data_142d4cc30
                    else
                        zmm5_1 = data_142d4cc20
                    
                    zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9), zmm2)
                    zmm3_2 =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm1_5), zmm0_4)
                    zmm3_2 = _mm_add_ps(zmm3_2, zmm3_2)
                    zmm6 = _mm_mul_ps(zmm6, zmm3_2)
                    zmm0_4 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9)
                    zmm4_1 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xd2)
                    zmm0_4 = _mm_mul_ps(zmm0_4, zmm2)
                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm1_5)
                    zmm6 = _mm_add_ps(zmm6, zmm5_1)
                    zmm4_1 = _mm_add_ps(_mm_sub_ps(zmm4_1, zmm0_4), zmm6)
                    var_178 = zmm4_1[0]
                    zmm0_4 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                    zmm5_1 = zmm4_1
                    zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                    zmm6 = zmm0_4
                    var_170_1 = zmm4_1[0]
                    zmm7_1 = zmm4_1
                    float var_174_2 = zmm0_4[0]
                else
                    zmm4_1 = data_142d4cc00
                    zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9), zmm2)
                    zmm3_2 =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), zmm1_5), zmm0_4)
                    zmm3_2 = _mm_add_ps(zmm3_2, zmm3_2)
                    zmm6 = _mm_mul_ps(zmm6, zmm3_2)
                    zmm5_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xd2), zmm1_5)
                    zmm6 = _mm_add_ps(zmm6, zmm4_1)
                    zmm5_1 = _mm_add_ps(
                        _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xc9), zmm2)), 
                        zmm6)
                    var_178 = zmm5_1[0]
                    zmm6 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                    zmm7_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
                    float var_174_1 = zmm6[0]
                    var_170_1 = zmm7_1[0]
                
                zmm2.d = zmm6.d f* zmm6[0]
                zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                zmm2.d = zmm2.d f+ zmm5_1[0]
                zmm2.d = zmm2.d f+ zmm7_1[0]
                
                if (not(zmm2.d f!= zmm12_1))
                    var_188 = var_178.q
                    float var_180_2 = var_170_1
                else if (zmm2.d f>= zmm10_1)
                    zmm3_2 = zx.o(0)
                    zmm3_2[0] = zmm2[0]
                    zmm4_1 = _mm_rsqrt_ss(zmm3_2[0], zmm3_2[0])
                    zmm3_2[0] = zmm3_2[0] * zmm8_1[0]
                    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                    zmm3_2[0] = zmm3_2[0] * zmm4_1[0]
                    zmm2.d = zmm8_1.d f- zmm3_2[0]
                    zmm4_1[0] = zmm4_1[0] f* zmm2.d
                    zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                    zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                    zmm3_2[0] = zmm3_2[0] * zmm4_1[0]
                    zmm8_1[0] = zmm8_1[0] - zmm3_2[0]
                    zmm4_1[0] = zmm4_1[0] * zmm8_1[0]
                    zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                    zmm6[0] = zmm6[0] * zmm4_1[0]
                    zmm7_1[0] = zmm7_1[0] * zmm4_1[0]
                    var_188.d = zmm5_1[0]
                    var_188:4.d = zmm6[0]
                    float var_180_4 = zmm7_1[0]
                else
                    var_188.d = data_143dbb1f8[0]
                    float var_180_3 = data_143dbb200[0]
                    var_188:4.d = data_143dbb1fc[0]
                
                rdx_11 = arg14
                float var_e8[0x4]
                zmm4_1 = *sub_140ad6660(&var_e8, &var_188, &var_198)
            
            result = *arg12
            zmm8_1 = *(var_148[0] + result)
        
        zmm2 = var_108
        zmm7_1 = data_143f2b4e0
        zmm6 = data_143f2b4d0
        zmm5_1 = data_143f2b4c0
        var_148[0] += 0x10
        r12 += 1
        zmm0_4 = _mm_shuffle_ps(zmm2, zmm2, 0)
        zmm3_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1b), zmm0_4)
        arg14 = rdx_11 + 1
        zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm4_1)
        zmm1_5 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x4e)
        zmm3_2 = _mm_mul_ps(zmm3_2, zmm7_1)
        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xb1)
        zmm3_2 = _mm_add_ps(zmm3_2, zmm0_4)
        zmm1_5 = _mm_mul_ps(zmm1_5, _mm_shuffle_ps(zmm2, zmm2, 0x55))
        zmm4_1 = _mm_mul_ps(zmm4_1, _mm_shuffle_ps(zmm2, zmm2, 0xaa))
        zmm2 = var_f8
        zmm1_5 = _mm_mul_ps(zmm1_5, zmm6)
        zmm4_1 = _mm_mul_ps(zmm4_1, zmm5_1)
        zmm3_2 = _mm_add_ps(zmm3_2, zmm1_5)
        zmm1_5 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x4e)
        zmm3_2 = _mm_add_ps(zmm3_2, zmm4_1)
        zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(zmm8_1, zmm8_1, 0x1b), _mm_shuffle_ps(zmm3_2, zmm3_2, 0))
        zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xff), zmm8_1)
        zmm4_1 = _mm_mul_ps(zmm4_1, zmm7_1)
        zmm8_1 = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xb1)
        zmm4_1 = _mm_add_ps(zmm4_1, zmm0_4)
        zmm1_5 = _mm_mul_ps(zmm1_5, _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55))
        zmm8_1 = _mm_mul_ps(zmm8_1, _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa))
        zmm3_2 = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
        zmm1_5 = _mm_mul_ps(zmm1_5, zmm6)
        zmm8_1 = _mm_mul_ps(zmm8_1, zmm5_1)
        zmm4_1 = _mm_add_ps(zmm4_1, zmm1_5)
        zmm1_5 = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
        zmm4_1 = _mm_add_ps(zmm4_1, zmm8_1)
        zmm3_2 = _mm_mul_ps(zmm3_2, _mm_shuffle_ps(zmm4_1, zmm4_1, 0))
        zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), zmm2)
        zmm3_2 = _mm_mul_ps(zmm3_2, zmm7_1)
        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
        zmm3_2 = _mm_add_ps(zmm3_2, zmm0_4)
        zmm1_5 = _mm_mul_ps(zmm1_5, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55))
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa))
        zmm1_5 = _mm_mul_ps(zmm1_5, zmm6)
        zmm2 = _mm_mul_ps(zmm2, zmm5_1)
        *(rdi_5 + r15_1) = _mm_add_ps(_mm_add_ps(zmm3_2, zmm1_5), zmm2)
        rdi_5 = &rdi_5[3]
    while (r12 s< result_1)

return result
