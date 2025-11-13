// 函数: sub_141e09d20
// 地址: 0x141e09d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x31) &= 0xfb
void* rbx = arg1[4]
float zmm6[0x4]

if (rbx != 0)
    void* rax_1 = sub_142591550()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        void* r8_1
        r8_1.b = 1
        zmm6 = sub_141f3e990(arg1[4], 1, r8_1.b)

int64_t* rbx_1 = arg1[0x48]

if (rbx_1 == 0)
    int64_t* rax_5 = (*(*arg1 + 0x300))(arg1)
    arg1[0x48] = rax_5
    rbx_1 = rax_5

float var_28[0x4] = zmm6
rbx_1[0x41].d = 1 - rbx_1[0x41].d
void* result = (*(*rbx_1 + 0x80))(rbx_1, arg1)
float zmm0[0x4]
float zmm5_1[0x4]
float zmm7[0x4]

if (rbx_1[0x8c].b != 0)
    zmm6 = *(rbx_1 + 0x470)
    zmm0 = *(rbx_1 + 0x480)
    float zmm1[0x4] = *(rbx_1 + 0x490)
    float zmm4_1[0x4] = data_143f39360
    zmm5_1 = data_143f393a0
    float temp0_1[0x4] = _mm_mul_ps(zmm6, zmm6)
    float var_58_1[0x4] = zmm0
    float var_48_1[0x4] = zmm1
    float temp0_3[0x4] = _mm_add_ps(temp0_1, _mm_shuffle_ps(temp0_1, temp0_1, 0x4e))
    float temp0_5[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x39), temp0_3)
    float temp0_6[0x4] = _mm_rsqrt_ps(temp0_5)
    float temp0_7[0x4] = _mm_cmpeq_ps(zmm5_1, temp0_5, 2)
    float temp0_8[0x4] = _mm_mul_ps(zmm4_1, temp0_5)
    float temp0_13[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm4_1, _mm_mul_ps(_mm_mul_ps(temp0_6, temp0_6), temp0_8)), temp0_6), 
        temp0_6)
    float var_68[0x4] = _mm_and_ps(
        _mm_mul_ps(zmm6, 
            _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm4_1, _mm_mul_ps(_mm_mul_ps(temp0_13, temp0_13), temp0_8)), 
                    temp0_13), 
                temp0_13)) ^ data_143f39350, 
        temp0_7) ^ data_143f39350
    result, zmm7 = sub_141de06c0(&arg1[0x40], &var_68)
    rbx_1[0x8c].b = 0
    *(rbx_1 + 0x464) = 0

void* rbp = arg1[0x3d]
void* r14_2 = (sx.q(arg1[0x3e].d) << 6) + rbp

