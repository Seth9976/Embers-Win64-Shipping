// 函数: sub_14268fd10
// 地址: 0x14268fd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x2e8)
int32_t rax = *(arg2 + 8)

if (rax s> rcx)
    *(arg1 + 0x2e8) = rax
    
    if (rax s> *(arg1 + 0x2ec))
        sub_1406105e0(arg1 + 0x2e0)
else if (rax s< rcx && rax != rcx)
    *(arg1 + 0x2e8) = rax

TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
float zmm1[0x4]

if (data_143f71948 s> result.d)
    result = _Init_thread_header(&data_143f71948)
    
    if (data_143f71948 == 0xffffffff)
        __builtin_memcpy(&data_143b515e0, 
            "\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "00\x00\x00\x00\x80\xbf\x00\x00\x00\x00", 
            0x20)
        float zmm0[0x4] = data_142d4cc20
        data_143b51610.d = data_143dbb1f8[0]
        zmm1 = data_143dbb200
        data_143b51600 = zmm0
        data_143b51610:4.d = data_143dbb1fc[0]
        data_143b51610:8.d = zmm1[0]
        data_143b51610:0xc.d = 0x3f800000
        result = _Init_thread_footer(&data_143f71948)

float zmm3[0x4] = *arg3
float zmm7[0x4] = data_143b515f0
float zmm8[0x4] = arg3[1]
float temp0[0x4] = _mm_add_ps(zmm3, zmm3)
float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
float temp0_3[0x4] = _mm_mul_ps(zmm3, temp0)
float temp0_5[0x4] = _mm_mul_ps(temp0_1, _mm_shuffle_ps(temp0, temp0, 0x29))
float temp0_6[0x4] = _mm_shuffle_ps(temp0, temp0, 0x12)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x1a)
float temp0_8[0x4] = _mm_mul_ps(temp0_2, temp0_6)
zmm1 = arg3[2]
float temp0_10[0x4] = _mm_add_ps(temp0_7, _mm_shuffle_ps(temp0_3, temp0_3, 1))
float temp0_11[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_12[0x4] = _mm_add_ps(temp0_8, temp0_5)
float temp0_13[0x4] = _mm_sub_ps(temp0_5, temp0_8)
zmm3 = data_143f717b0
float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm1)
float temp0_15[0x4] = _mm_mul_ps(temp0_11, temp0_13)
float temp0_16[0x4] = _mm_sub_ps(zmm3, temp0_10)
zmm3[0].q = zmm8 u>> 0x40
float temp0_17[0x4] = _mm_shuffle_ps(zmm8, zmm3, 0xc4)
zmm3 = data_143b51600
float zmm2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_16, zmm1), data_143f717c0)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x32)
float temp0_21[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x10)
float temp0_23[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_14, zmm2, 0), temp0_20, 0x82)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, _mm_shuffle_ps(temp0_14, zmm2, 0x31), 0x88)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0)
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xaa), zmm3)
float temp0_31[0x4] = _mm_mul_ps(temp0_26, zmm7)
float temp0_32[0x4] = _mm_mul_ps(temp0_27, zmm7)
float temp0_33[0x4] = _mm_shuffle_ps(temp0_14, temp0_15, 0x12)
float zmm5[0x4] = data_143b515e0
float temp0_34[0x4] = _mm_mul_ps(temp0_28, zmm5)
float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, zmm2, 0xe8)
zmm2 = data_143b51610
float temp0_36[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xff)
float temp0_37[0x4] = _mm_add_ps(temp0_31, temp0_34)
float temp0_38[0x4] = _mm_mul_ps(temp0_36, zmm2)
float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0), zmm5)
float temp0_41[0x4] = _mm_add_ps(temp0_37, temp0_30)
float temp0_42[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xff), zmm2)
float temp0_45[0x4] = _mm_add_ps(temp0_32, temp0_40)
float temp0_46[0x4] = _mm_mul_ps(temp0_42, zmm3)
float temp0_47[0x4] = _mm_add_ps(temp0_41, temp0_38)
float temp0_49[0x4] = _mm_add_ps(_mm_add_ps(temp0_45, temp0_46), temp0_44)
float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x55), zmm7)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
int32_t i = 0
float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xff), zmm2)
float temp0_56[0x4] = _mm_mul_ps(temp0_52, zmm5)
float temp0_57[0x4] = _mm_mul_ps(temp0_53, zmm3)
float temp0_58[0x4] = _mm_add_ps(temp0_51, temp0_56)
float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0), zmm5)
float temp0_61[0x4] = _mm_add_ps(temp0_58, temp0_57)
float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xaa), zmm3)
float temp0_64[0x4] = _mm_add_ps(temp0_61, temp0_55)
float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0x55), zmm7)
float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xff), zmm2)
float temp0_71[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_66, temp0_60), temp0_63), temp0_68)

if (*(arg2 + 8) s> 0)
    void* rax_2 = *(arg1 + 0x2e0)
    int32_t var_7c_1 = 0x3f800000
    float* rcx_3 = rax_2 + 8
    
    do
        result = -8 - rax_2 + rcx_3 + *arg2
        i += 3
        int64_t var_78_1 = 0
        int32_t var_70_1 = 0
        zmm1 = *(result + 8)
        zmm2 = *(result + 4)
        float var_88[0x4]
        var_88[0] = (*result ^ 0x80000000)[0]
        float temp0_72[0x4] = _mm_shuffle_ps(var_88, var_88, 0xe1)
        temp0_72[0] = (zmm1 ^ 0x80000000)[0]
        float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xc6)
        temp0_73[0] = zmm2[0]
        float temp0_74[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xc9)
        var_88 = temp0_74
        float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0x55)
        float temp0_76[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0)
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xff)
        float temp0_78[0x4] = _mm_mul_ps(temp0_75, temp0_49)
        float temp0_79[0x4] = _mm_mul_ps(temp0_76, temp0_47)
        float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xaa), temp0_64)
        float temp0_85[0x4] = _mm_add_ps(_mm_add_ps(temp0_78, temp0_79), 
            _mm_add_ps(_mm_mul_ps(temp0_77, temp0_71), temp0_81))
        rcx_3[-2] = temp0_85[0]
        rcx_3[-1] = _mm_shuffle_ps(temp0_85, temp0_85, 0x55)[0]
        *rcx_3 = _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)[0]
        rcx_3 = &rcx_3[3]
    while (i s< *(arg2 + 8))

return result
