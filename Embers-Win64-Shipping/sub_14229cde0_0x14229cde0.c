// 函数: sub_14229cde0
// 地址: 0x14229cde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
uint128_t zmm1 = zx.o(*(arg1 + 0x30))

if (not(zmm1.q f<= 0.0))
    uint64_t var_38_1 = zmm1.q
    sub_140b0eee0(arg2, &arg_18, 5, u"MeasuredPerfTime: %.02f secs")
    uint128_t zmm6 = 0x408f400000000000
    int64_t var_20_1 = *(arg1 + 0x70) f* zmm6.q
    int64_t var_28_1 = *(arg1 + 0x68)
    var_38_1.o = *(arg1 + 0x78)
    sub_140b0eee0(arg2, &arg_18, 5, 
        MVP: %.02f%%, AvgFPS:%.2f, HitchesPerMinute: %.2f, Avg Hitch %.02fms")
    int64_t var_28_2 = *(arg1 + 0xb8)
    uint64_t var_30_1 = *(arg1 + 0xc0)
    int64_t var_38_2 = *(arg1 + 0xc8)
    sub_140b0eee0(arg2, &arg_18, 5, u"DynRes: Avg: %.02f%%, Max: %.02f%%, Min: %.02f%%")
    zmm1.q = *(arg1 + 0xa8) f* zmm6.q
    double var_28_3 = *(arg1 + 0xa0) f* zmm6.q
    uint64_t var_30_2 = zmm1.q
    int64_t var_38_3 = *(arg1 + 0xb0) f* zmm6.q
    sub_140b0eee0(arg2, &arg_18, 5, u"FT: Avg: %.02fms, Max: %.02fms, Min: %.02fms")
    float zmm3[0x2] = *(arg1 + 0x3c)
    int64_t zmm0
    zmm0.d = (*(arg1 + 0x40)).d f* 1000f
    double var_28_4 = _mm_cvtps_pd(*(arg1 + 0x38))
    float var_30_3[0x2] = _mm_cvtps_pd(zmm3)
    uint64_t var_38_4 = (_mm_cvtps_pd(zmm0)).q
    sub_140b0eee0(arg2, &arg_18, 5, u"GT:  Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%")
    zmm3 = *(arg1 + 0x48)
    zmm0.d = (*(arg1 + 0x4c)).d f* 1000f
    double var_28_5 = _mm_cvtps_pd(*(arg1 + 0x44))
    float var_30_4[0x2] = _mm_cvtps_pd(zmm3)
    uint64_t var_38_5 = (_mm_cvtps_pd(zmm0)).q
    sub_140b0eee0(arg2, &arg_18, 5, u"RT:  Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%")
    zmm3 = *(arg1 + 0x54)
    zmm0 = *(arg1 + 0x58)
    double var_28_6 = _mm_cvtps_pd(*(arg1 + 0x50))
    zmm0.d = zmm0.d f* 1000f
    float var_30_5[0x2] = _mm_cvtps_pd(zmm3)
    uint64_t var_38_6 = (_mm_cvtps_pd(zmm0)).q
    sub_140b0eee0(arg2, &arg_18, 5, u"RHIT: Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%")
    zmm3 = *(arg1 + 0x60)
    zmm0.d = (*(arg1 + 0x64)).d f* 1000f
    double zmm2 = _mm_cvtps_pd(*(arg1 + 0x5c))
    zmm3 = _mm_cvtps_pd(zmm3)
    double var_28_7 = zmm2
    uint64_t var_38_7 = (_mm_cvtps_pd(zmm0)).q
    sub_140b0eee0(arg2, &arg_18, 5, u"GPU: Avg %.02fms, Hitches/Min: %.02f, Bound Frames: %.02f%%")
    var_28_7.d = *(arg1 + 0x88)
    zmm3[0] = *(arg1 + 0x8c)
    var_38_7.d = *(arg1 + 0x90)
    sub_140b0eee0(arg2, &arg_18, 5, u"DrawCalls: Avg: %d, Max: %d, Min: %d")
    var_28_7.d = *(arg1 + 0x94)
    zmm3[0] = *(arg1 + 0x98)
    var_38_7.d = *(arg1 + 0x9c)
    sub_140b0eee0(arg2, &arg_18, 5, u"DrawnPrims: Avg: %d, Max: %d, Min: %d")

zmm1 = *(arg1 + 0xc)
int64_t var_30_7 = _mm_cvtps_pd(*(arg1 + 0x10))
uint64_t var_38_8 = (_mm_cvtps_pd(zmm1.q)).q
sub_140b0eee0(arg2, &arg_18, 5, u"CPU Memory: Used %.2fMB, Peak %.2fMB")
zmm1 = *(arg1 + 0x24)
int64_t var_30_8 = _mm_cvtps_pd(*(arg1 + 0x28))
uint64_t var_38_9 = (_mm_cvtps_pd(zmm1.q)).q
return sub_140b0eee0(arg2, &arg_18, 5, u"Physical Memory: Used %.2fMB, Peak %.2fMB")
