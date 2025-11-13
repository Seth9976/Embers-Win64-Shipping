// 函数: sub_14200c720
// 地址: 0x14200c720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm11[0x4]
float var_68[0x4] = zmm11
uint128_t zmm12 = arg2
arg1[8].b = 0
*(arg1 + 0x44) = 0
void* rax = *(arg4 + 0x130)
float rcx = data_143dbb200
uint128_t zmm3 = zx.o(data_143dbb1f8.q)
float zmm13[0x4] = arg3
uint64_t var_b8
float var_b0

if (rax == 0)
    var_b8 = zmm3.q
    var_b0 = rcx
else
    arg3 = *(rax + 0x1d0)
    var_b8.d = arg3[0]
    float temp0_1[0x4] = _mm_shuffle_ps(arg3, arg3, 0x55)
    var_b0 = _mm_shuffle_ps(arg3, arg3, 0xaa)[0]
    var_b8:4.d = temp0_1[0]

uint128_t zmm7 = data_143dbb1f8
float zmm8[0x4] = data_143dbb1fc
float zmm6[0x4] = data_143dbb200
void* rax_2 = arg1[0x15]
int64_t var_c8 = var_b8
float rax_4
float zmm0[0x4]

if (rax_2 == 0)
    zmm0 = zx.o(arg1[0x13])
    rax_4 = arg1[0x14].d
else
    void* rax_3 = *(rax_2 + 0x130)
    
    if (rax_3 == 0)
        zmm0 = zx.o(zmm3.q)
        rax_4 = rcx
    else
        arg2 = *(rax_3 + 0x1d0)
        var_b8.d = arg2.d
        var_b8:4.d = _mm_shuffle_ps(arg2, arg2, 0x55)[0]
        zmm0 = zx.o(var_b8)
        rax_4 = _mm_shuffle_ps(arg2, arg2, 0xaa).d

int128_t zmm9 = zx.o(0)
arg3 = var_c8.d
zmm3 = arg1[0x16].d
int64_t var_a8 = zmm0.q
zmm0 = var_b0
uint128_t zmm15 = zx.o(var_a8)
arg3[0] = arg3[0] f- zmm15.d
uint64_t var_b8_2 = zmm15.q
arg2.d = var_c8:4.d.d f- var_b8_2:4.d
float zmm10[0x4] = rax_4
arg3[0] = arg3[0] * arg3[0]
zmm0[0] = zmm0[0] - zmm10[0]
arg2.d = arg2.d f* arg2.d
zmm0[0] = zmm0[0] * zmm0[0]
arg3[0] = arg3[0] f+ arg2.d
arg3[0] = arg3[0] + zmm0[0]
arg2 = _mm_sqrt_ss(0, arg3[0])

