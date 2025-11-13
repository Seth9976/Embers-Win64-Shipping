// 函数: sub_1428440c0
// 地址: 0x1428440c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_48[0x4] = zmm6
float zmm7[0x4]
float var_58[0x4] = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
int128_t zmm11
int128_t var_98 = zmm11
void var_f8
uint64_t var_a8 = __security_cookie ^ &var_f8
int128_t* rdi = arg4
int64_t i_6 = arg2
char* rsi = arg1
uint64_t result

if (arg4 == 0)
    result.b = 0
else
    result = zx.q(arg3 - 2)
    void* r14_3 = &arg4[arg5]
    uint64_t i_13
    uint64_t i_9
    uint64_t i_11
    float zmm0[0x4]
    float zmm1[0x4]
    float zmm2[0x4]
    uint32_t zmm3[0x4]
    float zmm4[0x4]
    int128_t zmm5
    
    if (result.d u> 0xbc)
        result.b = 0
    else
        switch (&__dos_header.e_magic[zx.q(jump_table_142846d88[zx.q(lookup_table_142846e90[sx.q(
                result.d)])])])
            case 0x142844152
                if (i_6 u< 0x10)
                    result.b = 0
                else if (i_6 == 0xf)
                labelid_1:
                    result.b = 1
                else
                    float (* rcx_3)[0x4] = rsi - arg4
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        *(rcx_3 + rdi) = *rdi
                        rdi = &rdi[1]
                    while (rcx_3 - rsi + rdi u< i_6 - 0xf)
                    
                    result.b = 1
            case 0x142844199
                if (i_6 u< 0x10)
                    result.b = 0
                else if (i_6 == 0xf)
                labelid_1:
                    result.b = 1
                else
                    float (* rcx_5)[0x4] = rsi - arg4
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm4 = __maxps_xmmps_memps(*rdi, data_143702d90)
                        zmm3 = _mm_cmpeq_ps(data_143702c30, zmm4, 2)
                        zmm0 = _mm_sub_ps(zmm4, __andps_xmmxud_memxud(zmm3, data_143702c30))
                        *(rcx_5 + rdi) = _mm_or_ps(
                            _mm_and_ps(data_143702c70, zmm3) ^ _mm_cvttps_epi32(zmm0), 
                            _mm_cmpeq_ps(data_143702cf0, zmm4, 1))
                        rdi = &rdi[1]
                    while (rcx_5 - rsi + rdi u< i_6 - 0xf)
                    
                    result.b = 1
            case 0x14284421d
                if (i_6 u< 0x10)
                    result.b = 0
                else if (i_6 == 0xf)
                labelid_1:
                    result.b = 1
                else
                    float (* rcx_7)[0x4] = rsi - arg4
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm1 = __cvttps2dq_xmmdq_memps(*rdi)
                        zmm3 = __cmpps_xmmps_memps_immb(data_143702b80, *rdi, 1)
                        zmm2 = zmm3
                        zmm3 = _mm_andnot_ps(zmm3, zmm1)
                        *(rcx_7 + rdi) =
                            _mm_or_ps(__andps_xmmxud_memxud(zmm2, data_143702c50), zmm3)
                        rdi = &rdi[1]
                    while (rcx_7 - rsi + rdi u< i_6 - 0xf)
                    
                    result.b = 1
            case 0x14284427c
                if (i_6 u< 0xc)
                    result.b = 0
                else if (i_6 == 0xb)
                labelid_1:
                    result.b = 1
                else
                    void* rcx_8 = &rsi[8]
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm1 = *rdi
                        rdi = &rdi[1]
                        *(rcx_8 - 8) = zmm1[0]
                        *(rcx_8 - 4) = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
                        *rcx_8 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                        rcx_8 += 0xc
                    while (-8 - rsi + rcx_8 u< i_6 - 0xb)
                    
                    result.b = 1
            case 0x1428442dd
                if (i_6 u< 0xc)
                    result.b = 0
                else if (i_6 == 0xb)
                labelid_1:
                    result.b = 1
                else
                    void* rcx_9 = &rsi[8]
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm4 = *rdi
                        rdi = &rdi[1]
                        zmm4 = __maxps_xmmps_memps(zmm4, data_143702d90)
                        zmm3 = _mm_cmpeq_ps(data_143702c30, zmm4, 2)
                        zmm0 = _mm_sub_ps(zmm4, __andps_xmmxud_memxud(zmm3, data_143702c30))
                        zmm1 = _mm_or_ps(_mm_and_ps(data_143702c70, zmm3) ^ _mm_cvttps_epi32(zmm0), 
                            _mm_cmpeq_ps(data_143702cf0, zmm4, 1))
                        *(rcx_9 - 8) = zmm1[0]
                        *(rcx_9 - 4) = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
                        *rcx_9 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                        rcx_9 += 0xc
                    while (rcx_9 + -8 - rsi u< i_6 - 0xb)
                    
                    result.b = 1
            case 0x14284437e
                if (i_6 u< 0xc)
                    result.b = 0
                else if (i_6 == 0xb)
                labelid_1:
                    result.b = 1
                else
                    uint32_t* rcx_10 = &rsi[8]
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm1 = __cvttps2dq_xmmdq_memps(*rdi)
                        zmm2 = __cmpps_xmmps_memps_immb(data_143702b80, *rdi, 1)
                        rdi = &rdi[1]
                        zmm3 = _mm_or_ps(__andps_xmmxud_memxud(zmm2, data_143702c50), 
                            _mm_andnot_ps(zmm2, zmm1))
                        rcx_10[-2] = zmm3[0]
                        rcx_10[-1] = _mm_shuffle_ps(zmm3, zmm3, 0x55)[0]
                        *rcx_10 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
                        rcx_10 = &rcx_10[3]
                    while (rcx_10 + -8 - rsi u< i_6 - 0xb)
                    
                    result.b = 1
            case 0x1428443f9
                if (i_6 u< 8)
                    result.b = 0
                else if (i_6 == 7)
                labelid_1:
                    result.b = 1
                else
                    void* r15_1 = &rsi[4]
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        rdi = &rdi[1]
                        zmm6 = _mm_min_ps(data_1434d6060, _mm_max_ps(data_1434d6050, zmm0))
                        *(r15_1 - 4) = sub_14283f9d0(zmm6[0])
                        *(r15_1 - 2) = sub_14283f9d0(_mm_shuffle_ps(zmm6, zmm6, 0x55)[0])
                        int16_t rax_10 = sub_14283f9d0(_mm_shuffle_ps(zmm6, zmm6, 0xaa)[0])
                        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                        *r15_1 = rax_10
                        *(r15_1 + 2) = sub_14283f9d0(zmm6[0])
                        r15_1 += 8
                    while (-4 - rsi + r15_1 u< i_6 - 7)
                    
                    result.b = 1
            case 0x142844497
                if (i_6 u< 8)
                    result.b = 0
                else if (i_6 == 7)
                labelid_1:
                    result.b = 1
                else
                    void* rcx_11 = &rsi[4]
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        rdi = &rdi[1]
                        zmm0 = _mm_cvttps_epi32(__addps_xmmps_memps(
                            __mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702d90), 
                                    data_143702d70), 
                                data_143702c20), 
                            data_143702d50))
                        *(rcx_11 - 4) = _mm_extract_epi16(zmm0, 0)
                        *(rcx_11 - 2) = _mm_extract_epi16(zmm0, 2)
                        *rcx_11 = _mm_extract_epi16(zmm0, 4)
                        *(rcx_11 + 2) = _mm_extract_epi16(zmm0, 6)
                        rcx_11 += 8
                    while (rcx_11 + -4 - rsi u< i_6 - 7)
                    
                    result.b = 1
            case 0x142844527
                if (i_6 u< 8)
                    result.b = 0
                else if (i_6 == 7)
                labelid_1:
                    result.b = 1
                else
                    void* rcx_12 = &rsi[4]
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        rdi = &rdi[1]
                        zmm1 = _mm_cvtps_epi32(__minps_xmmps_memps(
                            __maxps_xmmps_memps(zmm0, data_143702d90), data_143702c20))
                        *(rcx_12 - 4) = _mm_extract_epi16(zmm1, 0)
                        *(rcx_12 - 2) = _mm_extract_epi16(zmm1, 2)
                        *rcx_12 = _mm_extract_epi16(zmm1, 4)
                        *(rcx_12 + 2) = _mm_extract_epi16(zmm1, 6)
                        rcx_12 += 8
                    while (rcx_12 + -4 - rsi u< i_6 - 7)
                    
                    result.b = 1
            case 0x1428445a9
                if (i_6 u< 8)
                    result.b = 0
                else
                    int64_t* rcx_13 = rsi
                    
                    if (i_6 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvtps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702cd0), 
                                    data_143702d70), 
                                data_143702bc0))
                            *rcx_13 = (_mm_packs_epi32(zmm0, zmm0)).q
                            rcx_13 = &rcx_13[1]
                        while (rcx_13 - rsi u< i_6 - 7)
                        
                        result.b = 1
            case 0x142844607
                if (i_6 u< 8)
                    result.b = 0
                else
                    int64_t* rcx_14 = rsi
                    
                    if (i_6 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm1 = _mm_cvtps_epi32(__minps_xmmps_memps(
                                __maxps_xmmps_memps(zmm0, data_143702bd0), data_143702bc0))
                            *rcx_14 = (_mm_packs_epi32(zmm1, zmm1)).q
                            rcx_14 = &rcx_14[1]
                        while (rcx_14 - rsi u< i_6 - 7)
                        
                        result.b = 1
            case 0x142844660
                if (i_6 u< 8)
                    result.b = 0
                else if (i_6 == 7)
                labelid_1:
                    result.b = 1
                else
                    float* i = nullptr
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        rdi = &rdi[1]
                        *(i + rsi) = zmm0[0]
                        *(i + rsi + 4) = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0]
                        i = &i[2]
                    while (i u< i_6 - 7)
                    
                    result.b = 1
            case 0x1428446a8
                if (i_6 u< 8)
                    result.b = 0
                else if (i_6 == 7)
                labelid_1:
                    result.b = 1
                else
                    float* i_1 = nullptr
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm4 = *rdi
                        rdi = &rdi[1]
                        zmm4 = __maxps_xmmps_memps(zmm4, data_143702d90)
                        zmm3 = _mm_cmpeq_ps(data_143702c30, zmm4, 2)
                        zmm0 = _mm_sub_ps(zmm4, __andps_xmmxud_memxud(zmm3, data_143702c30))
                        zmm1 = _mm_or_ps(_mm_and_ps(data_143702c70, zmm3) ^ _mm_cvttps_epi32(zmm0), 
                            _mm_cmpeq_ps(data_143702cf0, zmm4, 1))
                        *(i_1 + rsi) = zmm1[0]
                        *(i_1 + rsi + 4) = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
                        i_1 = &i_1[2]
                    while (i_1 u< i_6 - 7)
                    
                    result.b = 1
            case 0x142844732
                if (i_6 u< 8)
                    result.b = 0
                else if (i_6 == 7)
                labelid_1:
                    result.b = 1
                else
                    uint32_t* i_2 = nullptr
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = __cvttps2dq_xmmdq_memps(*rdi)
                        zmm2 = __cmpps_xmmps_memps_immb(data_143702b80, *rdi, 1)
                        zmm3 =
                            _mm_or_ps(_mm_andnot_ps(zmm2, zmm0), _mm_and_ps(data_143702c50, zmm2))
                        rdi = &rdi[1]
                        *(i_2 + rsi) = zmm3[0]
                        *(i_2 + rsi + 4) = _mm_shuffle_ps(zmm3, zmm3, 0x55)[0]
                        i_2 = &i_2[2]
                    while (i_2 u< i_6 - 7)
                    
                    result.b = 1
            case 0x1428447a0
                if (i_6 u< 8)
                    result.b = 0
                else if (i_6 == 7)
                labelid_1:
                    result.b = 1
                else
                    void* rcx_15 = &rsi[6]
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        void* rax_22 = &i_11:4
                        *(rcx_15 - 6) = zmm0[0]
                        i_11.o = zmm0
                        rdi = &rdi[1]
                        i_13.d = 0
                        bool cond:0_1 = _mm_shuffle_ps(zmm0, zmm0, 0x55)[0] <= 0f
                        *rcx_15 = 0
                        *(rcx_15 - 1) = 0
                        
                        if (cond:0_1)
                            rax_22 = &i_13
                        
                        *(rcx_15 - 2) = (int.d(_mm_min_ss((*rax_22)[0], 0x437f0000)[0])).b
                        rcx_15 += 8
                    while (-6 - rsi + rcx_15 u< i_6 - 7)
                    
                    result.b = 1
            case 0x14284482f
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_16 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702d90), 
                                    data_143702d70), 
                                data_1434d6310)) & data_1434d6320
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            *rcx_16 = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            rcx_16 = &rcx_16[1]
                        while (rcx_16 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x1428448a7
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_17 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = __mulps_xmmps_memps(data_1434d6330, *rdi)
                            rdi = &rdi[1]
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(
                                    __maxps_xmmps_memps(__addps_xmmps_memps(zmm0, data_1434d6340), 
                                        data_143702d90), 
                                    data_1434d6350), 
                                data_1434d6360)) & data_1434d6370
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            *rcx_17 = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            rcx_17 = &rcx_17[1]
                        while (rcx_17 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x14284492f
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_18 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702d90), 
                                    data_1434d6380), 
                                data_1434d6390)) & data_1434d63a0
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            *rcx_18 = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            rcx_18 = &rcx_18[1]
                        while (rcx_18 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x1428449a7
                if (i_6 u< 4)
                    result.b = 0
                else
                    int32_t* r15_2 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            sub_14283fc30(r15_2, *rdi)
                            r15_2 = &r15_2[1]
                            rdi = &rdi[1]
                        while (r15_2 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x1428449ee
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_20 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(
                                    __maxps_xmmps_memps(_mm_add_ps(data_1434d6070, zmm0), 
                                        data_143702d90), 
                                    data_143702d70), 
                                data_1434d63b0)) & data_1434d63c0
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            *rcx_20 = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            rcx_20 = &rcx_20[1]
                        while (rcx_20 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142844a70
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_21 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvtps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702d90), 
                                    data_143702b90), 
                                data_1434d63d0)) & data_1434d63e0
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            *rcx_21 = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            rcx_21 = &rcx_21[1]
                        while (rcx_21 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142844ae8
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_22 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702cd0), 
                                    data_143702d70), 
                                data_1434d63f0)) & data_1434d6400
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            *rcx_22 = (_mm_shuffle_epi32(zmm1, 0x55) | zmm1)[0]
                            rcx_22 = &rcx_22[1]
                        while (rcx_22 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142844b5d
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_23 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvtps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702d40), 
                                    data_143702ba0), 
                                data_1434d6410)) & data_1434d6420
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            *rcx_23 = (_mm_shuffle_epi32(zmm1, 0x55) | zmm1)[0]
                            rcx_23 = &rcx_23[1]
                        while (rcx_23 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142844bd1
                if (i_6 u< 4)
                    result.b = 0
                else if (i_6 == 3)
                labelid_1:
                    result.b = 1
                else
                    int16_t* i_3 = nullptr
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        rdi = &rdi[1]
                        zmm6 = _mm_min_ps(data_1434d6060, _mm_max_ps(data_1434d6050, zmm0))
                        int16_t rax_32 = sub_14283f9d0(zmm6[0])
                        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                        *(i_3 + rsi) = rax_32
                        *(rsi + i_3 + 2) = sub_14283f9d0(zmm6[0]).w
                        i_3 = &i_3[2]
                    while (i_3 u< i_6 - 3)
                    
                    result.b = 1
            case 0x142844c43
                if (i_6 u< 4)
                    result.b = 0
                else if (i_6 == 3)
                labelid_1:
                    result.b = 1
                else
                    int16_t* i_4 = nullptr
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        rdi = &rdi[1]
                        zmm0 = _mm_cvttps_epi32(__addps_xmmps_memps(
                            __mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702d90), 
                                    data_143702d70), 
                                data_143702c20), 
                            data_143702d50))
                        *(i_4 + rsi) = _mm_extract_epi16(zmm0, 0)
                        *(i_4 + rsi + 2) = zx.w(_mm_extract_epi16(zmm0, 2))
                        i_4 = &i_4[2]
                    while (i_4 u< i_6 - 3)
                    
                    result.b = 1
            case 0x142844cb5
                if (i_6 u< 4)
                    result.b = 0
                else if (i_6 == 3)
                labelid_1:
                    result.b = 1
                else
                    int16_t* i_5 = nullptr
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        rdi = &rdi[1]
                        zmm0 = _mm_cvtps_epi32(__minps_xmmps_memps(
                            __maxps_xmmps_memps(zmm0, data_143702d90), data_143702c20))
                        *(i_5 + rsi) = _mm_extract_epi16(zmm0, 0)
                        *(i_5 + rsi + 2) = zx.w(_mm_extract_epi16(zmm0, 2))
                        i_5 = &i_5[2]
                    while (i_5 u< i_6 - 3)
                    
                    result.b = 1
            case 0x142844d17
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_24 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvtps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702cd0), 
                                    data_143702d70), 
                                data_143702bc0))
                            *rcx_24 = _mm_packs_epi32(zmm0, zmm0)[0]
                            rcx_24 = &rcx_24[1]
                        while (rcx_24 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142844d77
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_25 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm1 = _mm_cvtps_epi32(__minps_xmmps_memps(
                                __maxps_xmmps_memps(zmm0, data_143702bd0), data_143702bc0))
                            *rcx_25 = _mm_packs_epi32(zmm1, zmm1)[0]
                            rcx_25 = &rcx_25[1]
                        while (rcx_25 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142844dd0
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_26 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            *rcx_26 = zmm0[0]
                            rcx_26 = &rcx_26[1]
                        while (rcx_26 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142844e11
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_27 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm3 = *rdi
                            rdi = &rdi[1]
                            zmm3 = __maxps_xmmps_memps(zmm3, data_143702d90)
                            zmm4 = _mm_cmpeq_ps(data_143702c30, zmm3, 2)
                            *rcx_27 = _mm_or_ps(
                                __andps_xmmxud_memxud(zmm4, data_143702c70) ^ _mm_cvttps_epi32(
                                    _mm_sub_ps(zmm3, __andps_xmmxud_memxud(zmm4, data_143702c30))), 
                                _mm_cmpeq_ps(data_143702cf0, zmm3, 1))[0]
                            rcx_27 = &rcx_27[1]
                        while (rcx_27 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142844e98
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_28 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = __cvttps2dq_xmmdq_memps(*rdi)
                            zmm2 = __cmpps_xmmps_memps_immb(data_143702b80, *rdi, 1)
                            zmm1 = zmm2
                            rdi = &rdi[1]
                            zmm2 = __andps_xmmxud_memxud(zmm2, data_143702c50)
                            *rcx_28 = _mm_or_ps(_mm_andnot_ps(zmm1, zmm0), zmm2)[0]
                            rcx_28 = &rcx_28[1]
                        while (rcx_28 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142844ef6
                if (i_6 u< 4)
                    result.b = 0
                else
                    char* rdx_6 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm1 = data_1434d6490
                            zmm0 = __maxps_xmmps_memps(zx.o(0), *rdi)
                            rdi = &rdi[1]
                            zmm1 = _mm_min_ps(zmm1, zmm0)
                            int32_t rax_40 = (int.q(_mm_shuffle_ps(zmm1, zmm1, 0x55)[0])).d
                            zmm1[0] = zmm1[0] * 16777215f
                            *rdx_6 = ((int.q(zmm1[0])).d & 0xffffff) | rax_40 << 0x18
                            rdx_6 = &rdx_6[4]
                        while (rdx_6 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142844f75
                if (i_6 u< 2)
                    result.b = 0
                else
                    char* rdx_7 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvttps_epi32(__addps_xmmps_memps(
                                __mulps_xmmps_memps(
                                    __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702d90), 
                                        data_143702d70), 
                                    data_143702b90), 
                                data_143702d50))
                            int16_t temp0_177 = _mm_extract_epi16(zmm0, 2)
                            *rdx_7 = (_mm_extract_epi16(zmm0, 0) & 0xff) | temp0_177 << 8
                            rdx_7 = &rdx_7[2]
                        while (rdx_7 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x142844ff0
                if (i_6 u< 2)
                    result.b = 0
                else
                    char* rdx_8 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvtps_epi32(__minps_xmmps_memps(
                                __maxps_xmmps_memps(zmm0, data_143702d90), data_143702b90))
                            int16_t temp0_182 = _mm_extract_epi16(zmm0, 2)
                            *rdx_8 = (_mm_extract_epi16(zmm0, 0) & 0xff) | temp0_182 << 8
                            rdx_8 = &rdx_8[2]
                        while (rdx_8 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x142845060
                if (i_6 u< 2)
                    result.b = 0
                else
                    char* rdx_9 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvtps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702cd0), 
                                    data_143702d70), 
                                data_143702ba0))
                            int16_t temp0_188 = _mm_extract_epi16(zmm0, 2)
                            *rdx_9 = (_mm_extract_epi16(zmm0, 0) & 0xff) | temp0_188 << 8
                            rdx_9 = &rdx_9[2]
                        while (rdx_9 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x1428450d7
                if (i_6 u< 2)
                    result.b = 0
                else
                    char* rdx_10 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvtps_epi32(__minps_xmmps_memps(
                                __maxps_xmmps_memps(zmm0, data_143702d40), data_143702ba0))
                            int16_t temp0_193 = _mm_extract_epi16(zmm0, 2)
                            *rdx_10 = (_mm_extract_epi16(zmm0, 0) & 0xff) | temp0_193 << 8
                            rdx_10 = &rdx_10[2]
                        while (rdx_10 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x142845144
                if (i_6 u< 2)
                    result.b = 0
                else
                    char* r15_3 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            i_9.d = zmm0[0]
                            uint64_t* rax_51 = &i_13
                            rdi = &rdi[1]
                            i_13.d = 0x477fe000
                            
                            if (zmm0[0] <= 65504f)
                                rax_51 = &i_9
                            
                            *r15_3 = sub_14283f9d0(_mm_max_ss((*rax_51)[0], 0xc77fe000)[0])
                            r15_3 = &r15_3[2]
                        while (r15_3 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x1428451c2
                if (i_6 u< 2)
                    result.b = 0
                else
                    char* rcx_36 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            uint64_t* rax_54 = &i_13
                            rdi = &rdi[1]
                            i_9.d = zmm0[0]
                            i_13.d = 0x3f800000
                            
                            if (zmm0[0] <= 1f)
                                rax_54 = &i_9
                            
                            zmm1 = _mm_max_ss((*rax_54)[0], 0)
                            zmm1[0] = zmm1[0] * 65535f
                            zmm1[0] = zmm1[0] + 0.5f
                            *rcx_36 = (int.d(zmm1[0])).w
                            rcx_36 = &rcx_36[2]
                        while (rcx_36 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x14284524c
                if (i_6 u< 2)
                    result.b = 0
                else
                    int16_t* rcx_37 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            uint64_t* rax_57 = &i_13
                            rdi = &rdi[1]
                            i_9.d = zmm0[0]
                            i_13.d = 0x477fff00
                            
                            if (zmm0[0] <= 65535f)
                                rax_57 = &i_9
                            
                            *rcx_37 = (int.d(_mm_max_ss((*rax_57)[0], 0)[0])).w
                            rcx_37 = &rcx_37[1]
                        while (rcx_37 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x1428452c0
                if (i_6 u< 2)
                    result.b = 0
                else
                    char* r15_4 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            i_9.d = zmm0[0]
                            uint64_t* rax_60 = &i_13
                            rdi = &rdi[1]
                            i_13.d = 0x3f800000
                            
                            if (zmm0[0] <= 1f)
                                rax_60 = &i_9
                            
                            zmm0 = _mm_max_ss((*rax_60)[0], 0xbf800000)
                            zmm0[0] = zmm0[0] * 32767f
                            *r15_4 = lroundf(zmm0[0])
                            r15_4 = &r15_4[2]
                        while (r15_4 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x142845348
                if (i_6 u< 2)
                    result.b = 0
                else
                    int16_t* rcx_38 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            uint64_t* rax_63 = &i_13
                            rdi = &rdi[1]
                            i_9.d = zmm0[0]
                            i_13.d = 0x46fffe00
                            
                            if (zmm0[0] <= 32767f)
                                rax_63 = &i_9
                            
                            *rcx_38 = (int.d(_mm_max_ss((*rax_63)[0], 0xc6fffe00)[0])).w
                            rcx_38 = &rcx_38[1]
                        while (rcx_38 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x1428453c0
                if (i_6 u< 1)
                    result.b = 0
                else
                    int64_t r15_5 = 0
                    
                    if (i_6 u>= 4)
                        while (true)
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            uint64_t* rax_66 = &i_13
                            i_9.d = zmm0[0]
                            i_13.d = 0x3f800000
                            
                            if (zmm0[0] <= 1f)
                                rax_66 = &i_9
                            
                            zmm0 = _mm_max_ss((*rax_66)[0], 0)
                            zmm0[0] = zmm0[0] * 255f
                            *rsi = int.d(zmm0[0]).b
                            
                            if (&rdi[1] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = rdi[1]
                            uint64_t* rax_67 = &i_13
                            i_9.d = zmm0[0]
                            
                            if (zmm0[0] <= 1f)
                                rax_67 = &i_9
                            
                            zmm1 = _mm_max_ss((*rax_67)[0], 0)
                            zmm1[0] = zmm1[0] * 255f
                            rsi[1] = int.d(zmm1[0]).b
                            
                            if (&rdi[2] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = rdi[2]
                            uint64_t* rax_68 = &i_13
                            i_9.d = zmm0[0]
                            
                            if (zmm0[0] <= 1f)
                                rax_68 = &i_9
                            
                            zmm1 = _mm_max_ss((*rax_68)[0], 0)
                            zmm1[0] = zmm1[0] * 255f
                            rsi[2] = int.d(zmm1[0]).b
                            
                            if (&rdi[3] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = rdi[3]
                            uint64_t* rax_69 = &i_13
                            i_9.d = zmm0[0]
                            rdi = &rdi[4]
                            
                            if (zmm0[0] <= 1f)
                                rax_69 = &i_9
                            
                            r15_5 += 4
                            zmm0 = _mm_max_ss((*rax_69)[0], 0)
                            zmm0[0] = zmm0[0] * 255f
                            rsi[3] = (int.d(zmm0[0])).b
                            rsi = &rsi[4]
                            
                            if (r15_5 u>= i_6 - 3)
                                if (r15_5 u>= i_6)
                                    goto label_142846d3c_2
                                
                                break
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        uint64_t* rax_71 = &i_13
                        i_9.d = zmm0[0]
                        rdi = &rdi[1]
                        i_13.d = 0x3f800000
                        
                        if (zmm0[0] <= 1f)
                            rax_71 = &i_9
                        
                        r15_5 += 1
                        zmm0 = _mm_max_ss((*rax_71)[0], 0)
                        zmm0[0] = zmm0[0] * 255f
                        *rsi = int.d(zmm0[0]).b
                        rsi = &rsi[1]
                    while (r15_5 u< i_6)
                    
                    result.b = 1
            case 0x14284553f
                if (i_6 u< 1)
                    result.b = 0
                else
                    int64_t r15_6 = 0
                    
                    if (i_6 u>= 4)
                        while (true)
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            uint64_t* rax_72 = &i_13
                            i_9.d = zmm0[0]
                            i_13.d = 0x437f0000
                            
                            if (zmm0[0] <= 255f)
                                rax_72 = &i_9
                            
                            *rsi = int.d(_mm_max_ss((*rax_72)[0], 0)[0]).b
                            
                            if (&rdi[1] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = rdi[1]
                            uint64_t* rax_73 = &i_13
                            i_9.d = zmm0[0]
                            
                            if (zmm0[0] <= 255f)
                                rax_73 = &i_9
                            
                            rsi[1] = int.d(_mm_max_ss((*rax_73)[0], 0)[0]).b
                            
                            if (&rdi[2] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = rdi[2]
                            uint64_t* rax_74 = &i_13
                            i_9.d = zmm0[0]
                            
                            if (zmm0[0] <= 255f)
                                rax_74 = &i_9
                            
                            rsi[2] = int.d(_mm_max_ss((*rax_74)[0], 0)[0]).b
                            
                            if (&rdi[3] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = rdi[3]
                            uint64_t* rax_75 = &i_13
                            rdi = &rdi[4]
                            i_9.d = zmm0[0]
                            
                            if (zmm0[0] <= 255f)
                                rax_75 = &i_9
                            
                            r15_6 += 4
                            rsi[3] = (int.d(_mm_max_ss((*rax_75)[0], 0)[0])).b
                            rsi = &rsi[4]
                            
                            if (r15_6 u>= i_6 - 3)
                                if (r15_6 u>= i_6)
                                    goto label_142846d3c_2
                                
                                break
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        uint64_t* rax_77 = &i_13
                        rdi = &rdi[1]
                        i_9.d = zmm0[0]
                        i_13.d = 0x437f0000
                        
                        if (zmm0[0] <= 255f)
                            rax_77 = &i_9
                        
                        r15_6 += 1
                        *rsi = int.d(_mm_max_ss((*rax_77)[0], 0)[0]).b
                        rsi = &rsi[1]
                    while (r15_6 u< i_6)
                    
                    result.b = 1
            case 0x14284569c
                if (i_6 u< 1)
                    result.b = 0
                else
                    char* r15_7 = rsi
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        i_9.d = zmm0[0]
                        uint64_t* rax_78 = &i_13
                        rdi = &rdi[1]
                        i_13.d = 0x3f800000
                        
                        if (zmm0[0] <= 1f)
                            rax_78 = &i_9
                        
                        zmm0 = _mm_max_ss((*rax_78)[0], 0xbf800000)
                        zmm0[0] = zmm0[0] * 127f
                        *r15_7 = lroundf(zmm0[0])
                        r15_7 = &r15_7[1]
                    while (r15_7 - rsi u< i_6)
                    
                    result.b = 1
            case 0x142845718
                if (i_6 u< 1)
                    result.b = 0
                else
                    int64_t r15_8 = 0
                    
                    if (i_6 u>= 4)
                        while (true)
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            uint64_t* rax_81 = &i_13
                            i_9.d = zmm0[0]
                            i_13.d = 0x42fe0000
                            
                            if (zmm0[0] <= 127f)
                                rax_81 = &i_9
                            
                            *rsi = int.d(_mm_max_ss((*rax_81)[0], 0xc2fe0000)[0]).b
                            
                            if (&rdi[1] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = rdi[1]
                            uint64_t* rax_82 = &i_13
                            i_9.d = zmm0[0]
                            
                            if (zmm0[0] <= 127f)
                                rax_82 = &i_9
                            
                            rsi[1] = int.d(_mm_max_ss((*rax_82)[0], 0xc2fe0000)[0]).b
                            
                            if (&rdi[2] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = rdi[2]
                            uint64_t* rax_83 = &i_13
                            i_9.d = zmm0[0]
                            
                            if (zmm0[0] <= 127f)
                                rax_83 = &i_9
                            
                            rsi[2] = int.d(_mm_max_ss((*rax_83)[0], 0xc2fe0000)[0]).b
                            
                            if (&rdi[3] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = rdi[3]
                            uint64_t* rax_84 = &i_13
                            rdi = &rdi[4]
                            i_9.d = zmm0[0]
                            
                            if (zmm0[0] <= 127f)
                                rax_84 = &i_9
                            
                            r15_8 += 4
                            rsi[3] = (int.d(_mm_max_ss((*rax_84)[0], 0xc2fe0000)[0])).b
                            rsi = &rsi[4]
                            
                            if (r15_8 u>= i_6 - 3)
                                if (r15_8 u>= i_6)
                                    goto label_142846d3c_2
                                
                                break
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *rdi
                        uint64_t* rax_86 = &i_13
                        rdi = &rdi[1]
                        i_9.d = zmm0[0]
                        i_13.d = 0x42fe0000
                        
                        if (zmm0[0] <= 127f)
                            rax_86 = &i_9
                        
                        r15_8 += 1
                        *rsi = int.d(_mm_max_ss((*rax_86)[0], 0xc2fe0000)[0]).b
                        rsi = &rsi[1]
                    while (r15_8 u< i_6)
                    
                    result.b = 1
            case 0x14284587b
                if (i_6 u< 1)
                    result.b = 0
                else
                    int64_t r15_9 = 0
                    
                    if (i_6 u>= 4)
                        while (true)
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *(rdi + 0xc)
                            uint64_t* rax_87 = &i_13
                            i_9.d = zmm0[0]
                            i_13.d = 0x3f800000
                            
                            if (zmm0[0] <= 1f)
                                rax_87 = &i_9
                            
                            zmm0 = _mm_max_ss((*rax_87)[0], 0)
                            zmm0[0] = zmm0[0] * 255f
                            *rsi = int.d(zmm0[0]).b
                            
                            if (&rdi[1] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *(rdi + 0x1c)
                            uint64_t* rax_88 = &i_13
                            i_9.d = zmm0[0]
                            
                            if (zmm0[0] <= 1f)
                                rax_88 = &i_9
                            
                            zmm0 = _mm_max_ss((*rax_88)[0], 0)
                            zmm0[0] = zmm0[0] * 255f
                            rsi[1] = int.d(zmm0[0]).b
                            
                            if (&rdi[2] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *(rdi + 0x2c)
                            uint64_t* rax_89 = &i_13
                            i_9.d = zmm0[0]
                            
                            if (zmm0[0] <= 1f)
                                rax_89 = &i_9
                            
                            zmm0 = _mm_max_ss((*rax_89)[0], 0)
                            zmm0[0] = zmm0[0] * 255f
                            rsi[2] = int.d(zmm0[0]).b
                            
                            if (&rdi[3] u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *(rdi + 0x3c)
                            uint64_t* rax_90 = &i_13
                            i_9.d = zmm0[0]
                            rdi = &rdi[4]
                            
                            if (zmm0[0] <= 1f)
                                rax_90 = &i_9
                            
                            r15_9 += 4
                            zmm0 = _mm_max_ss((*rax_90)[0], 0)
                            zmm0[0] = zmm0[0] * 255f
                            rsi[3] = (int.d(zmm0[0])).b
                            rsi = &rsi[4]
                            
                            if (r15_9 u>= i_6 - 3)
                                if (r15_9 u>= i_6)
                                    goto label_142846d3c_2
                                
                                break
                    
                    do
                        if (rdi u>= r14_3)
                            goto label_142846d3c_2
                        
                        zmm0 = *(rdi + 0xc)
                        uint64_t* rax_92 = &i_13
                        i_9.d = zmm0[0]
                        rdi = &rdi[1]
                        i_13.d = 0x3f800000
                        
                        if (zmm0[0] <= 1f)
                            rax_92 = &i_9
                        
                        r15_9 += 1
                        zmm0 = _mm_max_ss((*rax_92)[0], 0)
                        zmm0[0] = zmm0[0] * 255f
                        *rsi = int.d(zmm0[0]).b
                        rsi = &rsi[1]
                    while (r15_9 u< i_6)
                    
                    result.b = 1
            case 0x142845a01
                if (i_6 u< 1)
                    result.b = 0
                else
                    int64_t i_7
                    
                    do
                        void* rcx_1
                        rcx_1.b = 0
                        int64_t rdx_11 = 8
                        
                        while (rdi u< r14_3)
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            
                            if (not(zmm0[0] <= 0.25f))
                                rcx_1 = zx.q(rcx_1.b) | zx.q(1 << ((rdx_11 - 1).d u% 0x20))
                            
                            int64_t temp53_1 = rdx_11
                            rdx_11 -= 1
                            
                            if (temp53_1 == 1)
                                break
                        
                        *rsi = rcx_1.b
                        rsi = &rsi[1]
                        i_7 = i_6
                        i_6 -= 1
                    while (i_7 != 1)
                    result.b = 1
            case 0x142845a52
                if (i_6 u< 4)
                    result.b = 0
                else
                    char* r15_10 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm1 = *rdi
                            bool cond:8_1 = zmm1[0] < 0f
                            i_11 = zmm1[0].q
                            zmm7 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                            
                            if (cond:8_1)
                                zmm1 = zx.o(0)
                            else
                                zmm1 = _mm_min_ss(zmm1[0], 0x477f8000)
                            
                            zmm8 = i_11:4.d
                            
                            if (zmm8[0] < 0f)
                                zmm8 = zx.o(0)
                            else
                                zmm8 = _mm_min_ss(zmm8[0], 0x477f8000)
                            
                            if (zmm7[0] < 0f)
                                zmm7 = zx.o(0)
                            else
                                zmm7 = _mm_min_ss(zmm7[0], 0x477f8000)
                            
                            *r15_10 &= 0x7ffffff
                            i_13.d = _mm_max_ss(
                                _mm_max_ss(_mm_max_ss(zmm8[0], zmm1[0])[0], zmm7[0])[0], 
                                0x37800000)[0]
                            uint32_t rcx_42 = (i_13.d + 0x4000) u>> 0x17
                            *r15_10 |= (rcx_42 - 0xf) << 0x1b
                            i_13.d = 0x83000000 - (rcx_42 << 0x17)
                            zmm6 = i_13.d
                            zmm6[0] = zmm6[0] * zmm1[0]
                            float zmm0_1[0x4]
                            float zmm6_1[0x4]
                            zmm0_1, zmm6_1 = sub_14284abf0(zmm6)
                            *r15_10 &= 0xfffffe00
                            int32_t rax_97 = (int.q(zmm0_1[0])).d & 0x1ff
                            zmm6_1[0] = zmm6_1[0] * zmm8[0]
                            *r15_10 |= rax_97
                            float zmm0_2[0x4]
                            float zmm6_2[0x4]
                            zmm0_2, zmm6_2 = sub_14284abf0(zmm6_1)
                            *r15_10 &= 0xfffc01ff
                            int32_t rax_98 = (int.q(zmm0_2[0])).d
                            zmm6_2[0] = zmm6_2[0] * zmm7[0]
                            *r15_10 |= (rax_98 & 0x1ff) << 9
                            zmm0 = sub_14284abf0(zmm6_2)
                            *r15_10 &= 0xf803ffff
                            rdi = &rdi[1]
                            *r15_10 |= ((int.q(zmm0[0])).d & 0x1ff) << 0x12
                            r15_10 = &r15_10[4]
                        while (r15_10 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142845b9a
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_44 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm3 = *rdi
                            rdi = &rdi[1]
                            
                            if (rdi u>= r14_3)
                                zmm2 = zx.o(0)
                            else
                                zmm2 = *rdi
                                rdi = &rdi[1]
                                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            
                            zmm0 = data_143702c40
                            zmm1 = zmm0
                            zmm0 = _mm_and_ps(zmm0, zmm3)
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(
                                    __maxps_xmmps_memps(
                                        __addps_xmmps_memps(
                                            _mm_or_ps(_mm_andnot_ps(zmm1, zmm2), zmm0), 
                                            data_1434d6070), 
                                        data_143702d90), 
                                    data_143702d70), 
                                data_1434d63b0)) & data_1434d63c0
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            *rcx_44 = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            rcx_44 = &rcx_44[1]
                        while (rcx_44 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142845c45
                if (i_6 u< 4)
                    result.b = 0
                else
                    float* rcx_45 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm3 = *rdi
                            rdi = &rdi[1]
                            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                            
                            if (rdi u>= r14_3)
                                zmm2 = zx.o(0)
                            else
                                zmm2 = *rdi
                                rdi = &rdi[1]
                                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                            
                            zmm0 = data_143b80b20
                            zmm1 = zmm0
                            zmm0 = _mm_and_ps(zmm0, zmm3)
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(
                                    __maxps_xmmps_memps(
                                        __addps_xmmps_memps(
                                            _mm_or_ps(_mm_andnot_ps(zmm1, zmm2), zmm0), 
                                            data_1434d6070), 
                                        data_143702d90), 
                                    data_143702d70), 
                                data_1434d63b0)) & data_1434d63c0
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            *rcx_45 = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            rcx_45 = &rcx_45[1]
                        while (rcx_45 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142845cf8
                if (i_6 u< 2)
                    result.b = 0
                else
                    char* rdx_12 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvtps_epi32(__minps_xmmps_memps(
                                __maxps_xmmps_memps(
                                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm0, zmm0, 0xc6), 
                                        data_1434d64a0), 
                                    data_143702d90), 
                                data_1434d62d0))
                            int16_t temp0_258 = _mm_extract_epi16(zmm0, 4)
                            *rdx_12 = ((_mm_extract_epi16(zmm0, 2) & 0x3f) | temp0_258 << 6) << 5
                                | (_mm_extract_epi16(zmm0, 0) & 0x1f)
                            rdx_12 = &rdx_12[2]
                        while (rdx_12 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x142845d7b
                if (i_6 u< 2)
                    result.b = 0
                else
                    char* r8 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm2 = *rdi
                            int16_t rdx_13 = 0
                            rdi = &rdi[1]
                            zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xc6), 
                                data_1434d64b0)
                            zmm0 = zmm2
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                            zmm0 = __maxps_xmmps_memps(zmm0, data_143702d90)
                            bool cond:9_1 = zmm2[0] f> arg6[0]
                            zmm0 = __minps_xmmps_memps(zmm0, data_1434d6440)
                            
                            if (cond:9_1)
                                rdx_13 = 0x8000
                            
                            zmm1 = _mm_cvtps_epi32(zmm0)
                            int16_t temp0_267 = _mm_extract_epi16(zmm1, 4)
                            *r8 = rdx_13 | ((
                                ((_mm_extract_epi16(zmm1, 2) & 0x1f) | temp0_267 << 5) << 5
                                | (_mm_extract_epi16(zmm1, 0) & 0x1f)) & 0x7fff)
                            r8 = &r8[2]
                        while (r8 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x142845e29
                if (i_6 u< 4)
                    result.b = 0
                else
                    char* rcx_48 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(
                                    __maxps_xmmps_memps(
                                        __addps_xmmps_memps(_mm_shuffle_ps(zmm0, zmm0, 0xc6), 
                                            data_1434d6070), 
                                        data_143702d90), 
                                    data_143702d70), 
                                data_1434d63b0)) & data_1434d63c0
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            *rcx_48 = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            rcx_48 = &rcx_48[4]
                        while (rcx_48 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142845eac
                if (i_6 u< 4)
                    result.b = 0
                else
                    char* rcx_49 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm2 = data_143702d30
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(
                                    __maxps_xmmps_memps(
                                        __addps_xmmps_memps(
                                            _mm_or_ps(
                                                _mm_andnot_ps(data_1434d65c0, 
                                                    _mm_shuffle_ps(zmm0, zmm0, 0xc6)), 
                                                __andps_xmmxud_memxud(
                                                _mm_shuffle_ps(zmm2, zmm2, 0xc6), data_1434d65c0)), 
                                            data_1434d6070), 
                                        data_143702d90), 
                                    data_143702d70), 
                                data_1434d63b0)) & data_1434d63c0
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            *rcx_49 = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            rcx_49 = &rcx_49[4]
                        while (rcx_49 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142845f52
                if (i_6 u< 4)
                    result.b = 0
                else
                    i_13 = i_6 - 3
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        uint64_t var_d8_1 = &rsi[2]
                        uint64_t i_8 = i_13
                        uint64_t rdx_23
                        
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702d90), 
                                    data_143702d70), 
                                data_1434d63b0)) & data_1434d63c0
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            i_13.d = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            int32_t rax_115 = i_13.d
                            uint32_t r10_1 = zx.d((rax_115 u>> 8).b)
                            uint64_t r9 = zx.q((rax_115 u>> 0x10).b)
                            uint32_t r8_1 = zx.d(rax_115.b)
                            int32_t r11_5 = (r9.d * 0x70 - r8_1 * 0x26 - r10_1 * 0x4a + 0x80) s>> 8
                            int32_t rdx_20 =
                                (r8_1 * 0x70 - (r9 * 9).d * 2 - r10_1 * 0x5e + 0x80) s>> 8
                            int32_t rdx_21 = rdx_20 + 0x80
                            
                            if (rdx_20 + 0x80 s< 0)
                                rdx_21 = 0
                            
                            char rcx_60 = rdx_21.b
                            
                            if (rdx_21 s> 0xff)
                                rcx_60 = -1
                            
                            int32_t r11_6 = r11_5 + 0x80
                            
                            if (r11_5 + 0x80 s< 0)
                                r11_6 = 0
                            
                            *(var_d8_1 - 2) = rcx_60
                            char rcx_61 = r11_6.b
                            
                            if (r11_6 s> 0xff)
                                rcx_61 = -1
                            
                            *(var_d8_1 - 1) = rcx_61
                            char rcx_62 =
                                (((r9.d * 0x19 + 0x80 + r8_1 * 0x42 + r10_1 * 0x81) u>> 8) + 0x10).b
                            
                            if (((r9.d * 0x19 + 0x80 + r8_1 * 0x42 + r10_1 * 0x81) u>> 8) + 0x10
                                    u> 0xff)
                                rcx_62 = -1
                            
                            *(var_d8_1 + 1) = (rax_115 u>> 0x18).b
                            *var_d8_1 = rcx_62
                            rdx_23 = var_d8_1 + 4
                            var_d8_1 = rdx_23
                        while (rdx_23 + -2 - rsi u< i_8)
                        result.b = 1
            case 0x1428460a7
                if (i_6 u< 4)
                    result.b = 0
                else
                    char* var_d8_2 = rsi
                    i_9 = i_6 - 3
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        void* rdx_30
                        
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = _mm_cvttps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702d90), 
                                    data_143702d70), 
                                data_1434d6310)) & data_1434d6320
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            i_13.d = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            int32_t rax_117 = i_13.d
                            int64_t r8_4 = zx.q(rax_117) u>> 0xa & 0x3ff
                            int64_t r10_4 = zx.q(rax_117) u>> 0x14 & 0x3ff
                            int64_t r9_2 = zx.q(rax_117) & 0x3ff
                            int32_t rbx_57 = ((r9_2 * 0x418c + 0x8000 + r10_4 * 0x1990
                                + r8_4 * 0x80ae) u>> 0x10).d + 0x40
                            int32_t r11_11 = ((r10_4 * 0x701c - r9_2 * 0x25d3 - r8_4 * 0x4a49
                                + 0x8000) s>> 0x10).d
                            int32_t rcx_69 = ((r9_2 * 0x701c - r10_4 * 0x123b - r8_4 * 0x5de1
                                + 0x8000) s>> 0x10).d
                            int32_t r11_12 = r11_11 + 0x200
                            
                            if (r11_11 + 0x200 s< 0)
                                r11_12 = 0
                            
                            int32_t rcx_70 = rcx_69 + 0x200
                            
                            if (rcx_69 + 0x200 s< 0)
                                rcx_70 = 0
                            
                            if (rcx_70 s> 0x3ff)
                                rcx_70 = 0x3ff
                            
                            if (rbx_57 u> 0x3ff)
                                rbx_57 = 0x3ff
                            
                            if (r11_12 s> 0x3ff)
                                r11_12 = 0x3ff
                            
                            *var_d8_2 = ((rcx_70 & 0x3ff) << 0xa | (rbx_57 & 0x3ff)) << 0xa
                                | (r11_12 & 0x3ff) | (rax_117 & 0xc0000000)
                            rdx_30 = &var_d8_2[4]
                            var_d8_2 = rdx_30
                        while (rdx_30 - rsi u< i_9)
                        result.b = 1
            case 0x142846215
                if (i_6 u< 8)
                    result.b = 0
                else
                    uint64_t i_10 = i_6 - 7
                    
                    if (i_6 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        void* r12_2 = &rsi[4]
                        
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm1 = _mm_cvttps_epi32(__addps_xmmps_memps(
                                __mulps_xmmps_memps(
                                    __minps_xmmps_memps(__maxps_xmmps_memps(zmm0, data_143702d90), 
                                        data_143702d70), 
                                    data_143702c20), 
                                data_143702d50))
                            uint64_t r8_5 = zx.q(_mm_extract_epi16(zmm1, 0))
                            uint64_t r9_3 = zx.q(_mm_extract_epi16(zmm1, 2))
                            uint64_t rdx_31 = zx.q(_mm_extract_epi16(zmm1, 4))
                            uint32_t r10_7 = ((r8_5 * 0x417b + rdx_31 * 0x1989 + r9_3 * 0x808e
                                + 0x8000) u>> 0x10).d
                            int32_t rcx_83 = ((rdx_31 * 0x7000 - r8_5 * 0x25ca - r9_3 * 0x4a36
                                + 0x8000) s>> 0x10).d
                            int32_t rax_129 = r10_7 + 0x1000
                            int32_t rdx_36 = ((r8_5 * 0x7000 - rdx_31 * 0x1236 - r9_3 * 0x5dca
                                + 0x8000) s>> 0x10).d
                            int32_t rcx_84 = rcx_83 + 0x8000
                            
                            if (rcx_83 + 0x8000 s< 0)
                                rcx_84 = 0
                            
                            if (rcx_84 s> 0xffff)
                                rcx_84.w = 0xffff
                            
                            r10_7.w += 0x1000
                            *(r12_2 - 4) = rcx_84.w
                            int16_t temp0_314 = _mm_extract_epi16(zmm1, 6)
                            
                            if (rax_129 u> 0xffff)
                                r10_7.w = 0xffff
                            
                            int32_t rdx_37 = rdx_36 + 0x8000
                            *(r12_2 - 2) = r10_7.w
                            
                            if (rdx_36 + 0x8000 s< 0)
                                rdx_37 = 0
                            
                            *(r12_2 + 2) = temp0_314
                            
                            if (rdx_37 s> 0xffff)
                                rdx_37.w = 0xffff
                            
                            *r12_2 = rdx_37.w
                            r12_2 += 8
                        while (-4 - rsi + r12_2 u< i_10)
                        
                        result.b = 1
            case 0x14284636a
                if (i_6 u< 4)
                    result.b = 0
                else
                    i_9 = i_6 - 3
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        void* r13_2 = &rsi[2]
                        uint64_t var_d8_3 = -2 - rsi
                        
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm2 = data_143702d90
                            zmm3 = data_143702d70
                            zmm4 = data_1434d63b0
                            zmm5 = data_1434d63c0
                            zmm0 = _mm_cvttps_epi32(_mm_mul_ps(
                                _mm_min_ps(_mm_max_ps(zmm0, zmm2), zmm3), zmm4)) & zmm5
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            i_13.d = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            int32_t rax_131 = i_13.d
                            uint32_t rdx_38 = zx.d(rax_131.b)
                            uint32_t r9_4 = zx.d((rax_131 u>> 8).b)
                            uint64_t r8_6 = zx.q((rax_131 u>> 0x10).b)
                            int32_t rsi_5 =
                                ((r8_6.d * 0x19 + 0x80 + rdx_38 * 0x42 + r9_4 * 0x81) u>> 8) + 0x10
                            int32_t r11_18 =
                                (r8_6.d * 0x70 - rdx_38 * 0x26 - r9_4 * 0x4a + 0x80) s>> 8
                            int32_t rbx_64 =
                                (rdx_38 * 0x70 - (r8_6 * 9).d * 2 - r9_4 * 0x5e + 0x80) s>> 8
                            uint32_t rax_137
                            uint32_t rcx_90
                            
                            if (rdi u>= r14_3)
                                rax_137.b = 0
                                rcx_90.b = 0
                                rdx_38.b = 0
                            else
                                zmm0 = *rdi
                                rdi = &rdi[1]
                                zmm0 = _mm_cvttps_epi32(_mm_mul_ps(
                                    _mm_min_ps(_mm_max_ps(zmm0, zmm2), zmm3), zmm4)) & zmm5
                                zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                                i_13.d = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                                rax_137 = zx.d(i_13:2.b)
                                rcx_90 = zx.d(i_13:1.b)
                                rdx_38 = zx.d(i_13.b)
                            
                            uint64_t r8_7 = zx.q(rax_137.b)
                            uint32_t r10_8 = zx.d(rcx_90.b)
                            uint32_t r9_5 = zx.d(rdx_38.b)
                            char rax_140 = rsi_5.b
                            
                            if (rsi_5 u> 0xff)
                                rax_140 = -1
                            
                            *(r13_2 - 2) = rax_140
                            int32_t rcx_100 = (((r8_7.d * 0x70 - r9_5 * 0x26 - r10_8 * 0x4a + 0x80)
                                s>> 8) + 0x100 + r11_18) s>> 1
                            
                            if (rcx_100 s< 0)
                                rcx_100 = 0
                            
                            char rax_143 = rcx_100.b
                            
                            if (rcx_100 s> 0xff)
                                rax_143 = -1
                            
                            *(r13_2 - 1) = rax_143
                            char rax_144 = (((r10_8 * 0x81 + r8_7.d * 0x19 + r9_5 * 0x42 + 0x80)
                                u>> 8) + 0x10).b
                            
                            if (((r10_8 * 0x81 + r8_7.d * 0x19 + r9_5 * 0x42 + 0x80) u>> 8) + 0x10
                                    u> 0xff)
                                rax_144 = -1
                            
                            *r13_2 = rax_144
                            int32_t rdx_45 = (rbx_64 + 0x100
                                + ((r9_5 * 0x70 - (r8_7 * 9).d * 2 - r10_8 * 0x5e + 0x80) s>> 8)) s>> 1
                            
                            if (rdx_45 s< 0)
                                rdx_45 = 0
                            
                            char rax_148 = rdx_45.b
                            
                            if (rdx_45 s> 0xff)
                                rax_148 = -1
                            
                            *(r13_2 + 1) = rax_148
                            r13_2 += 4
                        while (var_d8_3 + r13_2 u< i_9)
                        
                        result.b = 1
            case 0x142846571
                if (i_6 u< 8)
                    result.b = 0
                else
                    i_11 = i_6 - 7
                    
                    if (i_6 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        uint64_t var_d8_4 = &rsi[4]
                        uint64_t r11_24
                        
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm2 = data_143702d90
                            zmm3 = data_143702d70
                            zmm4 = data_1434d6310
                            zmm5 = data_1434d6320
                            zmm0 = _mm_cvttps_epi32(_mm_mul_ps(
                                _mm_min_ps(_mm_max_ps(zmm0, zmm2), zmm3), zmm4)) & zmm5
                            zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                            zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                            i_13.d = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                            uint64_t r9_6 = zx.q(i_13.d)
                            int64_t r8_9 = zx.q(r9_6.d) & 0x3ff
                            int64_t rdx_48 = zx.q(r9_6.d) u>> 0xa & 0x3ff
                            int64_t r9_8 = r9_6 u>> 0x14 & 0x3ff
                            uint32_t r11_22 = ((r8_9 * 0x418c + 0x8000 + r9_8 * 0x1990
                                + rdx_48 * 0x80ae) u>> 0x10).d
                            i_9.d = r11_22 + 0x40
                            int32_t rax_156
                            
                            if (rdi u>= r14_3)
                                rax_156 = 0
                            else
                                zmm0 = *rdi
                                rdi = &rdi[1]
                                zmm0 = _mm_cvttps_epi32(_mm_mul_ps(
                                    _mm_min_ps(_mm_max_ps(zmm0, zmm2), zmm3), zmm4)) & zmm5
                                zmm1 = _mm_shuffle_epi32(zmm0, 0xee) | zmm0
                                zmm0 = _mm_shuffle_epi32(zmm1, 0x55)
                                i_13.d = (_mm_add_epi32(zmm0, zmm0) | zmm1)[0]
                                rax_156 = i_13.d
                            
                            r11_22.w += 0x40
                            int64_t r9_10 = zx.q(rax_156) & 0x3ff
                            int64_t r8_12 = zx.q(rax_156) u>> 0xa & 0x3ff
                            int64_t r10_11 = zx.q(rax_156) u>> 0x14 & 0x3ff
                            uint32_t rdx_51 = ((r9_10 * 0x418c + r10_11 * 0x1990 + r8_12 * 0x80ae
                                + 0x8000) u>> 0x10).d
                            
                            if (i_9.d u> 0x3ff)
                                r11_22.w = 0x3ff
                            
                            r11_22.w <<= 6
                            *(var_d8_4 - 4) = r11_22.w
                            int32_t rax_165 = ((r10_11 * 0x701c - r8_12 * 0x4a49 - r9_10 * 0x25d3
                                + 0x8000) s>> 0x10).d + 0x400 + ((r9_8 * 0x701c - rdx_48 * 0x4a49
                                - r8_9 * 0x25d3 + 0x8000) s>> 0x10).d
                            int32_t rax_166 = rax_165 s>> 1
                            
                            if (rax_166 s< 0)
                                rax_166 = 0
                            
                            if (rax_166 s> 0x3ff)
                                rax_166.w = 0x3ff
                            
                            rax_166.w <<= 6
                            *(var_d8_4 - 2) = rax_166.w
                            int32_t rax_167 = rdx_51 + 0x40
                            rdx_51.w += 0x40
                            
                            if (rax_167 u> 0x3ff)
                                rdx_51.w = 0x3ff
                            
                            rdx_51.w <<= 6
                            *var_d8_4 = rdx_51.w
                            int32_t rax_172 = ((r8_9 * 0x701c - r9_8 * 0x123b - rdx_48 * 0x5de1
                                + 0x8000) s>> 0x10).d + 0x400 + ((r9_10 * 0x701c - r10_11 * 0x123b
                                - r8_12 * 0x5de1 + 0x8000) s>> 0x10).d
                            int32_t rax_173 = rax_172 s>> 1
                            
                            if (rax_173 s< 0)
                                rax_173 = 0
                            
                            if (rax_173 s> 0x3ff)
                                rax_173.w = 0x3ff
                            
                            rax_173.w <<= 6
                            *(var_d8_4 + 2) = rax_173.w
                            r11_24 = var_d8_4 + 8
                            var_d8_4 = r11_24
                        while (-4 - rsi + r11_24 u< i_11)
                        result.b = 1
            case 0x1428467ee
                if (i_6 u< 8)
                    result.b = 0
                else
                    uint64_t i_12 = i_6 - 7
                    
                    if (i_6 == 7)
                    labelid_1:
                        result.b = 1
                    else
                        uint64_t var_d8_5 = &rsi[4]
                        uint64_t rsi_17
                        
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm1 = data_143702d90
                            zmm2 = data_143702d70
                            zmm3 = data_143702c20
                            zmm4 = data_143702d50
                            zmm0 = _mm_cvttps_epi32(_mm_add_ps(
                                _mm_mul_ps(_mm_min_ps(_mm_max_ps(zmm0, zmm1), zmm2), zmm3), zmm4))
                            uint64_t r8_13 = zx.q(_mm_extract_epi16(zmm0, 0))
                            uint64_t r9_11 = zx.q(_mm_extract_epi16(zmm0, 2))
                            uint64_t rdx_52 = zx.q(_mm_extract_epi16(zmm0, 4))
                            uint64_t i_14 = (rdx_52 * 0x1989 + 0x8000 + r9_11 * 0x808e
                                + r8_13 * 0x417b) u>> 0x10
                            i_11 = i_14
                            i_13.d = (i_14 + 0x1000).d
                            int16_t rax_183
                            int16_t rcx_125
                            int16_t rdx_53
                            
                            if (rdi u>= r14_3)
                                rdx_53 = 0
                                rax_183 = 0
                                rcx_125 = 0
                            else
                                zmm0 = *rdi
                                rdi = &rdi[1]
                                zmm0 = _mm_cvttps_epi32(_mm_add_ps(
                                    _mm_mul_ps(_mm_min_ps(_mm_max_ps(zmm0, zmm1), zmm2), zmm3), 
                                    zmm4))
                                rax_183 = _mm_extract_epi16(zmm0, 0)
                                rcx_125 = _mm_extract_epi16(zmm0, 2)
                                rdx_53 = _mm_extract_epi16(zmm0, 4)
                            
                            uint64_t r9_12 = zx.q(rax_183)
                            uint64_t r10_15 = zx.q(rcx_125)
                            uint64_t r8_14 = zx.q(rdx_53)
                            uint16_t rax_185 = i_11.w + 0x1000
                            uint32_t rdx_57 = ((r8_14 * 0x1989 + 0x8000 + r10_15 * 0x808e
                                + r9_12 * 0x417b) u>> 0x10).d
                            
                            if (i_13.d u> 0xffff)
                                rax_185 = 0xffff
                            
                            *(var_d8_5 - 4) = rax_185
                            int32_t rax_189 = ((rdx_52 * 0x7000 - r9_11 * 0x4a36 - r8_13 * 0x25ca
                                + 0x8000) s>> 0x10).d + 0x10000 + ((r8_14 * 0x7000 - r10_15 * 0x4a36
                                - r9_12 * 0x25ca + 0x8000) s>> 0x10).d
                            int32_t rax_190 = rax_189 s>> 1
                            
                            if (rax_190 s< 0)
                                rax_190 = 0
                            
                            if (rax_190 s> 0xffff)
                                rax_190.w = 0xffff
                            
                            *(var_d8_5 - 2) = rax_190.w
                            int32_t rax_191 = rdx_57 + 0x1000
                            rdx_57.w += 0x1000
                            
                            if (rax_191 u> 0xffff)
                                rdx_57.w = 0xffff
                            
                            *var_d8_5 = rdx_57.w
                            int32_t rax_195 = ((r8_13 * 0x7000 - rdx_52 * 0x1236 - r9_11 * 0x5dca
                                + 0x8000) s>> 0x10).d + 0x10000 + ((r9_12 * 0x7000 - r8_14 * 0x1236
                                - r10_15 * 0x5dca + 0x8000) s>> 0x10).d
                            int32_t rax_196 = rax_195 s>> 1
                            
                            if (rax_196 s< 0)
                                rax_196 = 0
                            
                            if (rax_196 s> 0xffff)
                                rax_196.w = 0xffff
                            
                            *(var_d8_5 + 2) = rax_196.w
                            rsi_17 = var_d8_5 + 8
                            var_d8_5 = rsi_17
                        while (rsi_17 + -4 - rsi u< i_12)
                        result.b = 1
            case 0x142846a36
                if (i_6 u< 2)
                    result.b = 0
                else
                    char* rdx_58 = rsi
                    
                    if (i_6 == 1)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm1 = _mm_cvtps_epi32(__minps_xmmps_memps(
                                __maxps_xmmps_memps(
                                    __mulps_xmmps_memps(_mm_shuffle_ps(zmm0, zmm0, 0xc6), 
                                        data_1434d64c0), 
                                    data_143702d90), 
                                data_1434d6430))
                            int16_t temp0_364 = _mm_extract_epi16(zmm1, 6)
                            *rdx_58 = (((_mm_extract_epi16(zmm1, 4) & 0xf) | temp0_364 << 4) << 4
                                | (_mm_extract_epi16(zmm1, 2) & 0xf)) << 4
                                | (_mm_extract_epi16(zmm1, 0) & 0xf)
                            rdx_58 = &rdx_58[2]
                        while (rdx_58 - rsi u< i_6 - 1)
                        
                        result.b = 1
            case 0x142846acb
                if (i_6 u< 4)
                    result.b = 0
                else
                    char* r10_16 = rsi
                    
                    if (i_6 == 3)
                    labelid_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm1 = *rdi
                            rdi = &rdi[1]
                            zmm1 = __mulps_xmmps_memps(zmm1, data_1434d64d0)
                            zmm6 = _mm_min_ps(data_1434d64e0, _mm_max_ps(data_143702d90, zmm1))
                            int32_t rax_203 = (sub_14283f7a0(zmm6[0]) ^ *r10_16) & 0x3ff
                            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                            *r10_16 ^= rax_203
                            int32_t r9_16 = (sub_14283f7a0(zmm0[0]) << 0xa ^ *r10_16) & 0xffc00
                            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                            int32_t r9_17 = r9_16 ^ *r10_16
                            *r10_16 = r9_17
                            *r10_16 = ((sub_14283f7a0(zmm0[0]) & 0x3ff)
                                | (int.q(_mm_shuffle_ps(zmm6, zmm6, 0xff)[0])).d << 0xa) << 0x14
                                | (r9_17 & 0xfffff)
                            r10_16 = &r10_16[4]
                        while (r10_16 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142846b93
                if (i_6 u< 4)
                    result.b = 0
                else
                    char* r10_17 = rsi
                    
                    if (i_6 == 3)
                    label_142846d3c:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm1 = *rdi
                            rdi = &rdi[1]
                            zmm1 = __mulps_xmmps_memps(zmm1, data_1434d64f0)
                            zmm6 = _mm_min_ps(data_1434d6500, _mm_max_ps(data_143702d90, zmm1))
                            int32_t rax_213 = (sub_14283f730(zmm6[0]) ^ *r10_17) & 0x3ff
                            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                            *r10_17 ^= rax_213
                            int32_t r9_22 = (sub_14283f730(zmm0[0]) << 0xa ^ *r10_17) & 0xffc00
                            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                            int32_t r9_23 = r9_22 ^ *r10_17
                            *r10_17 = r9_23
                            *r10_17 = ((sub_14283f730(zmm0[0]) & 0x3ff)
                                | (int.q(_mm_shuffle_ps(zmm6, zmm6, 0xff)[0])).d << 0xa) << 0x14
                                | (r9_23 & 0xfffff)
                            r10_17 = &r10_17[4]
                        while (r10_17 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142846c53
                if (i_6 u< 4)
                    result.b = 0
                else
                    uint32_t* rcx_144 = rsi
                    
                    if (i_6 == 3)
                    label_142846d3c_1:
                        result.b = 1
                    else
                        do
                            if (rdi u>= r14_3)
                                goto label_142846d3c_2
                            
                            zmm0 = *rdi
                            rdi = &rdi[1]
                            zmm0 = __maxps_xmmps_memps(zmm0, data_1434d62e0)
                            zmm2 = data_143702da0
                            zmm0 = _mm_cvtps_epi32(__mulps_xmmps_memps(
                                __minps_xmmps_memps(zmm0, data_143702d70), data_1434d62f0))
                                & data_1434d6300
                            zmm2 = _mm_add_epi32(zmm2 & zmm0, zmm0)
                            zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
                            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                            *rcx_144 = (zmm3 | zmm2 | zmm1 | _mm_shuffle_ps(zmm1, zmm1, 0x39))[0]
                            rcx_144 = &rcx_144[1]
                        while (rcx_144 - rsi u< i_6 - 3)
                        
                        result.b = 1
            case 0x142846ce9
                if (i_6 u< 1)
                    result.b = 0
                else
                    char* rdx_59 = rsi
                    
                    while (rdi u< r14_3)
                        zmm0 = *rdi
                        rdi = &rdi[1]
                        zmm0 = _mm_cvtps_epi32(__minps_xmmps_memps(
                            __maxps_xmmps_memps(_mm_mul_ps(data_1434d6510, zmm0), data_143702d90), 
                            data_1434d6430))
                        char temp0_392 = _mm_extract_epi16(zmm0, 2)
                        *rdx_59 = (_mm_extract_epi16(zmm0, 0) & 0xf) | temp0_392 << 4
                        rdx_59 = &rdx_59[1]
                        
                        if (rdx_59 - rsi u>= i_6)
                            break
                    
                label_142846d3c_2:
                    result.b = 1
            case 0x142846d40
                result.b = 0

__security_check_cookie(var_a8 ^ &var_f8)
return result
