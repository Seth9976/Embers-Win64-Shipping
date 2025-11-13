// 函数: sub_1421e5750
// 地址: 0x1421e5750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x184) s> 0)
    sub_1421e28f0(arg1, arg2)
    return 0

void* rax = arg2[8].q
uint128_t zmm2 = 0x3f800000
void* rdx = arg2[9].q
int96_t var_2f8 = (*(rax + 0x390))[0].12
int32_t k_7 = *(arg1 + 0x154)
int32_t k_5 = 1

if (k_7 != 0)
    k_5 = k_7

int96_t var_2d8 = (*(rax + 0x3b0))[0].12
int32_t rax_1 = *(arg1 + 0x150)
float zmm1[0x4] = 0x3f800000
int32_t rcx = 1

if (rax_1 s> 0)
    rcx = rax_1

int32_t i = 0
int32_t k_6 = k_5
int32_t i_1 = 0
uint128_t zmm11 = zx.o(0)
zmm1[0] = 1f f/ _mm_cvtepi32_ps(zx.o(k_5)).d
uint128_t zmm10 = zx.o(0)
float var_3d8 = zmm1[0]
float zmm12[0x4] = zx.o(0)
zmm1 = 0x3f800000
uint128_t zmm14 = zx.o(0)
zmm1[0] = 1f f/ _mm_cvtepi32_ps(zx.o(rcx * k_5)).d
float var_45c = zmm1[0]
int96_t var_1a8 = arg2[4].12
int32_t var_4d4 = 0
uint128_t var_378 = *arg2
int32_t arg_8 = 0
float var_368[0x4] = arg2[1]
float arg_18 = 0f
uint128_t var_358 = arg2[2]
float var_348[0x4] = arg2[3]