if (not(arg2.d f>= zmm3.d))
    void* rcx_1 = arg1[0x18]
    zmm6 = 0x3f800000
    
    if (rcx_1 != 0)
        arg2.d = arg2.d f/ zmm3.d
        
        if (arg2.d f>= 0f)
            arg2 = _mm_min_ss(arg2.d, 0x3f800000)
        else
            arg2 = zx.o(0)
        
        zmm0, zmm9 = sub_141f89240(rcx_1, arg2)
        zmm6 = zmm0
    
    void* rcx_2 = arg1[0x19]
    
    if (rcx_2 != 0)
        zmm0 = *(arg1 + 0x2c)
        arg2 = *(arg1 + 0x24)
        
        if (not(zmm0[0] f<= zmm9.d))
            arg2.d = arg2.d f/ zmm0[0]
            
            if (arg2.d f>= zmm9.d)
                arg2 = _mm_min_ss(arg2.d, 0x3f800000)
            else
                arg2 = zx.o(0)
        
        zmm0, zmm6, zmm9 = sub_141f89240(rcx_2, arg2)
        zmm0[0] = zmm0[0] - 1f
        zmm6[0] = zmm6[0] + zmm0[0]
    
    if (zmm6[0] f>= zmm9.d)
        zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
    else
        zmm6 = zx.o(0)
    
    bool cond:2_1 = arg1[0x1a].b == 0
    zmm6[0] = zmm6[0] f* *(arg1 + 0xb4)
    
    if (cond:2_1)
        zmm8 = var_b8_2:4.d
        zmm7.d = zmm15.d f- var_c8.d
        zmm8[0] = zmm8[0] f- var_c8:4.d
        zmm10[0] = zmm10[0] - var_b0
        zmm0 = zmm7
        zmm0[0] = zmm0[0] f* zmm7.d
        zmm8[0] = zmm8[0] * zmm8[0]
        arg2.d = zmm10.d f* zmm10[0]
        zmm8[0] = zmm8[0] + zmm0[0]
        zmm8[0] = zmm8[0] f+ arg2.d
        
        if (not(zmm8[0] == 1f))
            if (zmm8[0] >= 9.99999994e-09f)
                float zmm4[0x4] = 0x3f000000
                zmm3 = zmm8
                float temp0_9[0x4] = _mm_rsqrt_ss(zmm8[0], zmm3.d)
                arg3 = 0x3f000000
                zmm3.d = zmm3.d f* 0.5f
                temp0_9[0] = temp0_9[0] * temp0_9[0]
                arg2.d = zmm3.d f* temp0_9[0]
                arg3[0] = 0.5f f- arg2.d
                temp0_9[0] = temp0_9[0] * arg3[0]
                temp0_9[0] = temp0_9[0] + temp0_9[0]
                arg2.d = temp0_9.d f* temp0_9[0]
                zmm3.d = zmm3.d f* arg2.d
                zmm4[0] = 0.5f f- zmm3.d
                temp0_9[0] = temp0_9[0] * zmm4[0]
                temp0_9[0] = temp0_9[0] + temp0_9[0]
                zmm7.d = zmm7.d f* temp0_9[0]
                zmm8[0] = zmm8[0] * temp0_9[0]
                zmm10[0] = zmm10[0] * temp0_9[0]
            else
                zmm7 = data_143dbb1f8
                zmm8 = data_143dbb1fc
                zmm10 = data_143dbb200
        
        bool cond:3_1 = arg1[0x17].b == 0
        zmm10[0] = zmm10[0] * zmm6[0]
        zmm7.d = zmm7.d f* zmm6[0]
        zmm8[0] = zmm8[0] * zmm6[0]
        zmm6 = zmm10
        
        if (not(cond:3_1))
            zmm7 ^= 0x80000000
            zmm8 ^= 0x80000000
            zmm6 ^= 0x80000000
    else
        int32_t* rax_6
        rax_6, zmm6 = sub_140ae4210(arg1 + 0xd4, &var_a8)
        zmm8 = zmm6
        zmm7.d = zmm6.d f* *rax_6
        zmm8[0] = zmm8[0] f* rax_6[1]
        zmm6[0] = zmm6[0] f* rax_6[2]

if (*(arg1 + 0xb9) != 0)
    zmm6 = zx.o(0)

bool cond:0 = zmm12.d f== zmm13[0]
zmm11 = data_143f3f2a0
zmm10 = zx.o(0)
zmm0 = zmm11
arg2 = zx.o(0)
zmm11 = __andps_xmmxud_memxud(zmm11, data_143f3f2b0)
zmm0[0].q = zmm10 u>> 0x40
float temp0_11[0x4] = _mm_unpacklo_ps(zmm7, zmm6[0].q)
float temp0_12[0x4] = _mm_unpacklo_ps(zmm8, arg2.q)
float temp0_13[0x4] = _mm_shuffle_ps(zmm10, zmm0, 0xc4)
float zmm5[0x4] = _mm_unpacklo_ps(temp0_11, temp0_12[0].q)

if (not(cond:0) && not(zmm13[0] <= 9.99999994e-09f))
    zmm3.d = zmm12.d f/ zmm13[0]
    zmm5 = _mm_mul_ps(zmm5, 
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm3.q), _mm_unpacklo_ps(zmm3, arg2.q)[0].q))

arg1[8].b = 1
*(arg1 + 0x50) = temp0_13
*(arg1 + 0x60) = zmm5
*(arg1 + 0x70) = zmm11
zmm0 = data_143a2d2d8
zmm3 = data_143a2d2d0
float temp0_19[0x4] = _mm_unpacklo_ps(data_143a2d2d4, arg2.q)
*(arg1 + 0x44) = 0x3f800000
*(arg1 + 0x70) = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_19[0].q)
zmm12.d = zmm12.d f+ *(arg1 + 0x24)
jump(*(*arg1 + 0x38))
