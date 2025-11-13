// 函数: sub_1416eaf20
// 地址: 0x1416eaf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x19c8)
void var_19e8
int64_t rax_1 = __security_cookie ^ &var_19e8
int32_t rdi = 0
int64_t* rsi = arg3
int32_t var_1988 = 0
int128_t zmm8 = arg2
int64_t result = 0

if (*(arg3 + 0xc) u>= 2)
    result = arg3

int64_t result_1 = 0
int64_t var_1960 = 0

if (result != 0)
    int64_t rdx_1 = sx.q(arg3[1].d)
    int64_t* r8 = *arg3
    result = r8[0x73]
    char rcx = *(rdx_1 + result)
    
    if (rcx == 4 || rcx == 1)
        int64_t rcx_1 = rdx_1 * 3
        int32_t zmm5 = *(arg1 + 0xc)
        int128_t zmm2 = data_1439b8d78
        arg2 = data_1439b8d74
        char r10_1 = *(rdx_1 + r8[0x2b])
        int64_t rax_5 = r8[0x37]
        uint128_t zmm6 = *(arg1 + 8)
        uint128_t zmm0 = zx.o(*(rax_5 + (rcx_1 << 2)))
        int32_t rax_6 = *(rax_5 + (rcx_1 << 2) + 8)
        uint64_t var_1978 = zmm0.q
        uint128_t zmm4 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
        uint128_t zmm7
        zmm7.d = _mm_and_ps(zmm0, 0x7fffffff).d f* zmm8.d
        zmm4.d = _mm_and_ps(zmm4, 0x7fffffff).d f* zmm8.d
        zmm7.d = zmm7.d f* zmm5
        zmm4.d = zmm4.d f* zmm5
        zmm0.d = _mm_and_ps(rax_6, 0x7fffffff).d f* zmm8.d
        zmm7.d = zmm7.d f+ zmm6.d
        zmm4.d = zmm4.d f+ zmm6.d
        zmm0.d = zmm0.d f* zmm5
        zmm7.d = zmm7.d f* zmm2.d
        zmm4.d = zmm4.d f* zmm2.d
        zmm0.d = zmm0.d f+ zmm6.d
        zmm7 = _mm_max_ss(zmm7.d, arg2.d)
        zmm4 = _mm_max_ss(zmm4.d, arg2.d)
        zmm0.d = zmm0.d f* zmm2.d
        zmm7.d = zmm7.d f* zmm7.d
        zmm4.d = zmm4.d f* zmm4.d
        zmm0 = _mm_max_ss(zmm0.d, arg2.d)
        zmm4.d = zmm4.d f+ zmm7.d
        zmm0.d = zmm0.d f* zmm0.d
        zmm4.d = zmm4.d f+ zmm0.d
        zmm7 = _mm_sqrt_ss(0, zmm4.d)
        uint64_t* var_19c8
        uint64_t var_1938
        
        if (r10_1 == 0)
            result = zx.q(*(arg4 + 0x60))
            
            if (result.d s> 0)
                sub_1405c5660(&result_1, result.d)
                result = zx.q(*(arg4 + 0x60))
            
            void* rbx_1 = *(arg4 + 0x58)
            void* r14_3 = (sx.q(result.d) << 6) + rbx_1
            
            if (rbx_1 != r14_3)
                do
                    int64_t rsi_1 = sx.q(var_1960.d)
                    int32_t rax_10 = (rsi_1 + 1).d
                    var_1960.d = rax_10
                    
                    if (rax_10 s> var_1960:4.d)
                        sub_1405c4ec0(&result_1)
                    
                    result = result_1
                    int64_t rcx_6 = rsi_1 * 5
                    *(result + (rcx_6 << 3)) = *rbx_1
                    *(result + (rcx_6 << 3) + 0x10) = *(rbx_1 + 0x10)
                    zmm0 = zx.o(*(rbx_1 + 0x20))
                    rbx_1 += 0x40
                    *(result + (rcx_6 << 3) + 0x20) = zmm0.q
                while (rbx_1 != r14_3)
                
                rsi = arg3
        else
            int64_t rcx_2 = r8[0x28]
            int32_t* rdx_2 = rdx_1 * 3
            zmm0 = zx.o(*(rcx_2 + (rdx_2 << 3)))
            int32_t var_1930_1 = *(rcx_2 + (rdx_2 << 3) + 8)
            int32_t var_1924_1 = *(rcx_2 + (rdx_2 << 3) + 0x14)
            var_1978 = &result_1
            void var_18f0
            void* var_1910_1 = &var_18f0
            int16_t var_18f4_1 = 0
            char var_18f2_1 = 0
            int32_t var_1948
            int32_t var_1990_1 = var_1948
            var_1938 = zmm0.q
            int32_t var_19c0 = &var_1978
            uint64_t var_192c_1 = *(rcx_2 + (rdx_2 << 3) + 0xc)
            var_19c8 = &var_1938
            uint64_t var_1998_1 = arg6
            result, zmm7, zmm8 = sub_1416ed270(arg4, rdx_2, r8)
        
        int64_t i_1 = sx.q(var_1960.d)
        int64_t i_2 = i_1
        
        if (i_1 s> 0)
            zmm6 = 0x3f1a36e2eb1c432d
            int64_t r8_1 = 0
            var_1988.q = 0
            int64_t i
            
            do
                void* r14_4 = *rsi
                int64_t r15_1 = sx.q(rsi[1].d)
                uint64_t rbx_2 = *(result_1 + r8_1 + 8)
                result = *(r14_4 + 0x338)
                var_1978 = rbx_2
                int32_t r12_1 = *(result + (r15_1 << 2))
                
                if (r12_1 != 0xffffffff)
                    char r13_1 = *(rbx_2 + 0xc)
                    int64_t* rsi_2 = nullptr
                    
                    if (r13_1 u>= 2)
                        rsi_2 = rbx_2
                    
                    if (rsi_2 == 0)
                    label_1416eb27b:
                        
                        if (r12_1 != 0)
                            result = sub_141734760(&var_1978)
                            r8_1 = var_1988.q
                            i_1 = i_2
                        
                        if (r12_1 == 0 || result.d == 0 || r12_1 == result.d)
                            if (*(*(r14_4 + 0x80) + (r15_1 << 3)) == 0)
                                result = *rbx_2
                            
                            if (*(*(r14_4 + 0x80) + (r15_1 << 3)) != 0
                                    || *(*(result + 0x80) + (sx.q(*(rbx_2 + 8)) << 3)) != 0)
                                result = *(r14_4 + 0xc8)
                                
                                if (*(result + (r15_1 << 3)) != rbx_2)
                                    result = *(r14_4 + 0x368)
                                    
                                    if (*(r15_1 + result) == 0)
                                        int64_t rdx_8
                                        int64_t r8_2
                                        result, rdx_8, r8_2 = sub_141735d10(&var_1978)
                                        
                                        if (result.b == 0)
                                            int64_t* r15_2 = nullptr
                                            
                                            if (r13_1 u>= 1)
                                                r15_2 = rbx_2
                                            
                                            if (r15_2 == 0)
                                                r12_1.b = 0
                                            else
                                                char rax_15
                                                rax_15, rdx_8 = sub_141745660(rbx_2)
                                                
                                                if (rax_15 != 2)
                                                    r12_1.b = 0
                                                else
                                                    rdx_8 = sx.q(r15_2[1].d) * 3
                                                    int64_t rcx_14 = *(*r15_2 + 0x1b8)
                                                    zmm0 = *(rcx_14 + (rdx_8 << 2) + 4)
                                                    zmm2 = *(rcx_14 + (rdx_8 << 2))
                                                    arg2 = *(rcx_14 + (rdx_8 << 2) + 8)
                                                    zmm2.d = zmm2.d f* zmm2.d
                                                    zmm0.d = zmm0.d f* zmm0.d
                                                    arg2.d = arg2.d f* arg2.d
                                                    zmm2.d = zmm2.d f+ zmm0.d
                                                    zmm2.d = zmm2.d f+ arg2.d
                                                    
                                                    if (_mm_cvtps_pd(zmm2.q).q f> zmm6.q || *(*(
                                                            *(*rbx_2 + 0x80)
                                                            + (sx.q(*(rbx_2 + 8)) << 3)) + 8) == 3)
                                                        r12_1.b = 1
                                                    else
                                                        r12_1.b = 0
                                            
                                            int64_t rcx_16 = sx.q(arg3[1].d)
                                            result = *(r14_4 + 0x398)
                                            var_1978 = rcx_16
                                            
                                            if (*(rcx_16 + result) != 1 || r12_1.b != 0)
                                                void* r13_2 = *rbx_2
                                                char rax_22 =
                                                    *(sx.q(*(rbx_2 + 8)) + *(r13_2 + 0x158))
                                                char rax_23
                                                
                                                if (rsi_2 != 0)
                                                    rax_23, rdx_8 = sub_141745660(rbx_2)
                                                
                                                if (rsi_2 == 0 || rax_23 != 4)
                                                    rdx_8.b = 0
                                                else
                                                    rdx_8.b = 1
                                                
                                                uint64_t* rax_26
                                                uint64_t r13_3
                                                
                                                if (r10_1 != rax_22)
                                                    r13_3 = var_1978
                                                label_1416eb402:
                                                    
                                                    if (rdx_8.b == 0)
                                                        goto label_1416eb438
                                                    
                                                    rdi |= 1
                                                    var_19c8.d = (*(arg1 + 0xc)).d
                                                    uint64_t var_1920[0x2]
                                                    rax_26, r8_2, zmm7, zmm8 = sub_14154a1b0(
                                                        &var_1920, rsi_2, zmm8, *(arg1 + 8), 
                                                        var_19c8.d)
                                                label_1416eb464:
                                                    zmm0 = *(rax_26 + 4)
                                                    zmm2 = *rax_26
                                                    float zmm1 = rax_26[1].d
                                                    zmm0.d = zmm0.d f* zmm0.d
                                                    zmm2.d = zmm2.d f* zmm2.d
                                                    zmm2.d = zmm2.d f+ zmm0.d
                                                    zmm2.d = zmm2.d f+ zmm1 * zmm1
                                                    zmm0 = _mm_sqrt_ss(0, zmm2.d)
                                                label_1416eb496:
                                                    
                                                    if ((rdi.b & 2) != 0)
                                                        rdi &= 0xfffffffd
                                                    
                                                    if ((rdi.b & 1) != 0)
                                                        rdi &= 0xfffffffe
                                                    
                                                    zmm0 = _mm_max_ss(zmm0.d, zmm7.d)
                                                    int32_t var_11c4_1 = 8
                                                    int64_t var_11d8_1 = 0
                                                    int32_t var_11c8_1 = 0
                                                    int64_t var_ab8_1 = 0
                                                    int32_t var_aa8_1 = 0
                                                    int64_t var_98_1 = 0
                                                    int32_t var_88_1 = 0
                                                    int32_t var_aa4_1 = 8
                                                    int32_t var_84_1 = 8
                                                    int64_t var_19b8_1 = arg7
                                                    void var_18d8
                                                    zmm6, zmm7, zmm8 = sub_14173bf20(arg5, 
                                                        &var_18d8, r8_2, 
                                                        *(*(r14_4 + 0xc8) + (r13_3 << 3)), rbx_2, 
                                                        zmm0.d)
                                                    sub_14174c320(arg6, &var_18d8)
                                                    void var_a98
                                                    result = sub_1417057f0(&var_a98)
                                                    
                                                    if (var_ab8_1 != 0)
                                                        result = sub_140a74f90(var_ab8_1)
                                                    
                                                    if (var_11d8_1 != 0)
                                                        result = sub_140a74f90(var_11d8_1)
                                                else
                                                    if (rdx_8.b == 0)
                                                        r13_3 = var_1978
                                                    label_1416eb438:
                                                        
                                                        if (r12_1.b == 0)
                                                            zmm0 = zx.o(0)
                                                            goto label_1416eb496
                                                        
                                                        rdi |= 2
                                                        var_19c8.d = (*(arg1 + 0xc)).d
                                                        rax_26, r8_2, zmm7, zmm8 = sub_14154a1b0(
                                                            &var_1938, r15_2, zmm8, *(arg1 + 8), 
                                                            var_19c8.d)
                                                        goto label_1416eb464
                                                    
                                                    r13_3 = var_1978
                                                    r8_2 = sx.q(*(rbx_2 + 8))
                                                    result =
                                                        zx.q(*(*(r14_4 + 0x1a0) + (r13_3 << 2)))
                                                    
                                                    if (*(*(r13_2 + 0x1a0) + (r8_2 << 2))
                                                            s<= result.d)
                                                        goto label_1416eb402
                                        
                                        i_1 = i_2
                                        r8_1 = var_1988.q
                    else
                        int64_t* rax_12 = nullptr
                        
                        if (r13_1 u>= 1)
                            rax_12 = rbx_2
                        
                        if (rax_12 == 0)
                            goto label_1416eb27b
                        
                        int64_t* rcx_7 = nullptr
                        
                        if (*(rax_12 + 0xc) u>= 2)
                            rcx_7 = rax_12
                        
                        if (rcx_7 == 0 || *(sx.q(rcx_7[1].d) + *(*rcx_7 + 0x398)) != 4)
                            goto label_1416eb27b
                        
                        result = *rsi_2
                        
                        if (*(*(result + 0x338) + (sx.q(rsi_2[1].d) << 2)) != 0xffffffff)
                            goto label_1416eb27b
                    
                    rsi = arg3
                
                r8_1 += 0x28
                i = i_1
                i_1 -= 1
                var_1988.q = r8_1
                i_2 = i_1
            while (i != 1)
        
        int64_t result_2 = result_1
        
        if (result_2 != 0)
            result = sub_140a74f90(result_2)

__security_check_cookie(rax_1 ^ &var_19e8)
return result
