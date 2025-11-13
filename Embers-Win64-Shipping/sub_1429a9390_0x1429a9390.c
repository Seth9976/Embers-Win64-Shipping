// 函数: sub_1429a9390
// 地址: 0x1429a9390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_118 = -2
uint128_t zmm6
uint128_t var_38 = zmm6
int32_t zmm7[0x4]
int32_t var_48[0x4] = zmm7
int32_t zmm8[0x4]
int32_t var_58[0x4] = zmm8
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* rdi = arg1
void* var_120 = arg1
int64_t* r10 = *(arg1 + 0x18)

if (*r10 == 0)
    int32_t r11_1 = 0
    void* rdi_1 = *(arg1 + 0x10)
    int32_t rdx_1 = *(rdi_1 + 0x90)
    int32_t r8_1 = 0
    int32_t r9_1 = 0
    
    if (rdx_1 s>= r10[3].d)
        rdx_1 = r10[3].d
    
    int32_t rcx = *(rdi_1 + 0x8c)
    int64_t i = sx.q(*(r10 + 0x14) - rcx)
    int64_t rbx_1 = sx.q(rdx_1 - rcx)
    
    if (i s<= rbx_1)
        if (rbx_1 - i + 1 s>= 2)
            int64_t rax_7 = *(rdi_1 + 0xb8)
            
            do
                r8_1 += *(rax_7 + (i << 3))
                r9_1 += *(rax_7 + (i << 3) + 8)
                i += 2
            while (i s<= rbx_1 - 1)
        
        if (i s<= rbx_1)
            r11_1 = *(*(rdi_1 + 0xb8) + (i << 3))
        
        r11_1 += r9_1 + r8_1
    
    int64_t* rcx_1 = r10[4]
    
    if (rcx_1 == 0 || r10[2].d s>= r11_1)
        r10[5].d = 1
        rdi = arg1
        int64_t* rcx_5 = *(rdi + 0x18)
        *rcx_5 = rcx_5[1]
    else
        rdi = arg1
        *(*(rdi + 0x18) + 0x28) = (*(*rcx_1 + 0x10))(rcx_1)
        void* rdx_4 = *(rdi + 0x18)
        int64_t* rcx_3 = *(rdx_4 + 0x20)
        *(*(rdi + 0x18) + 0x10) = (*(*rcx_3 + 0x28))(rcx_3, *(rdx_4 + 8), zx.q(*(rdx_4 + 0x10)), 
            zx.q(*(rdx_4 + 0x14)), rdx_4)

int32_t var_140
int32_t i_1
int32_t rcx_6

if (*(*(rdi + 0x10) + 0x80) != 0)
    rcx_6 = *(rdi + 0x24)
    i_1 = *(rdi + 0x20) - 1
    var_140 = 0xffffffff
else
    rcx_6 = *(rdi + 0x20)
    i_1 = *(rdi + 0x24) + 1
    var_140 = 1

int32_t i_2 = i_1

