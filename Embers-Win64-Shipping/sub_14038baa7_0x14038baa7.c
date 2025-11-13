// 函数: sub_14038baa7
// 地址: 0x14038baa7
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6[0x4]
int32_t var_28[0x4] = zmm6
int32_t zmm7[0x4]
int32_t var_18[0x4] = zmm7
int64_t rax = sx.q(arg3)
void* result
int32_t zmm1[0x4]
int32_t zmm2[0x4]
int32_t zmm3[0x4]
int32_t zmm4[0x4]
int32_t zmm5[0x4]

if (rax == 0)
    int32_t (* i)[0x4] = arg5
    int64_t rdx_2 = sx.q(arg6)
    zmm1 = *((sx.q(arg4) << 5) + &data_143608a90)
    zmm2 = *((sx.q(arg4) << 5) + 0x143608aa0)
    result = sx.q(arg2)
    zmm7 = *arg1
    void* rsi_3 = arg1 + result
    
    do
        zmm3 = *rsi_3
        zmm5 = zmm7
        zmm6 = zmm7
        zmm7 = zmm3
        int32_t temp0_44[0x4] = _mm_unpacklo_epi8(zmm5, 0)
        int32_t temp0_45[0x4] = _mm_unpackhi_epi8(zmm6, 0)
        int32_t temp0_46[0x4] = _mm_unpacklo_epi8(zmm3, 0)
        int32_t temp0_47[0x4] = _mm_unpackhi_epi8(zmm3, 0)
        int32_t temp0_48[0x4] = _mm_mullo_epi16(temp0_44, zmm1)
        int32_t temp0_49[0x4] = _mm_mullo_epi16(temp0_45, zmm1)
        int32_t temp0_50[0x4] = _mm_mullo_epi16(temp0_46, zmm2)
        int32_t temp0_51[0x4] = _mm_mullo_epi16(temp0_47, zmm2)
        zmm3 = _mm_add_epi16(temp0_50, temp0_48)
        zmm4 = _mm_add_epi16(temp0_51, temp0_49)
        *i = _mm_packus_epi16(_mm_srai_epi16(__paddw_xmmdq_memdq(zmm3, *@@@@@@@"), 7), 
            _mm_srai_epi16(__paddw_xmmdq_memdq(zmm4, *@@@@@@@"), 7))
        rsi_3 += result
        i += rdx_2
    while (i != &i[rdx_2])
else
    int32_t (* i_1)[0x4] = arg5
    int128_t* rsi = arg1
    int64_t rdx = sx.q(arg6)
    zmm1 = *((rax << 5) + &data_143608a90)
    zmm2 = *((rax << 5) + 0x143608aa0)
    int64_t rax_3 = sx.q(arg4)
    
    if (rax_3 == 0)
        result = sx.q(arg2)
        
        do
            zmm3 = *rsi
            int32_t temp0_59[0x4] = _mm_unpacklo_epi8(zmm3, 0)
            int32_t temp0_60[0x4] = _mm_unpackhi_epi8(zmm3, 0)
            int32_t temp0_61[0x4] = _mm_mullo_epi16(temp0_59, zmm1)
            int32_t temp0_62[0x4] = _mm_mullo_epi16(temp0_60, zmm1)
            zmm5 = *(rsi + 1)
            int32_t temp0_63[0x4] = _mm_unpacklo_epi8(zmm5, 0)
            int32_t temp0_64[0x4] = _mm_unpackhi_epi8(zmm5, 0)
            int32_t temp0_65[0x4] = _mm_mullo_epi16(temp0_63, zmm2)
            int32_t temp0_66[0x4] = _mm_mullo_epi16(temp0_64, zmm2)
            zmm3 = _mm_add_epi16(temp0_61, temp0_65)
            zmm4 = _mm_add_epi16(temp0_62, temp0_66)
            *i_1 = _mm_packus_epi16(_mm_srai_epi16(__paddw_xmmdq_memdq(zmm3, *@@@@@@@"), 7), 
                _mm_srai_epi16(__paddw_xmmdq_memdq(zmm4, *@@@@@@@"), 7))
            rsi += result
            i_1 += rdx
        while (i_1 != &i_1[rdx])
    else
        result = (rax_3 << 5) + &data_143608a90
        int64_t rdx_1 = sx.q(arg2)
        zmm3 = *rsi
        int32_t temp0_1[0x4] = _mm_unpacklo_epi8(zmm3, 0)
        int32_t temp0_2[0x4] = _mm_unpackhi_epi8(zmm3, 0)
        int32_t temp0_3[0x4] = _mm_mullo_epi16(temp0_1, zmm1)
        int32_t temp0_4[0x4] = _mm_mullo_epi16(temp0_2, zmm1)
        zmm5 = *(rsi + 1)
        int32_t temp0_5[0x4] = _mm_unpacklo_epi8(zmm5, 0)
        int32_t temp0_6[0x4] = _mm_unpackhi_epi8(zmm5, 0)
        int32_t temp0_7[0x4] = _mm_mullo_epi16(temp0_5, zmm2)
        int32_t temp0_8[0x4] = _mm_mullo_epi16(temp0_6, zmm2)
        zmm3 = _mm_add_epi16(temp0_3, temp0_7)
        zmm4 = _mm_add_epi16(temp0_4, temp0_8)
        zmm7 = _mm_packus_epi16(_mm_srai_epi16(__paddw_xmmdq_memdq(zmm3, *@@@@@@@"), 7), 
            _mm_srai_epi16(__paddw_xmmdq_memdq(zmm4, *@@@@@@@"), 7))
        void* rsi_1 = rsi + rdx_1
        
        do
            zmm3 = *rsi_1
            int32_t temp0_16[0x4] = _mm_unpacklo_epi8(zmm3, 0)
            int32_t temp0_17[0x4] = _mm_unpackhi_epi8(zmm3, 0)
            int32_t temp0_18[0x4] = _mm_mullo_epi16(temp0_16, zmm1)
            int32_t temp0_19[0x4] = _mm_mullo_epi16(temp0_17, zmm1)
            zmm5 = *(rsi_1 + 1)
            int32_t temp0_20[0x4] = _mm_unpacklo_epi8(zmm5, 0)
            int32_t temp0_21[0x4] = _mm_unpackhi_epi8(zmm5, 0)
            int32_t temp0_22[0x4] = _mm_mullo_epi16(temp0_20, zmm2)
            int32_t temp0_23[0x4] = _mm_mullo_epi16(temp0_21, zmm2)
            zmm3 = _mm_add_epi16(temp0_18, temp0_22)
            zmm4 = _mm_add_epi16(temp0_19, temp0_23)
            int32_t temp0_26[0x4] = _mm_unpacklo_epi8(zmm7, 0)
            int32_t temp0_27[0x4] = _mm_unpackhi_epi8(zmm7, 0)
            int32_t temp0_28[0x4] = __pmullw_xmmdq_memdq(temp0_26, *result)
            int32_t temp0_29[0x4] = __pmullw_xmmdq_memdq(temp0_27, *result)
            zmm3 = _mm_srai_epi16(__paddw_xmmdq_memdq(zmm3, *u"@@@@@@@"), 7)
            zmm4 = _mm_srai_epi16(__paddw_xmmdq_memdq(zmm4, *u"@@@@@@@"), 7)
            zmm7 = _mm_packus_epi16(zmm3, zmm4)
            int32_t temp0_35[0x4] = __pmullw_xmmdq_memdq(zmm3, *(result + 0x10))
            int32_t temp0_36[0x4] = __pmullw_xmmdq_memdq(zmm4, *(result + 0x10))
            zmm3 = _mm_add_epi16(temp0_35, temp0_28)
            zmm4 = _mm_add_epi16(temp0_36, temp0_29)
            *i_1 = _mm_packus_epi16(_mm_srai_epi16(__paddw_xmmdq_memdq(zmm3, *@@@@@@@"), 7), 
                _mm_srai_epi16(__paddw_xmmdq_memdq(zmm4, *@@@@@@@"), 7))
            rsi_1 += rdx_1
            i_1 += sx.q(arg6)
        while (i_1 != &i_1[rdx])
return result
