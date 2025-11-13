// 函数: sub_1409bd560
// 地址: 0x1409bd560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
uint128_t zmm6
uint128_t var_58 = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
uint64_t* result_4 = arg4
uint128_t zmm8
uint128_t var_78 = zmm8
uint64_t* rsi = arg3
uint128_t zmm9
uint128_t var_88 = zmm9
int32_t i_5 = arg2
uint128_t zmm13
uint128_t var_c8 = zmm13
uint128_t zmm14
uint128_t var_d8 = zmm14
uint128_t zmm15
uint128_t var_e8 = zmm15
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

int32_t rax = *(result_4 + 0xc)
result_4[1].d = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(result_4, 0)

int32_t rax_1 = *(arg5 + 0xc)
arg5[1].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405dadb0(arg5, 0)

int32_t rax_2 = *(arg6 + 0xc)
arg6[1].d = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405dadb0(arg6, 0)

int64_t var_200
int64_t* rax_3 = sub_1409c2bd0(*(arg1 + 0x28), &var_200, i_5)
int64_t rcx_5 = var_200
int32_t rbx = rax_3[1].d

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

rax_3.b = rbx s<= 1
bool var_2e6 = rbx s> 1
uint64_t r14
r14.b = 0
char var_2e5 = rax_3.b
char var_2e7 = 0
char var_2e4 = rax_3.b
int32_t* var_290
sub_14090aa40(*(arg1 + 0x28) + 0x150, &var_290, data_143f35cc8)
uint64_t rax_4 = zx.q(data_14401b1a0)
int32_t* r13 = var_290
uint32_t zmm12[0x4] = 0x322bcc77
uint32_t zmm10[0x4] = 0x3f000000
uint128_t zmm11 = 0xbf800000

