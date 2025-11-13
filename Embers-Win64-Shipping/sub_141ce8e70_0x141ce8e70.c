// 函数: sub_141ce8e70
// 地址: 0x141ce8e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_498
int64_t rax_1 = __security_cookie ^ &var_498
void* var_250
void* r12 = *sub_14090a980(arg1[3] + 0x1a8, &var_250, data_143f360f0)
void* var_358 = r12
void* var_380
sub_14090aa40(arg1[3] + 0x1a8, &var_380, data_143f360f8)
void* var_388
sub_14090aa40(arg1[3] + 0x1a8, &var_388, data_143f36100)
void* var_378
sub_14099aef0(arg1[3] + 0x1a8, &var_378, data_143f36108)
void* var_248
void* rax_4 = *sub_14090aa40(arg1[3] + 0x2b0, &var_248, data_143f36130)
void* var_268
void* rax_6 = *sub_14090aa40(arg1[3] + 0x2b0, &var_268, data_143f36138)
void* var_260
void* rax_8 = *sub_14090aa40(arg1[3] + 0x2b0, &var_260, data_143f36140)
void* var_258
void* rsi = *sub_14099b130(arg1[3] + 0x200, &var_258, data_143f36118)
int64_t var_188
__builtin_memset(&var_188, 0, 0x2c)
int32_t var_15c = 0x80
int32_t var_158 = 0xffffffff
int32_t var_154 = 0
int64_t var_148 = 0
int32_t var_140 = 0
int64_t var_138
__builtin_memset(&var_138, 0, 0x2c)
int32_t var_10c = 0x80
int32_t var_108 = 0xffffffff
int32_t var_104 = 0
int64_t var_f8 = 0
int32_t var_f0 = 0
int32_t* var_208 = nullptr
int32_t var_200 = 0
void* r14 = nullptr
int32_t var_1dc = 0x80
int64_t var_1f8
__builtin_memset(&var_1f8, 0, 0x1c)
int32_t var_1d8 = 0xffffffff
int32_t var_1d4 = 0
void* var_1c8 = nullptr
int32_t var_1c0 = 0
void* var_3f8 = nullptr
int32_t i_6 = 0
int32_t var_3ec = 0
int64_t var_440 = 0
int64_t var_438 = 0
int32_t* var_3d8
__builtin_memset(&var_3d8, 0, 0x20)
sub_140ac0210(&var_208, 0x14)
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(0x12)
int32_t rcx_19 = 0x20 << 0x1a s>> 0x1f
uint64_t rflags_1
char temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(0x11)
char rdx_8

if (rcx_19 == 0)
    rdx_8 = 0x20
else
    rdx_8 = 0x1f - temp0_1

int32_t rdx_9 = 1 << ((not.d(rcx_19)).b & (0x20 - rdx_8))

if (var_1c0 == 0 || var_1c0 s< rdx_9)
    var_1c0 = rdx_9
    sub_140afdae0(&var_208)

int32_t rcx_23 = *arg1[1]
int32_t rdx_11 = rcx_23 * arg2
int32_t r8_8 = *(*arg1 + 8)
int64_t rdi_1 = sx.q(rdx_11)
int64_t var_350 = rdi_1
int32_t rax_16 = rcx_23 + rdx_11

if (rax_16 s<= r8_8)
    r8_8 = rax_16

int64_t rax_17 = sx.q(r8_8)