for (; rcx_6 != i_1; i_1 = i_2)
    int32_t r8_3 = *(rdi + 0x2c)
    int32_t rcx_7
    
    if (rcx_6 s< 0)
        int32_t rax_23
        
        if (r8_3 s< 0)
            rax_23 = not.d(r8_3) - rcx_6
        else
            rax_23 = r8_3 - rcx_6 - 1
        
        rcx_7 = neg.d(divs.dp.d(sx.q(rax_23), r8_3))
    else
        rcx_7 = divs.dp.d(sx.q(rcx_6), r8_3)
    
    if (rcx_6 == rcx_7 * r8_3)
        void* r13_1 = *(rdi + 0x10)
        int64_t rsi_2 = *(*(r13_1 + 0xd0) + (sx.q(rcx_6 - *(r13_1 + 0x8c)) << 3)) + **(rdi + 0x18)
        int64_t j_45
        __builtin_memset(&j_45, 0, 0x18)
        int64_t j_44 = 0
        void* rbx_2 = nullptr
        void* r12_1 = *(r13_1 + 0x138)
        int64_t rax_30
        int64_t rdx_11
        rdx_11:rax_30 = muls.dp.q(0x4924924924924925, *(r13_1 + 0x140) - r12_1)
        int64_t r15_2 = rdx_11 s>> 4
        int64_t r15_3 = r15_2 + (r15_2 u>> 0x3f)
        int32_t (* var_130)[0x4]
        sub_1429a8180(rdi, rcx_6, &var_130, &j_45, &j_44, 0)
        int32_t (* rdi_2)[0x4] = var_130
        
        if (r15_3 u<= 4)
            goto label_1429a9618
        
        int64_t j_42
        int64_t j_43
        
        if (rdi_2 == 0)
        label_1429a961d:
            j_42 = j_45
            j_43 = j_44
            
            if (j_42 != 0 || j_43 != 0)
                goto label_1429a9641
        else
            void* var_128
            sub_1429a8180(arg1, rcx_6, &var_128, &j_45, &j_44, 1)
            rbx_2 = var_128
        label_1429a9618:
            
            if (rdi_2 == 0)
                goto label_1429a961d
            
            j_42 = j_45
            j_43 = j_44
        label_1429a9641:
            int64_t j_30 = 0
            int32_t (* var_a8)[0x4]
            
            if (r15_3 != 0)
                int64_t rdx_14 = 0
                
                do
                    (&var_a8)[j_30] =
                        rsi_2 + ((*(rdx_14 + r12_1 + 0x10) * (j_43 + (j_42 << 3))) << 1)
                    j_30 += 1
                    rdx_14 += 0x38
                while (j_30 u< r15_3)
            
            int32_t (* var_a0)[0x4]
            int32_t (* var_98)[0x4]
            int32_t (* var_90)[0x4]
            int32_t (* var_88)[0x4]
            int128_t* var_80
            int32_t zmm2[0x4]
            int32_t zmm3[0x4]
            int32_t zmm4[0x4]
            int32_t zmm5[0x4]
            
            if (r15_3 == 3 || r15_3 == 6)
                int32_t (* r10_5)[0x4] = var_98
                int32_t (* r11_7)[0x4] = var_a0
                j_30.b = (r11_7.b & 0xf) == 0
                int32_t (* rsi_7)[0x4] = var_a8
                uint64_t rax_33
                rax_33.b = (rsi_7.b & 0xf) == 0
                j_30.b &= rax_33.b
                char rdx_22 = 0
                
                if ((r10_5.b & 0xf) == 0)
                    rdx_22 = j_30.b
                
                uint64_t rax_71 = zx.q(rdi_2.d) & 0xf
                
                if (rdx_22 != 0)
                    if (rax_71 == 0)
                        if (j_42 != 0)
                            j_30 = j_42
                            int64_t j
                            
                            do
                                zmm8 = *rsi_7
                                zmm7 = *r11_7
                                zmm6 = *r10_5
                                zmm3 = _mm_unpacklo_epi16(zmm8, zmm7[0].q)
                                zmm5 = _mm_unpacklo_epi16(zmm8, zmm6.q)
                                zmm4 = _mm_unpacklo_epi16(zmm7, zmm6.q)
                                *rdi_2 = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm5, 0xc9)[0].q), 
                                    _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0xe1), 
                                        _mm_shuffle_epi32(zmm3, 0xc6)[0].q)[0].q)
                                zmm2 = _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm5, 0x39), 
                                    _mm_shufflehi_epi16(zmm4, 0x4e)[0].q)
                                zmm3 = _mm_unpackhi_epi16(zmm8, zmm7[0].q)
                                zmm8 = _mm_unpackhi_epi16(zmm8, zmm6.q)
                                zmm7 = _mm_unpackhi_epi16(zmm7, zmm6.q)
                                rdi_2[1] = _mm_unpacklo_epi64(zmm2, 
                                    _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm8, 0xc9)[0].q)[
                                        0].q)
                                rdi_2[2] = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0xe1), 
                                        _mm_shuffle_epi32(zmm3, 0xc6)[0].q), 
                                    _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm8, 0x39), 
                                    _mm_shufflehi_epi16(zmm7, 0x4e)[0].q)[0].q)
                                rdi_2 = &rdi_2[3]
                                r10_5 = &r10_5[1]
                                r11_7 = &r11_7[1]
                                rsi_7 = &rsi_7[1]
                                j = j_30
                                j_30 -= 1
                            while (j != 1)
                    else if (j_42 != 0)
                        j_30 = j_42
                        int64_t j_1
                        
                        do
                            zmm8 = *rsi_7
                            zmm7 = *r11_7
                            zmm6 = *r10_5
                            zmm3 = _mm_unpacklo_epi16(zmm8, zmm7[0].q)
                            zmm5 = _mm_unpacklo_epi16(zmm8, zmm6.q)
                            zmm4 = _mm_unpacklo_epi16(zmm7, zmm6.q)
                            *rdi_2 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm5, 0xc9)[0].q), 
                                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0xe1), 
                                    _mm_shuffle_epi32(zmm3, 0xc6)[0].q)[0].q)
                            zmm2 = _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm5, 0x39), 
                                _mm_shufflehi_epi16(zmm4, 0x4e)[0].q)
                            zmm3 = _mm_unpackhi_epi16(zmm8, zmm7[0].q)
                            zmm8 = _mm_unpackhi_epi16(zmm8, zmm6.q)
                            zmm7 = _mm_unpackhi_epi16(zmm7, zmm6.q)
                            rdi_2[1] = _mm_unpacklo_epi64(zmm2, 
                                _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm8, 0xc9)[0].q)[0].q)
                            rdi_2[2] = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0xe1), 
                                    _mm_shuffle_epi32(zmm3, 0xc6)[0].q), 
                                _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm8, 0x39), 
                                _mm_shufflehi_epi16(zmm7, 0x4e)[0].q)[0].q)
                            rdi_2 = &rdi_2[3]
                            r10_5 = &r10_5[1]
                            r11_7 = &r11_7[1]
                            rsi_7 = &rsi_7[1]
                            j_1 = j_30
                            j_30 -= 1
                        while (j_1 != 1)
                else if (rax_71 == 0)
                    if (j_42 != 0)
                        j_30 = j_42
                        int64_t j_2
                        
                        do
                            zmm8 = *rsi_7
                            zmm7 = *r11_7
                            zmm6 = *r10_5
                            zmm3 = _mm_unpacklo_epi16(zmm8, zmm7[0].q)
                            zmm5 = _mm_unpacklo_epi16(zmm8, zmm6.q)
                            zmm4 = _mm_unpacklo_epi16(zmm7, zmm6.q)
                            *rdi_2 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm5, 0xc9)[0].q), 
                                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0xe1), 
                                    _mm_shuffle_epi32(zmm3, 0xc6)[0].q)[0].q)
                            zmm2 = _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm5, 0x39), 
                                _mm_shufflehi_epi16(zmm4, 0x4e)[0].q)
                            zmm3 = _mm_unpackhi_epi16(zmm8, zmm7[0].q)
                            zmm8 = _mm_unpackhi_epi16(zmm8, zmm6.q)
                            zmm7 = _mm_unpackhi_epi16(zmm7, zmm6.q)
                            rdi_2[1] = _mm_unpacklo_epi64(zmm2, 
                                _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm8, 0xc9)[0].q)[0].q)
                            rdi_2[2] = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0xe1), 
                                    _mm_shuffle_epi32(zmm3, 0xc6)[0].q), 
                                _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm8, 0x39), 
                                _mm_shufflehi_epi16(zmm7, 0x4e)[0].q)[0].q)
                            rdi_2 = &rdi_2[3]
                            r10_5 = &r10_5[1]
                            r11_7 = &r11_7[1]
                            rsi_7 = &rsi_7[1]
                            j_2 = j_30
                            j_30 -= 1
                        while (j_2 != 1)
                else if (j_42 != 0)
                    j_30 = j_42
                    int64_t j_3
                    
                    do
                        zmm8 = *rsi_7
                        zmm7 = *r11_7
                        zmm6 = *r10_5
                        zmm3 = _mm_unpacklo_epi16(zmm8, zmm7[0].q)
                        zmm5 = _mm_unpacklo_epi16(zmm8, zmm6.q)
                        zmm4 = _mm_unpacklo_epi16(zmm7, zmm6.q)
                        *rdi_2 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm5, 0xc9)[0].q), 
                            _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0xe1), 
                                _mm_shuffle_epi32(zmm3, 0xc6)[0].q)[0].q)
                        zmm2 = _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm5, 0x39), 
                            _mm_shufflehi_epi16(zmm4, 0x4e)[0].q)
                        zmm3 = _mm_unpackhi_epi16(zmm8, zmm7[0].q)
                        zmm8 = _mm_unpackhi_epi16(zmm8, zmm6.q)
                        zmm7 = _mm_unpackhi_epi16(zmm7, zmm6.q)
                        rdi_2[1] = _mm_unpacklo_epi64(zmm2, 
                            _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm8, 0xc9)[0].q)[0].q)
                        rdi_2[2] = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0xe1), 
                                _mm_shuffle_epi32(zmm3, 0xc6)[0].q), 
                            _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm8, 0x39), 
                            _mm_shufflehi_epi16(zmm7, 0x4e)[0].q)[0].q)
                        rdi_2 = &rdi_2[3]
                        r10_5 = &r10_5[1]
                        r11_7 = &r11_7[1]
                        rsi_7 = &rsi_7[1]
                        j_3 = j_30
                        j_30 -= 1
                    while (j_3 != 1)
                
                if (j_43 != 0)
                    int64_t j_40 = j_43
                    int64_t j_4
                    
                    do
                        *rdi_2 = *rsi_7
                        rsi_7 += 2
                        *(rdi_2 + 2) = *r11_7
                        r11_7 += 2
                        (*rdi_2)[1].w = *r10_5
                        rdi_2 += 6
                        r10_5 += 2
                        j_4 = j_40
                        j_40 -= 1
                    while (j_4 != 1)
                
                if (r15_3 == 6)
                    int32_t (* r10_6)[0x4] = var_90
                    int128_t* r11_8 = var_80
                    j_30.b = (r11_8.b & 0xf) == 0
                    int32_t (* rdi_5)[0x4] = var_88
                    rax_71.b = (rdi_5.b & 0xf) == 0
                    j_30.b &= rax_71.b
                    char rdx_23 = 0
                    
                    if ((r10_6.b & 0xf) == 0)
                        rdx_23 = j_30.b
                    
                    uint64_t rax_76 = zx.q(rbx_2.d) & 0xf
                    
                    if (rdx_23 != 0)
                        if (rax_76 == 0)
                            if (j_42 != 0)
                                int64_t j_5
                                
                                do
                                    zmm8 = *r10_6
                                    zmm7 = *rdi_5
                                    zmm6 = *r11_8
                                    zmm3 = _mm_unpacklo_epi16(zmm8, zmm7[0].q)
                                    zmm5 = _mm_unpacklo_epi16(zmm8, zmm6.q)
                                    zmm4 = _mm_unpacklo_epi16(zmm7, zmm6.q)
                                    *rbx_2 = _mm_unpacklo_epi64(
                                        _mm_unpacklo_epi32(zmm3, 
                                            _mm_shufflelo_epi16(zmm5, 0xc9)[0].q), 
                                        _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0xe1), 
                                        _mm_shuffle_epi32(zmm3, 0xc6)[0].q)[0].q)
                                    zmm2 = _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm5, 0x39), 
                                        _mm_shufflehi_epi16(zmm4, 0x4e)[0].q)
                                    zmm3 = _mm_unpackhi_epi16(zmm8, zmm7[0].q)
                                    zmm8 = _mm_unpackhi_epi16(zmm8, zmm6.q)
                                    zmm7 = _mm_unpackhi_epi16(zmm7, zmm6.q)
                                    *(rbx_2 + 0x10) = _mm_unpacklo_epi64(zmm2, 
                                        _mm_unpacklo_epi32(zmm3, 
                                            _mm_shufflelo_epi16(zmm8, 0xc9)[0].q)[0].q)
                                    *(rbx_2 + 0x20) = _mm_unpacklo_epi64(
                                        _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0xe1), 
                                            _mm_shuffle_epi32(zmm3, 0xc6)[0].q), 
                                        _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm8, 0x39), 
                                        _mm_shufflehi_epi16(zmm7, 0x4e)[0].q)[0].q)
                                    rbx_2 += 0x30
                                    r11_8 = &r11_8[1]
                                    rdi_5 = &rdi_5[1]
                                    r10_6 = &r10_6[1]
                                    j_5 = j_42
                                    j_42 -= 1
                                while (j_5 != 1)
                        else if (j_42 != 0)
                            int64_t j_6
                            
                            do
                                zmm8 = *r10_6
                                zmm7 = *rdi_5
                                zmm6 = *r11_8
                                zmm3 = _mm_unpacklo_epi16(zmm8, zmm7[0].q)
                                zmm5 = _mm_unpacklo_epi16(zmm8, zmm6.q)
                                zmm4 = _mm_unpacklo_epi16(zmm7, zmm6.q)
                                *rbx_2 = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm5, 0xc9)[0].q), 
                                    _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0xe1), 
                                        _mm_shuffle_epi32(zmm3, 0xc6)[0].q)[0].q)
                                zmm2 = _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm5, 0x39), 
                                    _mm_shufflehi_epi16(zmm4, 0x4e)[0].q)
                                zmm3 = _mm_unpackhi_epi16(zmm8, zmm7[0].q)
                                zmm8 = _mm_unpackhi_epi16(zmm8, zmm6.q)
                                zmm7 = _mm_unpackhi_epi16(zmm7, zmm6.q)
                                *(rbx_2 + 0x10) = _mm_unpacklo_epi64(zmm2, 
                                    _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm8, 0xc9)[0].q)[
                                        0].q)
                                *(rbx_2 + 0x20) = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0xe1), 
                                        _mm_shuffle_epi32(zmm3, 0xc6)[0].q), 
                                    _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm8, 0x39), 
                                    _mm_shufflehi_epi16(zmm7, 0x4e)[0].q)[0].q)
                                rbx_2 += 0x30
                                r11_8 = &r11_8[1]
                                rdi_5 = &rdi_5[1]
                                r10_6 = &r10_6[1]
                                j_6 = j_42
                                j_42 -= 1
                            while (j_6 != 1)
                    else if (rax_76 == 0)
                        if (j_42 != 0)
                            int64_t j_7
                            
                            do
                                zmm8 = *r10_6
                                zmm7 = *rdi_5
                                zmm6 = *r11_8
                                zmm3 = _mm_unpacklo_epi16(zmm8, zmm7[0].q)
                                zmm5 = _mm_unpacklo_epi16(zmm8, zmm6.q)
                                zmm4 = _mm_unpacklo_epi16(zmm7, zmm6.q)
                                *rbx_2 = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm5, 0xc9)[0].q), 
                                    _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0xe1), 
                                        _mm_shuffle_epi32(zmm3, 0xc6)[0].q)[0].q)
                                zmm2 = _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm5, 0x39), 
                                    _mm_shufflehi_epi16(zmm4, 0x4e)[0].q)
                                zmm3 = _mm_unpackhi_epi16(zmm8, zmm7[0].q)
                                zmm8 = _mm_unpackhi_epi16(zmm8, zmm6.q)
                                zmm7 = _mm_unpackhi_epi16(zmm7, zmm6.q)
                                *(rbx_2 + 0x10) = _mm_unpacklo_epi64(zmm2, 
                                    _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm8, 0xc9)[0].q)[
                                        0].q)
                                *(rbx_2 + 0x20) = _mm_unpacklo_epi64(
                                    _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0xe1), 
                                        _mm_shuffle_epi32(zmm3, 0xc6)[0].q), 
                                    _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm8, 0x39), 
                                    _mm_shufflehi_epi16(zmm7, 0x4e)[0].q)[0].q)
                                rbx_2 += 0x30
                                r11_8 = &r11_8[1]
                                rdi_5 = &rdi_5[1]
                                r10_6 = &r10_6[1]
                                j_7 = j_42
                                j_42 -= 1
                            while (j_7 != 1)
                    else if (j_42 != 0)
                        int64_t j_8
                        
                        do
                            zmm8 = *r10_6
                            zmm7 = *rdi_5
                            zmm6 = *r11_8
                            zmm3 = _mm_unpacklo_epi16(zmm8, zmm7[0].q)
                            zmm5 = _mm_unpacklo_epi16(zmm8, zmm6.q)
                            zmm4 = _mm_unpacklo_epi16(zmm7, zmm6.q)
                            *rbx_2 = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm5, 0xc9)[0].q), 
                                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm4, 0xe1), 
                                    _mm_shuffle_epi32(zmm3, 0xc6)[0].q)[0].q)
                            zmm2 = _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm5, 0x39), 
                                _mm_shufflehi_epi16(zmm4, 0x4e)[0].q)
                            zmm3 = _mm_unpackhi_epi16(zmm8, zmm7[0].q)
                            zmm8 = _mm_unpackhi_epi16(zmm8, zmm6.q)
                            zmm7 = _mm_unpackhi_epi16(zmm7, zmm6.q)
                            *(rbx_2 + 0x10) = _mm_unpacklo_epi64(zmm2, 
                                _mm_unpacklo_epi32(zmm3, _mm_shufflelo_epi16(zmm8, 0xc9)[0].q)[0].q)
                            *(rbx_2 + 0x20) = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(_mm_shuffle_epi32(zmm7, 0xe1), 
                                    _mm_shuffle_epi32(zmm3, 0xc6)[0].q), 
                                _mm_unpackhi_epi32(_mm_shufflehi_epi16(zmm8, 0x39), 
                                _mm_shufflehi_epi16(zmm7, 0x4e)[0].q)[0].q)
                            rbx_2 += 0x30
                            r11_8 = &r11_8[1]
                            rdi_5 = &rdi_5[1]
                            r10_6 = &r10_6[1]
                            j_8 = j_42
                            j_42 -= 1
                        while (j_8 != 1)
                    
                    if (j_43 != 0)
                        int64_t j_9
                        
                        do
                            *rbx_2 = *r10_6
                            r10_6 += 2
                            *(rbx_2 + 2) = *rdi_5
                            rdi_5 += 2
                            *(rbx_2 + 4) = *r11_8
                            rbx_2 += 6
                            r11_8 += 2
                            j_9 = j_43
                            j_43 -= 1
                        while (j_9 != 1)
            else
                if (((r15_3 - 4) & 0xfffffffffffffffb) != 0)
                    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
                    sub_1429a8530(&exceptionObject, 
                        "IIF mode called with incorrect channel pattern")
                    _CxxThrowException(&exceptionObject, &data_143946700)
                    noreturn
                
                int128_t* r11_2 = var_a0
                int32_t (* rsi_3)[0x4] = var_a8
                int32_t zmm1[0x4]
                int64_t rax_36
                
                if (*(r12_1 + 0xb0) == 0)
                    int32_t (* r10_2)[0x4] = var_90
                    j_30.b = (r11_2.b & 0xf) == 0
                    rax_36.b = (rsi_3.b & 0xf) == 0
                    j_30.b &= rax_36.b
                    bool r8_8 = false
                    
                    if ((r10_2.b & 0xf) == 0)
                        r8_8 = j_30.b
                    
                    int32_t (* rdx_17)[0x4] = var_98
                    uint64_t rax_47 = zx.q(rdi_2.d) & 0xf
                    
                    if ((r8_8 & (rdx_17.b & 0xf) == 0) != 0)
                        if (rax_47 == 0)
                            if (j_42 != 0)
                                int64_t j_39 = j_42
                                int64_t j_10
                                
                                do
                                    zmm6 = *rsi_3
                                    zmm4 = *r11_2
                                    zmm5 = *rdx_17
                                    zmm3 = *r10_2
                                    zmm2 = _mm_unpacklo_epi16(zmm6, zmm4[0].q)
                                    zmm1 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                    *rdi_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                    rdi_2[1] = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                    zmm6 = _mm_unpackhi_epi16(zmm6, zmm4[0].q)
                                    zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                    rdi_2[2] = _mm_unpacklo_epi32(zmm6, zmm5[0].q)
                                    rdi_2[3] = _mm_unpackhi_epi32(zmm6, zmm5[0].q)
                                    rdi_2 = &rdi_2[4]
                                    r10_2 = &r10_2[1]
                                    rdx_17 = &rdx_17[1]
                                    r11_2 = &r11_2[1]
                                    rsi_3 = &rsi_3[1]
                                    j_10 = j_39
                                    j_39 -= 1
                                while (j_10 != 1)
                        else if (j_42 != 0)
                            int64_t j_38 = j_42
                            int64_t j_11
                            
                            do
                                zmm6 = *rsi_3
                                zmm4 = *r11_2
                                zmm5 = *rdx_17
                                zmm3 = *r10_2
                                zmm2 = _mm_unpacklo_epi16(zmm6, zmm4[0].q)
                                zmm1 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                *rdi_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                rdi_2[1] = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                zmm6 = _mm_unpackhi_epi16(zmm6, zmm4[0].q)
                                zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                rdi_2[2] = _mm_unpacklo_epi32(zmm6, zmm5[0].q)
                                rdi_2[3] = _mm_unpackhi_epi32(zmm6, zmm5[0].q)
                                rdi_2 = &rdi_2[4]
                                r10_2 = &r10_2[1]
                                rdx_17 = &rdx_17[1]
                                r11_2 = &r11_2[1]
                                rsi_3 = &rsi_3[1]
                                j_11 = j_38
                                j_38 -= 1
                            while (j_11 != 1)
                    else if (rax_47 == 0)
                        if (j_42 != 0)
                            int64_t j_37 = j_42
                            int64_t j_12
                            
                            do
                                zmm6 = *rsi_3
                                zmm4 = *r11_2
                                zmm5 = *rdx_17
                                zmm3 = *r10_2
                                zmm2 = _mm_unpacklo_epi16(zmm6, zmm4[0].q)
                                zmm1 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                *rdi_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                rdi_2[1] = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                zmm6 = _mm_unpackhi_epi16(zmm6, zmm4[0].q)
                                zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                rdi_2[2] = _mm_unpacklo_epi32(zmm6, zmm5[0].q)
                                rdi_2[3] = _mm_unpackhi_epi32(zmm6, zmm5[0].q)
                                rdi_2 = &rdi_2[4]
                                r10_2 = &r10_2[1]
                                rdx_17 = &rdx_17[1]
                                r11_2 = &r11_2[1]
                                rsi_3 = &rsi_3[1]
                                j_12 = j_37
                                j_37 -= 1
                            while (j_12 != 1)
                    else if (j_42 != 0)
                        int64_t j_36 = j_42
                        int64_t j_13
                        
                        do
                            zmm6 = *rsi_3
                            zmm4 = *r11_2
                            zmm5 = *rdx_17
                            zmm3 = *r10_2
                            zmm2 = _mm_unpacklo_epi16(zmm6, zmm4[0].q)
                            zmm1 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                            *rdi_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                            rdi_2[1] = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                            zmm6 = _mm_unpackhi_epi16(zmm6, zmm4[0].q)
                            zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                            rdi_2[2] = _mm_unpacklo_epi32(zmm6, zmm5[0].q)
                            rdi_2[3] = _mm_unpackhi_epi32(zmm6, zmm5[0].q)
                            rdi_2 = &rdi_2[4]
                            r10_2 = &r10_2[1]
                            rdx_17 = &rdx_17[1]
                            r11_2 = &r11_2[1]
                            rsi_3 = &rsi_3[1]
                            j_13 = j_36
                            j_36 -= 1
                        while (j_13 != 1)
                    
                    if (j_43 != 0)
                        int16_t* rsi_5 = rsi_3 - r10_2
                        int16_t* r11_4 = r11_2 - r10_2
                        int16_t* rdx_18 = rdx_17 - r10_2
                        int64_t j_41 = j_43
                        int64_t j_14
                        
                        do
                            *rdi_2 = *(rsi_5 + r10_2)
                            *(rdi_2 + 2) = *(r11_4 + r10_2)
                            (*rdi_2)[1].w = *(rdx_18 + r10_2)
                            *(rdi_2 + 6) = *r10_2
                            rdi_2 = &(*rdi_2)[2]
                            r10_2 += 2
                            j_14 = j_41
                            j_41 -= 1
                        while (j_14 != 1)
                else
                    int16_t r12_2 = *(r12_1 + 0xb2)
                    int32_t (* r10_1)[0x4] = var_98
                    j_30.b = (r11_2.b & 0xf) == 0
                    rax_36.b = (rsi_3.b & 0xf) == 0
                    j_30.b &= rax_36.b
                    char rdx_15 = 0
                    
                    if ((r10_1.b & 0xf) == 0)
                        rdx_15 = j_30.b
                    
                    uint64_t rax_39 = zx.q(rdi_2.d) & 0xf
                    
                    if (rdx_15 != 0)
                        zmm6 = zx.o(sx.d(r12_2))
                        zmm6 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm6, zmm6.q), 0)
                        
                        if (rax_39 == 0)
                            if (j_42 != 0)
                                int64_t j_34 = j_42
                                int64_t j_15
                                
                                do
                                    zmm5 = *rsi_3
                                    zmm3 = *r11_2
                                    zmm4 = *r10_1
                                    zmm2 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                    zmm1 = _mm_unpacklo_epi16(zmm4, zmm6.q)
                                    *rdi_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                    rdi_2[1] = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                    zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                    zmm4 = _mm_unpackhi_epi16(zmm4, zmm6.q)
                                    rdi_2[2] = _mm_unpacklo_epi32(zmm5, zmm4[0].q)
                                    rdi_2[3] = _mm_unpackhi_epi32(zmm5, zmm4[0].q)
                                    rdi_2 = &rdi_2[4]
                                    r10_1 = &r10_1[1]
                                    r11_2 = &r11_2[1]
                                    rsi_3 = &rsi_3[1]
                                    j_15 = j_34
                                    j_34 -= 1
                                while (j_15 != 1)
                        else if (j_42 != 0)
                            int64_t j_33 = j_42
                            int64_t j_16
                            
                            do
                                zmm5 = *rsi_3
                                zmm3 = *r11_2
                                zmm4 = *r10_1
                                zmm2 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                zmm1 = _mm_unpacklo_epi16(zmm4, zmm6.q)
                                *rdi_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                rdi_2[1] = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                zmm4 = _mm_unpackhi_epi16(zmm4, zmm6.q)
                                rdi_2[2] = _mm_unpacklo_epi32(zmm5, zmm4[0].q)
                                rdi_2[3] = _mm_unpackhi_epi32(zmm5, zmm4[0].q)
                                rdi_2 = &rdi_2[4]
                                r10_1 = &r10_1[1]
                                r11_2 = &r11_2[1]
                                rsi_3 = &rsi_3[1]
                                j_16 = j_33
                                j_33 -= 1
                            while (j_16 != 1)
                    else
                        zmm6 = zx.o(sx.d(r12_2))
                        zmm6 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm6, zmm6.q), 0)
                        
                        if (rax_39 == 0)
                            if (j_42 != 0)
                                int64_t j_32 = j_42
                                int64_t j_17
                                
                                do
                                    zmm5 = *rsi_3
                                    zmm3 = *r11_2
                                    zmm4 = *r10_1
                                    zmm2 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                    zmm1 = _mm_unpacklo_epi16(zmm4, zmm6.q)
                                    *rdi_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                    rdi_2[1] = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                    zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                    zmm4 = _mm_unpackhi_epi16(zmm4, zmm6.q)
                                    rdi_2[2] = _mm_unpacklo_epi32(zmm5, zmm4[0].q)
                                    rdi_2[3] = _mm_unpackhi_epi32(zmm5, zmm4[0].q)
                                    rdi_2 = &rdi_2[4]
                                    r10_1 = &r10_1[1]
                                    r11_2 = &r11_2[1]
                                    rsi_3 = &rsi_3[1]
                                    j_17 = j_32
                                    j_32 -= 1
                                while (j_17 != 1)
                        else if (j_42 != 0)
                            int64_t j_31 = j_42
                            int64_t j_18
                            
                            do
                                zmm5 = *rsi_3
                                zmm3 = *r11_2
                                zmm4 = *r10_1
                                zmm2 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                zmm1 = _mm_unpacklo_epi16(zmm4, zmm6.q)
                                *rdi_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                rdi_2[1] = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                zmm4 = _mm_unpackhi_epi16(zmm4, zmm6.q)
                                rdi_2[2] = _mm_unpacklo_epi32(zmm5, zmm4[0].q)
                                rdi_2[3] = _mm_unpackhi_epi32(zmm5, zmm4[0].q)
                                rdi_2 = &rdi_2[4]
                                r10_1 = &r10_1[1]
                                r11_2 = &r11_2[1]
                                rsi_3 = &rsi_3[1]
                                j_18 = j_31
                                j_31 -= 1
                            while (j_18 != 1)
                    
                    if (j_43 != 0)
                        int16_t* rsi_4 = rsi_3 - r10_1
                        int16_t* r11_3 = r11_2 - r10_1
                        int64_t j_35 = j_43
                        int64_t j_19
                        
                        do
                            *rdi_2 = *(rsi_4 + r10_1)
                            *(rdi_2 + 2) = *(r11_3 + r10_1)
                            (*rdi_2)[1].w = *r10_1
                            r10_1 += 2
                            *(rdi_2 + 6) = r12_2
                            rdi_2 = &(*rdi_2)[2]
                            j_19 = j_35
                            j_35 -= 1
                        while (j_19 != 1)
                
                if (r15_3 == 8)
                    void* rcx_15 = *(*(arg1 + 0x10) + 0x138)
                    int32_t (* var_78)[0x4]
                    void* rax_53
                    
                    if (*(rcx_15 + 0x190) == 0)
                        int128_t* r10_4 = var_80
                        int32_t (* var_70)[0x4]
                        int32_t (* r11_6)[0x4] = var_70
                        rcx_15.b = (r11_6.b & 0xf) == 0
                        int32_t (* rdi_4)[0x4] = var_78
                        rax_53.b = (rdi_4.b & 0xf) == 0
                        rcx_15.b &= rax_53.b
                        bool r8_10 = false
                        
                        if ((r10_4.b & 0xf) == 0)
                            r8_10 = rcx_15.b
                        
                        int32_t (* rdx_21)[0x4] = var_88
                        uint64_t rax_64 = zx.q(rbx_2.d) & 0xf
                        
                        if ((r8_10 & (rdx_21.b & 0xf) == 0) != 0)
                            if (rax_64 == 0)
                                if (j_42 != 0)
                                    int64_t j_20
                                    
                                    do
                                        zmm6 = *rdx_21
                                        zmm4 = *r10_4
                                        zmm5 = *rdi_4
                                        zmm3 = *r11_6
                                        zmm2 = _mm_unpacklo_epi16(zmm6, zmm4[0].q)
                                        zmm1 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                        *rbx_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                        *(rbx_2 + 0x10) = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                        zmm6 = _mm_unpackhi_epi16(zmm6, zmm4[0].q)
                                        zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                        *(rbx_2 + 0x20) = _mm_unpacklo_epi32(zmm6, zmm5[0].q)
                                        *(rbx_2 + 0x30) = _mm_unpackhi_epi32(zmm6, zmm5[0].q)
                                        rbx_2 += 0x40
                                        r11_6 = &r11_6[1]
                                        rdi_4 = &rdi_4[1]
                                        r10_4 = &r10_4[1]
                                        rdx_21 = &rdx_21[1]
                                        j_20 = j_42
                                        j_42 -= 1
                                    while (j_20 != 1)
                            else if (j_42 != 0)
                                int64_t j_21
                                
                                do
                                    zmm6 = *rdx_21
                                    zmm4 = *r10_4
                                    zmm5 = *rdi_4
                                    zmm3 = *r11_6
                                    zmm2 = _mm_unpacklo_epi16(zmm6, zmm4[0].q)
                                    zmm1 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                    *rbx_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                    *(rbx_2 + 0x10) = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                    zmm6 = _mm_unpackhi_epi16(zmm6, zmm4[0].q)
                                    zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                    *(rbx_2 + 0x20) = _mm_unpacklo_epi32(zmm6, zmm5[0].q)
                                    *(rbx_2 + 0x30) = _mm_unpackhi_epi32(zmm6, zmm5[0].q)
                                    rbx_2 += 0x40
                                    r11_6 = &r11_6[1]
                                    rdi_4 = &rdi_4[1]
                                    r10_4 = &r10_4[1]
                                    rdx_21 = &rdx_21[1]
                                    j_21 = j_42
                                    j_42 -= 1
                                while (j_21 != 1)
                        else if (rax_64 == 0)
                            if (j_42 != 0)
                                int64_t j_22
                                
                                do
                                    zmm6 = *rdx_21
                                    zmm4 = *r10_4
                                    zmm5 = *rdi_4
                                    zmm3 = *r11_6
                                    zmm2 = _mm_unpacklo_epi16(zmm6, zmm4[0].q)
                                    zmm1 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                    *rbx_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                    *(rbx_2 + 0x10) = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                    zmm6 = _mm_unpackhi_epi16(zmm6, zmm4[0].q)
                                    zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                    *(rbx_2 + 0x20) = _mm_unpacklo_epi32(zmm6, zmm5[0].q)
                                    *(rbx_2 + 0x30) = _mm_unpackhi_epi32(zmm6, zmm5[0].q)
                                    rbx_2 += 0x40
                                    r11_6 = &r11_6[1]
                                    rdi_4 = &rdi_4[1]
                                    r10_4 = &r10_4[1]
                                    rdx_21 = &rdx_21[1]
                                    j_22 = j_42
                                    j_42 -= 1
                                while (j_22 != 1)
                        else if (j_42 != 0)
                            int64_t j_23
                            
                            do
                                zmm6 = *rdx_21
                                zmm4 = *r10_4
                                zmm5 = *rdi_4
                                zmm3 = *r11_6
                                zmm2 = _mm_unpacklo_epi16(zmm6, zmm4[0].q)
                                zmm1 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                *rbx_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                *(rbx_2 + 0x10) = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                zmm6 = _mm_unpackhi_epi16(zmm6, zmm4[0].q)
                                zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                *(rbx_2 + 0x20) = _mm_unpacklo_epi32(zmm6, zmm5[0].q)
                                *(rbx_2 + 0x30) = _mm_unpackhi_epi32(zmm6, zmm5[0].q)
                                rbx_2 += 0x40
                                r11_6 = &r11_6[1]
                                rdi_4 = &rdi_4[1]
                                r10_4 = &r10_4[1]
                                rdx_21 = &rdx_21[1]
                                j_23 = j_42
                                j_42 -= 1
                            while (j_23 != 1)
                        
                        if (j_43 != 0)
                            int64_t j_24
                            
                            do
                                *rbx_2 = *rdx_21
                                rdx_21 += 2
                                *(rbx_2 + 2) = *r10_4
                                r10_4 += 2
                                *(rbx_2 + 4) = *rdi_4
                                rdi_4 += 2
                                *(rbx_2 + 6) = *r11_6
                                rbx_2 += 8
                                r11_6 += 2
                                j_24 = j_43
                                j_43 -= 1
                            while (j_24 != 1)
                    else
                        int16_t rsi_6 = *(rcx_15 + 0x192)
                        int32_t (* r10_3)[0x4] = var_88
                        int32_t (* r11_5)[0x4] = var_78
                        rcx_15.b = (r11_5.b & 0xf) == 0
                        int128_t* rdi_3 = var_80
                        rax_53.b = (rdi_3.b & 0xf) == 0
                        rcx_15.b &= rax_53.b
                        char rdx_19 = 0
                        
                        if ((r10_3.b & 0xf) == 0)
                            rdx_19 = rcx_15.b
                        
                        uint64_t rax_56 = zx.q(rbx_2.d) & 0xf
                        
                        if (rdx_19 != 0)
                            zmm6 = zx.o(sx.d(rsi_6))
                            zmm6 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm6, zmm6.q), 0)
                            
                            if (rax_56 == 0)
                                if (j_42 != 0)
                                    int64_t j_25
                                    
                                    do
                                        zmm5 = *r10_3
                                        zmm3 = *rdi_3
                                        zmm4 = *r11_5
                                        zmm2 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                        zmm1 = _mm_unpacklo_epi16(zmm4, zmm6.q)
                                        *rbx_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                        *(rbx_2 + 0x10) = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                        zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                        zmm4 = _mm_unpackhi_epi16(zmm4, zmm6.q)
                                        *(rbx_2 + 0x20) = _mm_unpacklo_epi32(zmm5, zmm4[0].q)
                                        *(rbx_2 + 0x30) = _mm_unpackhi_epi32(zmm5, zmm4[0].q)
                                        rbx_2 += 0x40
                                        r11_5 = &r11_5[1]
                                        rdi_3 = &rdi_3[1]
                                        r10_3 = &r10_3[1]
                                        j_25 = j_42
                                        j_42 -= 1
                                    while (j_25 != 1)
                            else if (j_42 != 0)
                                int64_t j_26
                                
                                do
                                    zmm5 = *r10_3
                                    zmm3 = *rdi_3
                                    zmm4 = *r11_5
                                    zmm2 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                    zmm1 = _mm_unpacklo_epi16(zmm4, zmm6.q)
                                    *rbx_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                    *(rbx_2 + 0x10) = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                    zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                    zmm4 = _mm_unpackhi_epi16(zmm4, zmm6.q)
                                    *(rbx_2 + 0x20) = _mm_unpacklo_epi32(zmm5, zmm4[0].q)
                                    *(rbx_2 + 0x30) = _mm_unpackhi_epi32(zmm5, zmm4[0].q)
                                    rbx_2 += 0x40
                                    r11_5 = &r11_5[1]
                                    rdi_3 = &rdi_3[1]
                                    r10_3 = &r10_3[1]
                                    j_26 = j_42
                                    j_42 -= 1
                                while (j_26 != 1)
                        else
                            zmm6 = zx.o(sx.d(rsi_6))
                            zmm6 = _mm_shuffle_epi32(_mm_unpacklo_epi16(zmm6, zmm6.q), 0)
                            
                            if (rax_56 == 0)
                                if (j_42 != 0)
                                    int64_t j_27
                                    
                                    do
                                        zmm5 = *r10_3
                                        zmm3 = *rdi_3
                                        zmm4 = *r11_5
                                        zmm2 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                        zmm1 = _mm_unpacklo_epi16(zmm4, zmm6.q)
                                        *rbx_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                        *(rbx_2 + 0x10) = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                        zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                        zmm4 = _mm_unpackhi_epi16(zmm4, zmm6.q)
                                        *(rbx_2 + 0x20) = _mm_unpacklo_epi32(zmm5, zmm4[0].q)
                                        *(rbx_2 + 0x30) = _mm_unpackhi_epi32(zmm5, zmm4[0].q)
                                        rbx_2 += 0x40
                                        r11_5 = &r11_5[1]
                                        rdi_3 = &rdi_3[1]
                                        r10_3 = &r10_3[1]
                                        j_27 = j_42
                                        j_42 -= 1
                                    while (j_27 != 1)
                            else if (j_42 != 0)
                                int64_t j_28
                                
                                do
                                    zmm5 = *r10_3
                                    zmm3 = *rdi_3
                                    zmm4 = *r11_5
                                    zmm2 = _mm_unpacklo_epi16(zmm5, zmm3[0].q)
                                    zmm1 = _mm_unpacklo_epi16(zmm4, zmm6.q)
                                    *rbx_2 = _mm_unpacklo_epi32(zmm2, zmm1[0].q)
                                    *(rbx_2 + 0x10) = _mm_unpackhi_epi32(zmm2, zmm1[0].q)
                                    zmm5 = _mm_unpackhi_epi16(zmm5, zmm3[0].q)
                                    zmm4 = _mm_unpackhi_epi16(zmm4, zmm6.q)
                                    *(rbx_2 + 0x20) = _mm_unpacklo_epi32(zmm5, zmm4[0].q)
                                    *(rbx_2 + 0x30) = _mm_unpackhi_epi32(zmm5, zmm4[0].q)
                                    rbx_2 += 0x40
                                    r11_5 = &r11_5[1]
                                    rdi_3 = &rdi_3[1]
                                    r10_3 = &r10_3[1]
                                    j_28 = j_42
                                    j_42 -= 1
                                while (j_28 != 1)
                        
                        if (j_43 != 0)
                            int64_t j_29
                            
                            do
                                *rbx_2 = *r10_3
                                r10_3 += 2
                                *(rbx_2 + 2) = *rdi_3
                                rdi_3 += 2
                                *(rbx_2 + 4) = *r11_5
                                r11_5 += 2
                                *(rbx_2 + 6) = rsi_6
                                rbx_2 += 8
                                j_29 = j_43
                                j_43 -= 1
                            while (j_29 != 1)
        rdi = arg1
    
    rcx_6 += var_140

__security_check_cookie(rax_1 ^ &var_188)
return i_1
