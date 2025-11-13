// 函数: __acrt_fltout
// 地址: 0x14154d740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_818
int64_t rax_1 = __security_cookie ^ &var_818
int128_t* rcx = arg9
void* rsi = arg4
void* r14 = arg3
int128_t* var_7a0 = rcx
uint32_t var_7b8[0x4]
var_7b8[0].q = arg2
char var_7c7

if (arg3 == 0)
    var_7c7 = 7
else
    var_7c7 = (*arg3)[2].b & 0x3f

char var_7c8

if (rsi == 0)
    var_7c8 = 7
else
    var_7c8 = (*arg4)[2].b & 0x3f

void* result

if (r14 == 0 || rsi == 0)
    int128_t* var_7e0_13 = rcx
    float var_7e8_13 = arg7[0]
    result = sub_141551fd0(arg1, arg2, arg3, arg4, arg5.d, arg6)
else
    char r8 = (*arg3)[2].b
    char rdx = (*arg4)[2].b
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    float zmm8[0x4]
    float var_78_1[0x4] = zmm8
    float zmm9[0x4]
    float var_88_1[0x4] = zmm9
    float zmm10[0x4]
    float var_98_1[0x4] = zmm10
    float zmm11[0x4]
    float var_a8_1[0x4] = zmm11
    float zmm12[0x4]
    float var_b8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_c8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_d8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_e8_1[0x4] = zmm15
    float (* var_7a8)[0x4]
    float zmm1[0x4]
    float zmm2[0x4]
    float zmm3[0x4]
    float zmm4[0x4]
    float zmm5[0x4]
    
    if (r8 != 4)
        if (rdx != 4)
            if (((rdx | r8) & 0x40) == 0)
                goto label_14154ede2
            
            void* var_798_1 = r14
            void* rcx_12 = rsi
            
            if ((r8 & 0x40) != 0)
                void* rax_10 = sub_14173e680(r14)
                rdx = *(rsi + 8)
                rcx_12 = rsi
                var_798_1 = rax_10
            
            if ((rdx & 0x40) != 0)
                void* rax_11 = sub_14173e680(rsi)
                rdx = *(rsi + 8)
                rcx_12 = rax_11
            
            if (var_798_1 != 0)
                float var_7e8_4 = arg7[0]
                
                if (rcx_12 == 0)
                    result = __acrt_fltout(arg1, arg2, var_798_1, rsi, arg5, arg6, var_7e8_4, arg8, 
                        var_7a0)
                else
                    result = __acrt_fltout(arg1, arg2, var_798_1, rcx_12, arg5, arg6, var_7e8_4, 
                        arg8, var_7a0)
            else if (rcx_12 == 0)
                rcx = var_7a0
                r8 = *(r14 + 8)
            label_14154ede2:
                
                if (r8 == 5)
                    if (r8 != r8)
                        r14 = nullptr
                    
                    var_7b8[0].q = *(r14 + 0x10)
                    int64_t* i = var_7b8[0].q
                    result = &i[sx.q(*(r14 + 0x18))]
                    var_7b8[0].q = result
                    
                    if (i != result)
                        do
                            result =
                                __acrt_fltout(arg1, arg2, *i, rsi, arg5, arg6, arg7[0], arg8, rcx)
                            rcx = var_7a0
                            i = &i[1]
                        while (i != var_7b8[0].q)
                else
                    void* rcx_23
                    
                    if (r8 == 0xf)
                        if (r8 != r8)
                            r14 = nullptr
                        
                        if (*(rsi + 0xc) != 0)
                            void* var_790 = nullptr
                            int32_t var_788_1 = 0
                            int64_t rdi_1 = *r14
                            float var_128[0x3][0x4]
                            float (* rax_16)[0x4] = sub_140ad7d70(arg6, &var_128, arg5)
                            int64_t r8_8 = *rsi
                            void var_2d8
                            void var_2c0
                            (*(rdi_1 + 0x78))(r14, &var_790, 
                                sub_1417598c0((*(r8_8 + 0x28))(rsi, &var_2d8, r8_8), &var_2c0, 
                                    rax_16))
                            rcx_23 = var_790
                            result = (sx.q(var_788_1) << 6) + rcx_23
                            void* result_1 = result
                            
                            if (rcx_23 != result)
                                zmm15 = arg7
                                void* r14_1 = rcx_23 + 0x20
                                
                                do
                                    zmm6 = arg5[2]
                                    zmm8 = *(r14_1 + 0x10)
                                    float zmm1_5[0x4]
                                    float zmm2_8[0x4]
                                    
                                    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm8, zmm6), 
                                            data_143ef7530, 1)) == 0)
                                        float zmm4_4[0x4] = *arg5
                                        zmm2_8 = *(r14_1 - 0x10)
                                        float temp0_805[0x4] = __mulps_xmmps_memps(zmm6, *r14_1)
                                        float temp0_806[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0)
                                        float temp0_808[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(zmm2_8, zmm2_8, 0x1b), temp0_806)
                                        float temp0_809[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0x55)
                                        float temp0_810[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xff)
                                        zmm13 = _mm_mul_ps(zmm6, zmm8)
                                        float temp0_814[0x4] = _mm_add_ps(
                                            __mulps_xmmps_memps(temp0_808, data_143ef72e0), 
                                            _mm_mul_ps(temp0_810, zmm2_8))
                                        float temp0_816[0x4] = _mm_mul_ps(temp0_809, 
                                            _mm_shuffle_ps(zmm2_8, zmm2_8, 0x4e))
                                        float temp0_819[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(zmm4_4, zmm4_4, 0xaa), 
                                            _mm_shuffle_ps(zmm2_8, zmm2_8, 0xb1))
                                        float temp0_820[0x4] =
                                            __mulps_xmmps_memps(temp0_816, data_143ef72d0)
                                        float temp0_821[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xd2)
                                        float temp0_822[0x4] =
                                            __mulps_xmmps_memps(temp0_819, data_143ef72c0)
                                        float temp0_823[0x4] = _mm_add_ps(temp0_814, temp0_820)
                                        float temp0_824[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xc9)
                                        float temp0_826[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_805, temp0_805, 0xd2), temp0_824)
                                        zmm6 = _mm_add_ps(temp0_823, temp0_822)
                                        float temp0_830[0x4] = _mm_sub_ps(temp0_826, 
                                            _mm_mul_ps(_mm_shuffle_ps(temp0_805, temp0_805, 0xc9), 
                                                temp0_821))
                                        zmm1_5 = _mm_add_ps(temp0_830, temp0_830)
                                        float temp0_832[0x4] = _mm_mul_ps(temp0_810, zmm1_5)
                                        float temp0_834[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(zmm1_5, zmm1_5, 0xd2), temp0_824)
                                        float temp0_835[0x4] = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xc9)
                                        float temp0_836[0x4] = _mm_add_ps(temp0_832, temp0_805)
                                        zmm7 = __addps_xmmps_memps(
                                            _mm_add_ps(
                                                _mm_sub_ps(temp0_834, 
                                                    _mm_mul_ps(temp0_835, temp0_821)), 
                                                temp0_836), 
                                            arg5[1])
                                    else
                                        zmm1_5 = *arg5
                                        zmm11 = data_143ef72f0
                                        float temp0_676[0x4] = _mm_add_ps(zmm1_5, zmm1_5)
                                        float temp0_677[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                                        _mm_mul_ps(zmm6, zmm8)
                                        float temp0_679[0x4] = _mm_shuffle_ps(zmm1_5, zmm1_5, 4)
                                        float temp0_680[0x4] = _mm_mul_ps(zmm1_5, temp0_676)
                                        float temp0_682[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_676, temp0_676, 0x29), temp0_679)
                                        float temp0_683[0x4] = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xff)
                                        float temp0_684[0x4] =
                                            _mm_shuffle_ps(temp0_680, temp0_680, 0x1a)
                                        float temp0_686[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_676, temp0_676, 0x12), temp0_683)
                                        float temp0_688[0x4] = _mm_add_ps(temp0_684, 
                                            _mm_shuffle_ps(temp0_680, temp0_680, 1))
                                        float temp0_689[0x4] = _mm_add_ps(temp0_686, temp0_682)
                                        float temp0_690[0x4] = _mm_sub_ps(temp0_682, temp0_686)
                                        float temp0_691[0x4] = _mm_sub_ps(zmm11, temp0_688)
                                        float temp0_692[0x4] = _mm_mul_ps(temp0_689, zmm6)
                                        float temp0_693[0x4] = _mm_mul_ps(temp0_677, temp0_690)
                                        zmm1_5 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_691, zmm6), 
                                            data_143ef7300)
                                        float temp0_696[0x4] =
                                            _mm_shuffle_ps(temp0_693, zmm1_5, 0x32)
                                        float temp0_698[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_692, zmm1_5, 0), temp0_696, 0x82)
                                        float temp0_699[0x4] =
                                            _mm_shuffle_ps(temp0_692, zmm1_5, 0x31)
                                        float temp0_701[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_693, zmm1_5, 0x10), temp0_699, 
                                            0x88)
                                        float temp0_703[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_692, temp0_693, 0x12), zmm1_5, 
                                            0xe8)
                                        float var_588_1[0x4] = temp0_701
                                        float var_598_1[0x4] = temp0_698
                                        float var_578_1[0x4] = temp0_703
                                        zmm9 = arg5[1]
                                        zmm11[0].q = zmm9 u>> 0x40
                                        float temp0_704[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                                        float var_568_1[0x4] = temp0_704
                                        float zmm3_8[0x4] = *(r14_1 - 0x10)
                                        float temp0_705[0x4] = _mm_shuffle_ps(zmm3_8, zmm3_8, 4)
                                        float temp0_706[0x4] = _mm_add_ps(zmm3_8, zmm3_8)
                                        float temp0_707[0x4] = _mm_mul_ps(temp0_706, zmm3_8)
                                        float temp0_709[0x4] = _mm_mul_ps(temp0_705, 
                                            _mm_shuffle_ps(temp0_706, temp0_706, 0x29))
                                        float temp0_712[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(zmm3_8, zmm3_8, 0xff), 
                                            _mm_shuffle_ps(temp0_706, temp0_706, 0x12))
                                        zmm1_5 = *(r14_1 + 0x10)
                                        float temp0_713[0x4] =
                                            _mm_shuffle_ps(temp0_707, temp0_707, 0x1a)
                                        float temp0_714[0x4] =
                                            _mm_shuffle_ps(temp0_707, temp0_707, 1)
                                        float temp0_715[0x4] = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xc9)
                                        float temp0_716[0x4] = _mm_add_ps(temp0_712, temp0_709)
                                        float temp0_717[0x4] = _mm_sub_ps(temp0_709, temp0_712)
                                        float temp0_718[0x4] = _mm_add_ps(temp0_713, temp0_714)
                                        float temp0_719[0x4] = _mm_mul_ps(temp0_716, zmm1_5)
                                        float temp0_720[0x4] = _mm_mul_ps(temp0_715, temp0_717)
                                        zmm2_8 = __andps_xmmxud_memxud(
                                            _mm_mul_ps(_mm_sub_ps(zmm11, temp0_718), zmm1_5), 
                                            data_143ef7300)
                                        float temp0_726[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_719, zmm2_8, 0), 
                                            _mm_shuffle_ps(temp0_720, zmm2_8, 0x32), 0x82)
                                        float temp0_727[0x4] =
                                            _mm_shuffle_ps(temp0_719, zmm2_8, 0x31)
                                        float temp0_728[0x4] =
                                            _mm_shuffle_ps(temp0_726, temp0_726, 0xaa)
                                        float temp0_730[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_720, zmm2_8, 0x10), temp0_727, 
                                            0x88)
                                        float var_558_1[0x4] = temp0_726
                                        float temp0_731[0x4] = _mm_mul_ps(temp0_728, temp0_703)
                                        float temp0_733[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_719, temp0_720, 0x12), zmm2_8, 
                                            0xe8)
                                        float temp0_735[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_726, temp0_726, 0x55), temp0_701)
                                        float var_548_1[0x4] = temp0_730
                                        float var_538_1[0x4] = temp0_733
                                        float zmm5_4[0x4] = *r14_1
                                        zmm11[0].q = zmm5_4 u>> 0x40
                                        float temp0_736[0x4] = _mm_shuffle_ps(zmm5_4, zmm11, 0xc4)
                                        float temp0_737[0x4] =
                                            _mm_shuffle_ps(temp0_726, temp0_726, 0)
                                        float temp0_739[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_726, temp0_726, 0xff), temp0_704)
                                        float var_528_1[0x4] = temp0_736
                                        float temp0_741[0x4] =
                                            _mm_add_ps(temp0_735, _mm_mul_ps(temp0_737, temp0_698))
                                        float temp0_743[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_730, temp0_730, 0), temp0_698)
                                        float temp0_744[0x4] = _mm_add_ps(temp0_741, temp0_731)
                                        float temp0_746[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_730, temp0_730, 0xaa), temp0_703)
                                        float temp0_747[0x4] = _mm_add_ps(temp0_744, temp0_739)
                                        float temp0_749[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_730, temp0_730, 0x55), temp0_701)
                                        float temp0_750[0x4] =
                                            _mm_shuffle_ps(temp0_730, temp0_730, 0xff)
                                        float var_668[0x4] = temp0_747
                                        float temp0_751[0x4] =
                                            _mm_shuffle_ps(temp0_733, temp0_733, 0x55)
                                        float temp0_752[0x4] = _mm_add_ps(temp0_749, temp0_743)
                                        float temp0_753[0x4] = _mm_mul_ps(temp0_751, temp0_701)
                                        float temp0_754[0x4] = _mm_mul_ps(temp0_750, temp0_704)
                                        float temp0_755[0x4] =
                                            _mm_shuffle_ps(temp0_733, temp0_733, 0)
                                        float temp0_756[0x4] = _mm_add_ps(temp0_752, temp0_746)
                                        float temp0_757[0x4] = _mm_mul_ps(temp0_755, temp0_698)
                                        float temp0_759[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_733, temp0_733, 0xaa), temp0_703)
                                        float temp0_760[0x4] = _mm_add_ps(temp0_756, temp0_754)
                                        float temp0_761[0x4] =
                                            _mm_shuffle_ps(temp0_733, temp0_733, 0xff)
                                        float temp0_762[0x4] = _mm_add_ps(temp0_753, temp0_757)
                                        float temp0_763[0x4] = _mm_mul_ps(temp0_761, temp0_704)
                                        float temp0_764[0x4] =
                                            _mm_shuffle_ps(temp0_736, temp0_736, 0)
                                        int96_t var_658_1 = temp0_760[0].12
                                        float temp0_765[0x4] =
                                            _mm_shuffle_ps(temp0_736, temp0_736, 0x55)
                                        float temp0_766[0x4] = _mm_add_ps(temp0_762, temp0_759)
                                        float temp0_767[0x4] = _mm_mul_ps(temp0_765, temp0_701)
                                        float temp0_769[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_736, temp0_736, 0xaa), temp0_703)
                                        float temp0_770[0x4] = _mm_mul_ps(temp0_764, temp0_698)
                                        float temp0_771[0x4] = _mm_add_ps(temp0_766, temp0_763)
                                        float temp0_773[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_736, temp0_736, 0xff), temp0_704)
                                        float temp0_774[0x4] = _mm_add_ps(temp0_767, temp0_770)
                                        int96_t var_648_1 = temp0_771[0].12
                                        int96_t var_638_1 = _mm_add_ps(
                                            _mm_add_ps(temp0_774, temp0_769), temp0_773)[0].12
                                        zmm11, zmm13, zmm14, zmm15 =
                                            sub_1407740e0(&var_668, 0x322bcc77)
                                        float zmm2_9[0x4] = var_668[0]
                                        float zmm1_6 = var_668[1]
                                        zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm13, 2), 
                                            data_143ef7520 ^ zmm11)
                                        uint32_t zmm0_6[0x4] = var_668[2]
                                        zmm14 ^= data_143ef7520
                                        zmm2_9[0] = zmm2_9[0] * zmm14[0]
                                        zmm1_6 = zmm1_6 * zmm14[0]
                                        zmm0_6[0] = zmm0_6[0] f* zmm14[0]
                                        var_668[0] = zmm2_9[0]
                                        float temp0_779[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                                        var_668[1] = zmm1_6
                                        zmm1_6 = var_658_1:4.d * temp0_779[0]
                                        var_668[2] = zmm0_6[0]
                                        zmm0_6 = var_658_1:8.d
                                        zmm0_6[0] = zmm0_6[0] f* temp0_779[0]
                                        float zmm3_9 = var_658_1.d * temp0_779[0]
                                        zmm2_9 = var_648_1.d
                                        var_658_1:4.d = zmm1_6
                                        var_658_1:8.d = zmm0_6[0]
                                        zmm0_6 = var_648_1:8.d
                                        float temp0_780[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                                        zmm1_6 = var_648_1:4.d * temp0_780[0]
                                        zmm0_6[0] = zmm0_6[0] f* temp0_780[0]
                                        zmm2_9[0] = zmm2_9[0] * temp0_780[0]
                                        var_648_1:4.d = zmm1_6
                                        var_648_1:8.d = zmm0_6[0]
                                        var_658_1.d = zmm3_9
                                        var_648_1.d = zmm2_9[0]
                                        sub_14077e4a0(&var_7b8, &var_668)
                                        uint32_t zmm5_5[0x4] = var_7b8
                                        zmm6 = data_143ef72b0
                                        float temp0_781[0x4] = _mm_mul_ps(zmm5_5, zmm5_5)
                                        var_7a8.d = 0x322bcc77
                                        float temp0_783[0x4] = _mm_add_ps(temp0_781, 
                                            _mm_shuffle_ps(temp0_781, temp0_781, 0x4e))
                                        float temp0_785[0x4] = _mm_add_ps(
                                            _mm_shuffle_ps(temp0_783, temp0_783, 0x39), temp0_783)
                                        float temp0_786[0x4] = _mm_rsqrt_ps(temp0_785)
                                        float temp0_787[0x4] = _mm_mul_ps(temp0_785, zmm6)
                                        float temp0_792[0x4] = _mm_add_ps(
                                            _mm_mul_ps(
                                                _mm_sub_ps(zmm6, 
                                                    _mm_mul_ps(_mm_mul_ps(temp0_786, temp0_786), 
                                                        temp0_787)), 
                                                temp0_786), 
                                            temp0_786)
                                        zmm1_5 = zx.o(0)
                                        float temp0_795[0x4] = _mm_sub_ps(zmm6, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_792, temp0_792), temp0_787))
                                        float temp0_797[0x4] = _mm_cmpeq_ps(
                                            _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_785, 2)
                                        float temp0_799[0x4] =
                                            _mm_add_ps(_mm_mul_ps(temp0_795, temp0_792), temp0_792)
                                        float temp0_800[0x4] = _mm_unpacklo_ps(var_638_1:4.d, 0)
                                        zmm6 = _mm_and_ps(
                                            _mm_mul_ps(temp0_799, zmm5_5) ^ data_143ef72a0, 
                                            temp0_797) ^ data_143ef72a0
                                        zmm7 = _mm_unpacklo_ps(
                                            _mm_unpacklo_ps(var_638_1.d, var_638_1:8.d[0].q), 
                                            temp0_800[0].q)
                                        var_7b8 = zmm6
                                    float var_7e8_7 = zmm15[0]
                                    float var_1b8[0x4] = zmm6
                                    float var_1a8_1[0x4] = zmm7
                                    float var_198_1[0x4] = zmm13
                                    __acrt_fltout(arg1, zmm1_5, *(r14_1 - 0x20), rsi, &var_1b8, 
                                        arg6, var_7e8_7, arg8, var_7a0)
                                    r14_1 += 0x40
                                    result = r14_1 - 0x20
                                while (result != result_1)
                                
                                rcx_23 = var_790
                            
                            goto label_14154f47c
                        
                        var_7b8[0].q = *(r14 + 0x10)
                        int64_t* i_1 = var_7b8[0].q
                        result = &i_1[sx.q(*(r14 + 0x18))]
                        var_7b8[0].q = result
                        
                        if (i_1 != result)
                            do
                                result = __acrt_fltout(arg1, arg2, *i_1, rsi, arg5, arg6, arg7[0], 
                                    arg8, rcx)
                                rcx = var_7a0
                                i_1 = &i_1[1]
                            while (i_1 != var_7b8[0].q)
                    else if (rdx == 5)
                        if (rdx != rdx)
                            rsi = nullptr
                        
                        var_7b8[0].q = *(rsi + 0x10)
                        int64_t* i_2 = var_7b8[0].q
                        result = &i_2[sx.q(*(rsi + 0x18))]
                        var_7b8[0].q = result
                        
                        if (i_2 != result)
                            do
                                result = __acrt_fltout(arg1, arg2, r14, *i_2, arg5, arg6, arg7[0], 
                                    arg8, rcx)
                                rcx = var_7a0
                                i_2 = &i_2[1]
                            while (i_2 != var_7b8[0].q)
                    else if (rdx != 0xf)
                        if (arg8[3][0].b != 0)
                            void* rax_37 = sub_14173e5e0(arg2, rsi)
                            result =
                                sub_141554ef0(var_7c7, sub_14173e5e0(arg1, r14), var_7c8, rax_37)
                        
                        if (arg8[3][0].b == 0 || result.b != 0)
                            result = sub_14154fd40(arg1, arg2, r14, rsi, arg5, arg6, arg7[0], arg8, 
                                var_7a0)
                    else
                        if (rdx != rdx)
                            rsi = nullptr
                        
                        if (*(r14 + 0xc) == 0)
                            var_7b8[0].q = *(rsi + 0x10)
                            int64_t* i_3 = var_7b8[0].q
                            result = &i_3[sx.q(*(rsi + 0x18))]
                            var_7b8[0].q = result
                            
                            if (i_3 != result)
                                do
                                    result = __acrt_fltout(arg1, arg2, r14, *i_3, arg5, arg6, 
                                        arg7[0], arg8, rcx)
                                    rcx = var_7a0
                                    i_3 = &i_3[1]
                                while (i_3 != var_7b8[0].q)
                        else
                            void* var_780 = nullptr
                            int32_t var_778_1 = 0
                            int64_t rdi_3 = *rsi
                            float var_158[0x3][0x4]
                            float (* rax_27)[0x4] = sub_140ad7d70(arg5, &var_158, arg6)
                            int64_t r8_15 = *r14
                            void var_2a8
                            void var_290
                            (*(rdi_3 + 0x78))(rsi, &var_780, 
                                sub_1417598c0((*(r8_15 + 0x28))(r14, &var_2a8, r8_15), &var_290, 
                                    rax_27))
                            rcx_23 = var_780
                            result = (sx.q(var_778_1) << 6) + rcx_23
                            void* result_2 = result
                            
                            if (rcx_23 != result)
                                zmm15 = arg7
                                void* rsi_1 = rcx_23 + 0x20
                                
                                do
                                    zmm9 = *(rsi_1 + 0x10)
                                    zmm8 = arg6[2]
                                    float zmm1_7[0x4]
                                    float zmm2_10[0x4]
                                    float zmm3_10[0x4]
                                    
                                    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm9, zmm8), 
                                            data_143ef7530, 1)) == 0)
                                        float zmm4_6[0x4] = *arg6
                                        zmm2_10 = *(rsi_1 - 0x10)
                                        zmm3_10 = *rsi_1
                                        float temp0_973[0x4] = _mm_shuffle_ps(zmm4_6, zmm4_6, 0)
                                        float temp0_975[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(zmm2_10, zmm2_10, 0x1b), temp0_973)
                                        float temp0_976[0x4] = _mm_shuffle_ps(zmm4_6, zmm4_6, 0x55)
                                        float temp0_977[0x4] = _mm_mul_ps(zmm3_10, zmm8)
                                        float temp0_978[0x4] =
                                            __mulps_xmmps_memps(temp0_975, data_143ef72e0)
                                        float temp0_979[0x4] = _mm_shuffle_ps(zmm4_6, zmm4_6, 0xff)
                                        float temp0_980[0x4] = _mm_mul_ps(zmm2_10, temp0_979)
                                        zmm13 = _mm_mul_ps(zmm9, zmm8)
                                        float temp0_982[0x4] = _mm_add_ps(temp0_978, temp0_980)
                                        float temp0_984[0x4] = _mm_mul_ps(temp0_976, 
                                            _mm_shuffle_ps(zmm2_10, zmm2_10, 0x4e))
                                        float temp0_987[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(zmm4_6, zmm4_6, 0xaa), 
                                            _mm_shuffle_ps(zmm2_10, zmm2_10, 0xb1))
                                        float temp0_988[0x4] =
                                            __mulps_xmmps_memps(temp0_984, data_143ef72d0)
                                        float temp0_989[0x4] = _mm_shuffle_ps(zmm4_6, zmm4_6, 0xd2)
                                        float temp0_990[0x4] =
                                            __mulps_xmmps_memps(temp0_987, data_143ef72c0)
                                        float temp0_991[0x4] = _mm_add_ps(temp0_982, temp0_988)
                                        float temp0_992[0x4] = _mm_shuffle_ps(zmm4_6, zmm4_6, 0xc9)
                                        float temp0_994[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_977, temp0_977, 0xd2), temp0_992)
                                        zmm6 = _mm_add_ps(temp0_991, temp0_990)
                                        float temp0_998[0x4] = _mm_sub_ps(temp0_994, 
                                            _mm_mul_ps(_mm_shuffle_ps(temp0_977, temp0_977, 0xc9), 
                                                temp0_989))
                                        zmm1_7 = _mm_add_ps(temp0_998, temp0_998)
                                        float temp0_1000[0x4] = _mm_mul_ps(temp0_979, zmm1_7)
                                        float temp0_1002[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(zmm1_7, zmm1_7, 0xd2), temp0_992)
                                        float temp0_1003[0x4] = _mm_shuffle_ps(zmm1_7, zmm1_7, 0xc9)
                                        float temp0_1004[0x4] = _mm_add_ps(temp0_1000, temp0_977)
                                        zmm7 = __addps_xmmps_memps(
                                            _mm_add_ps(
                                                _mm_sub_ps(temp0_1002, 
                                                    _mm_mul_ps(temp0_1003, temp0_989)), 
                                                temp0_1004), 
                                            arg6[1])
                                    else
                                        zmm3_10 = *arg6
                                        zmm11 = data_143ef72f0
                                        float temp0_844[0x4] = _mm_add_ps(zmm3_10, zmm3_10)
                                        float temp0_845[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                                        float temp0_846[0x4] = _mm_shuffle_ps(zmm3_10, zmm3_10, 4)
                                        float temp0_847[0x4] =
                                            _mm_shuffle_ps(zmm3_10, zmm3_10, 0xff)
                                        _mm_mul_ps(zmm8, zmm9)
                                        float temp0_849[0x4] = _mm_mul_ps(zmm3_10, temp0_844)
                                        float temp0_851[0x4] = _mm_mul_ps(temp0_846, 
                                            _mm_shuffle_ps(temp0_844, temp0_844, 0x29))
                                        float temp0_852[0x4] =
                                            _mm_shuffle_ps(temp0_844, temp0_844, 0x12)
                                        float temp0_853[0x4] =
                                            _mm_shuffle_ps(temp0_849, temp0_849, 0x1a)
                                        float temp0_854[0x4] = _mm_mul_ps(temp0_847, temp0_852)
                                        float temp0_856[0x4] = _mm_add_ps(temp0_853, 
                                            _mm_shuffle_ps(temp0_849, temp0_849, 1))
                                        float temp0_857[0x4] = _mm_add_ps(temp0_854, temp0_851)
                                        float temp0_858[0x4] = _mm_sub_ps(temp0_851, temp0_854)
                                        float temp0_859[0x4] = _mm_sub_ps(zmm11, temp0_856)
                                        float temp0_860[0x4] = _mm_mul_ps(temp0_857, zmm8)
                                        float temp0_861[0x4] = _mm_mul_ps(temp0_845, temp0_858)
                                        zmm1_7 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_859, zmm8), 
                                            data_143ef7300)
                                        float temp0_864[0x4] =
                                            _mm_shuffle_ps(temp0_861, zmm1_7, 0x32)
                                        float temp0_866[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_860, zmm1_7, 0), temp0_864, 0x82)
                                        float temp0_867[0x4] =
                                            _mm_shuffle_ps(temp0_860, zmm1_7, 0x31)
                                        float temp0_869[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_861, zmm1_7, 0x10), temp0_867, 
                                            0x88)
                                        float temp0_871[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_860, temp0_861, 0x12), zmm1_7, 
                                            0xe8)
                                        float var_508_1[0x4] = temp0_869
                                        float var_518_1[0x4] = temp0_866
                                        float var_4f8_1[0x4] = temp0_871
                                        zmm9 = arg6[1]
                                        zmm11[0].q = zmm9 u>> 0x40
                                        float temp0_872[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                                        float var_4e8_1[0x4] = temp0_872
                                        zmm1_7 = *(rsi_1 - 0x10)
                                        float temp0_873[0x4] = _mm_add_ps(zmm1_7, zmm1_7)
                                        float temp0_874[0x4] = _mm_shuffle_ps(zmm1_7, zmm1_7, 4)
                                        float temp0_876[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_873, temp0_873, 0x29), temp0_874)
                                        float temp0_877[0x4] = _mm_mul_ps(temp0_873, zmm1_7)
                                        float temp0_880[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_873, temp0_873, 0x12), 
                                            _mm_shuffle_ps(zmm1_7, zmm1_7, 0xff))
                                        zmm1_7 = *(rsi_1 + 0x10)
                                        float temp0_881[0x4] =
                                            _mm_shuffle_ps(temp0_877, temp0_877, 0x1a)
                                        float temp0_882[0x4] =
                                            _mm_shuffle_ps(temp0_877, temp0_877, 1)
                                        float temp0_883[0x4] = _mm_shuffle_ps(zmm1_7, zmm1_7, 0xc9)
                                        float temp0_884[0x4] = _mm_add_ps(temp0_880, temp0_876)
                                        float temp0_885[0x4] = _mm_sub_ps(temp0_876, temp0_880)
                                        float temp0_886[0x4] = _mm_add_ps(temp0_881, temp0_882)
                                        float temp0_887[0x4] = _mm_mul_ps(temp0_884, zmm1_7)
                                        float temp0_888[0x4] = _mm_mul_ps(temp0_883, temp0_885)
                                        zmm2_10 = __andps_xmmxud_memxud(
                                            _mm_mul_ps(_mm_sub_ps(zmm11, temp0_886), zmm1_7), 
                                            data_143ef7300)
                                        float temp0_894[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_887, zmm2_10, 0), 
                                            _mm_shuffle_ps(temp0_888, zmm2_10, 0x32), 0x82)
                                        float temp0_895[0x4] =
                                            _mm_shuffle_ps(temp0_887, zmm2_10, 0x31)
                                        float temp0_896[0x4] =
                                            _mm_shuffle_ps(temp0_894, temp0_894, 0xaa)
                                        float temp0_898[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_888, zmm2_10, 0x10), temp0_895, 
                                            0x88)
                                        float var_4d8_1[0x4] = temp0_894
                                        float temp0_899[0x4] = _mm_mul_ps(temp0_896, temp0_871)
                                        float temp0_901[0x4] = _mm_shuffle_ps(
                                            _mm_shuffle_ps(temp0_887, temp0_888, 0x12), zmm2_10, 
                                            0xe8)
                                        float temp0_903[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_894, temp0_894, 0x55), temp0_869)
                                        float var_4c8_1[0x4] = temp0_898
                                        float var_4b8_1[0x4] = temp0_901
                                        float zmm5_6[0x4] = *rsi_1
                                        zmm11[0].q = zmm5_6 u>> 0x40
                                        float temp0_904[0x4] = _mm_shuffle_ps(zmm5_6, zmm11, 0xc4)
                                        float temp0_905[0x4] =
                                            _mm_shuffle_ps(temp0_894, temp0_894, 0)
                                        float temp0_907[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_894, temp0_894, 0xff), temp0_872)
                                        float var_4a8_1[0x4] = temp0_904
                                        float temp0_909[0x4] =
                                            _mm_add_ps(temp0_903, _mm_mul_ps(temp0_905, temp0_866))
                                        float temp0_911[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_898, temp0_898, 0), temp0_866)
                                        float temp0_912[0x4] = _mm_add_ps(temp0_909, temp0_899)
                                        float temp0_914[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_898, temp0_898, 0xaa), temp0_871)
                                        float temp0_915[0x4] = _mm_add_ps(temp0_912, temp0_907)
                                        float temp0_917[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_898, temp0_898, 0x55), temp0_869)
                                        float temp0_918[0x4] =
                                            _mm_shuffle_ps(temp0_898, temp0_898, 0xff)
                                        float var_628[0x4] = temp0_915
                                        float temp0_919[0x4] =
                                            _mm_shuffle_ps(temp0_901, temp0_901, 0x55)
                                        float temp0_920[0x4] = _mm_add_ps(temp0_917, temp0_911)
                                        float temp0_921[0x4] = _mm_mul_ps(temp0_919, temp0_869)
                                        float temp0_922[0x4] = _mm_mul_ps(temp0_918, temp0_872)
                                        float temp0_923[0x4] =
                                            _mm_shuffle_ps(temp0_901, temp0_901, 0)
                                        float temp0_924[0x4] = _mm_add_ps(temp0_920, temp0_914)
                                        float temp0_925[0x4] = _mm_mul_ps(temp0_923, temp0_866)
                                        float temp0_927[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_901, temp0_901, 0xaa), temp0_871)
                                        float temp0_928[0x4] = _mm_add_ps(temp0_924, temp0_922)
                                        float temp0_929[0x4] =
                                            _mm_shuffle_ps(temp0_901, temp0_901, 0xff)
                                        float temp0_930[0x4] = _mm_add_ps(temp0_921, temp0_925)
                                        float temp0_931[0x4] = _mm_mul_ps(temp0_929, temp0_872)
                                        float temp0_932[0x4] =
                                            _mm_shuffle_ps(temp0_904, temp0_904, 0)
                                        int96_t var_618_1 = temp0_928[0].12
                                        float temp0_933[0x4] =
                                            _mm_shuffle_ps(temp0_904, temp0_904, 0x55)
                                        float temp0_934[0x4] = _mm_add_ps(temp0_930, temp0_927)
                                        float temp0_935[0x4] = _mm_mul_ps(temp0_933, temp0_869)
                                        float temp0_937[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_904, temp0_904, 0xaa), temp0_871)
                                        float temp0_938[0x4] = _mm_mul_ps(temp0_932, temp0_866)
                                        float temp0_939[0x4] = _mm_add_ps(temp0_934, temp0_931)
                                        float temp0_941[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_904, temp0_904, 0xff), temp0_872)
                                        float temp0_942[0x4] = _mm_add_ps(temp0_935, temp0_938)
                                        int96_t var_608_1 = temp0_939[0].12
                                        int96_t var_5f8_1 = _mm_add_ps(
                                            _mm_add_ps(temp0_942, temp0_937), temp0_941)[0].12
                                        zmm11, zmm13, zmm14, zmm15 =
                                            sub_1407740e0(&var_628, 0x322bcc77)
                                        zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm13, 2), 
                                            data_143ef7520 ^ zmm11) ^ data_143ef7520
                                        void var_5e8
                                        int64_t* rax_33 = sub_14173efa0(&var_628, &var_5e8, 1)
                                        float zmm1_8 = zmm14[0]
                                        float zmm0_10 = zmm14[0]
                                        zmm14[0] = zmm14[0] f* *rax_33
                                        zmm1_8 = zmm1_8 f* *(rax_33 + 4)
                                        zmm0_10 = zmm0_10 f* rax_33[1].d
                                        var_628[0] = zmm14[0]
                                        float temp0_947[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                                        var_628[1] = zmm1_8
                                        zmm1_8 = var_618_1:4.d * temp0_947[0]
                                        var_628[2] = zmm0_10
                                        zmm0_10 = var_618_1:8.d * temp0_947[0]
                                        float zmm3_11 = var_618_1.d * temp0_947[0]
                                        float zmm2_11[0x4] = var_608_1.d
                                        var_618_1:4.d = zmm1_8
                                        var_618_1:8.d = zmm0_10
                                        float temp0_948[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                                        zmm1_8 = var_608_1:4.d * temp0_948[0]
                                        zmm0_10 = var_608_1:8.d * temp0_948[0]
                                        zmm2_11[0] = zmm2_11[0] * temp0_948[0]
                                        var_608_1:4.d = zmm1_8
                                        var_608_1:8.d = zmm0_10
                                        var_618_1.d = zmm3_11
                                        var_608_1.d = zmm2_11[0]
                                        sub_14077e4a0(&var_7b8, &var_628)
                                        float zmm5_7[0x4] = var_7b8
                                        zmm6 = data_143ef72b0
                                        float temp0_949[0x4] = _mm_mul_ps(zmm5_7, zmm5_7)
                                        var_7a8.d = 0x322bcc77
                                        float temp0_951[0x4] = _mm_add_ps(temp0_949, 
                                            _mm_shuffle_ps(temp0_949, temp0_949, 0x4e))
                                        float temp0_953[0x4] = _mm_add_ps(
                                            _mm_shuffle_ps(temp0_951, temp0_951, 0x39), temp0_951)
                                        float temp0_954[0x4] = _mm_rsqrt_ps(temp0_953)
                                        float temp0_955[0x4] = _mm_mul_ps(temp0_953, zmm6)
                                        float temp0_960[0x4] = _mm_add_ps(
                                            _mm_mul_ps(
                                                _mm_sub_ps(zmm6, 
                                                    _mm_mul_ps(_mm_mul_ps(temp0_954, temp0_954), 
                                                        temp0_955)), 
                                                temp0_954), 
                                            temp0_954)
                                        zmm1_7 = zx.o(0)
                                        float temp0_963[0x4] = _mm_sub_ps(zmm6, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_960, temp0_960), temp0_955))
                                        float temp0_965[0x4] = _mm_cmpeq_ps(
                                            _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_953, 2)
                                        zmm6 = _mm_and_ps(
                                            _mm_mul_ps(
                                                _mm_add_ps(_mm_mul_ps(temp0_963, temp0_960), 
                                                    temp0_960), 
                                                zmm5_7) ^ data_143ef72a0, 
                                            temp0_965) ^ data_143ef72a0
                                        var_7b8 = zmm6
                                        zmm7 = _mm_unpacklo_ps(
                                            _mm_unpacklo_ps(var_5f8_1.d, var_5f8_1:8.d[0].q), 
                                            _mm_unpacklo_ps(var_5f8_1:4.d, 0)[0].q)
                                    float var_7e8_10 = zmm15[0]
                                    float var_1e8[0x4] = zmm6
                                    float var_1d8_1[0x4] = zmm7
                                    float var_1c8_1[0x4] = zmm13
                                    __acrt_fltout(arg1, zmm1_7, r14, *(rsi_1 - 0x20), arg5, 
                                        &var_1e8, var_7e8_10, arg8, var_7a0)
                                    rsi_1 += 0x40
                                    result = rsi_1 - 0x20
                                while (result != result_2)
                                
                                rcx_23 = var_780
                            
                        label_14154f47c:
                            
                            if (rcx_23 != 0)
                                result = sub_140a74f90(rcx_23)
            else
                result = __acrt_fltout(arg1, arg2, r14, rcx_12, arg5, arg6, arg7[0], arg8, var_7a0)
        else
            zmm6 = arg6[2]
            
            if (rdx != rdx)
                rsi = nullptr
            
            zmm8 = *(rsi + 0x40)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm8, zmm6), data_143ef7530, 1)) == 0)
                zmm4 = *arg6
                zmm2 = *(rsi + 0x20)
                zmm3 = *(rsi + 0x30)
                float temp0_637[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_639[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_637)
                float temp0_640[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                float temp0_641[0x4] = _mm_mul_ps(zmm3, zmm6)
                float temp0_642[0x4] = __mulps_xmmps_memps(temp0_639, data_143ef72e0)
                float temp0_643[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                float temp0_644[0x4] = _mm_mul_ps(zmm2, temp0_643)
                zmm13 = _mm_mul_ps(zmm6, zmm8)
                float temp0_646[0x4] = _mm_add_ps(temp0_642, temp0_644)
                float temp0_648[0x4] = _mm_mul_ps(temp0_640, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                float temp0_651[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                float temp0_652[0x4] = __mulps_xmmps_memps(temp0_648, data_143ef72d0)
                float temp0_653[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                float temp0_654[0x4] = __mulps_xmmps_memps(temp0_651, data_143ef72c0)
                float temp0_655[0x4] = _mm_add_ps(temp0_646, temp0_652)
                float temp0_656[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                float temp0_658[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_641, temp0_641, 0xd2), temp0_656)
                zmm6 = _mm_add_ps(temp0_655, temp0_654)
                float temp0_662[0x4] = _mm_sub_ps(temp0_658, 
                    _mm_mul_ps(_mm_shuffle_ps(temp0_641, temp0_641, 0xc9), temp0_653))
                zmm1 = _mm_add_ps(temp0_662, temp0_662)
                float temp0_664[0x4] = _mm_mul_ps(temp0_643, zmm1)
                float temp0_666[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_656)
                float temp0_667[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                float temp0_668[0x4] = _mm_add_ps(temp0_664, temp0_641)
                zmm7 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_666, _mm_mul_ps(temp0_667, temp0_653)), temp0_668), 
                    arg6[1])
            else
                zmm3 = *arg6
                zmm11 = data_143ef72f0
                float temp0_508[0x4] = _mm_add_ps(zmm3, zmm3)
                float temp0_509[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                _mm_mul_ps(zmm6, zmm8)
                float temp0_511[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                float temp0_512[0x4] = _mm_mul_ps(zmm3, temp0_508)
                float temp0_514[0x4] =
                    _mm_mul_ps(temp0_511, _mm_shuffle_ps(temp0_508, temp0_508, 0x29))
                float temp0_515[0x4] = _mm_shuffle_ps(temp0_508, temp0_508, 0x12)
                float temp0_516[0x4] = _mm_shuffle_ps(temp0_512, temp0_512, 0x1a)
                float temp0_518[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_515)
                float temp0_520[0x4] =
                    _mm_add_ps(temp0_516, _mm_shuffle_ps(temp0_512, temp0_512, 1))
                float temp0_521[0x4] = _mm_add_ps(temp0_518, temp0_514)
                float temp0_522[0x4] = _mm_sub_ps(temp0_514, temp0_518)
                float temp0_523[0x4] = _mm_sub_ps(zmm11, temp0_520)
                float temp0_524[0x4] = _mm_mul_ps(temp0_521, zmm6)
                float temp0_525[0x4] = _mm_mul_ps(temp0_509, temp0_522)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_523, zmm6), data_143ef7300)
                float temp0_528[0x4] = _mm_shuffle_ps(temp0_525, zmm1, 0x32)
                float temp0_530[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_524, zmm1, 0), temp0_528, 0x82)
                float temp0_531[0x4] = _mm_shuffle_ps(temp0_524, zmm1, 0x31)
                float temp0_533[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_525, zmm1, 0x10), temp0_531, 0x88)
                float temp0_535[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_524, temp0_525, 0x12), zmm1, 0xe8)
                float var_308_1[0x4] = temp0_533
                float var_318_1[0x4] = temp0_530
                float var_2f8_1[0x4] = temp0_535
                zmm9 = arg6[1]
                zmm11[0].q = zmm9 u>> 0x40
                float temp0_536[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                float var_2e8_1[0x4] = temp0_536
                zmm1 = *(rsi + 0x20)
                float temp0_537[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_538[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                float temp0_540[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_537, temp0_537, 0x29), temp0_538)
                float temp0_541[0x4] = _mm_mul_ps(temp0_537, zmm1)
                float temp0_544[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_537, temp0_537, 0x12), 
                    _mm_shuffle_ps(zmm1, zmm1, 0xff))
                zmm1 = *(rsi + 0x40)
                float temp0_545[0x4] = _mm_shuffle_ps(temp0_541, temp0_541, 0x1a)
                float temp0_546[0x4] = _mm_shuffle_ps(temp0_541, temp0_541, 1)
                float temp0_547[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                float temp0_548[0x4] = _mm_add_ps(temp0_544, temp0_540)
                float temp0_549[0x4] = _mm_sub_ps(temp0_540, temp0_544)
                float temp0_550[0x4] = _mm_add_ps(temp0_545, temp0_546)
                float temp0_551[0x4] = _mm_mul_ps(temp0_548, zmm1)
                float temp0_552[0x4] = _mm_mul_ps(temp0_547, temp0_549)
                zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, temp0_550), zmm1), 
                    data_143ef7300)
                float temp0_558[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_551, zmm2, 0), 
                    _mm_shuffle_ps(temp0_552, zmm2, 0x32), 0x82)
                float temp0_559[0x4] = _mm_shuffle_ps(temp0_551, zmm2, 0x31)
                float temp0_560[0x4] = _mm_shuffle_ps(temp0_558, temp0_558, 0xaa)
                float temp0_562[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_552, zmm2, 0x10), temp0_559, 0x88)
                float var_5d8_1[0x4] = temp0_558
                float temp0_563[0x4] = _mm_mul_ps(temp0_560, temp0_535)
                float temp0_565[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_551, temp0_552, 0x12), zmm2, 0xe8)
                float temp0_567[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_558, temp0_558, 0x55), temp0_533)
                float var_5c8_1[0x4] = temp0_562
                float var_5b8_1[0x4] = temp0_565
                zmm5 = *(rsi + 0x30)
                zmm11[0].q = zmm5 u>> 0x40
                float temp0_568[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
                float temp0_569[0x4] = _mm_shuffle_ps(temp0_558, temp0_558, 0)
                float temp0_571[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_558, temp0_558, 0xff), temp0_536)
                float var_5a8_1[0x4] = temp0_568
                float temp0_573[0x4] = _mm_add_ps(temp0_567, _mm_mul_ps(temp0_569, temp0_530))
                float temp0_575[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_562, temp0_562, 0), temp0_530)
                float temp0_576[0x4] = _mm_add_ps(temp0_573, temp0_563)
                float temp0_578[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_562, temp0_562, 0xaa), temp0_535)
                float temp0_579[0x4] = _mm_add_ps(temp0_576, temp0_571)
                float temp0_581[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_562, temp0_562, 0x55), temp0_533)
                float temp0_582[0x4] = _mm_shuffle_ps(temp0_562, temp0_562, 0xff)
                float var_768[0x4] = temp0_579
                float temp0_583[0x4] = _mm_shuffle_ps(temp0_565, temp0_565, 0x55)
                float temp0_584[0x4] = _mm_add_ps(temp0_581, temp0_575)
                float temp0_585[0x4] = _mm_mul_ps(temp0_583, temp0_533)
                float temp0_586[0x4] = _mm_mul_ps(temp0_582, temp0_536)
                float temp0_587[0x4] = _mm_shuffle_ps(temp0_565, temp0_565, 0)
                float temp0_588[0x4] = _mm_add_ps(temp0_584, temp0_578)
                float temp0_589[0x4] = _mm_mul_ps(temp0_587, temp0_530)
                float temp0_591[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_565, temp0_565, 0xaa), temp0_535)
                float temp0_592[0x4] = _mm_add_ps(temp0_588, temp0_586)
                float temp0_593[0x4] = _mm_shuffle_ps(temp0_565, temp0_565, 0xff)
                float temp0_594[0x4] = _mm_add_ps(temp0_585, temp0_589)
                float temp0_595[0x4] = _mm_mul_ps(temp0_593, temp0_536)
                float temp0_596[0x4] = _mm_shuffle_ps(temp0_568, temp0_568, 0)
                int96_t var_758_1 = temp0_592[0].12
                float temp0_597[0x4] = _mm_shuffle_ps(temp0_568, temp0_568, 0x55)
                float temp0_598[0x4] = _mm_add_ps(temp0_594, temp0_591)
                float temp0_599[0x4] = _mm_mul_ps(temp0_597, temp0_533)
                float temp0_601[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0xaa), temp0_535)
                float temp0_602[0x4] = _mm_mul_ps(temp0_596, temp0_530)
                float temp0_603[0x4] = _mm_add_ps(temp0_598, temp0_595)
                float temp0_605[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0xff), temp0_536)
                float temp0_606[0x4] = _mm_add_ps(temp0_599, temp0_602)
                int96_t var_748_1 = temp0_603[0].12
                int96_t var_738_1 = _mm_add_ps(_mm_add_ps(temp0_606, temp0_601), temp0_605)[0].12
                zmm11, zmm13, zmm14 = sub_1407740e0(&var_768, 0x322bcc77)
                float zmm2_6[0x4] = var_768[0]
                float zmm1_4 = var_768[1]
                zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm13, 2), data_143ef7520 ^ zmm11)
                uint32_t zmm0_4[0x4] = var_768[2]
                zmm14 ^= data_143ef7520
                zmm2_6[0] = zmm2_6[0] * zmm14[0]
                zmm1_4 = zmm1_4 * zmm14[0]
                zmm0_4[0] = zmm0_4[0] f* zmm14[0]
                var_768[0] = zmm2_6[0]
                float temp0_611[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                var_768[1] = zmm1_4
                zmm1_4 = var_758_1:4.d * temp0_611[0]
                var_768[2] = zmm0_4[0]
                zmm0_4 = var_758_1:8.d
                zmm0_4[0] = zmm0_4[0] f* temp0_611[0]
                float zmm3_6 = var_758_1.d * temp0_611[0]
                zmm2_6 = var_748_1.d
                var_758_1:4.d = zmm1_4
                var_758_1:8.d = zmm0_4[0]
                zmm0_4 = var_748_1:8.d
                float temp0_612[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                zmm1_4 = var_748_1:4.d * temp0_612[0]
                zmm0_4[0] = zmm0_4[0] f* temp0_612[0]
                zmm2_6[0] = zmm2_6[0] * temp0_612[0]
                var_748_1:4.d = zmm1_4
                var_748_1:8.d = zmm0_4[0]
                var_758_1.d = zmm3_6
                var_748_1.d = zmm2_6[0]
                sub_14077e4a0(&var_7b8, &var_768)
                uint32_t zmm5_3[0x4] = var_7b8
                zmm6 = data_143ef72b0
                rcx = var_7a0
                float temp0_613[0x4] = _mm_mul_ps(zmm5_3, zmm5_3)
                var_7a8.d = 0x322bcc77
                float temp0_615[0x4] =
                    _mm_add_ps(temp0_613, _mm_shuffle_ps(temp0_613, temp0_613, 0x4e))
                float temp0_617[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_615, temp0_615, 0x39), temp0_615)
                float temp0_618[0x4] = _mm_rsqrt_ps(temp0_617)
                float temp0_619[0x4] = _mm_mul_ps(temp0_617, zmm6)
                float temp0_624[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_618, temp0_618), temp0_619)), 
                        temp0_618), 
                    temp0_618)
                zmm1 = zx.o(0)
                float temp0_627[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_624, temp0_624), temp0_619))
                float temp0_629[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_617, 2)
                float temp0_631[0x4] = _mm_add_ps(_mm_mul_ps(temp0_627, temp0_624), temp0_624)
                float temp0_632[0x4] = _mm_unpacklo_ps(var_738_1:4.d, 0)
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_631, zmm5_3) ^ data_143ef72a0, temp0_629)
                    ^ data_143ef72a0
                zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_738_1.d, var_738_1:8.d[0].q), 
                    temp0_632[0].q)
            
            float var_7e8_3 = arg7[0]
            float var_188[0x4] = zmm6
            float var_178_1[0x4] = zmm7
            float var_168_1[0x4] = zmm13
            result =
                __acrt_fltout(arg1, zmm1, r14, *(rsi + 0x10), arg5, &var_188, var_7e8_3, arg8, rcx)
    else if (rdx != r8)
        zmm6 = arg5[2]
        
        if (r8 != 4)
            r14 = nullptr
        
        zmm8 = *(r14 + 0x40)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm8, zmm6), data_143ef7530, 1)) == 0)
            zmm4 = *arg5
            zmm2 = *(r14 + 0x20)
            zmm3 = *(r14 + 0x30)
            float temp0_469[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
            float temp0_471[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_469)
            float temp0_472[0x4] = _mm_mul_ps(zmm3, zmm6)
            float temp0_473[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            float temp0_474[0x4] = __mulps_xmmps_memps(temp0_471, data_143ef72e0)
            float temp0_475[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            float temp0_476[0x4] = _mm_mul_ps(zmm2, temp0_475)
            zmm13 = _mm_mul_ps(zmm6, zmm8)
            float temp0_478[0x4] = _mm_add_ps(temp0_474, temp0_476)
            float temp0_480[0x4] = _mm_mul_ps(temp0_473, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            float temp0_483[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            float temp0_484[0x4] = __mulps_xmmps_memps(temp0_480, data_143ef72d0)
            float temp0_485[0x4] = _mm_shuffle_ps(temp0_472, temp0_472, 0xd2)
            float temp0_486[0x4] = __mulps_xmmps_memps(temp0_483, data_143ef72c0)
            float temp0_487[0x4] = _mm_add_ps(temp0_478, temp0_484)
            zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
            float temp0_489[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
            float temp0_490[0x4] = _mm_mul_ps(temp0_485, temp0_489)
            zmm6 = _mm_add_ps(temp0_487, temp0_486)
            float temp0_494[0x4] =
                _mm_sub_ps(temp0_490, _mm_mul_ps(_mm_shuffle_ps(temp0_472, temp0_472, 0xc9), zmm1))
            float temp0_495[0x4] = _mm_add_ps(temp0_494, temp0_494)
            float temp0_496[0x4] = _mm_shuffle_ps(temp0_495, temp0_495, 0xd2)
            float temp0_497[0x4] = _mm_shuffle_ps(temp0_495, temp0_495, 0xc9)
            float temp0_498[0x4] = _mm_mul_ps(temp0_496, temp0_489)
            float temp0_499[0x4] = _mm_mul_ps(temp0_497, zmm1)
            float temp0_500[0x4] = _mm_mul_ps(temp0_495, temp0_475)
            zmm7 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_498, temp0_499), _mm_add_ps(temp0_500, temp0_472)), 
                arg5[1])
        else
            zmm1 = *arg5
            zmm11 = data_143ef72f0
            float temp0_340[0x4] = _mm_add_ps(zmm1, zmm1)
            float temp0_341[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            _mm_mul_ps(zmm6, zmm8)
            float temp0_343[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_345[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_340, temp0_340, 0x29), temp0_343)
            float temp0_346[0x4] = _mm_mul_ps(temp0_340, zmm1)
            float temp0_347[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            float temp0_349[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_340, temp0_340, 0x12), temp0_347)
            float temp0_352[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_346, temp0_346, 0x1a), 
                _mm_shuffle_ps(temp0_346, temp0_346, 1))
            float temp0_353[0x4] = _mm_add_ps(temp0_349, temp0_345)
            float temp0_354[0x4] = _mm_sub_ps(temp0_345, temp0_349)
            float temp0_355[0x4] = _mm_sub_ps(zmm11, temp0_352)
            float temp0_356[0x4] = _mm_mul_ps(temp0_353, zmm6)
            float temp0_357[0x4] = _mm_mul_ps(temp0_341, temp0_354)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_355, zmm6), data_143ef7300)
            float temp0_360[0x4] = _mm_shuffle_ps(temp0_357, zmm1, 0x32)
            float temp0_362[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_356, zmm1, 0), temp0_360, 0x82)
            float temp0_363[0x4] = _mm_shuffle_ps(temp0_356, zmm1, 0x31)
            float temp0_365[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_357, zmm1, 0x10), temp0_363, 0x88)
            float temp0_367[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_356, temp0_357, 0x12), zmm1, 0xe8)
            float var_388_1[0x4] = temp0_365
            float var_398_1[0x4] = temp0_362
            float var_378_1[0x4] = temp0_367
            zmm9 = arg5[1]
            zmm11[0].q = zmm9 u>> 0x40
            float temp0_368[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
            float var_368_1[0x4] = temp0_368
            zmm3 = *(r14 + 0x20)
            float temp0_369[0x4] = _mm_add_ps(zmm3, zmm3)
            float temp0_370[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
            float temp0_371[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            float temp0_372[0x4] = _mm_mul_ps(zmm3, temp0_369)
            float temp0_374[0x4] = _mm_mul_ps(temp0_370, _mm_shuffle_ps(temp0_369, temp0_369, 0x29))
            float temp0_376[0x4] = _mm_mul_ps(temp0_371, _mm_shuffle_ps(temp0_369, temp0_369, 0x12))
            zmm1 = *(r14 + 0x40)
            float temp0_377[0x4] = _mm_shuffle_ps(temp0_372, temp0_372, 0x1a)
            float temp0_378[0x4] = _mm_shuffle_ps(temp0_372, temp0_372, 1)
            float temp0_379[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
            float temp0_380[0x4] = _mm_add_ps(temp0_376, temp0_374)
            float temp0_381[0x4] = _mm_sub_ps(temp0_374, temp0_376)
            float temp0_382[0x4] = _mm_add_ps(temp0_377, temp0_378)
            float temp0_383[0x4] = _mm_mul_ps(temp0_380, zmm1)
            float temp0_384[0x4] = _mm_mul_ps(temp0_379, temp0_381)
            zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, temp0_382), zmm1), 
                data_143ef7300)
            float temp0_390[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_383, zmm2, 0), 
                _mm_shuffle_ps(temp0_384, zmm2, 0x32), 0x82)
            float temp0_391[0x4] = _mm_shuffle_ps(temp0_383, zmm2, 0x31)
            float temp0_392[0x4] = _mm_shuffle_ps(temp0_390, temp0_390, 0xaa)
            float temp0_394[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_384, zmm2, 0x10), temp0_391, 0x88)
            float var_358_1[0x4] = temp0_390
            float temp0_395[0x4] = _mm_mul_ps(temp0_392, temp0_367)
            float temp0_397[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_383, temp0_384, 0x12), zmm2, 0xe8)
            float temp0_399[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_390, temp0_390, 0x55), temp0_365)
            float var_348_1[0x4] = temp0_394
            float var_338_1[0x4] = temp0_397
            zmm5 = *(r14 + 0x30)
            zmm11[0].q = zmm5 u>> 0x40
            float temp0_400[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
            float temp0_401[0x4] = _mm_shuffle_ps(temp0_390, temp0_390, 0)
            float temp0_403[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_390, temp0_390, 0xff), temp0_368)
            float var_328_1[0x4] = temp0_400
            float temp0_405[0x4] = _mm_add_ps(temp0_399, _mm_mul_ps(temp0_401, temp0_362))
            float temp0_407[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_394, temp0_394, 0), temp0_362)
            float temp0_408[0x4] = _mm_add_ps(temp0_405, temp0_395)
            float temp0_410[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_394, temp0_394, 0xaa), temp0_367)
            float temp0_411[0x4] = _mm_add_ps(temp0_408, temp0_403)
            float temp0_413[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_394, temp0_394, 0x55), temp0_365)
            float temp0_414[0x4] = _mm_shuffle_ps(temp0_394, temp0_394, 0xff)
            float var_728[0x4] = temp0_411
            float temp0_415[0x4] = _mm_shuffle_ps(temp0_397, temp0_397, 0x55)
            float temp0_416[0x4] = _mm_add_ps(temp0_413, temp0_407)
            float temp0_417[0x4] = _mm_mul_ps(temp0_415, temp0_365)
            float temp0_418[0x4] = _mm_mul_ps(temp0_414, temp0_368)
            float temp0_419[0x4] = _mm_shuffle_ps(temp0_397, temp0_397, 0)
            float temp0_420[0x4] = _mm_add_ps(temp0_416, temp0_410)
            float temp0_421[0x4] = _mm_mul_ps(temp0_419, temp0_362)
            float temp0_423[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_397, temp0_397, 0xaa), temp0_367)
            float temp0_424[0x4] = _mm_add_ps(temp0_420, temp0_418)
            float temp0_425[0x4] = _mm_shuffle_ps(temp0_397, temp0_397, 0xff)
            float temp0_426[0x4] = _mm_add_ps(temp0_417, temp0_421)
            float temp0_427[0x4] = _mm_mul_ps(temp0_425, temp0_368)
            float temp0_428[0x4] = _mm_shuffle_ps(temp0_400, temp0_400, 0)
            int96_t var_718_1 = temp0_424[0].12
            float temp0_429[0x4] = _mm_shuffle_ps(temp0_400, temp0_400, 0x55)
            float temp0_430[0x4] = _mm_add_ps(temp0_426, temp0_423)
            float temp0_431[0x4] = _mm_mul_ps(temp0_429, temp0_365)
            float temp0_433[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_400, temp0_400, 0xaa), temp0_367)
            float temp0_434[0x4] = _mm_mul_ps(temp0_428, temp0_362)
            float temp0_435[0x4] = _mm_add_ps(temp0_430, temp0_427)
            float temp0_437[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_400, temp0_400, 0xff), temp0_368)
            float temp0_438[0x4] = _mm_add_ps(temp0_431, temp0_434)
            int96_t var_708_1 = temp0_435[0].12
            int96_t var_6f8_1 = _mm_add_ps(_mm_add_ps(temp0_438, temp0_433), temp0_437)[0].12
            zmm11, zmm13, zmm14 = sub_1407740e0(&var_728, 0x322bcc77)
            float zmm2_4[0x4] = var_728[0]
            float zmm1_3 = var_728[1]
            zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm13, 2), data_143ef7520 ^ zmm11)
            uint32_t zmm0_3[0x4] = var_728[2]
            zmm14 ^= data_143ef7520
            zmm2_4[0] = zmm2_4[0] * zmm14[0]
            zmm1_3 = zmm1_3 * zmm14[0]
            zmm0_3[0] = zmm0_3[0] f* zmm14[0]
            var_728[0] = zmm2_4[0]
            float temp0_443[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
            var_728[1] = zmm1_3
            zmm1_3 = var_718_1:4.d * temp0_443[0]
            var_728[2] = zmm0_3[0]
            zmm0_3 = var_718_1:8.d
            zmm0_3[0] = zmm0_3[0] f* temp0_443[0]
            float zmm3_4 = var_718_1.d * temp0_443[0]
            zmm2_4 = var_708_1.d
            var_718_1:4.d = zmm1_3
            var_718_1:8.d = zmm0_3[0]
            zmm0_3 = var_708_1:8.d
            float temp0_444[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
            zmm1_3 = var_708_1:4.d * temp0_444[0]
            zmm0_3[0] = zmm0_3[0] f* temp0_444[0]
            zmm2_4[0] = zmm2_4[0] * temp0_444[0]
            var_708_1:4.d = zmm1_3
            var_708_1:8.d = zmm0_3[0]
            var_718_1.d = zmm3_4
            var_708_1.d = zmm2_4[0]
            sub_14077e4a0(&var_7b8, &var_728)
            uint32_t zmm5_2[0x4] = var_7b8
            zmm6 = data_143ef72b0
            rcx = var_7a0
            float temp0_445[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            var_7a8.d = 0x322bcc77
            float temp0_447[0x4] = _mm_add_ps(temp0_445, _mm_shuffle_ps(temp0_445, temp0_445, 0x4e))
            float temp0_449[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_447, temp0_447, 0x39), temp0_447)
            float temp0_450[0x4] = _mm_rsqrt_ps(temp0_449)
            float temp0_451[0x4] = _mm_mul_ps(temp0_449, zmm6)
            float temp0_456[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_450, temp0_450), temp0_451)), 
                    temp0_450), 
                temp0_450)
            zmm1 = zx.o(0)
            float temp0_459[0x4] =
                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_456, temp0_456), temp0_451))
            float temp0_461[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_449, 2)
            float temp0_463[0x4] = _mm_add_ps(_mm_mul_ps(temp0_459, temp0_456), temp0_456)
            float temp0_464[0x4] = _mm_unpacklo_ps(var_6f8_1:4.d, 0)
            zmm6 = _mm_and_ps(_mm_mul_ps(temp0_463, zmm5_2) ^ data_143ef72a0, temp0_461)
                ^ data_143ef72a0
            zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_6f8_1.d, var_6f8_1:8.d[0].q), temp0_464[0].q)
        
        float var_7e8_2 = arg7[0]
        float var_278[0x4] = zmm6
        float var_268_1[0x4] = zmm7
        float var_258_1[0x4] = zmm13
        result = __acrt_fltout(arg1, zmm1, *(r14 + 0x10), rsi, &var_278, arg6, var_7e8_2, arg8, rcx)
    else
        zmm7 = arg5[2]
        zmm12 = data_143ef7530
        zmm14 = data_143ef72e0
        
        if (r8 != r8)
            r14 = nullptr
        
        zmm15 = data_143ef72d0
        zmm10 = data_143ef72c0
        
        if (rdx != r8)
            rsi = nullptr
        
        zmm8 = *(r14 + 0x40)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm8, zmm7), zmm12, 1)) == 0)
            zmm4 = *arg5
            zmm2 = *(r14 + 0x20)
            zmm3 = *(r14 + 0x30)
            float temp0_133[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_134[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            float temp0_135[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_133)
            float temp0_138[0x4] = _mm_mul_ps(temp0_135, zmm2)
            float temp0_139[0x4] = _mm_mul_ps(zmm3, zmm7)
            float temp0_140[0x4] = _mm_mul_ps(temp0_137, zmm14)
            zmm13 = _mm_mul_ps(zmm8, zmm7)
            float temp0_142[0x4] = _mm_add_ps(temp0_140, temp0_138)
            float temp0_144[0x4] = _mm_mul_ps(temp0_134, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            float temp0_147[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            float temp0_148[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
            float temp0_149[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
            float temp0_150[0x4] = _mm_mul_ps(temp0_144, zmm15)
            float temp0_151[0x4] = _mm_mul_ps(temp0_147, zmm10)
            float temp0_152[0x4] = _mm_add_ps(temp0_142, temp0_150)
            float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0xd2), temp0_148)
            zmm6 = _mm_add_ps(temp0_152, temp0_151)
            float temp0_158[0x4] = _mm_sub_ps(temp0_154, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0xc9), temp0_149))
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_mul_ps(temp0_135, temp0_159)
            float temp0_162[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_159, temp0_159, 0xc9), temp0_149)
            float temp0_163[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
            float temp0_164[0x4] = _mm_add_ps(temp0_160, temp0_139)
            zmm4 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_163, temp0_148), temp0_162), temp0_164), 
                arg5[1])
        else
            zmm3 = *arg5
            zmm10 = data_143ef72f0
            float temp0_4[0x4] = _mm_add_ps(zmm3, zmm3)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            _mm_mul_ps(zmm7, zmm8)
            float temp0_9[0x4] = _mm_mul_ps(zmm3, temp0_4)
            float temp0_11[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
            float temp0_13[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x1a)
            float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_12)
            float temp0_16[0x4] = _mm_add_ps(temp0_13, _mm_shuffle_ps(temp0_9, temp0_9, 1))
            float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_11)
            float temp0_18[0x4] = _mm_sub_ps(temp0_11, temp0_14)
            float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_16)
            float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm7)
            float temp0_21[0x4] = _mm_mul_ps(temp0_5, temp0_18)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_19, zmm7), data_143ef7300)
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
            float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_24, 0x82)
            float temp0_27[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
            float temp0_29[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_27, 0x88)
            float temp0_31[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
            float var_488_1[0x4] = temp0_29
            float var_498_1[0x4] = temp0_26
            float var_478_1[0x4] = temp0_31
            zmm8 = arg5[1]
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_32[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float var_468_1[0x4] = temp0_32
            zmm1 = *(r14 + 0x20)
            float temp0_33[0x4] = _mm_add_ps(zmm1, zmm1)
            float temp0_34[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_35[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            float temp0_36[0x4] = _mm_mul_ps(zmm1, temp0_33)
            float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x29), temp0_34)
            float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x12), temp0_35)
            zmm1 = *(r14 + 0x40)
            float temp0_41[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x1a)
            float temp0_42[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 1)
            float temp0_43[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
            float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_38)
            float temp0_45[0x4] = _mm_sub_ps(temp0_38, temp0_40)
            float temp0_46[0x4] = _mm_add_ps(temp0_41, temp0_42)
            float temp0_47[0x4] = _mm_mul_ps(temp0_44, zmm1)
            float temp0_48[0x4] = _mm_mul_ps(temp0_43, temp0_45)
            zmm2 =
                __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_46), zmm1), data_143ef7300)
            float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm2, 0), 
                _mm_shuffle_ps(temp0_48, zmm2, 0x32), 0x82)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_47, zmm2, 0x31)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xaa)
            float temp0_58[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm2, 0x10), temp0_55, 0x88)
            float var_458_1[0x4] = temp0_54
            float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_31)
            float temp0_61[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, temp0_48, 0x12), zmm2, 0xe8)
            float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0x55), temp0_29)
            float var_448_1[0x4] = temp0_58
            float var_438_1[0x4] = temp0_61
            zmm5 = *(r14 + 0x30)
            zmm10[0].q = zmm5 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_32)
            float var_428_1[0x4] = temp0_64
            float temp0_69[0x4] = _mm_add_ps(temp0_63, _mm_mul_ps(temp0_65, temp0_26))
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_26)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_59)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_31)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_29)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
            float var_6a8[0x4] = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_29)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_32)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_26)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_31)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_32)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            int96_t var_698_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_29)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_31)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_26)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_32)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
            int96_t var_688_1 = temp0_99[0].12
            int96_t var_678_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            zmm10, zmm12, zmm13, zmm14, zmm15 = sub_1407740e0(&var_6a8, 0x322bcc77)
            float zmm2_1[0x4] = var_6a8[0]
            float zmm1_1 = var_6a8[1]
            zmm12 = _mm_and_ps(_mm_cmpeq_ps(zmm12, zmm13, 2), data_143ef7520 ^ zmm10)
            uint32_t zmm0_1[0x4] = var_6a8[2]
            zmm12 ^= data_143ef7520
            zmm2_1[0] = zmm2_1[0] * zmm12[0]
            zmm1_1 = zmm1_1 * zmm12[0]
            zmm0_1[0] = zmm0_1[0] f* zmm12[0]
            var_6a8[0] = zmm2_1[0]
            float temp0_107[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
            var_6a8[1] = zmm1_1
            zmm1_1 = var_698_1:4.d * temp0_107[0]
            var_6a8[2] = zmm0_1[0]
            zmm0_1 = var_698_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
            float zmm3_1 = var_698_1.d * temp0_107[0]
            zmm2_1 = var_688_1.d
            var_698_1:4.d = zmm1_1
            var_698_1:8.d = zmm0_1[0]
            zmm0_1 = var_688_1:8.d
            float temp0_108[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
            zmm1_1 = var_688_1:4.d * temp0_108[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
            zmm2_1[0] = zmm2_1[0] * temp0_108[0]
            var_688_1:4.d = zmm1_1
            var_688_1:8.d = zmm0_1[0]
            var_698_1.d = zmm3_1
            var_688_1.d = zmm2_1[0]
            sub_14077e4a0(&var_7b8, &var_6a8)
            zmm5 = var_7b8
            zmm6 = data_143ef72b0
            zmm12 = data_143ef7530
            float temp0_109[0x4] = _mm_mul_ps(zmm5, zmm5)
            var_7a8.d = 0x322bcc77
            float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
            float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
            float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
            float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm6)
            float temp0_120[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                    temp0_114), 
                temp0_114)
            float temp0_123[0x4] =
                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
            float temp0_125[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_678_1:4.d, 0)
            zmm6 =
                _mm_and_ps(_mm_mul_ps(temp0_127, zmm5) ^ data_143ef72a0, temp0_125) ^ data_143ef72a0
            zmm4 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_678_1.d, var_678_1:8.d[0].q), temp0_128[0].q)
            zmm10 = data_143ef72c0
        
        float var_248[0x4] = zmm6
        float var_238_1[0x4] = zmm4
        float var_228_1[0x4] = zmm13
        zmm9 = *(rsi + 0x40)
        zmm8 = arg6[2]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm9, zmm8), zmm12, 1)) == 0)
            zmm4 = *arg6
            zmm2 = *(rsi + 0x20)
            zmm3 = *(rsi + 0x30)
            float temp0_301[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            float temp0_303[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_301)
            float temp0_304[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
            float temp0_305[0x4] = _mm_mul_ps(zmm3, zmm8)
            float temp0_306[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            float temp0_307[0x4] = _mm_mul_ps(temp0_303, zmm14)
            float temp0_308[0x4] = _mm_mul_ps(temp0_306, zmm2)
            zmm13 = _mm_mul_ps(zmm9, zmm8)
            float temp0_310[0x4] = _mm_add_ps(temp0_307, temp0_308)
            float temp0_312[0x4] = _mm_mul_ps(temp0_304, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
            float temp0_315[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
            float temp0_316[0x4] = _mm_shuffle_ps(temp0_305, temp0_305, 0xd2)
            float temp0_317[0x4] = _mm_mul_ps(temp0_312, zmm15)
            float temp0_318[0x4] = _mm_mul_ps(temp0_315, zmm10)
            float temp0_319[0x4] = _mm_add_ps(temp0_310, temp0_317)
            zmm1 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
            float temp0_321[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
            float temp0_322[0x4] = _mm_mul_ps(temp0_316, temp0_321)
            zmm6 = _mm_add_ps(temp0_319, temp0_318)
            float temp0_326[0x4] =
                _mm_sub_ps(temp0_322, _mm_mul_ps(_mm_shuffle_ps(temp0_305, temp0_305, 0xc9), zmm1))
            float temp0_327[0x4] = _mm_add_ps(temp0_326, temp0_326)
            float temp0_328[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xd2)
            float temp0_329[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xc9)
            float temp0_330[0x4] = _mm_mul_ps(temp0_328, temp0_321)
            float temp0_331[0x4] = _mm_mul_ps(temp0_329, zmm1)
            float temp0_332[0x4] = _mm_mul_ps(temp0_327, temp0_306)
            zmm7 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_330, temp0_331), _mm_add_ps(temp0_332, temp0_305)), 
                arg6[1])
        else
            zmm3 = *arg6
            zmm10 = data_143ef72f0
            float temp0_172[0x4] = _mm_add_ps(zmm3, zmm3)
            float temp0_173[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            float temp0_174[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
            float temp0_175[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            _mm_mul_ps(zmm8, zmm9)
            float temp0_177[0x4] = _mm_mul_ps(zmm3, temp0_172)
            float temp0_179[0x4] = _mm_mul_ps(temp0_174, _mm_shuffle_ps(temp0_172, temp0_172, 0x29))
            float temp0_180[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0x12)
            float temp0_181[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0x1a)
            float temp0_182[0x4] = _mm_mul_ps(temp0_175, temp0_180)
            float temp0_184[0x4] = _mm_add_ps(temp0_181, _mm_shuffle_ps(temp0_177, temp0_177, 1))
            float temp0_185[0x4] = _mm_add_ps(temp0_182, temp0_179)
            float temp0_186[0x4] = _mm_sub_ps(temp0_179, temp0_182)
            float temp0_187[0x4] = _mm_sub_ps(zmm10, temp0_184)
            float temp0_188[0x4] = _mm_mul_ps(temp0_185, zmm8)
            float temp0_189[0x4] = _mm_mul_ps(temp0_173, temp0_186)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_187, zmm8), data_143ef7300)
            float temp0_192[0x4] = _mm_shuffle_ps(temp0_189, zmm1, 0x32)
            float temp0_194[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, zmm1, 0), temp0_192, 0x82)
            float temp0_195[0x4] = _mm_shuffle_ps(temp0_188, zmm1, 0x31)
            float temp0_197[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_189, zmm1, 0x10), temp0_195, 0x88)
            float temp0_199[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, temp0_189, 0x12), zmm1, 0xe8)
            float var_408_1[0x4] = temp0_197
            float var_418_1[0x4] = temp0_194
            float var_3f8_1[0x4] = temp0_199
            zmm8 = arg6[1]
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_200[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float var_3e8_1[0x4] = temp0_200
            zmm1 = *(rsi + 0x20)
            float temp0_201[0x4] = _mm_add_ps(zmm1, zmm1)
            float temp0_202[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_204[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_201, temp0_201, 0x29), temp0_202)
            float temp0_205[0x4] = _mm_mul_ps(temp0_201, zmm1)
            float temp0_208[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_201, temp0_201, 0x12), 
                _mm_shuffle_ps(zmm1, zmm1, 0xff))
            zmm1 = *(rsi + 0x40)
            float temp0_209[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0x1a)
            float temp0_210[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 1)
            float temp0_211[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
            float temp0_212[0x4] = _mm_add_ps(temp0_208, temp0_204)
            float temp0_213[0x4] = _mm_sub_ps(temp0_204, temp0_208)
            float temp0_214[0x4] = _mm_add_ps(temp0_209, temp0_210)
            float temp0_215[0x4] = _mm_mul_ps(temp0_212, zmm1)
            float temp0_216[0x4] = _mm_mul_ps(temp0_211, temp0_213)
            zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_214), zmm1), 
                data_143ef7300)
            float temp0_222[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_215, zmm2, 0), 
                _mm_shuffle_ps(temp0_216, zmm2, 0x32), 0x82)
            float temp0_223[0x4] = _mm_shuffle_ps(temp0_215, zmm2, 0x31)
            float temp0_224[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0xaa)
            float temp0_226[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_216, zmm2, 0x10), temp0_223, 0x88)
            float var_3d8_1[0x4] = temp0_222
            float temp0_227[0x4] = _mm_mul_ps(temp0_224, temp0_199)
            float temp0_229[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_215, temp0_216, 0x12), zmm2, 0xe8)
            float temp0_231[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0x55), temp0_197)
            float var_3c8_1[0x4] = temp0_226
            float var_3b8_1[0x4] = temp0_229
            zmm5 = *(rsi + 0x30)
            zmm10[0].q = zmm5 u>> 0x40
            float temp0_232[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
            float temp0_233[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0)
            float temp0_235[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xff), temp0_200)
            float var_3a8_1[0x4] = temp0_232
            float temp0_237[0x4] = _mm_add_ps(temp0_231, _mm_mul_ps(temp0_233, temp0_194))
            float temp0_239[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0), temp0_194)
            float temp0_240[0x4] = _mm_add_ps(temp0_237, temp0_227)
            float temp0_242[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xaa), temp0_199)
            float temp0_243[0x4] = _mm_add_ps(temp0_240, temp0_235)
            float temp0_245[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0x55), temp0_197)
            float temp0_246[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0xff)
            float var_6e8[0x4] = temp0_243
            float temp0_247[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0x55)
            float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_239)
            float temp0_249[0x4] = _mm_mul_ps(temp0_247, temp0_197)
            float temp0_250[0x4] = _mm_mul_ps(temp0_246, temp0_200)
            float temp0_251[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0)
            float temp0_252[0x4] = _mm_add_ps(temp0_248, temp0_242)
            float temp0_253[0x4] = _mm_mul_ps(temp0_251, temp0_194)
            float temp0_255[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xaa), temp0_199)
            float temp0_256[0x4] = _mm_add_ps(temp0_249, temp0_253)
            float temp0_257[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0xff)
            float temp0_258[0x4] = _mm_add_ps(temp0_252, temp0_250)
            float temp0_259[0x4] = _mm_mul_ps(temp0_257, temp0_200)
            float temp0_260[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0)
            float temp0_261[0x4] = _mm_add_ps(temp0_256, temp0_255)
            float temp0_262[0x4] = _mm_mul_ps(temp0_260, temp0_194)
            int96_t var_6d8_1 = temp0_258[0].12
            float temp0_263[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x55)
            float temp0_264[0x4] = _mm_add_ps(temp0_261, temp0_259)
            float temp0_265[0x4] = _mm_mul_ps(temp0_263, temp0_197)
            int96_t var_6c8_1 = temp0_264[0].12
            float temp0_266[0x4] = _mm_add_ps(temp0_265, temp0_262)
            float temp0_268[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xaa), temp0_199)
            float temp0_270[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xff), temp0_200)
            int96_t var_6b8_1 = _mm_add_ps(_mm_add_ps(temp0_266, temp0_268), temp0_270)[0].12
            zmm10, zmm12, zmm13 = sub_1407740e0(&var_6e8, 0x322bcc77)
            float zmm2_2[0x4] = var_6e8[0]
            float zmm1_2 = var_6e8[1]
            zmm12 = _mm_and_ps(_mm_cmpeq_ps(zmm12, zmm13, 2), data_143ef7520 ^ zmm10)
            uint32_t zmm0_2[0x4] = var_6e8[2]
            zmm12 ^= data_143ef7520
            zmm2_2[0] = zmm2_2[0] * zmm12[0]
            zmm1_2 = zmm1_2 * zmm12[0]
            zmm0_2[0] = zmm0_2[0] f* zmm12[0]
            var_6e8[0] = zmm2_2[0]
            float temp0_275[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
            var_6e8[1] = zmm1_2
            zmm1_2 = var_6d8_1:4.d * temp0_275[0]
            var_6e8[2] = zmm0_2[0]
            zmm0_2 = var_6d8_1:8.d
            zmm0_2[0] = zmm0_2[0] f* temp0_275[0]
            float zmm3_2 = var_6d8_1.d * temp0_275[0]
            zmm2_2 = var_6c8_1.d
            var_6d8_1:4.d = zmm1_2
            var_6d8_1:8.d = zmm0_2[0]
            zmm0_2 = var_6c8_1:8.d
            float temp0_276[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
            zmm1_2 = var_6c8_1:4.d * temp0_276[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_276[0]
            zmm2_2[0] = zmm2_2[0] * temp0_276[0]
            var_6c8_1:4.d = zmm1_2
            var_6c8_1:8.d = zmm0_2[0]
            var_6d8_1.d = zmm3_2
            var_6c8_1.d = zmm2_2[0]
            sub_14077e4a0(&var_7b8, &var_6e8)
            uint32_t zmm5_1[0x4] = var_7b8
            zmm6 = data_143ef72b0
            float temp0_277[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
            var_7a8.d = 0x322bcc77
            float temp0_279[0x4] = _mm_add_ps(temp0_277, _mm_shuffle_ps(temp0_277, temp0_277, 0x4e))
            float temp0_281[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_279, temp0_279, 0x39), temp0_279)
            float temp0_282[0x4] = _mm_rsqrt_ps(temp0_281)
            float temp0_283[0x4] = _mm_mul_ps(temp0_281, zmm6)
            float temp0_288[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_282, temp0_282), temp0_283)), 
                    temp0_282), 
                temp0_282)
            zmm1 = zx.o(0)
            float temp0_291[0x4] =
                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_288, temp0_288), temp0_283))
            float temp0_293[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_281, 2)
            float temp0_295[0x4] = _mm_add_ps(_mm_mul_ps(temp0_291, temp0_288), temp0_288)
            float temp0_296[0x4] = _mm_unpacklo_ps(var_6b8_1:4.d, 0)
            zmm6 = _mm_and_ps(_mm_mul_ps(temp0_295, zmm5_1) ^ data_143ef72a0, temp0_293)
                ^ data_143ef72a0
            zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_6b8_1.d, var_6b8_1:8.d[0].q), temp0_296[0].q)
        
        float var_7e8_1 = arg7[0]
        float var_218[0x4]
        int128_t* var_7f0_1 = &var_218
        var_218 = zmm6
        float var_208_1[0x4] = zmm7
        float var_1f8_1[0x4] = zmm13
        result = __acrt_fltout(arg1, zmm1, *(r14 + 0x10), *(rsi + 0x10), &var_248, var_7f0_1, 
            var_7e8_1, arg8, var_7a0)

__security_check_cookie(rax_1 ^ &var_818)
return result