if (rdi_1 s< rax_17)
    void* r15_1 = var_380
    void* r14_1 = var_388
    void* r13_1 = var_378
    uint128_t zmm6 = 0x38d1b717
    uint128_t zmm7 = 0x3f000000
    uint128_t zmm8 = 0x3f800000
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    uint128_t zmm10 = 0x322bcc77
    uint128_t zmm11 = 0x7fffffff
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    int32_t* var_3c8
    
    do
        sub_141a630b0(&var_208)
        int64_t* r10_1 = arg1
        char r9_1 = 1
        char var_478_1 = 1
        int64_t rdi_2 = sx.q(*(**r10_1 + (rdi_1 << 2)))
        int64_t rcx_26 = *r10_1[3]
        int64_t rdx_13 = rdi_2 << 5
        int32_t* r8_9 = *(rdx_13 + rcx_26 + 0x10)
        int32_t* var_408_1 = r8_9
        void* rax_21 = &r8_9[sx.q(*(rdx_13 + rcx_26 + 0x18))]
        
        if (r8_9 != rax_21)
            int32_t var_474
            void* var_468
            int32_t* var_458_1
            int32_t* var_450_1
            void var_1d0
            uint128_t zmm1_1
            double zmm2[0x2]
            double zmm3[0x2]
            
            do
                int64_t rbx_1 = sx.q(*r8_9)
                int64_t rcx_27 = *(r10_1[3] + 0x70)
                int64_t rdx_14 = rbx_1 * 3
                int32_t* r8_10 = *(rcx_27 + (rdx_14 << 3) + 8)
                var_450_1 = r8_10
                var_458_1 = nullptr
                uint64_t rcx_29 = sx.q(*(rcx_27 + (rdx_14 << 3) + 0x10)) << 2 u>> 2
                
                if (r8_10 u> &r8_10[sx.q(*(rcx_27 + (rdx_14 << 3) + 0x10))])
                    rcx_29 = 0
                
                if (rcx_29 != 0)
                    void* rdx_30
                    
                    do
                        int64_t rcx_31 = sx.q(*r8_10)
                        var_474 = rcx_31.d
                        int32_t* r11_1
                        
                        if (var_200 == var_1d4)
                        label_141ce933c:
                            int32_t* rax_30 = sub_141ce8720(&var_208, rcx_31.d, &var_474)
                            rcx_31 = zx.q(var_474)
                            r11_1 = rax_30
                            var_468 = rax_30
                        else
                            void* rax_28 = &var_1d0
                            
                            if (var_1c8 != 0)
                                rax_28 = var_1c8
                            
                            int32_t rax_29 = *(rax_28 + ((sx.q(var_1c0 - 1) & rcx_31) << 2))
                            
                            if (rax_29 == 0xffffffff)
                                goto label_141ce933c
                            
                            while (true)
                                int32_t* rdx_18 = var_208
                                
                                if (rdx_18[sx.q(rax_29) * 0xe] == rcx_31.d)
                                    break
                                
                                rax_29 = rdx_18[sx.q(rax_29) * 0xe + 0xc]
                                
                                if (rax_29 == 0xffffffff)
                                    goto label_141ce933c
                            
                            if (rax_29 == 0xffffffff)
                                goto label_141ce933c
                            
                            int32_t* r11_2 = var_208
                            
                            if (r11_2 == neg.q(sx.q(rax_29) * 0x38))
                                goto label_141ce933c
                            
                            r11_1 = &r11_2[sx.q(rax_29) * 0xe + 2]
                            var_468 = r11_1
                        
                        void* rdx_20 = *(r11_1 + 0x18)
                        void* r8_14 = &r11_1[4]
                        int64_t r10_2 = sx.q(*(r8_14 + 0x10))
                        void* r9_2 = r8_14
                        
                        if (rdx_20 != 0)
                            r9_2 = rdx_20
                        
                        void* rdx_21 = r9_2
                        void* rax_31 = r9_2 + (r10_2 << 2)
                        
                        if (r9_2 != rax_31)
                            while (*rdx_21 != rbx_1.d)
                                rdx_21 += 4
                                
                                if (rdx_21 == rax_31)
                                    goto label_141ce93af
                        
                        if (r9_2 == rax_31 || ((rdx_21 - r9_2) s>> 2).d == 0xffffffff)
                        label_141ce93af:
                            int32_t rax_32 = (r10_2 + 1).d
                            *(r8_14 + 0x10) = rax_32
                            
                            if (rax_32 s> *(r8_14 + 0x14))
                                sub_140bcee10(r8_14, r10_2.d)
                                r11_1 = var_468
                            
                            void* rax_33 = *(r8_14 + 8)
                            
                            if (rax_33 != 0)
                                r8_14 = rax_33
                            
                            *(r8_14 + (r10_2 << 2)) = rbx_1.d
                            rcx_31 = zx.q(var_474)
                        
                        if (*r11_1 != data_143a1c6c0)
                        label_141ce9a2a:
                            r9_1 = var_478_1
                        else
                            *r11_1 = rcx_31.d
                            void* r10_3 = arg1[3]
                            int32_t* rdx_27 = (sx.q(var_474) << 4) + *(r10_3 + 0xa8)
                            void* r9_3 = &rdx_27[3]
                            
                            if (rdx_27 == r9_3)
                            label_141ce9a2a_1:
                                r9_1 = var_478_1
                            else
                                int64_t rax_37
                                
                                while (true)
                                    rax_37 = sx.q(*rdx_27)
                                    
                                    if (*(*(r10_3 + 0x38) + rax_37 * 0x18) == rdi_2.d)
                                        break
                                    
                                    rdx_27 = &rdx_27[1]
                                    
                                    if (rdx_27 == r9_3)
                                        goto label_141ce9a2a_2
                                
                                r11_1[1] = rax_37.d
                                int64_t rcx_34 = **(r12 + 0x18)
                                zmm1_1 = *(rcx_34 + (rax_37 << 3) + 4)
                                int64_t rcx_35 = rax_37 * 3
                                r11_1[2] = (*(rcx_34 + (rax_37 << 3))).d
                                r11_1[3] = zmm1_1.d
                                int64_t rdx_28 = **(r15_1 + 0x18)
                                zmm14 = *(rdx_28 + (rcx_35 << 2))
                                int64_t* rax_39
                                
                                if (_mm_and_ps(zmm14, zmm11).d f> zmm6.d)
                                label_141ce94b3:
                                    int64_t r9_4 = **(r14_1 + 0x18)
                                    
                                    if (_mm_and_ps(*(r9_4 + (rcx_35 << 2)), zmm11).d f> zmm6.d)
                                        rax_39.b = 1
                                    else if (_mm_and_ps(*(r9_4 + (rcx_35 << 2) + 4), zmm11).d
                                            f> zmm6.d)
                                        rax_39.b = 1
                                    else if (_mm_and_ps(*(r9_4 + (rcx_35 << 2) + 8), zmm11).d
                                            f> zmm6.d)
                                        rax_39.b = 1
                                    else
                                        rax_39.b = 0
                                else
                                    if (_mm_and_ps(*(rdx_28 + (rcx_35 << 2) + 4), zmm11).d
                                            f> zmm6.d)
                                        goto label_141ce94b3
                                    
                                    if (not(_mm_and_ps(*(rdx_28 + (rcx_35 << 2) + 8), zmm11).d
                                            f<= zmm6.d))
                                        goto label_141ce94b3
                                    
                                    rax_39.b = 0
                                
                                r9_1 = var_478_1 & rax_39.b
                                var_478_1 = r9_1
                                
                                if (r9_1 != 0)
                                    zmm15 = data_143dbb200
                                    zmm3 = data_143dbb1fc
                                    uint128_t zmm4_1 = data_143dbb1f8
                                    int64_t r9_5 = **(r14_1 + 0x18)
                                    uint128_t zmm5_1 = 0x322bcc77
                                    zmm6 = *(r9_5 + (rcx_35 << 2) + 4)
                                    zmm10 = *(r9_5 + (rcx_35 << 2))
                                    zmm11 = *(r9_5 + (rcx_35 << 2) + 8)
                                    zmm2 = zmm10
                                    zmm2[0].d = zmm2[0].d f* zmm10.d
                                    uint128_t zmm0_1
                                    zmm0_1.d = zmm6.d f* zmm6.d
                                    zmm1_1.d = zmm11.d f* zmm11.d
                                    zmm2[0].d = zmm2[0].d f+ zmm0_1.d
                                    zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                    
                                    if (not(zmm2[0].d f!= zmm8.d))
                                        zmm0_1 = zx.o(*(r9_5 + (rcx_35 << 2)))
                                        zmm11 = *(r9_5 + (rcx_35 << 2) + 8)
                                        zmm10 = zmm0_1.d
                                        zmm9 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                                    else if (zmm2[0].d f>= 9.99999994e-09f)
                                        zmm4_1.d = zmm7.d
                                        zmm0_1 = zmm2
                                        zmm3 = zmm0_1
                                        zmm5_1 = _mm_rsqrt_ss(zmm0_1.d, zmm3[0].d)
                                        zmm2 = zmm4_1
                                        zmm3[0].d = zmm3[0].d f* zmm4_1.d
                                        zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                        zmm1_1.d = zmm3.d f* zmm0_1.d
                                        zmm2[0].d = zmm2[0].d f- zmm1_1.d
                                        zmm0_1.d = zmm5_1.d f* zmm2[0].d
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                        zmm3[0].d = zmm3[0].d f* zmm1_1.d
                                        zmm4_1.d = zmm4_1.d f- zmm3[0].d
                                        zmm3 = data_143dbb1fc
                                        zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                        zmm4_1 = data_143dbb1f8
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        zmm6.d = zmm6.d f* zmm5_1.d
                                        var_468.d = zmm5_1.d
                                        zmm10.d = zmm10.d f* zmm5_1.d
                                        zmm11.d = zmm11.d f* zmm5_1.d
                                        zmm9 = zmm6
                                        zmm5_1 = 0x322bcc77
                                    else
                                        zmm10 = zmm4_1
                                        zmm9 = zmm3
                                        zmm11 = zmm15
                                    
                                    zmm6 = *(rdx_28 + (rcx_35 << 2) + 4)
                                    zmm2 = zmm14
                                    zmm13 = *(rdx_28 + (rcx_35 << 2) + 8)
                                    zmm2[0].d = zmm2[0].d f* zmm14.d
                                    zmm0_1.d = zmm6.d f* zmm6.d
                                    zmm1_1.d = zmm13.d f* zmm13.d
                                    zmm2[0].d = zmm2[0].d f+ zmm0_1.d
                                    zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                    
                                    if (not(zmm2[0].d f!= zmm8.d))
                                        zmm0_1 = zx.o(*(rdx_28 + (rcx_35 << 2)))
                                        zmm13 = *(rdx_28 + (rcx_35 << 2) + 8)
                                        zmm14 = zmm0_1.d
                                        zmm12 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                                    else if (zmm2[0].d f>= zmm5_1.d)
                                        zmm4_1.d = zmm7.d
                                        zmm0_1 = zmm2
                                        zmm3 = zmm0_1
                                        zmm5_1 = _mm_rsqrt_ss(zmm0_1.d, zmm3[0].d)
                                        zmm2 = zmm4_1
                                        zmm3[0].d = zmm3[0].d f* zmm4_1.d
                                        zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                        zmm1_1.d = zmm3.d f* zmm0_1.d
                                        zmm2[0].d = zmm2[0].d f- zmm1_1.d
                                        zmm0_1.d = zmm5_1.d f* zmm2[0].d
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                        zmm3[0].d = zmm3[0].d f* zmm1_1.d
                                        zmm4_1.d = zmm4_1.d f- zmm3[0].d
                                        zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        zmm6.d = zmm6.d f* zmm5_1.d
                                        var_468.d = zmm5_1.d
                                        zmm14.d = zmm14.d f* zmm5_1.d
                                        zmm12 = zmm6
                                        zmm13.d = zmm13.d f* zmm5_1.d
                                    else
                                        zmm14 = zmm4_1
                                        zmm12 = zmm3
                                        zmm13 = zmm15
                                    
                                    zmm5_1 = 0x322bcc77
                                    zmm0_1.d = zmm13.d f* zmm9.d
                                    zmm6.d = zmm12.d f* zmm11.d
                                    int64_t rcx_36 = **(r13_1 + 0x18)
                                    zmm7.d = zmm13.d f* zmm10.d
                                    zmm6.d = zmm6.d f- zmm0_1.d
                                    zmm8.d = zmm14.d f* zmm9.d
                                    zmm0_1.d = zmm14.d f* zmm11.d
                                    zmm7.d = zmm7.d f- zmm0_1.d
                                    zmm0_1.d = zmm12.d f* zmm10.d
                                    zmm8.d = zmm8.d f- zmm0_1.d
                                    zmm2 = zmm7
                                    zmm2[0].d = zmm2[0].d f* zmm7.d
                                    zmm0_1.d = zmm6.d f* zmm6.d
                                    zmm1_1.d = zmm8.d f* zmm8.d
                                    zmm2[0].d = zmm2[0].d f+ zmm0_1.d
                                    zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                    
                                    if (zmm2[0].d f== 1f)
                                        zmm4_1 = data_143dbb1f8
                                        zmm3 = data_143dbb1fc
                                    else if (zmm2[0].d f>= 9.99999994e-09f)
                                        zmm0_1 = zmm2
                                        zmm3 = zmm0_1
                                        zmm5_1 = _mm_rsqrt_ss(zmm0_1.d, zmm3[0].d)
                                        zmm2 = 0x3f000000
                                        zmm3[0].d = zmm3[0].d f* 0.5f
                                        zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                        zmm1_1.d = zmm3.d f* zmm0_1.d
                                        zmm2[0].d = 0.5f f- zmm1_1.d
                                        zmm0_1.d = zmm5_1.d f* zmm2[0].d
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                        zmm3[0].d = zmm3[0].d f* zmm1_1.d
                                        zmm4_1.d = 0.5f f- zmm3[0].d
                                        zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        var_468.d = zmm5_1.d
                                        zmm6.d = zmm6.d f* zmm5_1.d
                                        zmm7.d = zmm7.d f* zmm5_1.d
                                        zmm8.d = zmm8.d f* zmm5_1.d
                                        zmm5_1 = 0x322bcc77
                                        zmm4_1 = data_143dbb1f8
                                        zmm3 = data_143dbb1fc
                                    else
                                        zmm4_1 = data_143dbb1f8
                                        zmm8 = zmm15
                                        zmm3 = data_143dbb1fc
                                        zmm6 = zmm4_1
                                        zmm7 = zmm3
                                    
                                    zmm0_1 = *(rcx_36 + (rax_37 << 2))
                                    zmm7.d = zmm7.d f* zmm0_1.d
                                    zmm8.d = zmm8.d f* zmm0_1.d
                                    zmm6.d = zmm6.d f* zmm0_1.d
                                    zmm2 = zmm7
                                    zmm2[0].d = zmm2[0].d f* zmm7.d
                                    zmm1_1.d = zmm8.d f* zmm8.d
                                    zmm0_1.d = zmm6.d f* zmm6.d
                                    zmm2[0].d = zmm2[0].d f+ zmm0_1.d
                                    zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                    
                                    if (not(zmm2[0].d f== 1f))
                                        if (zmm2[0].d f>= zmm5_1.d)
                                            zmm0_1 = zmm2
                                            zmm3 = zmm0_1
                                            zmm5_1 = _mm_rsqrt_ss(zmm0_1.d, zmm3[0].d)
                                            zmm2 = 0x3f000000
                                            zmm3[0].d = zmm3[0].d f* 0.5f
                                            zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                            zmm1_1.d = zmm3.d f* zmm0_1.d
                                            zmm2[0].d = 0.5f f- zmm1_1.d
                                            zmm0_1.d = zmm5_1.d f* zmm2[0].d
                                            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                            zmm1_1.d = zmm5_1.d f* zmm5_1.d
                                            zmm3[0].d = zmm3[0].d f* zmm1_1.d
                                            zmm4_1.d = 0.5f f- zmm3[0].d
                                            zmm0_1.d = zmm5_1.d f* zmm4_1.d
                                            zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                            var_468.d = zmm5_1.d
                                            zmm6.d = zmm6.d f* zmm5_1.d
                                            zmm7.d = zmm7.d f* zmm5_1.d
                                            zmm8.d = zmm8.d f* zmm5_1.d
                                        else
                                            zmm6 = zmm4_1
                                            zmm7 = zmm3
                                            zmm8 = zmm15
                                    
                                    if (_finite(_mm_cvtps_pd(zmm10.q).q) == 0)
                                    label_141ce9ab4:
                                        zmm11 = 0x7fffffff
                                    label_141ce9abd:
                                        zmm10 = 0x322bcc77
                                        r9_1 = 0
                                        zmm6 = 0x38d1b717
                                        zmm8 = 0x3f800000
                                        zmm7 = 0x3f000000
                                        var_478_1 = 0
                                    else
                                        zmm0_1.q = fconvert.d(zmm9.d)
                                        
                                        if (_finite(zmm0_1.q) == 0)
                                            goto label_141ce9ab4
                                        
                                        if (_finite(_mm_cvtps_pd(zmm11.q).q) == 0)
                                            goto label_141ce9ab4
                                        
                                        bool cond:15_1 =
                                            _mm_and_ps(zmm10, 0x7fffffff).d f> 9.99999994e-09f
                                        zmm10 = 0x322bcc77
                                        
                                        if (not(cond:15_1) && not(_mm_and_ps(zmm9, 0x7fffffff).d
                                                f> 9.99999994e-09f) && _mm_and_ps(zmm11, 0x7fffffff).d
                                                f<= 9.99999994e-09f)
                                            goto label_141ce9ab4
                                        
                                        zmm0_1.q = fconvert.d(zmm6.d)
                                        
                                        if (_finite(zmm0_1.q) == 0)
                                            goto label_141ce9ab4
                                        
                                        if (_finite(_mm_cvtps_pd(zmm7.q).q) == 0)
                                            goto label_141ce9ab4
                                        
                                        zmm11 = 0x7fffffff
                                        
                                        if (_finite(_mm_cvtps_pd(zmm8.q).q) == 0)
                                            goto label_141ce9abd
                                        
                                        if (not(_mm_and_ps(zmm6, 0x7fffffff).d f> 9.99999994e-09f)
                                                && not(_mm_and_ps(zmm7, 0x7fffffff).d
                                                f> 9.99999994e-09f) && _mm_and_ps(zmm8, 0x7fffffff).d
                                                f<= 9.99999994e-09f)
                                            goto label_141ce9abd
                                        
                                        if (_finite(_mm_cvtps_pd(zmm14.q).q) == 0)
                                            goto label_141ce9abd
                                        
                                        zmm0_1.q = fconvert.d(zmm12.d)
                                        
                                        if (_finite(zmm0_1.q) == 0)
                                            goto label_141ce9abd
                                        
                                        if (_finite(_mm_cvtps_pd(zmm13.q).q) == 0)
                                            goto label_141ce9abd
                                        
                                        if (not(_mm_and_ps(zmm14, 0x7fffffff).d f> 9.99999994e-09f))
                                            if (_mm_and_ps(zmm12, 0x7fffffff).d f> 9.99999994e-09f)
                                                goto label_141ce9a11
                                            
                                            if (_mm_and_ps(zmm13, 0x7fffffff).d f<= 9.99999994e-09f)
                                                goto label_141ce9abd
                                            
                                            goto label_141ce9a11
                                        
                                    label_141ce9a11:
                                        zmm7 = 0x3f000000
                                        zmm8 = 0x3f800000
                                        zmm6 = 0x38d1b717
                                    label_141ce9a2a_2:
                                        r9_1 = var_478_1
                        
                        r8_10 = &var_450_1[1]
                        rdx_30 = var_458_1 + 1
                        var_450_1 = r8_10
                        var_458_1 = rdx_30
                    while (rdx_30 != rcx_29)
                    r10_1 = arg1
                
                r8_9 = &var_408_1[1]
                var_408_1 = r8_9
            while (r8_9 != rax_21)
            
            void* rsi_2 = rsi
            
            if (r9_1 == 0)
                int32_t rax_53 = var_3ec
                int32_t i_4 = i_6
                
                if (rax_53 s< 0)
                    if (i_4 != 0)
                        void* rbx_5 = var_3f8 + 0x20
                        int32_t i
                        
                        do
                            int64_t rcx_38 = *rbx_5
                            
                            if (rcx_38 != 0)
                                sub_140a74f90(rcx_38)
                            
                            rbx_5 += 0x30
                            i = i_4
                            i_4 -= 1
                        while (i != 1)
                        rax_53 = var_3ec
                    
                    i_6 = 0
                    int32_t i_7 = 0
                    
                    if (rax_53 != 0)
                        sub_1405a5220(&var_3f8, 0)
                        i_6 = i_7
                else
                    if (i_4 != 0)
                        int64_t* rbx_3 = var_3f8 + 0x20
                        int32_t i_1
                        
                        do
                            int64_t rcx_37 = *rbx_3
                            
                            if (rcx_37 != 0)
                                sub_140a74f90(rcx_37)
                            
                            rbx_3 = &rbx_3[6]
                            i_1 = i_4
                            i_4 -= 1
                        while (i_1 != 1)
                    
                    i_6 = 0
                
                int64_t var_3c0_1
                int32_t rax_54 = var_3c0_1:4.d
                var_3c0_1.d = 0
                
                if (rax_54 s< 0 && rax_54 != 0)
                    sub_1405dadb0(&var_3c8, 0)
                
                int64_t* var_428_1 = &var_1f8
                int32_t rcx_41 = 0
                int32_t var_430 = 0
                int32_t r8_18 = 0
                int32_t var_42c_1 = 1
                int32_t var_420_1 = 0xffffffff
                int64_t var_41c_1 = 0
                int32_t var_1e0
                
                if (var_1e0 != 0)
                    int64_t* r9_6 = &var_1f8
                    int64_t* var_1e8
                    
                    if (var_1e8 != 0)
                        r9_6 = var_1e8
                    
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = sx.q(var_1e0 - 1)
                    int32_t rdx_33 = *r9_6
                    
                    if (rdx_33 != 0)
                    label_141ce9bda:
                        int32_t rax_62 = neg.d(rdx_33) & rdx_33
                        uint64_t rflags_2
                        int32_t temp0_29
                        temp0_29, rflags_2 = _bit_scan_reverse(rax_62)
                        int32_t var_42c_2 = rax_62
                        int32_t rax_63
                        
                        if (rax_62 == 0)
                            rax_63 = 0x20
                        else
                            rax_63 = 0x1f - temp0_29
                        
                        int32_t rax_64 = r8_18 - rax_63 + 0x1f
                        
                        if (rax_64 s> var_1e0)
                            rax_64 = var_1e0
                        
                        var_41c_1.d = rax_64
                    else
                        while (true)
                            int64_t rdx_34 = sx.q(rcx_41)
                            r8_18 += 0x20
                            rcx_41 += 1
                            var_41c_1:4.d = r8_18
                            var_430 = rcx_41
                            
                            if (rdx_34.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                                var_41c_1.d = var_1e0
                                break
                            
                            rdx_33 = *(r9_6 + (rdx_34 << 2) + 4)
                            var_420_1 = 0xffffffff
                            
                            if (rdx_33 != 0)
                                goto label_141ce9bda
                
                zmm2 = var_420_1.o
                uint64_t r14_2 = zx.q(var_3c0_1.d)
                var_41c_1.d = var_1e0
                uint128_t var_1b0_1 = var_430.o
                double var_1a0[0x2] = zmm2
                uint64_t rax_66 = (0xffffffff << (var_1e0.b & 0x1f)).q u>> 0x20
                zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
                uint64_t var_400_2 = rax_66
                uint128_t var_2f8 = (&var_208).o
                uint128_t var_2e8_1 = var_1b0_1
                int64_t var_2d8_1 = zmm2.q
                
                while (true)
                    int64_t rdx_36 = sx.q(var_2e8_1:0xc.d)
                    int64_t rcx_45 = var_2f8.q
                    
                    if (rdx_36.d != rax_66.d || var_2e8_1.q != &var_1f8 || rcx_45 != &var_208)
                        rax_66.b = 1
                    else
                        rax_66.b = 0
                    
                    if (rax_66.b == 0)
                        break
                    
                    double r9_7 = 0.0
                    int32_t* rdx_38 = rdx_36 * 0x38 + *rcx_45
                    void* rbx_7 = &rdx_38[6]
                    int32_t i_2 = *rdx_38
                    int32_t** var_1b8_1
                    var_1b8_1.d = i_2
                    var_1b0_1.d = rdx_38[2]
                    var_1b0_1:4.d = rdx_38[3]
                    var_1b0_1:8.q = *(rdx_38 + 0x10)
                    var_1a0[1] = 0
                    int64_t rdi_3 = sx.q(*(rbx_7 + 0x10))
                    void* rcx_48 = *(rbx_7 + 8)
                    int32_t var_190_1 = rdi_3.d
                    
                    if (rdi_3.d != 0)
                        sub_14149bdb0(&var_1a0, rdi_3.d, 0)
                        int128_t* rcx_50 = &var_1a0
                        
                        if (rcx_48 != 0)
                            rbx_7 = rcx_48
                        
                        int128_t* rax_68 = var_1a0[1]
                        
                        if (rax_68 != 0)
                            rcx_50 = rax_68
                        
                        memcpy(rcx_50, rbx_7, (rdi_3 << 2).d)
                        r9_7 = var_1a0[1]
                        i_2 = var_1b8_1.d
                    else
                        int32_t var_18c_1 = 2
                    
                    int32_t* rdx_41 = var_3c8
                    void* r8_22 = &rdx_41[sx.q(r14_2.d)]
                    
                    if (rdx_41 == r8_22)
                    label_141ce9d98:
                        int64_t i_8 = sx.q(i_6)
                        int32_t i_9 = (i_8 + 1).d
                        i_6 = i_9
                        
                        if (i_9 s> var_3ec)
                            sub_1405c4f50(&var_3f8)
                            i_6 = i_9
                        
                        void* r13_4 = i_8 * 0x30 + var_3f8
                        int32_t rdi_4 = 0
                        void* var_410_3 = r13_4
                        __builtin_memset(r13_4, 0, 0x30)
                        int32_t rax_70 = var_438:4.d
                        
                        if (rax_70 s< 0)
                            var_438.d = 0
                            
                            if (rax_70 != 0)
                                sub_1405dadb0(&var_440, 0)
                                rax_70 = var_438:4.d
                                rdi_4 = var_438.d
                        
                        int32_t rbx_9 = rdi_4 + 1
                        var_438.d = rbx_9
                        
                        if (rbx_9 s> rax_70)
                            sub_1405a4cf0(&var_440)
                            rbx_9 = var_438.d
                        
                        int64_t r9_8 = var_440
                        *(r9_8 + (sx.q(rdi_4) << 2)) = var_1b8_1.d
                        
                        if (rbx_9 s> 0)
                            while (true)
                                int32_t rdx_44 = *(r9_8 + (sx.q(rbx_9 - 1) << 2))
                                int32_t var_3a8 = rdx_44
                                
                                if (0 != 0)
                                    memmove(r9_8 + (sx.q(rbx_9 - 1) << 2), 
                                        r9_8 + (sx.q(rbx_9) << 2), 0 << 2)
                                    rdx_44 = var_3a8
                                
                                rbx_9 -= 1
                                int32_t* rax_75 = sub_141ce8b80(&var_208, rdx_44, &var_3a8)
                                sub_141ce8540(r13_4, rax_75)
                                sub_1408d92c0(&var_3c8, rax_75)
                                void* rcx_62 = *(rax_75 + 0x18)
                                void* r15_2 = &rax_75[4]
                                int32_t* r8_26 = rax_75
                                
                                if (rcx_62 != 0)
                                    r15_2 = rcx_62
                                
                                void* rax_76 = r15_2 + (sx.q(rax_75[8]) << 2)
                                
                                if (r15_2 == rax_76)
                                    r14_2 = zx.q(var_3c0_1.d)
                                else
                                    r14_2 = sx.q(var_3c0_1.d)
                                    void* r12_1 = rax_76
                                    int32_t* r13_5 = var_3c8
                                    
                                    do
                                        int64_t rdx_48 = sx.q(*r15_2)
                                        
                                        if (*(rdx_48 + **(rsi_2 + 0x18)) == 0)
                                            int64_t rdx_49 = rdx_48 * 3
                                            int64_t rcx_65 = *(arg1[3] + 0x70)
                                            int32_t* rdi_7 = *(rcx_65 + (rdx_49 << 3) + 8)
                                            int32_t* var_408_2 = rdi_7
                                            var_468 = nullptr
                                            uint64_t rdx_51 =
                                                sx.q(*(rcx_65 + (rdx_49 << 3) + 0x10)) << 2 u>> 2
                                            
                                            if (rdi_7 u>
                                                    &rdi_7[sx.q(*(rcx_65 + (rdx_49 << 3) + 0x10))])
                                                rdx_51 = 0
                                            
                                            var_450_1 = rdx_51
                                            
                                            if (rdx_51 != 0)
                                                int64_t rsi_3 = var_440
                                                void* rax_82 = nullptr
                                                int32_t r12_2 = var_438:4.d
                                                int32_t* rcx_66 = rdx_51
                                                
                                                do
                                                    int32_t rdx_52 = *rdi_7
                                                    var_474 = rdx_52
                                                    
                                                    if (rdx_52 != *r8_26)
                                                        void* rax_83 = sub_141ce8b80(&var_208, 
                                                            rdx_52, &var_474)
                                                        int32_t* rdx_53 = r13_5
                                                        void* r8_29 = &r13_5[r14_2]
                                                        
                                                        if (r13_5 == r8_29)
                                                        label_141ce9fae:
                                                            int64_t rdi_8 = sx.q(rbx_9)
                                                            rbx_9 = (rdi_8 + 1).d
                                                            var_438.d = rbx_9
                                                            
                                                            if (rbx_9 s> r12_2)
                                                                sub_1405a4cf0(&var_440)
                                                                rbx_9 = var_438.d
                                                                rsi_3 = var_440
                                                                r12_2 = var_438:4.d
                                                            
                                                            *(rsi_3 + (rdi_8 << 2)) = var_474
                                                            rdi_7 = var_408_2
                                                        else
                                                            while (*rdx_53 != *rax_83)
                                                                rdx_53 = &rdx_53[1]
                                                                
                                                                if (rdx_53 == r8_29)
                                                                    goto label_141ce9fae
                                                        
                                                        r8_26 = rax_75
                                                        rcx_66 = var_450_1
                                                        rax_82 = var_468
                                                    
                                                    rdi_7 = &rdi_7[1]
                                                    rax_82 += 1
                                                    var_408_2 = rdi_7
                                                    var_468 = rax_82
                                                while (rax_82 != rcx_66)
                                                
                                                rsi_2 = rsi
                                                r12_1 = rax_76
                                        
                                        r15_2 += 4
                                    while (r15_2 != r12_1)
                                    
                                    r13_4 = var_410_3
                                
                                if (rbx_9 s<= 0)
                                    break
                                
                                r9_8 = var_440
                        
                        double rcx_56 = var_1a0[1]
                        
                        if (rcx_56 != 0)
                            sub_140a74f90(rcx_56)
                    else
                        while (*rdx_41 != i_2)
                            rdx_41 = &rdx_41[1]
                            
                            if (rdx_41 == r8_22)
                                goto label_141ce9d98
                        
                        if (r9_7 != 0)
                            sub_140a74f90(r9_7)
                    
                    var_2e8_1:8.d &= not.d(var_2f8:0xc.d)
                    sub_14059bdd0(&var_2f8:8)
                    rax_66 = var_400_2
                
                void* rcx_71 = var_3f8
                void* rbx_12 = rcx_71
                r14_1 = var_388
                r15_1 = var_380
                r13_1 = var_378
                r12 = var_358
                void* rax_90 = sx.q(i_6) * 0x30 + rcx_71
                void* var_400_3 = rcx_71
                
                if (rcx_71 != rax_90)
                    do
                        sub_141a63040(&var_188)
                        sub_141a63040(&var_138)
                        int64_t var_3d0_1
                        int32_t rax_91 = var_3d0_1:4.d
                        var_474 = 0
                        int32_t rdi_9 = 0
                        
                        if (rax_91 s< 0)
                            var_3d0_1.d = 0
                            
                            if (rax_91 != 0)
                                sub_1405dadb0(&var_3d8, 0)
                                rdi_9 = var_3d0_1.d
                                var_474 = rdi_9
                        
                        void* rax_92 = *(rbx_12 + 0x20)
                        void* rsi_4 = rbx_12
                        zmm9 = data_143dbb1fc
                        zmm7 = data_143dbb200
                        zmm15 = data_143dbb1f8
                        
                        if (rax_92 != 0)
                            rsi_4 = rax_92
                        
                        int32_t var_3e8_1 = zmm15.d
                        var_458_1.d = zmm9.d
                        int32_t var_3e4_1 = zmm9.d
                        int64_t rcx_75 = sx.q(*(rbx_12 + 0x28)) << 2
                        var_450_1.d = zmm7.d
                        int32_t var_3e0_1 = zmm7.d
                        uint64_t rcx_76 = rcx_75 u>> 2
                        int64_t var_448_3 = 0
                        
                        if (rsi_4 u> rcx_75 + rsi_4)
                            rcx_76 = 0
                        
                        uint128_t zmm0_2
                        
                        if (rcx_76 != 0)
                            int32_t r12_3 = var_474
                            int64_t* rdi_10 = arg1
                            int64_t rax_130
                            
                            do
                                int64_t rdx_55 = sx.q(*rsi_4)
                                void* rax_95 = rdi_10[3]
                                var_474 = rdx_55.d
                                int64_t rbx_13 = sx.q(*(*(rax_95 + 0xa8) + rdx_55 * 0x10 + 0xc))
                                void* rax_96 = sub_141ce8b80(&var_208, rdx_55.d, &var_474)
                                int64_t rcx_79 = sx.q(var_474)
                                zmm6 = zmm8
                                
                                if (rdi_10[4].b != 0)
                                    int64_t* r10_6 = rdi_10[5]
                                    void* const rdx_59
                                    
                                    if (r10_6[1].d == *(r10_6 + 0x34))
                                    label_141cea21c:
                                        rdx_59 = nullptr
                                    else
                                        void* rdx_57 = r10_6[8]
                                        void* r9_9 = &r10_6[7]
                                        
                                        if (rdx_57 != 0)
                                            r9_9 = rdx_57
                                        
                                        int32_t rax_97 =
                                            *(r9_9 + (((sx.q(r10_6[9].d) - 1) & rcx_79) << 2))
                                        
                                        if (rax_97 == 0xffffffff)
                                        label_141cea21c_1:
                                            rdx_59 = nullptr
                                        else
                                            int64_t r9_10 = *r10_6
                                            
                                            while (true)
                                                int64_t r8_36 = sx.q(rax_97) * 5
                                                rdx_59 = r9_10 + (r8_36 << 3)
                                                
                                                if (*(r9_10 + (r8_36 << 3)) == rcx_79.d)
                                                    break
                                                
                                                rax_97 = *(rdx_59 + 0x20)
                                                
                                                if (rax_97 == 0xffffffff)
                                                    goto label_141cea21c_2
                                            
                                            if (rax_97 == 0xffffffff)
                                            label_141cea21c_2:
                                                rdx_59 = nullptr
                                    
                                    void* r9_11 = rdx_59 + 8
                                    int64_t r8_37 = 0
                                    
                                    while (true)
                                        if (*r9_11 == *(rax_96 + 4))
                                            zmm6.d =
                                                (*(rdx_59 + (r8_37 << 3) + 0xc)).d f* *(rdx_59 + 4)
                                            break
                                        
                                        r8_37 += 1
                                        r9_11 += 8
                                        
                                        if (r8_37 s>= 3)
                                            zmm6.d = 0f f* *(rdx_59 + 4)
                                            break
                                
                                int64_t r8_38 = rbx_13 * 3
                                int64_t rdx_60 = **(rax_4 + 0x18)
                                zmm9.d = zmm6.d f* *(rdx_60 + (r8_38 << 2))
                                zmm7.d = zmm6.d f* *(rdx_60 + (r8_38 << 2) + 4)
                                zmm8.d = zmm6.d f* *(rdx_60 + (r8_38 << 2) + 8)
                                int64_t rdx_61 = **(rax_6 + 0x18)
                                zmm10.d = zmm6.d f* *(rdx_61 + (r8_38 << 2))
                                zmm11.d = zmm6.d f* *(rdx_61 + (r8_38 << 2) + 4)
                                zmm12.d = zmm6.d f* *(rdx_61 + (r8_38 << 2) + 8)
                                int64_t rdx_62 = **(rax_8 + 0x18)
                                zmm13.d = zmm6.d f* *(rdx_62 + (r8_38 << 2))
                                zmm14.d = zmm6.d f* *(rdx_62 + (r8_38 << 2) + 4)
                                zmm6.d = zmm6.d f* *(rdx_62 + (r8_38 << 2) + 8)
                                void* rdi_11
                                
                                if (var_200 == var_1d4)
                                label_141cea342:
                                    rdi_11 = nullptr
                                else
                                    void* rdx_63 = &var_1d0
                                    
                                    if (var_1c8 != 0)
                                        rdx_63 = var_1c8
                                    
                                    int32_t rax_106 =
                                        *(rdx_63 + ((sx.q(var_1c0 - 1) & rcx_79) << 2))
                                    
                                    if (rax_106 == 0xffffffff)
                                    label_141cea342_1:
                                        rdi_11 = nullptr
                                    else
                                        int32_t* r9_12 = var_208
                                        int32_t* r8_41
                                        
                                        while (true)
                                            r8_41 = sx.q(rax_106) * 0x38
                                            
                                            if (*(r8_41 + r9_12) == rcx_79.d)
                                                break
                                            
                                            rax_106 = *(r8_41 + r9_12 + 0x30)
                                            
                                            if (rax_106 == 0xffffffff)
                                                goto label_141cea342_2
                                        
                                        rdi_11 = r8_41 + r9_12
                                        
                                        if (rax_106 == 0xffffffff)
                                        label_141cea342_2:
                                            rdi_11 = nullptr
                                
                                int64_t rbx_14 = sx.q(r12_3)
                                r12_3 = (rbx_14 + 1).d
                                var_3d0_1.d = r12_3
                                
                                if (r12_3 s> var_3d0_1:4.d)
                                    sub_1405a4cf0(&var_3d8)
                                    r12_3 = var_3d0_1.d
                                
                                int32_t* rdx_66 = var_3d8
                                bool cond:12_1 = _mm_and_ps(zmm9, 0x7fffffff).d f> 9.99999994e-09f
                                rdx_66[rbx_14] = *(rdi_11 + 0xc)
                                
                                if (cond:12_1)
                                label_141cea3a5:
                                    zmm0_2.q = fconvert.d(zmm9.d)
                                    
                                    if (_finite(zmm0_2.q) == 0)
                                        zmm7 = var_450_1.d
                                        zmm9 = var_458_1.d
                                    else
                                        zmm0_2.q = fconvert.d(zmm7.d)
                                        
                                        if (_finite(zmm0_2.q) == 0)
                                            zmm7 = var_450_1.d
                                            zmm9 = var_458_1.d
                                        else
                                            zmm0_2.q = fconvert.d(zmm8.d)
                                            
                                            if (_finite(zmm0_2.q) == 0)
                                                zmm7 = var_450_1.d
                                                zmm9 = var_458_1.d
                                            else
                                                zmm15.d = zmm15.d f+ zmm9.d
                                                zmm9.d = var_458_1.d.d f+ zmm7.d
                                                zmm7.d = var_450_1.d.d f+ zmm8.d
                                                var_458_1.d = zmm9.d
                                                var_450_1.d = zmm7.d
                                                var_3e0_1 = zmm7.d
                                                int32_t var_3e4_2 = zmm9.d
                                else
                                    if (_mm_and_ps(zmm7, 0x7fffffff).d f> 9.99999994e-09f)
                                        goto label_141cea3a5
                                    
                                    if (not(_mm_and_ps(zmm8, 0x7fffffff).d f<= 9.99999994e-09f))
                                        goto label_141cea3a5
                                    
                                    zmm7 = var_450_1.d
                                    zmm9 = var_458_1.d
                                
                                rdi_10 = arg1
                                
                                if (*rdi_10[2] != 0)
                                    zmm10 = 0x322bcc77
                                    zmm11 = 0x7fffffff
                                else
                                    void* rbx_15
                                    
                                    if (var_200 == var_1d4)
                                    label_141cea489:
                                        rbx_15 = nullptr
                                    else
                                        void* rdx_67 = &var_1d0
                                        int64_t rcx_81 = sx.q(var_474)
                                        
                                        if (var_1c8 != 0)
                                            rdx_67 = var_1c8
                                        
                                        int32_t rax_116 =
                                            *(rdx_67 + ((sx.q(var_1c0 - 1) & rcx_81) << 2))
                                        
                                        if (rax_116 == 0xffffffff)
                                        label_141cea489_1:
                                            rbx_15 = nullptr
                                        else
                                            int32_t* r9_13 = var_208
                                            int32_t* r8_44
                                            
                                            while (true)
                                                r8_44 = sx.q(rax_116) * 0x38
                                                
                                                if (*(r8_44 + r9_13) == rcx_81.d)
                                                    break
                                                
                                                rax_116 = *(r8_44 + r9_13 + 0x30)
                                                
                                                if (rax_116 == 0xffffffff)
                                                    goto label_141cea489_2
                                            
                                            if (rax_116 == 0xffffffff)
                                            label_141cea489_2:
                                                rbx_15 = nullptr
                                            else
                                                rbx_15 = r8_44 + r9_13
                                    
                                    void var_300
                                    int32_t* rax_117 = sub_141cedf20(&var_188, &var_300, 
                                        _mm_unpacklo_ps(*(rbx_15 + 0x10), (*(rbx_15 + 0x14)).q).q)
                                    uint32_t zmm1_2[0x4] = *(rbx_15 + 0x10)
                                    bool cond:17_1 =
                                        _mm_and_ps(zmm1_2, 0x7fffffff)[0] f> 9.99999994e-09f
                                    var_468.d = *rax_117
                                    uint32_t zmm2_1[0x4] = *(rbx_15 + 0x14)
                                    uint32_t var_3a0
                                    
                                    if (cond:17_1)
                                        var_3a0 = zmm1_2[0]
                                    else
                                        var_3a0 = 0
                                    
                                    if (_mm_and_ps(zmm2_1, 0x7fffffff)[0] f> 9.99999994e-09f)
                                        uint32_t var_39c_2 = zmm2_1[0]
                                    else
                                        int32_t var_39c_1 = 0
                                    
                                    void* rax_120 = sub_141ce8c20(&var_188, 
                                        sub_140b21160(&var_3a0, 8, 0), rbx_15 + 0x10)
                                    uint32_t zmm1_3[0x4] = *(rbx_15 + 0x10)
                                    uint64_t* rdi_12 = rax_120
                                    uint32_t zmm2_2[0x4] = *(rbx_15 + 0x14)
                                    uint32_t var_398
                                    
                                    if (_mm_and_ps(zmm1_3, 0x7fffffff)[0] f> 9.99999994e-09f)
                                        var_398 = zmm1_3[0]
                                    else
                                        var_398 = 0
                                    
                                    if (_mm_and_ps(zmm2_2, 0x7fffffff)[0] f> 9.99999994e-09f)
                                        uint32_t var_394_2 = zmm2_2[0]
                                    else
                                        int32_t var_394_1 = 0
                                    
                                    uint64_t* rax_122
                                    rax_122, zmm6, zmm7 = sub_141ce8c20(&var_138, 
                                        sub_140b21160(&var_398, 8, 0), rbx_15 + 0x10)
                                    
                                    if (var_468.d == 0xffffffff)
                                        int32_t var_278_1 = 0
                                        *rdi_12 = (_mm_unpacklo_ps(zx.o(0), 0)).q
                                        rdi_12[1].d = 0
                                        *rax_122 = (_mm_unpacklo_ps(zx.o(0), 0)).q
                                        int32_t var_26c_1 = 0
                                        rax_122[1].d = 0
                                    
                                    if (_mm_and_ps(zmm10, 0x7fffffff).d f> 9.99999994e-09f)
                                    label_141cea616:
                                        zmm0_2.q = fconvert.d(zmm10.d)
                                        
                                        if (_finite(zmm0_2.q) != 0)
                                            zmm0_2.q = fconvert.d(zmm11.d)
                                            
                                            if (_finite(zmm0_2.q) != 0)
                                                zmm0_2.q = fconvert.d(zmm12.d)
                                                
                                                if (_finite(zmm0_2.q) != 0)
                                                    zmm10.d = zmm10.d f+ *rdi_12
                                                    zmm11.d = zmm11.d f+ *(rdi_12 + 4)
                                                    zmm12.d = zmm12.d f+ rdi_12[1].d
                                                    *rdi_12 = zmm10.d
                                                    *(rdi_12 + 4) = zmm11.d
                                                    rdi_12[1].d = zmm12.d
                                    else
                                        if (_mm_and_ps(zmm11, 0x7fffffff).d f> 9.99999994e-09f)
                                            goto label_141cea616
                                        
                                        if (not(_mm_and_ps(zmm12, 0x7fffffff).d
                                                f<= 9.99999994e-09f))
                                            goto label_141cea616
                                    
                                    zmm11 = 0x7fffffff
                                    zmm10 = 0x322bcc77
                                    
                                    if (_mm_and_ps(zmm13, 0x7fffffff).d f> 9.99999994e-09f)
                                    label_141cea6a9:
                                        zmm0_2.q = fconvert.d(zmm13.d)
                                        
                                        if (_finite(zmm0_2.q) == 0)
                                            rdi_10 = arg1
                                        else
                                            zmm0_2.q = fconvert.d(zmm14.d)
                                            
                                            if (_finite(zmm0_2.q) == 0)
                                                rdi_10 = arg1
                                            else
                                                zmm0_2.q = fconvert.d(zmm6.d)
                                                rdi_10 = arg1
                                                
                                                if (_finite(zmm0_2.q) != 0)
                                                    zmm13.d = zmm13.d f+ *rax_122
                                                    zmm14.d = zmm14.d f+ *(rax_122 + 4)
                                                    zmm6.d = zmm6.d f+ rax_122[1].d
                                                    *rax_122 = zmm13.d
                                                    *(rax_122 + 4) = zmm14.d
                                                    rax_122[1].d = zmm6.d
                                    else
                                        if (_mm_and_ps(zmm14, 0x7fffffff).d f> 9.99999994e-09f)
                                            goto label_141cea6a9
                                        
                                        if (not(_mm_and_ps(zmm6, 0x7fffffff).d f<= 9.99999994e-09f))
                                            goto label_141cea6a9
                                        
                                        rdi_10 = arg1
                                
                                rsi_4 += 4
                                zmm8 = 0x3f800000
                                rax_130 = var_448_3 + 1
                                var_448_3 = rax_130
                            while (rax_130 != rcx_76)
                            r14_1 = var_388
                            r15_1 = var_380
                            r13_1 = var_378
                            var_474 = r12_3
                            r12 = var_358
                            rdi_9 = var_474
                            var_3e8_1 = zmm15.d
                        
                        zmm12 = 0x3f000000
                        zmm2 = zmm9
                        zmm2[0].d = zmm2[0].d f* zmm9.d
                        zmm0_2.d = zmm15.d f* zmm15.d
                        zmm1_1.d = zmm7.d f* zmm7.d
                        zmm2[0].d = zmm2[0].d f+ zmm0_2.d
                        zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                        double zmm4_2[0x2]
                        double zmm5_2[0x2]
                        
                        if (not(zmm2[0].d f<= zmm10.d))
                            zmm3 = zx.o(0)
                            zmm4_2 = 0x3f000000
                            zmm3[0].d = zmm2.d
                            zmm2 = 0x3f000000
                            zmm5_2 = _mm_rsqrt_ss(zmm3[0].d, zmm3[0].d)
                            zmm3[0].d = zmm3[0].d f* 0.5f
                            zmm0_2.d = zmm5_2.d f* zmm5_2[0].d
                            zmm1_1.d = zmm3.d f* zmm0_2.d
                            zmm2[0].d = 0.5f f- zmm1_1.d
                            zmm0_2.d = zmm5_2.d f* zmm2[0].d
                            zmm5_2[0].d = zmm5_2[0].d f+ zmm0_2.d
                            zmm1_1.d = zmm5_2.d f* zmm5_2[0].d
                            zmm3[0].d = zmm3[0].d f* zmm1_1.d
                            zmm4_2[0].d = 0.5f f- zmm3[0].d
                            zmm0_2.d = zmm5_2.d f* zmm4_2[0].d
                            zmm5_2[0].d = zmm5_2[0].d f+ zmm0_2.d
                            zmm15.d = zmm15.d f* zmm5_2[0].d
                            zmm9.d = zmm9.d f* zmm5_2[0].d
                            zmm7.d = zmm7.d f* zmm5_2[0].d
                            var_3e8_1 = zmm15.d
                            int32_t var_3e4_3 = zmm9.d
                            var_3e0_1 = zmm7.d
                            var_468.d = zmm5_2[0].d
                        
                        int64_t* r8_48 = arg1
                        
                        if (*r8_48[2] == 0)
                            int32_t var_160
                            int32_t r8_49 = var_160
                            int64_t var_178
                            int64_t* var_428_2 = &var_178
                            var_430 = 0
                            int32_t var_42c_3 = 1
                            int32_t var_420_3 = 0xffffffff
                            int64_t var_41c_2 = 0
                            
                            if (r8_49 != 0)
                                sub_14059bdd0(&var_430)
                                r8_49 = var_160
                            
                            zmm2 = var_420_3.o
                            zmm0_2 = var_430.o
                            int64_t* var_1b8_2 = &var_188
                            var_1a0 = zmm2
                            var_41c_2.d = r8_49
                            zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
                            uint128_t var_2d0 = var_1b8_2.o
                            uint128_t var_2c0_1 = zmm0_2
                            int64_t var_2b0_1 = zmm2.q
                            
                            while (true)
                                int64_t rax_132 = sx.q(var_2c0_1:0xc.d)
                                int64_t* rdx_73 = var_2d0.q
                                
                                if (rax_132.d == ((0xffffffff << (r8_49.b & 0x1f)).q u>> 0x20).d
                                        && var_2c0_1.q == &var_178 && rdx_73 == &var_188)
                                    break
                                
                                uint128_t* rcx_90 = rax_132 * 0x1c
                                int64_t rax_133 = *rdx_73
                                zmm0_2 = *(rcx_90 + rax_133)
                                int32_t rax_134 = *(rcx_90 + rax_133 + 0x10)
                                zmm1_1 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xaa)
                                zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xff)
                                zmm0_2.d = zmm0_2.d f* zmm0_2.d
                                zmm1_1.d = zmm1_1.d f* zmm1_1.d
                                zmm1_1.d = zmm1_1.d f+ zmm0_2.d
                                zmm0_2 = rax_134
                                zmm0_2.d = zmm0_2.d f* zmm0_2.d
                                zmm1_1.d = zmm1_1.d f+ zmm0_2.d
                                
                                if (not(zmm1_1.d f<= zmm10.d))
                                    zmm3 = zx.o(0)
                                    zmm5_2 = zx.o(0)
                                    zmm5_2[0].d = 0x3f000000
                                    zmm3[0].d = zmm1_1.d
                                    zmm4_2 = _mm_rsqrt_ss(zmm3[0].d, zmm3[0].d)
                                    zmm3[0].d = zmm3[0].d f* 0.5f
                                    zmm0_2.d = zmm4_2.d f* zmm4_2[0].d
                                    zmm1_1.d = zmm3.d f* zmm0_2.d
                                    zmm5_2[0].d = zmm5_2[0].d f- zmm1_1.d
                                    zmm0_2.d = zmm4_2.d f* zmm5_2[0].d
                                    zmm4_2[0].d = zmm4_2[0].d f+ zmm0_2.d
                                    zmm1_1.d = zmm4_2.d f* zmm4_2[0].d
                                    zmm3[0].d = zmm3[0].d f* zmm1_1.d
                                    zmm5_2[0].d = 0.5f f- zmm3[0].d
                                    zmm0_2.d = zmm4_2.d f* zmm5_2[0].d
                                    zmm4_2[0].d = zmm4_2[0].d f+ zmm0_2.d
                                    var_468.d = zmm4_2[0].d
                                
                                var_2c0_1:8.d &= not.d(var_2d0:0xc.d)
                                sub_14059bdd0(&var_2d0:8)
                            
                            int32_t var_110
                            int32_t r8_50 = var_110
                            int32_t var_42c_4 = 1
                            var_430 = 0
                            int64_t var_128
                            int64_t* var_428_3 = &var_128
                            int32_t var_420_5 = 0xffffffff
                            int64_t var_41c_3 = 0
                            
                            if (r8_50 != 0)
                                sub_14059bdd0(&var_430)
                                r8_50 = var_110
                            
                            zmm2 = var_420_5.o
                            zmm0_2 = var_430.o
                            int64_t* var_1b8_3 = &var_138
                            var_1a0 = zmm2
                            var_41c_3.d = r8_50
                            zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
                            uint128_t var_2a8 = var_1b8_3.o
                            uint128_t var_298_1 = zmm0_2
                            int64_t var_288_1 = zmm2.q
                            
                            while (true)
                                int64_t rax_137 = sx.q(var_298_1:0xc.d)
                                int64_t* rdx_75 = var_2a8.q
                                
                                if (rax_137.d == ((0xffffffff << (r8_50.b & 0x1f)).q u>> 0x20).d
                                        && var_298_1.q == &var_128 && rdx_75 == &var_138)
                                    break
                                
                                uint128_t* rcx_95 = rax_137 * 0x1c
                                int64_t rax_138 = *rdx_75
                                zmm0_2 = *(rcx_95 + rax_138)
                                int32_t rax_139 = *(rcx_95 + rax_138 + 0x10)
                                zmm1_1 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xaa)
                                zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0xff)
                                zmm0_2.d = zmm0_2.d f* zmm0_2.d
                                zmm1_1.d = zmm1_1.d f* zmm1_1.d
                                zmm1_1.d = zmm1_1.d f+ zmm0_2.d
                                zmm0_2 = rax_139
                                zmm0_2.d = zmm0_2.d f* zmm0_2.d
                                zmm1_1.d = zmm1_1.d f+ zmm0_2.d
                                
                                if (not(zmm1_1.d f<= zmm10.d))
                                    zmm3 = zx.o(0)
                                    zmm5_2 = zx.o(0)
                                    zmm5_2[0].d = 0x3f000000
                                    zmm3[0].d = zmm1_1.d
                                    zmm4_2 = _mm_rsqrt_ss(zmm3[0].d, zmm3[0].d)
                                    zmm3[0].d = zmm3[0].d f* 0.5f
                                    zmm0_2.d = zmm4_2.d f* zmm4_2[0].d
                                    zmm1_1.d = zmm3.d f* zmm0_2.d
                                    zmm5_2[0].d = zmm5_2[0].d f- zmm1_1.d
                                    zmm0_2.d = zmm4_2.d f* zmm5_2[0].d
                                    zmm4_2[0].d = zmm4_2[0].d f+ zmm0_2.d
                                    zmm1_1.d = zmm4_2.d f* zmm4_2[0].d
                                    zmm3[0].d = zmm3[0].d f* zmm1_1.d
                                    zmm5_2[0].d = 0.5f f- zmm3[0].d
                                    zmm0_2.d = zmm4_2.d f* zmm5_2[0].d
                                    zmm4_2[0].d = zmm4_2[0].d f+ zmm0_2.d
                                    var_468.d = zmm4_2[0].d
                                
                                var_298_1:8.d &= not.d(var_2a8:0xc.d)
                                sub_14059bdd0(&var_2a8:8)
                            
                            r8_48 = arg1
                        
                        int32_t* rdx_76 = var_3d8
                        int64_t rdi_13 = 0
                        int32_t* var_408_3 = rdx_76
                        void* rcx_97 = &rdx_76[sx.q(rdi_9)]
                        uint64_t rax_146 = (rcx_97 - rdx_76 + 3) u>> 2
                        int32_t* rcx_98 = rdx_76
                        
                        if (rdx_76 u> rcx_97)
                            rax_146 = 0
                        
                        if (rax_146 != 0)
                            while (true)
                                int64_t rbx_21 = sx.q(*rcx_98)
                                int64_t rcx_100 = rbx_21 * 3
                                int64_t rdx_77 = **(r15_1 + 0x18)
                                uint64_t var_448_4 = *(**(r12 + 0x18) + (rbx_21 << 3))
                                
                                if (not(_mm_and_ps(*(rdx_77 + (rcx_100 << 2)), zmm11).d f> zmm10.d)
                                        && not(_mm_and_ps(*(rdx_77 + (rcx_100 << 2) + 4), zmm11).d
                                        f> zmm10.d) && not(
                                        _mm_and_ps(*(rdx_77 + (rcx_100 << 2) + 8), zmm11).d
                                        f> zmm10.d))
                                    *(rdx_77 + (rcx_100 << 2)) = var_3e8_1.q
                                    *(rdx_77 + (rcx_100 << 2) + 8) = var_3e0_1
                                
                                if (*r8_48[2] == 0)
                                    int32_t var_390
                                    uint128_t zmm6_1
                                    int64_t zmm7_1
                                    zmm6_1, zmm7_1 = sub_141cedf20(&var_188, &var_390, 
                                        _mm_unpacklo_ps(var_448_4.d, var_448_4:4.d.q).q)
                                    int64_t rax_151 = sx.q(var_390)
                                    void* const rax_153
                                    
                                    if (rax_151.d == 0xffffffff)
                                        rax_153 = nullptr
                                    else
                                        rax_153 = rax_151 * 0x1c + var_188
                                    
                                    uint64_t var_3b8_1 = *(rax_153 + 8)
                                    int32_t var_3b0_1 = *(rax_153 + 0x10)
                                    int32_t var_38c
                                    sub_141cedf20(&var_138, &var_38c, 
                                        _mm_unpacklo_ps(zmm6_1, zmm7_1).q)
                                    int64_t rax_155 = sx.q(var_38c)
                                    void* const rax_157
                                    
                                    if (rax_155.d == 0xffffffff)
                                        rax_157 = nullptr
                                    else
                                        rax_157 = rax_155 * 0x1c + var_138
                                    
                                    int64_t rcx_103 = rbx_21 * 3
                                    int32_t rax_158 = *(rax_157 + 0x10)
                                    uint64_t var_368_1 = *(rax_157 + 8)
                                    int64_t rdx_80 = **(r14_1 + 0x18)
                                    zmm3 = *(rdx_80 + (rcx_103 << 2))
                                    zmm1_1 = _mm_and_ps(zmm3, zmm11)
                                    
                                    if (zmm1_1.d f> zmm10.d)
                                        var_3b8_1 = *(rdx_80 + (rcx_103 << 2))
                                        var_3b0_1 = *(rdx_80 + (rcx_103 << 2) + 8)
                                    else if (_mm_and_ps(*(rdx_80 + (rcx_103 << 2) + 4), zmm11).d
                                            f> zmm10.d)
                                        var_3b8_1 = *(rdx_80 + (rcx_103 << 2))
                                        var_3b0_1 = *(rdx_80 + (rcx_103 << 2) + 8)
                                    else if (not(_mm_and_ps(*(rdx_80 + (rcx_103 << 2) + 8), zmm11).d
                                            f<= zmm10.d))
                                        var_3b8_1 = *(rdx_80 + (rcx_103 << 2))
                                        var_3b0_1 = *(rdx_80 + (rcx_103 << 2) + 8)
                                    
                                    zmm8 = zx.o(0)
                                    zmm7 = zx.o(0)
                                    zmm6 = zx.o(0)
                                    int64_t r8_53 = **(r15_1 + 0x18)
                                    zmm14 = *(r8_53 + (rcx_103 << 2))
                                    
                                    if (_mm_and_ps(zmm14, zmm11).d f> zmm10.d)
                                    label_141cead6e:
                                        
                                        if (zmm1_1.d f> zmm10.d)
                                        label_141cead98:
                                            zmm2 = *(r8_53 + (rcx_103 << 2) + 4)
                                            zmm9 = *(r8_53 + (rcx_103 << 2) + 8)
                                            zmm1_1 = *(rdx_80 + (rcx_103 << 2) + 8)
                                            zmm10 = *(rdx_80 + (rcx_103 << 2) + 4)
                                            zmm7.d = zmm2.d f* zmm1_1.d
                                            zmm0_2.d = zmm9.d f* zmm10.d
                                            int64_t r9_14 = **(r13_1 + 0x18)
                                            zmm1_1.d = zmm1_1.d f* zmm14.d
                                            zmm9.d = zmm9.d f* zmm3[0].d
                                            zmm7.d = zmm7.d f- zmm0_2.d
                                            zmm3[0].d = zmm3[0].d f* zmm2[0].d
                                            zmm9.d = zmm9.d f- zmm1_1.d
                                            zmm10.d = zmm10.d f* zmm14.d
                                            zmm0_2.d = zmm7.d f* zmm7.d
                                            zmm10.d = zmm10.d f- zmm3[0].d
                                            zmm2 = zmm9
                                            zmm2[0].d = zmm2[0].d f* zmm9.d
                                            zmm2[0].d = zmm2[0].d f+ zmm0_2.d
                                            zmm1_1.d = zmm10.d f* zmm10.d
                                            zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                            
                                            if (not(zmm2[0].d f== 1f))
                                                if (zmm2[0].d f>= 9.99999994e-09f)
                                                    zmm4_2 = zx.o(0)
                                                    zmm4_2[0].d = zmm12.d
                                                    zmm0_2 = zmm2
                                                    zmm3 = zmm0_2
                                                    zmm5_2 = _mm_rsqrt_ss(zmm0_2[0].d, zmm3[0].d)
                                                    zmm3[0].d = zmm3[0].d f* zmm4_2[0].d
                                                    zmm0_2.d = zmm5_2.d f* zmm5_2[0].d
                                                    zmm1_1.d = zmm3.d f* zmm0_2.d
                                                    zmm4_2[0].d = zmm4_2[0].d f- zmm1_1.d
                                                    zmm0_2.d = zmm5_2.d f* zmm4_2[0].d
                                                    zmm5_2[0].d = zmm5_2[0].d f+ zmm0_2.d
                                                    zmm1_1.d = zmm5_2.d f* zmm5_2[0].d
                                                    zmm3[0].d = zmm3[0].d f* zmm1_1.d
                                                    zmm4_2[0].d = zmm4_2[0].d f- zmm3[0].d
                                                    zmm0_2.d = zmm5_2.d f* zmm4_2[0].d
                                                    zmm5_2[0].d = zmm5_2[0].d f+ zmm0_2.d
                                                    var_468.d = zmm5_2[0].d
                                                    zmm0_2.d = zmm5_2.d f* zmm7.d
                                                    zmm1_1.d = zmm5_2.d f* zmm9.d
                                                    zmm5_2[0].d = zmm5_2[0].d f* zmm10.d
                                                    zmm7 = zmm0_2
                                                    zmm9 = zmm1_1
                                                    zmm10 = zmm5_2
                                                else
                                                    zmm7 = data_143dbb1f8
                                                    zmm9 = data_143dbb1fc
                                                    zmm10 = data_143dbb200
                                            
                                            zmm6 = *(r9_14 + (rbx_21 << 2))
                                            zmm8.d = zmm6.d f* zmm7.d
                                            zmm7 = zmm6
                                            zmm6.d = zmm6.d f* zmm10.d
                                            zmm10 = 0x322bcc77
                                            zmm7.d = zmm7.d f* zmm9.d
                                        else
                                            if (_mm_and_ps(*(rdx_80 + (rcx_103 << 2) + 4), zmm11).d
                                                    f> zmm10.d)
                                                goto label_141cead98
                                            
                                            if (not(_mm_and_ps(*(rdx_80 + (rcx_103 << 2) + 8), 
                                                    zmm11).d f<= zmm10.d))
                                                goto label_141cead98
                                    else
                                        if (_mm_and_ps(*(r8_53 + (rcx_103 << 2) + 4), zmm11).d
                                                f> zmm10.d)
                                            goto label_141cead6e
                                        
                                        if (not(_mm_and_ps(*(r8_53 + (rcx_103 << 2) + 8), zmm11).d
                                                f<= zmm10.d))
                                            goto label_141cead6e
                                    
                                    if (not(_mm_and_ps(zmm8, zmm11).d f> zmm10.d)
                                            && not(_mm_and_ps(zmm7, zmm11).d f> zmm10.d)
                                            && not(_mm_and_ps(zmm6, zmm11).d f> zmm10.d))
                                        zmm6 = rax_158
                                        zmm7 = var_368_1:4.d
                                        zmm8 = var_368_1.d
                                    
                                    zmm10 = var_3b8_1:4.d
                                    zmm2 = zmm7
                                    zmm11 = var_3b8_1.d
                                    zmm9 = var_3b0_1
                                    zmm2[0].d = zmm2[0].d f* zmm10.d
                                    zmm0_2.d = zmm8.d f* zmm11.d
                                    zmm1_1.d = zmm6.d f* zmm9.d
                                    zmm2[0].d = zmm2[0].d f+ zmm0_2.d
                                    zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                    zmm0_2.d = zmm2.d f* zmm11.d
                                    zmm8.d = zmm8.d f- zmm0_2.d
                                    zmm2[0].d = zmm2[0].d f* zmm9.d
                                    zmm0_2.d = zmm2.d f* zmm10.d
                                    zmm6.d = zmm6.d f- zmm2[0].d
                                    zmm2 = zmm8
                                    zmm2[0].d = zmm2[0].d f* zmm8.d
                                    zmm7.d = zmm7.d f- zmm0_2.d
                                    zmm1_1.d = zmm6.d f* zmm6.d
                                    zmm0_2.d = zmm7.d f* zmm7.d
                                    zmm2[0].d = zmm2[0].d f+ zmm0_2.d
                                    zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                    
                                    if (not(zmm2[0].d f<= 9.99999994e-09f))
                                        zmm4_2 = zx.o(0)
                                        zmm4_2[0].d = zmm12.d
                                        zmm0_2 = zmm2
                                        zmm3 = zmm0_2
                                        zmm5_2 = _mm_rsqrt_ss(zmm0_2[0].d, zmm3[0].d)
                                        zmm3[0].d = zmm3[0].d f* zmm4_2[0].d
                                        zmm0_2.d = zmm5_2.d f* zmm5_2[0].d
                                        zmm1_1.d = zmm3.d f* zmm0_2.d
                                        zmm4_2[0].d = zmm4_2[0].d f- zmm1_1.d
                                        zmm0_2.d = zmm5_2.d f* zmm4_2[0].d
                                        zmm5_2[0].d = zmm5_2[0].d f+ zmm0_2.d
                                        zmm1_1.d = zmm5_2.d f* zmm5_2[0].d
                                        zmm3[0].d = zmm3[0].d f* zmm1_1.d
                                        zmm4_2[0].d = zmm4_2[0].d f- zmm3[0].d
                                        zmm0_2.d = zmm5_2.d f* zmm4_2[0].d
                                        zmm5_2[0].d = zmm5_2[0].d f+ zmm0_2.d
                                        var_468.d = zmm5_2[0].d
                                        zmm8.d = zmm8.d f* zmm5_2[0].d
                                        zmm7.d = zmm7.d f* zmm5_2[0].d
                                        zmm6.d = zmm6.d f* zmm5_2[0].d
                                    
                                    zmm12 = *(r8_53 + (rcx_103 << 2) + 4)
                                    zmm13 = *(r8_53 + (rcx_103 << 2) + 8)
                                    zmm2 = zmm12
                                    zmm2[0].d = zmm2[0].d f* zmm10.d
                                    zmm0_2.d = zmm14.d f* zmm11.d
                                    zmm1_1.d = zmm13.d f* zmm9.d
                                    zmm2[0].d = zmm2[0].d f+ zmm0_2.d
                                    zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                    zmm0_2.d = zmm2.d f* zmm14.d
                                    zmm11.d = zmm11.d f- zmm0_2.d
                                    zmm2[0].d = zmm2[0].d f* zmm13.d
                                    zmm0_2.d = zmm2.d f* zmm12.d
                                    zmm9.d = zmm9.d f- zmm2[0].d
                                    zmm2 = zmm11
                                    zmm2[0].d = zmm2[0].d f* zmm11.d
                                    zmm10.d = zmm10.d f- zmm0_2.d
                                    int32_t var_3b0_2 = zmm9.d
                                    zmm1_1.d = zmm9.d f* zmm9.d
                                    zmm0_2.d = zmm10.d f* zmm10.d
                                    zmm2[0].d = zmm2[0].d f+ zmm0_2.d
                                    zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                    
                                    if (not(zmm2[0].d f<= 9.99999994e-09f))
                                        zmm4_2 = 0x3f000000
                                        zmm0_2 = zmm2
                                        zmm3 = zmm0_2
                                        zmm5_2 = _mm_rsqrt_ss(zmm0_2[0].d, zmm3[0].d)
                                        zmm2 = 0x3f000000
                                        zmm3[0].d = zmm3[0].d f* 0.5f
                                        zmm0_2.d = zmm5_2.d f* zmm5_2[0].d
                                        zmm1_1.d = zmm3.d f* zmm0_2.d
                                        zmm2[0].d = 0.5f f- zmm1_1.d
                                        zmm0_2.d = zmm5_2.d f* zmm2[0].d
                                        zmm5_2[0].d = zmm5_2[0].d f+ zmm0_2.d
                                        zmm1_1.d = zmm5_2.d f* zmm5_2[0].d
                                        zmm3[0].d = zmm3[0].d f* zmm1_1.d
                                        zmm4_2[0].d = 0.5f f- zmm3[0].d
                                        zmm0_2.d = zmm5_2.d f* zmm4_2[0].d
                                        zmm5_2[0].d = zmm5_2[0].d f+ zmm0_2.d
                                        zmm9.d = zmm9.d f* zmm5_2[0].d
                                        var_468.d = zmm5_2[0].d
                                        zmm11.d = zmm11.d f* zmm5_2[0].d
                                        var_3b0_2 = zmm9.d
                                        zmm10.d = zmm10.d f* zmm5_2[0].d
                                    
                                    zmm2 = zmm12
                                    zmm2[0].d = zmm2[0].d f* zmm7.d
                                    zmm0_2.d = zmm14.d f* zmm8.d
                                    zmm1_1.d = zmm13.d f* zmm6.d
                                    zmm2[0].d = zmm2[0].d f+ zmm0_2.d
                                    zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                    zmm14.d = zmm14.d f* zmm2[0].d
                                    zmm12.d = zmm12.d f* zmm2[0].d
                                    zmm13.d = zmm13.d f* zmm2[0].d
                                    zmm8.d = zmm8.d f- zmm14.d
                                    zmm7.d = zmm7.d f- zmm12.d
                                    zmm6.d = zmm6.d f- zmm13.d
                                    zmm2 = zmm8
                                    zmm2[0].d = zmm2[0].d f* zmm8.d
                                    zmm0_2.d = zmm7.d f* zmm7.d
                                    zmm1_1.d = zmm6.d f* zmm6.d
                                    zmm2[0].d = zmm2[0].d f+ zmm0_2.d
                                    zmm2[0].d = zmm2[0].d f+ zmm1_1.d
                                    
                                    if (not(zmm2[0].d f<= 9.99999994e-09f))
                                        zmm4_2 = 0x3f000000
                                        zmm0_2 = zmm2
                                        zmm3 = zmm0_2
                                        zmm5_2 = _mm_rsqrt_ss(zmm0_2[0].d, zmm3[0].d)
                                        zmm2 = 0x3f000000
                                        zmm3[0].d = zmm3[0].d f* 0.5f
                                        zmm0_2.d = zmm5_2.d f* zmm5_2[0].d
                                        zmm1_1.d = zmm3.d f* zmm0_2.d
                                        zmm2[0].d = 0.5f f- zmm1_1.d
                                        zmm0_2.d = zmm5_2.d f* zmm2[0].d
                                        zmm5_2[0].d = zmm5_2[0].d f+ zmm0_2.d
                                        zmm1_1.d = zmm5_2.d f* zmm5_2[0].d
                                        zmm3[0].d = zmm3[0].d f* zmm1_1.d
                                        zmm4_2[0].d = 0.5f f- zmm3[0].d
                                        zmm0_2.d = zmm5_2.d f* zmm4_2[0].d
                                        zmm5_2[0].d = zmm5_2[0].d f+ zmm0_2.d
                                        var_468.d = zmm5_2[0].d
                                        zmm8.d = zmm8.d f* zmm5_2[0].d
                                        zmm7.d = zmm7.d f* zmm5_2[0].d
                                        zmm6.d = zmm6.d f* zmm5_2[0].d
                                    
                                    *(rdx_80 + (rcx_103 << 2)) = (_mm_unpacklo_ps(zmm11, zmm10.q)).q
                                    *(rdx_80 + (rcx_103 << 2) + 8) = var_3b0_2
                                    zmm1_1 = *(r8_53 + (rcx_103 << 2) + 4)
                                    zmm2 = *(r8_53 + (rcx_103 << 2) + 8)
                                    zmm0_2.d = zmm1_1.d f* zmm6.d
                                    zmm2[0].d = zmm2[0].d f* zmm7.d
                                    zmm2[0].d = zmm2[0].d f* zmm10.d
                                    zmm2[0].d = zmm2[0].d f- zmm0_2.d
                                    zmm1_1.d = zmm1_1.d f* zmm9.d
                                    zmm6.d = zmm6.d f* zmm10.d
                                    zmm2[0].d = zmm2[0].d f- zmm1_1.d
                                    zmm9.d = zmm9.d f* zmm7.d
                                    zmm2[0].d = zmm2[0].d f* zmm11.d
                                    zmm6.d = zmm6.d f- zmm9.d
                                    zmm2[0].d = zmm2[0].d f* zmm8.d
                                    zmm6.d = zmm6.d f* *(r8_53 + (rcx_103 << 2))
                                    zmm2[0].d = zmm2[0].d f- zmm2[0].d
                                    zmm2[0].d = zmm2[0].d f+ zmm6.d
                                    
                                    if (zmm2[0].d f>= 0f)
                                        zmm0_2 = 0x3f800000
                                    else
                                        zmm0_2 = 0xbf800000
                                    
                                    zmm10 = 0x322bcc77
                                    zmm11 = 0x7fffffff
                                    r8_48 = arg1
                                    *(**(r13_1 + 0x18) + (rbx_21 << 2)) = zmm0_2.d
                                
                                rdi_13 += 1
                                rcx_98 = &var_408_3[1]
                                var_408_3 = rcx_98
                                
                                if (rdi_13 == rax_146)
                                    break
                                
                                zmm12 = 0x3f000000
                        
                        zmm8 = 0x3f800000
                        rbx_12 = var_400_3 + 0x30
                        var_400_3 = rbx_12
                    while (rbx_12 != rax_90)
        
        zmm6 = 0x38d1b717
        rdi_1 = var_350 + 1
        zmm8 = 0x3f800000
        zmm7 = 0x3f000000
        var_350 = rdi_1
    while (rdi_1 s< rax_17)
    
    int32_t* rax_165 = var_3d8
    
    if (rax_165 != 0)
        sub_140a74f90(rax_165)
    
    int64_t rax_166 = var_440
    
    if (rax_166 != 0)
        sub_140a74f90(rax_166)
    
    int32_t* rax_167 = var_3c8
    
    if (rax_167 != 0)
        sub_140a74f90(rax_167)
    
    r14 = var_3f8

int32_t i_5 = i_6

if (i_5 != 0)
    void* rbx_23 = r14 + 0x20
    int32_t i_3
    
    do
        int64_t rcx_109 = *rbx_23
        
        if (rcx_109 != 0)
            sub_140a74f90(rcx_109)
        
        rbx_23 += 0x30
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

if (r14 != 0)
    sub_140a74f90(r14)

int32_t var_1c0_1 = 0

if (var_1c8 != 0)
    sub_140a74f90(var_1c8)

sub_141a32460(&var_208)
sub_140f23e90(&var_138)
void* result = sub_140f23e90(&var_188)
__security_check_cookie(rax_1 ^ &var_498)
return result