if (rbp != r14_2)
    void* rbp_1 = rbp + 0x10
    float var_38_1[0x4] = zmm7
    
    do
        void* rbx_2 = arg1[4]
        
        if (rbx_2 != 0)
            void* rax_8 = sub_142591550()
            void* rdx_4 = *(rbx_2 + 0x10)
            int64_t rax_9 = sx.q(*(rax_8 + 0x38))
            
            if (rax_9.d s<= *(rdx_4 + 0x38) && *(*(rdx_4 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
                void* r8_2
                r8_2.b = 1
                sub_141f3e990(arg1[4], 1, r8_2.b)
        
        void* rsi_1 = arg1[0x48]
        
        if (rsi_1 == 0)
            void* rax_12 = (*(*arg1 + 0x300))(arg1)
            arg1[0x48] = rax_12
            rsi_1 = rax_12
        
        int64_t rbx_3 = *(rbp_1 + 0x20)
        
        if (*(rsi_1 + 0x290) == *(rsi_1 + 0x2bc))
        labelid_a:
            zmm6 = zx.o(0)
        else
            int32_t rax_15 = sub_140b5ead0(rbx_3.d) + rbx_3:4.d
            void* r8_3 = rsi_1 + 0x2c0
            void* rcx_9 = *(r8_3 + 8)
            
            if (rcx_9 != 0)
                r8_3 = rcx_9
            
            int32_t rax_17 = *(r8_3 + (((sx.q(*(rsi_1 + 0x2d0)) - 1) & sx.q(rax_15)) << 2))
            
            if (rax_17 == 0xffffffff)
            label_141e09f8b:
                zmm6 = zx.o(0)
            else
                int64_t r8_4 = *(rsi_1 + 0x288)
                int64_t rcx_10
                
                while (true)
                    rcx_10 = sx.q(rax_17)
                    int64_t rdx_8 = rcx_10 * 5
                    
                    if (*(r8_4 + (rdx_8 << 2)) == rbx_3)
                        break
                    
                    rax_17 = *(r8_4 + (rdx_8 << 2) + 0xc)
                    
                    if (rax_17 == 0xffffffff)
                        goto label_141e09f8b_2
                
                if (rax_17 == 0xffffffff)
                label_141e09f8b_1:
                    zmm6 = zx.o(0)
                else
                    void* rcx_11 = r8_4 + rcx_10 * 0x14
                    
                    if (rcx_11 == 0 || rcx_11 == -8)
                    label_141e09f8b_2:
                        zmm6 = zx.o(0)
                    else
                        zmm6 = *(*(rsi_1 + sx.q(1 - *(rsi_1 + 0x208)) * 0x10 + 0x2d8)
                            + sx.q(*(rcx_11 + 8)) * 0xc + 4)
        
        bool cond:1_1 = arg1[0x40].b == 0
        zmm6[0] = zmm6[0] f* *(rbp_1 + 0x28)
        zmm7 = *(rbp_1 - 0x10)
        int64_t arg_8
        arg_8.d = zmm6[0]
        zmm5_1 = arg_8.d
        float temp0_21[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
        float temp0_22[0x4] = _mm_mul_ps(zmm7, temp0_21)
        float zmm3[0x4]
        
        if (cond:1_1)
            zmm0 = *(rbp_1 + 0x10)
            arg1[0x40].b = 1
            float temp0_37[0x4] = _mm_mul_ps(*rbp_1, temp0_21)
            float temp0_38[0x4] = _mm_mul_ps(zmm0, temp0_21)
            *(arg1 + 0x210) = temp0_22
            *(arg1 + 0x220) = temp0_37
            *(arg1 + 0x230) = temp0_38
        else
            zmm3 = *(arg1 + 0x210)
            float temp0_23[0x4] = _mm_mul_ps(temp0_22, zmm3)
            float temp0_24[0x4] = _mm_sub_ps(zx.o(0), temp0_22)
            float temp0_26[0x4] = _mm_add_ps(temp0_23, _mm_shuffle_ps(temp0_23, temp0_23, 0x4e))
            *(arg1 + 0x210) = _mm_add_ps(
                _mm_and_ps(
                    _mm_cmpeq_ps(zx.o(0), 
                        _mm_add_ps(_mm_shuffle_ps(temp0_26, temp0_26, 0x39), temp0_26), 2), 
                    temp0_24 ^ temp0_22) ^ temp0_24, 
                zmm3)
            *(arg1 + 0x220) = __addps_xmmps_memps(_mm_mul_ps(*rbp_1, temp0_21), *(arg1 + 0x220))
            *(arg1 + 0x230) =
                __addps_xmmps_memps(_mm_mul_ps(*(rbp_1 + 0x10), temp0_21), *(arg1 + 0x230))
            zmm6[0] = zmm6[0] f+ *(arg1 + 0x204)
        
        rbp_1 += 0x40
        zmm0 = data_143a2d2d8
        zmm3 = data_143a2d2d0
        float temp0_39[0x4] = _mm_unpacklo_ps(data_143a2d2d4, zx.o(0)[0].q)
        result = rbp_1 - 0x10
        float temp0_41[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0[0].q), temp0_39[0].q)
        *(arg1 + 0x204) = zmm6[0]
        *(arg1 + 0x230) = temp0_41
    while (result != r14_2)

if (arg1[0x40].b != 0)
    sub_141e06790(&arg1[0x40])

return result
