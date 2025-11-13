// 函数: sub_1403bf690
// 地址: 0x1403bf690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm11
uint128_t var_58 = zmm11
uint128_t zmm10
uint128_t var_68 = zmm10
uint128_t zmm9
uint128_t var_78 = zmm9
int128_t zmm8
int128_t var_88 = zmm8
uint128_t zmm7
uint128_t var_98 = zmm7
void* rdi = arg1
void var_f8
int64_t rcx_1 = __security_cookie ^ &var_f8
int32_t i_4 = 0xf

if (arg7 != 0)
    i_4 = arg7

int32_t i = 0x10

if (i_4 u< 0x10)
    i = i_4

uint64_t result = zx.q(i + 5)

if (result u<= arg3)
    uint64_t zmm6[0x2] = arg4
    int64_t r15_1 = arg3
    char* rsi_1 = arg2
    
    if (not(_mm_xor_pd(arg5, arg5)[0] f<= arg4[0].q))
        zmm6 = __xorpd_xmmxuq_memxuq(zmm6, data_142d8e3c0)
        *rsi_1 = 0x2d
        rsi_1 = &rsi_1[1]
        r15_1 -= 1
    
    if (not(zmm6[0] f< 2.2250738585072014e-308))
        zmm7 = 0x7fefffffffffffff
    
    if (zmm6[0] f< 2.2250738585072014e-308 || zmm7.q f< zmm6[0])
        if (zmm6[0] f< 2.2250738585072014e-308)
            *rsi_1 = 0x30
            __security_check_cookie(rcx_1 ^ &var_f8)
            return result
        
        *rsi_1 = 0x666e69
        __security_check_cookie(rcx_1 ^ &var_f8)
        return result
    
    int32_t _Y_1
    int16_t zmm4_1[0x8] = frexp(zmm6[0], &_Y_1)
    int32_t _Y_5 = _Y_1
    int32_t rax_1 = _Y_5 * 0x4d
    int32_t _Y_6 = rax_1 s>> 8
    _Y_1 = _Y_6
    void* var_d0 = rdi
    uint128_t zmm1
    int32_t rcx_2
    int32_t _Y_9
    
    if (_Y_5 s< 0)
        arg5 = _mm_xor_pd(zmm6, zmm6)
        
        if (rax_1 s>= 0xfffecd00)
            _Y_9 = neg.d(_Y_6)
            rcx_2 = 1
        label_1403bf7bb:
            zmm1 = 0x4024000000000000
            arg5 = 0x3ff0000000000000
            bool cond:3_1
            
            do
                if ((_Y_9.b & 1) != 0)
                    arg5[0] = arg5[0] f* zmm1.q
                
                zmm1.q = zmm1.q f* zmm1.q
                cond:3_1 = _Y_9 s> 1
                _Y_9 s>>= 1
            while (cond:3_1)
            
            if (rcx_2 != 0)
                zmm1.q = 0x3ff0000000000000 f/ arg5[0]
                arg5 = zmm1
            
            goto label_1403bf804
        
    label_1403bf81c:
        arg6 = 0x4024000000000000
        arg4 = 0x3ff0000000000000
        
        while (true)
            int32_t _Y_7 = _Y_6 + 1
            int32_t _Y_8
            int32_t rdx_2
            
            if (_Y_6 + 1 s< 0)
                zmm4_1 = _mm_xor_pd(zmm4_1, zmm4_1)
                
                if (_Y_7 s>= 0xfffffecd)
                    _Y_8 = not.d(_Y_6)
                    rdx_2 = 1
                label_1403bf865:
                    zmm4_1 = arg4
                    int16_t zmm5_1[0x8] = arg6
                    bool cond:6_1
                    
                    do
                        if ((_Y_8.b & 1) != 0)
                            zmm4_1[0].q = zmm4_1[0].q f* zmm5_1[0].q
                        
                        zmm5_1[0].q = zmm5_1[0].q f* zmm5_1[0].q
                        cond:6_1 = _Y_8 s> 1
                        _Y_8 s>>= 1
                    while (cond:6_1)
                    
                    if (rdx_2 != 0)
                        arg4[0].q = arg4[0].q f/ zmm4_1[0].q
                        zmm4_1 = arg4
                    
                    if (zmm7.q f< zmm4_1[0].q)
                        break
            else
                rdx_2 = 0
                _Y_8 = _Y_7
                zmm4_1 = arg4
                
                if (_Y_7 != 0)
                    goto label_1403bf865
            _Y_1 = _Y_7
            _Y_6 = _Y_7
            arg5 = zmm4_1
            
            if (not(0x10000000000000 f> zmm4_1[0].q))
                _Y_6 = _Y_7
                arg5 = zmm4_1
                
                if (not(zmm6[0] f> zmm4_1[0].q))
                    break
    else
        rcx_2 = 0
        _Y_9 = _Y_6
        
        if (_Y_6 != 0)
            goto label_1403bf7bb
        
        arg5 = 0x3ff0000000000000
    label_1403bf804:
        
        if (0x10000000000000 f> arg5[0] || not(zmm6[0] f<= arg5[0]))
            goto label_1403bf81c
    zmm6[0] = zmm6[0] f/ arg5[0]
    
    if (not(zmm6[0] f< 1.0))
        do
            zmm6[0] = zmm6[0] f/ 0x4024000000000000[0]
            _Y_6 += 1
        while (zmm6[0] f>= 0x3ff0000000000000)
        
        _Y_1 = _Y_6
    
    int32_t j = 0
    int32_t j_3 = 0
    
    if (_Y_6 u>= 0xfffffffe)
        _Y_1 = 0
        j_3 = neg.d(_Y_6)
    
    zmm7 = 0x10000000000000
    int32_t j_5 = j_3
    int32_t j_4
    
    do
        zmm6[0] = zmm6[0] f* 0x4024000000000000
        j_4 = j_3 + 1
        double _Y
        
        if (j_4 - j_5 + j s>= i)
            zmm6[0] = zmm6[0] f+ 0x3fe0000000000000
            void* rdx_4
            arg5, rdx_4 = floor(zmm6[0])
            _Y = arg5.q
            zmm6 = _mm_xor_pd(zmm6, zmm6)
            
            if (arg5[0] f<= 0x4022000000000000)
                goto label_1403bfa70
            
            if (j_3 s<= 0)
                if (j s> 0)
                    int32_t _Y_2 = _Y_1
                    int32_t rcx_5
                    
                    do
                        rcx_5 = sx.d(rsi_1[-1])
                        
                        if (_Y_2 == 0xffffffff)
                            _Y_2 = -1
                            
                            if (rcx_5.b != 0x2e)
                                rsi_1 = &rsi_1[-1]
                            else
                                rcx_5 = sx.d(rsi_1[-2])
                                rsi_1 = &rsi_1[-2]
                                r15_1 += 1
                                _Y_1 = 1
                                _Y_2 = 1
                        else
                            _Y_2 += 1
                            _Y_1 = _Y_2
                            rsi_1 = &rsi_1[-1]
                        
                        j -= 1
                        arg5 = zx.o(0)
                        arg5[0] = float.d(rcx_5 - 0x2f)
                        _Y = arg5.q
                        
                        if (rcx_5 - 0x2f s< 0xa)
                            break
                    while (j s> 0)
                    
                    if (rcx_5 - 0x2f s< 0xa)
                        goto label_1403bfa70
                
                int32_t _Y_3 = _Y_1
                
                if (_Y_3 == 0xffffffff)
                    bool cond:8_1 = rsi_1[-1] != 0x2e
                    rsi_1 = &rsi_1[-1]
                    
                    if (not(cond:8_1))
                        r15_1 += 1
                        _Y_1 = 1
                else
                    _Y_1 = _Y_3 + 1
                
                _Y = 1.0
            else
                j_3 -= 1
                _Y = 1.0
                j_5 = sbb.d(j_5, 0, j u< 1)
            
            zmm6 = _mm_xor_pd(zmm6, zmm6)
        label_1403bfab8:
            int32_t _Y_4 = _Y_1
            rdx_4.b = _Y_4 != 0xffffffff
            
            if (j_3 s<= 0)
                j_4 = j_3
                
                if (rdx_4.b != 0)
                label_1403bfb0e:
                    
                    if (_Y_4 == 0)
                        *rsi_1 = 0x2e
                        rsi_1 = &rsi_1[1]
                        r15_1 -= 1
                        _Y_4 = _Y_1
                    
                    _Y_1 = _Y_4 - 1
            else
                int32_t j_2 = j_3
                int32_t j_1
                
                do
                    if ((rdx_4.b & 1) != 0)
                        if (_Y_4 == 0)
                            *rsi_1 = 0x2e
                            rsi_1 = &rsi_1[1]
                            r15_1 -= 1
                            _Y_4 = _Y_1
                        
                        _Y_1 = _Y_4 - 1
                    
                    *rsi_1 = 0x30
                    rsi_1 = &rsi_1[1]
                    _Y_4 = _Y_1
                    rdx_4.b = _Y_4 != 0xffffffff
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 s> 1)
                j_4 = 0
                
                if (rdx_4.b != 0)
                    goto label_1403bfb0e
            
            *rsi_1 = (int.d(fconvert.t(_Y))).b + 0x30
            rsi_1 = &rsi_1[1]
            j = j + 1 - j_5 + j_3
            j_5 = 0
            
            if (zmm6[0] f<= zmm7.q)
                break
        else
            modf(zmm6[0], &_Y)
            arg5 = zx.o(_Y)
        label_1403bfa70:
            arg5[0] f- 0.0
            
            if (arg5[0] f!= 0.0 || is_unordered.q(arg5[0], 0.0))
                goto label_1403bfab8
            
            j_5 = adc.d(j_5, 0, j u< 1)
            
            if (not(zmm6[0] f> zmm7.q))
                break
        j_3 = j_4
    while (j_4 - j_5 + j s< i)
    result = zx.q(_Y_1)
    
    if ((result + 1).d u<= 3)
        while (true)
            _Y_1 = (result - 1).d
            
            if (result.d s<= 0)
                break
            
            *rsi_1 = 0x30
            rsi_1 = &rsi_1[1]
            result = zx.q(_Y_1)
        
        goto label_1403bfe21
    
    *rsi_1 = 0x45
    int64_t r15_2 = r15_1 + sx.q(not.d(j))
    result = zx.q(_Y_1)
    
    if (result.d s< 0)
        rsi_1[1] = 0x2d
        rsi_1 = &rsi_1[2]
        r15_2 -= 1
        result = zx.q(0 - _Y_1)
        _Y_1 = result.d
    else
        rsi_1 = &rsi_1[1]
    
    int64_t rcx_9 = 0
    char var_ba[0xa]
    
    if (result.d s> 0)
        int32_t i_1
        
        do
            i_1 = result.d
            result = zx.q(result.d u/ 0xa)
            var_ba[rcx_9] = (i_1.b - (zx.q((result * 2).d) * 5).b) | 0x30
            rcx_9 += 1
        while (i_1 u> 9)
        _Y_1 = result.d
    
    if (rcx_9.d s< r15_2.d)
        if (rcx_9.d s> 0)
            result = sx.q(rcx_9.d)
            
            if (rcx_9.d u< 0x20 || (rsi_1 u< &var_f8 + result + 0x3e && &var_ba u< &rsi_1[result]))
                goto label_1403bfe1f
            
            int64_t r8_1 = result & 0xffffffffffffffe0
            uint64_t rbp_7 = zx.q((((r8_1 - 0x20) u>> 5) + 1).d) & 1
            int64_t rdx_8
            
            if (r8_1 == 0x20)
                rdx_8 = 0
                
                if (rbp_7 != 0)
                label_1403bfd86:
                    int64_t rcx_19 = not.q(rdx_8) + result
                    void var_d9
                    arg5 = *(&var_d9 + rcx_19)
                    zmm1 = *(&var_d0:7 + rcx_19)
                    arg6 = _mm_xor_pd(arg6, arg6)
                    arg4 = _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                            _mm_shuffle_epi32(_mm_unpacklo_epi8(zmm1, arg6.q), 0x4e), 0x1b), 
                        0x1b)
                    zmm1 = _mm_packus_epi16(
                        _mm_shufflehi_epi16(
                            _mm_shufflelo_epi16(
                                _mm_shuffle_epi32(_mm_unpackhi_epi8(zmm1, arg6.q), 0x4e), 0x1b), 
                            0x1b), 
                        arg4)
                    arg4 = _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                            _mm_shuffle_epi32(_mm_unpacklo_epi8(arg5, arg6.q), 0x4e), 0x1b), 
                        0x1b)
                    arg5 = _mm_packus_epi16(
                        _mm_shufflehi_epi16(
                            _mm_shufflelo_epi16(
                                _mm_shuffle_epi32(_mm_unpackhi_epi8(arg5, arg6.q), 0x4e), 0x1b), 
                            0x1b), 
                        arg4)
                    *(rsi_1 + rdx_8) = zmm1
                    *(rsi_1 + rdx_8 + 0x10) = arg5
            else
                void* rbx_6 = &rsi_1[0x30]
                int64_t i_5 = 0 - ((r8_1 - 0x20) u>> 5) + rbp_7 - 1
                int64_t rdx_7 = 0
                uint64_t temp0_8[0x2] = _mm_xor_pd(arg5, arg5)
                int64_t i_2
                
                do
                    zmm1 = *(&var_f8 + result + 0x2e + rdx_7 - 0x10)
                    arg6 = *(&var_f8 + result + 0x2e + rdx_7)
                    arg4 = _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                            _mm_shuffle_epi32(_mm_unpacklo_epi8(arg6, temp0_8[0]), 0x4e), 0x1b), 
                        0x1b)
                    arg6 = _mm_packus_epi16(
                        _mm_shufflehi_epi16(
                            _mm_shufflelo_epi16(
                                _mm_shuffle_epi32(_mm_unpackhi_epi8(arg6, temp0_8[0]), 0x4e), 
                                0x1b), 
                            0x1b), 
                        arg4)
                    arg4 = _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                            _mm_shuffle_epi32(_mm_unpacklo_epi8(zmm1, temp0_8[0]), 0x4e), 0x1b), 
                        0x1b)
                    zmm1 = _mm_packus_epi16(
                        _mm_shufflehi_epi16(
                            _mm_shufflelo_epi16(
                                _mm_shuffle_epi32(_mm_unpackhi_epi8(zmm1, temp0_8[0]), 0x4e), 
                                0x1b), 
                            0x1b), 
                        arg4)
                    *(rbx_6 - 0x30) = arg6
                    *(rbx_6 - 0x20) = zmm1
                    zmm1 = *(&var_f8 + result + 0x2e + rdx_7 - 0x30)
                    arg6 = *(&var_f8 + result + 0x2e + rdx_7 - 0x20)
                    arg4 = _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                            _mm_shuffle_epi32(_mm_unpacklo_epi8(arg6, temp0_8[0]), 0x4e), 0x1b), 
                        0x1b)
                    arg6 = _mm_packus_epi16(
                        _mm_shufflehi_epi16(
                            _mm_shufflelo_epi16(
                                _mm_shuffle_epi32(_mm_unpackhi_epi8(arg6, temp0_8[0]), 0x4e), 
                                0x1b), 
                            0x1b), 
                        arg4)
                    arg4 = _mm_shufflehi_epi16(
                        _mm_shufflelo_epi16(
                            _mm_shuffle_epi32(_mm_unpacklo_epi8(zmm1, temp0_8[0]), 0x4e), 0x1b), 
                        0x1b)
                    zmm1 = _mm_packus_epi16(
                        _mm_shufflehi_epi16(
                            _mm_shufflelo_epi16(
                                _mm_shuffle_epi32(_mm_unpackhi_epi8(zmm1, temp0_8[0]), 0x4e), 
                                0x1b), 
                            0x1b), 
                        arg4)
                    *(rbx_6 - 0x10) = arg6
                    *rbx_6 = zmm1
                    rbx_6 += 0x40
                    rdx_7 -= 0x40
                    i_2 = i_5
                    i_5 += 2
                while (i_2 != -2)
                rdx_8 = neg.q(rdx_7)
                
                if (rbp_7 != 0)
                    goto label_1403bfd86
            rsi_1 = &rsi_1[r8_1]
            
            if (r8_1 != result)
                result -= r8_1
            label_1403bfe1f:
                uint64_t i_3
                
                do
                    void var_bb
                    *rsi_1 = *(&var_bb + result)
                    rsi_1 = &rsi_1[1]
                    i_3 = result
                    result -= 1
                while (i_3 s> 1)
        
    label_1403bfe21:
        *rsi_1 = 0
        __security_check_cookie(rcx_1 ^ &var_f8)
        return result
    
    rdi = var_d0

png_error(rdi, "ASCII conversion buffer too small")
noreturn
