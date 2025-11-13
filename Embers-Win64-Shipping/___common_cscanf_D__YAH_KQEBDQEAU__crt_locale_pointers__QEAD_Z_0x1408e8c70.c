// 函数: ??$common_cscanf@D@@YAH_KQEBDQEAU__crt_locale_pointers@@QEAD@Z
// 地址: 0x1408e8c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* rbx)[0x4] = arg1[0x8d]
uint64_t rdi
rdi.b = 0
uint128_t zmm8 = data_143dbb1f8
uint128_t zmm9 = zmm8
uint128_t zmm10 = data_143dbb1fc
uint128_t zmm11 = data_143dbb200
void* rsi_1 = sx.q(arg1[0x8e].d) * 0x70 + rbx
uint64_t var_b0_1
uint64_t var_a4_1
int32_t var_98_2
uint128_t zmm1

if (rbx == rsi_1)
label_1408e8e6f:
    int32_t var_c0_2 = 0
    zmm1 = zx.o(0)
    var_b0_1 = (_mm_unpacklo_ps(zx.o(0), zmm1.q)).q
    int32_t var_b4_1 = 0
    int32_t var_a8_2 = 0
    var_a4_1 = (_mm_unpacklo_ps(zx.o(0), zmm1.q)).q
    int32_t var_9c_1 = 0
    var_98_2 = 0
else
    uint128_t zmm0
    uint128_t zmm2_1
    uint128_t zmm6_1
    uint128_t zmm7_1
    
    do
        uint64_t var_90[0x5]
        uint64_t* rax_1
        rax_1, zmm6_1, zmm7_1 = sub_140ae2b00(&rbx[4], &var_90, rbx)
        
        if (rdi.b == 0)
            if (rax_1[3].b != 0)
                zmm1 = zx.o(rax_1[2])
                zmm2_1 = *rax_1
                int32_t rax_2 = rax_1[3].d
                rdi = zx.q(rax_2.b)
                zmm6_1 = zmm1.q:4.d
                int64_t var_b0
                var_b0.o = zmm2_1
                int32_t var_98_1 = rax_2
                int32_t var_a8
                zmm11 = var_a8
                zmm7_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                zmm10 = var_b0:4.d
                zmm9 = var_b0.d
                zmm8 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
        else if (rax_1[3].b != 0)
            zmm0 = *rax_1
            
            if (not(zmm9.d f<= zmm0.d))
                zmm9 = zmm0
            
            zmm0 = *(rax_1 + 4)
            
            if (not(zmm10.d f<= zmm0.d))
                zmm10 = zmm0
            
            zmm0 = rax_1[1].d
            
            if (not(zmm11.d f<= zmm0.d))
                zmm11 = zmm0
            
            zmm0 = *(rax_1 + 0xc)
            
            if (not(zmm8.d f>= zmm0.d))
                zmm8 = zmm0
            
            zmm0 = rax_1[2].d
            
            if (not(zmm6_1.d f>= zmm0.d))
                zmm6_1 = zmm0
            
            zmm0 = *(rax_1 + 0x14)
            
            if (not(zmm7_1.d f>= zmm0.d))
                zmm7_1 = zmm0
        
        rbx = &rbx[7]
    while (rbx != rsi_1)
    
    if (rdi.b == 0)
        goto label_1408e8e6f
    
    zmm6_1.d = zmm6_1.d f- zmm10.d
    zmm8.d = zmm8.d f- zmm9.d
    zmm7_1.d = zmm7_1.d f- zmm11.d
    zmm2_1 = zmm6_1
    zmm6_1.d = zmm6_1.d f* zmm6_1.d
    zmm2_1.d = zmm2_1.d f* 0.5f
    uint128_t zmm3_1
    zmm3_1.d = zmm8.d f* 0.5f
    zmm1.d = zmm7_1.d f* 0.5f
    zmm8.d = zmm8.d f* zmm8.d
    zmm0 = _mm_unpacklo_ps(zmm3_1, zmm2_1.q)
    zmm3_1.d = zmm3_1.d f+ zmm9.d
    var_a4_1 = zmm0.q
    zmm2_1.d = zmm2_1.d f+ zmm10.d
    zmm6_1.d = zmm6_1.d f+ zmm8.d
    zmm7_1.d = zmm7_1.d f* zmm7_1.d
    int32_t var_c0 = zmm1.d
    zmm1.d = zmm1.d f+ zmm11.d
    var_b0_1 = (_mm_unpacklo_ps(zmm3_1, zmm2_1.q)).q
    zmm6_1.d = zmm6_1.d f+ zmm7_1.d
    int32_t var_9c = var_c0
    int32_t var_a8_1 = zmm1.d
    zmm6_1.d = zmm6_1.d f* 0.25f
    var_98_2 = _mm_sqrt_ss(0, zmm6_1.d).d
*(arg1 + 0x44c) = var_b0_1.o
*(arg1 + 0x45c) = var_a4_1
*(arg1 + 0x464) = var_98_2
jump(*(*arg1 + 0x498))
