// 函数: sub_1409d2940
// 地址: 0x1409d2940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int32_t rbx = 0
int64_t rsi = sx.q(arg2)
int32_t var_2b4 = rsi.d
void*** r14 = arg1
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

TEB* gsbase
void* r15 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
void* var_240 = r15

if (data_143ceef78 s> *(r15 + 0x14))
    _Init_thread_header(&data_143ceef78)
    
    if (data_143ceef78 == 0xffffffff)
        atexit(sub_142cb9390)
        _Init_thread_footer(&data_143ceef78)

int32_t rdx = data_143ceef74
data_143ceef70 = 0

if (rdx s< 0 && rdx != 0)
    sub_1405dadb0(&data_143ceef68, 0)
    rdx = data_143ceef74

int64_t r12_1 = rsi * 2
int32_t r13 = *(r14[5][0x23] + (r12_1 << 3) + 8)

if (r13 s> rdx)
    sub_1405dadb0(&data_143ceef68, r13)
    rdx = data_143ceef74

if (r13 s> 0)
    int64_t r15_1 = 0
    
    while (true)
        int64_t rax_6 = r14[5][0x23]
        int32_t* rcx_4
        
        if (rbx s< 0 || rbx s>= *(rax_6 + (r12_1 << 3) + 8))
            rcx_4 = &data_143a1c6c8
        else
            rcx_4 = *(rax_6 + (r12_1 << 3)) + r15_1
        
        int64_t r14_1 = sx.q(data_143ceef70)
        int32_t rdi_1 = *rcx_4
        int32_t rax_7 = (r14_1 + 1).d
        data_143ceef70 = rax_7
        
        if (rax_7 s> rdx)
            sub_1405a4cf0(&data_143ceef68)
        
        rbx += 1
        r15_1 += 4
        *(data_143ceef68 + (r14_1 << 2)) = rdi_1
        r14 = arg1
        
        if (rbx s>= r13)
            break
        
        rdx = data_143ceef74
    
    r15 = var_240

if (data_143ceef7c s> *(r15 + 0x14))
    _Init_thread_header(&data_143ceef7c)
    
    if (data_143ceef7c == 0xffffffff)
        atexit(sub_142cb7930)
        _Init_thread_footer(&data_143ceef7c)

if (data_143991178 != data_1439911a4)
    int32_t rax_11 = data_14399117c
    data_143991178 = 0
    
    if (rax_11 s< 0 && rax_11 != 0)
        sub_1405a5390(&data_143991170, 0)
    
    data_1439911a0 = 0xffffffff
    data_1439911a4 = 0
    sub_140774790(&data_143991180)
    int64_t rcx_5 = sx.q(data_1439911b8)
    
    if (rcx_5 s> 0)
        void* rax_12 = data_1439911b0
        void* rdi_2 = &data_1439911a8
        
        if (rax_12 != 0)
            rdi_2 = rax_12
        
        __builtin_memset(rdi_2, 0xffffffff, rcx_5 << 2)

uint128_t zmm8 = 0x7f7fffff
int32_t i_1 = data_143a1c6c8
int32_t var_264 = 0x7f7fffff
uint128_t zmm6
uint128_t var_48 = zmm6
void* var_298
sub_14099b130(&r14[5][0x40], &var_298, data_143f36118)
void* var_178
sub_14090aa40(&r14[5][0x2a], &var_178, data_143f35cc8)
int32_t* rcx_10 = data_143ceef68
int32_t* var_258 = rcx_10
int64_t* result = &rcx_10[sx.q(data_143ceef70)]
int64_t* result_1 = result
int32_t var_2a8
int32_t var_2a0
int32_t var_29c
uint128_t var_288
char* var_278
int32_t var_228
int32_t var_220
int64_t var_1d0
int32_t var_1c8
uint128_t var_1a8
uint64_t var_198
void* var_108
char* var_100
int32_t var_f4
uint128_t zmm2
uint128_t zmm7

