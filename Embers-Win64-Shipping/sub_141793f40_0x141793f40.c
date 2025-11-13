// 函数: sub_141793f40
// 地址: 0x141793f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1988)
void var_19a8
int64_t rax_1 = __security_cookie ^ &var_19a8
int64_t* r13 = arg3
int128_t zmm8 = arg2
int64_t* result = nullptr

if (*(arg3 + 0xc) u>= 2)
    result = arg3

int32_t var_1960 = 0
int32_t rdi = 0
int64_t* result_1 = nullptr
int64_t var_1948 = 0

if (result != 0)
    void* r9 = *arg3
    int64_t rdx_1 = sx.q(arg3[1].d)
    result = *(r9 + 0x398)
    char rcx = *(rdx_1 + result)
    
    if (rcx == 4 || rcx == 1)
        int64_t rcx_1 = rdx_1 * 3
        int32_t zmm5 = *(arg1 + 0xc)
        int128_t zmm2 = data_1439b8d78
        arg2 = data_1439b8d74
        char r8 = *(rdx_1 + *(r9 + 0x158))
        int64_t rax_5 = *(r9 + 0x1b8)
        uint128_t zmm0 = zx.o(*(rax_5 + (rcx_1 << 2)))
        int32_t rax_6 = *(rax_5 + (rcx_1 << 2) + 8)
        uint64_t var_1938 = zmm0.q
        uint128_t zmm4 = _mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0x55), 0x7fffffff)
        uint128_t zmm6 = *(arg1 + 8)
        zmm4.d = zmm4.d f* zmm8.d
        uint128_t zmm7
        zmm7.d = _mm_and_ps(zmm0, 0x7fffffff).d f* zmm8.d
        zmm4.d = zmm4.d f* zmm5
        zmm7.d = zmm7.d f* zmm5
        zmm0.d = _mm_and_ps(rax_6, 0x7fffffff).d f* zmm8.d
        zmm4.d = zmm4.d f+ zmm6.d
        zmm7.d = zmm7.d f+ zmm6.d
        zmm0.d = zmm0.d f* zmm5
        zmm4.d = zmm4.d f* zmm2.d
        zmm7.d = zmm7.d f* zmm2.d
        zmm0.d = zmm0.d f+ zmm6.d
        zmm4 = _mm_max_ss(zmm4.d, arg2.d)
        zmm7 = _mm_max_ss(zmm7.d, arg2.d)
        zmm0.d = zmm0.d f* zmm2.d
        zmm4.d = zmm4.d f* zmm4.d
        zmm7.d = zmm7.d f* zmm7.d
        zmm0 = _mm_max_ss(zmm0.d, arg2.d)
        zmm7.d = zmm7.d f+ zmm4.d
        zmm0.d = zmm0.d f* zmm0.d
        zmm7.d = zmm7.d f+ zmm0.d
        zmm7 = _mm_sqrt_ss(zmm7.d, zmm7.d)
        uint64_t var_1920
        float zmm0_1[0x4]
        
        if (r8 == 0)
            var_1920 = 0
            int32_t var_1918_1 = 0
            result = sub_1417b0fd0(arg4 + 0x118, &var_1920)
            int64_t rbx_1 = sx.q(var_1918_1)
            
            if (rbx_1.d s> var_1948:4.d)
                result = sub_1405c5660(&result_1, rbx_1.d)
            
            void* r15_1 = var_1920
            void* rbx_2 = r15_1
            void* r14_3 = (rbx_1 << 6) + r15_1
            
            if (r15_1 != r14_3)
                do
                    int64_t rsi_1 = sx.q(var_1948.d)
                    int32_t rax_9 = (rsi_1 + 1).d
                    var_1948.d = rax_9
                    
                    if (rax_9 s> var_1948:4.d)
                        sub_1405c4ec0(&result_1)
                    
                    result = result_1
                    int64_t rdx_7 = rsi_1 * 5
                    *(result + (rdx_7 << 3)) = *rbx_2
                    *(result + (rdx_7 << 3) + 0x10) = *(rbx_2 + 0x10)
                    zmm0_1 = zx.o(*(rbx_2 + 0x20))
                    rbx_2 += 0x40
                    result[rdx_7 + 4] = zmm0_1.q
                while (rbx_2 != r14_3)
            
            if (r15_1 != 0)
                result = sub_140a74f90(r15_1)
        else
            int64_t r8_1 = rdx_1 * 3
            int64_t rdx_2 = *(r9 + 0x140)
            var_1938 = &result_1
            int32_t rax_7 = *(rdx_2 + (r8_1 << 3) + 8)
            var_1920 = *(rdx_2 + (r8_1 << 3))
            int64_t var_1918
            var_1918.d = rax_7
            var_1918 = *(rdx_2 + (r8_1 << 3) + 0xc)
            int32_t var_190c_1 = *(rdx_2 + (r8_1 << 3) + 0x14)
            result, zmm7, zmm8 = sub_1417929e0(arg4 + 0x118, &var_1920, &var_1938)
        
        int64_t i_1 = sx.q(var_1948.d)
        int64_t i_2 = i_1
        
        if (i_1 s> 0)
            zmm6 = 0x3f1a36e2eb1c432d
            int64_t r9_1 = 0
            var_1960.q = 0
            int64_t i
            
            do
                void* r14_4 = *r13
                int64_t rsi_2 = sx.q(r13[1].d)
                uint64_t rbx_3 = *(result_1 + r9_1 + 8)
                result = *(r14_4 + 0x338)
                var_1938 = rbx_3
                int32_t r15_2 = *(result + (rsi_2 << 2))
                
                if (r15_2 != 0xffffffff)
                    char r12_1 = *(rbx_3 + 0xc)
                    int64_t** r8_3 = nullptr
                    
                    if (r12_1 u>= 2)
                        r8_3 = rbx_3
                    
                    if (r8_3 == 0)
                    label_14179428e:
                        
                        if (r15_2 != 0)
                            result = sub_141734760(&var_1938)
                            r9_1 = var_1960.q
                            i_1 = i_2
                        
                        if (r15_2 == 0 || result.d == 0 || r15_2 == result.d)
                            if (*(*(r14_4 + 0x80) + (rsi_2 << 3)) == 0)
                                result = *rbx_3
                            
                            if (*(*(r14_4 + 0x80) + (rsi_2 << 3)) != 0
                                    || *(result[0x10] + (sx.q(*(rbx_3 + 8)) << 3)) != 0)
                                result = *(r14_4 + 0xc8)
                                
                                if (result[rsi_2] != rbx_3)
                                    result = *(r14_4 + 0x368)
                                    
                                    if (*(rsi_2 + result) == 0)
                                        int64_t rdx_11
                                        int64_t r8_4
                                        result, rdx_11, r8_4 = sub_141735d10(&var_1938)
                                        
                                        if (result.b == 0)
                                            int64_t* r14_5 = nullptr
                                            int64_t* rsi_3 = nullptr
                                            
                                            if (r12_1 u>= 1)
                                                rsi_3 = rbx_3
                                            
                                            if (rsi_3 == 0)
                                                rsi_3.b = 0
                                            else
                                                char rax_14
                                                rax_14, rdx_11 = sub_141745660(rbx_3)
                                                
                                                if (rax_14 != 2)
                                                    rsi_3.b = 0
                                                else
                                                    rdx_11 = sx.q(rsi_3[1].d) * 3
                                                    int64_t rcx_13 = *(*rsi_3 + 0x1b8)
                                                    zmm0_1 = *(rcx_13 + (rdx_11 << 2) + 4)
                                                    zmm2 = *(rcx_13 + (rdx_11 << 2))
                                                    int128_t zmm1 = *(rcx_13 + (rdx_11 << 2) + 8)
                                                    zmm2.d = zmm2.d f* zmm2.d
                                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                                    zmm1.d = zmm1.d f* zmm1.d
                                                    zmm2.d = zmm2.d f+ zmm0_1[0]
                                                    zmm2.d = zmm2.d f+ zmm1.d
                                                    zmm0_1 = _mm_cvtps_pd(zmm2.q)
                                                    char rax_18
                                                    
                                                    if (not(zmm0_1[0].q f> zmm6.q))
                                                        rax_18 = sub_1405e66c0(*(*(*rbx_3 + 0x80)
                                                            + (sx.q(*(rbx_3 + 8)) << 3)))
                                                    
                                                    if (not(zmm0_1[0].q f> zmm6.q) && rax_18 != 3)
                                                        rsi_3.b = 0
                                                    else
                                                        rsi_3.b = 1
                                            
                                            int64_t r15_3 = sx.q(r13[1].d)
                                            void* r13_1 = *r13
                                            result = *(r13_1 + 0x398)
                                            
                                            if (*(r15_3 + result) != 1 || rsi_3.b != 0)
                                                void* r12_2 = *rbx_3
                                                
                                                if (*(rbx_3 + 0xc) u>= 2)
                                                    r14_5 = rbx_3
                                                
                                                char rax_20 =
                                                    *(sx.q(*(rbx_3 + 8)) + *(r12_2 + 0x158))
                                                char rax_21
                                                
                                                if (r14_5 != 0)
                                                    rax_21, rdx_11 = sub_141745660(rbx_3)
                                                
                                                if (r14_5 == 0 || rax_21 != 4)
                                                    rdx_11.b = 0
                                                else
                                                    rdx_11.b = 1
                                                
                                                if (r8 != rax_20)
                                                label_141794413:
                                                    
                                                    if (rdx_11.b == 0)
                                                        goto label_14179446d
                                                    
                                                    rdi |= 1
                                                    uint64_t var_18f0[0x3]
                                                    uint64_t* rax_24
                                                    rax_24, r8_4, zmm7, zmm8 = sub_14154a1b0(
                                                        &var_18f0, r14_5, zmm8, *(arg1 + 8), 
                                                        (*(arg1 + 0xc))[0])
                                                    zmm0_1 = *(rax_24 + 4)
                                                    zmm2 = *rax_24
                                                    float zmm1_1 = rax_24[1].d
                                                    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                                    zmm2.d = zmm2.d f* zmm2.d
                                                    zmm2.d = zmm2.d f+ zmm0_1[0]
                                                    zmm2.d = zmm2.d f+ zmm1_1 * zmm1_1
                                                    zmm0_1 = _mm_sqrt_ss(0, zmm2.d)
                                                label_1417944d9:
                                                    
                                                    if ((rdi.b & 2) != 0)
                                                        rdi &= 0xfffffffd
                                                    
                                                    if ((rdi.b & 1) != 0)
                                                        rdi &= 0xfffffffe
                                                    
                                                    float temp0_12[0x4] =
                                                        _mm_max_ss(zmm0_1[0], zmm7.d)
                                                    int64_t var_11d8_1 = 0
                                                    int32_t var_11c8_1 = 0
                                                    int32_t var_11c4_1 = 8
                                                    int64_t var_ab8_1 = 0
                                                    int32_t var_aa8_1 = 0
                                                    int32_t var_aa4_1 = 8
                                                    int64_t var_98_1 = 0
                                                    int32_t var_88_1 = 0
                                                    int32_t var_84_1 = 8
                                                    int64_t var_1978_1 = arg7
                                                    float var_1988
                                                    var_1988.q = rbx_3
                                                    void var_18d8
                                                    zmm6, zmm7, zmm8 = sub_14173bf20(arg5, 
                                                        &var_18d8, r8_4, 
                                                        *(*(r13_1 + 0xc8) + (r15_3 << 3)), 
                                                        var_1988, temp0_12[0])
                                                    sub_14174c320(arg6, &var_18d8)
                                                    void var_a98
                                                    result = sub_1417057f0(&var_a98)
                                                    
                                                    if (var_ab8_1 != 0)
                                                        result = sub_140a74f90(var_ab8_1)
                                                    
                                                    if (var_11d8_1 != 0)
                                                        result = sub_140a74f90(var_11d8_1)
                                                else
                                                    if (rdx_11.b == 0)
                                                    label_14179446d:
                                                        
                                                        if (rsi_3.b == 0)
                                                            zmm0_1 = zx.o(0)
                                                            goto label_1417944d9
                                                        
                                                        rdi |= 2
                                                        int64_t* rdx_13 = nullptr
                                                        
                                                        if (*(rbx_3 + 0xc) u>= 1)
                                                            rdx_13 = rbx_3
                                                        
                                                        uint64_t* rax_26
                                                        rax_26, r8_4, zmm7, zmm8 = sub_14154a1b0(
                                                            &var_1920, rdx_13, zmm8, *(arg1 + 8), 
                                                            (*(arg1 + 0xc))[0])
                                                        zmm0_1 = *(rax_26 + 4)
                                                        zmm2 = *rax_26
                                                        float zmm1_2 = rax_26[1].d
                                                        zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                                                        zmm2.d = zmm2.d f* zmm2.d
                                                        zmm2.d = zmm2.d f+ zmm0_1[0]
                                                        zmm2.d = zmm2.d f+ zmm1_2 * zmm1_2
                                                        zmm0_1 = _mm_sqrt_ss(0, zmm2.d)
                                                        goto label_1417944d9
                                                    
                                                    r8_4 = sx.q(*(rbx_3 + 8))
                                                    result =
                                                        zx.q(*(*(r13_1 + 0x1a0) + (r15_3 << 2)))
                                                    
                                                    if (*(*(r12_2 + 0x1a0) + (r8_4 << 2))
                                                            s<= result.d)
                                                        goto label_141794413
                                            
                                            r13 = arg3
                                        
                                        i_1 = i_2
                                        r9_1 = var_1960.q
                    else
                        int64_t* rax_11 = nullptr
                        
                        if (r12_1 u>= 1)
                            rax_11 = rbx_3
                        
                        if (rax_11 == 0)
                            goto label_14179428e
                        
                        int64_t* rcx_6 = nullptr
                        
                        if (*(rax_11 + 0xc) u>= 2)
                            rcx_6 = rax_11
                        
                        if (rcx_6 == 0 || *(sx.q(rcx_6[1].d) + *(*rcx_6 + 0x398)) != 4)
                            goto label_14179428e
                        
                        result = *r8_3
                        
                        if (*(result[0x67] + (sx.q(r8_3[1].d) << 2)) != 0xffffffff)
                            goto label_14179428e
                
                r9_1 += 0x28
                i = i_1
                i_1 -= 1
                var_1960.q = r9_1
                i_2 = i_1
            while (i != 1)
        
        int64_t* result_2 = result_1
        
        if (result_2 != 0)
            result = sub_140a74f90(result_2)

__security_check_cookie(rax_1 ^ &var_19a8)
return result
