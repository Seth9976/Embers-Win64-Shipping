// 函数: sub_1420fb450
// 地址: 0x1420fb450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_888
int32_t* var_f8 = __security_cookie ^ &var_888
int32_t result_1 = 0
int32_t* result
void var_738

if (arg2 == 0 || arg1[6] == 0)
    result.b = 0
else
    void var_730
    
    if (*(*(*arg2 + 0x18))(arg2, &var_738) == 0)
        result.b = 0
    else if ((*(*arg2 + 0x18))(arg2, &var_730)[1] == 0 || 0f f== arg1[0x10].d
            || 0f f== *(arg1 + 0x84))
        result.b = 0
    else
        void var_728
        uint128_t zmm1
        zmm1.d = _mm_cvtepi32_ps(zx.o(*(*(*arg2 + 0x18))(arg2, &var_728))).d f* arg1[0xf].d
        int32_t var_850 = int.d(zmm1.d)
        void var_720
        uint128_t zmm0 = zx.o(*((*(*arg2 + 0x18))(arg2, &var_720) + 4))
        var_850 += arg2[0x14].d
        zmm0.d = _mm_cvtepi32_ps(zmm0).d f* *(arg1 + 0x7c)
        int32_t var_848 = int.d(zmm0.d) + *(arg2 + 0xa4)
        void var_718
        zmm0.d = _mm_cvtepi32_ps(zx.o(*(*(*arg2 + 0x18))(arg2, &var_718))).d f* arg1[0x10].d
        int32_t var_84c = int.d(zmm0.d)
        void var_710
        void* rax_15 = (*(*arg2 + 0x18))(arg2, &var_710)
        int32_t rdx_6 = var_850
        int32_t r9_1 = var_84c + rdx_6
        int32_t rax_16 = var_848
        zmm1.d = _mm_cvtepi32_ps(zx.o(*(rax_15 + 4))).d f* *(arg1 + 0x84)
        arg4[0x12].d = rdx_6
        *(arg4 + 0x94) = rax_16
        arg4[0x13].d = r9_1
        int32_t result_2 = int.d(zmm1.d)
        result_1 = result_2
        int32_t r8 = result_2 + rax_16
        *(arg4 + 0x9c) = r8
        arg4[0x14].d = rdx_6
        *(arg4 + 0xa4) = rax_16
        arg4[0x15].d = r9_1
        *(arg4 + 0xac) = r8
        int64_t var_6c8
        sub_1420f3820(&var_6c8)
        (*(*arg1 + 0x268))(arg1, &var_6c8, zx.q(arg3))
        char rax_18 = sub_142391ee0(zx.q(arg3))
        char var_858_1
        char rax_19
        
        if (rax_18 != 0)
            rax_19 = sub_1423e6860(data_143f5b298, nullptr)
            var_858_1 = 1
        
        if (rax_18 == 0 || rax_19 == 0)
            var_858_1 = 0
        
        int64_t* rcx_10 = *(data_143f5b298 + 0xb08)
        char rax_22
        
        if (rcx_10 != 0)
            rax_22 = (*(*rcx_10 + 0x120))(rcx_10)
        
        int64_t r15
        
        if (rcx_10 == 0 || rax_22 == 0)
            r15.b = 0
        else
            r15.b = 1
        
        char rcx_12 = var_858_1
        int32_t* var_860
        
        if (rcx_12 != 0)
            var_860 = &result_1
            int64_t* rcx_11 = *(data_143f5b298 + 0xaf8)
            (*(*rcx_11 + 0x80))(rcx_11, zx.q(arg3), &var_850, &var_848, &var_84c, var_860, 
                var_858_1)
            rcx_12 = var_858_1
        
        void* rdx_9 = arg1[6]
        void* rax_25 = *(rdx_9 + 0x2b8)
        float zmm1_1[0x4]
        
        if (rax_25 == 0)
            zmm1_1 = 0x42b40000
        else
            zmm1_1 = *(rax_25 + 0x238)
        
        int32_t var_6b0
        float zmm0_1[0x4] = var_6b0
        float temp0_5[0x4] = __maxss_xmmss_memss(zmm1_1[0], 0x3c23d70a)
        zmm0_1[0] = zmm0_1[0] / temp0_5[0]
        *(rdx_9 + 0x2e8) = zmm0_1[0]
        int64_t var_840 = var_6c8
        float var_808[0x4]
        int32_t var_6bc
        
        if (rcx_12 != 0 || r15.b != 0)
            int64_t* rcx_13 = *(data_143f5b298 + 0xb08)
            int64_t* var_830_1
            int128_t var_828
            int64_t* rax_29
            int32_t r13_1
            
            if (rcx_13 == 0)
                __builtin_memset(&var_830_1, 0, 0x18)
                rax_29 = &var_828
                r13_1 = 2
            else
                rax_29 = (*(*rcx_13 + 0xf8))(rcx_13, &var_808, 0)
                r13_1 = 1
                var_830_1 = *rax_29
            
            int64_t* r15_1 = rax_29[1]
            rax_29[1] = 0
            *rax_29 = 0
            
            if ((r13_1.b & 2) != 0)
                void* rcx_15 = var_828:8.q
                r13_1 &= 0xfffffffd
                
                if (rcx_15 != 0)
                    int32_t rax_30 = *(rcx_15 + 8)
                    *(rcx_15 + 8) -= 1
                    
                    if (rax_30 == 1)
                        int64_t* rbx_1 = var_828:8.q
                        (**rbx_1)(rbx_1)
                        int32_t rax_32 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_32 == 1)
                            int64_t* rcx_17 = var_828:8.q
                            (*(*rcx_17 + 8))(rcx_17, 1)
            
            if ((r13_1.b & 1) != 0)
                int64_t* rbx_2 = var_808[2].q
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t rax_36 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_36 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            
            int64_t* rbx_3 = var_830_1
            
            if (rbx_3 != 0)
                int64_t* rcx_20 = arg1[6]
                int64_t* rax_39
                int64_t rdx_11
                rax_39, rdx_11 = (*(*rcx_20 + 0x698))(rcx_20)
                char rax_40
                
                if (rax_39 != 0)
                    int64_t rdx_12 = *rax_39
                    rax_40, rdx_11 = (*(rdx_12 + 0x5b8))(rax_39, rdx_12)
                
                if (rax_39 == 0 || rax_40 == 0)
                    rdx_11.b = 0
                else
                    rdx_11.b = 1
                
                (*(*rbx_3 + 0x10))(rbx_3, rdx_11)
            
            int64_t* r13_2 = *(data_143f5b298 + 0xaf8)
            
            if (r13_2 != 0)
                int64_t rbx_4 = *r13_2
                int64_t* var_868_2 = &var_840
                int512_t zmm3_1
                zmm3_1.o = *(sub_142437e30((*(*arg1 + 0x150))(arg1), 0, 1) + 0x240)
                (*(rbx_4 + 0x98))(r13_2, zx.q(arg3), &var_6bc, zmm3_1, var_868_2, var_860, 
                    var_858_1)
            
            if (r15_1 != 0)
                r15_1[1].d -= 1
                
                if (r15_1[1].d == 1)
                    (**r15_1)(r15_1)
                    int32_t r12_1 = *(r15_1 + 0xc)
                    *(r15_1 + 0xc) -= 1
                    
                    if (r12_1 == 1)
                        (*(*r15_1 + 8))(r15_1, zx.q(r12_1))
        
        int32_t var_6b4
        zmm1_1 = var_6b4
        zmm0_1 = zx.o(var_840)
        zmm1_1[0] = zmm1_1[0] * 3.14159274f
        *arg4 = zmm0_1.q
        int32_t var_6c0
        arg4[1].d = var_6c0
        zmm1_1[0] = zmm1_1[0] * 0.00555555569f
        float zmm0_2[0x4]
        int32_t zmm6_1
        int32_t zmm7_1
        zmm0_2, zmm6_1, zmm7_1 = __libm_sse2_sincosf_(zmm1_1)
        float zmm1_2[0x4] = var_6bc
        var_808 = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
        zmm1_2[0] = zmm1_2[0] f* zmm7_1
        int32_t var_768_1 = 0
        float var_854_1 = (zmm0_2 ^ 0x80000000)[0]
        int64_t var_75c_1 = 0
        zmm1_2[0] = zmm1_2[0] f* zmm6_1
        int32_t var_74c_1 = 0
        float zmm0_3[0x4]
        int32_t zmm6_2
        int32_t zmm7_2
        int128_t zmm8_1
        int512_t zmm10_1
        int512_t zmm12_1
        int512_t zmm13_1
        zmm0_3, zmm6_2, zmm7_2, zmm8_1, zmm10_1, zmm12_1, zmm13_1 = __libm_sse2_sincosf_(zmm1_2)
        int32_t var_6b8
        float zmm1_3[0x4] = var_6b8
        zmm12_1.o = data_142d4cc20
        zmm13_1.o = data_142d3f660
        zmm10_1.o = zmm0_3
        zmm1_3[0] = zmm1_3[0] f* zmm7_2
        int32_t var_7f4_1 = 0
        _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
        int32_t var_7ec_1 = 0
        zmm1_3[0] = zmm1_3[0] f* zmm6_2
        int32_t var_7d4_1 = 0
        int32_t var_7cc_1 = 0
        float zmm0_4[0x4]
        float zmm8_2[0x4]
        float zmm9_2[0x4]
        float zmm10_2[0x4]
        float zmm11_2[0x4]
        float zmm12_2[0x4]
        float zmm13_2[0x4]
        int32_t zmm15_2
        zmm0_4, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_2, zmm13_2, zmm15_2 =
            __libm_sse2_sincosf_(zmm1_3)
        float zmm7_3[0x4] = data_142d4cc30
        float temp0_14[0x4] = _mm_shuffle_ps(zmm0_4, zmm0_4, 1)
        float var_7f8[0x4]
        var_7f8[0] = zmm11_2[0]
        float temp0_15[0x4] = _mm_shuffle_ps(var_7f8, var_7f8, 0xd2)
        float var_7d8[0x4]
        var_7d8[0] = zmm10_2[0]
        int64_t var_7b0_1 = 0
        temp0_15[0] = zmm9_2[0]
        float var_7b8[0x4]
        var_7b8[0] = temp0_14[0]
        float temp0_16[0x4] = _mm_shuffle_ps(var_7d8, var_7d8, 0xd2)
        float temp0_17[0x4] = _mm_shuffle_ps(var_7b8, var_7b8, 0xe1)
        temp0_16[0] = zmm11_2[0]
        temp0_17[0] = (zmm0_4 ^ zmm8_2)[0]
        float temp0_18[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xe1)
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc9)
        float temp0_21[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x55)
        float temp0_22[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0)
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)
        float temp0_24[0x4] = _mm_mul_ps(temp0_21, zmm12_2)
        int64_t var_7a0_1 = 0
        float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xff), zmm13_2)
        float temp0_27[0x4] = _mm_mul_ps(temp0_22, temp0_18)
        float temp0_28[0x4] = _mm_mul_ps(temp0_23, temp0_20)
        float temp0_31[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_24, temp0_27), temp0_28), temp0_26)
        float var_7a8[0x4]
        var_7a8[0] = zmm0_4[0]
        float temp0_32[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0xff)
        float zmm3_2[0x4] = var_768_1.o
        float temp0_33[0x4] = _mm_shuffle_ps(var_7a8, var_7a8, 0xe1)
        temp0_33[0] = temp0_14[0]
        float temp0_34[0x4] = _mm_shuffle_ps(zmm7_3, zmm7_3, 0x55)
        float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xe1)
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0x55)
        float temp0_38[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0)
        float temp0_39[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xaa)
        float temp0_40[0x4] = _mm_mul_ps(temp0_38, temp0_18)
        float temp0_41[0x4] = _mm_mul_ps(temp0_39, temp0_20)
        float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0xff), zmm13_2)
        float temp0_44[0x4] = _mm_mul_ps(temp0_37, zmm12_2)
        float temp0_45[0x4] = _mm_mul_ps(temp0_34, zmm12_2)
        float temp0_46[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0x55)
        float temp0_47[0x4] = _mm_add_ps(temp0_44, temp0_40)
        float temp0_48[0x4] = _mm_mul_ps(temp0_46, zmm12_2)
        zmm12_2 = data_142d4cc00
        float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7_3, zmm7_3, 0), temp0_18)
        float temp0_51[0x4] = _mm_add_ps(temp0_47, temp0_41)
        float temp0_52[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
        float temp0_53[0x4] = _mm_mul_ps(temp0_32, zmm13_2)
        float temp0_54[0x4] = _mm_add_ps(temp0_45, temp0_50)
        float temp0_56[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7_3, zmm7_3, 0xaa), temp0_20)
        float temp0_57[0x4] = _mm_add_ps(temp0_51, temp0_43)
        float zmm2_1[0x4] = var_75c_1:4.o
        float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_2, zmm13_2, 0), temp0_18)
        float temp0_60[0x4] = _mm_add_ps(temp0_54, temp0_56)
        float temp0_61[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xe1)
        float temp0_62[0x4] = _mm_shuffle_ps(zmm7_3, zmm7_3, 0xff)
        float temp0_63[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0xaa)
        float temp0_64[0x4] = _mm_add_ps(temp0_48, temp0_59)
        float temp0_65[0x4] = _mm_mul_ps(temp0_63, temp0_20)
        float zmm5_1[0x4] = var_808
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0)
        temp0_52[0] = zmm5_1[0]
        float temp0_67[0x4] = _mm_mul_ps(temp0_66, zmm12_2)
        float temp0_68[0x4] = _mm_add_ps(temp0_64, temp0_65)
        float temp0_69[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xc6)
        float temp0_70[0x4] = _mm_mul_ps(temp0_62, zmm13_2)
        float temp0_71[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xaa)
        temp0_69[0] = zmm15_2
        float temp0_72[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xc9)
        float temp0_73[0x4] = _mm_mul_ps(temp0_36, temp0_72)
        float temp0_74[0x4] = _mm_add_ps(temp0_68, temp0_53)
        float temp0_75[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xff)
        float temp0_76[0x4] = _mm_add_ps(temp0_60, temp0_70)
        float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_72)
        float temp0_79[0x4] = _mm_add_ps(temp0_73, temp0_67)
        temp0_61[0] = var_854_1[0]
        float temp0_80[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xc6)
        temp0_80[0] = zmm5_1[0]
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0)
        float temp0_82[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0xc9)
        float temp0_83[0x4] = _mm_mul_ps(temp0_71, temp0_82)
        float temp0_84[0x4] = _mm_mul_ps(temp0_75, zmm13_2)
        float temp0_86[0x4] = _mm_add_ps(_mm_add_ps(temp0_79, temp0_83), temp0_84)
        float temp0_87[0x4] = _mm_mul_ps(temp0_81, zmm12_2)
        float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_82)
        float temp0_90[0x4] = _mm_add_ps(temp0_78, temp0_87)
        float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x55), temp0_72)
        float temp0_94[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0), zmm12_2)
        float temp0_95[0x4] = _mm_add_ps(temp0_90, temp0_89)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0x55), temp0_72)
        float temp0_98[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xaa)
        float temp0_99[0x4] = _mm_add_ps(temp0_92, temp0_94)
        float temp0_100[0x4] = _mm_mul_ps(temp0_98, temp0_82)
        float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0), zmm12_2)
        float temp0_103[0x4] = _mm_add_ps(temp0_99, temp0_100)
        float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xff), zmm13_2)
        float temp0_106[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0xaa)
        float temp0_107[0x4] = _mm_add_ps(temp0_97, temp0_102)
        float temp0_108[0x4] = _mm_mul_ps(temp0_106, temp0_82)
        float temp0_109[0x4] = _mm_add_ps(temp0_95, temp0_105)
        float temp0_110[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0)
        float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xff), zmm13_2)
        float temp0_113[0x4] = _mm_add_ps(temp0_107, temp0_108)
        float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0xff), zmm13_2)
        float temp0_116[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xaa)
        float temp0_117[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0x55)
        float temp0_118[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0x55)
        float temp0_119[0x4] = _mm_add_ps(temp0_113, temp0_112)
        zmm10_2 = data_142d4cc30
        float temp0_120[0x4] = _mm_add_ps(temp0_103, temp0_115)
        float temp0_121[0x4] = _mm_mul_ps(temp0_110, zmm10_2)
        zmm9_2 = zmm12_2
        float temp0_122[0x4] = _mm_mul_ps(temp0_117, zmm12_2)
        zmm12_2 = data_142d4cc20
        float temp0_123[0x4] = _mm_mul_ps(temp0_116, zmm12_2)
        float temp0_124[0x4] = _mm_add_ps(temp0_122, temp0_121)
        float temp0_125[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0x55)
        float temp0_126[0x4] = _mm_mul_ps(temp0_118, zmm9_2)
        float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_109, temp0_109, 0), zmm10_2)
        float temp0_129[0x4] = _mm_add_ps(temp0_124, temp0_123)
        float temp0_130[0x4] = _mm_mul_ps(temp0_125, zmm9_2)
        float temp0_131[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0xff)
        float temp0_132[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xaa)
        float temp0_133[0x4] = _mm_add_ps(temp0_126, temp0_128)
        float temp0_134[0x4] = _mm_mul_ps(temp0_132, zmm12_2)
        float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_120, temp0_120, 0), zmm10_2)
        float temp0_137[0x4] = _mm_add_ps(temp0_133, temp0_134)
        float temp0_138[0x4] = _mm_shuffle_ps(temp0_109, temp0_109, 0xff)
        float temp0_139[0x4] = _mm_mul_ps(temp0_131, zmm13_2)
        float temp0_140[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xaa)
        float temp0_141[0x4] = _mm_add_ps(temp0_130, temp0_136)
        float temp0_142[0x4] = _mm_mul_ps(temp0_140, zmm12_2)
        float temp0_143[0x4] = _mm_mul_ps(temp0_138, zmm13_2)
        float temp0_144[0x4] = _mm_add_ps(temp0_129, temp0_139)
        float temp0_145[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xff)
        float temp0_146[0x4] = _mm_add_ps(temp0_141, temp0_142)
        float temp0_147[0x4] = _mm_mul_ps(temp0_145, zmm13_2)
        float temp0_148[0x4] = _mm_add_ps(temp0_137, temp0_143)
        float temp0_149[0x4] = _mm_add_ps(temp0_146, temp0_147)
        float temp0_150[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0x55)
        float temp0_151[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0)
        float temp0_152[0x4] = _mm_mul_ps(temp0_150, zmm9_2)
        float temp0_153[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0xaa)
        *(arg4 + 0x10) = temp0_144
        float temp0_154[0x4] = _mm_mul_ps(temp0_151, zmm10_2)
        float temp0_155[0x4] = _mm_mul_ps(temp0_153, zmm12_2)
        float temp0_156[0x4] = _mm_add_ps(temp0_152, temp0_154)
        float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_119, temp0_119, 0xff), zmm13_2)
        *(arg4 + 0x20) = temp0_148
        float temp0_159[0x4] = _mm_add_ps(temp0_156, temp0_155)
        *(arg4 + 0x30) = temp0_149
        *(arg4 + 0x40) = _mm_add_ps(temp0_159, temp0_158)
        
        if (var_858_1 != 0)
            int64_t* rcx_33 = *(data_143f5b298 + 0xaf8)
            void var_708
            float (* rax_53)[0x4] = (*(*rcx_33 + 0xa0))(rcx_33, &var_708, zx.q(arg3))
            int32_t rcx_34 = var_848
            int32_t r8_7 = var_850
            int32_t r9_6 = var_84c + r8_7
            *(arg4 + 0x50) = *rax_53
            *(arg4 + 0x60) = rax_53[1]
            *(arg4 + 0x70) = rax_53[2]
            result = zx.q(result_1)
            *(arg4 + 0x80) = rax_53[3]
            arg4[0x12].d = r8_7
            *(arg4 + 0x94) = rcx_34
            arg4[0x13].d = r9_6
            int32_t rdx_19 = result.d + rcx_34
            *(arg4 + 0x9c) = rdx_19
            arg4[0x14].d = r8_7
            *(arg4 + 0xa4) = rcx_34
            arg4[0x15].d = r9_6
            *(arg4 + 0xac) = rdx_19
        else
            char r9_4 = sub_141e96e10(&var_6c8, *(arg1 + 0x94), arg2, arg4)
            int64_t* i_1
            sub_1422e3b90(*(data_143f5b298 + 0xb18), &i_1, 0, r9_4)
            int32_t var_810
            
            for (int64_t* i = i_1; i != &i[sx.q(var_810) * 2]; i = &i[2])
                int64_t* rcx_31 = *i
                (*(*rcx_31 + 0x20))(rcx_31, arg4)
            
            sub_140596e10(&i_1)
        
        char var_108_1 = 0
        int64_t var_158
        
        if (var_158 != 0)
            sub_140a74f90(var_158)
        
        result.b = 1
__security_check_cookie(var_f8 ^ &var_888)
return result