if (rcx_10 != result)
    void* r13_1 = var_298
    int128_t zmm9
    int128_t var_78_1 = zmm9
    uint128_t zmm10
    uint128_t var_88_1 = zmm10
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    uint128_t zmm12
    uint128_t var_a8_1 = zmm12
    uint128_t zmm14
    uint128_t var_c8_1 = zmm14
    uint128_t zmm15
    uint128_t var_d8_1 = zmm15
    
    do
        int64_t r8_2 = sx.q(*rcx_10)
        result = r14[5]
        int32_t var_2e0 = r8_2.d
        
        if (*(result[0x1c] + r8_2 * 0x28 + 8) == 3)
            zmm7 = sub_1409b31b0(r14, &var_228, r8_2.d)
            int64_t rdx_7 = 0
            int32_t i_10 = 0
            int32_t i = 0
            int64_t var_2c0_1 = 0
            
            do
                int64_t* r10_1 = r14[5]
                int64_t rax_14 = sx.q(var_2e0)
                var_2a8 = zmm7.d
                int64_t rdi_3 = r10_1[0x1c]
                int64_t rcx_13 = rax_14 * 5
                int32_t r9_1 = *(rdi_3 + (rcx_13 << 3) + 8)
                int32_t result_2
                int32_t result_3
                
                if (i s< r9_1)
                    int64_t rdi_4 = *(rdi_3 + (rcx_13 << 3))
                    int64_t r8_3 = r10_1[7]
                    sub_141cdf680(r10_1, &result_3, *(r8_3 + sx.q(*(rdi_4 + (rdx_7 << 2))) * 0x18), 
                        *(r8_3 + sx.q(*(rdi_4 + (sx.q(mods.dp.d(sx.q(i + 1), r9_1)) << 2))) * 0x18))
                    rdx_7 = var_2c0_1
                    result_2 = result_3
                else
                    result_2 = data_143a1c6bc
                    result_3 = result_2
                result = sx.q(result_2)
                
                if (*(result + **(r13_1 + 0x18)) == 0)
                    int32_t rbx_1 = var_2e0
                    int64_t var_120
                    int64_t* rax_21 = sub_1409c2bd0(r14[5], &var_120, result_2)
                    int64_t rcx_18 = var_120
                    int32_t rsi_1 = rax_21[1].d
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
                    
                    int32_t j_8
                    
                    if (rsi_1 != 2)
                    label_1409d2d5f:
                        result = zx.q(data_143a1c6c8)
                        j_8 = result.d
                    else
                        int32_t rsi_2 = 0
                        
                        while (true)
                            sub_1409c2bd0(r14[5], &var_1d0, result_2)
                            int64_t rcx_20 = var_1d0
                            int32_t* rdx_14
                            
                            if (rsi_2 s< 0 || rsi_2 s>= var_1c8)
                                rdx_14 = &data_143a1c6c8
                            else
                                rdx_14 = rcx_20 + (sx.q(rsi_2) << 2)
                            
                            int64_t r14_2 = sx.q(*rdx_14)
                            
                            if (rcx_20 != 0)
                                sub_140a74f90(rcx_20)
                            
                            if (r14_2.d != rbx_1)
                                int32_t j_2 = data_143a1c6c8
                                result = arg1[5]
                                
                                if (*(result[0x1c] + r14_2 * 0x28 + 8) == 3)
                                    j_2 = r14_2.d
                                
                                bool cond:6_1 = j_2 == data_143a1c6c8
                                j_8 = j_2
                                
                                if (cond:6_1)
                                    r14 = arg1
                                else if (data_143991178 == data_1439911a4)
                                label_1409d2f87:
                                    r14 = arg1
                                    int32_t var_158
                                    uint128_t zmm13_1
                                    result, zmm7, zmm13_1 = sub_1409b31b0(r14, &var_158, j_2)
                                    int32_t var_224
                                    int32_t var_154
                                    zmm9.d = var_154.d f* var_224
                                    uint128_t zmm0_2
                                    zmm0_2.d = var_158.d f* var_228
                                    int32_t var_150
                                    uint128_t zmm1_2
                                    zmm1_2.d = var_150.d f* var_220
                                    zmm9.d = zmm9.d f+ zmm0_2.d
                                    zmm9.d = zmm9.d f+ zmm1_2.d
                                    
                                    if (not(zmm9.d f< 0.984000027f))
                                        void* r8_8 = r14[5]
                                        int64_t rbx_2 = sx.q(var_2e0)
                                        int64_t rsi_3 = *(r8_8 + 0xe0)
                                        int64_t r14_3 = rbx_2 * 5
                                        int32_t rcx_32 = (i + 2) s% 3
                                        int32_t* rdx_25
                                        
                                        if (i s< 0 || i s>= *(rsi_3 + (r14_3 << 3) + 8))
                                            rdx_25 = &data_143a1c6b8
                                        else
                                            rdx_25 = *(rsi_3 + (r14_3 << 3)) + (sx.q(i) << 2)
                                        
                                        int64_t rax_43 = sx.q(*rdx_25)
                                        int32_t rdi_7 = data_143a1c6b8
                                        int32_t rcx_37 = data_143a1c6b4
                                        int32_t var_2c8_1 = rcx_37
                                        
                                        if (rax_43.d != rdi_7)
                                            rcx_37 = *(*(r8_8 + 0x38) + rax_43 * 0x18)
                                        
                                        int64_t j_17 = sx.q(j_8)
                                        int32_t rax_45 = sub_1409be740(arg1, j_17.d, rcx_37)
                                        int64_t r8_10 = *(rsi_3 + (r14_3 << 3))
                                        int64_t r10_3 = sx.q(rax_45)
                                        int32_t r11_2 = (r10_3 + 2).d s% 3
                                        var_29c = r11_2
                                        var_2a0 = (r10_3 + 1).d s% 3
                                        int64_t r9_6 = *(rsi_3 + j_17 * 0x28)
                                        int32_t rsi_4 = *(r8_10 + (sx.q((i + 1) s% 3) << 2))
                                        int32_t rax_50 = *(r8_10 + (var_2c0_1 << 2))
                                        int32_t rcx_45 = *(r9_6 + (r10_3 << 2))
                                        int32_t r14_4 = *(r9_6 + (sx.q(r11_2) << 2))
                                        int32_t var_10c
                                        int32_t r9_7
                                        
                                        if (rax_50 != rcx_45 || rsi_4 != r14_4)
                                            var_10c = rcx_45
                                            void var_2dc
                                            var_108 = &var_2dc
                                            char var_2e8
                                            var_198 = zx.q(&var_2e8)
                                            var_2e8 = 1
                                            var_1a8 = rax_50.o
                                            result = sub_140999d90(&arg1[5][0x35], &var_1a8)
                                            
                                            if (var_2e8 == 0)
                                                i = i_10
                                                r14 = arg1
                                            else
                                                void* rcx_48 = arg1[5]
                                                var_108 = &var_2dc
                                                var_100 = &var_2e8
                                                var_10c = r14_4
                                                var_2e8 = 1
                                                var_278 = var_100
                                                var_288 = rsi_4.o
                                                result = sub_140999d90(rcx_48 + 0x1a8, &var_288)
                                                
                                                if (var_2e8 != 0)
                                                    rbx_2 = zx.q(var_2e0)
                                                    j_17 = zx.q(j_8)
                                                    rdi_7 = data_143a1c6b8
                                                    r9_7 = data_143a1c6b4
                                                    goto label_1409d3230
                                                
                                                i = i_10
                                                r14 = arg1
                                        else
                                            r9_7 = var_2c8_1
                                        label_1409d3230:
                                            void* r11_3 = arg1[5]
                                            int64_t r8_11 = *(r11_3 + 0xe0)
                                            int64_t r10_4 = sx.q(rbx_2.d) * 5
                                            int64_t rax_53 = sx.q(rcx_32)
                                            int32_t* rdx_39
                                            
                                            if (rax_53.d s< 0
                                                    || rax_53.d s>= *(r8_11 + (r10_4 << 3) + 8))
                                                rdx_39 = &data_143a1c6b8
                                            else
                                                rdx_39 = *(r8_11 + (r10_4 << 3)) + (rax_53 << 2)
                                            
                                            int64_t rax_54 = sx.q(*rdx_39)
                                            int32_t var_2e4_2
                                            
                                            if (rax_54.d == rdi_7)
                                                var_2e4_2 = r9_7
                                            else
                                                var_2e4_2 = *(*(r11_3 + 0x38) + rax_54 * 0x18)
                                            
                                            int64_t i_14 = sx.q(i_10)
                                            int32_t* rdx_41
                                            
                                            if (i_14.d s< 0
                                                    || i_14.d s>= *(r8_11 + (r10_4 << 3) + 8))
                                                rdx_41 = &data_143a1c6b8
                                            else
                                                rdx_41 = *(r8_11 + (r10_4 << 3)) + (i_14 << 2)
                                            
                                            int64_t rax_57 = sx.q(*rdx_41)
                                            int32_t r14_5
                                            
                                            if (rax_57.d == rdi_7)
                                                r14_5 = r9_7
                                            else
                                                r14_5 = *(*(r11_3 + 0x38) + rax_57 * 0x18)
                                            
                                            int64_t r10_5 = sx.q(j_17.d) * 5
                                            int64_t rax_60 = sx.q(var_2a0)
                                            int32_t* rdx_43
                                            
                                            if (rax_60.d s< 0
                                                    || rax_60.d s>= *(r8_11 + (r10_5 << 3) + 8))
                                                rdx_43 = &data_143a1c6b8
                                            else
                                                rdx_43 = *(r8_11 + (r10_5 << 3)) + (rax_60 << 2)
                                            
                                            int64_t rax_61 = sx.q(*rdx_43)
                                            int32_t rsi_5
                                            
                                            if (rax_61.d == rdi_7)
                                                rsi_5 = r9_7
                                            else
                                                rsi_5 = *(*(r11_3 + 0x38) + rax_61 * 0x18)
                                            
                                            int64_t rdx_45 = sx.q(var_29c)
                                            int32_t* rcx_53
                                            
                                            if (rdx_45.d s< 0
                                                    || rdx_45.d s>= *(r8_11 + (r10_5 << 3) + 8))
                                                rcx_53 = &data_143a1c6b8
                                            else
                                                rcx_53 = *(r8_11 + (r10_5 << 3)) + (rdx_45 << 2)
                                            
                                            int64_t rax_64 = sx.q(*rcx_53)
                                            
                                            if (rax_64.d != rdi_7)
                                                r9_7 = *(*(r11_3 + 0x38) + rax_64 * 0x18)
                                            
                                            uint128_t zmm4_1 = data_143dbb1fc
                                            uint128_t zmm5_1 = data_143dbb1f8
                                            int64_t rdx_47 = **(var_178 + 0x18)
                                            int64_t rcx_55 = sx.q(var_2e4_2) * 3
                                            zmm2 = zx.o(*(rdx_47 + (rcx_55 << 2)))
                                            zmm15 = *(rdx_47 + (rcx_55 << 2) + 8)
                                            zmm12 = zmm2.d
                                            int64_t rcx_56 = sx.q(r14_5) * 3
                                            zmm1_2 = zx.o(*(rdx_47 + (rcx_56 << 2)))
                                            zmm7 = *(rdx_47 + (rcx_56 << 2) + 8)
                                            uint32_t var_218_1 = zmm1_2.d
                                            zmm6.d = zmm7.d f- zmm15.d
                                            zmm14.d = var_218_1.d f- zmm12.d
                                            zmm10 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                                            int64_t rcx_57 = sx.q(rsi_5) * 3
                                            int32_t rax_72 = *(rdx_47 + (rcx_57 << 2) + 8)
                                            uint64_t var_238_1 = *(rdx_47 + (rcx_57 << 2))
                                            zmm1_2.d = zmm6.d f* zmm6.d
                                            float var_2a4_1 = zmm6.d
                                            int64_t rcx_58 = sx.q(r9_7) * 3
                                            int32_t rax_74 = *(rdx_47 + (rcx_58 << 2) + 8)
                                            uint64_t var_250_1 = *(rdx_47 + (rcx_58 << 2))
                                            zmm0_2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                            zmm8.d = zmm10.d f- zmm0_2.d
                                            uint64_t var_2b0_1 = zmm0_2.q
                                            zmm2.d = zmm14.d f* zmm14.d
                                            zmm0_2.d = zmm8.d f* zmm8.d
                                            zmm2.d = zmm2.d f+ zmm0_2.d
                                            zmm2.d = zmm2.d f+ zmm1_2.d
                                            uint128_t zmm3_1
                                            
                                            if (zmm2.d f== zmm13_1.d)
                                                zmm3_1 = data_143dbb200
                                            else if (zmm2.d f>= 9.99999994e-09f)
                                                zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                                zmm3_1.d = zmm2.d f* 0.5f
                                                zmm0_2.d = zmm5_1.d f* zmm5_1.d
                                                zmm2.d = zmm3_1.d f* zmm0_2.d
                                                zmm1_2.d = 0.5f f- zmm2.d
                                                zmm0_2.d = zmm5_1.d f* zmm1_2.d
                                                zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                                                zmm0_2.d = zmm5_1.d f* zmm5_1.d
                                                zmm3_1.d = zmm3_1.d f* zmm0_2.d
                                                zmm4_1.d = 0.5f f- zmm3_1.d
                                                zmm0_2.d = zmm5_1.d f* zmm4_1.d
                                                zmm4_1 = data_143dbb1fc
                                                zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                                                int32_t var_2e4_3 = zmm5_1.d
                                                zmm1_2.d = zmm5_1.d f* zmm8.d
                                                zmm0_2.d = zmm5_1.d f* zmm6.d
                                                zmm14.d = zmm14.d f* zmm5_1.d
                                                zmm8 = zmm1_2
                                                zmm5_1 = data_143dbb1f8
                                                var_2a4_1 = zmm0_2.d
                                                zmm3_1 = data_143dbb200
                                            else
                                                zmm3_1 = data_143dbb200
                                                zmm14 = zmm5_1
                                                var_2a4_1 = zmm3_1.d
                                                zmm8 = zmm4_1
                                            
                                            zmm6 = rax_72
                                            zmm13_1 = var_238_1:4.d
                                            zmm11.d = zmm6.d f- zmm7.d
                                            zmm7.d = zmm13_1.d f- zmm10.d
                                            zmm10.d = var_238_1.d.d f- var_218_1
                                            zmm1_2.d = zmm11.d f* zmm11.d
                                            zmm0_2.d = zmm7.d f* zmm7.d
                                            zmm2.d = zmm10.d f* zmm10.d
                                            zmm2.d = zmm2.d f+ zmm0_2.d
                                            zmm2.d = zmm2.d f+ zmm1_2.d
                                            
                                            if (not(zmm2.d f== 1f))
                                                if (zmm2.d f>= 9.99999994e-09f)
                                                    zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                                    zmm3_1.d = zmm2.d f* 0.5f
                                                    zmm0_2.d = zmm5_1.d f* zmm5_1.d
                                                    zmm2.d = zmm3_1.d f* zmm0_2.d
                                                    zmm1_2.d = 0.5f f- zmm2.d
                                                    zmm0_2.d = zmm5_1.d f* zmm1_2.d
                                                    zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                                                    zmm0_2.d = zmm5_1.d f* zmm5_1.d
                                                    zmm3_1.d = zmm3_1.d f* zmm0_2.d
                                                    zmm4_1.d = 0.5f f- zmm3_1.d
                                                    zmm0_2.d = zmm5_1.d f* zmm4_1.d
                                                    zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                                                    int32_t var_2e4_4 = zmm5_1.d
                                                    zmm0_2.d = zmm5_1.d f* zmm11.d
                                                    zmm1_2.d = zmm5_1.d f* zmm7.d
                                                    zmm11 = zmm0_2
                                                    zmm10.d = zmm10.d f* zmm5_1.d
                                                    zmm7 = zmm1_2
                                                else
                                                    zmm10 = zmm5_1
                                                    zmm7 = zmm4_1
                                                    zmm11 = zmm3_1
                                            
                                            zmm3_1.d = rax_74.d f- zmm6.d
                                            zmm6.d = var_250_1:4.d.d f- zmm13_1.d
                                            zmm13_1.d = var_250_1.d.d f- var_238_1.d
                                            int32_t var_2c8_2 = zmm3_1.d
                                            zmm1_2.d = zmm3_1.d f* zmm3_1.d
                                            zmm0_2.d = zmm6.d f* zmm6.d
                                            zmm2.d = zmm13_1.d f* zmm13_1.d
                                            zmm2.d = zmm2.d f+ zmm0_2.d
                                            zmm2.d = zmm2.d f+ zmm1_2.d
                                            
                                            if (zmm2.d f== 1f)
                                                zmm5_1 = data_143dbb1fc
                                                zmm4_1 = data_143dbb200
                                            else if (zmm2.d f>= 9.99999994e-09f)
                                                zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                                zmm3_1.d = zmm2.d f* 0.5f
                                                zmm0_2.d = zmm5_1.d f* zmm5_1.d
                                                zmm2.d = zmm3_1.d f* zmm0_2.d
                                                zmm1_2.d = 0.5f f- zmm2.d
                                                zmm0_2.d = zmm5_1.d f* zmm1_2.d
                                                zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                                                zmm0_2.d = zmm5_1.d f* zmm5_1.d
                                                zmm3_1.d = zmm3_1.d f* zmm0_2.d
                                                zmm4_1.d = 0.5f f- zmm3_1.d
                                                zmm0_2.d = zmm5_1.d f* zmm4_1.d
                                                zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                                                int32_t var_2e4_5 = zmm5_1.d
                                                zmm1_2.d = zmm5_1.d f* zmm6.d
                                                zmm0_2.d = zmm5_1.d f* var_2c8_2
                                                zmm6 = zmm1_2
                                                zmm13_1.d = zmm13_1.d f* zmm5_1.d
                                                var_2c8_2 = zmm0_2.d
                                                zmm5_1 = data_143dbb1fc
                                                zmm4_1 = data_143dbb200
                                            else
                                                zmm5_1 = data_143dbb1fc
                                                zmm4_1 = data_143dbb200
                                                zmm6 = zmm5_1
                                                zmm13_1 = data_143dbb1f8
                                                var_2c8_2 = zmm4_1.d
                                            
                                            zmm3_1.d = var_2b0_1.d f- var_250_1:4.d
                                            zmm15.d = zmm15.d f- rax_74
                                            zmm12.d = zmm12.d f- var_250_1.d
                                            uint32_t var_2b0_2 = zmm3_1.d
                                            zmm0_2.d = zmm3_1.d f* zmm3_1.d
                                            zmm1_2.d = zmm15.d f* zmm15.d
                                            zmm2.d = zmm12.d f* zmm12.d
                                            float var_2e4_6 = zmm15.d
                                            zmm2.d = zmm2.d f+ zmm0_2.d
                                            zmm2.d = zmm2.d f+ zmm1_2.d
                                            
                                            if (not(zmm2.d f== 1f))
                                                if (zmm2.d f>= 9.99999994e-09f)
                                                    zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
                                                    zmm3_1.d = zmm2.d f* 0.5f
                                                    zmm0_2.d = zmm5_1.d f* zmm5_1.d
                                                    zmm2.d = zmm3_1.d f* zmm0_2.d
                                                    zmm1_2.d = 0.5f f- zmm2.d
                                                    zmm0_2.d = zmm5_1.d f* zmm1_2.d
                                                    zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                                                    zmm0_2.d = zmm5_1.d f* zmm5_1.d
                                                    zmm3_1.d = zmm3_1.d f* zmm0_2.d
                                                    zmm4_1.d = 0.5f f- zmm3_1.d
                                                    zmm0_2.d = zmm5_1.d f* zmm4_1.d
                                                    zmm5_1.d = zmm5_1.d f+ zmm0_2.d
                                                    int32_t var_2e4_7 = zmm5_1.d
                                                    zmm1_2.d = zmm5_1.d f* var_2b0_2
                                                    zmm0_2.d = zmm5_1.d f* zmm15.d
                                                    zmm3_1 = zmm1_2
                                                    var_2b0_2 = zmm1_2.d
                                                    zmm12.d = zmm12.d f* zmm5_1.d
                                                    var_2e4_6 = zmm0_2.d
                                                    zmm15 = zmm0_2
                                                else
                                                    zmm12 = data_143dbb1f8
                                                    zmm3_1 = zmm5_1
                                                    var_2e4_6 = zmm4_1.d
                                                    zmm15 = zmm4_1
                                                    var_2b0_2 = zmm5_1.d
                                            
                                            zmm0_2.d = zmm14.d f* zmm12.d
                                            zmm2.d = zmm8.d f* zmm3_1.d
                                            zmm1_2.d = var_2a4_1.d f* zmm15.d
                                            zmm2.d = zmm2.d f+ zmm0_2.d
                                            zmm2.d = zmm2.d f+ zmm1_2.d
                                            zmm2 ^= data_142d3f780
                                            
                                            if (zmm2.d f>= -1f)
                                                zmm2 = __minss_xmmss_memss(zmm2.d, 0x3f800000)
                                            else
                                                zmm2 = 0xbf800000
                                            
                                            zmm15.d = 1.57079637f - acosf(zmm2.d)
                                            zmm8.d = zmm8.d f* zmm7.d
                                            zmm15 = __andps_xmmxud_memxud(zmm15, data_142d3f770)
                                            zmm14.d = zmm14.d f* zmm10.d
                                            zmm8.d = zmm8.d f+ zmm14.d
                                            zmm8.d = zmm8.d f+ var_2a4_1 f* zmm11.d
                                            zmm8 ^= data_142d3f780
                                            
                                            if (zmm8.d f>= -1f)
                                                zmm8 = __minss_xmmss_memss(zmm8.d, 0x3f800000)
                                            else
                                                zmm8 = 0xbf800000
                                            
                                            zmm14 = var_2c8_2
                                            zmm7.d = zmm7.d f* zmm6.d
                                            zmm8.d = 1.57079637f - acosf(zmm8.d)
                                            zmm11.d = zmm11.d f* zmm14.d
                                            zmm10.d = zmm10.d f* zmm13_1.d
                                            zmm8 = __andps_xmmxud_memxud(zmm8, data_142d3f770)
                                            zmm7.d = zmm7.d f+ zmm10.d
                                            zmm7.d = zmm7.d f+ zmm11.d
                                            zmm7 ^= data_142d3f780
                                            
                                            if (zmm7.d f>= -1f)
                                                zmm7 = __minss_xmmss_memss(zmm7.d, 0x3f800000)
                                            else
                                                zmm7 = 0xbf800000
                                            
                                            zmm6.d = zmm6.d f* var_2b0_2
                                            zmm12.d = zmm12.d f* zmm13_1.d
                                            zmm10.d = 1.57079637f - acosf(zmm7.d)
                                            zmm6.d = zmm6.d f+ zmm12.d
                                            zmm10 = __andps_xmmxud_memxud(zmm10, data_142d3f770)
                                            zmm6.d = zmm6.d f+ var_2e4_6 f* zmm14.d
                                            zmm6 ^= data_142d3f780
                                            
                                            if (zmm6.d f>= -1f)
                                                zmm6 = _mm_min_ss(zmm6.d, 0x3f800000)
                                            else
                                                zmm6 = 0xbf800000
                                            
                                            zmm7.d = 1.57079637f - acosf(zmm6.d)
                                            zmm7 = __andps_xmmxud_memxud(zmm7, data_142d3f770)
                                            
                                            if (zmm9.d f>= -1f)
                                                zmm9 = _mm_min_ss(zmm9.d, 0x3f800000)
                                            else
                                                zmm9 = 0xbf800000
                                            
                                            uint128_t zmm0_8 = acosf(zmm9.d)
                                            int32_t rax_75 = data_143991178
                                            zmm8.d = zmm8.d f+ zmm15.d
                                            zmm8.d = zmm8.d f+ zmm10.d
                                            zmm8.d = zmm8.d f+ zmm7.d
                                            zmm6.d = zmm0_8.d f+ zmm8.d
                                            zmm7 = __minss_xmmss_memss(zmm6.d, var_2a8)
                                            
                                            if (var_264.d f> zmm6.d)
                                                i_1 = rbx_2.d
                                            
                                            var_264 = zmm7.d
                                            void* r8_13
                                            
                                            if (rax_75 == data_1439911a4)
                                            label_1409d3a0d:
                                                void* rax_81 = sub_1409997e0(&data_143991170, 
                                                    rbx_2.d, &var_2e0)
                                                rbx_2 = zx.q(var_2e0)
                                                r8_13 = rax_81
                                                j_17 = zx.q(j_8)
                                            else
                                                void* rax_76 = data_1439911b0
                                                void* rdx_48 = &data_1439911a8
                                                
                                                if (rax_76 != 0)
                                                    rdx_48 = rax_76
                                                
                                                int32_t rax_80 = *(rdx_48 + ((
                                                    sx.q(data_1439911b8 - 1) & sx.q(rbx_2.d)) << 2))
                                                
                                                if (rax_80 == 0xffffffff)
                                                    goto label_1409d3a0d
                                                
                                                int64_t rdi_9 = data_143991170
                                                int32_t* rdx_49
                                                
                                                while (true)
                                                    rdx_49 = sx.q(rax_80) * 0x88
                                                    
                                                    if (*(rdx_49 + rdi_9) == rbx_2.d)
                                                        break
                                                    
                                                    rax_80 = *(rdx_49 + rdi_9 + 0x80)
                                                    
                                                    if (rax_80 == 0xffffffff)
                                                        goto label_1409d3a0d
                                                
                                                if (rax_80 == 0xffffffff)
                                                    goto label_1409d3a0d
                                                
                                                void* r8_16 = rdx_49 + rdi_9
                                                
                                                if (r8_16 == 0)
                                                    goto label_1409d3a0d
                                                
                                                r8_13 = r8_16 + 4
                                            
                                            int64_t rdi_10 = 0
                                            int32_t r14_6 = var_29c
                                            int64_t rdx_51 = sx.q(*(r8_13 + 0x78))
                                            int32_t i_13 = i_10
                                            int32_t rbx_3 = var_2a0
                                            int32_t var_204_1 = rcx_32
                                            var_10c.q = rbx_2.d.q
                                            int32_t var_1d4_1 = rbx_3
                                            var_100 = j_17.d.q
                                            int32_t var_1f4_1 = r14_6
                                            var_108 = rbx_2.d.q
                                            int32_t rcx_64 = 0
                                            var_f4.q = j_17.d.q
                                            int64_t var_f0
                                            var_f0:4.d = zmm6.d
                                            int32_t var_110_1 = j_17.d
                                            
                                            if (rdx_51.d s> 0)
                                                int32_t* rax_85 = r8_13 + 0x24
                                                
                                                while (not(zmm6.d f<= *rax_85))
                                                    rdi_10 += 1
                                                    rcx_64 += 1
                                                    rax_85 = &rax_85[0xa]
                                                    
                                                    if (rcx_64 s>= rdx_51.d)
                                                        break
                                            
                                            if (rdx_51 s> rdi_10)
                                                int64_t j_12 = rdx_51 - rdi_10
                                                void* rcx_65 = r8_13 + rdx_51 * 0x28
                                                int64_t j
                                                
                                                do
                                                    zmm1_2 = *(rcx_65 - 0x18)
                                                    *rcx_65 = *(rcx_65 - 0x28)
                                                    zmm0_8 = zx.o(*(rcx_65 - 8))
                                                    *(rcx_65 + 0x10) = zmm1_2
                                                    *(rcx_65 + 0x20) = zmm0_8.q
                                                    rcx_65 -= 0x28
                                                    j = j_12
                                                    j_12 -= 1
                                                while (j != 1)
                                            
                                            int64_t rax_87 = rdi_10 * 5
                                            *(r8_13 + (rax_87 << 3)) = var_110_1.o
                                            *(r8_13 + (rax_87 << 3) + 0x10) = var_100.o
                                            *(r8_13 + (rax_87 << 3) + 0x20) = var_f0
                                            *(r8_13 + 0x78) += 1
                                            int64_t j_16 = sx.q(j_8)
                                            void* r8_15
                                            
                                            if (data_143991178 == data_1439911a4)
                                            label_1409d3b9b:
                                                void* rax_93 =
                                                    sub_1409997e0(&data_143991170, j_16.d, &j_8)
                                                j_16 = zx.q(j_8)
                                                r8_15 = rax_93
                                            else
                                                void* rax_89 = data_1439911b0
                                                void* rdi_11 = &data_1439911a8
                                                
                                                if (rax_89 != 0)
                                                    rdi_11 = rax_89
                                                
                                                int32_t rax_92 = *(rdi_11
                                                    + ((sx.q(data_1439911b8 - 1) & j_16) << 2))
                                                
                                                if (rax_92 == 0xffffffff)
                                                    goto label_1409d3b9b
                                                
                                                int32_t* rdi_12 = data_143991170
                                                
                                                while (rdi_12[sx.q(rax_92) * 0x22] != j_16.d)
                                                    rax_92 = rdi_12[sx.q(rax_92) * 0x22 + 0x20]
                                                    
                                                    if (rax_92 == 0xffffffff)
                                                        goto label_1409d3b9b
                                                
                                                if (rax_92 == 0xffffffff)
                                                    goto label_1409d3b9b
                                                
                                                void* r8_17 = &rdi_12[sx.q(rax_92) * 0x22]
                                                
                                                if (r8_17 == 0)
                                                    goto label_1409d3b9b
                                                
                                                r8_15 = r8_17 + 4
                                            
                                            int32_t rcx_70 = var_2e0
                                            i = i_10
                                            int32_t var_1f0_1 = j_16.d
                                            var_298.d = rcx_70
                                            int32_t var_1e4_1 = r14_6
                                            int32_t var_1dc_1 = rcx_32
                                            var_108 = j_16.d.q
                                            int64_t rdx_53 = sx.q(*(r8_15 + 0x78))
                                            int32_t var_1ec_1 = rbx_3
                                            var_100 = rcx_70.q
                                            var_298:4.d = i
                                            int32_t rcx_71 = 0
                                            var_10c.q = var_1f0_1.q
                                            int64_t rdi_14 = 0
                                            var_f4.q = var_298
                                            var_f0:4.d = zmm6.d
                                            
                                            if (rdx_53.d s> 0)
                                                int32_t* rax_96 = r8_15 + 0x24
                                                
                                                while (not(zmm6.d f<= *rax_96))
                                                    rdi_14 += 1
                                                    rcx_71 += 1
                                                    rax_96 = &rax_96[0xa]
                                                    
                                                    if (rcx_71 s>= rdx_53.d)
                                                        break
                                            
                                            if (rdx_53 s> rdi_14)
                                                int64_t j_13 = rdx_53 - rdi_14
                                                void* rcx_72 = r8_15 + rdx_53 * 0x28
                                                int64_t j_1
                                                
                                                do
                                                    zmm1_2 = *(rcx_72 - 0x18)
                                                    *rcx_72 = *(rcx_72 - 0x28)
                                                    zmm0_8 = zx.o(*(rcx_72 - 8))
                                                    *(rcx_72 + 0x10) = zmm1_2
                                                    *(rcx_72 + 0x20) = zmm0_8.q
                                                    rcx_72 -= 0x28
                                                    j_1 = j_13
                                                    j_13 -= 1
                                                while (j_1 != 1)
                                            
                                            result = rdi_14 * 5
                                            *(r8_15 + (result << 3)) = rcx_70.o
                                            *(r8_15 + (result << 3) + 0x10) = var_100.o
                                            *(r8_15 + (result << 3) + 0x20) = var_f0
                                            *(r8_15 + 0x78) += 1
                                            r14 = arg1
                                else
                                    void* rax_31 = data_1439911b0
                                    void* rdx_18 = &data_1439911a8
                                    
                                    if (rax_31 != 0)
                                        rdx_18 = rax_31
                                    
                                    int32_t rax_35 = *(rdx_18
                                        + ((sx.q(data_1439911b8 - 1) & sx.q(var_2e0)) << 2))
                                    
                                    if (rax_35 == 0xffffffff)
                                        goto label_1409d2f87
                                    
                                    int64_t rdi_6 = data_143991170
                                    int64_t r9_5
                                    
                                    while (true)
                                        r9_5 = sx.q(rax_35)
                                        int32_t* rdx_19 = r9_5 * 0x88
                                        
                                        if (*(rdx_19 + rdi_6) == var_2e0)
                                            break
                                        
                                        rax_35 = *(rdx_19 + rdi_6 + 0x80)
                                        
                                        if (rax_35 == 0xffffffff)
                                            goto label_1409d2f87
                                    
                                    if (rax_35 == 0xffffffff)
                                        goto label_1409d2f87
                                    
                                    void* rdx_26 = r9_5 * 0x88
                                    void* rdx_27 = rdx_26 + rdi_6
                                    
                                    if (rdx_26 == neg.q(rdi_6))
                                        goto label_1409d2f87
                                    
                                    result = rdx_27 + 4
                                    
                                    if (result == 0)
                                        goto label_1409d2f87
                                    
                                    int64_t rdx_28 = sx.q(*(rdx_27 + 0x7c))
                                    int64_t rcx_36 = 0
                                    
                                    if (rdx_28 s<= 0)
                                        goto label_1409d2f87
                                    
                                    while (*result != j_2)
                                        rcx_36 += 1
                                        result = &result[5]
                                        
                                        if (rcx_36 s>= rdx_28)
                                            goto label_1409d2f87
                                    
                                    r14 = arg1
                                
                                break
                            
                            r14 = arg1
                            rsi_2 += 1
                            
                            if (rsi_2 s>= 2)
                                goto label_1409d2d5f
                    rdx_7 = var_2c0_1
                
                i += 1
                rdx_7 += 1
                i_10 = i
                var_2c0_1 = rdx_7
            while (i s< 3)
        
        rcx_10 = &var_258[1]
        var_258 = rcx_10
    while (rcx_10 != result_1)
    
    zmm8 = 0x7f7fffff
    rsi = zx.q(var_2b4)
    r15 = var_240