while (true)
    zmm6 = 0x3f800000
    
    while (true)
        int64_t rbx_1 = sx.q(rsi[1].d)
        int32_t rax_5 = (rbx_1 + 1).d
        rsi[1].d = rax_5
        
        if (rax_5 s> *(rsi + 0xc))
            sub_1405a4cf0(rsi)
        
        *(*rsi + (rbx_1 << 2)) = i_5
        
        if (r14.b != 0)
            int64_t rbx_2 = sx.q(result_4[1].d)
            int32_t rax_6 = (rbx_2 + 1).d
            result_4[1].d = rax_6
            
            if (rax_6 s> *(result_4 + 0xc))
                sub_1405a4cf0(result_4)
            
            *(*result_4 + (rbx_2 << 2)) = i_5
        
        void* rbx_3 = arg1
        void* r10_1 = *(rbx_3 + 0x28)
        int64_t rdx_4 = sx.q(i_5) * 3
        int64_t rcx_12 = *(r10_1 + 0x70)
        int64_t r9 = **(r13 + 0x18)
        int64_t r8_2 = sx.q(*(rcx_12 + (rdx_4 << 3))) * 3
        uint128_t zmm2 = zx.o(*(r9 + (r8_2 << 2)))
        int32_t rax_10 = *(r9 + (r8_2 << 2) + 8)
        uint32_t var_2a0_1 = zmm2.d
        uint128_t zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
        uint64_t var_1e8_1 = zmm2.q
        uint32_t var_268_1 = zmm0_1.d
        int64_t rcx_13 = sx.q(*(rcx_12 + (rdx_4 << 3) + 4)) * 3
        uint128_t zmm1 = zx.o(*(r9 + (rcx_13 << 2)))
        int32_t rax_12 = *(r9 + (rcx_13 << 2) + 8)
        zmm9.d = zmm1.d f- var_2a0_1
        zmm7.d = _mm_shuffle_ps(zmm1, zmm1, 0x55).d f- zmm0_1.d
        uint64_t var_1f0_1 = zmm1.q
        zmm8.d = rax_12.d f- rax_10
        int32_t var_288_1 = zmm9.d
        zmm2.d = zmm9.d f* zmm9.d
        zmm0_1.d = zmm7.d f* zmm7.d
        int32_t var_284_1 = zmm8.d
        zmm1.d = zmm8.d f* zmm8.d
        zmm2.d = zmm2.d f+ zmm0_1.d
        uint32_t var_1d0_1 = zmm7.d
        zmm2.d = zmm2.d f+ zmm1.d
        int32_t var_2d0_1
        int32_t var_2cc_1
        int32_t var_2c8_1
        bool result_2
        uint128_t zmm3
        uint128_t zmm4_1
        uint128_t zmm5_1
        
        if (not(zmm2.d f!= zmm6.d))
            var_2d0_1 = zmm9.d
            var_2cc_1 = zmm7.d
            var_2c8_1 = zmm8.d
        else if (zmm2.d f>= zmm12[0])
            zmm5_1.d = zmm10.d
            zmm3.d = zmm2.d
            zmm4_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
            zmm3.d = zmm3.d f* zmm5_1.d
            zmm0_1.d = zmm4_1.d f* zmm4_1.d
            zmm2.d = zmm3.d f* zmm0_1.d
            zmm1.d = zmm5_1.d f- zmm2.d
            zmm0_1.d = zmm4_1.d f* zmm1.d
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            zmm0_1.d = zmm4_1.d f* zmm4_1.d
            zmm3.d = zmm3.d f* zmm0_1.d
            zmm5_1.d = zmm5_1.d f- zmm3.d
            zmm0_1.d = zmm4_1.d f* zmm5_1.d
            zmm4_1.d = zmm4_1.d f+ zmm0_1.d
            result_2 = zmm4_1.b
            zmm2.d = zmm4_1.d f* zmm8.d
            zmm1.d = zmm4_1.d f* zmm7.d
            zmm0_1.d = zmm4_1.d f* zmm9.d
            var_2c8_1 = zmm2.d
            var_2cc_1 = zmm1.d
            var_2d0_1 = zmm0_1.d
        else
            var_2d0_1 = data_143dbb1f8.d
            var_2cc_1 = data_143dbb1fc.d
            var_2c8_1 = data_143dbb200.d
        
        int64_t rdx_5 = sx.q(arg5[1].d)
        int32_t var_2c0_1
        int32_t i_1
        
        if (rdx_5.d s<= 0)
            i_1 = data_143a1c6bc
            var_2c0_1 = i_1
        else
            arg5[1].d = (rdx_5 - 1).d
            r10_1 = *(rbx_3 + 0x28)
            i_1 = data_143a1c6bc
            var_2c0_1 = *(*arg5 + (rdx_5 << 2) - 4)
        
        int32_t i = data_143a1c6c8
        r14.b = 0
        result_4.b = 0
        zmm6 = zmm11
        bool var_2e8_1 = false
        uint32_t var_2d8_1 = zmm6.d
        result_2 = false
        int64_t var_108
        int64_t* rax_15 = sub_1409c2bd0(r10_1, &var_108, i_5)
        int64_t rcx_15 = var_108
        uint64_t result = zx.q(rax_15[1].d)
        int32_t result_1 = result.d
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
            result = zx.q(result_1)
        
        int32_t var_2c4_1 = 0
        
        if (result.d s> 0)
            void* var_280_1 = nullptr
            int32_t r14_1 = 0
            
            do
                sub_1409c2bd0(*(rbx_3 + 0x28), &var_200, i_5)
                int64_t rcx_17 = var_200
                int32_t var_1f8
                int32_t* rax_17
                
                if (r14_1 s< 0 || r14_1 s>= var_1f8)
                    rax_17 = &data_143a1c6c8
                else
                    rax_17 = var_280_1 + rcx_17
                
                int32_t i_4 = *rax_17
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                int64_t* rcx_18 = arg6
                result = sx.q(rcx_18[1].d)
                
                if (result.d == 0 || i_4 != *(*rcx_18 + (result << 2) - 4))
                    TEB* gsbase
                    
                    if (data_143cee310
                            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rax_4 << 3))))
                        _Init_thread_header(&data_143cee310)
                        
                        if (data_143cee310 == 0xffffffff)
                            atexit(sub_142cb7fc0)
                            _Init_thread_footer(&data_143cee310)
                    
                    int32_t rax_21 = data_143cee30c
                    data_143cee308 = 0
                    
                    if (rax_21 s< 0 && rax_21 != 0)
                        sub_1405dadb0(&data_143cee300, 0)
                    
                    sub_1409c3b80(rbx_3, i_4, &data_143cee300)
                    int32_t* rbx_4 = data_143cee300
                    result = sx.q(data_143cee308)
                    var_290 = rbx_4
                    void* rcx_21 = &rbx_4[result]
                    void* var_2a8_1 = rcx_21
                    
                    while (rbx_4 != rcx_21)
                        int64_t i_3 = sx.q(*rbx_4)
                        
                        if (i_3.d != i_5)
                            result = zx.q(var_2c0_1)
                            
                            if (result.d == data_143a1c6bc || i_3.d == result.d)
                                int64_t rdx_10 = i_3 * 3
                                void* rcx_22 = *(arg1 + 0x28)
                                int64_t r8_6 = *(rcx_22 + 0x70)
                                int32_t rax_23 = *(r8_6 + (rdx_10 << 3) + 4)
                                int64_t r12 = sx.q(*(r8_6 + (rdx_10 << 3)))
                                int64_t var_f8
                                int64_t* rax_24 = sub_1409c2bd0(rcx_22, &var_f8, i_3.d)
                                int64_t rcx_23 = var_f8
                                int32_t rax_25 = rax_24[1].d
                                
                                if (rcx_23 != 0)
                                    sub_140a74f90(rcx_23)
                                
                                zmm15 = data_143dbb200
                                int64_t rcx_24 = r12 * 3
                                zmm11 = data_143dbb1fc
                                bool result_5 = rax_25 == 1
                                zmm3 = data_143dbb1f8
                                int64_t r8_8 = **(r13 + 0x18)
                                zmm14 = zx.o(*(r8_8 + (rcx_24 << 2)))
                                int32_t r12_1 = *(r8_8 + (rcx_24 << 2) + 8)
                                int64_t rcx_25 = sx.q(rax_23) * 3
                                zmm13 = zx.o(*(r8_8 + (rcx_25 << 2)))
                                result = zx.q(*(r8_8 + (rcx_25 << 2) + 8))
                                zmm8.d = zmm13.d f- zmm14.d
                                uint64_t var_278_1 = zmm14.q
                                zmm7.d = _mm_shuffle_ps(zmm13, zmm13, 0x55).d f- var_278_1:4.d
                                zmm9.d = result.d.d f- r12_1
                                uint32_t var_1d8_1 = zmm14.d
                                zmm2.d = zmm7.d f* zmm7.d
                                zmm0_1.d = zmm8.d f* zmm8.d
                                zmm1.d = zmm9.d f* zmm9.d
                                zmm2.d = zmm2.d f+ zmm0_1.d
                                zmm2.d = zmm2.d f+ zmm1.d
                                
                                if (not(zmm2.d f!= 1f))
                                    zmm0_1 = zmm8
                                    zmm1 = zmm7
                                    zmm2 = zmm9
                                else if (zmm2.d f>= zmm12[0])
                                    zmm5_1.d = zmm10.d
                                    zmm3.d = zmm2.d
                                    zmm4_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                                    zmm3.d = zmm3.d f* zmm5_1.d
                                    zmm0_1.d = zmm4_1.d f* zmm4_1.d
                                    zmm1.d = zmm3.d f* zmm0_1.d
                                    zmm2.d = zmm5_1.d f- zmm1.d
                                    zmm0_1.d = zmm4_1.d f* zmm2.d
                                    zmm4_1.d = zmm4_1.d f+ zmm0_1.d
                                    zmm1.d = zmm4_1.d f* zmm4_1.d
                                    zmm3.d = zmm3.d f* zmm1.d
                                    zmm5_1.d = zmm5_1.d f- zmm3.d
                                    zmm3 = data_143dbb1f8
                                    zmm0_1.d = zmm4_1.d f* zmm5_1.d
                                    zmm4_1.d = zmm4_1.d f+ zmm0_1.d
                                    int32_t var_2dc_2 = zmm4_1.d
                                    zmm0_1.d = zmm4_1.d f* zmm8.d
                                    zmm1.d = zmm4_1.d f* zmm7.d
                                    zmm2.d = zmm4_1.d f* zmm9.d
                                else
                                    zmm0_1 = zmm3
                                    zmm1 = zmm11
                                    zmm2 = zmm15
                                
                                zmm10 = var_2d0_1
                                zmm10[0] = zmm10[0] f* zmm0_1.d
                                zmm0_1.d = var_2cc_1.d f* zmm1.d
                                zmm1.d = var_2c8_1.d f* zmm2.d
                                zmm10[0] = zmm10[0] f+ zmm0_1.d
                                zmm10[0] = zmm10[0] f+ zmm1.d
                                zmm12 = __andps_xmmxud_memxud(zmm10, data_142d3f770)
                                zmm0_1.d = zmm12.d f- zmm6.d
                                
                                if (__andps_xmmxud_memxud(zmm0_1, data_142d3f770).d
                                        f> 0.0500000007f)
                                    if (zmm12[0] f<= zmm6.d)
                                        result_4 = zx.q(result_2)
                                    else
                                        zmm10[0] f- 0f
                                        result_2 = result_5
                                        i_1 = i_3.d
                                        i = i_4
                                        result_4 = zx.q(result_5)
                                        zmm6 = zmm12
                                        var_2d8_1 = zmm6.d
                                        var_2e8_1 = zmm10[0] f< 0f
                                    
                                    rcx_21 = var_2a8_1
                                else
                                    int64_t rcx_26 = sx.q(arg_18[1].d)
                                    int64_t r9_2 = *(*(arg1 + 0x28) + 0x70)
                                    
                                    if (rcx_26.d s<= 1)
                                        zmm15 = zx.o(var_1e8_1)
                                        uint64_t var_168 = var_1f0_1
                                        uint64_t var_158 = zmm15.q
                                        int64_t rdx_15 = sx.q(i_1) * 3
                                        int64_t rcx_32 = sx.q(*(r9_2 + (rdx_15 << 3) + 4)) * 3
                                        int32_t var_180_1 = *(r8_8 + (rcx_32 << 2) + 8)
                                        int64_t rax_43 = sx.q(*(r9_2 + (rdx_15 << 3)))
                                        uint64_t var_188 = *(r8_8 + (rcx_32 << 2))
                                        int64_t rcx_33 = rax_43 * 3
                                        int32_t var_170_1 = *(r8_8 + (rcx_33 << 2) + 8)
                                        int32_t var_160_1 = rax_12
                                        int32_t var_150_1 = rax_10
                                        uint64_t var_178 = *(r8_8 + (rcx_33 << 2))
                                        float var_240
                                        float var_230
                                        int64_t zmm11_1
                                        int64_t zmm13_1
                                        zmm11_1, zmm13_1 = sub_140adfbe0(&var_158, &var_168, 
                                            &var_178, &var_188, &var_230, &var_240)
                                        int32_t var_140_1 = result.d
                                        int32_t var_120_1 = rax_12
                                        int32_t var_110_1 = rax_10
                                        int64_t var_148 = zmm13_1
                                        uint64_t var_138 = zmm14.q
                                        int32_t var_130_1 = r12_1
                                        int64_t var_128 = zmm11_1
                                        uint64_t var_118 = zmm15.q
                                        int32_t var_220
                                        int32_t var_210
                                        result, zmm6, zmm7, zmm8, zmm10, zmm12 = sub_140adfbe0(
                                            &var_118, &var_128, &var_138, &var_148, &var_210, 
                                            &var_220)
                                        zmm1.d = var_220.d f- var_210
                                        int32_t var_218
                                        int32_t var_208
                                        zmm0_1.d = var_218.d f- var_208
                                        int32_t var_21c
                                        int32_t var_20c
                                        zmm2.d = var_21c.d f- var_20c
                                        rcx_21 = var_2a8_1
                                        zmm1.d = zmm1.d f* zmm1.d
                                        zmm0_1.d = zmm0_1.d f* zmm0_1.d
                                        zmm2.d = zmm2.d f* zmm2.d
                                        zmm8.d = zmm8.d f* zmm8.d
                                        zmm2.d = zmm2.d f+ zmm1.d
                                        zmm7.d = zmm7.d f* zmm7.d
                                        zmm6.d = zmm6.d f* zmm6.d
                                        zmm8.d = zmm8.d f+ zmm7.d
                                        zmm2.d = zmm2.d f+ zmm0_1.d
                                        zmm8.d = zmm8.d f+ zmm6.d
                                        
                                        if (_mm_sqrt_ss(0, zmm2.d).d f>= _mm_sqrt_ss(0, zmm8.d).d)
                                            zmm6 = var_2d8_1
                                            result_4 = zx.q(result_2)
                                        else
                                            zmm10[0] f- 0f
                                            result_4 = zx.q(result_5)
                                            i_1 = i_3.d
                                            result_2 = result_4.b
                                            i = i_4
                                            zmm6 = zmm12
                                            var_2d8_1 = zmm6.d
                                            var_2e8_1 = zmm10[0] f< 0f
                                    else
                                        zmm0_1.d = var_284_1.d f* 0.5f
                                        int64_t rdx_13 = sx.q(*(*arg_18 + (rcx_26 << 2) - 8)) * 3
                                        zmm5_1.d = var_1d0_1.d f* 0.5f
                                        int32_t var_2d4_1 = zmm0_1.d
                                        zmm4_1.d = var_288_1.d f* 0.5f
                                        zmm13.d = var_268_1.d f+ zmm5_1.d
                                        int32_t var_2e0_3 = zmm5_1.d
                                        int64_t rcx_28 = sx.q(*(r9_2 + (rdx_13 << 3))) * 3
                                        zmm1 = zx.o(*(r8_8 + (rcx_28 << 2)))
                                        zmm6.d = var_2a0_1.d f+ zmm4_1.d
                                        int32_t rax_32 = *(r8_8 + (rcx_28 << 2) + 8)
                                        uint64_t var_260_1 = zmm1.q
                                        int32_t var_2dc_3 = zmm4_1.d
                                        int64_t rcx_29 = sx.q(*(r9_2 + (rdx_13 << 3) + 4)) * 3
                                        zmm0_1.d = (*(r8_8 + (rcx_29 << 2))).d f- zmm1.d
                                        zmm0_1.d = zmm0_1.d f* 0.5f
                                        zmm0_1.d = zmm0_1.d f+ zmm1.d
                                        zmm1.d = (*(r8_8 + (rcx_29 << 2) + 4)).d f- var_260_1:4.d
                                        zmm6.d = zmm6.d f- zmm0_1.d
                                        zmm1.d = zmm1.d f* 0.5f
                                        zmm14.d = rax_10.d f+ var_2d4_1
                                        zmm1.d = zmm1.d f+ var_260_1:4.d
                                        zmm0_1.d = zmm6.d f* zmm6.d
                                        zmm13.d = zmm13.d f- zmm1.d
                                        zmm1.d = (*(r8_8 + (rcx_29 << 2) + 8)).d f- rax_32
                                        zmm1.d = zmm1.d f* 0.5f
                                        zmm2.d = zmm13.d f* zmm13.d
                                        zmm1.d = zmm1.d f+ rax_32
                                        zmm2.d = zmm2.d f+ zmm0_1.d
                                        zmm14.d = zmm14.d f- zmm1.d
                                        zmm1.d = zmm14.d f* zmm14.d
                                        zmm2.d = zmm2.d f+ zmm1.d
                                        
                                        if (not(zmm2.d f== 1f))
                                            if (zmm2.d f>= 9.99999994e-09f)
                                                zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                                zmm3.d = zmm2.d f* 0.5f
                                                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                                zmm1.d = zmm3.d f* zmm0_1.d
                                                zmm2.d = 0.5f f- zmm1.d
                                                zmm0_1.d = zmm5_1.d f* zmm2.d
                                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                                zmm1.d = zmm5_1.d f* zmm5_1.d
                                                zmm3.d = zmm3.d f* zmm1.d
                                                zmm4_1.d = 0.5f f- zmm3.d
                                                zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                                zmm4_1 = var_2dc_3
                                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                                zmm0_1 = zmm5_1
                                                zmm1 = zmm5_1
                                                zmm5_1.d = zmm5_1.d f* zmm14.d
                                                zmm0_1.d = zmm0_1.d f* zmm6.d
                                                zmm1.d = zmm1.d f* zmm13.d
                                                zmm14 = zmm5_1
                                                zmm5_1 = var_2e0_3
                                                zmm6 = zmm0_1
                                                zmm13 = zmm1
                                            else
                                                zmm6 = zmm3
                                                zmm13 = zmm11
                                                zmm14 = zmm15
                                        
                                        zmm0_1.d = var_2d4_1.d f+ rax_10
                                        zmm4_1.d = zmm4_1.d f+ var_2a0_1
                                        zmm5_1.d = zmm5_1.d f+ var_268_1
                                        zmm8.d = zmm8.d f* 0.5f
                                        zmm7.d = zmm7.d f* 0.5f
                                        zmm8.d = zmm8.d f+ var_1d8_1
                                        zmm9.d = zmm9.d f* 0.5f
                                        zmm7.d = zmm7.d f+ var_278_1:4.d
                                        int32_t var_2d4_2 = zmm0_1.d
                                        zmm9.d = zmm9.d f+ r12_1
                                        zmm8.d = zmm8.d f- zmm4_1.d
                                        int32_t var_2dc_4 = zmm4_1.d
                                        int32_t var_2e0_4 = zmm5_1.d
                                        zmm7.d = zmm7.d f- zmm5_1.d
                                        zmm9.d = zmm9.d f- zmm0_1.d
                                        zmm2.d = zmm8.d f* zmm8.d
                                        zmm0_1.d = zmm7.d f* zmm7.d
                                        zmm1.d = zmm9.d f* zmm9.d
                                        zmm2.d = zmm2.d f+ zmm0_1.d
                                        zmm2.d = zmm2.d f+ zmm1.d
                                        
                                        if (zmm2.d f== 1f)
                                            zmm3 = data_143dbb1f8
                                        else if (zmm2.d f>= 9.99999994e-09f)
                                            zmm3.d = zmm2.d
                                            zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                                            zmm3.d = zmm3.d f* 0.5f
                                            zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                            zmm1.d = zmm3.d f* zmm0_1.d
                                            zmm2.d = 0.5f f- zmm1.d
                                            zmm0_1.d = zmm5_1.d f* zmm2.d
                                            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                            zmm1.d = zmm5_1.d f* zmm5_1.d
                                            zmm3.d = zmm3.d f* zmm1.d
                                            zmm4_1.d = 0.5f f- zmm3.d
                                            zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                            zmm4_1 = var_2dc_4
                                            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                            zmm0_1 = zmm5_1
                                            zmm1 = zmm5_1
                                            zmm5_1.d = zmm5_1.d f* zmm9.d
                                            zmm0_1.d = zmm0_1.d f* zmm8.d
                                            zmm1.d = zmm1.d f* zmm7.d
                                            zmm9 = zmm5_1
                                            zmm5_1 = var_2e0_4
                                            zmm8 = zmm0_1
                                            zmm7 = zmm1
                                            zmm3 = data_143dbb1f8
                                        else
                                            zmm3 = data_143dbb1f8
                                            zmm7 = zmm11
                                            zmm8 = zmm3
                                            zmm9 = zmm15
                                        
                                        zmm0_1.d = zmm13.d f* zmm7.d
                                        zmm1.d = zmm14.d f* zmm9.d
                                        int64_t rdx_14 = sx.q(i_1) * 3
                                        zmm11.d = zmm6.d f* zmm8.d
                                        zmm11.d = zmm11.d f+ zmm0_1.d
                                        int64_t rcx_30 = sx.q(*(r9_2 + (rdx_14 << 3))) * 3
                                        zmm7 = zx.o(*(r8_8 + (rcx_30 << 2)))
                                        zmm9 = *(r8_8 + (rcx_30 << 2) + 8)
                                        zmm11.d = zmm11.d f+ zmm1.d
                                        zmm8 = zmm7.q:4.d
                                        int64_t rcx_31 = sx.q(*(r9_2 + (rdx_14 << 3) + 4)) * 3
                                        zmm2.d = (*(r8_8 + (rcx_31 << 2))).d f- zmm7.d
                                        zmm1.d = (*(r8_8 + (rcx_31 << 2) + 4)).d f- zmm8.d
                                        zmm0_1.d = (*(r8_8 + (rcx_31 << 2) + 8)).d f- zmm9.d
                                        zmm2.d = zmm2.d f* 0.5f
                                        zmm1.d = zmm1.d f* 0.5f
                                        zmm0_1.d = zmm0_1.d f* 0.5f
                                        zmm7.d = zmm7.d f+ zmm2.d
                                        zmm8.d = zmm8.d f+ zmm1.d
                                        zmm9.d = zmm9.d f+ zmm0_1.d
                                        zmm7.d = zmm7.d f- zmm4_1.d
                                        zmm8.d = zmm8.d f- zmm5_1.d
                                        zmm9.d = zmm9.d f- var_2d4_2
                                        zmm0_1.d = zmm7.d f* zmm7.d
                                        zmm2.d = zmm8.d f* zmm8.d
                                        zmm1.d = zmm9.d f* zmm9.d
                                        zmm2.d = zmm2.d f+ zmm0_1.d
                                        zmm2.d = zmm2.d f+ zmm1.d
                                        
                                        if (not(zmm2.d f== 1f))
                                            if (zmm2.d f>= 9.99999994e-09f)
                                                zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                                zmm3.d = zmm2.d f* 0.5f
                                                zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                                zmm1.d = zmm3.d f* zmm0_1.d
                                                zmm2.d = 0.5f f- zmm1.d
                                                zmm0_1.d = zmm5_1.d f* zmm2.d
                                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                                zmm1.d = zmm5_1.d f* zmm5_1.d
                                                zmm3.d = zmm3.d f* zmm1.d
                                                zmm4_1.d = 0.5f f- zmm3.d
                                                zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                                zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                                zmm7.d = zmm7.d f* zmm5_1.d
                                                zmm8.d = zmm8.d f* zmm5_1.d
                                                zmm9.d = zmm9.d f* zmm5_1.d
                                            else
                                                zmm8 = data_143dbb1fc
                                                zmm7 = zmm3
                                                zmm9 = zmm15
                                        
                                        zmm6.d = zmm6.d f* zmm7.d
                                        zmm13.d = zmm13.d f* zmm8.d
                                        zmm14.d = zmm14.d f* zmm9.d
                                        zmm6.d = zmm6.d f+ zmm13.d
                                        zmm6.d = zmm6.d f+ zmm14.d
                                        zmm11.d f- zmm6.d
                                        bool cond:13_1 = zmm11.d f<= zmm6.d
                                        bool cond:14_1 = zmm11.d f<= zmm6.d
                                        bool cond:15_1 = zmm11.d f<= zmm6.d
                                        
                                        if (not(zmm11.d f<= zmm6.d))
                                            zmm10[0] f- 0f
                                            var_2d8_1 = zmm12[0]
                                            var_2e8_1 = zmm10[0] f< 0f
                                            zmm11.d f- zmm6.d
                                            cond:13_1 = zmm11.d f<= zmm6.d
                                            cond:14_1 = zmm11.d f<= zmm6.d
                                            cond:15_1 = zmm11.d f<= zmm6.d
                                        
                                        zmm6 = var_2d8_1
                                        int32_t i_2 = i_4
                                        
                                        if (cond:13_1)
                                            i_2 = i
                                        
                                        bool result_3 = result_5
                                        i = i_2
                                        
                                        if (cond:14_1)
                                            i_3 = zx.q(i_1)
                                        
                                        result = zx.q(result_2)
                                        i_1 = i_3.d
                                        
                                        if (cond:15_1)
                                            result_3 = result.b
                                        
                                        result_4 = zx.q(result_3)
                                        result_2 = result_3
                                        rcx_21 = var_2a8_1
                                
                                zmm10 = 0x3f000000
                                zmm12 = 0x322bcc77
                        
                        rbx_4 = &var_290[1]
                        var_290 = rbx_4
                    
                    rbx_3 = arg1
                
                var_280_1 += 4
                r14_1 = var_2c4_1 + 1
                var_2c4_1 = r14_1
            while (r14_1 s< result_1)
            
            zmm11 = 0xbf800000
            r14 = zx.q(var_2e8_1)
        
        if (i_1 == data_143a1c6bc)
        label_1409be543:
            
            if (var_2e5 != 0 && var_2e4 != 0)
                return result
            
            int32_t rax_57 = *(arg_18 + 0xc)
            arg_18[1].d = 0
            
            if (rax_57 s< 0 && rax_57 != 0)
                sub_1405dadb0(arg_18, 0)
            
            int32_t rax_58 = *(arg4 + 0xc)
            arg4[1].d = 0
            
            if (rax_58 s< 0 && rax_58 != 0)
                sub_1405dadb0(arg4, 0)
            
            result = zx.q(*(arg6 + 0xc))
            arg6[1].d = 0
            
            if (result.d s>= 0)
                return result
            
            if (result.d == 0)
                return result
            
            return sub_1405dadb0(arg6, 0)
        
        uint64_t* r8_11 = arg6
        result = *r8_11
        int64_t rdx_18 = sx.q(r8_11[1].d)
        int64_t rcx_36 = result + (rdx_18 << 2)
        
        if (result != rcx_36)
            while (*result != i)
                result += 4
                
                if (result == rcx_36)
                    goto label_1409be3d9
            
            goto label_1409be543
        
    label_1409be3d9:
        int32_t rax_50 = (rdx_18 + 1).d
        r8_11[1].d = rax_50
        
        if (rax_50 s> *(r8_11 + 0xc))
            sub_1405a4cf0(r8_11)
            r8_11 = arg6
        
        result = *r8_11
        i_5 = i_1
        var_2e4 = result_4.b
        *(result + (rdx_18 << 2)) = i
        
        if (r14.b == 0)
            r8_11 = zx.q(var_2e7)
        else
            r8_11.b = var_2e7 == 0
            var_2e7 = r8_11.b
        
        rsi = arg_18
        uint64_t rcx_38 = *rsi
        
        if (*rcx_38 == i_1)
            return result
        
        int64_t rdx_19 = rcx_38 + (sx.q(rsi[1].d) << 2)
        
        if (rcx_38 != rdx_19)
            while (*rcx_38 != i_1)
                rcx_38 += 4
                
                if (rcx_38 == rdx_19)
                    goto label_1409be451
            
            int32_t rax_55 = *(rsi + 0xc)
            rsi[1].d = 0
            
            if (rax_55 s< 0 && rax_55 != 0)
                sub_1405dadb0(rsi, 0)
            
            int32_t rax_56 = *(arg4 + 0xc)
            arg4[1].d = 0
            
            if (rax_56 s< 0 && rax_56 != 0)
                sub_1405dadb0(arg4, 0)
            
            result = zx.q(*(arg6 + 0xc))
            arg6[1].d = 0
            int32_t temp9_1 = result.d
            
            if (temp9_1 s>= 0 || temp9_1 == 0)
                return result
            
            return sub_1405dadb0(arg6, 0)
        
    label_1409be451:
        zmm6 = 0x3f800000
        bool cond:5_1 = result_4.b == 0
        result_4 = arg4
        
        if (not(cond:5_1) && var_2e6 != 0)
            var_2e5 = 1
            r14 = zx.q(r8_11.b)
            var_2e6 = false
            sub_14086c240(arg5, rsi)
            int32_t rax_52 = *(rsi + 0xc)
            rsi[1].d = 0
            
            if (rax_52 s< 0 && rax_52 != 0)
                sub_1405dadb0(rsi, 0)
            
            result_4 = arg4
            int32_t rax_53 = *(result_4 + 0xc)
            result_4[1].d = 0
            
            if (rax_53 s< 0 && rax_53 != 0)
                sub_1405dadb0(result_4, 0)
            
            int32_t rax_54 = *(arg6 + 0xc)
            arg6[1].d = 0
            zmm6 = 0x3f800000
            
            if (rax_54 s< 0)
                if (rax_54 != 0)
                    break
    
    sub_1405dadb0(arg6, 0)
