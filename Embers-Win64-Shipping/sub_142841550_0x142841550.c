// 函数: sub_142841550
// 地址: 0x142841550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_58 = zmm6
int64_t r14 = arg4
float zmm7[0x4]
float var_68[0x4] = zmm7
char* result_1 = arg3
float zmm8[0x4]
float var_78[0x4] = zmm8
float (* rdi)[0x4] = arg1
uint64_t result

if (arg1 == 0)
    result.b = 0
else
    int64_t count = arg2 << 4
    result = zx.q(arg5 - 2)
    void* rbp_1 = &arg1[arg2]
    int16_t var_88
    uint128_t zmm0
    float zmm1[0x4]
    float zmm2[0x4]
    float zmm3[0x4]
    
    if (result.d u> 0xbc)
        result.b = 0
    else
        switch (&__dos_header.e_magic[zx.q(jump_table_142843ee0[zx.q(lookup_table_142843ff8[sx.q(
                result.d)])])])
            case 0x1428415c0
                if (r14 u> count)
                    r14 = count
                
                if (r14 == 0)
                labelid_1:
                    result.b = 1
                else if (result_1 == 0 || count u< r14)
                    memset(rdi, 0, count)
                    
                    if (result_1 == 0)
                        *_errno() = 0x16
                        _invalid_parameter_noinfo()
                        result.b = 1
                    else if (count u>= r14)
                    labelid_1:
                        result.b = 1
                    else
                        *_errno() = 0x22
                        _invalid_parameter_noinfo()
                        result.b = 1
                else
                    memcpy(rdi, result_1, r14.d)
                    result.b = 1
            case 0x14284163c
                if (r14 u< 0x10)
                    result.b = 0
                else if (r14 == 0xf)
                labelid_1:
                    result.b = 1
                else
                    uint128_t* rcx_5 = result_1 - rdi
                    
                    do
                        if (rdi u>= rbp_1)
                            goto label_142843eb6_2
                        
                        zmm0 = *(rcx_5 + rdi)
                        zmm1 = data_143702c30
                        zmm3 = _mm_and_ps(data_143702c70, zmm0)
                        *rdi = _mm_add_ps(_mm_and_ps(zmm1, _mm_srai_epi32(zmm3, 0x1f)), 
                            _mm_cvtepi32_ps(zmm3 ^ zmm0))
                        rdi = &rdi[1]
                    while (rcx_5 - result_1 + rdi u< r14 - 0xf)
                    
                    result.b = 1
            case 0x1428416a5
                if (r14 u< 0x10)
                    result.b = 0
                else if (r14 == 0xf)
                labelid_1:
                    result.b = 1
                else
                    uint128_t* rcx_7 = result_1 - rdi
                    
                    do
                        if (rdi u>= rbp_1)
                            goto label_142843eb6_2
                        
                        *rdi = _mm_cvtepi32_ps(*(rcx_7 + rdi))
                        rdi = &rdi[1]
                    while (rcx_7 - result_1 + rdi u< r14 - 0xf)
                    
                    result.b = 1
            case 0x1428416ed
                if (r14 u< 0xc)
                    result.b = 0
                else
                    int64_t i = 0
                    
                    if (r14 == 0xb)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            result = result_1
                            result_1 = &result_1[0xc]
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            i += 0xc
                            zmm3 = data_143702c40
                            *rdi = _mm_or_ps(
                                _mm_and_ps(zx.o(*result)[0].q | (*(result + 8)).q << 0x40, zmm3), 
                                __andnps_xmmxud_memxud(zmm3, data_143702d30))
                            rdi = &rdi[1]
                        while (i u< r14 - 0xb)
                        
                        result.b = 1
            case 0x142841757
                if (r14 u< 0xc)
                    result.b = 0
                else
                    int64_t i_1 = 0
                    
                    if (r14 == 0xb)
                    labelid_1:
                        result.b = 1
                    else
                        void* rsi = &result_1[8]
                        
                        do
                            zmm2 = zx.o(*(rsi - 8))
                            zmm0 = *rsi
                            rsi += 0xc
                            zmm2 = zmm2[0].q | zmm0.q << 0x40
                            zmm0 = _mm_and_ps(data_143702c70, zmm2)
                            zmm3 = zmm0
                            zmm0 = _mm_srai_epi32(zmm0, 0x1f)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = data_143702c40
                            i_1 += 0xc
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    _mm_add_ps(_mm_and_ps(data_143702c30, zmm0), 
                                        _mm_cvtepi32_ps(zmm3 ^ zmm2)), 
                                    zmm1), 
                                __andnps_xmmxud_memxud(zmm1, data_143702d30))
                            rdi = &rdi[1]
                        while (i_1 u< r14 - 0xb)
                        
                        result.b = 1
            case 0x1428417e9
                if (r14 u< 0xc)
                    result.b = 0
                else
                    int64_t i_2 = 0
                    
                    if (r14 == 0xb)
                    labelid_1:
                        result.b = 1
                    else
                        void* rsi_1 = &result_1[8]
                        
                        do
                            zmm2 = zx.o(*(rsi_1 - 8))
                            zmm0 = *rsi_1
                            rsi_1 += 0xc
                            zmm2 = zmm2[0].q | zmm0.q << 0x40
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702c40
                            i_2 += 0xc
                            *rdi = _mm_or_ps(_mm_and_ps(_mm_cvtepi32_ps(zmm2), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_2 u< r14 - 0xb)
                        
                        result.b = 1
            case 0x142841857
                if (r14 u< 8)
                    result.b = 0
                else
                    char* result_23 = result_1
                    
                    if (r14 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            char* result_24 = result_23
                            result_23 = &result_23[8]
                            float zmm0_1[0x4] = sub_14283fa80(*(result_24 + 6))
                            float zmm0_2[0x4] = sub_14283fa80(*(result_24 + 4))
                            int128_t zmm0_3 = sub_14283fa80(*(result_24 + 2))
                            float zmm0_4[0x4] = _mm_unpacklo_ps(sub_14283fa80(*result_24), zmm0_3.q)
                            zmm8 = _mm_unpacklo_ps(zmm0_2, zmm0_1[0].q)
                            *rdi = zmm0_4[0].q | zmm8[0].q << 0x40
                            rdi = &rdi[1]
                        while (result_23 - result_1 u< r14 - 7)
                        
                        result.b = 1
            case 0x1428418d1
                if (r14 u< 8)
                    result.b = 0
                else
                    int64_t* result_2 = result_1
                    
                    if (r14 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = zx.o(*result_2)
                            result_2 = &result_2[1]
                            zmm1 = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_pd(zmm0, zmm0, 0), data_143702de0)
                                        ^ data_143702cc0), 
                                    data_1434d6200), 
                                data_1434d61f0)
                            *rdi = _mm_shuffle_ps(zmm1, zmm1, 0xd8)
                            rdi = &rdi[1]
                        while (result_2 - result_1 u< r14 - 7)
                        
                        result.b = 1
            case 0x142841942
                if (r14 u< 8)
                    result.b = 0
                else
                    int64_t* result_3 = result_1
                    
                    if (r14 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = zx.o(*result_3)
                            result_3 = &result_3[1]
                            zmm1 = __addps_xmmps_memps(
                                __mulps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_pd(zmm0, zmm0, 0), data_143702de0)
                                        ^ data_143702cc0), 
                                    data_143702dc0), 
                                data_1434d6210)
                            *rdi = _mm_shuffle_ps(zmm1, zmm1, 0xd8)
                            rdi = &rdi[1]
                        while (result_3 - result_1 u< r14 - 7)
                        
                        result.b = 1
            case 0x1428419b2
                if (r14 u< 8)
                    result.b = 0
                else
                    int64_t* result_4 = result_1
                    
                    if (r14 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = zx.o(*result_4)
                            result_4 = &result_4[1]
                            zmm1 = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_pd(zmm0, zmm0, 0), data_143702de0)
                                        ^ data_143702dd0), 
                                    data_143702d00), 
                                data_143702c60)
                            *rdi = __maxps_xmmps_memps(_mm_shuffle_ps(zmm1, zmm1, 0xd8), 
                                data_143702cd0)
                            rdi = &rdi[1]
                        while (result_4 - result_1 u< r14 - 7)
                        
                        result.b = 1
            case 0x142841a29
                if (r14 u< 8)
                    result.b = 0
                else
                    int64_t* result_5 = result_1
                    
                    if (r14 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = zx.o(*result_5)
                            result_5 = &result_5[1]
                            zmm1 = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_pd(zmm0, zmm0, 0), data_143702de0)
                                        ^ data_143702dd0), 
                                    data_143702d00), 
                                data_143702dc0)
                            *rdi = _mm_shuffle_ps(zmm1, zmm1, 0xd8)
                            rdi = &rdi[1]
                        while (result_5 - result_1 u< r14 - 7)
                        
                        result.b = 1
            case 0x142841a92
                if (r14 u< 8)
                    result.b = 0
                else
                    int64_t i_3 = 0
                    
                    if (r14 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            result = result_1
                            result_1 = &result_1[8]
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm3 = data_143702e10
                            i_3 += 8
                            *rdi = _mm_or_ps(_mm_and_ps(zx.o(*result), zmm3), 
                                __andnps_xmmxud_memxud(zmm3, data_143702d30))
                            rdi = &rdi[1]
                        while (i_3 u< r14 - 7)
                        
                        result.b = 1
            case 0x142841aef
                if (r14 u< 8)
                    result.b = 0
                else
                    int64_t i_4 = 0
                    
                    if (r14 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm2 = zx.o(*result_1)
                            result_1 = &result_1[8]
                            zmm0 = _mm_and_ps(data_143702c70, zmm2)
                            zmm3 = zmm0
                            zmm0 = _mm_srai_epi32(zmm0, 0x1f)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = data_143702e10
                            i_4 += 8
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    _mm_add_ps(_mm_and_ps(data_143702c30, zmm0), 
                                        _mm_cvtepi32_ps(zmm3 ^ zmm2)), 
                                    zmm1), 
                                __andnps_xmmxud_memxud(zmm1, data_143702d30))
                            rdi = &rdi[1]
                        while (i_4 u< r14 - 7)
                        
                        result.b = 1
            case 0x142841b71
                if (r14 u< 8)
                    result.b = 0
                else
                    int64_t i_5 = 0
                    
                    if (r14 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm2 = zx.o(*result_1)
                            result_1 = &result_1[8]
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            i_5 += 8
                            *rdi = _mm_or_ps(_mm_and_ps(_mm_cvtepi32_ps(zmm2), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_5 u< r14 - 7)
                        
                        result.b = 1
            case 0x142841bcf
                if (r14 u< 8)
                    result.b = 0
                else if (r14 == 7)
                labelid_1:
                    result.b = 1
                else
                    float (* i_6)[0x4] = nullptr
                    
                    do
                        if (rdi u>= rbp_1)
                            goto label_142843eb6_2
                        
                        result = zx.q(*(arg3 + i_6 + 4))
                        zmm2 = *(i_6 + arg3)
                        i_6 = &(*i_6)[2]
                        *rdi = _mm_unpacklo_ps(zmm2, _mm_cvtepi32_ps(zx.o(result.d)).q)[0].q
                            | data_142d4cc20[0].q << 0x40
                        rdi = &rdi[1]
                    while (i_6 u< r14 - 7)
                    
                    result.b = 1
            case 0x142841c25
                if (r14 u< 8)
                    result.b = 0
                else
                    float (* result_6)[0x4] = result_1
                    
                    if (r14 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = *result_6
                            result_6 = &(*result_6)[2]
                            *rdi = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            rdi = &rdi[1]
                        while (result_6 - result_1 u< r14 - 7)
                        
                        result.b = 1
            case 0x142841c71
                if (r14 u< 8)
                    result.b = 0
                else if (r14 == 7)
                labelid_1:
                    result.b = 1
                else
                    int64_t i_7 = 0
                    
                    do
                        if (rdi u>= rbp_1)
                            goto label_142843eb6_2
                        
                        result = zx.q(arg3[i_7 + 4])
                        i_7 += 8
                        *rdi = _mm_unpacklo_ps(zx.o(0), 
                            _mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(result.d)), 0x3f800000)[0].q)
                        rdi = &rdi[1]
                    while (i_7 u< r14 - 7)
                    
                    result.b = 1
            case 0x142841cc6
                if (r14 u< 4)
                    result.b = 0
                else
                    uint128_t* result_7 = result_1
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = *result_7
                            result_7 += 4
                            *rdi = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_143702b70)
                                        ^ data_143702c10), 
                                    data_143702c00), 
                                data_1434d6220)
                            rdi = &rdi[1]
                        while (result_7 - result_1 u< r14 - 3)
                        
                        result.b = 1
            case 0x142841d2d
                if (r14 u< 4)
                    result.b = 0
                else
                    uint128_t* result_8 = result_1
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = *result_8
                            result_8 += 4
                            *rdi = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__psubd_xmmdq_memdq(
                                        __andps_xmmxud_memxud(_mm_shuffle_ps(zmm0, zmm0, 0), 
                                            data_143702b70), 
                                        data_1434d6240) ^ data_143702c10), 
                                    data_143702c00), 
                                data_1434d6230)
                            rdi = &rdi[1]
                        while (result_8 - result_1 u< r14 - 3)
                        
                        result.b = 1
            case 0x142841d99
                if (r14 u< 4)
                    result.b = 0
                else
                    uint128_t* result_9 = result_1
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = *result_9
                            result_9 += 4
                            *rdi = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_143702b70)
                                        ^ data_143702c10), 
                                    data_143702c00), 
                                data_143702d60)
                            rdi = &rdi[1]
                        while (result_9 - result_1 u< r14 - 3)
                        
                        result.b = 1
            case 0x142841dfd
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_8 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            uint32_t zmm0_5[0x4]
                            zmm0_5, result = sub_14283fb00(result_1)
                            result_1 = &result_1[4]
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = data_143702c40
                            i_8 += 4
                            zmm2 = zmm1
                            zmm1 = __andnps_xmmxud_memxud(zmm1, data_143702d30)
                            *rdi = _mm_or_ps(_mm_and_ps(zmm2, zmm0_5), zmm1)
                            rdi = &rdi[1]
                        while (i_8 u< r14 - 3)
                        
                        result.b = 1
            case 0x142841e56
                if (r14 u< 4)
                    result.b = 0
                else
                    uint128_t* result_10 = result_1
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = *result_10
                            result_10 += 4
                            *rdi = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_143702bb0)
                                        ^ data_143702c10), 
                                    data_143702c00), 
                                data_1434d6250)
                            rdi = &rdi[1]
                        while (result_10 - result_1 u< r14 - 3)
                        
                        result.b = 1
            case 0x142841ebd
                if (r14 u< 4)
                    result.b = 0
                else
                    uint128_t* result_11 = result_1
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = *result_11
                            result_11 += 4
                            *rdi = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_143702bb0)
                                        ^ data_143702c10), 
                                    data_143702c00), 
                                data_1434d6260)
                            rdi = &rdi[1]
                        while (result_11 - result_1 u< r14 - 3)
                        
                        result.b = 1
            case 0x142841f21
                if (r14 u< 4)
                    result.b = 0
                else
                    uint128_t* result_12 = result_1
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = *result_12
                            result_12 += 4
                            *rdi = __maxps_xmmps_memps(
                                __mulps_xmmps_memps(
                                    __addps_xmmps_memps(
                                        _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                            _mm_shuffle_ps(zmm0, zmm0, 0), data_143702bb0)
                                            ^ data_143702d20), 
                                        data_143702e00), 
                                    data_1434d6270), 
                                data_143702cd0)
                            rdi = &rdi[1]
                        while (result_12 - result_1 u< r14 - 3)
                        
                        result.b = 1
            case 0x142841f94
                if (r14 u< 4)
                    result.b = 0
                else
                    uint128_t* result_13 = result_1
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = *result_13
                            result_13 += 4
                            *rdi = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_143702bb0)
                                        ^ data_143702d20), 
                                    data_143702e00), 
                                data_1434d6280)
                            rdi = &rdi[1]
                        while (result_13 - result_1 u< r14 - 3)
                        
                        result.b = 1
            case 0x142841ffd
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_9 = 0
                    
                    if (arg4 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            char* result_22 = result_1
                            result_1 = &result_1[4]
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm7 = data_143702e10
                            int128_t zmm0_6 = sub_14283fa80(*(result_22 + 2))
                            uint32_t zmm0_7[0x4]
                            zmm0_7, result = sub_14283fa80(*result_22)
                            i_9 += 4
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    _mm_unpacklo_ps(zmm0_7, zmm0_6.q)[0].q | zx.o(0)[0].q << 0x40, 
                                    zmm7), 
                                __andnps_xmmxud_memxud(zmm7, data_143702d30))
                            rdi = &rdi[1]
                        while (i_9 u< arg4 - 3)
                        
                        result.b = 1
            case 0x14284207a
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_10 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm1 = *result_1
                            result_1 = &result_1[4]
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_143702be0)
                                ^ data_143702b60
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            i_10 += 4
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    __mulps_xmmps_memps(
                                        __addps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_1434d6130), 
                                        data_1434d6120), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_10 u< r14 - 3)
                        
                        result.b = 1
            case 0x1428420ef
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_11 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm1 = *result_1
                            result_1 = &result_1[4]
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_143702be0)
                                ^ data_143702b60
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            i_11 += 4
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    __addps_xmmps_memps(
                                        __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_143702bf0), 
                                        data_1434d6140), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_11 u< r14 - 3)
                        
                        result.b = 1
            case 0x14284216f
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_12 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm1 = *result_1
                            result_1 = &result_1[4]
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_143702be0)
                                ^ data_143702c80
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            i_12 += 4
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    __maxps_xmmps_memps(
                                        __mulps_xmmps_memps(
                                            __addps_xmmps_memps(_mm_cvtepi32_ps(zmm1), 
                                                data_143702ce0), 
                                            data_143702db0), 
                                        data_143702cd0), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_12 u< r14 - 3)
                        
                        result.b = 1
            case 0x1428421f6
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_13 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm1 = *result_1
                            result_1 = &result_1[4]
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_143702be0)
                                ^ data_143702c80
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            i_13 += 4
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    __mulps_xmmps_memps(
                                        __addps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_143702ce0), 
                                        data_143702bf0), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_13 u< r14 - 3)
                        
                        result.b = 1
            case 0x14284226f
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_14 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            result = result_1
                            result_1 = &result_1[4]
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm2 = data_143702cb0
                            i_14 += 4
                            *rdi = _mm_or_ps(_mm_and_ps(*result, zmm2), 
                                __andnps_xmmxud_memxud(zmm2, data_143702d30))
                            rdi = &rdi[1]
                        while (i_14 u< r14 - 3)
                        
                        result.b = 1
            case 0x1428422cf
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_15 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        zmm3 = data_142d3f670
                        
                        do
                            zmm1 = *result_1
                            result_1 = &result_1[4]
                            zmm2 = _mm_and_ps(data_143702c70, zmm1)
                            zmm0 = zmm2
                            zmm2 = _mm_srai_epi32(zmm2, 0x1f)
                            zmm0 ^= zmm1
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm2 = __andps_xmmxud_memxud(zmm2, data_143702c30)
                            i_15 += 4
                            zmm1 = data_143702cb0
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    _mm_mul_ps(_mm_add_ps(zmm2, _mm_cvtepi32_ps(zmm0)), zmm3), 
                                    zmm1), 
                                __andnps_xmmxud_memxud(zmm1, data_143702d30))
                            rdi = &rdi[1]
                        while (i_15 u< r14 - 3)
                        
                        result.b = 1
            case 0x142842351
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_16 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        zmm2 = data_142d3f670
                        
                        do
                            zmm1 = *result_1
                            result_1 = &result_1[4]
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702cb0
                            i_16 += 4
                            *rdi = _mm_or_ps(
                                _mm_and_ps(_mm_mul_ps(_mm_cvtepi32_ps(zmm1), zmm2), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_16 u< r14 - 3)
                        
                        result.b = 1
            case 0x1428423b2
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_17 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            int32_t rcx_15 = *result_1
                            result_1 = &result_1[4]
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            i_17 += 4
                            zmm0.d = float.s(zx.q(rcx_15) & 0xffffff)
                            zmm0.d = zmm0.d f* 5.96046519e-08f
                            *rdi = _mm_unpacklo_ps(zmm0, 
                                _mm_cvtepi32_ps(zx.o(rcx_15 u>> 0x18))[0].q)[0].q
                                | data_142d4cc20[0].q << 0x40
                            rdi = &rdi[1]
                        while (i_17 u< r14 - 3)
                        
                        result.b = 1
            case 0x142842426
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_18 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            int32_t rax_23 = *result_1
                            result_1 = &result_1[4]
                            zmm1 = zx.o(0)
                            zmm1[0] = float.s(zx.q(rax_23) & 0xffffff)
                            zmm1[0] = zmm1[0] * 5.96046519e-08f
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            i_18 += 4
                            *rdi = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            rdi = &rdi[1]
                        while (i_18 u< r14 - 3)
                        
                        result.b = 1
            case 0x14284248e
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_19 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        void* rsi_2 = &result_1[3]
                        
                        do
                            result = zx.q(*rsi_2)
                            rsi_2 += 4
                            zmm1 = _mm_cvtepi32_ps(zx.o(result.d))
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            i_19 += 4
                            *rdi = _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zmm1, 0x3f800000)[0].q)
                            rdi = &rdi[1]
                        while (i_19 u< r14 - 3)
                        
                        result.b = 1
            case 0x1428424e7
                if (r14 u< 2)
                    result.b = 0
                else
                    int64_t i_20 = 0
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm1 = *result_1
                            result_1 = &result_1[2]
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_1434d61a0)
                                ^ data_143702c10
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            i_20 += 2
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    __mulps_xmmps_memps(
                                        __addps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_143702c00), 
                                        data_1434d6190), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_20 u< r14 - 1)
                        
                        result.b = 1
            case 0x14284255f
                if (r14 u< 2)
                    result.b = 0
                else
                    int64_t i_21 = 0
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm1 = *result_1
                            result_1 = &result_1[2]
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_1434d61c0)
                                ^ data_143702c10
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            i_21 += 2
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    __mulps_xmmps_memps(
                                        __addps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_143702c00), 
                                        data_1434d61b0), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_21 u< r14 - 1)
                        
                        result.b = 1
            case 0x1428425df
                if (r14 u< 2)
                    result.b = 0
                else
                    int64_t i_22 = 0
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm1 = *result_1
                            result_1 = &result_1[2]
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_1434d6160)
                                ^ data_143702d20
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            i_22 += 2
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    __maxps_xmmps_memps(
                                        __mulps_xmmps_memps(
                                            __addps_xmmps_memps(_mm_cvtepi32_ps(zmm1), 
                                                data_143702e00), 
                                            data_1434d6150), 
                                        data_143702cd0), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_22 u< r14 - 1)
                        
                        result.b = 1
            case 0x142842666
                if (r14 u< 2)
                    result.b = 0
                else
                    int64_t i_23 = 0
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm1 = *result_1
                            result_1 = &result_1[2]
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_1434d6180)
                                ^ data_143702d20
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            i_23 += 2
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    __mulps_xmmps_memps(
                                        __addps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_143702e00), 
                                        data_1434d6170), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_23 u< r14 - 1)
                        
                        result.b = 1
            case 0x1428426df
                if (r14 u< 2)
                    result.b = 0
                else
                    char* result_19 = result_1
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            float zmm0_8[0x4] = sub_14283fa80(*result_19)
                            result_19 = &result_19[2]
                            *rdi = __unpcklps_xmmps_memdq(_mm_unpacklo_ps(zmm0_8, zx.o(0)[0].q), 
                                data_142d4cc20)
                            rdi = &rdi[1]
                        while (result_19 - result_1 u< r14 - 1)
                        
                        result.b = 1
            case 0x142842734
                if (r14 u< 2)
                    result.b = 0
                else
                    char* result_14 = result_1
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            uint32_t rax_25 = zx.d(*result_14)
                            result_14 = &result_14[2]
                            zmm1 = _mm_cvtepi32_ps(zx.o(rax_25))
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            *rdi = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            rdi = &rdi[1]
                        while (result_14 - result_1 u< r14 - 1)
                        
                        result.b = 1
            case 0x14284278e
                if (r14 u< 2)
                    result.b = 0
                else
                    char* result_15 = result_1
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            uint32_t rax_27 = zx.d(*result_15)
                            result_15 = &result_15[2]
                            *rdi = __unpcklps_xmmps_memdq(_mm_cvtepi32_ps(zx.o(rax_27)), 
                                data_142d4cc20)
                            rdi = &rdi[1]
                        while (result_15 - result_1 u< r14 - 1)
                        
                        result.b = 1
            case 0x1428427dc
                if (r14 u< 2)
                    result.b = 0
                else
                    char* result_16 = result_1
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            int32_t rax_29 = sx.d(*result_16)
                            result_16 = &result_16[2]
                            zmm1 = _mm_cvtepi32_ps(zx.o(rax_29))
                            zmm1[0] = zmm1[0] * 3.05185094e-05f
                            *rdi = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            rdi = &rdi[1]
                        while (result_16 - result_1 u< r14 - 1)
                        
                        result.b = 1
            case 0x14284283b
                if (r14 u< 2)
                    result.b = 0
                else
                    char* result_17 = result_1
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            int32_t rax_31 = sx.d(*result_17)
                            result_17 = &result_17[2]
                            *rdi = __unpcklps_xmmps_memdq(_mm_cvtepi32_ps(zx.o(rax_31)), 
                                data_142d4cc20)
                            rdi = &rdi[1]
                        while (result_17 - result_1 u< r14 - 1)
                        
                        result.b = 1
            case 0x142842889
                if (r14 u< 1)
                    result.b = 0
                else
                    int64_t rbx_1 = 0
                    
                    if (r14 u>= 4)
                        while (true)
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = _mm_cvtepi32_ps(zx.o(*result_1))
                            zmm1[0] = zmm1[0] * 0.00392156886f
                            *rdi = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = _mm_cvtepi32_ps(zx.o(result_1[1]))
                            zmm1[0] = zmm1[0] * 0.00392156886f
                            rdi[1] = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            
                            if (&rdi[2] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = _mm_cvtepi32_ps(zx.o(result_1[2]))
                            zmm1[0] = zmm1[0] * 0.00392156886f
                            rdi[2] = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            
                            if (&rdi[3] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            uint32_t rax_33 = zx.d(result_1[3])
                            rbx_1 += 4
                            result_1 = &result_1[4]
                            zmm1 = _mm_cvtepi32_ps(zx.o(rax_33))
                            zmm1[0] = zmm1[0] * 0.00392156886f
                            rdi[3] = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            rdi = &rdi[4]
                            
                            if (rbx_1 u>= arg4 - 3)
                                if (rbx_1 u>= r14)
                                    goto label_142843eb6_2
                                
                                break
                    
                    do
                        if (rdi u>= rbp_1)
                            goto label_142843eb6_2
                        
                        result = zx.q(*result_1)
                        rbx_1 += 1
                        result_1 = &result_1[1]
                        zmm1 = _mm_cvtepi32_ps(zx.o(result.d))
                        zmm1[0] = zmm1[0] * 0.00392156886f
                        *rdi = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                        rdi = &rdi[1]
                    while (rbx_1 u< r14)
                    
                    result.b = 1
            case 0x142842997
                if (r14 u< 1)
                    result.b = 0
                else
                    int64_t rbx_2 = 0
                    
                    if (r14 u>= 4)
                        while (true)
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            *rdi = __unpcklps_xmmps_memdq(_mm_cvtepi32_ps(zx.o(*result_1)), 
                                data_142d4cc20)
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            rdi[1] = __unpcklps_xmmps_memdq(_mm_cvtepi32_ps(zx.o(result_1[1])), 
                                data_142d4cc20)
                            
                            if (&rdi[2] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            rdi[2] = __unpcklps_xmmps_memdq(_mm_cvtepi32_ps(zx.o(result_1[2])), 
                                data_142d4cc20)
                            
                            if (&rdi[3] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            uint32_t rax_34 = zx.d(result_1[3])
                            rbx_2 += 4
                            result_1 = &result_1[4]
                            rdi[3] = __unpcklps_xmmps_memdq(_mm_cvtepi32_ps(zx.o(rax_34)), 
                                data_142d4cc20)
                            rdi = &rdi[4]
                            
                            if (rbx_2 u>= arg4 - 3)
                                if (rbx_2 u>= r14)
                                    goto label_142843eb6_2
                                
                                break
                    
                    do
                        if (rdi u>= rbp_1)
                            goto label_142843eb6_2
                        
                        result = zx.q(*result_1)
                        rbx_2 += 1
                        result_1 = &result_1[1]
                        *rdi =
                            __unpcklps_xmmps_memdq(_mm_cvtepi32_ps(zx.o(result.d)), data_142d4cc20)
                        rdi = &rdi[1]
                    while (rbx_2 u< r14)
                    
                    result.b = 1
            case 0x142842a88
                if (r14 u< 1)
                    result.b = 0
                else
                    int64_t rbx_3 = 0
                    
                    if (r14 u>= 4)
                        while (true)
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = _mm_cvtepi32_ps(zx.o(sx.d(*result_1)))
                            zmm1[0] = zmm1[0] * 0.00787401572f
                            *rdi = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = _mm_cvtepi32_ps(zx.o(sx.d(result_1[1])))
                            zmm1[0] = zmm1[0] * 0.00787401572f
                            rdi[1] = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            
                            if (&rdi[2] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = _mm_cvtepi32_ps(zx.o(sx.d(result_1[2])))
                            zmm1[0] = zmm1[0] * 0.00787401572f
                            rdi[2] = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            
                            if (&rdi[3] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            int32_t rax_35 = sx.d(result_1[3])
                            rbx_3 += 4
                            result_1 = &result_1[4]
                            zmm1 = _mm_cvtepi32_ps(zx.o(rax_35))
                            zmm1[0] = zmm1[0] * 0.00787401572f
                            rdi[3] = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                            rdi = &rdi[4]
                            
                            if (rbx_3 u>= arg4 - 3)
                                if (rbx_3 u>= r14)
                                    goto label_142843eb6_2
                                
                                break
                    
                    do
                        if (rdi u>= rbp_1)
                            goto label_142843eb6_2
                        
                        result = zx.q(sx.d(*result_1))
                        rbx_3 += 1
                        result_1 = &result_1[1]
                        zmm1 = _mm_cvtepi32_ps(zx.o(result.d))
                        zmm1[0] = zmm1[0] * 0.00787401572f
                        *rdi = __unpcklps_xmmps_memdq(zmm1, data_142d4cc20)
                        rdi = &rdi[1]
                    while (rbx_3 u< r14)
                    
                    result.b = 1
            case 0x142842b97
                if (r14 u< 1)
                    result.b = 0
                else
                    int64_t rbx_4 = 0
                    
                    if (r14 u>= 4)
                        while (true)
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            *rdi = __unpcklps_xmmps_memdq(_mm_cvtepi32_ps(zx.o(sx.d(*result_1))), 
                                data_142d4cc20)
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            rdi[1] = __unpcklps_xmmps_memdq(
                                _mm_cvtepi32_ps(zx.o(sx.d(result_1[1]))), data_142d4cc20)
                            
                            if (&rdi[2] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            rdi[2] = __unpcklps_xmmps_memdq(
                                _mm_cvtepi32_ps(zx.o(sx.d(result_1[2]))), data_142d4cc20)
                            
                            if (&rdi[3] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            int32_t rax_36 = sx.d(result_1[3])
                            rbx_4 += 4
                            result_1 = &result_1[4]
                            rdi[3] = __unpcklps_xmmps_memdq(_mm_cvtepi32_ps(zx.o(rax_36)), 
                                data_142d4cc20)
                            rdi = &rdi[4]
                            
                            if (rbx_4 u>= arg4 - 3)
                                if (rbx_4 u>= r14)
                                    goto label_142843eb6_2
                                
                                break
                    
                    do
                        if (rdi u>= rbp_1)
                            goto label_142843eb6_2
                        
                        result = zx.q(sx.d(*result_1))
                        rbx_4 += 1
                        result_1 = &result_1[1]
                        *rdi =
                            __unpcklps_xmmps_memdq(_mm_cvtepi32_ps(zx.o(result.d)), data_142d4cc20)
                        rdi = &rdi[1]
                    while (rbx_4 u< r14)
                    
                    result.b = 1
            case 0x142842c88
                if (r14 u< 1)
                    result.b = 0
                else
                    int64_t rbx_5 = 0
                    
                    if (r14 u>= 4)
                        while (true)
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0.d = _mm_cvtepi32_ps(zx.o(*result_1)).d f* 0.00392156886f
                            *rdi = _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zx.o(0), zmm0.q)[0].q)
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0.d = _mm_cvtepi32_ps(zx.o(result_1[1])).d f* 0.00392156886f
                            rdi[1] = _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zx.o(0), zmm0.q)[0].q)
                            
                            if (&rdi[2] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0.d = _mm_cvtepi32_ps(zx.o(result_1[2])).d f* 0.00392156886f
                            rdi[2] = _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zx.o(0), zmm0.q)[0].q)
                            
                            if (&rdi[3] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            uint32_t rax_37 = zx.d(result_1[3])
                            result_1 = &result_1[4]
                            rbx_5 += 4
                            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_37)).d f* 0.00392156886f
                            rdi[3] = _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zx.o(0), zmm0.q)[0].q)
                            rdi = &rdi[4]
                            
                            if (rbx_5 u>= arg4 - 3)
                                if (rbx_5 u>= r14)
                                    goto label_142843eb6_2
                                
                                break
                    
                    do
                        if (rdi u>= rbp_1)
                            goto label_142843eb6_2
                        
                        result = zx.q(*result_1)
                        result_1 = &result_1[1]
                        rbx_5 += 1
                        zmm0.d = _mm_cvtepi32_ps(zx.o(result.d)).d f* 0.00392156886f
                        *rdi = _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zx.o(0), zmm0.q)[0].q)
                        rdi = &rdi[1]
                    while (rbx_5 u< r14)
                    
                    result.b = 1
            case 0x142842dac
                if (r14 u< 1)
                    result.b = 0
                else
                    int64_t i_24
                    
                    do
                        int64_t rdx_1 = 8
                        
                        while (rdi u< rbp_1)
                            result.b = *result_1 u>> (rdx_1 - 1).b
                            
                            if ((result.b & 1) == 0)
                                zmm1 = zx.o(0)
                            else
                                zmm1 = 0x3f800000
                            
                            *rdi = __unpcklps_xmmps_memdq(_mm_unpacklo_ps(zmm1, zx.o(0).q), 
                                data_142d4cc20)
                            rdi = &rdi[1]
                            int64_t temp55_1 = rdx_1
                            rdx_1 -= 1
                            
                            if (temp55_1 == 1)
                                break
                        
                        result_1 = &result_1[1]
                        i_24 = r14
                        r14 -= 1
                    while (i_24 != 1)
                    result.b = 1
            case 0x142842e08
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_25 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            int32_t rcx_19 = *result_1
                            result_1 = &result_1[4]
                            var_88.d = (rcx_19 u>> 4 & 0xf800000) + 0x33800000
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = var_88.d
                            uint32_t zmm5[0x4] = data_143702c40
                            zmm3 = zx.o(0)
                            zmm2 = zx.o(0)
                            i_25 += 4
                            zmm3[0] = float.s(zx.q(rcx_19 u>> 0x12) & 0x1ff)
                            zmm0.d = float.s(zx.q(rcx_19 u>> 9) & 0x1ff)
                            zmm2[0] = float.s(zx.q(rcx_19) & 0x1ff)
                            zmm3[0] = zmm3[0] * zmm1[0]
                            zmm2[0] = zmm2[0] * zmm1[0]
                            zmm0.d = zmm0.d f* zmm1[0]
                            zmm3 = _mm_unpacklo_ps(zmm3, 0x3f800000)
                            *rdi = _mm_or_ps(
                                _mm_and_ps(_mm_unpacklo_ps(zmm2, zmm0.q)[0].q | zmm3[0].q << 0x40, 
                                    zmm5), 
                                __andnps_xmmxud_memxud(zmm5, data_143702d30))
                            rdi = &rdi[1]
                        while (i_25 u< r14 - 3)
                        
                        result.b = 1
            case 0x142842ed3
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_26 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm0 = *result_1
                            result_1 = &result_1[4]
                            zmm2 = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_143702bb0)
                                        ^ data_143702c10), 
                                    data_143702c00), 
                                data_1434d6250)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702c40
                            zmm1 = zmm0
                            zmm0 = _mm_and_ps(zmm0, zmm2)
                            *rdi = _mm_or_ps(__andnps_xmmxud_memxud(zmm1, data_143702d30), zmm0)
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702c40
                            i_26 += 4
                            rdi[1] = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(zmm2, zmm2, 0x6c), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[2]
                        while (i_26 u< r14 - 3)
                        
                        result.b = 1
            case 0x142842f7e
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_27 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm0 = *result_1
                            result_1 = &result_1[4]
                            zmm2 = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_143702bb0)
                                        ^ data_143702c10), 
                                    data_143702c00), 
                                data_1434d6250)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702c40
                            *rdi = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(zmm2, zmm2, 0xb1), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702c40
                            i_27 += 4
                            rdi[1] = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(zmm2, zmm2, 0x39), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[2]
                        while (i_27 u< r14 - 3)
                        
                        result.b = 1
            case 0x142843026
                if (r14 u< 2)
                    result.b = 0
                else
                    int64_t i_28 = 0
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm0 = *result_1
                            result_1 = &result_1[2]
                            zmm1 = __mulps_xmmps_memps(
                                __mulps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_1434d61d0)), 
                                    data_1434d61e0), 
                                data_1434d6450)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702c40
                            i_28 += 2
                            *rdi = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc6), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_28 u< r14 - 1)
                        
                        result.b = 1
            case 0x14284309c
                if (r14 u< 2)
                    result.b = 0
                else
                    int64_t i_29 = 0
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm0 = *result_1
                            result_1 = &result_1[2]
                            zmm1 = __mulps_xmmps_memps(
                                __mulps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_1434d62b0)), 
                                    data_1434d62c0), 
                                data_1434d6460)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            i_29 += 2
                            *rdi = _mm_shuffle_ps(zmm1, zmm1, 0xc6)
                            rdi = &rdi[1]
                        while (i_29 u< r14 - 1)
                        
                        result.b = 1
            case 0x1428430fa
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_30 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm0 = *result_1
                            result_1 = &result_1[4]
                            zmm1 = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_143702bb0)
                                        ^ data_143702c10), 
                                    data_143702c00), 
                                data_1434d6250)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            i_30 += 4
                            *rdi = _mm_shuffle_ps(zmm1, zmm1, 0xc6)
                            rdi = &rdi[1]
                        while (i_30 u< r14 - 3)
                        
                        result.b = 1
            case 0x14284315f
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_31 = 0
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm0 = *result_1
                            result_1 = &result_1[4]
                            zmm1 = __mulps_xmmps_memps(
                                __addps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_143702bb0)
                                        ^ data_143702c10), 
                                    data_143702c00), 
                                data_1434d6250)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702c40
                            i_31 += 4
                            *rdi = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(zmm1, zmm1, 0xc6), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[1]
                        while (i_31 u< r14 - 3)
                        
                        result.b = 1
            case 0x1428431e3
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_32 = 0
                    
                    if (arg4 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        void* rsi_3 = &result_1[2]
                        
                        do
                            uint32_t rcx_21 = zx.d(*(rsi_3 - 2))
                            uint32_t r8_2 = zx.d(*(rsi_3 - 1))
                            uint32_t rax_47 = zx.d(*rsi_3)
                            uint64_t r14_51 = zx.q(*(rsi_3 + 1))
                            rsi_3 += 4
                            int32_t rdx_2 = (rax_47 - 0x10) * 0x12a
                            int32_t r10_4 = (rcx_21 * 0x199 - 0xcc00 + rdx_2) s>> 8
                            int32_t r11_5 =
                                (rcx_21 * 0xffffff30 - r8_2 * 0x64 + 0x9a80 + rdx_2) s>> 8
                            int32_t rcx_24 = (rdx_2 - 0x10180 + r8_2 * 0x204) s>> 8
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = zx.o(0)
                            zmm1[0] = float.s(r14_51)
                            
                            if (rcx_24 s< 0)
                                rcx_24 = 0
                            
                            if (r11_5 s< 0)
                                r11_5 = 0
                            
                            if (r10_4 s< 0)
                                r10_4 = 0
                            
                            if (rcx_24 s> 0xff)
                                rcx_24 = 0xff
                            
                            zmm1[0] = zmm1[0] * 0.00392156886f
                            
                            if (r11_5 s> 0xff)
                                r11_5 = 0xff
                            
                            if (r10_4 s> 0xff)
                                r10_4 = 0xff
                            
                            i_32 += 4
                            zmm3 = _mm_cvtepi32_ps(zx.o(rcx_24))
                            zmm2 = _mm_cvtepi32_ps(zx.o(r10_4))
                            zmm0 = _mm_cvtepi32_ps(zx.o(r11_5))
                            zmm2[0] = zmm2[0] * 0.00392156886f
                            zmm3[0] = zmm3[0] * 0.00392156886f
                            zmm0.d = zmm0.d f* 0.00392156886f
                            zmm3 = _mm_unpacklo_ps(zmm3, zmm1[0].q)
                            *rdi = _mm_unpacklo_ps(zmm2, zmm0.q)[0].q | zmm3[0].q << 0x40
                            rdi = &rdi[1]
                        while (i_32 u< arg4 - 3)
                        
                        result.b = 1
            case 0x1428432f9
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_33 = 0
                    
                    if (arg4 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            int32_t r14_52 = *result_1
                            result_1 = &result_1[4]
                            int64_t rcx_27 = zx.q(r14_52) u>> 0x14 & 0x3ff
                            int64_t rdx_3 = ((zx.q(r14_52) u>> 0xa & 0x3ff) - 0x40) * 0x12af5
                            int64_t r8_4 = zx.q(r14_52) & 0x3ff
                            int32_t r10_8 = ((rcx_27 * 0x199c9 - 0x3331200 + rdx_3) s>> 0x10).d
                            int32_t r11_10 =
                                ((rcx_27 * -0xd0b1 - r8_4 * 0x6493 + 0x26b0800 + rdx_3) s>> 0x10).d
                            int32_t rcx_30 = ((rdx_3 - 0x40b5c00 + r8_4 * 0x205ee) s>> 0x10).d
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = zx.o(0)
                            
                            if (rcx_30 s< 0)
                                rcx_30 = 0
                            
                            if (r11_10 s< 0)
                                r11_10 = 0
                            
                            if (r10_8 s< 0)
                                r10_8 = 0
                            
                            if (rcx_30 s> 0x3ff)
                                rcx_30 = 0x3ff
                            
                            if (r11_10 s> 0x3ff)
                                r11_10 = 0x3ff
                            
                            zmm1[0] = float.s(zx.q(r14_52 u>> 0x1e))
                            
                            if (r10_8 s> 0x3ff)
                                r10_8 = 0x3ff
                            
                            i_33 += 4
                            zmm3 = _mm_cvtepi32_ps(zx.o(rcx_30))
                            zmm2 = _mm_cvtepi32_ps(zx.o(r10_8))
                            zmm0 = _mm_cvtepi32_ps(zx.o(r11_10))
                            zmm2[0] = zmm2[0] * 0.000977517106f
                            zmm1[0] = zmm1[0] * 0.333333343f
                            zmm3[0] = zmm3[0] * 0.000977517106f
                            zmm0.d = zmm0.d f* 0.000977517106f
                            zmm3 = _mm_unpacklo_ps(zmm3, zmm1[0].q)
                            *rdi = _mm_unpacklo_ps(zmm2, zmm0.q)[0].q | zmm3[0].q << 0x40
                            rdi = &rdi[1]
                        while (i_33 u< arg4 - 3)
                        
                        result.b = 1
            case 0x142843433
                if (r14 u< 8)
                    result.b = 0
                else
                    int64_t i_34 = 0
                    
                    if (arg4 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        void* rsi_4 = &result_1[4]
                        
                        do
                            uint64_t r8_5 = zx.q(*(rsi_4 - 4))
                            uint64_t rcx_31 = zx.q(*rsi_4)
                            int64_t rax_56 = zx.q(*(rsi_4 - 2)) - 0x1000
                            uint32_t r14_54 = zx.d(*(rsi_4 + 2))
                            rsi_4 += 8
                            int64_t rdx_4 = rax_56 * 0x12b3f
                            int32_t r10_12 = ((rcx_31 * 0x19a2e + -0xcd168000 + rdx_4) s>> 0x10).d
                            int32_t rcx_36 = ((rcx_31 * -0xd0e5 - r8_5 * 0x64ac - -0x9ac90000
                                + rdx_4) s>> 0x10).d
                            int32_t r8_8 = ((-0x103368000 + r8_5 * 0x2066e + rdx_4) s>> 0x10).d
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm1 = _mm_cvtepi32_ps(zx.o(r14_54))
                            
                            if (r8_8 s< 0)
                                r8_8 = 0
                            
                            if (rcx_36 s< 0)
                                rcx_36 = 0
                            
                            if (r10_12 s< 0)
                                r10_12 = 0
                            
                            zmm1[0] = zmm1[0] * 1.52590219e-05f
                            
                            if (r8_8 s> 0xffff)
                                r8_8 = 0xffff
                            
                            if (rcx_36 s> 0xffff)
                                rcx_36 = 0xffff
                            
                            if (r10_12 s> 0xffff)
                                r10_12 = 0xffff
                            
                            zmm3 = _mm_cvtepi32_ps(zx.o(r8_8))
                            i_34 += 8
                            zmm0 = _mm_cvtepi32_ps(zx.o(rcx_36))
                            zmm2 = _mm_cvtepi32_ps(zx.o(r10_12))
                            zmm3[0] = zmm3[0] * 1.52590219e-05f
                            zmm2[0] = zmm2[0] * 1.52590219e-05f
                            zmm0.d = zmm0.d f* 1.52590219e-05f
                            zmm3 = _mm_unpacklo_ps(zmm3, zmm1[0].q)
                            *rdi = _mm_unpacklo_ps(zmm2, zmm0.q)[0].q | zmm3[0].q << 0x40
                            rdi = &rdi[1]
                        while (i_34 u< arg4 - 7)
                        
                        result.b = 1
            case 0x142843574
                if (r14 u< 4)
                    result.b = 0
                else
                    int64_t i_35 = 0
                    
                    if (arg4 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        void* rsi_5 = &result_1[2]
                        
                        do
                            uint32_t rdx_5 = zx.d(*(rsi_5 + 1))
                            void* rcx_37 = rsi_5 - 2
                            uint32_t r8_9 = zx.d(*(rsi_5 - 1))
                            uint32_t rax_58 = zx.d(*rsi_5)
                            rsi_5 += 4
                            var_88.d = rax_58
                            int32_t r14_55 = (rdx_5 - 0x80) * 0x199
                            int32_t rcx_38 = (zx.d(*rcx_37) - 0x10) * 0x12a
                            int32_t r15_3 = (rdx_5 - 0x80) * 0xd0
                            int32_t r12_3 = (r8_9 - 0x80) * 0x64
                            int32_t r8_10 = (r8_9 - 0x80) * 0x204
                            int32_t r10_15 = (r14_55 + 0x80 + rcx_38) s>> 8
                            int32_t rdx_10 = (rcx_38 - r15_3 - r12_3 + 0x80) s>> 8
                            result = zx.q((r8_10 + 0x80 + rcx_38) s>> 8)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            if (result.d s< 0)
                                result = 0
                            
                            if (rdx_10 s< 0)
                                rdx_10 = 0
                            
                            if (r10_15 s< 0)
                                r10_15 = 0
                            
                            if (result.d s> 0xff)
                                result = 0xff
                            
                            if (rdx_10 s> 0xff)
                                rdx_10 = 0xff
                            
                            if (r10_15 s> 0xff)
                                r10_15 = 0xff
                            
                            int32_t rcx_39 = (var_88.d - 0x10) * 0x12a
                            zmm3 = _mm_cvtepi32_ps(zx.o(result.d))
                            zmm3[0] = zmm3[0] * 0.00392156886f
                            zmm2 = _mm_cvtepi32_ps(zx.o(r10_15))
                            result = zx.q((rcx_39 - r15_3 - r12_3 + 0x80) s>> 8)
                            int32_t rdx_13 = (rcx_39 + 0x80 + r14_55) s>> 8
                            int32_t r8_13 = (r8_10 + 0x80 + rcx_39) s>> 8
                            zmm0 = _mm_cvtepi32_ps(zx.o(rdx_10))
                            zmm2[0] = zmm2[0] * 0.00392156886f
                            zmm0.d = zmm0.d f* 0.00392156886f
                            zmm3 = _mm_unpacklo_ps(zmm3, 0x3f800000)
                            *rdi = _mm_unpacklo_ps(zmm2, zmm0.q)[0].q | zmm3[0].q << 0x40
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            if (r8_13 s< 0)
                                r8_13 = 0
                            
                            if (result.d s< 0)
                                result = 0
                            
                            if (rdx_13 s< 0)
                                rdx_13 = 0
                            
                            if (r8_13 s> 0xff)
                                r8_13 = 0xff
                            
                            if (result.d s> 0xff)
                                result = 0xff
                            
                            if (rdx_13 s> 0xff)
                                rdx_13 = 0xff
                            
                            zmm3 = _mm_cvtepi32_ps(zx.o(r8_13))
                            i_35 += 4
                            zmm0 = _mm_cvtepi32_ps(zx.o(result.d))
                            zmm2 = _mm_cvtepi32_ps(zx.o(rdx_13))
                            zmm3[0] = zmm3[0] * 0.00392156886f
                            zmm2[0] = zmm2[0] * 0.00392156886f
                            zmm0.d = zmm0.d f* 0.00392156886f
                            zmm3 = _mm_unpacklo_ps(zmm3, 0x3f800000)
                            rdi[1] = _mm_unpacklo_ps(zmm2, zmm0.q)[0].q | zmm3[0].q << 0x40
                            rdi = &rdi[2]
                        while (i_35 u< arg4 - 3)
                        
                        result.b = 1
            case 0x142843731
                if (r14 u< 8)
                    result.b = 0
                else
                    int64_t i_36 = 0
                    
                    if (arg4 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        void* rsi_6 = &result_1[4]
                        
                        do
                            uint64_t rax_73 = zx.q(*(rsi_6 - 4))
                            uint64_t r8_14 = zx.q(*(rsi_6 - 2))
                            uint64_t rcx_40 = zx.q(*(rsi_6 + 2))
                            uint64_t r11_11 = zx.q(*rsi_6)
                            rsi_6 += 8
                            int64_t rdx_14 = ((rax_73 u>> 6) - 0x40) * 0x12af5
                            int64_t r12_4 = ((rcx_40 u>> 6) - 0x200) * 0x199c9
                            int64_t r8_17 = ((r8_14 u>> 6) - 0x200) * 0x205ee
                            int64_t r14_57 = ((rcx_40 u>> 6) - 0x200) * -0xd0b1
                                - ((r8_14 u>> 6) - 0x200) * 0x6493
                            int32_t r10_18 = ((rdx_14 + 0x8000 + r12_4) s>> 0x10).d
                            result = (rdx_14 + 0x8000 + r14_57) s>> 0x10
                            int32_t rcx_45 = ((rdx_14 + 0x8000 + r8_17) s>> 0x10).d
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            if (rcx_45 s< 0)
                                rcx_45 = 0
                            
                            if (result.d s< 0)
                                result = 0
                            
                            if (r10_18 s< 0)
                                r10_18 = 0
                            
                            if (rcx_45 s> 0x3ff)
                                rcx_45 = 0x3ff
                            
                            if (result.d s> 0x3ff)
                                result = 0x3ff
                            
                            if (r10_18 s> 0x3ff)
                                r10_18 = 0x3ff
                            
                            zmm0 = zx.o(result.d)
                            result = ((r11_11 u>> 6) - 0x40) * 0x12af5
                            zmm3 = _mm_cvtepi32_ps(zx.o(rcx_45))
                            zmm0 = _mm_cvtepi32_ps(zmm0)
                            int32_t rcx_48 = ((r12_4 + 0x8000 + result) s>> 0x10).d
                            int32_t rdx_17 = ((r14_57 + 0x8000 + result) s>> 0x10).d
                            int32_t r8_20 = ((r8_17 + 0x8000 + result) s>> 0x10).d
                            zmm2 = _mm_cvtepi32_ps(zx.o(r10_18))
                            zmm3[0] = zmm3[0] * 0.000977517106f
                            zmm2[0] = zmm2[0] * 0.000977517106f
                            zmm0.d = zmm0.d f* 0.000977517106f
                            zmm3 = _mm_unpacklo_ps(zmm3, 0x3f800000)
                            *rdi = _mm_unpacklo_ps(zmm2, zmm0.q)[0].q | zmm3[0].q << 0x40
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            if (r8_20 s< 0)
                                r8_20 = 0
                            
                            if (rdx_17 s< 0)
                                rdx_17 = 0
                            
                            if (rcx_48 s< 0)
                                rcx_48 = 0
                            
                            if (r8_20 s> 0x3ff)
                                r8_20 = 0x3ff
                            
                            if (rdx_17 s> 0x3ff)
                                rdx_17 = 0x3ff
                            
                            if (rcx_48 s> 0x3ff)
                                rcx_48 = 0x3ff
                            
                            zmm3 = _mm_cvtepi32_ps(zx.o(r8_20))
                            i_36 += 8
                            zmm0 = _mm_cvtepi32_ps(zx.o(rdx_17))
                            zmm2 = _mm_cvtepi32_ps(zx.o(rcx_48))
                            zmm3[0] = zmm3[0] * 0.000977517106f
                            zmm2[0] = zmm2[0] * 0.000977517106f
                            zmm0.d = zmm0.d f* 0.000977517106f
                            zmm3 = _mm_unpacklo_ps(zmm3, 0x3f800000)
                            rdi[1] = _mm_unpacklo_ps(zmm2, zmm0.q)[0].q | zmm3[0].q << 0x40
                            rdi = &rdi[2]
                        while (i_36 u< arg4 - 7)
                        
                        result.b = 1
            case 0x142843909
                if (r14 u< 8)
                    result.b = 0
                else
                    int64_t i_37 = 0
                    
                    if (arg4 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        void* rsi_7 = &result_1[4]
                        
                        do
                            uint64_t r8_21 = zx.q(*(rsi_7 - 2))
                            uint64_t rcx_49 = zx.q(*(rsi_7 + 2))
                            int64_t rax_80 = zx.q(*(rsi_7 - 4)) - 0x1000
                            uint64_t r13_3 = zx.q(*rsi_7)
                            rsi_7 += 8
                            int64_t rdx_18 = rax_80 * 0x12b3f
                            int64_t r14_58 = (rcx_49 - 0x8000) * 0x19a2e
                            int32_t r10_21 = ((r14_58 + 0x8000 + rdx_18) s>> 0x10).d
                            int64_t r8_22 = (r8_21 - 0x8000) * 0x2066e
                            result = (r8_22 + 0x8000 + rdx_18) s>> 0x10
                            int32_t rcx_54 = ((rcx_49 * -0xd0e5 - r8_21 * 0x64ac - -0x9ac90000
                                + rdx_18) s>> 0x10).d
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            if (result.d s< 0)
                                result = 0
                            
                            if (rcx_54 s< 0)
                                rcx_54 = 0
                            
                            if (r10_21 s< 0)
                                r10_21 = 0
                            
                            if (result.d s> 0xffff)
                                result = 0xffff
                            
                            if (rcx_54 s> 0xffff)
                                rcx_54 = 0xffff
                            
                            if (r10_21 s> 0xffff)
                                r10_21 = 0xffff
                            
                            int64_t rcx_55 = (r13_3 - 0x1000) * 0x12b3f
                            zmm3 = _mm_cvtepi32_ps(zx.o(result.d))
                            zmm0 = _mm_cvtepi32_ps(zx.o(rcx_54))
                            result = (r14_58 + 0x8000 + rcx_55) s>> 0x10
                            int32_t rdx_21 = ((rcx_49 * -0xd0e5 - r8_21 * 0x64ac - -0x9ac90000
                                + rcx_55) s>> 0x10).d
                            int32_t r8_25 = ((r8_22 + 0x8000 + rcx_55) s>> 0x10).d
                            zmm2 = _mm_cvtepi32_ps(zx.o(r10_21))
                            zmm3[0] = zmm3[0] * 1.52590219e-05f
                            zmm2[0] = zmm2[0] * 1.52590219e-05f
                            zmm0.d = zmm0.d f* 1.52590219e-05f
                            zmm3 = _mm_unpacklo_ps(zmm3, 0x3f800000)
                            *rdi = _mm_unpacklo_ps(zmm2, zmm0.q)[0].q | zmm3[0].q << 0x40
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            if (r8_25 s< 0)
                                r8_25 = 0
                            
                            if (rdx_21 s< 0)
                                rdx_21 = 0
                            
                            if (result.d s< 0)
                                result = 0
                            
                            if (r8_25 s> 0xffff)
                                r8_25 = 0xffff
                            
                            if (rdx_21 s> 0xffff)
                                rdx_21 = 0xffff
                            
                            if (result.d s> 0xffff)
                                result = 0xffff
                            
                            zmm3 = _mm_cvtepi32_ps(zx.o(r8_25))
                            i_37 += 8
                            zmm0 = _mm_cvtepi32_ps(zx.o(rdx_21))
                            zmm2 = _mm_cvtepi32_ps(zx.o(result.d))
                            zmm3[0] = zmm3[0] * 1.52590219e-05f
                            zmm2[0] = zmm2[0] * 1.52590219e-05f
                            zmm0.d = zmm0.d f* 1.52590219e-05f
                            zmm3 = _mm_unpacklo_ps(zmm3, 0x3f800000)
                            rdi[1] = _mm_unpacklo_ps(zmm2, zmm0.q)[0].q | zmm3[0].q << 0x40
                            rdi = &rdi[2]
                        while (i_37 u< arg4 - 7)
                        
                        result.b = 1
            case 0x142843aea
                if (r14 u< 2)
                    result.b = 0
                else
                    int64_t i_38 = 0
                    
                    if (r14 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            zmm0 = *result_1
                            result_1 = &result_1[2]
                            zmm1 = __mulps_xmmps_memps(
                                __mulps_xmmps_memps(
                                    _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                        _mm_shuffle_ps(zmm0, zmm0, 0), data_1434d6290)), 
                                    data_1434d62a0), 
                                data_1434d6470)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            i_38 += 2
                            *rdi = _mm_shuffle_ps(zmm1, zmm1, 0xc6)
                            rdi = &rdi[1]
                        while (i_38 u< r14 - 1)
                        
                        result.b = 1
            case 0x142843b48
                if (r14 u< 4)
                    result.b = 0
                else
                    char* result_20 = result_1
                    
                    if (r14 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            int32_t r8_26 = *result_20
                            zmm1 = zx.o(0)
                            zmm1[0] = float.s(zx.q(r8_26 u>> 0x1e))
                            zmm1[0] = zmm1[0] * 0.333333343f
                            float zmm0_9[0x4] = sub_14283f6c0(r8_26 u>> 0x14 & 0x3ff)
                            int128_t zmm0_10 = sub_14283f6c0(r8_26 u>> 0xa & 0x3ff)
                            float zmm0_11[0x4] = sub_14283f6c0(r8_26 & 0x3ff)
                            result_20 = &result_20[4]
                            zmm7 = _mm_unpacklo_ps(zmm0_9, zmm1[0].q)
                            *rdi = _mm_unpacklo_ps(zmm0_11, zmm0_10.q)[0].q | zmm7[0].q << 0x40
                            rdi = &rdi[1]
                        while (result_20 - result_1 u< r14 - 3)
                        
                        result.b = 1
            case 0x142843be1
                if (r14 u< 4)
                    result.b = 0
                else
                    char* result_21 = result_1
                    
                    if (r14 == 3)
                    label_142843eb6:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            int32_t r8_28 = *result_21
                            zmm1 = zx.o(0)
                            zmm1[0] = float.s(zx.q(r8_28 u>> 0x1e))
                            zmm1[0] = zmm1[0] * 0.333333343f
                            float zmm0_12[0x4] = sub_14283f650(r8_28 u>> 0x14 & 0x3ff)
                            int128_t zmm0_13 = sub_14283f650(r8_28 u>> 0xa & 0x3ff)
                            float zmm0_14[0x4] = sub_14283f650(r8_28 & 0x3ff)
                            result_21 = &result_21[4]
                            zmm7 = _mm_unpacklo_ps(zmm0_12, zmm1[0].q)
                            *rdi = _mm_unpacklo_ps(zmm0_14, zmm0_13.q)[0].q | zmm7[0].q << 0x40
                            rdi = &rdi[1]
                        while (result_21 - result_1 u< r14 - 3)
                        
                        result.b = 1
            case 0x142843c77
                if (r14 u< 4)
                    result.b = 0
                else
                    char* result_18 = result_1
                    
                    if (r14 == 3)
                    label_142843eb6_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = *result_18
                            result_18 = &result_18[4]
                            *rdi = __maxps_xmmps_memps(
                                __mulps_xmmps_memps(
                                    __addps_xmmps_memps(
                                        _mm_cvtepi32_ps(__andps_xmmxud_memxud(
                                            _mm_shuffle_ps(zmm0, zmm0, 0), data_143702b70)
                                            ^ data_143702c90), 
                                        data_143702df0), 
                                    data_143702ca0), 
                                data_143702cd0)
                            rdi = &rdi[1]
                        while (result_18 - result_1 u< r14 - 3)
                        
                        result.b = 1
            case 0x142843ce4
                if (r14 u< 1)
                    result.b = 0
                else
                    int64_t rbx_6 = 0
                    
                    if (r14 u>= 4)
                        while (true)
                            zmm1 = zx.d(*result_1)
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_1434d6290)
                            
                            if (rdi u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            *rdi = _mm_or_ps(
                                _mm_and_ps(
                                    __mulps_xmmps_memps(
                                        __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_1434d62a0), 
                                        data_1434d6480), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            zmm1 = zx.d(result_1[1])
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_1434d6290)
                            
                            if (&rdi[1] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            rdi[1] = _mm_or_ps(
                                _mm_and_ps(
                                    __mulps_xmmps_memps(
                                        __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_1434d62a0), 
                                        data_1434d6480), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            zmm1 = zx.d(result_1[2])
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_1434d6290)
                            
                            if (&rdi[2] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            rdi[2] = _mm_or_ps(
                                _mm_and_ps(
                                    __mulps_xmmps_memps(
                                        __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_1434d62a0), 
                                        data_1434d6480), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            result = zx.q(result_1[3])
                            result_1 = &result_1[4]
                            zmm1 = result.w.d
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_1434d6290)
                            
                            if (&rdi[3] u>= rbp_1)
                                goto label_142843eb6_2
                            
                            zmm0 = data_143702e10
                            rbx_6 += 4
                            rdi[3] = _mm_or_ps(
                                _mm_and_ps(
                                    __mulps_xmmps_memps(
                                        __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_1434d62a0), 
                                        data_1434d6480), 
                                    zmm0), 
                                __andnps_xmmxud_memxud(zmm0, data_143702d30))
                            rdi = &rdi[4]
                            
                            if (rbx_6 u>= arg4 - 3)
                                if (rbx_6 u>= r14)
                                    goto label_142843eb6_2
                                
                                break
                    
                    do
                        result = zx.q(*result_1)
                        result_1 = &result_1[1]
                        zmm1 = result.w.d
                        zmm1 = __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0), data_1434d6290)
                        
                        if (rdi u>= rbp_1)
                            break
                        
                        zmm0 = data_143702e10
                        rbx_6 += 1
                        *rdi = _mm_or_ps(
                            _mm_and_ps(
                                __mulps_xmmps_memps(
                                    __mulps_xmmps_memps(_mm_cvtepi32_ps(zmm1), data_1434d62a0), 
                                    data_1434d6480), 
                                zmm0), 
                            __andnps_xmmxud_memxud(zmm0, data_143702d30))
                        rdi = &rdi[1]
                    while (rbx_6 u< r14)
                    
                label_142843eb6_2:
                    result.b = 1
            case 0x142843eba
                result.b = 0

return result