if (*(arg1 + 0x3c) s> 0)
    float zmm3[0x4] = 0x322bcc77
    zmm1 = var_1a8.d
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    uint128_t zmm15 = 0x3f000000
    
    do
        uint128_t* r12_1 = nullptr
        int128_t* r10_1 = nullptr
        uint128_t* var_428_1 = nullptr
        int128_t* rsi_1 = nullptr
        int128_t* var_380_1 = nullptr
        uint128_t* r9_1 = nullptr
        int128_t* var_2c8_1 = nullptr
        uint128_t* var_388_1 = nullptr
        uint128_t* rax_4 = nullptr
        void* rdi_2 = sx.q(i * *(arg1 + 0x40)) + *(arg1 + 0x58)
        int64_t* rbx_2 = sx.q(*(arg1 + 0x124)) + rdi_2
        void* var_3a8_1 = rdi_2
        int64_t* var_2c0_1 = rbx_2
        
        if (rbx_2[0xb].d != 0)
            int64_t rcx_2 = sx.q(*(arg1 + 0x12c))
            
            if (rcx_2.d != 0xffffffff)
                r12_1 = rdi_2 + rcx_2
                var_428_1 = r12_1
            
            int64_t rcx_3 = sx.q(*(arg1 + 0x134))
            
            if (rcx_3.d != 0xffffffff)
                r10_1 = rdi_2 + rcx_3
                var_380_1 = r10_1
            
            int64_t rcx_4 = sx.q(*(arg1 + 0x138))
            
            if (rcx_4.d != 0xffffffff)
                rsi_1 = rdi_2 + rcx_4
                var_2c8_1 = rsi_1
            
            int64_t rcx_5 = sx.q(*(arg1 + 0x13c))
            
            if (rcx_5.d != 0xffffffff)
                r9_1 = rdi_2 + rcx_5
                var_388_1 = r9_1
            
            int64_t rcx_6 = sx.q(*(arg1 + 0x140))
            
            if (rcx_6.d != 0xffffffff)
                rax_4 = rdi_2 + rcx_6
            
            int32_t arg_20 = zmm2.d
            
            if (rax_4 != 0)
                arg_20 = (*rax_4).d
            
            zmm13 = *(arg1 + 0x158)
            int32_t var_4d8_1 = zmm13.d
            
            if (r10_1 != 0)
                uint128_t zmm0
                zmm0.d = (*(rdi_2 + 0x50)).d f* *(arg1 + 0x68)
                int64_t k_4 = sx.q(k_5)
                char rax_5 = *(arg1 + 0x147)
                int32_t var_460_1 = zmm0.d
                int64_t var_418
                int64_t var_3c8
                uint128_t zmm4
                uint128_t zmm5
                
                if (k_5 s> 1)
                    int32_t rax_48
                    
                    if (rax_5 == 0)
                        rax_48 = var_1a8:8.d.d
                        zmm0 = _mm_unpacklo_ps(zmm1, var_1a8:4.d[0].q)
                        uint64_t var_1c0_1 = zmm0.q
                        zmm6 = *(arg1 + 0x15c)
                    else
                        zmm0 = zx.o(*(rbx_2 + 0xc))
                        rax_48 = *(rbx_2 + 0x14)
                        zmm6 = rbx_2[3].d
                    
                    uint64_t var_3b8_2 = zmm0.q
                    zmm7 = var_3b8_2:4.d
                    zmm8 = var_3b8_2.d
                    zmm2.d = zmm7.d f* zmm7.d
                    zmm9 = rax_48
                    zmm0.d = zmm8.d f* zmm8.d
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm2.d = zmm2.d f+ zmm9[0]
                    
                    if (not(zmm2.d f<= zmm3[0]))
                        zmm5.d = zmm15.d
                        zmm3 = zmm2
                        zmm4 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                        zmm3[0] = zmm3[0] f* zmm5.d
                        zmm0.d = zmm4.d f* zmm4.d
                        zmm3[0] = zmm3[0] f* zmm0.d
                        zmm2.d = zmm5.d f- zmm3[0]
                        zmm0.d = zmm4.d f* zmm2.d
                        zmm4.d = zmm4.d f+ zmm0.d
                        zmm1 = zmm4
                        zmm1[0] = zmm1[0] f* zmm4.d
                        zmm3[0] = zmm3[0] * zmm1[0]
                        zmm5.d = zmm5.d f- zmm3[0]
                        zmm3 = 0x322bcc77
                        zmm0.d = zmm4.d f* zmm5.d
                        zmm4.d = zmm4.d f+ zmm0.d
                        int32_t var_4ec_12 = zmm4.d
                        zmm8.d = zmm8.d f* zmm4.d
                        zmm7.d = zmm7.d f* zmm4.d
                        zmm9[0] = zmm9[0] f* zmm4.d
                    
                    int32_t j = 0
                    zmm0 = *(arg1 + 0x15c)
                    uint32_t r11_6 = rbx_2[7].d u>> 0x1f
                    zmm8.d = zmm8.d f* zmm6[0]
                    uint32_t var_4ec_13 = r11_6
                    zmm7.d = zmm7.d f* zmm6[0]
                    zmm9[0] = zmm9[0] * zmm6[0]
                    float var_480_2 = zmm8.d
                    float var_4b0_2 = zmm7.d
                    float var_4bc_4 = zmm9[0]
                    int32_t var_47c_2 = zmm0.d
                    
                    if (*(arg1 + 0x14c) s> 0)
                        int32_t var_21c_1 = 0
                        
                        do
                            zmm4 = *(rbx_2 + 0x4c)
                            zmm11 = zx.o(*rbx_2)
                            zmm9 = rbx_2[1].d
                            zmm0.d = zmm4.d f* rbx_2[8].d
                            zmm2 = zmm9
                            zmm5.d = zmm4.d f* *(rbx_2 + 0x44)
                            zmm4.d = zmm4.d f* rbx_2[9].d
                            zmm0.d = zmm0.d f+ zmm11.d
                            zmm8 = zmm11.q:4.d
                            zmm1 = zmm8
                            int32_t var_4f4_3 = zmm8.d
                            zmm5.d = zmm5.d f+ zmm1[0]
                            int32_t var_4d0_3 = zmm0.d
                            zmm4.d = zmm4.d f+ zmm2.d
                            float var_4e4_2 = zmm1[0]
                            float var_4e0_2 = zmm9[0]
                            int32_t var_4e8_3 = zmm2.d
                            uint64_t var_4b8_2 = zmm11.q
                            int32_t var_478_2 = zmm5.d
                            int32_t var_4c8_2 = zmm4.d
                            
                            if (not(zmm12[0] f> *(arg1 + 0x16c)) && *(arg1 + 0x146) != 0)
                                zmm10 = *rsi_1
                                zmm9 = *(rsi_1 + 4)
                                zmm11 = *r10_1
                                zmm12 = *(r10_1 + 4)
                                zmm8.d = zmm10.d f- zmm11.d
                                zmm14 = *(rsi_1 + 8)
                                zmm9[0] = zmm9[0] - zmm12[0]
                                zmm13 = *(r10_1 + 8)
                                zmm7.d = zmm14.d f- zmm13.d
                                zmm0.d = zmm8.d f* zmm8.d
                                zmm2.d = zmm9.d f* zmm9[0]
                                zmm1 = zmm7
                                zmm1[0] = zmm1[0] f* zmm7.d
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm2.d = zmm2.d f+ zmm1[0]
                                
                                if (not(zmm2.d f<= zmm3[0]))
                                    zmm4.d = zmm15.d
                                    zmm3 = zmm2
                                    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                    zmm3[0] = zmm3[0] f* zmm4.d
                                    zmm0.d = zmm5.d f* zmm5.d
                                    zmm3[0] = zmm3[0] f* zmm0.d
                                    zmm2.d = zmm4.d f- zmm3[0]
                                    zmm0.d = zmm5.d f* zmm2.d
                                    zmm5.d = zmm5.d f+ zmm0.d
                                    zmm1 = zmm5
                                    zmm1[0] = zmm1[0] f* zmm5.d
                                    zmm3[0] = zmm3[0] * zmm1[0]
                                    zmm4.d = zmm4.d f- zmm3[0]
                                    zmm0.d = zmm5.d f* zmm4.d
                                    zmm4 = var_4c8_2
                                    zmm5.d = zmm5.d f+ zmm0.d
                                    int32_t var_4f8_5 = zmm5.d
                                    zmm8.d = zmm8.d f* zmm5.d
                                    zmm9[0] = zmm9[0] f* zmm5.d
                                    zmm7.d = zmm7.d f* zmm5.d
                                    zmm5 = var_478_2
                                
                                zmm8.d = zmm8.d f* *(arg1 + 0x160)
                                zmm0 = *r12_1
                                zmm9[0] = zmm9[0] f* *(arg1 + 0x164)
                                zmm7.d = zmm7.d f* *(arg1 + 0x168)
                                zmm8.d = zmm8.d f* zmm0.d
                                zmm9[0] = zmm9[0] f* zmm0.d
                                zmm8.d = zmm8.d f+ zmm11.d
                                zmm7.d = zmm7.d f* zmm0.d
                                zmm0 = *(arg1 + 0x170)
                                zmm9[0] = zmm9[0] + zmm12[0]
                                zmm7.d = zmm7.d f+ zmm13.d
                                int32_t var_490_1 = zmm8.d
                                zmm8.d = zmm8.d f- zmm10.d
                                float var_48c_1 = zmm9[0]
                                int32_t var_488_1 = zmm7.d
                                int32_t rax_50
                                
                                if (_mm_and_ps(zmm8, 0x7fffffff).d f>= zmm0.d)
                                    rax_50 = var_488_1
                                    *r10_1 = var_490_1.q
                                else
                                    zmm9[0] = zmm9[0] - zmm9[0]
                                    
                                    if (_mm_and_ps(zmm9, 0x7fffffff)[0] f>= zmm0.d)
                                        rax_50 = var_488_1
                                        *r10_1 = var_490_1.q
                                    else
                                        zmm7.d = zmm7.d f- zmm14.d
                                        
                                        if (_mm_and_ps(zmm7, 0x7fffffff).d f>= zmm0.d)
                                            rax_50 = var_488_1
                                            *r10_1 = var_490_1.q
                                        else
                                            *r10_1 = *rsi_1
                                            rax_50 = *(rsi_1 + 8)
                                
                                zmm13 = var_4d8_1
                                zmm14 = arg_8
                                zmm11 = zx.o(var_4b8_2)
                                zmm9 = var_4e0_2
                                zmm8 = var_4f4_3
                                *(r10_1 + 8) = rax_50
                            
                            zmm2 = arg_20
                            zmm0.d = zmm2.d f* *r10_1
                            zmm1 = zmm2
                            var_418 = 0
                            zmm2.d = zmm2.d f* *(r10_1 + 8)
                            int32_t var_410_2 = 0
                            zmm1[0] = zmm1[0] f* *(r10_1 + 4)
                            zmm6 = zmm9
                            float var_228[0x4]
                            var_228[0] = zmm0.d
                            int32_t var_470_4 = zmm11.d
                            float temp0_139[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
                            temp0_139[0] = zmm1[0]
                            int32_t var_46c_4 = zmm8.d
                            float temp0_140[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xc6)
                            temp0_140[0] = zmm2.d
                            float var_468_4 = zmm9[0]
                            float temp0_141[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xc9)
                            var_228 = temp0_141
                            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_141, temp0_141, 0xff), 
                                var_348)
                            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_141, temp0_141, 0xaa), 
                                var_358)
                            float temp0_147[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_141, temp0_141, 0x55), var_368)
                            zmm3 = 0x322bcc77
                            zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0), 
                                _mm_add_ps(temp0_147, 
                                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_141, temp0_141, 0), 
                                        var_378)))
                            zmm1 = zmm13
                            zmm0.d = zmm13.d f* zmm2.d
                            zmm0.d = zmm0.d f+ var_4d0_3
                            zmm7.d = zmm11.d f- zmm0.d
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            zmm1[0] = zmm1[0] f* zmm0.d
                            zmm0.d = zmm13.d f* _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
                            zmm1[0] = zmm1[0] f+ zmm5.d
                            zmm0.d = zmm0.d f+ zmm4.d
                            zmm10.d = zmm8.d f- zmm1[0]
                            zmm6[0] = zmm6[0] f- zmm0.d
                            zmm0.d = zmm7.d f* zmm7.d
                            zmm2.d = zmm10.d f* zmm10.d
                            zmm6[0] = zmm6[0] * zmm6[0]
                            zmm2.d = zmm2.d f+ zmm0.d
                            zmm2.d = zmm2.d f+ zmm6[0]
                            
                            if (not(zmm2.d f<= 9.99999994e-09f))
                                zmm4.d = zmm15.d
                                zmm3 = zmm2
                                zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                zmm3[0] = zmm3[0] f* zmm4.d
                                zmm0.d = zmm5.d f* zmm5.d
                                zmm3[0] = zmm3[0] f* zmm0.d
                                zmm2.d = zmm4.d f- zmm3[0]
                                zmm0.d = zmm5.d f* zmm2.d
                                zmm5.d = zmm5.d f+ zmm0.d
                                zmm1 = zmm5
                                zmm1[0] = zmm1[0] f* zmm5.d
                                zmm3[0] = zmm3[0] * zmm1[0]
                                zmm4.d = zmm4.d f- zmm3[0]
                                zmm3 = 0x322bcc77
                                zmm0.d = zmm5.d f* zmm4.d
                                zmm5.d = zmm5.d f+ zmm0.d
                                int32_t var_4f8_6 = zmm5.d
                                zmm7.d = zmm7.d f* zmm5.d
                                zmm10.d = zmm10.d f* zmm5.d
                                zmm6[0] = zmm6[0] f* zmm5.d
                            
                            int32_t rax_51 = *(arg1 + 0x120)
                            
                            if (rax_51 == 1)
                                if (i == 0)
                                    goto label_1421e89a9
                                
                                goto label_1421e88d1
                            
                            float var_4cc_2
                            float var_4c0_2
                            float var_440_2
                            float var_398_2
                            
                            if (rax_51 != 0)
                            label_1421e88d1:
                                zmm1 = arg_18
                                zmm3 = arg_8
                                zmm4 = zmm1
                                zmm8 = var_4d4
                                zmm11 = zmm1
                                var_4c0_2 = zmm1[0]
                                zmm2 = zmm1
                                var_440_2 = zmm1[0]
                                zmm12 = zmm1
                                var_4cc_2 = zmm1[0]
                                zmm0 = zmm3
                                var_398_2 = zmm3[0]
                            else
                            label_1421e89a9:
                                zmm9[0] = zmm9[0] f- var_2d8:8.d
                                zmm13.d = zmm8.d f- var_2d8:4.d
                                zmm2.d = zmm11.d f- var_2d8.d
                                zmm9[0] = zmm9[0] f* zmm7.d
                                zmm0.d = zmm6.d f* zmm13.d
                                zmm14.d = zmm6.d f* zmm2.d
                                zmm8.d = zmm9.d f* zmm10.d
                                zmm14.d = zmm14.d f- zmm9[0]
                                zmm13.d = zmm13.d f* zmm7.d
                                zmm8.d = zmm8.d f- zmm0.d
                                zmm0.d = zmm10.d f* zmm2.d
                                zmm2.d = zmm14.d f* zmm14.d
                                zmm13.d = zmm13.d f- zmm0.d
                                zmm0.d = zmm8.d f* zmm8.d
                                zmm1 = zmm13
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm1[0] = zmm1[0] f* zmm13.d
                                zmm2.d = zmm2.d f+ zmm1[0]
                                
                                if (zmm2.d f<= zmm3[0])
                                    zmm0 = _mm_unpacklo_ps(var_2f8.d, var_2f8:4.d[0].q)
                                    zmm1 = zmm0
                                    uint64_t var_1cc_1 = zmm0.q
                                    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                    zmm14 = zmm0
                                    zmm8 = zmm1.d
                                    zmm13 = var_2f8:8.d.d
                                    arg_8 = zmm0.d
                                else
                                    zmm4.d = zmm15.d
                                    zmm3 = zmm2
                                    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                    zmm3[0] = zmm3[0] f* zmm4.d
                                    zmm0.d = zmm5.d f* zmm5.d
                                    zmm3[0] = zmm3[0] f* zmm0.d
                                    zmm2.d = zmm4.d f- zmm3[0]
                                    zmm0.d = zmm5.d f* zmm2.d
                                    zmm5.d = zmm5.d f+ zmm0.d
                                    zmm1 = zmm5
                                    zmm1[0] = zmm1[0] f* zmm5.d
                                    zmm3[0] = zmm3[0] * zmm1[0]
                                    zmm4.d = zmm4.d f- zmm3[0]
                                    zmm0.d = zmm5.d f* zmm4.d
                                    zmm5.d = zmm5.d f+ zmm0.d
                                    zmm14.d = zmm14.d f* zmm5.d
                                    arg_8 = zmm5.d
                                    zmm8.d = zmm8.d f* zmm5.d
                                    arg_8 = zmm14.d
                                    zmm13.d = zmm13.d f* zmm5.d
                                
                                zmm0 = arg_8
                                zmm4 = zmm13
                                var_398_2 = zmm0.d
                                zmm11 = zmm13
                                var_4d4 = zmm8.d
                                zmm2 = zmm13
                                arg_18 = zmm13.d
                                zmm12 = zmm13
                                var_4c0_2 = zmm13.d
                                zmm1 = zmm13
                                var_440_2 = zmm13.d
                                var_4cc_2 = zmm13.d
                            
                            float var_474_2 = zmm1[0]
                            zmm15 = zmm1
                            float var_448_3 = zmm1[0]
                            zmm13 = zmm14
                            int32_t var_438_3 = zmm14.d
                            zmm5 = zmm14
                            int32_t var_4ac_4 = zmm14.d
                            zmm9 = zmm14
                            int32_t var_4a8_2 = zmm14.d
                            int32_t var_4c4_2 = zmm14.d
                            
                            if (j == 0)
                                zmm9 = zmm8
                                zmm6 = zmm0
                                zmm7 = zmm1
                            else
                                zmm3 = 0x3fc90fdb
                                zmm3[0] = 1.57079637f f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14c))).d
                                float temp0_157[0x4] = _mm_cvtepi32_ps(zx.o(j))
                                zmm3[0] = zmm3[0] * temp0_157[0]
                                zmm0.d = zmm3.d f* 0.159154937f
                                
                                if (zmm3[0] < 0f)
                                    zmm14 = arg_8
                                    zmm15 = arg_18
                                    zmm1 = zmm14
                                    zmm0.d = zmm0.d f- 0.5f
                                    var_4c4_2 = zmm14.d
                                    zmm9 = zmm14
                                    var_4a8_2 = zmm14.d
                                    zmm5 = zmm14
                                    var_4ac_4 = zmm14.d
                                    zmm13 = zmm14
                                    var_438_3 = zmm14.d
                                    zmm11 = zmm15
                                    var_398_2 = zmm1[0]
                                    zmm14 = zmm1
                                    var_4c0_2 = zmm4.d
                                    var_474_2 = zmm15[0]
                                    zmm2 = zmm15
                                    var_440_2 = zmm15.d
                                    zmm12 = zmm15
                                    var_4cc_2 = zmm15.d
                                    var_448_3 = zmm15.d
                                else
                                    zmm0.d = zmm0.d f+ 0.5f
                                
                                zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
                                zmm3[0] = zmm3[0] f- zmm0.d
                                
                                if (not(zmm3[0] <= 1.57079637f))
                                    zmm4 = 0xbf800000
                                    zmm0.d = 3.14159274f - zmm3[0]
                                    zmm3 = zmm0
                                else if (zmm3[0] >= -1.57079637f)
                                    zmm4 = 0x3f800000
                                    zmm11 = zmm2
                                    zmm13 = var_4ac_4
                                    zmm9 = zmm5
                                    zmm14 = var_398_2
                                    zmm12 = var_4cc_2
                                    zmm15 = var_474_2
                                else
                                    zmm4 = 0xbf800000
                                    zmm0.d = -3.14159274f - zmm3[0]
                                    zmm11 = var_4c0_2
                                    zmm9 = var_4c4_2
                                    zmm12 = var_440_2
                                    zmm13 = var_4a8_2
                                    zmm14 = var_438_3
                                    zmm3 = zmm0
                                    zmm15 = var_448_3
                                
                                zmm3[0] = zmm3[0] * zmm3[0]
                                zmm0.d = zmm3.d f* 2.3889859e-08f
                                zmm2.d = 2.75255616e-06f f- zmm0.d
                                zmm0.d = zmm3.d f* 2.60516146e-07f
                                zmm5.d = 2.47604949e-05f f- zmm0.d
                                zmm2.d = zmm2.d f* zmm3[0]
                                zmm2.d = zmm2.d f- 0.000198408743f
                                zmm5.d = zmm5.d f* zmm3[0]
                                zmm5.d = zmm5.d f- 0.00138883782f
                                zmm2.d = zmm2.d f* zmm3[0]
                                zmm2.d = zmm2.d f+ 0.00833333097f
                                zmm5.d = zmm5.d f* zmm3[0]
                                zmm5.d = zmm5.d f+ 0.0416666381f
                                zmm2.d = zmm2.d f* zmm3[0]
                                zmm2.d = zmm2.d f- 0.166666672f
                                zmm5.d = zmm5.d f* zmm3[0]
                                zmm5.d = zmm5.d f- 0.5f
                                zmm2.d = zmm2.d f* zmm3[0]
                                zmm2.d = zmm2.d f+ 1f
                                zmm5.d = zmm5.d f* zmm3[0]
                                zmm5.d = zmm5.d f+ 1f
                                zmm2.d = zmm2.d f* zmm3[0]
                                zmm6[0] = zmm6[0] f* zmm2.d
                                zmm7.d = zmm7.d f* zmm2.d
                                zmm10.d = zmm10.d f* zmm2.d
                                zmm5.d = zmm5.d f* zmm4.d
                                zmm9[0] = zmm9[0] * zmm6[0]
                                zmm0.d = zmm7.d f* zmm12[0]
                                zmm1 = zmm5
                                zmm6[0] = zmm6[0] f* zmm8.d
                                zmm4.d = zmm10.d f* zmm11.d
                                zmm6[0] = zmm6[0] f- zmm0.d
                                zmm2.d = zmm7.d f* zmm13.d
                                zmm4.d = zmm4.d f- zmm9[0]
                                zmm0.d = zmm8.d f* zmm10.d
                                zmm9 = zmm10
                                zmm6[0] = zmm6[0] + zmm6[0]
                                zmm2.d = zmm2.d f- zmm0.d
                                zmm4.d = zmm4.d f+ zmm4.d
                                zmm0.d = zmm6.d f* zmm6[0]
                                zmm2.d = zmm2.d f+ zmm2.d
                                zmm1[0] = zmm1[0] f* zmm4.d
                                zmm6[0] = zmm6[0] f* zmm4.d
                                zmm1[0] = zmm1[0] f+ zmm8.d
                                zmm9[0] = zmm9[0] f* zmm2.d
                                zmm10.d = zmm10.d f* zmm4.d
                                zmm9[0] = zmm9[0] f- zmm0.d
                                zmm0 = zmm7
                                zmm7.d = zmm7.d f* zmm6[0]
                                zmm0.d = zmm0.d f* zmm2.d
                                zmm9[0] = zmm9[0] + zmm1[0]
                                zmm1 = zmm5
                                zmm1[0] = zmm1[0] * zmm6[0]
                                zmm7.d = zmm7.d f- zmm10.d
                                zmm5.d = zmm5.d f* zmm2.d
                                zmm6[0] = zmm6[0] f- zmm0.d
                                zmm1[0] = zmm1[0] f+ zmm14.d
                                zmm5.d = zmm5.d f+ zmm15.d
                                zmm6[0] = zmm6[0] + zmm1[0]
                                zmm7.d = zmm7.d f+ zmm5.d
                            
                            zmm5 = 0x3f800000
                            int32_t var_4f0_3 = 0x3f800000
                            
                            if (*(arg1 + 0x180) != 0)
                                zmm5 = *r9_1
                                var_4f0_3 = zmm5.d
                            
                            zmm10 = var_460_1
                            zmm4 = var_4f4_3
                            int32_t r13_1 = 0
                            zmm8 = var_4e0_2
                            zmm3 = zx.o(var_470_4.q)
                            zmm9[0] = zmm9[0] f* zmm10.d
                            zmm6[0] = zmm6[0] f* zmm10.d
                            zmm9[0] = zmm9[0] f* zmm5.d
                            zmm6[0] = zmm6[0] f* zmm5.d
                            zmm7.d = zmm7.d f* zmm10.d
                            zmm2.d = zmm4.d f+ zmm6[0]
                            zmm7.d = zmm7.d f* zmm5.d
                            zmm5 = zx.o(var_4b8_2)
                            zmm1 = zmm5
                            zmm0.d = zmm8.d f+ zmm7.d
                            zmm1[0] = zmm1[0] + zmm9[0]
                            *rdx = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
                            zmm2.d = zmm4.d f- zmm6[0]
                            *(rdx + 8) = zmm0.d
                            zmm1 = zmm5
                            *(rdx + 0x10) = zmm3.q
                            zmm1[0] = zmm1[0] - zmm9[0]
                            *(rdx + 0x18) = var_468_4
                            *(rdx + 0x1c) = 0
                            *(rdx + 0x20) = zmm10.d
                            *(rdx + 0x24) = zmm10.d
                            *(rdx + 0x40) = 0
                            *(rdx + 0x28) = *(rdi_2 + 0x2c)
                            zmm0 = *(rdi_2 + 0x60)
                            float temp0_163[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                            *(rdx + 0x30) = zmm0
                            *(rdx + 0x50) = temp0_163.q
                            zmm0.d = zmm8.d f- zmm7.d
                            *(rdx + 0x58) = zmm0.d
                            *(rdx + 0x60) = zmm3.q
                            *(rdx + 0x68) = var_468_4
                            *(rdx + 0x6c) = 0
                            *(rdx + 0x70) = zmm10.d
                            *(rdx + 0x74) = zmm10.d
                            *(rdx + 0x90) = 0
                            *(rdx + 0x94) = 0x3f800000
                            *(rdx + 0x78) = *(rdi_2 + 0x2c)
                            *(rdx + 0x80) = *(rdi_2 + 0x60)
                            rdx += 0xa0
                            int32_t var_4cc_3 = var_45c.d
                            
                            if (rbx_2[0xa].d s<= 0)
                                zmm15 = var_4c8_2
                            else
                                int32_t var_20c_1 = 0
                                int32_t r12_4 = 0
                                void* r14_3 = rsi_1 - r10_1
                                void* r9_4 = &r10_1[1]
                                zmm0 = zmm5
                                int32_t var_4f4_4
                                int32_t var_4e0_3
                                
                                while (true)
                                    zmm1 = *(rbx_2 + 0x4c)
                                    zmm6 = zx.o(0)
                                    bool cond:6_1 = zmm6[0] f> *(arg1 + 0x16c)
                                    zmm5.d = zmm1.d f* rbx_2[8].d
                                    zmm5.d = zmm5.d f+ zmm0.d
                                    zmm1[0] = zmm1[0] f* rbx_2[9].d
                                    zmm0.d = zmm1.d f* *(rbx_2 + 0x44)
                                    zmm1[0] = zmm1[0] f+ zmm8.d
                                    var_4d0_3 = zmm5.d
                                    int32_t var_4c0_3 = zmm5.d
                                    zmm0.d = zmm0.d f+ zmm4.d
                                    zmm15 = zmm1
                                    var_4e0_3 = zmm15.d
                                    var_4f4_4 = zmm0.d
                                    zmm4 = zmm0
                                    uint128_t* rdi_5
                                    
                                    if (cond:6_1 || *(arg1 + 0x146) == 0)
                                        rdi_5 = var_428_1
                                    else
                                        zmm10 = *(r9_4 + r14_3 - 0x10)
                                        zmm9 = *(r9_4 + r14_3 - 0xc)
                                        zmm11 = *(r9_4 - 0x10)
                                        zmm12 = *(r9_4 - 0xc)
                                        zmm8.d = zmm10.d f- zmm11.d
                                        zmm14 = *(r9_4 + r14_3 - 8)
                                        zmm9[0] = zmm9[0] - zmm12[0]
                                        zmm13 = *(r9_4 - 8)
                                        zmm7.d = zmm14.d f- zmm13.d
                                        zmm0.d = zmm8.d f* zmm8.d
                                        zmm2.d = zmm9.d f* zmm9[0]
                                        zmm1 = zmm7
                                        zmm1[0] = zmm1[0] f* zmm7.d
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm2.d = zmm2.d f+ zmm1[0]
                                        
                                        if (not(zmm2.d f<= 9.99999994e-09f))
                                            zmm3 = zmm2
                                            zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                            zmm3[0] = zmm3[0] * 0.5f
                                            zmm0.d = zmm5.d f* zmm5.d
                                            zmm3[0] = zmm3[0] f* zmm0.d
                                            zmm2.d = 0.5f - zmm3[0]
                                            zmm0.d = zmm5.d f* zmm2.d
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            zmm1 = zmm5
                                            zmm1[0] = zmm1[0] f* zmm5.d
                                            zmm3[0] = zmm3[0] * zmm1[0]
                                            zmm4.d = 0.5f - zmm3[0]
                                            zmm0.d = zmm5.d f* zmm4.d
                                            zmm4 = var_4f4_4
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            int32_t var_4c8_3 = zmm5.d
                                            zmm8.d = zmm8.d f* zmm5.d
                                            zmm9[0] = zmm9[0] f* zmm5.d
                                            zmm7.d = zmm7.d f* zmm5.d
                                            zmm5 = var_4d0_3
                                        
                                        zmm8.d = zmm8.d f* *(arg1 + 0x160)
                                        rdi_5 = var_428_1
                                        zmm9[0] = zmm9[0] f* *(arg1 + 0x164)
                                        zmm7.d = zmm7.d f* *(arg1 + 0x168)
                                        zmm0 = *rdi_5
                                        zmm8.d = zmm8.d f* zmm0.d
                                        zmm9[0] = zmm9[0] f* zmm0.d
                                        zmm8.d = zmm8.d f+ zmm11.d
                                        zmm7.d = zmm7.d f* zmm0.d
                                        zmm9[0] = zmm9[0] + zmm12[0]
                                        zmm0 = *(arg1 + 0x170)
                                        zmm7.d = zmm7.d f+ zmm13.d
                                        int32_t var_490_2 = zmm8.d
                                        zmm8.d = zmm8.d f- zmm10.d
                                        float var_48c_2 = zmm9[0]
                                        int32_t var_488_2 = zmm7.d
                                        
                                        if (_mm_and_ps(zmm8, 0x7fffffff).d f>= zmm0.d)
                                        label_1421e913e:
                                            zmm6 = zx.o(0)
                                            *(r9_4 - 0x10) = var_490_2.q
                                            *(r9_4 - 8) = var_488_2
                                        else
                                            zmm9[0] = zmm9[0] - zmm9[0]
                                            
                                            if (_mm_and_ps(zmm9, 0x7fffffff)[0] f>= zmm0.d)
                                                goto label_1421e913e
                                            
                                            zmm7.d = zmm7.d f- zmm14.d
                                            
                                            if (_mm_and_ps(zmm7, 0x7fffffff).d f>= zmm0.d)
                                                goto label_1421e913e
                                            
                                            zmm6 = zx.o(0)
                                            *(r9_4 - 0x10) = *(r9_4 + r14_3 - 0x10)
                                            *(r9_4 - 8) = *(r9_4 + r14_3 - 8)
                                    
                                    zmm7 = arg_20
                                    zmm0.d = zmm7.d f* *(r9_4 - 0x10)
                                    zmm1 = zmm7
                                    var_418 = 0
                                    zmm1[0] = zmm1[0] f* *(r9_4 - 0xc)
                                    int32_t var_410_3 = 0
                                    zmm9 = var_4d8_1
                                    float var_218[0x4]
                                    var_218[0] = zmm0.d
                                    zmm2.d = zmm7.d f* *(r9_4 - 8)
                                    float temp0_168[0x4] = _mm_shuffle_ps(var_218, var_218, 0xe1)
                                    temp0_168[0] = zmm1[0]
                                    float temp0_169[0x4] =
                                        _mm_shuffle_ps(temp0_168, temp0_168, 0xc6)
                                    temp0_169[0] = zmm2.d
                                    float temp0_170[0x4] =
                                        _mm_shuffle_ps(temp0_169, temp0_169, 0xc9)
                                    var_218 = temp0_170
                                    zmm13 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_170, temp0_170, 0xff), var_348)
                                    zmm0 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_170, temp0_170, 0xaa), var_358)
                                    float temp0_176[0x4] = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_170, temp0_170, 0x55), var_368)
                                    float temp0_177[0x4] = _mm_shuffle_ps(temp0_170, temp0_170, 0)
                                    zmm13 = _mm_add_ps(_mm_add_ps(zmm13, zmm0), 
                                        _mm_add_ps(temp0_176, 
                                            __mulps_xmmps_memps(temp0_177, var_378)))
                                    zmm0 = zmm13
                                    zmm14 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                                    zmm13.d = _mm_shuffle_ps(zmm13, zmm13, 0xaa).d f* zmm9[0]
                                    zmm14.d = zmm14.d f* zmm9[0]
                                    zmm0.d = zmm0.d f* zmm9[0]
                                    zmm13.d = zmm13.d f+ zmm15.d
                                    zmm15 = *(rbx_2 + 0x4c)
                                    zmm14.d = zmm14.d f+ zmm4.d
                                    zmm4.d = zmm15.d f* rbx_2[8].d
                                    zmm0.d = zmm0.d f+ zmm5.d
                                    var_438_3.o = zmm13
                                    var_3c8.o = zmm14
                                    zmm4.d = zmm4.d f+ zmm5.d
                                    zmm5.d = zmm15.d f* *(rbx_2 + 0x44)
                                    zmm15.d = zmm15.d f* rbx_2[9].d
                                    int32_t var_4c8_4 = zmm0.d
                                    int32_t var_4f8_7 = zmm4.d
                                    zmm5.d = zmm5.d f+ var_4f4_4
                                    zmm15.d = zmm15.d f+ var_4e0_3
                                    int32_t var_4dc_4 = zmm5.d
                                    
                                    if (r11_6.b == 0 || r13_1 + 1 != rbx_2[0xa].d)
                                        if (not(zmm6[0] f> *(arg1 + 0x16c)) && *(arg1 + 0x146) != 0)
                                            zmm10 = *(r9_4 + r14_3 - 4)
                                            zmm9 = *(r9_4 + r14_3)
                                            zmm11 = *(r9_4 - 4)
                                            zmm12 = *r9_4
                                            zmm8.d = zmm10.d f- zmm11.d
                                            zmm14 = *(r9_4 + r14_3 + 4)
                                            zmm9[0] = zmm9[0] - zmm12[0]
                                            zmm13 = *(r9_4 + 4)
                                            zmm7.d = zmm14.d f- zmm13.d
                                            zmm0.d = zmm8.d f* zmm8.d
                                            zmm2.d = zmm9.d f* zmm9[0]
                                            zmm1 = zmm7
                                            zmm1[0] = zmm1[0] f* zmm7.d
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm2.d = zmm2.d f+ zmm1[0]
                                            
                                            if (not(zmm2.d f<= 9.99999994e-09f))
                                                zmm3 = zmm2
                                                zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                                zmm3[0] = zmm3[0] * 0.5f
                                                zmm0.d = zmm5.d f* zmm5.d
                                                zmm3[0] = zmm3[0] f* zmm0.d
                                                zmm2.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm5.d f* zmm2.d
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                zmm1 = zmm5
                                                zmm1[0] = zmm1[0] f* zmm5.d
                                                zmm3[0] = zmm3[0] * zmm1[0]
                                                zmm4.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm5.d f* zmm4.d
                                                zmm4 = var_4f8_7
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                int32_t var_4c4_3 = zmm5.d
                                                zmm8.d = zmm8.d f* zmm5.d
                                                zmm9[0] = zmm9[0] f* zmm5.d
                                                zmm7.d = zmm7.d f* zmm5.d
                                                zmm5 = var_4dc_4
                                            
                                            zmm8.d = zmm8.d f* *(arg1 + 0x160)
                                            zmm0 = *rdi_5
                                            zmm9[0] = zmm9[0] f* *(arg1 + 0x164)
                                            zmm7.d = zmm7.d f* *(arg1 + 0x168)
                                            zmm8.d = zmm8.d f* zmm0.d
                                            zmm9[0] = zmm9[0] f* zmm0.d
                                            zmm8.d = zmm8.d f+ zmm11.d
                                            zmm7.d = zmm7.d f* zmm0.d
                                            zmm9[0] = zmm9[0] + zmm12[0]
                                            zmm0 = *(arg1 + 0x170)
                                            zmm7.d = zmm7.d f+ zmm13.d
                                            int32_t var_490_4 = zmm8.d
                                            zmm8.d = zmm8.d f- zmm10.d
                                            float var_48c_4 = zmm9[0]
                                            int32_t var_488_4 = zmm7.d
                                            int32_t rax_65
                                            
                                            if (_mm_and_ps(zmm8, 0x7fffffff).d f>= zmm0.d)
                                                rax_65 = var_488_4
                                                *(r9_4 - 4) = var_490_4.q
                                            else
                                                zmm9[0] = zmm9[0] - zmm9[0]
                                                
                                                if (_mm_and_ps(zmm9, 0x7fffffff)[0] f>= zmm0.d)
                                                    rax_65 = var_488_4
                                                    *(r9_4 - 4) = var_490_4.q
                                                else
                                                    zmm7.d = zmm7.d f- zmm14.d
                                                    
                                                    if (_mm_and_ps(zmm7, 0x7fffffff).d f>= zmm0.d)
                                                        rax_65 = var_488_4
                                                        *(r9_4 - 4) = var_490_4.q
                                                    else
                                                        *(r9_4 - 4) = *(r9_4 + r14_3 - 4)
                                                        rax_65 = *(r9_4 + r14_3 + 4)
                                            
                                            zmm9 = var_4d8_1
                                            zmm7 = arg_20
                                            zmm14 = var_3c8.o
                                            zmm13 = var_438_3.o
                                            *(r9_4 + 4) = rax_65
                                        
                                        zmm10 = var_4e4_2
                                        zmm0.d = zmm7.d f* *(r9_4 - 4)
                                        zmm1 = zmm7
                                        int32_t var_29c_1 = 0
                                        zmm1[0] = zmm1[0] f* *r9_4
                                        var_418 = 0
                                        zmm2.d = zmm7.d f* *(r9_4 + 4)
                                        float var_2a8[0x4]
                                        var_2a8[0] = zmm0.d
                                        int32_t var_410_4 = 0
                                        zmm6 = zx.o(var_4b8_2)
                                        zmm7 = var_47c_2
                                        float temp0_207[0x4] =
                                            _mm_shuffle_ps(var_2a8, var_2a8, 0xe1)
                                        temp0_207[0] = zmm1[0]
                                        float temp0_208[0x4] =
                                            _mm_shuffle_ps(temp0_207, temp0_207, 0xc6)
                                        temp0_208[0] = zmm2.d
                                        float temp0_209[0x4] =
                                            _mm_shuffle_ps(temp0_208, temp0_208, 0xc9)
                                        var_2a8 = temp0_209
                                        zmm8 = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(temp0_209, temp0_209, 0xff), var_348)
                                        zmm0 = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(temp0_209, temp0_209, 0xaa), var_358)
                                        float temp0_215[0x4] = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(temp0_209, temp0_209, 0x55), var_368)
                                        zmm3 = 0x3f000000
                                        zmm8 = _mm_add_ps(_mm_add_ps(zmm8, zmm0), 
                                            _mm_add_ps(temp0_215, 
                                                __mulps_xmmps_memps(
                                                    _mm_shuffle_ps(temp0_209, temp0_209, 0), 
                                                    var_378)))
                                        zmm1 = 0x3f800000
                                        zmm1[0] = 1f f- *(arg1 + 0x174)
                                        zmm12 = zmm8
                                        zmm0.d = _mm_shuffle_ps(zmm8, zmm8, 0x55).d f* zmm9[0]
                                        zmm8 = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                                        zmm12[0] = zmm12[0] * zmm9[0]
                                        zmm8.d = zmm8.d f* zmm9[0]
                                        zmm0.d = zmm0.d f+ zmm5.d
                                        zmm1[0] = zmm1[0] * 0.5f
                                        zmm12[0] = zmm12[0] f+ zmm4.d
                                        zmm8.d = zmm8.d f+ zmm15.d
                                        zmm15 = var_4e8_3
                                        zmm0.d = zmm0.d f- zmm10.d
                                        zmm12[0] = zmm12[0] - zmm6[0]
                                        zmm8.d = zmm8.d f- zmm15.d
                                        zmm0.d = zmm0.d f* zmm1[0]
                                        zmm12[0] = zmm12[0] * zmm1[0]
                                        zmm9 = zmm0
                                        zmm8.d = zmm8.d f* zmm1[0]
                                    else
                                        if (*(arg1 + 0x149) != 0)
                                            if (not(zmm6[0] f> *(arg1 + 0x16c))
                                                    && *(arg1 + 0x146) != 0)
                                                int64_t rcx_18 = sx.q(*(arg1 + 0x150)) * 3
                                                zmm10 = *(rsi_1 + (rcx_18 << 2))
                                                zmm9 = *(rsi_1 + (rcx_18 << 2) + 4)
                                                zmm11 = *(r10_1 + (rcx_18 << 2))
                                                zmm6 = zmm9
                                                zmm12 = *(r10_1 + (rcx_18 << 2) + 4)
                                                zmm8.d = zmm10.d f- zmm11.d
                                                zmm14 = *(rsi_1 + (rcx_18 << 2) + 8)
                                                zmm6[0] = zmm6[0] - zmm12[0]
                                                zmm13 = *(r10_1 + (rcx_18 << 2) + 8)
                                                zmm7.d = zmm14.d f- zmm13.d
                                                zmm0.d = zmm8.d f* zmm8.d
                                                zmm2.d = zmm6.d f* zmm6[0]
                                                zmm1 = zmm7
                                                zmm1[0] = zmm1[0] f* zmm7.d
                                                zmm2.d = zmm2.d f+ zmm0.d
                                                zmm2.d = zmm2.d f+ zmm1[0]
                                                
                                                if (not(zmm2.d f<= 9.99999994e-09f))
                                                    zmm3 = zmm2
                                                    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                                    zmm3[0] = zmm3[0] * 0.5f
                                                    zmm0.d = zmm5.d f* zmm5.d
                                                    zmm3[0] = zmm3[0] f* zmm0.d
                                                    zmm2.d = 0.5f - zmm3[0]
                                                    zmm0.d = zmm5.d f* zmm2.d
                                                    zmm5.d = zmm5.d f+ zmm0.d
                                                    zmm1 = zmm5
                                                    zmm1[0] = zmm1[0] f* zmm5.d
                                                    zmm3[0] = zmm3[0] * zmm1[0]
                                                    zmm4.d = 0.5f - zmm3[0]
                                                    zmm0.d = zmm5.d f* zmm4.d
                                                    zmm5.d = zmm5.d f+ zmm0.d
                                                    int32_t var_4f8_8 = zmm5.d
                                                    zmm1 = zmm5
                                                    zmm0.d = zmm5.d f* zmm8.d
                                                    zmm1[0] = zmm1[0] * zmm6[0]
                                                    zmm5.d = zmm5.d f* zmm7.d
                                                    zmm8 = zmm0
                                                    zmm6 = zmm1
                                                    zmm7 = zmm5
                                                
                                                zmm8.d = zmm8.d f* *(arg1 + 0x160)
                                                zmm0 = *rdi_5
                                                zmm6[0] = zmm6[0] f* *(arg1 + 0x164)
                                                zmm7.d = zmm7.d f* *(arg1 + 0x168)
                                                zmm8.d = zmm8.d f* zmm0.d
                                                zmm6[0] = zmm6[0] f* zmm0.d
                                                zmm8.d = zmm8.d f+ zmm11.d
                                                zmm7.d = zmm7.d f* zmm0.d
                                                zmm6[0] = zmm6[0] + zmm12[0]
                                                zmm0 = *(arg1 + 0x170)
                                                zmm7.d = zmm7.d f+ zmm13.d
                                                int32_t var_490_3 = zmm8.d
                                                zmm8.d = zmm8.d f- zmm10.d
                                                float var_48c_3 = zmm6[0]
                                                int32_t var_488_3 = zmm7.d
                                                int32_t rax_62
                                                
                                                if (_mm_and_ps(zmm8, 0x7fffffff).d f>= zmm0.d)
                                                    rax_62 = var_488_3
                                                    *(r10_1 + (rcx_18 << 2)) = var_490_3.q
                                                else
                                                    zmm6[0] = zmm6[0] - zmm9[0]
                                                    
                                                    if (_mm_and_ps(zmm6, 0x7fffffff)[0] f>= zmm0.d)
                                                        rax_62 = var_488_3
                                                        *(r10_1 + (rcx_18 << 2)) = var_490_3.q
                                                    else
                                                        zmm7.d = zmm7.d f- zmm14.d
                                                        
                                                        if (_mm_and_ps(zmm7, 0x7fffffff).d
                                                                f>= zmm0.d)
                                                            rax_62 = var_488_3
                                                            *(r10_1 + (rcx_18 << 2)) = var_490_3.q
                                                        else
                                                            *(r10_1 + (rcx_18 << 2)) =
                                                                *(rsi_1 + (rcx_18 << 2))
                                                            rax_62 = *(rsi_1 + (rcx_18 << 2) + 8)
                                                
                                                zmm7 = arg_20
                                                zmm14 = var_3c8.o
                                                zmm13 = var_438_3.o
                                                *(r10_1 + (rcx_18 << 2) + 8) = rax_62
                                            
                                            zmm1 = zmm7
                                            int32_t var_26c_1 = 0
                                            int64_t rcx_19 = sx.q(*(arg1 + 0x150)) * 3
                                            zmm2.d = zmm7.d f* *(r10_1 + (rcx_19 << 2) + 8)
                                            zmm1[0] = zmm1[0] f* *(r10_1 + (rcx_19 << 2) + 4)
                                            zmm0.d = zmm7.d f* *(r10_1 + (rcx_19 << 2))
                                            float var_278[0x4]
                                            var_278[0] = zmm0.d
                                            float temp0_188[0x4] =
                                                _mm_shuffle_ps(var_278, var_278, 0xe1)
                                            temp0_188[0] = zmm1[0]
                                            float temp0_189[0x4] =
                                                _mm_shuffle_ps(temp0_188, temp0_188, 0xc6)
                                            temp0_189[0] = zmm2.d
                                            float temp0_190[0x4] =
                                                _mm_shuffle_ps(temp0_189, temp0_189, 0xc9)
                                            var_278 = temp0_190
                                            zmm2 = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_190, temp0_190, 0xff), var_348)
                                            float temp0_194[0x4] = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_190, temp0_190, 0x55), var_368)
                                            zmm0 = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_190, temp0_190, 0xaa), var_358)
                                            float temp0_198[0x4] = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_190, temp0_190, 0), var_378)
                                            var_418.o = _mm_add_ps(_mm_add_ps(zmm2, zmm0), 
                                                _mm_add_ps(temp0_194, temp0_198))
                                        
                                        zmm0 = zx.o(rbx_2[5])
                                        zmm9 = zmm0
                                        zmm7 = *(rbx_2 + 0x34)
                                        zmm3 = 0x3f000000
                                        zmm6 = zx.o(var_4b8_2)
                                        zmm10 = var_4e4_2
                                        zmm15 = var_4e8_3
                                        zmm8 = rbx_2[6].d
                                        zmm12 = zmm0.d
                                        zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                                        var_47c_2 = zmm7.d
                                    
                                    zmm2.d = zmm9.d f* zmm9[0]
                                    zmm1 = zmm8
                                    zmm0.d = zmm12.d f* zmm12[0]
                                    zmm1[0] = zmm1[0] f* zmm8.d
                                    zmm2.d = zmm2.d f+ zmm0.d
                                    zmm2.d = zmm2.d f+ zmm1[0]
                                    
                                    if (not(zmm2.d f<= 9.99999994e-09f))
                                        zmm0 = zmm3
                                        zmm3 = zx.o(0)
                                        zmm5 = zmm0
                                        zmm3[0] = zmm2.d
                                        zmm4 = _mm_rsqrt_ss(zmm3.d, zmm3[0])
                                        zmm3[0] = zmm3[0] f* zmm5.d
                                        zmm0.d = zmm4.d f* zmm4.d
                                        zmm3[0] = zmm3[0] f* zmm0.d
                                        zmm2.d = zmm5.d f- zmm3[0]
                                        zmm0.d = zmm4.d f* zmm2.d
                                        zmm4.d = zmm4.d f+ zmm0.d
                                        zmm1 = zmm4
                                        zmm1[0] = zmm1[0] f* zmm4.d
                                        zmm3[0] = zmm3[0] * zmm1[0]
                                        zmm5.d = zmm5.d f- zmm3[0]
                                        zmm0.d = zmm4.d f* zmm5.d
                                        zmm4.d = zmm4.d f+ zmm0.d
                                        int32_t var_4f8_9 = zmm4.d
                                        zmm12[0] = zmm12[0] f* zmm4.d
                                        zmm9[0] = zmm9[0] f* zmm4.d
                                        zmm8.d = zmm8.d f* zmm4.d
                                    
                                    zmm11 = zmm10
                                    zmm12[0] = zmm12[0] f* zmm7.d
                                    zmm10 = zmm15
                                    zmm9[0] = zmm9[0] f* zmm7.d
                                    zmm8.d = zmm8.d f* zmm7.d
                                    zmm7 = zmm6
                                    float var_2b8_2[0x4] = zmm12
                                    var_440_2.q = zmm9.q
                                    var_418.o = zmm8
                                    
                                    if (k_4 s> 0)
                                        void* r11_7 = rdx + 0x30
                                        int64_t k_3 = k_4
                                        void* r10_4 = rdx + 0x10
                                        int32_t rdi_6 = 1
                                        void* rbx_4 = var_388_1 + (sx.q(r12_4) << 2)
                                        int64_t k
                                        
                                        do
                                            zmm2.d = float.s(rdi_6)
                                            zmm2.d = zmm2.d f* var_3d8
                                            zmm1 = zmm2
                                            zmm1[0] = zmm1[0] f* zmm2.d
                                            zmm0.d = zmm1.d f* 3f
                                            zmm5.d = zmm1.d f* zmm2.d
                                            zmm6 = zmm0
                                            zmm3 = zmm5
                                            zmm3[0] = zmm3[0] - zmm1[0]
                                            zmm1[0] = zmm1[0] + zmm1[0]
                                            zmm4.d = zmm5.d f+ zmm5.d
                                            zmm5.d = zmm5.d f- zmm1[0]
                                            zmm3[0] = zmm3[0] * zmm12[0]
                                            zmm6[0] = zmm6[0] f- zmm4.d
                                            zmm4.d = zmm4.d f- zmm0.d
                                            zmm5.d = zmm5.d f+ zmm2.d
                                            zmm4.d = zmm4.d f+ 1f
                                            zmm15.d = var_480_2.d f* zmm5.d
                                            zmm2.d = var_4b0_2.d f* zmm5.d
                                            zmm0.d = var_4b8_2.d.d f* zmm4.d
                                            zmm15.d = zmm15.d f+ zmm0.d
                                            zmm0.d = zmm6.d f* var_4c8_4
                                            zmm15.d = zmm15.d f+ zmm3[0]
                                            zmm3[0] = zmm3[0] * zmm9[0]
                                            zmm3[0] = zmm3[0] f* zmm8.d
                                            zmm15.d = zmm15.d f+ zmm0.d
                                            zmm0.d = var_4e4_2.d f* zmm4.d
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm6[0] = zmm6[0] f* zmm13.d
                                            zmm0.d = zmm6.d f* zmm14.d
                                            zmm2.d = zmm2.d f+ zmm3[0]
                                            zmm1 = var_4bc_4
                                            zmm1[0] = zmm1[0] f* zmm5.d
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm0.d = var_4e8_3.d f* zmm4.d
                                            zmm1[0] = zmm1[0] f+ zmm0.d
                                            int32_t var_4f8_10 = zmm2.d
                                            int32_t var_454_3 = zmm2.d
                                            zmm1[0] = zmm1[0] + zmm3[0]
                                            zmm1[0] = zmm1[0] + zmm6[0]
                                            float var_4dc_5 = zmm1[0]
                                            float var_450_3 = zmm1[0]
                                            zmm3 = 0x322bcc77
                                            zmm12 = zmm7
                                            zmm12[0] = zmm12[0] f- zmm15.d
                                            int32_t var_470_5 = zmm7.d
                                            zmm13.d = zmm11.d f- zmm2.d
                                            int32_t var_46c_5 = zmm11.d
                                            int32_t var_468_5 = zmm10.d
                                            zmm14.d = zmm10.d f- zmm1[0]
                                            zmm0.d = zmm12.d f* zmm12[0]
                                            zmm2.d = zmm13.d f* zmm13.d
                                            zmm1 = zmm14
                                            zmm1[0] = zmm1[0] f* zmm14.d
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm2.d = zmm2.d f+ zmm1[0]
                                            
                                            if (not(zmm2.d f<= 9.99999994e-09f))
                                                zmm3 = zmm2
                                                zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                                zmm3[0] = zmm3[0] * 0.5f
                                                zmm0.d = zmm5.d f* zmm5.d
                                                zmm3[0] = zmm3[0] f* zmm0.d
                                                zmm2.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm5.d f* zmm2.d
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                zmm1 = zmm5
                                                zmm1[0] = zmm1[0] f* zmm5.d
                                                zmm3[0] = zmm3[0] * zmm1[0]
                                                zmm4.d = 0.5f - zmm3[0]
                                                zmm3 = 0x322bcc77
                                                zmm0.d = zmm5.d f* zmm4.d
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                int32_t var_4c4_4 = zmm5.d
                                                zmm12[0] = zmm12[0] f* zmm5.d
                                                zmm13.d = zmm13.d f* zmm5.d
                                                zmm14.d = zmm14.d f* zmm5.d
                                            
                                            if (*(arg1 + 0x120) != 0)
                                                zmm8 = var_4d4
                                                zmm9 = arg_8
                                                zmm10 = arg_18
                                            else
                                                zmm10.d = zmm10.d f- var_2d8:8.d
                                                zmm11.d = zmm11.d f- var_2d8:4.d
                                                zmm7.d = zmm7.d f- var_2d8.d
                                                zmm9 = zmm14
                                                zmm8.d = zmm13.d f* zmm10.d
                                                zmm0.d = zmm14.d f* zmm11.d
                                                zmm9[0] = zmm9[0] f* zmm7.d
                                                zmm8.d = zmm8.d f- zmm0.d
                                                zmm0.d = zmm12.d f* zmm10.d
                                                zmm10.d = zmm12.d f* zmm11.d
                                                zmm9[0] = zmm9[0] f- zmm0.d
                                                zmm0.d = zmm13.d f* zmm7.d
                                                zmm10.d = zmm10.d f- zmm0.d
                                                zmm2.d = zmm9.d f* zmm9[0]
                                                zmm0.d = zmm8.d f* zmm8.d
                                                zmm1 = zmm10
                                                zmm1[0] = zmm1[0] f* zmm10.d
                                                zmm2.d = zmm2.d f+ zmm0.d
                                                zmm2.d = zmm2.d f+ zmm1[0]
                                                
                                                if (zmm2.d f<= zmm3[0])
                                                    zmm0 =
                                                        _mm_unpacklo_ps(var_2f8.d, var_2f8:4.d[0].q)
                                                    uint64_t var_1d8_1 = zmm0.q
                                                    zmm9 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                                    zmm8 = zmm0.d
                                                    zmm10 = var_2f8:8.d.d
                                                else
                                                    zmm3 = zmm2
                                                    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                                    zmm3[0] = zmm3[0] * 0.5f
                                                    zmm0.d = zmm5.d f* zmm5.d
                                                    zmm3[0] = zmm3[0] f* zmm0.d
                                                    zmm2.d = 0.5f - zmm3[0]
                                                    zmm0.d = zmm5.d f* zmm2.d
                                                    zmm5.d = zmm5.d f+ zmm0.d
                                                    zmm1 = zmm5
                                                    zmm1[0] = zmm1[0] f* zmm5.d
                                                    zmm3[0] = zmm3[0] * zmm1[0]
                                                    zmm4.d = 0.5f - zmm3[0]
                                                    zmm0.d = zmm5.d f* zmm4.d
                                                    zmm5.d = zmm5.d f+ zmm0.d
                                                    int32_t var_4c4_5 = zmm5.d
                                                    zmm8.d = zmm8.d f* zmm5.d
                                                    zmm9[0] = zmm9[0] f* zmm5.d
                                                    zmm10.d = zmm10.d f* zmm5.d
                                            
                                            if (j == 0)
                                                zmm12 = zmm8
                                                zmm11 = zmm10
                                                zmm8 = zmm9
                                            else
                                                zmm2.d = 1.57079637f
                                                    f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14c))).d
                                                zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zx.o(j))[0]
                                                zmm0.d = zmm2.d f* 0.159154937f
                                                
                                                if (zmm2.d f< 0f)
                                                    zmm0.d = zmm0.d f- 0.5f
                                                else
                                                    zmm0.d = zmm0.d f+ 0.5f
                                                
                                                zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d
                                                    f* 6.28318548f
                                                zmm2.d = zmm2.d f- zmm0.d
                                                
                                                if (not(zmm2.d f<= 1.57079637f))
                                                    zmm3 = 0xbf800000
                                                    zmm0.d = 3.14159274f f- zmm2.d
                                                    zmm2 = zmm0
                                                else if (zmm2.d f>= -1.57079637f)
                                                    zmm3 = 0x3f800000
                                                else
                                                    zmm3 = 0xbf800000
                                                    zmm0.d = -3.14159274f f- zmm2.d
                                                    zmm2 = zmm0
                                                
                                                zmm6 = 0x3638b88e
                                                zmm1 = zmm2
                                                zmm1[0] = zmm1[0] f* zmm2.d
                                                zmm0.d = zmm1.d f* 2.3889859e-08f
                                                zmm6[0] = 2.75255616e-06f f- zmm0.d
                                                zmm0.d = zmm1.d f* 2.60516146e-07f
                                                zmm7.d = 2.47604949e-05f f- zmm0.d
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] - 0.000198408743f
                                                zmm7.d = zmm7.d f* zmm1[0]
                                                zmm7.d = zmm7.d f- 0.00138883782f
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] + 0.00833333097f
                                                zmm7.d = zmm7.d f* zmm1[0]
                                                zmm7.d = zmm7.d f+ 0.0416666381f
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] - 0.166666672f
                                                zmm7.d = zmm7.d f* zmm1[0]
                                                zmm7.d = zmm7.d f- 0.5f
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] + 1f
                                                zmm7.d = zmm7.d f* zmm1[0]
                                                zmm7.d = zmm7.d f+ 1f
                                                zmm6[0] = zmm6[0] f* zmm2.d
                                                zmm7.d = zmm7.d f* zmm3[0]
                                                zmm4.d = zmm6.d f* zmm13.d
                                                zmm5.d = zmm6.d f* zmm12[0]
                                                zmm3 = zmm10
                                                zmm6[0] = zmm6[0] f* zmm14.d
                                                zmm1 = zmm7
                                                zmm3[0] = zmm3[0] f* zmm4.d
                                                zmm0.d = zmm9.d f* zmm6[0]
                                                zmm11.d = zmm8.d f* zmm6[0]
                                                zmm3[0] = zmm3[0] f- zmm0.d
                                                zmm2.d = zmm9.d f* zmm5.d
                                                zmm0.d = zmm10.d f* zmm5.d
                                                zmm3[0] = zmm3[0] + zmm3[0]
                                                zmm11.d = zmm11.d f- zmm0.d
                                                zmm0.d = zmm8.d f* zmm4.d
                                                zmm1[0] = zmm1[0] * zmm3[0]
                                                zmm2.d = zmm2.d f- zmm0.d
                                                zmm11.d = zmm11.d f+ zmm11.d
                                                zmm1[0] = zmm1[0] f+ zmm8.d
                                                zmm8.d = zmm3.d f* zmm6[0]
                                                zmm2.d = zmm2.d f+ zmm2.d
                                                zmm3[0] = zmm3[0] f* zmm4.d
                                                zmm0.d = zmm11.d f* zmm6[0]
                                                zmm12 = zmm2
                                                zmm12[0] = zmm12[0] f* zmm4.d
                                                zmm12[0] = zmm12[0] f- zmm0.d
                                                zmm0.d = zmm2.d f* zmm5.d
                                                zmm12[0] = zmm12[0] + zmm1[0]
                                                zmm1 = zmm7
                                                zmm1[0] = zmm1[0] f* zmm11.d
                                                zmm8.d = zmm8.d f- zmm0.d
                                                zmm11.d = zmm11.d f* zmm5.d
                                                zmm7.d = zmm7.d f* zmm2.d
                                                zmm1[0] = zmm1[0] + zmm9[0]
                                                zmm11.d = zmm11.d f- zmm3[0]
                                                zmm7.d = zmm7.d f+ zmm10.d
                                                zmm8.d = zmm8.d f+ zmm1[0]
                                                zmm11.d = zmm11.d f+ zmm7.d
                                            
                                            if (*(arg1 + 0x180) == 0)
                                                zmm5 = var_4f0_3
                                            else
                                                zmm5 = *rbx_4
                                                var_4f0_3 = zmm5.d
                                            
                                            zmm6 = var_460_1
                                            zmm1 = zmm15
                                            zmm4 = var_4f8_10
                                            rdi_6 += 1
                                            zmm10 = var_4dc_5
                                            rbx_4 += 4
                                            zmm3 = zx.o(zmm15.d.q)
                                            zmm9 = zx.o(var_440_2.q)
                                            zmm7 = zmm15
                                            zmm13 = var_438_3.o
                                            zmm14 = var_3c8.o
                                            zmm12[0] = zmm12[0] * zmm6[0]
                                            zmm8.d = zmm8.d f* zmm6[0]
                                            zmm12[0] = zmm12[0] f* zmm5.d
                                            zmm8.d = zmm8.d f* zmm5.d
                                            zmm1[0] = zmm1[0] + zmm12[0]
                                            zmm11.d = zmm11.d f* zmm6[0]
                                            zmm2.d = zmm4.d f+ zmm8.d
                                            zmm11.d = zmm11.d f* zmm5.d
                                            zmm5 = var_4cc_3
                                            *rdx = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
                                            zmm0.d = zmm10.d f+ zmm11.d
                                            zmm1 = zmm15
                                            zmm2.d = zmm4.d f- zmm8.d
                                            zmm8 = var_418.o
                                            zmm1[0] = zmm1[0] - zmm12[0]
                                            zmm12 = var_2b8_2
                                            *(rdx + 8) = zmm0.d
                                            *r10_4 = zmm3.q
                                            *(r10_4 + 8) = var_450_3
                                            *(rdx + 0x1c) = 0
                                            *(rdx + 0x20) = zmm6[0]
                                            *(rdx + 0x24) = zmm6[0]
                                            *(rdx + 0x40) = zmm5.d
                                            *(rdx + 0x44) = 0
                                            float temp0_232[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                                            *(rdx + 0x28) = *(var_3a8_1 + 0x2c)
                                            *r11_7 = *(var_3a8_1 + 0x60)
                                            *(rdx + 0x50) = temp0_232.q
                                            zmm0.d = zmm10.d f- zmm11.d
                                            zmm11 = zmm4
                                            *(rdx + 0x58) = zmm0.d
                                            *(r10_4 + 0x50) = zmm3.q
                                            *(r10_4 + 0x58) = var_450_3
                                            r10_4 += 0xa0
                                            *(rdx + 0x6c) = 0
                                            *(rdx + 0x70) = zmm6[0]
                                            *(rdx + 0x74) = zmm6[0]
                                            *(rdx + 0x90) = zmm5.d
                                            zmm5.d = zmm5.d f+ var_45c
                                            *(rdx + 0x94) = 0x3f800000
                                            *(rdx + 0x78) = *(var_3a8_1 + 0x2c)
                                            rdx += 0xa0
                                            var_4cc_3 = zmm5.d
                                            *(r11_7 + 0x50) = *(var_3a8_1 + 0x60)
                                            r11_7 += 0xa0
                                            k = k_3
                                            k_3 -= 1
                                        while (k != 1)
                                        rbx_2 = var_2c0_1
                                        r10_1 = var_380_1
                                        r11_6 = var_4ec_13
                                        rsi_1 = var_2c8_1
                                    
                                    r13_1 += 1
                                    r12_4 += k_6
                                    r9_4 += 0xc
                                    var_4b8_2 = var_4c8_4.q
                                    var_4e4_2 = var_3c8.d.d
                                    var_4e8_3 = var_438_3.d
                                    zmm0 = var_4c0_3
                                    var_480_2 = zmm12[0]
                                    var_4b0_2 = zmm9[0]
                                    var_4bc_4 = zmm8.d
                                    
                                    if (r13_1 s>= rbx_2[0xa].d)
                                        break
                                    
                                    zmm4 = var_4f4_4
                                    zmm8 = var_4e0_3
                                
                                zmm15 = var_4e0_3
                                rdi_2 = var_3a8_1
                                k_5 = k_6
                                r12_1 = var_428_1
                                var_478_2 = var_4f4_4.d
                            
                            if (r11_6.b != 0)
                                int32_t rax_75 = *(rbx_2 + 0x24)
                                uint64_t var_408_2 = *(rbx_2 + 0x1c)
                                float var_4f8_11
                                
                                if (*(arg1 + 0x149) == 0)
                                    zmm13 = var_408_2.d
                                    var_4f8_11 = rax_75.d
                                    zmm0 = var_408_2:4.d
                                else
                                    if (not(0f f> *(arg1 + 0x16c)) && *(arg1 + 0x146) != 0)
                                        int64_t rcx_23 = sx.q(*(arg1 + 0x150)) * 3
                                        zmm10 = *(rsi_1 + (rcx_23 << 2))
                                        zmm9 = *(rsi_1 + (rcx_23 << 2) + 4)
                                        zmm11 = *(r10_1 + (rcx_23 << 2))
                                        zmm12 = *(r10_1 + (rcx_23 << 2) + 4)
                                        zmm8.d = zmm10.d f- zmm11.d
                                        zmm14 = *(rsi_1 + (rcx_23 << 2) + 8)
                                        zmm9[0] = zmm9[0] - zmm12[0]
                                        zmm13 = *(r10_1 + (rcx_23 << 2) + 8)
                                        zmm7.d = zmm14.d f- zmm13.d
                                        zmm0.d = zmm8.d f* zmm8.d
                                        zmm2.d = zmm9.d f* zmm9[0]
                                        zmm1 = zmm7
                                        zmm1[0] = zmm1[0] f* zmm7.d
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm2.d = zmm2.d f+ zmm1[0]
                                        
                                        if (not(zmm2.d f<= 9.99999994e-09f))
                                            zmm3 = zmm2
                                            zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                            zmm3[0] = zmm3[0] * 0.5f
                                            zmm0.d = zmm5.d f* zmm5.d
                                            zmm3[0] = zmm3[0] f* zmm0.d
                                            zmm2.d = 0.5f - zmm3[0]
                                            zmm0.d = zmm5.d f* zmm2.d
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            zmm1 = zmm5
                                            zmm1[0] = zmm1[0] f* zmm5.d
                                            zmm3[0] = zmm3[0] * zmm1[0]
                                            zmm4.d = 0.5f - zmm3[0]
                                            zmm0.d = zmm5.d f* zmm4.d
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            int32_t var_4c8_5 = zmm5.d
                                            zmm8.d = zmm8.d f* zmm5.d
                                            zmm9[0] = zmm9[0] f* zmm5.d
                                            zmm7.d = zmm7.d f* zmm5.d
                                        
                                        zmm8.d = zmm8.d f* *(arg1 + 0x160)
                                        zmm0 = *r12_1
                                        zmm9[0] = zmm9[0] f* *(arg1 + 0x164)
                                        zmm7.d = zmm7.d f* *(arg1 + 0x168)
                                        zmm8.d = zmm8.d f* zmm0.d
                                        zmm9[0] = zmm9[0] f* zmm0.d
                                        zmm8.d = zmm8.d f+ zmm11.d
                                        zmm7.d = zmm7.d f* zmm0.d
                                        zmm0 = *(arg1 + 0x170)
                                        zmm9[0] = zmm9[0] + zmm12[0]
                                        zmm7.d = zmm7.d f+ zmm13.d
                                        int32_t var_490_5 = zmm8.d
                                        zmm8.d = zmm8.d f- zmm10.d
                                        float var_48c_5 = zmm9[0]
                                        int32_t var_488_5 = zmm7.d
                                        int32_t rax_77
                                        
                                        if (_mm_and_ps(zmm8, 0x7fffffff).d f>= zmm0.d)
                                            rax_77 = var_488_5
                                            *(r10_1 + (rcx_23 << 2)) = var_490_5.q
                                        else
                                            zmm9[0] = zmm9[0] - zmm9[0]
                                            
                                            if (_mm_and_ps(zmm9, 0x7fffffff)[0] f>= zmm0.d)
                                                rax_77 = var_488_5
                                                *(r10_1 + (rcx_23 << 2)) = var_490_5.q
                                            else
                                                zmm7.d = zmm7.d f- zmm14.d
                                                
                                                if (_mm_and_ps(zmm7, 0x7fffffff).d f>= zmm0.d)
                                                    rax_77 = var_488_5
                                                    *(r10_1 + (rcx_23 << 2)) = var_490_5.q
                                                else
                                                    *(r10_1 + (rcx_23 << 2)) =
                                                        *(rsi_1 + (rcx_23 << 2))
                                                    rax_77 = *(rsi_1 + (rcx_23 << 2) + 8)
                                        
                                        *(r10_1 + (rcx_23 << 2) + 8) = rax_77
                                    
                                    zmm2 = arg_20
                                    zmm1 = zmm2
                                    int32_t var_27c_1 = 0
                                    int64_t rcx_24 = sx.q(*(arg1 + 0x150)) * 3
                                    var_418 = 0
                                    zmm1[0] = zmm1[0] f* *(r10_1 + (rcx_24 << 2) + 4)
                                    int32_t var_410_5 = 0
                                    zmm0.d = zmm2.d f* *(r10_1 + (rcx_24 << 2))
                                    zmm2.d = zmm2.d f* *(r10_1 + (rcx_24 << 2) + 8)
                                    float var_288[0x4]
                                    var_288[0] = zmm0.d
                                    float temp0_237[0x4] = _mm_shuffle_ps(var_288, var_288, 0xe1)
                                    temp0_237[0] = zmm1[0]
                                    float temp0_238[0x4] =
                                        _mm_shuffle_ps(temp0_237, temp0_237, 0xc6)
                                    temp0_238[0] = zmm2.d
                                    float temp0_239[0x4] =
                                        _mm_shuffle_ps(temp0_238, temp0_238, 0xc9)
                                    var_288 = temp0_239
                                    zmm2 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_239, temp0_239, 0xff), var_348)
                                    float temp0_243[0x4] = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_239, temp0_239, 0x55), var_368)
                                    zmm0 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_239, temp0_239, 0xaa), var_358)
                                    float temp0_247[0x4] = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_239, temp0_239, 0), var_378)
                                    zmm3 = var_4d8_1
                                    zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0), 
                                        _mm_add_ps(temp0_243, temp0_247))
                                    float temp0_251[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                    zmm0.d = zmm2.d f* zmm3[0]
                                    temp0_251[0] = temp0_251[0] * zmm3[0]
                                    zmm13.d = var_408_2.d.d f+ zmm0.d
                                    zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                    zmm0.d = var_408_2:4.d.d f+ temp0_251[0]
                                    zmm2.d = zmm2.d f* zmm3[0]
                                    zmm1 = rax_75
                                    zmm1[0] = zmm1[0] f+ zmm2.d
                                    var_4f8_11 = zmm1[0]
                                
                                zmm6 = var_4e4_2
                                zmm8 = var_4e8_3
                                zmm14 = 0x3f800000
                                int32_t var_4dc_6 = zmm13.d
                                int32_t var_4c8_6 = zmm0.d
                                
                                if (*(arg1 + 0x148) == 0)
                                    zmm7 = *(rbx_2 + 0x4c)
                                    zmm1 = 0x3f800000
                                    zmm1[0] = 1f f- *(arg1 + 0x174)
                                    zmm0.d = zmm7.d f* *(rbx_2 + 0x44)
                                    zmm11.d = zmm7.d f* rbx_2[8].d
                                    zmm0.d = zmm0.d f+ var_478_2
                                    zmm7.d = zmm7.d f* rbx_2[9].d
                                    zmm11.d = zmm11.d f+ var_4d0_3
                                    zmm1[0] = zmm1[0] * 0.5f
                                    zmm7.d = zmm7.d f+ zmm15.d
                                    zmm0.d = zmm0.d f- zmm6[0]
                                    zmm11.d = zmm11.d f- var_4b8_2.d
                                    zmm7.d = zmm7.d f- zmm8.d
                                    zmm0.d = zmm0.d f* zmm1[0]
                                    zmm11.d = zmm11.d f* zmm1[0]
                                    zmm12 = zmm0
                                    zmm7.d = zmm7.d f* zmm1[0]
                                else
                                    zmm0 = zx.o(rbx_2[5])
                                    zmm12 = zmm0
                                    zmm7 = rbx_2[6].d
                                    zmm11 = zmm0.d
                                    zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                                
                                zmm2.d = zmm12.d f* zmm12[0]
                                zmm1 = zmm7
                                zmm0.d = zmm11.d f* zmm11.d
                                zmm1[0] = zmm1[0] f* zmm7.d
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm2.d = zmm2.d f+ zmm1[0]
                                
                                if (not(zmm2.d f<= 9.99999994e-09f))
                                    zmm3 = zx.o(0)
                                    zmm3[0] = zmm2.d
                                    zmm4 = _mm_rsqrt_ss(zmm3.d, zmm3[0])
                                    zmm3[0] = zmm3[0] * 0.5f
                                    zmm0.d = zmm4.d f* zmm4.d
                                    zmm3[0] = zmm3[0] f* zmm0.d
                                    zmm2.d = 0.5f - zmm3[0]
                                    zmm0.d = zmm4.d f* zmm2.d
                                    zmm4.d = zmm4.d f+ zmm0.d
                                    zmm1 = zmm4
                                    zmm1[0] = zmm1[0] f* zmm4.d
                                    zmm3[0] = zmm3[0] * zmm1[0]
                                    zmm5.d = 0.5f - zmm3[0]
                                    zmm0.d = zmm4.d f* zmm5.d
                                    zmm4.d = zmm4.d f+ zmm0.d
                                    int32_t var_4c0_4 = zmm4.d
                                    zmm11.d = zmm11.d f* zmm4.d
                                    zmm12[0] = zmm12[0] f* zmm4.d
                                    zmm7.d = zmm7.d f* zmm4.d
                                
                                zmm1 = var_47c_2
                                zmm15 = zx.o(var_4b8_2)
                                zmm10 = zmm6
                                zmm11.d = zmm11.d f* zmm1[0]
                                zmm9 = zmm15
                                int32_t rcx_25 = 0
                                zmm12[0] = zmm12[0] * zmm1[0]
                                zmm7.d = zmm7.d f* zmm1[0]
                                int32_t var_440_3 = zmm11.d
                                var_438_3.q = zmm12.q
                                int32_t var_4c4_6 = zmm7.d
                                
                                if (k_5 s> 0)
                                    void* r10_5 = rdx + 0x30
                                    void* r9_5 = rdx + 0x10
                                    
                                    while (true)
                                        float var_470_6 = zmm9[0]
                                        int32_t r11_8 = rcx_25 + 1
                                        int32_t var_46c_6 = zmm10.d
                                        zmm2.d = float.s(r11_8)
                                        int32_t var_468_6 = zmm8.d
                                        zmm2.d = zmm2.d f* var_3d8
                                        zmm1 = zmm2
                                        zmm1[0] = zmm1[0] f* zmm2.d
                                        zmm0.d = zmm1.d f* 3f
                                        zmm5.d = zmm1.d f* zmm2.d
                                        zmm6 = zmm0
                                        zmm3 = zmm5
                                        zmm3[0] = zmm3[0] - zmm1[0]
                                        zmm1[0] = zmm1[0] + zmm1[0]
                                        zmm4.d = zmm5.d f+ zmm5.d
                                        zmm5.d = zmm5.d f- zmm1[0]
                                        zmm1 = zmm11
                                        zmm1[0] = zmm1[0] * zmm3[0]
                                        zmm6[0] = zmm6[0] f- zmm4.d
                                        zmm4.d = zmm4.d f- zmm0.d
                                        zmm5.d = zmm5.d f+ zmm2.d
                                        zmm4.d = zmm4.d f+ zmm14.d
                                        zmm2.d = var_4bc_4.d f* zmm5.d
                                        zmm14.d = var_480_2.d f* zmm5.d
                                        zmm0.d = zmm4.d f* zmm15.d
                                        zmm15.d = var_4b0_2.d f* zmm5.d
                                        zmm14.d = zmm14.d f+ zmm0.d
                                        zmm0.d = zmm13.d f* zmm6[0]
                                        zmm14.d = zmm14.d f+ zmm1[0]
                                        zmm1 = zmm12
                                        zmm1[0] = zmm1[0] * zmm3[0]
                                        zmm12 = zmm10
                                        zmm14.d = zmm14.d f+ zmm0.d
                                        zmm0.d = zmm4.d f* var_4e4_2
                                        zmm4.d = zmm4.d f* var_4e8_3
                                        zmm15.d = zmm15.d f+ zmm0.d
                                        zmm11.d = zmm9.d f- zmm14.d
                                        zmm2.d = zmm2.d f+ zmm4.d
                                        zmm0.d = var_4c8_6.d f* zmm6[0]
                                        zmm15.d = zmm15.d f+ zmm1[0]
                                        zmm1 = var_4f8_11
                                        zmm1[0] = zmm1[0] * zmm6[0]
                                        zmm15.d = zmm15.d f+ zmm0.d
                                        zmm0.d = zmm7.d f* zmm3[0]
                                        zmm3 = 0x322bcc77
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        int32_t var_454_4 = zmm15.d
                                        zmm12[0] = zmm12[0] f- zmm15.d
                                        zmm0.d = zmm11.d f* zmm11.d
                                        zmm2.d = zmm2.d f+ zmm1[0]
                                        zmm13.d = zmm8.d f- zmm2.d
                                        int32_t var_4c0_5 = zmm2.d
                                        int32_t var_450_4 = zmm2.d
                                        zmm2.d = zmm12.d f* zmm12[0]
                                        zmm1 = zmm13
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm1[0] = zmm1[0] f* zmm13.d
                                        zmm2.d = zmm2.d f+ zmm1[0]
                                        
                                        if (not(zmm2.d f<= 9.99999994e-09f))
                                            zmm3 = zmm2
                                            zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                            zmm3[0] = zmm3[0] * 0.5f
                                            zmm0.d = zmm5.d f* zmm5.d
                                            zmm3[0] = zmm3[0] f* zmm0.d
                                            zmm2.d = 0.5f - zmm3[0]
                                            zmm0.d = zmm5.d f* zmm2.d
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            zmm1 = zmm5
                                            zmm1[0] = zmm1[0] f* zmm5.d
                                            zmm3[0] = zmm3[0] * zmm1[0]
                                            zmm4.d = 0.5f - zmm3[0]
                                            zmm3 = 0x322bcc77
                                            zmm0.d = zmm5.d f* zmm4.d
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            int32_t var_4a8_3 = zmm5.d
                                            zmm1 = zmm5
                                            zmm0.d = zmm5.d f* zmm11.d
                                            zmm1[0] = zmm1[0] * zmm12[0]
                                            zmm5.d = zmm5.d f* zmm13.d
                                            zmm11 = zmm0
                                            zmm12 = zmm1
                                            zmm13 = zmm5
                                        
                                        if (*(arg1 + 0x120) != 0)
                                            zmm9 = var_4d4
                                            zmm10 = arg_8
                                            zmm5 = arg_18
                                        else
                                            zmm8.d = zmm8.d f- var_2d8:8.d
                                            zmm10.d = zmm10.d f- var_2d8:4.d
                                            zmm9[0] = zmm9[0] f- var_2d8.d
                                            zmm12[0] = zmm12[0] f* zmm8.d
                                            zmm0.d = zmm13.d f* zmm10.d
                                            zmm7.d = zmm13.d f* zmm9[0]
                                            zmm12[0] = zmm12[0] f- zmm0.d
                                            zmm0.d = zmm11.d f* zmm8.d
                                            zmm8.d = zmm11.d f* zmm10.d
                                            zmm7.d = zmm7.d f- zmm0.d
                                            zmm0.d = zmm12.d f* zmm9[0]
                                            zmm8.d = zmm8.d f- zmm0.d
                                            zmm2.d = zmm7.d f* zmm7.d
                                            zmm0.d = zmm12.d f* zmm12[0]
                                            zmm1 = zmm8
                                            zmm1[0] = zmm1[0] f* zmm8.d
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm2.d = zmm2.d f+ zmm1[0]
                                            
                                            if (zmm2.d f<= zmm3[0])
                                                zmm0 = _mm_unpacklo_ps(var_2f8.d, var_2f8:4.d[0].q)
                                                uint64_t var_1f0_1 = zmm0.q
                                                zmm10 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                                zmm9 = zmm0.d
                                                zmm5 = var_2f8:8.d.d
                                            else
                                                zmm3 = zx.o(0)
                                                zmm3[0] = zmm2.d
                                                zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3[0])
                                                zmm3[0] = zmm3[0] * 0.5f
                                                zmm0.d = zmm5.d f* zmm5.d
                                                zmm3[0] = zmm3[0] f* zmm0.d
                                                zmm2.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm5.d f* zmm2.d
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                zmm1 = zmm5
                                                zmm1[0] = zmm1[0] f* zmm5.d
                                                zmm3[0] = zmm3[0] * zmm1[0]
                                                zmm4.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm5.d f* zmm4.d
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                zmm9 = zmm5
                                                int32_t var_4a8_4 = zmm5.d
                                                zmm9[0] = zmm9[0] * zmm12[0]
                                                zmm10.d = zmm5.d f* zmm7.d
                                                zmm5.d = zmm5.d f* zmm8.d
                                        
                                        if (j == 0)
                                            zmm7 = zmm9
                                            zmm8 = zmm10
                                            zmm6 = zmm5
                                        else
                                            zmm3 = 0x3fc90fdb
                                            zmm3[0] = 1.57079637f
                                                f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14c))).d
                                            float temp0_260[0x4] = _mm_cvtepi32_ps(zx.o(j))
                                            zmm3[0] = zmm3[0] * temp0_260[0]
                                            zmm0.d = zmm3.d f* 0.159154937f
                                            
                                            if (zmm3[0] < 0f)
                                                zmm0.d = zmm0.d f- 0.5f
                                            else
                                                zmm0.d = zmm0.d f+ 0.5f
                                            
                                            zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d
                                                f* 6.28318548f
                                            zmm3[0] = zmm3[0] f- zmm0.d
                                            
                                            if (not(zmm3[0] <= 1.57079637f))
                                                zmm6 = 0xbf800000
                                                zmm0.d = 3.14159274f - zmm3[0]
                                                zmm3 = zmm0
                                            else if (zmm3[0] >= -1.57079637f)
                                                zmm6 = 0x3f800000
                                            else
                                                zmm6 = 0xbf800000
                                                zmm0.d = -3.14159274f - zmm3[0]
                                                zmm3 = zmm0
                                            
                                            zmm3[0] = zmm3[0] * zmm3[0]
                                            zmm0.d = zmm3.d f* 2.3889859e-08f
                                            zmm2.d = 2.75255616e-06f f- zmm0.d
                                            zmm0.d = zmm3.d f* 2.60516146e-07f
                                            zmm4.d = 2.47604949e-05f f- zmm0.d
                                            zmm2.d = zmm2.d f* zmm3[0]
                                            zmm2.d = zmm2.d f- 0.000198408743f
                                            zmm4.d = zmm4.d f* zmm3[0]
                                            zmm4.d = zmm4.d f- 0.00138883782f
                                            zmm2.d = zmm2.d f* zmm3[0]
                                            zmm2.d = zmm2.d f+ 0.00833333097f
                                            zmm4.d = zmm4.d f* zmm3[0]
                                            zmm4.d = zmm4.d f+ 0.0416666381f
                                            zmm2.d = zmm2.d f* zmm3[0]
                                            zmm2.d = zmm2.d f- 0.166666672f
                                            zmm4.d = zmm4.d f* zmm3[0]
                                            zmm2.d = zmm2.d f* zmm3[0]
                                            zmm4.d = zmm4.d f- 0.5f
                                            zmm2.d = zmm2.d f+ 1f
                                            zmm4.d = zmm4.d f* zmm3[0]
                                            zmm4.d = zmm4.d f+ 1f
                                            zmm2.d = zmm2.d f* zmm3[0]
                                            zmm3 = zmm5
                                            zmm4.d = zmm4.d f* zmm6[0]
                                            zmm6 = zmm9
                                            zmm12[0] = zmm12[0] f* zmm2.d
                                            zmm13.d = zmm13.d f* zmm2.d
                                            zmm1 = zmm4
                                            zmm11.d = zmm11.d f* zmm2.d
                                            zmm0.d = zmm10.d f* zmm13.d
                                            zmm6[0] = zmm6[0] f* zmm13.d
                                            zmm3[0] = zmm3[0] * zmm12[0]
                                            zmm2.d = zmm10.d f* zmm11.d
                                            zmm3[0] = zmm3[0] f- zmm0.d
                                            zmm0.d = zmm5.d f* zmm11.d
                                            zmm6[0] = zmm6[0] f- zmm0.d
                                            zmm0.d = zmm9.d f* zmm12[0]
                                            zmm3[0] = zmm3[0] + zmm3[0]
                                            zmm2.d = zmm2.d f- zmm0.d
                                            zmm6[0] = zmm6[0] + zmm6[0]
                                            zmm1[0] = zmm1[0] * zmm3[0]
                                            zmm3[0] = zmm3[0] * zmm12[0]
                                            zmm1[0] = zmm1[0] + zmm9[0]
                                            zmm8.d = zmm3.d f* zmm13.d
                                            zmm2.d = zmm2.d f+ zmm2.d
                                            zmm0.d = zmm6.d f* zmm13.d
                                            zmm7.d = zmm2.d f* zmm12[0]
                                            zmm7.d = zmm7.d f- zmm0.d
                                            zmm0.d = zmm2.d f* zmm11.d
                                            zmm7.d = zmm7.d f+ zmm1[0]
                                            zmm1 = zmm4
                                            zmm1[0] = zmm1[0] * zmm6[0]
                                            zmm8.d = zmm8.d f- zmm0.d
                                            zmm6[0] = zmm6[0] f* zmm11.d
                                            zmm4.d = zmm4.d f* zmm2.d
                                            zmm1[0] = zmm1[0] f+ zmm10.d
                                            zmm6[0] = zmm6[0] - zmm3[0]
                                            zmm4.d = zmm4.d f+ zmm5.d
                                            zmm8.d = zmm8.d f+ zmm1[0]
                                            zmm6[0] = zmm6[0] f+ zmm4.d
                                        
                                        if (*(arg1 + 0x180) == 0)
                                            zmm0 = var_4f0_3
                                        else
                                            zmm0 = *(var_388_1
                                                + (sx.q(k_5 * rbx_2[0xa].d + rcx_25) << 2))
                                            var_4f0_3 = zmm0.d
                                        
                                        zmm9 = var_460_1
                                        zmm1 = zmm14
                                        zmm5 = var_4cc_3
                                        zmm4 = var_4c0_5
                                        zmm10 = zmm15
                                        zmm3 = zx.o(zmm14.d.q)
                                        zmm11 = var_440_3
                                        zmm12 = zx.o(var_438_3.q)
                                        zmm13 = var_4dc_6
                                        zmm7.d = zmm7.d f* zmm9[0]
                                        zmm8.d = zmm8.d f* zmm9[0]
                                        zmm7.d = zmm7.d f* zmm0.d
                                        zmm8.d = zmm8.d f* zmm0.d
                                        zmm1[0] = zmm1[0] f+ zmm7.d
                                        zmm6[0] = zmm6[0] * zmm9[0]
                                        zmm2.d = zmm15.d f+ zmm8.d
                                        zmm6[0] = zmm6[0] f* zmm0.d
                                        float temp0_262[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                                        zmm2 = zmm15
                                        zmm15 = zx.o(var_4b8_2)
                                        zmm0.d = zmm4.d f+ zmm6[0]
                                        *rdx = temp0_262.q
                                        zmm2.d = zmm2.d f- zmm8.d
                                        zmm1 = zmm14
                                        zmm8 = zmm4
                                        zmm1[0] = zmm1[0] f- zmm7.d
                                        zmm7 = var_4c4_6
                                        *(rdx + 8) = zmm0.d
                                        *r9_5 = zmm3.q
                                        *(r9_5 + 8) = var_450_4
                                        *(rdx + 0x1c) = 0
                                        *(rdx + 0x20) = zmm9[0]
                                        *(rdx + 0x24) = zmm9[0]
                                        *(rdx + 0x40) = zmm5.d
                                        *(rdx + 0x44) = 0
                                        *(rdx + 0x28) = *(rdi_2 + 0x2c)
                                        zmm0 = *(rdi_2 + 0x60)
                                        float temp0_263[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                                        *r10_5 = zmm0
                                        *(rdx + 0x50) = temp0_263.q
                                        zmm0.d = zmm4.d f- zmm6[0]
                                        *(rdx + 0x58) = zmm0.d
                                        *(r9_5 + 0x50) = zmm3.q
                                        *(r9_5 + 0x58) = var_450_4
                                        r9_5 += 0xa0
                                        *(rdx + 0x6c) = 0
                                        rcx_25 = r11_8
                                        *(rdx + 0x70) = zmm9[0]
                                        *(rdx + 0x74) = zmm9[0]
                                        zmm9 = zmm14
                                        *(rdx + 0x90) = zmm5.d
                                        zmm5.d = zmm5.d f+ var_45c
                                        *(rdx + 0x94) = 0x3f800000
                                        *(rdx + 0x78) = *(rdi_2 + 0x2c)
                                        rdx += 0xa0
                                        var_4cc_3 = zmm5.d
                                        *(r10_5 + 0x50) = *(rdi_2 + 0x60)
                                        r10_5 += 0xa0
                                        
                                        if (r11_8 s>= k_5)
                                            break
                                        
                                        zmm14 = 0x3f800000
                                    
                                    r11_6 = var_4ec_13
                                    r12_1 = var_428_1
                            
                            zmm15 = 0x3f000000
                            j += 1
                            zmm12 = zx.o(0)
                            zmm14 = arg_8
                            zmm3 = 0x322bcc77
                            zmm13 = var_4d8_1
                            r10_1 = var_380_1
                            r9_1 = var_388_1
                            i = i_1
                        while (j s< *(arg1 + 0x14c))
                        
                    label_1421eac5b:
                        zmm11 = var_4d4
                        zmm14 = arg_8
                        zmm10 = arg_18
                        zmm15 = 0x3f000000
                else
                    int32_t rax_6
                    
                    if (rax_5 == 0)
                        rax_6 = var_1a8:8.d.d
                        zmm0 = _mm_unpacklo_ps(zmm1, var_1a8:4.d[0].q)
                        uint64_t var_208_1 = zmm0.q
                        zmm6 = *(arg1 + 0x15c)
                    else
                        zmm0 = zx.o(*(rbx_2 + 0xc))
                        rax_6 = *(rbx_2 + 0x14)
                        zmm6 = rbx_2[3].d
                    
                    uint64_t var_3b8_1 = zmm0.q
                    zmm7 = var_3b8_1:4.d
                    zmm8 = var_3b8_1.d
                    zmm2.d = zmm7.d f* zmm7.d
                    zmm9 = rax_6
                    zmm0.d = zmm8.d f* zmm8.d
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm2.d = zmm2.d f+ zmm9[0]
                    
                    if (not(zmm2.d f<= zmm3[0]))
                        zmm5.d = zmm15.d
                        zmm3 = zmm2
                        zmm4 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                        zmm3[0] = zmm3[0] f* zmm5.d
                        zmm0.d = zmm4.d f* zmm4.d
                        zmm3[0] = zmm3[0] f* zmm0.d
                        zmm2.d = zmm5.d f- zmm3[0]
                        zmm0.d = zmm4.d f* zmm2.d
                        zmm4.d = zmm4.d f+ zmm0.d
                        zmm1 = zmm4
                        zmm1[0] = zmm1[0] f* zmm4.d
                        zmm3[0] = zmm3[0] * zmm1[0]
                        zmm5.d = zmm5.d f- zmm3[0]
                        zmm3 = 0x322bcc77
                        zmm0.d = zmm4.d f* zmm5.d
                        zmm4.d = zmm4.d f+ zmm0.d
                        int32_t var_4ec_1 = zmm4.d
                        zmm8.d = zmm8.d f* zmm4.d
                        zmm7.d = zmm7.d f* zmm4.d
                        zmm9[0] = zmm9[0] f* zmm4.d
                    
                    int32_t j_1 = 0
                    zmm0 = *(arg1 + 0x15c)
                    uint32_t r11_2 = rbx_2[7].d u>> 0x1f
                    zmm8.d = zmm8.d f* zmm6[0]
                    uint32_t var_4c8_1 = r11_2
                    zmm7.d = zmm7.d f* zmm6[0]
                    zmm9[0] = zmm9[0] * zmm6[0]
                    float var_440_1 = zmm8.d
                    int32_t var_4c4_1 = zmm7.d
                    float var_4c0_1 = zmm9[0]
                    float var_4a8_1 = zmm0.d
                    
                    if (*(arg1 + 0x14c) s> 0)
                        int32_t var_25c_1 = 0
                        
                        do
                            zmm4 = *(rbx_2 + 0x4c)
                            zmm8 = zx.o(*rbx_2)
                            zmm7 = rbx_2[1].d
                            zmm0.d = zmm4.d f* rbx_2[8].d
                            zmm5.d = zmm4.d f* *(rbx_2 + 0x44)
                            zmm4.d = zmm4.d f* rbx_2[9].d
                            zmm0.d = zmm0.d f+ zmm8.d
                            zmm6 = zmm8.q:4.d
                            zmm5.d = zmm5.d f+ zmm6[0]
                            float var_4f4_1 = zmm6[0]
                            zmm4.d = zmm4.d f+ zmm7.d
                            int32_t var_4cc_1 = zmm0.d
                            float var_4e4_1 = zmm6[0]
                            int32_t var_4e8_1 = zmm7.d
                            int32_t var_4e0_1 = zmm7.d
                            int32_t var_438_1 = zmm5.d
                            int32_t var_4f8_1 = zmm4.d
                            uint64_t var_4b8_1 = zmm8.q
                            
                            if (not(zmm12[0] f> *(arg1 + 0x16c)) && *(arg1 + 0x146) != 0)
                                zmm10 = *rsi_1
                                zmm9 = *(rsi_1 + 4)
                                zmm11 = *r10_1
                                zmm12 = *(r10_1 + 4)
                                zmm8.d = zmm10.d f- zmm11.d
                                zmm14 = *(rsi_1 + 8)
                                zmm9[0] = zmm9[0] - zmm12[0]
                                zmm13 = *(r10_1 + 8)
                                zmm7.d = zmm14.d f- zmm13.d
                                zmm0.d = zmm8.d f* zmm8.d
                                zmm2.d = zmm9.d f* zmm9[0]
                                zmm1 = zmm7
                                zmm1[0] = zmm1[0] f* zmm7.d
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm2.d = zmm2.d f+ zmm1[0]
                                
                                if (not(zmm2.d f<= zmm3[0]))
                                    zmm4.d = zmm15.d
                                    zmm3 = zmm2
                                    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                    zmm3[0] = zmm3[0] f* zmm4.d
                                    zmm0.d = zmm5.d f* zmm5.d
                                    zmm3[0] = zmm3[0] f* zmm0.d
                                    zmm2.d = zmm4.d f- zmm3[0]
                                    zmm0.d = zmm5.d f* zmm2.d
                                    zmm5.d = zmm5.d f+ zmm0.d
                                    zmm1 = zmm5
                                    zmm1[0] = zmm1[0] f* zmm5.d
                                    zmm3[0] = zmm3[0] * zmm1[0]
                                    zmm4.d = zmm4.d f- zmm3[0]
                                    zmm0.d = zmm5.d f* zmm4.d
                                    zmm4 = var_4f8_1
                                    zmm5.d = zmm5.d f+ zmm0.d
                                    int32_t var_4ec_2 = zmm5.d
                                    zmm8.d = zmm8.d f* zmm5.d
                                    zmm9[0] = zmm9[0] f* zmm5.d
                                    zmm7.d = zmm7.d f* zmm5.d
                                    zmm5 = var_438_1
                                
                                zmm8.d = zmm8.d f* *(arg1 + 0x160)
                                zmm0 = *r12_1
                                zmm9[0] = zmm9[0] f* *(arg1 + 0x164)
                                zmm7.d = zmm7.d f* *(arg1 + 0x168)
                                zmm8.d = zmm8.d f* zmm0.d
                                zmm9[0] = zmm9[0] f* zmm0.d
                                zmm8.d = zmm8.d f+ zmm11.d
                                zmm7.d = zmm7.d f* zmm0.d
                                zmm9[0] = zmm9[0] + zmm12[0]
                                zmm0 = *(arg1 + 0x170)
                                zmm7.d = zmm7.d f+ zmm13.d
                                int32_t var_4a0_1 = zmm8.d
                                zmm8.d = zmm8.d f- zmm10.d
                                float var_49c_1 = zmm9[0]
                                int32_t var_498_1 = zmm7.d
                                int32_t rax_8
                                
                                if (_mm_and_ps(zmm8, 0x7fffffff).d f>= zmm0.d)
                                    rax_8 = var_498_1
                                    *r10_1 = var_4a0_1.q
                                else
                                    zmm9[0] = zmm9[0] - zmm9[0]
                                    
                                    if (_mm_and_ps(zmm9, 0x7fffffff)[0] f>= zmm0.d)
                                        rax_8 = var_498_1
                                        *r10_1 = var_4a0_1.q
                                    else
                                        zmm7.d = zmm7.d f- zmm14.d
                                        
                                        if (_mm_and_ps(zmm7, 0x7fffffff).d f>= zmm0.d)
                                            rax_8 = var_498_1
                                            *r10_1 = var_4a0_1.q
                                        else
                                            *r10_1 = *rsi_1
                                            rax_8 = *(rsi_1 + 8)
                                
                                zmm13 = var_4d8_1
                                zmm11 = var_4d4
                                zmm14 = arg_8
                                zmm10 = arg_18
                                zmm8 = zx.o(var_4b8_1)
                                zmm7 = var_4e8_1
                                zmm6 = var_4f4_1
                                *(r10_1 + 8) = rax_8
                            
                            zmm2 = arg_20
                            zmm9 = zmm8
                            zmm0.d = zmm2.d f* *r10_1
                            zmm1 = zmm2
                            var_3c8 = 0
                            zmm1[0] = zmm1[0] f* *(r10_1 + 4)
                            zmm12 = zmm6
                            int32_t var_3c0_1 = 0
                            zmm2.d = zmm2.d f* *(r10_1 + 8)
                            float var_268[0x4]
                            var_268[0] = zmm0.d
                            float temp0_8[0x4] = _mm_shuffle_ps(var_268, var_268, 0xe1)
                            temp0_8[0] = zmm1[0]
                            int32_t var_470_1 = zmm8.d
                            float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
                            temp0_9[0] = zmm2.d
                            float var_46c_1 = zmm6[0]
                            float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
                            var_268 = temp0_10
                            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_10, temp0_10, 0xff), 
                                var_348)
                            float temp0_14[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_10, temp0_10, 0x55), var_368)
                            zmm0 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_10, temp0_10, 0xaa), 
                                var_358)
                            float temp0_18[0x4] =
                                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_10, temp0_10, 0), var_378)
                            int32_t var_468_1 = zmm7.d
                            zmm2 =
                                _mm_add_ps(_mm_add_ps(zmm2, zmm0), _mm_add_ps(temp0_14, temp0_18))
                            float temp0_22[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            temp0_22[0] = temp0_22[0] f* zmm13.d
                            zmm0.d = zmm2.d f* zmm13.d
                            temp0_22[0] = temp0_22[0] f+ zmm5.d
                            zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f* zmm13.d
                            zmm0.d = zmm0.d f+ var_4cc_1
                            zmm12[0] = zmm12[0] - temp0_22[0]
                            zmm2.d = zmm2.d f+ zmm4.d
                            zmm4 = 0x322bcc77
                            zmm9[0] = zmm9[0] f- zmm0.d
                            zmm13.d = zmm7.d f- zmm2.d
                            zmm12[0] = zmm12[0] * zmm12[0]
                            zmm0.d = zmm9.d f* zmm9[0]
                            zmm1 = zmm13
                            zmm1[0] = zmm1[0] f* zmm13.d
                            zmm12[0] = zmm12[0] f+ zmm0.d
                            zmm12[0] = zmm12[0] + zmm1[0]
                            
                            if (not(zmm12[0] <= 9.99999994e-09f))
                                zmm4.d = zmm15.d
                                zmm0 = zmm12
                                zmm3 = zmm0
                                zmm5 = _mm_rsqrt_ss(zmm0.d, zmm3[0])
                                zmm3[0] = zmm3[0] f* zmm4.d
                                zmm0.d = zmm5.d f* zmm5.d
                                zmm3[0] = zmm3[0] f* zmm0.d
                                zmm2.d = zmm4.d f- zmm3[0]
                                zmm0.d = zmm5.d f* zmm2.d
                                zmm5.d = zmm5.d f+ zmm0.d
                                zmm1 = zmm5
                                zmm1[0] = zmm1[0] f* zmm5.d
                                zmm3[0] = zmm3[0] * zmm1[0]
                                zmm4.d = zmm4.d f- zmm3[0]
                                zmm0.d = zmm5.d f* zmm4.d
                                zmm4 = 0x322bcc77
                                zmm5.d = zmm5.d f+ zmm0.d
                                int32_t var_4ec_3 = zmm5.d
                                zmm9[0] = zmm9[0] f* zmm5.d
                                zmm12[0] = zmm12[0] f* zmm5.d
                                zmm13.d = zmm13.d f* zmm5.d
                            
                            int32_t rax_9 = *(arg1 + 0x120)
                            
                            if (rax_9 == 1)
                                if (i == 0)
                                    goto label_1421e6066
                                
                                goto label_1421e5f82
                            
                            float var_4f0_1
                            float var_4dc_1
                            float var_4d0_1
                            float var_4bc_1
                            float var_4b0_1
                            float var_4ac_1
                            float var_480_1
                            int32_t var_47c_1
                            float var_478_1
                            float var_474_1
                            float var_448_1
                            float var_398_1
                            
                            if (rax_9 != 0)
                            label_1421e5f82:
                                zmm1 = arg_8
                                zmm3 = zmm10
                                zmm8 = arg_18
                                zmm4 = zmm10
                                var_480_1 = zmm10.d
                                zmm7 = zmm11
                                var_4bc_1 = zmm10.d
                                zmm15 = zmm10
                                var_478_1 = zmm10.d
                                zmm6 = zmm10
                                var_4ac_1 = zmm10.d
                                zmm5 = zmm1
                                var_4f0_1 = zmm10.d
                                zmm11 = zmm1
                                var_448_1 = zmm10.d
                                zmm10 = zmm1
                                var_474_1 = zmm1[0]
                                var_4d0_1 = zmm1[0]
                                var_398_1 = zmm1[0]
                                var_4b0_1 = zmm1[0]
                                var_4dc_1 = zmm1[0]
                                var_47c_1 = zmm14.d
                            else
                            label_1421e6066:
                                zmm6[0] = zmm6[0] f- var_2d8:4.d
                                zmm1 = zmm7
                                zmm2.d = zmm8.d f- var_2d8.d
                                zmm1[0] = zmm1[0] f- var_2d8:8.d
                                zmm0.d = zmm13.d f* zmm6[0]
                                zmm8.d = zmm13.d f* zmm2.d
                                zmm6[0] = zmm6[0] * zmm9[0]
                                zmm1[0] = zmm1[0] * zmm9[0]
                                zmm7.d = zmm1.d f* zmm12[0]
                                zmm8.d = zmm8.d f- zmm1[0]
                                zmm7.d = zmm7.d f- zmm0.d
                                zmm0.d = zmm12.d f* zmm2.d
                                zmm2.d = zmm8.d f* zmm8.d
                                zmm6[0] = zmm6[0] f- zmm0.d
                                zmm0.d = zmm7.d f* zmm7.d
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm6[0] = zmm6[0] * zmm6[0]
                                zmm2.d = zmm2.d f+ zmm6[0]
                                
                                if (zmm2.d f<= zmm4.d)
                                    zmm0 = _mm_unpacklo_ps(var_2f8.d, var_2f8:4.d[0].q)
                                    zmm2 = zmm0
                                    uint64_t var_1e4_1 = zmm0.q
                                    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                    uint32_t var_328_1 = zmm2.d
                                    zmm2 = zmm0
                                    zmm10 = var_328_1
                                    zmm1 = var_2f8:8.d.d
                                    arg_8 = zmm0.d
                                else
                                    zmm5.d = zmm15.d
                                    zmm3 = zmm2
                                    zmm4 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                    zmm3[0] = zmm3[0] f* zmm5.d
                                    zmm0.d = zmm4.d f* zmm4.d
                                    zmm3[0] = zmm3[0] f* zmm0.d
                                    zmm2.d = zmm5.d f- zmm3[0]
                                    zmm0.d = zmm4.d f* zmm2.d
                                    zmm4.d = zmm4.d f+ zmm0.d
                                    zmm1 = zmm4
                                    zmm1[0] = zmm1[0] f* zmm4.d
                                    zmm3[0] = zmm3[0] * zmm1[0]
                                    zmm5.d = zmm5.d f- zmm3[0]
                                    zmm0.d = zmm4.d f* zmm5.d
                                    zmm4.d = zmm4.d f+ zmm0.d
                                    zmm1 = zmm4
                                    arg_8 = zmm4.d
                                    zmm2.d = zmm1.d f* zmm8.d
                                    zmm10.d = zmm1.d f* zmm7.d
                                    arg_8 = zmm2.d
                                    zmm1[0] = zmm1[0] * zmm6[0]
                                
                                var_4d4 = zmm10.d
                                zmm7 = zmm10
                                zmm10 = zmm2
                                arg_18 = zmm1[0]
                                var_480_1 = zmm1[0]
                                zmm3 = zmm1
                                var_4bc_1 = zmm1[0]
                                zmm4 = zmm1
                                var_47c_1 = zmm2.d
                                zmm14 = zmm2
                                var_478_1 = zmm1[0]
                                zmm5 = zmm2
                                var_474_1 = zmm2.d
                                zmm15 = zmm1
                                var_4d0_1 = zmm2.d
                                zmm6 = zmm1
                                var_398_1 = zmm2.d
                                zmm11 = zmm2
                                var_4b0_1 = zmm2.d
                                zmm8 = zmm1
                                var_4dc_1 = zmm2.d
                                var_4ac_1 = zmm1[0]
                                var_4f0_1 = zmm1[0]
                                var_448_1 = zmm1[0]
                            
                            if (j_1 == 0)
                                zmm9 = zmm7
                            else
                                zmm2.d = 1.57079637f f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14c))).d
                                zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zx.o(j_1))[0]
                                zmm0.d = zmm2.d f* 0.159154937f
                                
                                if (zmm2.d f< 0f)
                                    zmm10 = arg_8
                                    zmm0.d = zmm0.d f- 0.5f
                                    var_480_1 = zmm3[0]
                                    zmm14 = zmm10
                                    zmm3 = arg_18
                                    zmm5 = zmm10
                                    var_47c_1 = zmm10.d
                                    var_4ac_1 = zmm3[0]
                                    zmm8 = zmm3
                                    var_4f0_1 = zmm3[0]
                                    zmm4 = zmm3
                                    var_448_1 = zmm3[0]
                                    zmm15 = zmm3
                                    var_478_1 = zmm3[0]
                                    zmm6 = zmm3
                                    var_474_1 = zmm10.d
                                    zmm11 = zmm10
                                    var_4d0_1 = zmm10.d
                                    var_398_1 = zmm10.d
                                    var_4b0_1 = zmm10.d
                                else
                                    zmm0.d = zmm0.d f+ 0.5f
                                    zmm8 = var_4bc_1
                                    zmm10 = var_4dc_1
                                
                                zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d f* 6.28318548f
                                zmm2.d = zmm2.d f- zmm0.d
                                
                                if (not(zmm2.d f<= 1.57079637f))
                                    zmm3 = 0xbf800000
                                    zmm0.d = 3.14159274f f- zmm2.d
                                    zmm2 = zmm0
                                else if (zmm2.d f>= -1.57079637f)
                                    zmm8 = zmm4
                                    zmm3 = 0x3f800000
                                    zmm14 = zmm5
                                    var_4f0_1 = var_448_1.d
                                    zmm15 = zmm6
                                    var_4b0_1 = zmm10.d
                                    zmm11 = var_4d0_1
                                else
                                    zmm0.d = -3.14159274f f- zmm2.d
                                    zmm3 = 0xbf800000
                                    zmm8 = var_480_1
                                    zmm14 = var_47c_1
                                    zmm15 = var_478_1
                                    zmm11 = var_474_1
                                    zmm2 = zmm0
                                    var_4b0_1 = var_398_1.d
                                    var_4f0_1 = var_4ac_1[0]
                                
                                zmm1 = zmm2
                                zmm6 = 0x37cfb4c2
                                zmm1[0] = zmm1[0] f* zmm2.d
                                zmm0.d = zmm1.d f* 2.3889859e-08f
                                zmm5.d = 2.75255616e-06f f- zmm0.d
                                zmm0.d = zmm1.d f* 2.60516146e-07f
                                zmm6[0] = 2.47604949e-05f f- zmm0.d
                                zmm5.d = zmm5.d f* zmm1[0]
                                zmm5.d = zmm5.d f- 0.000198408743f
                                zmm6[0] = zmm6[0] * zmm1[0]
                                zmm6[0] = zmm6[0] - 0.00138883782f
                                zmm5.d = zmm5.d f* zmm1[0]
                                zmm5.d = zmm5.d f+ 0.00833333097f
                                zmm6[0] = zmm6[0] * zmm1[0]
                                zmm6[0] = zmm6[0] + 0.0416666381f
                                zmm5.d = zmm5.d f* zmm1[0]
                                zmm5.d = zmm5.d f- 0.166666672f
                                zmm6[0] = zmm6[0] * zmm1[0]
                                zmm6[0] = zmm6[0] - 0.5f
                                zmm5.d = zmm5.d f* zmm1[0]
                                zmm5.d = zmm5.d f+ 1f
                                zmm6[0] = zmm6[0] * zmm1[0]
                                zmm6[0] = zmm6[0] + 1f
                                zmm5.d = zmm5.d f* zmm2.d
                                zmm6[0] = zmm6[0] * zmm3[0]
                                zmm4.d = zmm5.d f* zmm9[0]
                                zmm3 = zmm5
                                zmm3[0] = zmm3[0] * zmm12[0]
                                zmm5.d = zmm5.d f* zmm13.d
                                zmm0.d = zmm7.d f* zmm3[0]
                                zmm2.d = zmm3.d f* zmm8.d
                                zmm8.d = zmm7.d f* zmm5.d
                                zmm11.d = zmm11.d f* zmm4.d
                                zmm15.d = zmm15.d f* zmm4.d
                                zmm11.d = zmm11.d f- zmm0.d
                                zmm14.d = zmm14.d f* zmm5.d
                                zmm8.d = zmm8.d f- zmm15.d
                                zmm2.d = zmm2.d f- zmm14.d
                                zmm11.d = zmm11.d f+ zmm11.d
                                zmm8.d = zmm8.d f+ zmm8.d
                                zmm2.d = zmm2.d f+ zmm2.d
                                zmm9 = zmm11
                                zmm9[0] = zmm9[0] * zmm3[0]
                                zmm6[0] = zmm6[0] f* zmm2.d
                                zmm0.d = zmm8.d f* zmm5.d
                                zmm6[0] = zmm6[0] f+ zmm7.d
                                zmm10.d = zmm2.d f* zmm5.d
                                zmm9[0] = zmm9[0] f- zmm0.d
                                zmm2.d = zmm2.d f* zmm3[0]
                                zmm0.d = zmm11.d f* zmm4.d
                                zmm9[0] = zmm9[0] + zmm6[0]
                                zmm6[0] = zmm6[0] f* zmm8.d
                                zmm8.d = zmm8.d f* zmm4.d
                                zmm10.d = zmm10.d f- zmm0.d
                                zmm6[0] = zmm6[0] + var_4b0_1
                                zmm6[0] = zmm6[0] f* zmm11.d
                                zmm8.d = zmm8.d f- zmm2.d
                                zmm6[0] = zmm6[0] + var_4f0_1
                                zmm10.d = zmm10.d f+ zmm6[0]
                                zmm8.d = zmm8.d f+ zmm6[0]
                            
                            zmm5 = 0x3f800000
                            int32_t var_4f0_2 = 0x3f800000
                            
                            if (*(arg1 + 0x180) != 0)
                                zmm5 = *r9_1
                                var_4f0_2 = zmm5.d
                            
                            zmm7 = var_460_1
                            zmm4 = var_4f4_1
                            int32_t r13 = 0
                            zmm6 = var_4e8_1
                            zmm3 = zx.o(var_470_1.q)
                            zmm9[0] = zmm9[0] f* zmm7.d
                            zmm10.d = zmm10.d f* zmm7.d
                            zmm9[0] = zmm9[0] f* zmm5.d
                            zmm10.d = zmm10.d f* zmm5.d
                            zmm8.d = zmm8.d f* zmm7.d
                            zmm2.d = zmm4.d f+ zmm10.d
                            zmm8.d = zmm8.d f* zmm5.d
                            zmm5 = zx.o(var_4b8_1)
                            zmm1 = zmm5
                            zmm0.d = zmm6.d f+ zmm8.d
                            zmm1[0] = zmm1[0] + zmm9[0]
                            *rdx = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
                            zmm2.d = zmm4.d f- zmm10.d
                            *(rdx + 8) = zmm0.d
                            zmm1 = zmm5
                            *(rdx + 0x10) = zmm3.q
                            zmm1[0] = zmm1[0] - zmm9[0]
                            *(rdx + 0x18) = var_468_1
                            *(rdx + 0x1c) = 0
                            *(rdx + 0x20) = zmm7.d
                            *(rdx + 0x24) = zmm7.d
                            *(rdx + 0x40) = 0
                            *(rdx + 0x28) = *(rdi_2 + 0x2c)
                            zmm0 = *(rdi_2 + 0x60)
                            float temp0_32[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                            *(rdx + 0x30) = zmm0
                            *(rdx + 0x50) = temp0_32.q
                            zmm0.d = zmm6.d f- zmm8.d
                            *(rdx + 0x58) = zmm0.d
                            *(rdx + 0x60) = zmm3.q
                            *(rdx + 0x68) = var_468_1
                            *(rdx + 0x6c) = 0
                            *(rdx + 0x70) = zmm7.d
                            *(rdx + 0x74) = zmm7.d
                            *(rdx + 0x90) = 0
                            *(rdx + 0x94) = 0x3f800000
                            *(rdx + 0x78) = *(rdi_2 + 0x2c)
                            *(rdx + 0x80) = *(rdi_2 + 0x60)
                            rdx += 0xa0
                            int32_t var_4d0_2 = var_45c.d
                            
                            if (rbx_2[0xa].d s<= 0)
                                zmm15 = var_4f8_1
                            else
                                int32_t var_24c_1 = 0
                                int32_t r12_2 = 0
                                int64_t r14_1 = rsi_1 - r10_1
                                void* r9_2 = &r10_1[1]
                                zmm0 = zmm5
                                int32_t var_4f4_2
                                int32_t var_4e8_2
                                
                                while (true)
                                    zmm1 = *(rbx_2 + 0x4c)
                                    zmm5.d = zmm1.d f* rbx_2[8].d
                                    zmm5.d = zmm5.d f+ zmm0.d
                                    zmm1[0] = zmm1[0] f* rbx_2[9].d
                                    zmm0.d = zmm1.d f* *(rbx_2 + 0x44)
                                    zmm1[0] = zmm1[0] + zmm6[0]
                                    var_4cc_1 = zmm5.d
                                    zmm6 = zx.o(0)
                                    int32_t var_4bc_2 = zmm5.d
                                    zmm0.d = zmm0.d f+ zmm4.d
                                    zmm15 = zmm1
                                    var_4e8_2 = zmm15.d
                                    var_4f4_2 = zmm0.d
                                    zmm4 = zmm0
                                    uint128_t* rdi_3
                                    
                                    if (0f f> *(arg1 + 0x16c) || *(arg1 + 0x146) == 0)
                                        rdi_3 = var_428_1
                                    else
                                        zmm10 = *(r9_2 + r14_1 - 0x10)
                                        zmm9 = *(r9_2 + r14_1 - 0xc)
                                        zmm11 = *(r9_2 - 0x10)
                                        zmm6 = zmm9
                                        zmm12 = *(r9_2 - 0xc)
                                        zmm8.d = zmm10.d f- zmm11.d
                                        zmm14 = *(r9_2 + r14_1 - 8)
                                        zmm6[0] = zmm6[0] - zmm12[0]
                                        zmm13 = *(r9_2 - 8)
                                        zmm7.d = zmm14.d f- zmm13.d
                                        zmm0.d = zmm8.d f* zmm8.d
                                        zmm2.d = zmm6.d f* zmm6[0]
                                        zmm1 = zmm7
                                        zmm1[0] = zmm1[0] f* zmm7.d
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm2.d = zmm2.d f+ zmm1[0]
                                        
                                        if (not(zmm2.d f<= 9.99999994e-09f))
                                            zmm3 = zmm2
                                            zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                            zmm3[0] = zmm3[0] * 0.5f
                                            zmm0.d = zmm5.d f* zmm5.d
                                            zmm3[0] = zmm3[0] f* zmm0.d
                                            zmm2.d = 0.5f - zmm3[0]
                                            zmm0.d = zmm5.d f* zmm2.d
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            zmm1 = zmm5
                                            zmm1[0] = zmm1[0] f* zmm5.d
                                            zmm3[0] = zmm3[0] * zmm1[0]
                                            zmm4.d = 0.5f - zmm3[0]
                                            zmm0.d = zmm5.d f* zmm4.d
                                            zmm4 = var_4f4_2
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            int32_t var_4ec_4 = zmm5.d
                                            zmm1 = zmm5
                                            zmm0.d = zmm5.d f* zmm8.d
                                            zmm5.d = zmm5.d f* zmm7.d
                                            zmm1[0] = zmm1[0] * zmm6[0]
                                            zmm8 = zmm0
                                            zmm7 = zmm5
                                            zmm5 = var_4cc_1
                                            zmm6 = zmm1
                                        
                                        zmm8.d = zmm8.d f* *(arg1 + 0x160)
                                        rdi_3 = var_428_1
                                        zmm6[0] = zmm6[0] f* *(arg1 + 0x164)
                                        zmm7.d = zmm7.d f* *(arg1 + 0x168)
                                        zmm0 = *rdi_3
                                        zmm8.d = zmm8.d f* zmm0.d
                                        zmm6[0] = zmm6[0] f* zmm0.d
                                        zmm8.d = zmm8.d f+ zmm11.d
                                        zmm7.d = zmm7.d f* zmm0.d
                                        zmm0 = *(arg1 + 0x170)
                                        zmm6[0] = zmm6[0] + zmm12[0]
                                        zmm7.d = zmm7.d f+ zmm13.d
                                        int32_t var_4a0_2 = zmm8.d
                                        zmm8.d = zmm8.d f- zmm10.d
                                        float var_49c_2 = zmm6[0]
                                        int32_t var_498_2 = zmm7.d
                                        
                                        if (_mm_and_ps(zmm8, 0x7fffffff).d f>= zmm0.d)
                                        label_1421e6853:
                                            zmm6 = zx.o(0)
                                            *(r9_2 - 0x10) = var_4a0_2.q
                                            *(r9_2 - 8) = var_498_2
                                        else
                                            zmm6[0] = zmm6[0] - zmm9[0]
                                            
                                            if (_mm_and_ps(zmm6, 0x7fffffff)[0] f>= zmm0.d)
                                                goto label_1421e6853
                                            
                                            zmm7.d = zmm7.d f- zmm14.d
                                            
                                            if (_mm_and_ps(zmm7, 0x7fffffff).d f>= zmm0.d)
                                                goto label_1421e6853
                                            
                                            zmm6 = zx.o(0)
                                            *(r9_2 - 0x10) = *(r9_2 + r14_1 - 0x10)
                                            *(r9_2 - 8) = *(r9_2 + r14_1 - 8)
                                    
                                    zmm7 = arg_20
                                    zmm0.d = zmm7.d f* *(r9_2 - 0x10)
                                    zmm1 = zmm7
                                    var_3c8 = 0
                                    zmm1[0] = zmm1[0] f* *(r9_2 - 0xc)
                                    int32_t var_3c0_2 = 0
                                    zmm10 = var_4d8_1
                                    float var_258[0x4]
                                    var_258[0] = zmm0.d
                                    zmm2.d = zmm7.d f* *(r9_2 - 8)
                                    float temp0_37[0x4] = _mm_shuffle_ps(var_258, var_258, 0xe1)
                                    temp0_37[0] = zmm1[0]
                                    float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc6)
                                    temp0_38[0] = zmm2.d
                                    float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc9)
                                    var_258 = temp0_39
                                    zmm13 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_39, temp0_39, 0xff), var_348)
                                    zmm0 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_39, temp0_39, 0xaa), var_358)
                                    float temp0_45[0x4] = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_39, temp0_39, 0), var_378)
                                    float temp0_46[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x55)
                                    zmm13 = _mm_add_ps(_mm_add_ps(zmm13, zmm0), 
                                        _mm_add_ps(temp0_45, 
                                            __mulps_xmmps_memps(temp0_46, var_368)))
                                    zmm0 = zmm13
                                    zmm14 = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                                    zmm13.d = _mm_shuffle_ps(zmm13, zmm13, 0xaa).d f* zmm10.d
                                    zmm14.d = zmm14.d f* zmm10.d
                                    zmm0.d = zmm0.d f* zmm10.d
                                    zmm13.d = zmm13.d f+ zmm15.d
                                    zmm15 = *(rbx_2 + 0x4c)
                                    zmm14.d = zmm14.d f+ zmm4.d
                                    zmm4.d = zmm15.d f* rbx_2[8].d
                                    zmm0.d = zmm0.d f+ zmm5.d
                                    var_3c8.o = zmm13
                                    var_398_1.o = zmm14
                                    zmm4.d = zmm4.d f+ zmm5.d
                                    zmm5.d = zmm15.d f* *(rbx_2 + 0x44)
                                    zmm15.d = zmm15.d f* rbx_2[9].d
                                    int32_t var_4dc_2 = zmm0.d
                                    int32_t var_4ec_5 = zmm4.d
                                    zmm5.d = zmm5.d f+ var_4f4_2
                                    zmm15.d = zmm15.d f+ var_4e8_2
                                    int32_t var_4f8_2 = zmm5.d
                                    
                                    if (r11_2.b == 0 || r13 + 1 != rbx_2[0xa].d)
                                        if (not(zmm6[0] f> *(arg1 + 0x16c)) && *(arg1 + 0x146) != 0)
                                            zmm10 = *(r9_2 + r14_1 - 4)
                                            zmm9 = *(r9_2 + r14_1)
                                            zmm11 = *(r9_2 - 4)
                                            zmm12 = *r9_2
                                            zmm8.d = zmm10.d f- zmm11.d
                                            zmm14 = *(r9_2 + r14_1 + 4)
                                            zmm9[0] = zmm9[0] - zmm12[0]
                                            zmm13 = *(r9_2 + 4)
                                            zmm7.d = zmm14.d f- zmm13.d
                                            zmm0.d = zmm8.d f* zmm8.d
                                            zmm2.d = zmm9.d f* zmm9[0]
                                            zmm1 = zmm7
                                            zmm1[0] = zmm1[0] f* zmm7.d
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm2.d = zmm2.d f+ zmm1[0]
                                            
                                            if (not(zmm2.d f<= 9.99999994e-09f))
                                                zmm3 = zmm2
                                                zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                                zmm3[0] = zmm3[0] * 0.5f
                                                zmm0.d = zmm5.d f* zmm5.d
                                                zmm3[0] = zmm3[0] f* zmm0.d
                                                zmm2.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm5.d f* zmm2.d
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                zmm1 = zmm5
                                                zmm1[0] = zmm1[0] f* zmm5.d
                                                zmm3[0] = zmm3[0] * zmm1[0]
                                                zmm4.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm5.d f* zmm4.d
                                                zmm4 = var_4ec_5
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                var_438_1 = zmm5.d
                                                zmm8.d = zmm8.d f* zmm5.d
                                                zmm9[0] = zmm9[0] f* zmm5.d
                                                zmm7.d = zmm7.d f* zmm5.d
                                                zmm5 = var_4f8_2
                                            
                                            zmm8.d = zmm8.d f* *(arg1 + 0x160)
                                            zmm0 = *rdi_3
                                            zmm9[0] = zmm9[0] f* *(arg1 + 0x164)
                                            zmm7.d = zmm7.d f* *(arg1 + 0x168)
                                            zmm8.d = zmm8.d f* zmm0.d
                                            zmm9[0] = zmm9[0] f* zmm0.d
                                            zmm8.d = zmm8.d f+ zmm11.d
                                            zmm7.d = zmm7.d f* zmm0.d
                                            zmm0 = *(arg1 + 0x170)
                                            zmm9[0] = zmm9[0] + zmm12[0]
                                            zmm7.d = zmm7.d f+ zmm13.d
                                            int32_t var_4a0_4 = zmm8.d
                                            zmm8.d = zmm8.d f- zmm10.d
                                            float var_49c_4 = zmm9[0]
                                            int32_t var_498_4 = zmm7.d
                                            int32_t rax_23
                                            
                                            if (_mm_and_ps(zmm8, 0x7fffffff).d f>= zmm0.d)
                                                rax_23 = var_498_4
                                                *(r9_2 - 4) = var_4a0_4.q
                                            else
                                                zmm9[0] = zmm9[0] - zmm9[0]
                                                
                                                if (_mm_and_ps(zmm9, 0x7fffffff)[0] f>= zmm0.d)
                                                    rax_23 = var_498_4
                                                    *(r9_2 - 4) = var_4a0_4.q
                                                else
                                                    zmm7.d = zmm7.d f- zmm14.d
                                                    
                                                    if (_mm_and_ps(zmm7, 0x7fffffff).d f>= zmm0.d)
                                                        rax_23 = var_498_4
                                                        *(r9_2 - 4) = var_4a0_4.q
                                                    else
                                                        *(r9_2 - 4) = *(r9_2 + r14_1 - 4)
                                                        rax_23 = *(r9_2 + r14_1 + 4)
                                            
                                            zmm10 = var_4d8_1
                                            zmm7 = arg_20
                                            zmm14 = var_398_1.o
                                            zmm13 = var_3c8.o
                                            *(r9_2 + 4) = rax_23
                                        
                                        zmm8 = var_4e4_1
                                        zmm0.d = zmm7.d f* *(r9_2 - 4)
                                        zmm1 = zmm7
                                        int32_t var_22c_1 = 0
                                        zmm1[0] = zmm1[0] f* *r9_2
                                        var_438_1.q = 0
                                        zmm2.d = zmm7.d f* *(r9_2 + 4)
                                        float var_238[0x4]
                                        var_238[0] = zmm0.d
                                        int32_t var_430_1 = 0
                                        zmm11 = var_4e0_1
                                        zmm6 = var_4a8_1
                                        float temp0_76[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
                                        temp0_76[0] = zmm1[0]
                                        float temp0_77[0x4] =
                                            _mm_shuffle_ps(temp0_76, temp0_76, 0xc6)
                                        temp0_77[0] = zmm2.d
                                        float temp0_78[0x4] =
                                            _mm_shuffle_ps(temp0_77, temp0_77, 0xc9)
                                        var_238 = temp0_78
                                        float temp0_80[0x4] = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(temp0_78, temp0_78, 0xff), var_348)
                                        zmm0 = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(temp0_78, temp0_78, 0xaa), var_358)
                                        float temp0_84[0x4] = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(temp0_78, temp0_78, 0x55), var_368)
                                        zmm3 = 0x3f000000
                                        float temp0_89[0x4] = _mm_add_ps(
                                            _mm_add_ps(temp0_80, zmm0), 
                                            _mm_add_ps(temp0_84, 
                                                __mulps_xmmps_memps(
                                                    _mm_shuffle_ps(temp0_78, temp0_78, 0), 
                                                    var_378)))
                                        zmm1 = 0x3f800000
                                        zmm1[0] = 1f f- *(arg1 + 0x174)
                                        zmm12 = temp0_89
                                        zmm0.d =
                                            _mm_shuffle_ps(temp0_89, temp0_89, 0x55).d f* zmm10.d
                                        zmm9 = _mm_shuffle_ps(temp0_89, temp0_89, 0xaa)
                                        zmm12[0] = zmm12[0] f* zmm10.d
                                        zmm9[0] = zmm9[0] f* zmm10.d
                                        zmm0.d = zmm0.d f+ zmm5.d
                                        zmm1[0] = zmm1[0] * 0.5f
                                        zmm12[0] = zmm12[0] f+ zmm4.d
                                        zmm9[0] = zmm9[0] f+ zmm15.d
                                        zmm0.d = zmm0.d f- zmm8.d
                                        zmm12[0] = zmm12[0] f- var_4b8_1.d
                                        zmm9[0] = zmm9[0] f- zmm11.d
                                        zmm0.d = zmm0.d f* zmm1[0]
                                        zmm12[0] = zmm12[0] * zmm1[0]
                                        zmm10 = zmm0
                                        zmm9[0] = zmm9[0] * zmm1[0]
                                    else
                                        if (*(arg1 + 0x149) != 0)
                                            if (not(zmm6[0] f> *(arg1 + 0x16c))
                                                    && *(arg1 + 0x146) != 0)
                                                int64_t rcx_8 = sx.q(*(arg1 + 0x150)) * 3
                                                zmm10 = *(rsi_1 + (rcx_8 << 2))
                                                zmm9 = *(rsi_1 + (rcx_8 << 2) + 4)
                                                zmm11 = *(r10_1 + (rcx_8 << 2))
                                                zmm6 = zmm9
                                                zmm12 = *(r10_1 + (rcx_8 << 2) + 4)
                                                zmm8.d = zmm10.d f- zmm11.d
                                                zmm14 = *(rsi_1 + (rcx_8 << 2) + 8)
                                                zmm6[0] = zmm6[0] - zmm12[0]
                                                zmm13 = *(r10_1 + (rcx_8 << 2) + 8)
                                                zmm7.d = zmm14.d f- zmm13.d
                                                zmm0.d = zmm8.d f* zmm8.d
                                                zmm2.d = zmm6.d f* zmm6[0]
                                                zmm1 = zmm7
                                                zmm1[0] = zmm1[0] f* zmm7.d
                                                zmm2.d = zmm2.d f+ zmm0.d
                                                zmm2.d = zmm2.d f+ zmm1[0]
                                                
                                                if (not(zmm2.d f<= 9.99999994e-09f))
                                                    zmm3 = zmm2
                                                    zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                                    zmm3[0] = zmm3[0] * 0.5f
                                                    zmm0.d = zmm5.d f* zmm5.d
                                                    zmm3[0] = zmm3[0] f* zmm0.d
                                                    zmm2.d = 0.5f - zmm3[0]
                                                    zmm0.d = zmm5.d f* zmm2.d
                                                    zmm5.d = zmm5.d f+ zmm0.d
                                                    zmm1 = zmm5
                                                    zmm1[0] = zmm1[0] f* zmm5.d
                                                    zmm3[0] = zmm3[0] * zmm1[0]
                                                    zmm4.d = 0.5f - zmm3[0]
                                                    zmm0.d = zmm5.d f* zmm4.d
                                                    zmm5.d = zmm5.d f+ zmm0.d
                                                    int32_t var_4ec_6 = zmm5.d
                                                    zmm1 = zmm5
                                                    zmm0.d = zmm5.d f* zmm8.d
                                                    zmm1[0] = zmm1[0] * zmm6[0]
                                                    zmm5.d = zmm5.d f* zmm7.d
                                                    zmm8 = zmm0
                                                    zmm6 = zmm1
                                                    zmm7 = zmm5
                                                
                                                zmm8.d = zmm8.d f* *(arg1 + 0x160)
                                                zmm0 = *rdi_3
                                                zmm6[0] = zmm6[0] f* *(arg1 + 0x164)
                                                zmm7.d = zmm7.d f* *(arg1 + 0x168)
                                                zmm8.d = zmm8.d f* zmm0.d
                                                zmm6[0] = zmm6[0] f* zmm0.d
                                                zmm8.d = zmm8.d f+ zmm11.d
                                                zmm7.d = zmm7.d f* zmm0.d
                                                zmm0 = *(arg1 + 0x170)
                                                zmm6[0] = zmm6[0] + zmm12[0]
                                                zmm7.d = zmm7.d f+ zmm13.d
                                                int32_t var_4a0_3 = zmm8.d
                                                zmm8.d = zmm8.d f- zmm10.d
                                                float var_49c_3 = zmm6[0]
                                                int32_t var_498_3 = zmm7.d
                                                int32_t rax_20
                                                
                                                if (_mm_and_ps(zmm8, 0x7fffffff).d f>= zmm0.d)
                                                    rax_20 = var_498_3
                                                    *(r10_1 + (rcx_8 << 2)) = var_4a0_3.q
                                                else
                                                    zmm6[0] = zmm6[0] - zmm9[0]
                                                    
                                                    if (_mm_and_ps(zmm6, 0x7fffffff)[0] f>= zmm0.d)
                                                        rax_20 = var_498_3
                                                        *(r10_1 + (rcx_8 << 2)) = var_4a0_3.q
                                                    else
                                                        zmm7.d = zmm7.d f- zmm14.d
                                                        
                                                        if (_mm_and_ps(zmm7, 0x7fffffff).d
                                                                f>= zmm0.d)
                                                            rax_20 = var_498_3
                                                            *(r10_1 + (rcx_8 << 2)) = var_4a0_3.q
                                                        else
                                                            *(r10_1 + (rcx_8 << 2)) =
                                                                *(rsi_1 + (rcx_8 << 2))
                                                            rax_20 = *(rsi_1 + (rcx_8 << 2) + 8)
                                                
                                                zmm7 = arg_20
                                                zmm14 = var_398_1.o
                                                zmm13 = var_3c8.o
                                                *(r10_1 + (rcx_8 << 2) + 8) = rax_20
                                            
                                            zmm1 = zmm7
                                            int32_t var_23c_1 = 0
                                            int64_t rcx_9 = sx.q(*(arg1 + 0x150)) * 3
                                            zmm2.d = zmm7.d f* *(r10_1 + (rcx_9 << 2) + 8)
                                            zmm1[0] = zmm1[0] f* *(r10_1 + (rcx_9 << 2) + 4)
                                            zmm0.d = zmm7.d f* *(r10_1 + (rcx_9 << 2))
                                            float var_248[0x4]
                                            var_248[0] = zmm0.d
                                            float temp0_57[0x4] =
                                                _mm_shuffle_ps(var_248, var_248, 0xe1)
                                            temp0_57[0] = zmm1[0]
                                            float temp0_58[0x4] =
                                                _mm_shuffle_ps(temp0_57, temp0_57, 0xc6)
                                            temp0_58[0] = zmm2.d
                                            float temp0_59[0x4] =
                                                _mm_shuffle_ps(temp0_58, temp0_58, 0xc9)
                                            var_248 = temp0_59
                                            zmm2 = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_59, temp0_59, 0xff), var_348)
                                            float temp0_63[0x4] = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_59, temp0_59, 0x55), var_368)
                                            zmm0 = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_59, temp0_59, 0xaa), var_358)
                                            float temp0_67[0x4] = __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_59, temp0_59, 0), var_378)
                                            var_418.o = _mm_add_ps(_mm_add_ps(zmm2, zmm0), 
                                                _mm_add_ps(temp0_63, temp0_67))
                                        
                                        zmm0 = zx.o(rbx_2[5])
                                        zmm6 = *(rbx_2 + 0x34)
                                        zmm3 = 0x3f000000
                                        zmm8 = var_4e4_1
                                        zmm11 = var_4e0_1
                                        zmm9 = rbx_2[6].d
                                        zmm12 = zmm0.d
                                        zmm10 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                        var_4a8_1 = zmm6[0]
                                    
                                    zmm2.d = zmm10.d f* zmm10.d
                                    zmm0.d = zmm12.d f* zmm12[0]
                                    zmm9[0] = zmm9[0] * zmm9[0]
                                    zmm2.d = zmm2.d f+ zmm0.d
                                    zmm2.d = zmm2.d f+ zmm9[0]
                                    
                                    if (not(zmm2.d f<= 9.99999994e-09f))
                                        zmm0 = zmm3
                                        zmm3 = zx.o(0)
                                        zmm5 = zmm0
                                        zmm3[0] = zmm2.d
                                        zmm4 = _mm_rsqrt_ss(zmm3.d, zmm3[0])
                                        zmm3[0] = zmm3[0] f* zmm5.d
                                        zmm0.d = zmm4.d f* zmm4.d
                                        zmm3[0] = zmm3[0] f* zmm0.d
                                        zmm2.d = zmm5.d f- zmm3[0]
                                        zmm0.d = zmm4.d f* zmm2.d
                                        zmm4.d = zmm4.d f+ zmm0.d
                                        zmm1 = zmm4
                                        zmm1[0] = zmm1[0] f* zmm4.d
                                        zmm3[0] = zmm3[0] * zmm1[0]
                                        zmm5.d = zmm5.d f- zmm3[0]
                                        zmm0.d = zmm4.d f* zmm5.d
                                        zmm4.d = zmm4.d f+ zmm0.d
                                        int32_t var_4ec_7 = zmm4.d
                                        zmm12[0] = zmm12[0] f* zmm4.d
                                        zmm10.d = zmm10.d f* zmm4.d
                                        zmm9[0] = zmm9[0] f* zmm4.d
                                    
                                    zmm15 = zx.o(var_4b8_1)
                                    zmm12[0] = zmm12[0] * zmm6[0]
                                    zmm7 = zmm15
                                    zmm10.d = zmm10.d f* zmm6[0]
                                    zmm9[0] = zmm9[0] * zmm6[0]
                                    var_418.o = zmm12
                                    var_448_1.q = zmm10.q
                                    float var_2b8_1[0x4] = zmm9
                                    
                                    if (k_4 s> 0)
                                        void* r11_3 = rdx + 0x30
                                        int64_t k_2 = k_4
                                        void* r10_2 = rdx + 0x10
                                        int32_t rdi_4 = 1
                                        void* rbx_3 = var_388_1 + (sx.q(r12_2) << 2)
                                        int64_t k_1
                                        
                                        do
                                            int32_t var_470_2 = zmm7.d
                                            zmm2.d = float.s(rdi_4)
                                            int32_t var_46c_2 = zmm8.d
                                            zmm2.d = zmm2.d f* var_3d8
                                            int32_t var_468_2 = zmm11.d
                                            zmm6 = zmm2
                                            zmm1 = zmm2
                                            zmm1[0] = zmm1[0] f* zmm2.d
                                            zmm6[0] = zmm6[0] * zmm1[0]
                                            zmm0.d = zmm1.d f* 3f
                                            zmm6[0] = zmm6[0] - zmm1[0]
                                            zmm1[0] = zmm1[0] + zmm1[0]
                                            zmm4.d = zmm6.d f+ zmm6[0]
                                            zmm6[0] = zmm6[0] - zmm1[0]
                                            zmm1 = zmm12
                                            zmm1[0] = zmm1[0] * zmm6[0]
                                            zmm5.d = zmm0.d f- zmm4.d
                                            zmm4.d = zmm4.d f- zmm0.d
                                            zmm12 = zmm7
                                            zmm6[0] = zmm6[0] f+ zmm2.d
                                            zmm4.d = zmm4.d f+ 1f
                                            zmm0.d = var_440_1.d f* zmm6[0]
                                            zmm2.d = var_4e4_1.d f* zmm4.d
                                            zmm15.d = zmm15.d f* zmm4.d
                                            zmm15.d = zmm15.d f+ zmm0.d
                                            zmm0.d = var_4dc_2.d f* zmm5.d
                                            zmm15.d = zmm15.d f+ zmm1[0]
                                            zmm1 = zmm10
                                            zmm1[0] = zmm1[0] * zmm6[0]
                                            zmm10.d = var_4e0_1.d f* zmm4.d
                                            zmm15.d = zmm15.d f+ zmm0.d
                                            zmm0.d = var_4c4_1.d f* zmm6[0]
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm12[0] = zmm12[0] f- zmm15.d
                                            zmm0.d = zmm14.d f* zmm5.d
                                            zmm2.d = zmm2.d f+ zmm1[0]
                                            zmm9[0] = zmm9[0] * zmm6[0]
                                            zmm3 = 0x322bcc77
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm0.d = var_4c0_1.d f* zmm6[0]
                                            zmm10.d = zmm10.d f+ zmm0.d
                                            int32_t var_4ec_8 = zmm2.d
                                            int32_t var_454_1 = zmm2.d
                                            zmm0.d = zmm13.d f* zmm5.d
                                            zmm13.d = zmm8.d f- zmm2.d
                                            zmm10.d = zmm10.d f+ zmm9[0]
                                            zmm10.d = zmm10.d f+ zmm0.d
                                            zmm2.d = zmm13.d f* zmm13.d
                                            zmm0.d = zmm12.d f* zmm12[0]
                                            zmm14.d = zmm11.d f- zmm10.d
                                            int32_t var_4f8_3 = zmm10.d
                                            int32_t var_450_1 = zmm10.d
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm1 = zmm14
                                            zmm1[0] = zmm1[0] f* zmm14.d
                                            zmm2.d = zmm2.d f+ zmm1[0]
                                            
                                            if (not(zmm2.d f<= 9.99999994e-09f))
                                                zmm3 = zmm2
                                                zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                                zmm3[0] = zmm3[0] * 0.5f
                                                zmm0.d = zmm5.d f* zmm5.d
                                                zmm3[0] = zmm3[0] f* zmm0.d
                                                zmm2.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm5.d f* zmm2.d
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                zmm1 = zmm5
                                                zmm1[0] = zmm1[0] f* zmm5.d
                                                zmm3[0] = zmm3[0] * zmm1[0]
                                                zmm4.d = 0.5f - zmm3[0]
                                                zmm3 = 0x322bcc77
                                                zmm0.d = zmm5.d f* zmm4.d
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                var_438_1 = zmm5.d
                                                zmm12[0] = zmm12[0] f* zmm5.d
                                                zmm13.d = zmm13.d f* zmm5.d
                                                zmm14.d = zmm14.d f* zmm5.d
                                            
                                            if (*(arg1 + 0x120) != 0)
                                                zmm9 = var_4d4
                                                zmm10 = arg_8
                                                zmm8 = arg_18
                                            else
                                                zmm8.d = zmm8.d f- var_2d8:4.d
                                                zmm7.d = zmm7.d f- var_2d8.d
                                                zmm11.d = zmm11.d f- var_2d8:8.d
                                                zmm0 = zmm8
                                                zmm8.d = zmm8.d f* zmm12[0]
                                                zmm0.d = zmm0.d f* zmm14.d
                                                zmm9 = zmm11
                                                zmm10.d = zmm7.d f* zmm14.d
                                                zmm9[0] = zmm9[0] f* zmm13.d
                                                zmm11.d = zmm11.d f* zmm12[0]
                                                zmm9[0] = zmm9[0] f- zmm0.d
                                                zmm7.d = zmm7.d f* zmm13.d
                                                zmm10.d = zmm10.d f- zmm11.d
                                                zmm8.d = zmm8.d f- zmm7.d
                                                zmm0.d = zmm9.d f* zmm9[0]
                                                zmm2.d = zmm10.d f* zmm10.d
                                                zmm1 = zmm8
                                                zmm1[0] = zmm1[0] f* zmm8.d
                                                zmm2.d = zmm2.d f+ zmm0.d
                                                zmm2.d = zmm2.d f+ zmm1[0]
                                                
                                                if (zmm2.d f<= zmm3[0])
                                                    zmm0 =
                                                        _mm_unpacklo_ps(var_2f8.d, var_2f8:4.d[0].q)
                                                    uint64_t var_1fc_1 = zmm0.q
                                                    zmm10 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                                    zmm9 = zmm0.d
                                                    zmm8 = var_2f8:8.d.d
                                                else
                                                    zmm3 = zx.o(0)
                                                    zmm3[0] = zmm2.d
                                                    zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3[0])
                                                    zmm3[0] = zmm3[0] * 0.5f
                                                    zmm0.d = zmm5.d f* zmm5.d
                                                    zmm3[0] = zmm3[0] f* zmm0.d
                                                    zmm2.d = 0.5f - zmm3[0]
                                                    zmm0.d = zmm5.d f* zmm2.d
                                                    zmm5.d = zmm5.d f+ zmm0.d
                                                    zmm1 = zmm5
                                                    zmm1[0] = zmm1[0] f* zmm5.d
                                                    zmm3[0] = zmm3[0] * zmm1[0]
                                                    zmm4.d = 0.5f - zmm3[0]
                                                    zmm0.d = zmm5.d f* zmm4.d
                                                    zmm5.d = zmm5.d f+ zmm0.d
                                                    var_438_1 = zmm5.d
                                                    zmm9[0] = zmm9[0] f* zmm5.d
                                                    zmm10.d = zmm10.d f* zmm5.d
                                                    zmm8.d = zmm8.d f* zmm5.d
                                            
                                            if (j_1 == 0)
                                                zmm12 = zmm9
                                                zmm11 = zmm8
                                                zmm9 = zmm10
                                            else
                                                zmm2.d = 1.57079637f
                                                    f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14c))).d
                                                zmm2.d = zmm2.d f* _mm_cvtepi32_ps(zx.o(j_1))[0]
                                                zmm0.d = zmm2.d f* 0.159154937f
                                                
                                                if (zmm2.d f< 0f)
                                                    zmm0.d = zmm0.d f- 0.5f
                                                else
                                                    zmm0.d = zmm0.d f+ 0.5f
                                                
                                                zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d
                                                    f* 6.28318548f
                                                zmm2.d = zmm2.d f- zmm0.d
                                                
                                                if (not(zmm2.d f<= 1.57079637f))
                                                    zmm3 = 0xbf800000
                                                    zmm0.d = 3.14159274f f- zmm2.d
                                                    zmm2 = zmm0
                                                else if (zmm2.d f>= -1.57079637f)
                                                    zmm3 = 0x3f800000
                                                else
                                                    zmm3 = 0xbf800000
                                                    zmm0.d = -3.14159274f f- zmm2.d
                                                    zmm2 = zmm0
                                                
                                                zmm6 = 0x3638b88e
                                                zmm1 = zmm2
                                                zmm1[0] = zmm1[0] f* zmm2.d
                                                zmm0.d = zmm1.d f* 2.3889859e-08f
                                                zmm6[0] = 2.75255616e-06f f- zmm0.d
                                                zmm0.d = zmm1.d f* 2.60516146e-07f
                                                zmm7.d = 2.47604949e-05f f- zmm0.d
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] - 0.000198408743f
                                                zmm7.d = zmm7.d f* zmm1[0]
                                                zmm7.d = zmm7.d f- 0.00138883782f
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] + 0.00833333097f
                                                zmm7.d = zmm7.d f* zmm1[0]
                                                zmm7.d = zmm7.d f+ 0.0416666381f
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] - 0.166666672f
                                                zmm7.d = zmm7.d f* zmm1[0]
                                                zmm7.d = zmm7.d f- 0.5f
                                                zmm6[0] = zmm6[0] * zmm1[0]
                                                zmm6[0] = zmm6[0] + 1f
                                                zmm7.d = zmm7.d f* zmm1[0]
                                                zmm7.d = zmm7.d f+ 1f
                                                zmm6[0] = zmm6[0] f* zmm2.d
                                                zmm7.d = zmm7.d f* zmm3[0]
                                                zmm4.d = zmm6.d f* zmm13.d
                                                zmm5.d = zmm6.d f* zmm12[0]
                                                zmm3 = zmm8
                                                zmm3[0] = zmm3[0] f* zmm4.d
                                                zmm12 = zmm4
                                                zmm6[0] = zmm6[0] f* zmm14.d
                                                zmm2.d = zmm10.d f* zmm5.d
                                                zmm0.d = zmm10.d f* zmm6[0]
                                                zmm11.d = zmm9.d f* zmm6[0]
                                                zmm3[0] = zmm3[0] f- zmm0.d
                                                zmm0.d = zmm8.d f* zmm5.d
                                                zmm11.d = zmm11.d f- zmm0.d
                                                zmm0.d = zmm9.d f* zmm4.d
                                                zmm3[0] = zmm3[0] + zmm3[0]
                                                zmm2.d = zmm2.d f- zmm0.d
                                                zmm11.d = zmm11.d f+ zmm11.d
                                                zmm3[0] = zmm3[0] f* zmm7.d
                                                zmm2.d = zmm2.d f+ zmm2.d
                                                zmm3[0] = zmm3[0] + zmm9[0]
                                                zmm0.d = zmm11.d f* zmm6[0]
                                                zmm9 = zmm3
                                                zmm9[0] = zmm9[0] * zmm6[0]
                                                zmm12[0] = zmm12[0] f* zmm2.d
                                                zmm3[0] = zmm3[0] f* zmm4.d
                                                zmm12[0] = zmm12[0] f- zmm0.d
                                                zmm0.d = zmm5.d f* zmm2.d
                                                zmm12[0] = zmm12[0] + zmm3[0]
                                                zmm1 = zmm11
                                                zmm1[0] = zmm1[0] f* zmm7.d
                                                zmm9[0] = zmm9[0] f- zmm0.d
                                                zmm11.d = zmm11.d f* zmm5.d
                                                zmm7.d = zmm7.d f* zmm2.d
                                                zmm1[0] = zmm1[0] f+ zmm10.d
                                                zmm11.d = zmm11.d f- zmm3[0]
                                                zmm7.d = zmm7.d f+ zmm8.d
                                                zmm9[0] = zmm9[0] + zmm1[0]
                                                zmm11.d = zmm11.d f+ zmm7.d
                                            
                                            if (*(arg1 + 0x180) == 0)
                                                zmm5 = var_4f0_2
                                            else
                                                zmm5 = *rbx_3
                                                var_4f0_2 = zmm5.d
                                            
                                            zmm6 = var_460_1
                                            zmm1 = zmm15
                                            zmm4 = var_4f8_3
                                            rdi_4 += 1
                                            zmm8 = var_4ec_8
                                            rbx_3 += 4
                                            zmm3 = zx.o(zmm15.d.q)
                                            zmm10 = zx.o(var_448_1.q)
                                            zmm7 = zmm15
                                            zmm13 = var_3c8.o
                                            zmm14 = var_398_1.o
                                            zmm12[0] = zmm12[0] * zmm6[0]
                                            zmm9[0] = zmm9[0] * zmm6[0]
                                            zmm12[0] = zmm12[0] f* zmm5.d
                                            zmm9[0] = zmm9[0] f* zmm5.d
                                            zmm1[0] = zmm1[0] + zmm12[0]
                                            zmm11.d = zmm11.d f* zmm6[0]
                                            zmm2.d = zmm8.d f+ zmm9[0]
                                            zmm11.d = zmm11.d f* zmm5.d
                                            zmm5 = var_4d0_2
                                            *rdx = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
                                            zmm0.d = zmm4.d f+ zmm11.d
                                            zmm1 = zmm15
                                            zmm2.d = zmm8.d f- zmm9[0]
                                            zmm9 = var_2b8_1
                                            zmm1[0] = zmm1[0] - zmm12[0]
                                            zmm12 = var_418.o
                                            zmm15 = zx.o(var_4b8_1)
                                            *(rdx + 8) = zmm0.d
                                            *r10_2 = zmm3.q
                                            *(r10_2 + 8) = var_450_1
                                            *(rdx + 0x1c) = 0
                                            *(rdx + 0x20) = zmm6[0]
                                            *(rdx + 0x24) = zmm6[0]
                                            *(rdx + 0x40) = zmm5.d
                                            *(rdx + 0x44) = 0
                                            float temp0_101[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                                            *(rdx + 0x28) = *(var_3a8_1 + 0x2c)
                                            *r11_3 = *(var_3a8_1 + 0x60)
                                            *(rdx + 0x50) = temp0_101.q
                                            zmm0.d = zmm4.d f- zmm11.d
                                            zmm11 = zmm4
                                            *(rdx + 0x58) = zmm0.d
                                            *(r10_2 + 0x50) = zmm3.q
                                            *(r10_2 + 0x58) = var_450_1
                                            r10_2 += 0xa0
                                            *(rdx + 0x6c) = 0
                                            *(rdx + 0x70) = zmm6[0]
                                            *(rdx + 0x74) = zmm6[0]
                                            *(rdx + 0x90) = zmm5.d
                                            zmm5.d = zmm5.d f+ var_45c
                                            *(rdx + 0x94) = 0x3f800000
                                            *(rdx + 0x78) = *(var_3a8_1 + 0x2c)
                                            rdx += 0xa0
                                            var_4d0_2 = zmm5.d
                                            *(r11_3 + 0x50) = *(var_3a8_1 + 0x60)
                                            r11_3 += 0xa0
                                            k_1 = k_2
                                            k_2 -= 1
                                        while (k_1 != 1)
                                        rbx_2 = var_2c0_1
                                        r10_1 = var_380_1
                                        r11_2 = var_4c8_1
                                        rsi_1 = var_2c8_1
                                    
                                    r13 += 1
                                    r12_2 += k_6
                                    r9_2 += 0xc
                                    var_4b8_1 = var_4dc_2.q
                                    var_4e4_1 = var_398_1.d
                                    var_4e0_1 = var_3c8.d.d
                                    zmm0 = var_4bc_2
                                    var_440_1 = zmm12[0]
                                    var_4c4_1 = zmm10.d
                                    var_4c0_1 = zmm9[0]
                                    
                                    if (r13 s>= rbx_2[0xa].d)
                                        break
                                    
                                    zmm4 = var_4f4_2
                                    zmm6 = var_4e8_2
                                
                                zmm15 = var_4e8_2
                                rdi_2 = var_3a8_1
                                k_5 = k_6
                                r12_1 = var_428_1
                                var_438_1 = var_4f4_2.d
                            
                            if (r11_2.b != 0)
                                int32_t rax_33 = *(rbx_2 + 0x24)
                                uint64_t var_408_1 = *(rbx_2 + 0x1c)
                                
                                if (*(arg1 + 0x149) == 0)
                                    zmm0 = rax_33
                                    zmm14 = var_408_1:4.d
                                    zmm13 = var_408_1.d
                                else
                                    if (not(0f f> *(arg1 + 0x16c)) && *(arg1 + 0x146) != 0)
                                        int64_t rcx_13 = sx.q(*(arg1 + 0x150)) * 3
                                        zmm10 = *(rsi_1 + (rcx_13 << 2))
                                        zmm9 = *(rsi_1 + (rcx_13 << 2) + 4)
                                        zmm11 = *(r10_1 + (rcx_13 << 2))
                                        zmm6 = zmm9
                                        zmm12 = *(r10_1 + (rcx_13 << 2) + 4)
                                        zmm8.d = zmm10.d f- zmm11.d
                                        zmm14 = *(rsi_1 + (rcx_13 << 2) + 8)
                                        zmm6[0] = zmm6[0] - zmm12[0]
                                        zmm13 = *(r10_1 + (rcx_13 << 2) + 8)
                                        zmm7.d = zmm14.d f- zmm13.d
                                        zmm0.d = zmm8.d f* zmm8.d
                                        zmm2.d = zmm6.d f* zmm6[0]
                                        zmm1 = zmm7
                                        zmm1[0] = zmm1[0] f* zmm7.d
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm2.d = zmm2.d f+ zmm1[0]
                                        
                                        if (not(zmm2.d f<= 9.99999994e-09f))
                                            zmm3 = zmm2
                                            zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                            zmm3[0] = zmm3[0] * 0.5f
                                            zmm0.d = zmm5.d f* zmm5.d
                                            zmm3[0] = zmm3[0] f* zmm0.d
                                            zmm2.d = 0.5f - zmm3[0]
                                            zmm0.d = zmm5.d f* zmm2.d
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            zmm1 = zmm5
                                            zmm1[0] = zmm1[0] f* zmm5.d
                                            zmm3[0] = zmm3[0] * zmm1[0]
                                            zmm4.d = 0.5f - zmm3[0]
                                            zmm0.d = zmm5.d f* zmm4.d
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            int32_t var_4ec_9 = zmm5.d
                                            zmm1 = zmm5
                                            zmm0.d = zmm5.d f* zmm8.d
                                            zmm1[0] = zmm1[0] * zmm6[0]
                                            zmm5.d = zmm5.d f* zmm7.d
                                            zmm8 = zmm0
                                            zmm6 = zmm1
                                            zmm7 = zmm5
                                        
                                        zmm8.d = zmm8.d f* *(arg1 + 0x160)
                                        zmm0 = *r12_1
                                        zmm6[0] = zmm6[0] f* *(arg1 + 0x164)
                                        zmm7.d = zmm7.d f* *(arg1 + 0x168)
                                        zmm8.d = zmm8.d f* zmm0.d
                                        zmm6[0] = zmm6[0] f* zmm0.d
                                        zmm8.d = zmm8.d f+ zmm11.d
                                        zmm7.d = zmm7.d f* zmm0.d
                                        zmm0 = *(arg1 + 0x170)
                                        zmm6[0] = zmm6[0] + zmm12[0]
                                        zmm7.d = zmm7.d f+ zmm13.d
                                        int32_t var_4a0_5 = zmm8.d
                                        zmm8.d = zmm8.d f- zmm10.d
                                        float var_49c_5 = zmm6[0]
                                        int32_t var_498_5 = zmm7.d
                                        int32_t rax_35
                                        
                                        if (_mm_and_ps(zmm8, 0x7fffffff).d f>= zmm0.d)
                                            rax_35 = var_498_5
                                            *(r10_1 + (rcx_13 << 2)) = var_4a0_5.q
                                        else
                                            zmm6[0] = zmm6[0] - zmm9[0]
                                            
                                            if (_mm_and_ps(zmm6, 0x7fffffff)[0] f>= zmm0.d)
                                                rax_35 = var_498_5
                                                *(r10_1 + (rcx_13 << 2)) = var_4a0_5.q
                                            else
                                                zmm7.d = zmm7.d f- zmm14.d
                                                
                                                if (_mm_and_ps(zmm7, 0x7fffffff).d f>= zmm0.d)
                                                    rax_35 = var_498_5
                                                    *(r10_1 + (rcx_13 << 2)) = var_4a0_5.q
                                                else
                                                    *(r10_1 + (rcx_13 << 2)) =
                                                        *(rsi_1 + (rcx_13 << 2))
                                                    rax_35 = *(rsi_1 + (rcx_13 << 2) + 8)
                                        
                                        *(r10_1 + (rcx_13 << 2) + 8) = rax_35
                                    
                                    zmm2 = arg_20
                                    zmm1 = zmm2
                                    int32_t var_28c_1 = 0
                                    int64_t rcx_14 = sx.q(*(arg1 + 0x150)) * 3
                                    zmm0.d = zmm2.d f* *(r10_1 + (rcx_14 << 2))
                                    var_418 = 0
                                    zmm1[0] = zmm1[0] f* *(r10_1 + (rcx_14 << 2) + 4)
                                    int32_t var_410_1 = 0
                                    zmm2.d = zmm2.d f* *(r10_1 + (rcx_14 << 2) + 8)
                                    float var_298[0x4]
                                    var_298[0] = zmm0.d
                                    float temp0_106[0x4] = _mm_shuffle_ps(var_298, var_298, 0xe1)
                                    temp0_106[0] = zmm1[0]
                                    float temp0_107[0x4] =
                                        _mm_shuffle_ps(temp0_106, temp0_106, 0xc6)
                                    temp0_107[0] = zmm2.d
                                    float temp0_108[0x4] =
                                        _mm_shuffle_ps(temp0_107, temp0_107, 0xc9)
                                    var_298 = temp0_108
                                    zmm2 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_108, temp0_108, 0xff), var_348)
                                    zmm0 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_108, temp0_108, 0xaa), var_358)
                                    float temp0_114[0x4] = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(temp0_108, temp0_108, 0x55), var_368)
                                    zmm3 = var_4d8_1
                                    zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0), 
                                        _mm_add_ps(temp0_114, 
                                            __mulps_xmmps_memps(
                                                _mm_shuffle_ps(temp0_108, temp0_108, 0), var_378)))
                                    zmm0.d = zmm2.d f* zmm3[0]
                                    float temp0_120[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                    zmm13.d = var_408_1.d.d f+ zmm0.d
                                    zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d f* zmm3[0]
                                    temp0_120[0] = temp0_120[0] * zmm3[0]
                                    zmm0.d = rax_33.d f+ zmm2.d
                                    zmm14.d = var_408_1:4.d.d f+ temp0_120[0]
                                
                                zmm7 = zx.o(var_4b8_1)
                                zmm9 = var_4e4_1
                                int32_t var_4dc_3 = zmm13.d
                                int32_t var_4bc_3 = zmm14.d
                                int32_t var_4f8_4 = zmm0.d
                                
                                if (*(arg1 + 0x148) == 0)
                                    zmm6 = *(rbx_2 + 0x4c)
                                    zmm1 = 0x3f800000
                                    zmm0.d = zmm6.d f* *(rbx_2 + 0x44)
                                    zmm8.d = zmm6.d f* rbx_2[8].d
                                    zmm0.d = zmm0.d f+ var_438_1
                                    zmm6[0] = zmm6[0] f* rbx_2[9].d
                                    zmm8.d = zmm8.d f+ var_4cc_1
                                    zmm1[0] = 1f f- *(arg1 + 0x174)
                                    zmm6[0] = zmm6[0] f+ zmm15.d
                                    zmm15 = var_4e0_1
                                    zmm0.d = zmm0.d f- zmm9[0]
                                    zmm8.d = zmm8.d f- zmm7.d
                                    zmm1[0] = zmm1[0] * 0.5f
                                    zmm6[0] = zmm6[0] f- zmm15.d
                                    zmm0.d = zmm0.d f* zmm1[0]
                                    zmm8.d = zmm8.d f* zmm1[0]
                                    zmm12 = zmm0
                                    zmm6[0] = zmm6[0] * zmm1[0]
                                else
                                    zmm0 = zx.o(rbx_2[5])
                                    zmm12 = zmm0
                                    zmm15 = var_4e0_1
                                    zmm6 = rbx_2[6].d
                                    zmm8 = zmm0.d
                                    zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                                
                                zmm2.d = zmm12.d f* zmm12[0]
                                zmm0.d = zmm8.d f* zmm8.d
                                zmm6[0] = zmm6[0] * zmm6[0]
                                zmm2.d = zmm2.d f+ zmm0.d
                                zmm2.d = zmm2.d f+ zmm6[0]
                                
                                if (not(zmm2.d f<= 9.99999994e-09f))
                                    zmm3 = zx.o(0)
                                    zmm3[0] = zmm2.d
                                    zmm4 = _mm_rsqrt_ss(zmm3.d, zmm3[0])
                                    zmm3[0] = zmm3[0] * 0.5f
                                    zmm0.d = zmm4.d f* zmm4.d
                                    zmm3[0] = zmm3[0] f* zmm0.d
                                    zmm2.d = 0.5f - zmm3[0]
                                    zmm0.d = zmm4.d f* zmm2.d
                                    zmm4.d = zmm4.d f+ zmm0.d
                                    zmm1 = zmm4
                                    zmm1[0] = zmm1[0] f* zmm4.d
                                    zmm3[0] = zmm3[0] * zmm1[0]
                                    zmm5.d = 0.5f - zmm3[0]
                                    zmm0.d = zmm4.d f* zmm5.d
                                    zmm4.d = zmm4.d f+ zmm0.d
                                    int32_t var_4ec_10 = zmm4.d
                                    zmm8.d = zmm8.d f* zmm4.d
                                    zmm12[0] = zmm12[0] f* zmm4.d
                                    zmm6[0] = zmm6[0] f* zmm4.d
                                
                                zmm1 = var_4a8_1
                                zmm8.d = zmm8.d f* zmm1[0]
                                zmm11 = zmm9
                                int32_t rcx_15 = 0
                                zmm12[0] = zmm12[0] * zmm1[0]
                                zmm10 = zmm7
                                zmm6[0] = zmm6[0] * zmm1[0]
                                zmm9 = zmm15
                                int32_t var_448_2 = zmm8.d
                                var_398_1.q = zmm12.q
                                float var_438_2 = zmm6[0]
                                
                                if (k_5 s> 0)
                                    void* r10_3 = rdx + 0x30
                                    void* r9_3 = rdx + 0x10
                                    int32_t r11_4
                                    
                                    do
                                        int32_t var_470_3 = zmm10.d
                                        r11_4 = rcx_15 + 1
                                        int32_t var_46c_3 = zmm11.d
                                        zmm2.d = float.s(r11_4)
                                        float var_468_3 = zmm9[0]
                                        zmm2.d = zmm2.d f* var_3d8
                                        zmm1 = zmm2
                                        zmm1[0] = zmm1[0] f* zmm2.d
                                        zmm5.d = zmm2.d f* zmm1[0]
                                        zmm0.d = zmm1.d f* 3f
                                        zmm3 = zmm5
                                        zmm7.d = zmm5.d f+ zmm5.d
                                        zmm3[0] = zmm3[0] - zmm1[0]
                                        zmm1[0] = zmm1[0] + zmm1[0]
                                        zmm4.d = zmm0.d f- zmm7.d
                                        zmm7.d = zmm7.d f- zmm0.d
                                        zmm5.d = zmm5.d f- zmm1[0]
                                        zmm1 = zmm8
                                        zmm1[0] = zmm1[0] * zmm3[0]
                                        zmm7.d = zmm7.d f+ 1f
                                        zmm5.d = zmm5.d f+ zmm2.d
                                        zmm2.d = zmm7.d f* var_4e4_1
                                        zmm15.d = zmm7.d f* var_4b8_1.d
                                        zmm7.d = zmm7.d f* var_4e0_1
                                        zmm0.d = var_440_1.d f* zmm5.d
                                        zmm15.d = zmm15.d f+ zmm0.d
                                        zmm0.d = zmm13.d f* zmm4.d
                                        zmm15.d = zmm15.d f+ zmm1[0]
                                        zmm1 = zmm12
                                        zmm1[0] = zmm1[0] * zmm3[0]
                                        zmm12 = zmm10
                                        zmm15.d = zmm15.d f+ zmm0.d
                                        zmm0.d = var_4c4_1.d f* zmm5.d
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm12[0] = zmm12[0] f- zmm15.d
                                        zmm0.d = zmm14.d f* zmm4.d
                                        zmm2.d = zmm2.d f+ zmm1[0]
                                        zmm6[0] = zmm6[0] * zmm3[0]
                                        zmm3 = 0x322bcc77
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm0.d = var_4c0_1.d f* zmm5.d
                                        zmm7.d = zmm7.d f+ zmm0.d
                                        int32_t var_4ec_11 = zmm2.d
                                        zmm13.d = zmm11.d f- zmm2.d
                                        int32_t var_454_2 = zmm2.d
                                        zmm0.d = var_4f8_4.d f* zmm4.d
                                        zmm7.d = zmm7.d f+ zmm6[0]
                                        zmm2.d = zmm13.d f* zmm13.d
                                        zmm7.d = zmm7.d f+ zmm0.d
                                        zmm0.d = zmm12.d f* zmm12[0]
                                        zmm14.d = zmm9.d f- zmm7.d
                                        int32_t var_450_2 = zmm7.d
                                        zmm2.d = zmm2.d f+ zmm0.d
                                        zmm1 = zmm14
                                        zmm1[0] = zmm1[0] f* zmm14.d
                                        zmm2.d = zmm2.d f+ zmm1[0]
                                        
                                        if (not(zmm2.d f<= 9.99999994e-09f))
                                            zmm3 = zmm2
                                            zmm5 = _mm_rsqrt_ss(zmm2.d, zmm3[0])
                                            zmm3[0] = zmm3[0] * 0.5f
                                            zmm0.d = zmm5.d f* zmm5.d
                                            zmm3[0] = zmm3[0] f* zmm0.d
                                            zmm2.d = 0.5f - zmm3[0]
                                            zmm0.d = zmm5.d f* zmm2.d
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            zmm1 = zmm5
                                            zmm1[0] = zmm1[0] f* zmm5.d
                                            zmm3[0] = zmm3[0] * zmm1[0]
                                            zmm4.d = 0.5f - zmm3[0]
                                            zmm3 = 0x322bcc77
                                            zmm0.d = zmm5.d f* zmm4.d
                                            zmm5.d = zmm5.d f+ zmm0.d
                                            int32_t var_4ac_2 = zmm5.d
                                            zmm1 = zmm5
                                            zmm0.d = zmm5.d f* zmm12[0]
                                            zmm1[0] = zmm1[0] f* zmm13.d
                                            zmm5.d = zmm5.d f* zmm14.d
                                            zmm12 = zmm0
                                            zmm13 = zmm1
                                            zmm14 = zmm5
                                        
                                        if (*(arg1 + 0x120) != 0)
                                            zmm10 = var_4d4
                                            zmm11 = arg_8
                                            zmm5 = arg_18
                                        else
                                            zmm9[0] = zmm9[0] f- var_2d8:8.d
                                            zmm11.d = zmm11.d f- var_2d8:4.d
                                            zmm10.d = zmm10.d f- var_2d8.d
                                            zmm6 = zmm13
                                            zmm6[0] = zmm6[0] * zmm9[0]
                                            zmm0.d = zmm14.d f* zmm11.d
                                            zmm8.d = zmm14.d f* zmm10.d
                                            zmm6[0] = zmm6[0] f- zmm0.d
                                            zmm0.d = zmm12.d f* zmm9[0]
                                            zmm12[0] = zmm12[0] f* zmm11.d
                                            zmm8.d = zmm8.d f- zmm0.d
                                            zmm0.d = zmm13.d f* zmm10.d
                                            zmm12[0] = zmm12[0] f- zmm0.d
                                            zmm2.d = zmm8.d f* zmm8.d
                                            zmm0.d = zmm6.d f* zmm6[0]
                                            zmm12[0] = zmm12[0] * zmm12[0]
                                            zmm2.d = zmm2.d f+ zmm0.d
                                            zmm2.d = zmm2.d f+ zmm12[0]
                                            
                                            if (zmm2.d f<= zmm3[0])
                                                zmm0 = _mm_unpacklo_ps(var_2f8.d, var_2f8:4.d[0].q)
                                                uint64_t var_1b4_1 = zmm0.q
                                                zmm11 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                                                zmm10 = zmm0.d
                                                zmm5 = var_2f8:8.d.d
                                            else
                                                zmm3 = zx.o(0)
                                                zmm3[0] = zmm2.d
                                                zmm5 = _mm_rsqrt_ss(zmm3.d, zmm3[0])
                                                zmm3[0] = zmm3[0] * 0.5f
                                                zmm0.d = zmm5.d f* zmm5.d
                                                zmm3[0] = zmm3[0] f* zmm0.d
                                                zmm2.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm5.d f* zmm2.d
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                zmm1 = zmm5
                                                zmm1[0] = zmm1[0] f* zmm5.d
                                                zmm3[0] = zmm3[0] * zmm1[0]
                                                zmm4.d = 0.5f - zmm3[0]
                                                zmm0.d = zmm5.d f* zmm4.d
                                                zmm5.d = zmm5.d f+ zmm0.d
                                                int32_t var_4ac_3 = zmm5.d
                                                zmm10.d = zmm5.d f* zmm6[0]
                                                zmm11.d = zmm5.d f* zmm8.d
                                                zmm5.d = zmm5.d f* zmm12[0]
                                        
                                        if (j_1 == 0)
                                            zmm8 = zmm10
                                            zmm9 = zmm11
                                            zmm6 = zmm5
                                        else
                                            zmm3 = 0x3fc90fdb
                                            zmm3[0] = 1.57079637f
                                                f/ _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14c))).d
                                            float temp0_129[0x4] = _mm_cvtepi32_ps(zx.o(j_1))
                                            zmm3[0] = zmm3[0] * temp0_129[0]
                                            zmm0.d = zmm3.d f* 0.159154937f
                                            
                                            if (zmm3[0] < 0f)
                                                zmm0.d = zmm0.d f- 0.5f
                                            else
                                                zmm0.d = zmm0.d f+ 0.5f
                                            
                                            zmm0.d = _mm_cvtepi32_ps(zx.o(int.d(zmm0.d))).d
                                                f* 6.28318548f
                                            zmm3[0] = zmm3[0] f- zmm0.d
                                            
                                            if (not(zmm3[0] <= 1.57079637f))
                                                zmm6 = 0xbf800000
                                                zmm0.d = 3.14159274f - zmm3[0]
                                                zmm3 = zmm0
                                            else if (zmm3[0] >= -1.57079637f)
                                                zmm6 = 0x3f800000
                                            else
                                                zmm6 = 0xbf800000
                                                zmm0.d = -3.14159274f - zmm3[0]
                                                zmm3 = zmm0
                                            
                                            zmm3[0] = zmm3[0] * zmm3[0]
                                            zmm0.d = zmm3.d f* 2.3889859e-08f
                                            zmm2.d = 2.75255616e-06f f- zmm0.d
                                            zmm0.d = zmm3.d f* 2.60516146e-07f
                                            zmm2.d = zmm2.d f* zmm3[0]
                                            zmm4.d = 2.47604949e-05f f- zmm0.d
                                            zmm2.d = zmm2.d f- 0.000198408743f
                                            zmm4.d = zmm4.d f* zmm3[0]
                                            zmm4.d = zmm4.d f- 0.00138883782f
                                            zmm2.d = zmm2.d f* zmm3[0]
                                            zmm2.d = zmm2.d f+ 0.00833333097f
                                            zmm4.d = zmm4.d f* zmm3[0]
                                            zmm4.d = zmm4.d f+ 0.0416666381f
                                            zmm2.d = zmm2.d f* zmm3[0]
                                            zmm2.d = zmm2.d f- 0.166666672f
                                            zmm4.d = zmm4.d f* zmm3[0]
                                            zmm2.d = zmm2.d f* zmm3[0]
                                            zmm4.d = zmm4.d f- 0.5f
                                            zmm2.d = zmm2.d f+ 1f
                                            zmm4.d = zmm4.d f* zmm3[0]
                                            zmm4.d = zmm4.d f+ 1f
                                            zmm2.d = zmm2.d f* zmm3[0]
                                            zmm3 = zmm5
                                            zmm13.d = zmm13.d f* zmm2.d
                                            zmm14.d = zmm14.d f* zmm2.d
                                            zmm4.d = zmm4.d f* zmm6[0]
                                            zmm6 = zmm10
                                            zmm12[0] = zmm12[0] f* zmm2.d
                                            zmm0.d = zmm11.d f* zmm14.d
                                            zmm6[0] = zmm6[0] f* zmm14.d
                                            zmm2.d = zmm11.d f* zmm12[0]
                                            zmm3[0] = zmm3[0] f* zmm13.d
                                            zmm3[0] = zmm3[0] f- zmm0.d
                                            zmm0.d = zmm5.d f* zmm12[0]
                                            zmm6[0] = zmm6[0] f- zmm0.d
                                            zmm0.d = zmm10.d f* zmm13.d
                                            zmm3[0] = zmm3[0] + zmm3[0]
                                            zmm2.d = zmm2.d f- zmm0.d
                                            zmm6[0] = zmm6[0] + zmm6[0]
                                            zmm3[0] = zmm3[0] f* zmm4.d
                                            zmm9 = zmm3
                                            zmm9[0] = zmm9[0] f* zmm14.d
                                            zmm2.d = zmm2.d f+ zmm2.d
                                            zmm3[0] = zmm3[0] f* zmm13.d
                                            zmm3[0] = zmm3[0] f+ zmm10.d
                                            zmm0.d = zmm6.d f* zmm14.d
                                            zmm8.d = zmm2.d f* zmm13.d
                                            zmm8.d = zmm8.d f- zmm0.d
                                            zmm0.d = zmm2.d f* zmm12[0]
                                            zmm2.d = zmm2.d f* zmm4.d
                                            zmm8.d = zmm8.d f+ zmm3[0]
                                            zmm6[0] = zmm6[0] * zmm12[0]
                                            zmm9[0] = zmm9[0] f- zmm0.d
                                            zmm6[0] = zmm6[0] f* zmm4.d
                                            zmm2.d = zmm2.d f+ zmm5.d
                                            zmm6[0] = zmm6[0] - zmm3[0]
                                            zmm6[0] = zmm6[0] f+ zmm11.d
                                            zmm6[0] = zmm6[0] f+ zmm2.d
                                            zmm9[0] = zmm9[0] + zmm6[0]
                                        
                                        if (*(arg1 + 0x180) == 0)
                                            zmm0 = var_4f0_2
                                        else
                                            zmm0 = *(var_388_1
                                                + (sx.q(k_5 * rbx_2[0xa].d + rcx_15) << 2))
                                            var_4f0_2 = zmm0.d
                                        
                                        zmm5 = var_460_1
                                        zmm10 = zmm15
                                        zmm4 = var_4d0_2
                                        zmm11 = var_4ec_11
                                        zmm3 = zx.o(zmm15.d.q)
                                        zmm12 = zx.o(var_398_1.q)
                                        zmm13 = var_4dc_3
                                        zmm14 = var_4bc_3
                                        zmm8.d = zmm8.d f* zmm5.d
                                        zmm9[0] = zmm9[0] f* zmm5.d
                                        zmm8.d = zmm8.d f* zmm0.d
                                        zmm9[0] = zmm9[0] f* zmm0.d
                                        zmm1 = zmm8
                                        zmm6[0] = zmm6[0] f* zmm5.d
                                        zmm1[0] = zmm1[0] f+ zmm15.d
                                        zmm2.d = zmm9.d f+ zmm11.d
                                        zmm6[0] = zmm6[0] f* zmm0.d
                                        *rdx = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
                                        zmm0.d = zmm6.d f+ zmm7.d
                                        zmm1 = zmm15
                                        zmm1[0] = zmm1[0] f- zmm8.d
                                        zmm8 = var_448_2
                                        zmm2.d = zmm11.d f- zmm9[0]
                                        zmm9 = zmm7
                                        *(rdx + 8) = zmm0.d
                                        *r9_3 = zmm3.q
                                        *(r9_3 + 8) = var_450_2
                                        *(rdx + 0x1c) = 0
                                        *(rdx + 0x20) = zmm5.d
                                        *(rdx + 0x24) = zmm5.d
                                        *(rdx + 0x40) = zmm4.d
                                        *(rdx + 0x44) = 0
                                        *(rdx + 0x28) = *(rdi_2 + 0x2c)
                                        zmm0 = *(rdi_2 + 0x60)
                                        float temp0_132[0x4] = _mm_unpacklo_ps(zmm1, zmm2.q)
                                        *r10_3 = zmm0
                                        *(rdx + 0x50) = temp0_132.q
                                        zmm0.d = zmm7.d f- zmm6[0]
                                        zmm6 = var_438_2
                                        *(rdx + 0x58) = zmm0.d
                                        *(r9_3 + 0x50) = zmm3.q
                                        *(r9_3 + 0x58) = var_450_2
                                        r9_3 += 0xa0
                                        *(rdx + 0x6c) = 0
                                        rcx_15 = r11_4
                                        *(rdx + 0x70) = zmm5.d
                                        *(rdx + 0x74) = zmm5.d
                                        *(rdx + 0x90) = zmm4.d
                                        zmm4.d = zmm4.d f+ var_45c
                                        *(rdx + 0x94) = 0x3f800000
                                        *(rdx + 0x78) = *(rdi_2 + 0x2c)
                                        rdx += 0xa0
                                        var_4d0_2 = zmm4.d
                                        *(r10_3 + 0x50) = *(rdi_2 + 0x60)
                                        r10_3 += 0xa0
                                    while (r11_4 s< k_5)
                                    r11_2 = var_4c8_1
                                    r12_1 = var_428_1
                            
                            zmm15 = 0x3f000000
                            j_1 += 1
                            zmm12 = zx.o(0)
                            zmm10 = arg_18
                            zmm14 = arg_8
                            zmm3 = 0x322bcc77
                            zmm11 = var_4d4
                            zmm13 = var_4d8_1
                            r10_1 = var_380_1
                            r9_1 = var_388_1
                            i = i_1
                        while (j_1 s< *(arg1 + 0x14c))
                        
                        goto label_1421eac5b
                zmm1 = var_1a8.d
                zmm2 = 0x3f800000
        
        zmm3 = 0x322bcc77
        i += 1
        i_1 = i
    while (i s< *(arg1 + 0x3c))

return 0