if (i_1 != data_143a1c6c8)
    if (data_143ceef90 s> *(r15 + 0x14))
        _Init_thread_header(&data_143ceef90)
        
        if (data_143ceef90 == 0xffffffff)
            atexit(sub_142cb9710)
            _Init_thread_footer(&data_143ceef90)
    
    sub_1409d9b00(&data_143ceef80, 0)
    
    if (data_143ceefa8 s> *(r15 + 0x14))
        _Init_thread_header(&data_143ceefa8)
        
        if (data_143ceefa8 == 0xffffffff)
            atexit(sub_142cb9450)
            _Init_thread_footer(&data_143ceefa8)
    
    int32_t rax_25 = data_143ceefa4
    data_143ceefa0 = 0
    
    if (rax_25 s< 0 && rax_25 != 0)
        sub_1405dadb0(&data_143ceef98, 0)
    
    if (data_143ceefac s> *(r15 + 0x14))
        _Init_thread_header(&data_143ceefac)
        
        if (data_143ceefac == 0xffffffff)
            atexit(sub_142cb7f30)
            _Init_thread_footer(&data_143ceefac)
    
    sub_1409d9c70(&data_1439911c0)
    char* var_2f0
    
    while (true)
        int32_t r9_3 = data_143991178
        int32_t r9_4 = r9_3 - data_1439911a4
        int32_t* rdi_5 = data_143991170
        int32_t r10_2 = data_1439911b8
        void* r8_7 = data_1439911b0
        void* r13_2
        
        if (r9_3 == data_1439911a4)
        label_1409d3d01:
            r13_2 = nullptr
        else
            void* rdx_15 = &data_1439911a8
            
            if (r8_7 != 0)
                rdx_15 = r8_7
            
            int32_t rax_29 = *(rdx_15 + ((sx.q(r10_2 - 1) & sx.q(i_1)) << 2))
            
            if (rax_29 == 0xffffffff)
            label_1409d3d01_1:
                r13_2 = nullptr
            else
                while (rdi_5[sx.q(rax_29) * 0x22] != i_1)
                    rax_29 = rdi_5[sx.q(rax_29) * 0x22 + 0x20]
                    
                    if (rax_29 == 0xffffffff)
                        goto label_1409d3d01_2
                
                r13_2 = &rdi_5[sx.q(rax_29) * 0x22]
                
                if (rax_29 == 0xffffffff)
                label_1409d3d01_2:
                    r13_2 = nullptr
        
        int64_t rbx_4 = sx.q(*(r13_2 + 4))
        var_2a8 = rbx_4.d
        void* var_2b0_3 = r13_2 + 4
        void* rax_101
        
        if (r9_4 == 0)
        label_1409d3d66:
            rax_101 = nullptr
        else
            void* rdx_54 = &data_1439911a8
            
            if (r8_7 != 0)
                rdx_54 = r8_7
            
            int32_t rax_100 = *(rdx_54 + ((sx.q(r10_2 - 1) & rbx_4) << 2))
            
            if (rax_100 == 0xffffffff)
            label_1409d3d66_1:
                rax_101 = nullptr
            else
                while (rdi_5[sx.q(rax_100) * 0x22] != rbx_4.d)
                    rax_100 = rdi_5[sx.q(rax_100) * 0x22 + 0x20]
                    
                    if (rax_100 == 0xffffffff)
                        goto label_1409d3d66_2
                
                rax_101 = &rdi_5[sx.q(rax_100) * 0x22]
                
                if (rax_100 == 0xffffffff)
                label_1409d3d66_2:
                    rax_101 = nullptr
        
        int64_t rdi_15 = sx.q(data_143ceef88)
        var_298 = rax_101 + 4
        int32_t rax_103 = (rdi_15 + 1).d
        bool cond:8_1 = rax_103 s<= data_143ceef8c
        data_143ceef88 = rax_103
        
        if (not(cond:8_1))
            sub_1405c4e40(&data_143ceef80)
        
        int32_t* rcx_78 = (rdi_15 << 5) + data_143ceef80
        *rcx_78 = data_143a1c6c4
        *(rcx_78 + 8) = 0
        *(rcx_78 + 0x10) = 0
        rcx_78[6] = data_143a1c6c8
        rcx_78[7].b = 0
        int32_t* rcx_81 = (sx.q(data_143ceef88 - 1) << 5) + data_143ceef80
        *rcx_81 = rsi.d
        int32_t rax_108 = rcx_81[5]
        void* r15_2 = *(rcx_81 + 8)
        int32_t i_12 = rcx_81[4]
        
        if (rax_108 s< 4)
            if (i_12 != 0)
                void* r15_4 = r15_2 + 8
                int32_t i_2
                
                do
                    int64_t rcx_83 = *r15_4
                    
                    if (rcx_83 != 0)
                        sub_140a74f90(rcx_83)
                    
                    r15_4 += 0x18
                    i_2 = i_12
                    i_12 -= 1
                while (i_2 != 1)
                rax_108 = rcx_81[5]
            
            rcx_81[4] = 0
            
            if (rax_108 != 4)
                sub_1405a5130(&rcx_81[2], 4)
        else
            if (i_12 != 0)
                int64_t* r15_3 = r15_2 + 8
                int32_t i_3
                
                do
                    int64_t rcx_82 = *r15_3
                    
                    if (rcx_82 != 0)
                        sub_140a74f90(rcx_82)
                    
                    r15_3 = &r15_3[3]
                    i_3 = i_12
                    i_12 -= 1
                while (i_3 != 1)
            
            rcx_81[4] = 0
        
        void* r15_5 = r13_2 + 8
        int64_t i_11 = 4
        int64_t i_4
        
        do
            int64_t r14_7 = sx.q(rcx_81[4])
            int32_t rax_109 = (r14_7 + 1).d
            rcx_81[4] = rax_109
            
            if (rax_109 s> rcx_81[5])
                sub_1405a4df0(&rcx_81[2])
            
            int64_t rcx_86 = r14_7 * 3
            int64_t rdx_58 = *(rcx_81 + 8)
            *(rdx_58 + (rcx_86 << 3)) = data_143a1c6b8
            *(rdx_58 + (rcx_86 << 3) + 4) = data_143a1c6b4
            *(rdx_58 + (rcx_86 << 3) + 8) = 0
            *(rdx_58 + (rcx_86 << 3) + 0x10) = 0
            int64_t rdx_59 = sx.q(*(r15_5 + 4))
            int64_t rcx_87 = arg1[5][0x1c]
            int64_t r8_18 = sx.q(*r15_5) * 5
            int32_t* rdx_60
            
            if (rdx_59.d s< 0 || rdx_59.d s>= *(rcx_87 + (r8_18 << 3) + 8))
                rdx_60 = &data_143a1c6b8
            else
                rdx_60 = *(rcx_87 + (r8_18 << 3)) + (rdx_59 << 2)
            
            r15_5 += 8
            *(*(rcx_81 + 8) + sx.q(rcx_81[4]) * 0x18 - 0x18) = *rdx_60
            i_4 = i_11
            i_11 -= 1
        while (i_4 != 1)
        int64_t rdi_17 = sx.q(data_143ceefa0)
        int64_t rbx_5 = sx.q(var_2a8)
        int32_t rax_116 = (rdi_17 + 1).d
        bool cond:9_1 = rax_116 s<= data_143ceefa4
        data_143ceefa0 = rax_116
        
        if (not(cond:9_1))
            sub_1405a4cf0(&data_143ceef98)
        
        *(data_143ceef98 + (rdi_17 << 2)) = i_1
        int64_t rdi_18 = sx.q(data_143ceefa0)
        int32_t rax_118 = (rdi_18 + 1).d
        bool cond:10_1 = rax_118 s<= data_143ceefa4
        data_143ceefa0 = rax_118
        
        if (not(cond:10_1))
            sub_1405a4cf0(&data_143ceef98)
        
        *(data_143ceef98 + (rdi_18 << 2)) = rbx_5.d
        int32_t r9_9 = data_1439911c8
        int32_t r11_4 = data_1439911f4
        void* r8_19 = data_143991200
        int64_t rdi_19 = data_1439911c0
        
        if (r9_9 != r11_4)
            void* r10_7 = &data_1439911f8
            int64_t r14_8 = sx.q(data_143991208 - 1)
            
            if (r8_19 != 0)
                r10_7 = r8_19
            
            int64_t rax_123 = sx.q(i_1) & r14_8
            void* rdx_63 = r10_7 + (rax_123 << 2)
            int32_t i_5 = *(r10_7 + (rax_123 << 2))
            
            while (i_5 != 0xffffffff)
                int64_t rcx_89 = sx.q(i_5) * 3
                
                if (*(rdi_19 + (rcx_89 << 2)) == i_1)
                    int64_t rdx_65 = sx.q(*rdx_63)
                    int64_t r8_20 = rdx_65 * 3
                    int64_t rax_126 = sx.q(*(rdi_19 + (r8_20 << 2) + 8)) & r14_8
                    void* rcx_90 = r10_7 + (rax_126 << 2)
                    int32_t j_3 = *(r10_7 + (rax_126 << 2))
                    
                    while (j_3 != 0xffffffff)
                        if (j_3 == rdx_65.d)
                            *rcx_90 = *(rdi_19 + (r8_20 << 2) + 4)
                            break
                        
                        int64_t j_9 = sx.q(j_3)
                        j_3 = *(rdi_19 + ((j_9 * 3 + 1) << 2))
                        rcx_90 = rdi_19 + ((j_9 * 3 + 1) << 2)
                    
                    sub_14090a460(&data_1439911c0, rdx_65.d, 1)
                    r8_19 = data_143991200
                    r11_4 = data_1439911f4
                    r9_9 = data_1439911c8
                    rdi_19 = data_1439911c0
                    break
                
                i_5 = *(rdi_19 + 4 + (rcx_89 << 2))
                rdx_63 = rdi_19 + 4 + (rcx_89 << 2)
            
            if (r9_9 != r11_4)
                void* r9_10 = &data_1439911f8
                int64_t r10_8 = sx.q(data_143991208 - 1)
                
                if (r8_19 != 0)
                    r9_10 = r8_19
                
                int64_t rax_131 = rbx_5 & r10_8
                void* rdx_66 = r9_10 + (rax_131 << 2)
                int32_t i_6 = *(r9_10 + (rax_131 << 2))
                
                while (i_6 != 0xffffffff)
                    int64_t rcx_93 = sx.q(i_6) * 3
                    
                    if (*(rdi_19 + (rcx_93 << 2)) == rbx_5.d)
                        int64_t rdx_68 = sx.q(*rdx_66)
                        int64_t r8_21 = rdx_68 * 3
                        int64_t rax_134 = sx.q(*(rdi_19 + (r8_21 << 2) + 8)) & r10_8
                        void* rcx_94 = r9_10 + (rax_134 << 2)
                        int32_t j_4 = *(r9_10 + (rax_134 << 2))
                        
                        while (j_4 != 0xffffffff)
                            if (j_4 == rdx_68.d)
                                *rcx_94 = *(rdi_19 + (r8_21 << 2) + 4)
                                break
                            
                            int64_t j_10 = sx.q(j_4)
                            j_4 = *(rdi_19 + ((j_10 * 3 + 1) << 2))
                            rcx_94 = rdi_19 + ((j_10 * 3 + 1) << 2)
                        
                        sub_14090a460(&data_1439911c0, rdx_68.d, 1)
                        break
                    
                    i_6 = *(rdi_19 + ((rcx_93 + 1) << 2))
                    rdx_66 = rdi_19 + ((rcx_93 + 1) << 2)
        
        int32_t i_7 = 0
        void* r14_9 = var_2b0_3
        int32_t rdx_69 = 0
        int64_t rcx_97 = 0
        int32_t rdi_20 = *(r13_2 + 0x7c)
        uint128_t zmm0_1
        uint128_t zmm1_1
        
        if (rdi_20 s> 0)
            void* rax_136 = r14_9
            
            do
                rdx_69 += 1
                rcx_97 += 1
                
                if (*rax_136 == rbx_5.d)
                    int32_t rax_138
                    
                    if (rdx_69 s>= rdi_20)
                        rax_138 = rdi_20
                    else
                        void* rcx_99 = r13_2 + 4 + rcx_97 * 0x28
                        
                        do
                            rdx_69 += 1
                            zmm1_1 = *(rcx_99 + 0x10)
                            *(rcx_99 - 0x28) = *rcx_99
                            zmm0_1 = zx.o(*(rcx_99 + 0x20))
                            *(rcx_99 - 0x18) = zmm1_1
                            *(rcx_99 - 8) = zmm0_1.q
                            rcx_99 += 0x28
                            rax_138 = *(r13_2 + 0x7c)
                        while (rdx_69 s< rax_138)
                    
                    *(r13_2 + 0x7c) = rax_138 - 1
                    break
                
                rax_136 += 0x28
            while (rdx_69 s< rdi_20)
        
        int32_t rdx_70 = 0
        int64_t rcx_100 = 0
        int32_t rdi_21 = *(rax_101 + 0x7c)
        
        if (rdi_21 s> 0)
            void* rax_140 = var_298
            
            do
                rdx_70 += 1
                rcx_100 += 1
                
                if (*rax_140 == i_1)
                    int32_t rax_142
                    
                    if (rdx_70 s>= rdi_21)
                        rax_142 = rdi_21
                    else
                        void* rcx_102 = rax_101 + 4 + rcx_100 * 0x28
                        
                        do
                            rdx_70 += 1
                            zmm1_1 = *(rcx_102 + 0x10)
                            *(rcx_102 - 0x28) = *rcx_102
                            zmm0_1 = zx.o(*(rcx_102 + 0x20))
                            *(rcx_102 - 0x18) = zmm1_1
                            *(rcx_102 - 8) = zmm0_1.q
                            rcx_102 += 0x28
                            rax_142 = *(rax_101 + 0x7c)
                        while (rdx_70 s< rax_142)
                    
                    *(rax_101 + 0x7c) = rax_142 - 1
                    break
                
                rax_140 += 0x28
            while (rdx_70 s< rdi_21)
        
        if (data_143ceefc0 s> *(var_240 + 0x14))
            _Init_thread_header(&data_143ceefc0)
            
            if (data_143ceefc0 == 0xffffffff)
                atexit(&data_142cb7910)
                _Init_thread_footer(&data_143ceefc0)
        
        bool cond:13_1 = data_143ceefbc s>= 0
        data_143ceefb8 = 0
        
        if (not(cond:13_1))
            sub_1405dadb0(&data_143ceefb0, 0)
        
        if (*(r13_2 + 0x7c) s> 0)
            int64_t r9_11 = data_143991170
            
            do
                int64_t rdi_22 = sx.q(*r14_9)
                
                if (data_143991178 != data_1439911a4)
                    void* rax_147 = data_1439911b0
                    void* rdx_71 = &data_1439911a8
                    
                    if (rax_147 != 0)
                        rdx_71 = rax_147
                    
                    int32_t* rcx_105
                    
                    for (int32_t j_5 = *(rdx_71 + ((sx.q(data_1439911b8 - 1) & rdi_22) << 2)); 
                            j_5 != 0xffffffff; j_5 = *(rcx_105 + r9_11 + 0x80))
                        int64_t j_14 = sx.q(j_5)
                        rcx_105 = j_14 * 0x88
                        
                        if (*(rcx_105 + r9_11) == rdi_22.d)
                            if (j_5 != 0xffffffff)
                                void* r8_23 = j_14 * 0x88
                                void* r8_24 = r8_23 + r9_11
                                
                                if (r8_23 != neg.q(r9_11))
                                    void* rax_150 = r8_24 + 4
                                    
                                    if (rax_150 != 0)
                                        int32_t rcx_106 = *(r8_24 + 0x7c)
                                        int32_t rdx_72 = 0
                                        int64_t r9_12 = 0
                                        
                                        if (rcx_106 s<= 0)
                                        label_1409d4356:
                                            int64_t r14_10 = sx.q(data_143ceefb8)
                                            int32_t rax_153 = (r14_10 + 1).d
                                            bool cond:19_1 = rax_153 s<= data_143ceefbc
                                            data_143ceefb8 = rax_153
                                            
                                            if (not(cond:19_1))
                                                sub_1405a4cf0(&data_143ceefb0)
                                            
                                            *(data_143ceefb0 + (r14_10 << 2)) = rdi_22.d
                                            r14_9 = var_2b0_3
                                        else
                                            do
                                                rdx_72 += 1
                                                r9_12 += 1
                                                
                                                if (*rax_150 == i_1)
                                                    int32_t rax_152
                                                    
                                                    if (rdx_72 s>= rcx_106)
                                                        rax_152 = rcx_106
                                                    else
                                                        void* rcx_108 = r9_12 * 0x28 + 4 + r8_24
                                                        
                                                        do
                                                            rdx_72 += 1
                                                            zmm1_1 = *(rcx_108 + 0x10)
                                                            *(rcx_108 - 0x28) = *rcx_108
                                                            zmm0_1 = zx.o(*(rcx_108 + 0x20))
                                                            *(rcx_108 - 0x18) = zmm1_1
                                                            *(rcx_108 - 8) = zmm0_1.q
                                                            rcx_108 += 0x28
                                                            rax_152 = *(r8_24 + 0x7c)
                                                        while (rdx_72 s< rax_152)
                                                    
                                                    rcx_106 = rax_152 - 1
                                                    *(r8_24 + 0x7c) = rcx_106
                                                    break
                                                
                                                rax_150 += 0x28
                                            while (rdx_72 s< rcx_106)
                                            
                                            if (rcx_106 s<= 0)
                                                goto label_1409d4356
                                            
                                            sub_1409afd50(&data_1439911c0, &var_1d0)
                                            int32_t* rcx_109 = var_1c8.q
                                            int32_t rax_155 = var_1d0.d
                                            var_2f0 = nullptr
                                            *rcx_109 = rdi_22.d
                                            rcx_109[1] = 0xffffffff
                                            sub_1409b8a30(&data_1439911c0, &var_29c, rdi_22.d, 
                                                rcx_109, rax_155, var_2f0)
                                        
                                        r9_11 = data_143991170
                            
                            break
                
                r14_9 += 0x28
                i_7 += 1
                var_2b0_3 = r14_9
            while (i_7 s< *(r13_2 + 0x7c))
        
        int64_t rdi_23 = sx.q(data_143ceefb8)
        int32_t rax_156 = (rdi_23 + 1).d
        bool cond:14_1 = rax_156 s<= data_143ceefbc
        data_143ceefb8 = rax_156
        
        if (not(cond:14_1))
            sub_1405a4cf0(&data_143ceefb0)
        
        int64_t r14_11 = 0
        int32_t i_8 = 0
        *(data_143ceefb0 + (rdi_23 << 2)) = i_1
        
        if (*(rax_101 + 0x7c) s> 0)
            int64_t r9_14 = data_143991170
            void* r12_2 = var_298
            
            do
                int64_t rdi_24 = sx.q(*r12_2)
                
                if (data_143991178 != data_1439911a4)
                    void* rax_159 = data_1439911b0
                    void* rdx_77 = &data_1439911a8
                    
                    if (rax_159 != 0)
                        rdx_77 = rax_159
                    
                    int32_t* rcx_112
                    
                    for (int32_t j_6 = *(rdx_77 + ((sx.q(data_1439911b8 - 1) & rdi_24) << 2)); 
                            j_6 != 0xffffffff; j_6 = *(rcx_112 + r9_14 + 0x80))
                        int64_t j_15 = sx.q(j_6)
                        rcx_112 = j_15 * 0x88
                        
                        if (*(rcx_112 + r9_14) == rdi_24.d)
                            if (j_6 != 0xffffffff)
                                void* r8_26 = j_15 * 0x88
                                void* r8_27 = r8_26 + r9_14
                                
                                if (r8_26 != neg.q(r9_14))
                                    int32_t* rax_162 = r8_27 + 4
                                    
                                    if (rax_162 != 0)
                                        int32_t rcx_113 = *(r8_27 + 0x7c)
                                        int32_t rdx_78 = 0
                                        int64_t r9_15 = 0
                                        
                                        if (rcx_113 s<= 0)
                                        label_1409d4546:
                                            int64_t r14_12 = sx.q(data_143ceefb8)
                                            int32_t rax_165 = (r14_12 + 1).d
                                            bool cond:22_1 = rax_165 s<= data_143ceefbc
                                            data_143ceefb8 = rax_165
                                            
                                            if (not(cond:22_1))
                                                sub_1405a4cf0(&data_143ceefb0)
                                            
                                            *(data_143ceefb0 + (r14_12 << 2)) = rdi_24.d
                                            r14_11 = 0
                                        else
                                            do
                                                rdx_78 += 1
                                                r9_15 += 1
                                                
                                                if (*rax_162 == rbx_5.d)
                                                    int32_t rax_164
                                                    
                                                    if (rdx_78 s>= rcx_113)
                                                        rax_164 = rcx_113
                                                    else
                                                        void* rcx_115 = r9_15 * 0x28 + 4 + r8_27
                                                        
                                                        do
                                                            rdx_78 += 1
                                                            zmm1_1 = *(rcx_115 + 0x10)
                                                            *(rcx_115 - 0x28) = *rcx_115
                                                            zmm0_1 = zx.o(*(rcx_115 + 0x20))
                                                            *(rcx_115 - 0x18) = zmm1_1
                                                            *(rcx_115 - 8) = zmm0_1.q
                                                            rcx_115 += 0x28
                                                            rax_164 = *(r8_27 + 0x7c)
                                                        while (rdx_78 s< rax_164)
                                                    
                                                    rcx_113 = rax_164 - 1
                                                    *(r8_27 + 0x7c) = rcx_113
                                                    break
                                                
                                                rax_162 = &rax_162[0xa]
                                            while (rdx_78 s< rcx_113)
                                            
                                            if (rcx_113 s<= 0)
                                                goto label_1409d4546
                                            
                                            sub_1409afd50(&data_1439911c0, &var_228)
                                            int32_t* rcx_116 = var_220.q
                                            int32_t rax_167 = var_228
                                            var_2f0 = nullptr
                                            *rcx_116 = rdi_24.d
                                            rcx_116[1] = 0xffffffff
                                            sub_1409b8a30(&data_1439911c0, &var_2a0, rdi_24.d, 
                                                rcx_116, rax_167, var_2f0)
                                        
                                        r9_14 = data_143991170
                            
                            break
                
                i_8 += 1
                r12_2 += 0x28
            while (i_8 s< *(rax_101 + 0x7c))
        
        int64_t rdi_25 = sx.q(data_143ceefb8)
        int32_t rax_168 = (rdi_25 + 1).d
        bool cond:15_1 = rax_168 s<= data_143ceefbc
        data_143ceefb8 = rax_168
        
        if (not(cond:15_1))
            sub_1405a4cf0(&data_143ceefb0)
        
        *(data_143ceefb0 + (rdi_25 << 2)) = rbx_5.d
        int32_t* rbx_6 = data_143ceefb0
        void* rcx_117 = &rbx_6[sx.q(data_143ceefb8)]
        uint64_t r15_9 = (rcx_117 - rbx_6 + 3) u>> 2
        
        if (rbx_6 u> rcx_117)
            r15_9 = 0
        
        if (r15_9 != 0)
            do
                int64_t rdi_26 = sx.q(*rbx_6)
                var_2a8 = rdi_26.d
                sub_1409d7fe0(&data_143991170, &var_2a8)
                
                if (data_1439911c8 != data_1439911f4)
                    void* r9_17 = &data_1439911f8
                    int64_t r10_9 = sx.q(data_143991208 - 1)
                    void* rax_174 = data_143991200
                    
                    if (rax_174 != 0)
                        r9_17 = rax_174
                    
                    int64_t rax_176 = rdi_26 & r10_9
                    void* rdx_84 = r9_17 + (rax_176 << 2)
                    int32_t i_9 = *(r9_17 + (rax_176 << 2))
                    
                    if (i_9 != 0xffffffff)
                        int64_t r8_29 = data_1439911c0
                        
                        do
                            int64_t rcx_118 = sx.q(i_9) * 3
                            
                            if (*(r8_29 + (rcx_118 << 2)) == rdi_26.d)
                                int64_t rdx_86 = sx.q(*rdx_84)
                                int64_t rdi_27 = rdx_86 * 3
                                int64_t rax_179 = sx.q(*(r8_29 + (rdi_27 << 2) + 8)) & r10_9
                                void* rcx_119 = r9_17 + (rax_179 << 2)
                                int32_t j_7 = *(r9_17 + (rax_179 << 2))
                                
                                while (j_7 != 0xffffffff)
                                    if (j_7 == rdx_86.d)
                                        *rcx_119 = *(r8_29 + (rdi_27 << 2) + 4)
                                        break
                                    
                                    int64_t j_11 = sx.q(j_7)
                                    j_7 = *(r8_29 + ((j_11 * 3 + 1) << 2))
                                    rcx_119 = r8_29 + ((j_11 * 3 + 1) << 2)
                                
                                sub_14090a460(&data_1439911c0, rdx_86.d, 1)
                                break
                            
                            i_9 = *(r8_29 + 4 + (rcx_118 << 2))
                            rdx_84 = r8_29 + 4 + (rcx_118 << 2)
                        while (i_9 != 0xffffffff)
                
                rbx_6 = &rbx_6[1]
                r14_11 += 1
            while (r14_11 != r15_9)
        
        int32_t rdi_28 = data_1439911e8
        i_1 = data_143a1c6c8
        var_288.d = 0
        var_288:4.d = 1
        zmm6 = zmm8
        var_288:8.q = &data_1439911d0
        var_278.d = 0xffffffff
        var_278 = 0
        
        if (rdi_28 != 0)
            sub_14059bdd0(&var_288)
            rdi_28 = data_1439911e8
        
        zmm2 = var_278.o
        var_278:4.d = rdi_28
        uint128_t var_130_1 = zmm2
        uint128_t var_140_1 = var_288
        var_278.d = 0xffffffff << (rdi_28.b & 0x1f)
        zmm2 = _mm_unpackhi_pd(zmm2, zmm2.q)
        var_1a8 = (&data_1439911c0).o
        var_198.o = var_140_1
        uint64_t var_188_1 = zmm2.q
        
        while (true)
            int32_t var_18c
            int64_t rcx_124 = sx.q(var_18c)
            char rax_182
            
            if (rcx_124.d != (var_278 u>> 0x20).d || var_198 != &data_1439911d0)
                rax_182 = 0
            else
                rax_182 = 1
            
            int64_t* rdx_88 = var_1a8.q
            
            if (rax_182 == 0 || rdx_88 != &data_1439911c0)
                rax_182 = 1
            else
                rax_182 = 0
            
            if (rax_182 == 0)
                break
            
            int64_t rcx_126 = sx.q(*(*rdx_88 + rcx_124 * 0xc))
            void* rax_189
            
            if (data_143991178 == data_1439911a4)
            label_1409d4896:
                rax_189 = nullptr
            else
                void* rax_185 = data_1439911b0
                void* rdi_29 = &data_1439911a8
                
                if (rax_185 != 0)
                    rdi_29 = rax_185
                
                int32_t rax_188 = *(rdi_29 + ((sx.q(data_1439911b8 - 1) & rcx_126) << 2))
                
                if (rax_188 == 0xffffffff)
                label_1409d4896_1:
                    rax_189 = nullptr
                else
                    int64_t rdi_30 = data_143991170
                    int32_t* rdx_92
                    
                    while (true)
                        rdx_92 = sx.q(rax_188) * 0x88
                        
                        if (*(rdx_92 + rdi_30) == rcx_126.d)
                            break
                        
                        rax_188 = *(rdx_92 + rdi_30 + 0x80)
                        
                        if (rax_188 == 0xffffffff)
                            goto label_1409d4896_2
                    
                    rax_189 = rdx_92 + rdi_30
                    
                    if (rax_188 == 0xffffffff)
                    label_1409d4896_2:
                        rax_189 = nullptr
            
            if (not(zmm8.d f<= *(rax_189 + 0x28)))
                i_1 = *(rax_189 + 4)
            
            int32_t var_190 = var_190 & not.d(var_1a8:0xc.d)
            sub_14059bdd0(&var_1a8:8)
        
        rsi = zx.q(var_2b4)
        
        if (i_1 == data_143a1c6c8)
            if (data_1439911c8 != data_1439911f4)
                int32_t rax_193 = data_1439911cc
                data_1439911c8 = 0
                
                if (rax_193 s< 0 && rax_193 != 0)
                    sub_140638cc0(&data_1439911c0, 0)
                
                data_1439911f0 = 0xffffffff
                data_1439911f4 = 0
                sub_140774790(&data_1439911d0)
                int64_t rcx_128 = sx.q(data_143991208)
                
                if (rcx_128 s> 0)
                    void* rax_194 = data_143991200
                    void* rdi_31 = &data_1439911f8
                    
                    if (rax_194 != 0)
                        rdi_31 = rax_194
                    
                    __builtin_memset(rdi_31, 0xffffffff, rcx_128 << 2)
            
            int32_t rdi_32 = data_143991198
            var_288:8.q = &data_143991180
            var_288.d = 0
            var_288:4.d = 1
            var_278.d = 0xffffffff
            var_278 = 0
            
            if (rdi_32 != 0)
                sub_14059bdd0(&var_288)
                rdi_32 = data_143991198
            
            zmm2 = var_278.o
            var_278:4.d = rdi_32
            uint128_t var_130_2 = zmm2
            var_278.d = 0xffffffff << (rdi_32.b & 0x1f)
            int32_t var_110
            var_110.o = (&data_143991170).o
            var_100.o = var_288
            uint64_t var_f0_1 = (_mm_unpackhi_pd(zmm2, zmm2.q)).q
            
            while (true)
                int64_t rcx_131 = sx.q(var_f4)
                char rax_196
                
                if (rcx_131.d != (var_278 u>> 0x20).d || var_100 != &data_143991180)
                    rax_196 = 0
                else
                    rax_196 = 1
                
                int64_t rdx_94 = var_110.q
                
                if (rax_196 == 0 || rdx_94 != &data_143991170)
                    rax_196 = 1
                else
                    rax_196 = 0
                
                if (rax_196 == 0)
                    break
                
                int32_t* rcx_133 = rcx_131 * 0x88 + *rdx_94
                zmm7 = rcx_133[0xa]
                
                if (not(zmm7.d f>= zmm6.d))
                    i_1 = *rcx_133
                
                int32_t var_f8 = var_f8 & not.d(var_108:4.d)
                sub_14059bdd0(&var_108)
                zmm6 = _mm_min_ss(zmm6.d, zmm7.d)
            
            rsi = zx.q(var_2b4)
            
            if (i_1 == data_143a1c6c8)
                break
    
    if (data_143ceefd8 s> *(var_240 + 0x14))
        _Init_thread_header(&data_143ceefd8)
        
        if (data_143ceefd8 == 0xffffffff)
            atexit(sub_142cb8180)
            _Init_thread_footer(&data_143ceefd8)
    
    sub_1409b4ab0(arg1, &data_143ceef80, arg3, &data_143ceefc8)
    var_2f0.b = 0
    int32_t var_2f8
    var_2f8.b = 1
    result = sub_1409b6930(arg1, &data_143ceef98, 1, 0, var_2f8.b, var_2f0.b)

__security_check_cookie(rax_1 ^ &var_318)
return result
