// 函数: sub_14234bdd0
// 地址: 0x14234bdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1422c5b90(*(arg2 + 8))
int64_t* i = *arg1
void* r15 = &i[sx.q(arg1[1].d)]
int64_t result
double zmm0[0x2]

if (rax == 0)
    for (; i != r15; i = &i[1])
        int64_t rax_2 = *i
        
        if (rax_2 != 0)
            double var_570_1[0x2] = *arg2
            zmm0 = arg2[2]
            uint128_t var_560_1 = arg2[1]
            double var_550_1[0x2] = zmm0
            uint128_t var_508 = rax_2.o
            uint128_t var_4f8_1 = var_570_1
            int64_t var_4d8_1 = (_mm_unpackhi_pd(zmm0, zmm0[0])).q
            uint128_t var_4e8_1 = var_560_1
            
            if (sub_140a80f40() == 0)
                uint32_t rax_4
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_4.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
                    void var_118
                    int64_t* rax_5 = sub_1423333f0(&var_118, nullptr, 0xff)
                    void* rcx_4 = *rax_5
                    *(rcx_4 + 0x10) = rax_2.o
                    *(rcx_4 + 0x20) = var_570_1
                    *(rcx_4 + 0x30) = var_560_1
                    *(rcx_4 + 0x40) = var_4d8_1
                    void* rcx_5 = *rax_5
                    int32_t r8_1 = rax_5[2].d
                    int64_t* rdx_3 = rax_5[1]
                    int64_t* rbx_1 = *(rcx_5 + 0x50)
                    int64_t* arg_18 = rbx_1
                    int32_t* rsi_1 = &rbx_1[9]
                    
                    if (rbx_1 != 0)
                        *rsi_1 += 1
                        rbx_1 = arg_18
                    
                    sub_14080ccb0(rcx_5, rdx_3, r8_1, 1)
                    
                    if (rbx_1 != 0)
                        int32_t rax_6 = *rsi_1
                        *rsi_1 -= 1
                        
                        if (rax_6 == 1)
                            sub_140a2f6e0(arg_18)
                else
                    double var_310[0x2] = rax_2.o
                    uint64_t var_2e0_1 = var_4d8_1
                    double var_300_1[0x2] = var_570_1
                    double var_2f0_1[0x2] = var_560_1
                    sub_14232da40(&var_310)
            else
                sub_14232da40(&var_508)
    
    int64_t* i_1 = arg1[6]
    
    for (void* r15_1 = &i_1[sx.q(arg1[7].d)]; i_1 != r15_1; i_1 = &i_1[1])
        int64_t rax_8 = *i_1
        
        if (rax_8 != 0)
            double var_570_2[0x2] = *arg2
            zmm0 = arg2[2]
            uint128_t var_560_2 = arg2[1]
            double var_550_2[0x2] = zmm0
            uint128_t var_4d0 = rax_8.o
            uint128_t var_4c0_1 = var_570_2
            int64_t var_4a0_1 = (_mm_unpackhi_pd(zmm0, zmm0[0])).q
            uint128_t var_4b0_1 = var_560_2
            
            if (sub_140a80f40() == 0)
                uint32_t rax_10
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_10.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_10.b == 0))
                    void var_100
                    void** rax_11 = sub_142332190(&var_100, nullptr, 0xff)
                    void* rcx_10 = *rax_11
                    *(rcx_10 + 0x10) = rax_8.o
                    *(rcx_10 + 0x20) = var_570_2
                    *(rcx_10 + 0x30) = var_560_2
                    *(rcx_10 + 0x40) = var_4a0_1
                    void* rcx_11 = *rax_11
                    int32_t r8_2 = rax_11[2].d
                    int64_t* rdx_6 = rax_11[1]
                    int64_t* rbx_2 = *(rcx_11 + 0x50)
                    int64_t* arg_20 = rbx_2
                    int32_t* rdi = &rbx_2[9]
                    
                    if (rbx_2 != 0)
                        *rdi += 1
                        rbx_2 = arg_20
                    
                    sub_14080ccb0(rcx_11, rdx_6, r8_2, 1)
                    
                    if (rbx_2 != 0)
                        int32_t rax_12 = *rdi
                        *rdi -= 1
                        
                        if (rax_12 == 1)
                            sub_140a2f6e0(arg_20)
                else
                    double var_2d8[0x2] = rax_8.o
                    uint64_t var_2a8_1 = var_4a0_1
                    double var_2c8_1[0x2] = var_570_2
                    double var_2b8_1[0x2] = var_560_2
                    sub_14232dd20(&var_2d8)
            else
                sub_14232dd20(&var_4d0)
    
    int64_t* i_2 = arg1[4]
    result = sx.q(arg1[5].d)
    
    for (void* r15_2 = &i_2[result]; i_2 != r15_2; i_2 = &i_2[1])
        result = *i_2
        
        if (result != 0)
            double var_570_3[0x2] = *arg2
            zmm0 = arg2[2]
            uint128_t var_560_3 = arg2[1]
            double var_550_3[0x2] = zmm0
            uint128_t var_498 = result.o
            uint128_t var_488_1 = var_570_3
            int64_t var_468_1 = (_mm_unpackhi_pd(zmm0, zmm0[0])).q
            uint128_t var_478_1 = var_560_3
            
            if (sub_140a80f40() == 0)
                uint32_t rax_14
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_14.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_14.b == 0))
                    void var_e8
                    void** rax_15 = sub_142332430(&var_e8, nullptr, 0xff)
                    void* rcx_16 = *rax_15
                    *(rcx_16 + 0x10) = result.o
                    *(rcx_16 + 0x20) = var_570_3
                    *(rcx_16 + 0x30) = var_560_3
                    *(rcx_16 + 0x40) = var_468_1
                    void* rcx_17 = *rax_15
                    int32_t r8_3 = rax_15[2].d
                    int64_t* rdx_9 = rax_15[1]
                    int64_t* rbx_3 = *(rcx_17 + 0x50)
                    int64_t* var_540_1 = rbx_3
                    int32_t* rdi_1 = &rbx_3[9]
                    
                    if (rbx_3 != 0)
                        *rdi_1 += 1
                        rbx_3 = var_540_1
                    
                    result = sub_14080ccb0(rcx_17, rdx_9, r8_3, 1)
                    
                    if (rbx_3 != 0)
                        result = zx.q(*rdi_1)
                        *rdi_1 -= 1
                        
                        if (result.d == 1)
                            result = sub_140a2f6e0(var_540_1)
                else
                    double var_2a0[0x2] = result.o
                    uint64_t var_270_1 = var_468_1
                    double var_290_1[0x2] = var_570_3
                    double var_280_1[0x2] = var_560_3
                    result = common_chdir<char>(&var_2a0)
            else
                result = common_chdir<char>(&var_498)
else if (rax != 1)
    for (; i != r15; i = &i[1])
        int64_t rax_30 = *i
        
        if (rax_30 != 0)
            double var_570_7[0x2] = *arg2
            zmm0 = arg2[2]
            uint128_t var_560_7 = arg2[1]
            double var_550_7[0x2] = zmm0
            uint128_t var_3b8 = rax_30.o
            uint128_t var_3a8_1 = var_570_7
            int64_t var_388_1 = (_mm_unpackhi_pd(zmm0, zmm0[0])).q
            uint128_t var_398_1 = var_560_7
            
            if (sub_140a80f40() == 0)
                uint32_t rax_32
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_32.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_32.b == 0))
                    void var_88
                    void** rax_33 = sub_1423333f0(&var_88, nullptr, 0xff)
                    void* rcx_40 = *rax_33
                    *(rcx_40 + 0x10) = rax_30.o
                    *(rcx_40 + 0x20) = var_570_7
                    *(rcx_40 + 0x30) = var_560_7
                    *(rcx_40 + 0x40) = var_388_1
                    void* rcx_41 = *rax_33
                    int32_t r8_7 = rax_33[2].d
                    int64_t* rdx_21 = rax_33[1]
                    int64_t* rbx_7 = *(rcx_41 + 0x50)
                    int64_t* var_520_1 = rbx_7
                    void* rsi_3 = &rbx_7[9]
                    
                    if (rbx_7 != 0)
                        *rsi_3 += 1
                        rbx_7 = var_520_1
                    
                    sub_14080ccb0(rcx_41, rdx_21, r8_7, 1)
                    
                    if (rbx_7 != 0)
                        int32_t rax_34 = *rsi_3
                        *rsi_3 -= 1
                        
                        if (rax_34 == 1)
                            sub_140a2f6e0(var_520_1)
                else
                    double var_1c0[0x2] = rax_30.o
                    uint64_t var_190_1 = var_388_1
                    double var_1b0_1[0x2] = var_570_7
                    double var_1a0_1[0x2] = var_560_7
                    sub_14232da40(&var_1c0)
            else
                sub_14232da40(&var_3b8)
    
    int64_t* i_3 = arg1[6]
    
    for (void* r15_5 = &i_3[sx.q(arg1[7].d)]; i_3 != r15_5; i_3 = &i_3[1])
        int64_t rax_36 = *i_3
        
        if (rax_36 != 0)
            double var_570_8[0x2] = *arg2
            zmm0 = arg2[2]
            uint128_t var_560_8 = arg2[1]
            double var_550_8[0x2] = zmm0
            uint128_t var_380 = rax_36.o
            uint128_t var_370_1 = var_570_8
            int64_t var_350_1 = (_mm_unpackhi_pd(zmm0, zmm0[0])).q
            uint128_t var_360_1 = var_560_8
            
            if (sub_140a80f40() == 0)
                uint32_t rax_38
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_38.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_38.b == 0))
                    void var_70
                    void** rax_39 = sub_142332190(&var_70, nullptr, 0xff)
                    void* rcx_46 = *rax_39
                    *(rcx_46 + 0x10) = rax_36.o
                    *(rcx_46 + 0x20) = var_570_8
                    *(rcx_46 + 0x30) = var_560_8
                    *(rcx_46 + 0x40) = var_350_1
                    void* rcx_47 = *rax_39
                    int32_t r8_8 = rax_39[2].d
                    int64_t* rdx_24 = rax_39[1]
                    int64_t* rbx_8 = *(rcx_47 + 0x50)
                    int64_t* var_518_1 = rbx_8
                    void* rdi_4 = &rbx_8[9]
                    
                    if (rbx_8 != 0)
                        *rdi_4 += 1
                        rbx_8 = var_518_1
                    
                    sub_14080ccb0(rcx_47, rdx_24, r8_8, 1)
                    
                    if (rbx_8 != 0)
                        int32_t rax_40 = *rdi_4
                        *rdi_4 -= 1
                        
                        if (rax_40 == 1)
                            sub_140a2f6e0(var_518_1)
                else
                    double var_188[0x2] = rax_36.o
                    uint64_t var_158_1 = var_350_1
                    double var_178_1[0x2] = var_570_8
                    double var_168_1[0x2] = var_560_8
                    sub_14232dd20(&var_188)
            else
                sub_14232dd20(&var_380)
    
    int64_t* i_4 = arg1[4]
    result = sx.q(arg1[5].d)
    
    for (void* r15_6 = &i_4[result]; i_4 != r15_6; i_4 = &i_4[1])
        result = *i_4
        
        if (result != 0)
            double var_570_9[0x2] = *arg2
            zmm0 = arg2[2]
            uint128_t var_560_9 = arg2[1]
            double var_550_9[0x2] = zmm0
            uint128_t var_348 = result.o
            uint128_t var_338_1 = var_570_9
            int64_t var_318_1 = (_mm_unpackhi_pd(zmm0, zmm0[0])).q
            uint128_t var_328_1 = var_560_9
            
            if (sub_140a80f40() == 0)
                uint32_t rax_42
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_42.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_42.b == 0))
                    void var_58
                    void** rax_43 = sub_142332430(&var_58, nullptr, 0xff)
                    void* rcx_52 = *rax_43
                    *(rcx_52 + 0x10) = result.o
                    *(rcx_52 + 0x20) = var_570_9
                    *(rcx_52 + 0x30) = var_560_9
                    *(rcx_52 + 0x40) = var_318_1
                    void* rcx_53 = *rax_43
                    int32_t r8_9 = rax_43[2].d
                    int64_t* rdx_27 = rax_43[1]
                    int64_t* rbx_9 = *(rcx_53 + 0x50)
                    int64_t* var_510_1 = rbx_9
                    void* rdi_5 = &rbx_9[9]
                    
                    if (rbx_9 != 0)
                        *rdi_5 += 1
                        rbx_9 = var_510_1
                    
                    result = sub_14080ccb0(rcx_53, rdx_27, r8_9, 1)
                    
                    if (rbx_9 != 0)
                        result = zx.q(*rdi_5)
                        *rdi_5 -= 1
                        
                        if (result.d == 1)
                            result = sub_140a2f6e0(var_510_1)
                else
                    double var_150[0x2] = result.o
                    uint64_t var_120_1 = var_318_1
                    double var_140_1[0x2] = var_570_9
                    double var_130_1[0x2] = var_560_9
                    result = common_chdir<char>(&var_150)
            else
                result = common_chdir<char>(&var_348)
else
    for (; i != r15; i = &i[1])
        int64_t rax_16 = *i
        
        if (rax_16 != 0)
            double var_570_4[0x2] = *arg2
            zmm0 = arg2[2]
            uint128_t var_560_4 = arg2[1]
            double var_550_4[0x2] = zmm0
            uint128_t var_460 = rax_16.o
            uint128_t var_450_1 = var_570_4
            int64_t var_430_1 = (_mm_unpackhi_pd(zmm0, zmm0[0])).q
            uint128_t var_440_1 = var_560_4
            
            if (sub_140a80f40() == 0)
                uint32_t rax_18
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_18.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_18.b == 0))
                    void var_d0
                    void** rax_19 = sub_1423333f0(&var_d0, nullptr, 0xff)
                    void* rcx_22 = *rax_19
                    *(rcx_22 + 0x10) = rax_16.o
                    *(rcx_22 + 0x20) = var_570_4
                    *(rcx_22 + 0x30) = var_560_4
                    *(rcx_22 + 0x40) = var_430_1
                    void* rcx_23 = *rax_19
                    int32_t r8_4 = rax_19[2].d
                    int64_t* rdx_12 = rax_19[1]
                    int64_t* rbx_4 = *(rcx_23 + 0x50)
                    int64_t* var_538_1 = rbx_4
                    int32_t* rsi_2 = &rbx_4[9]
                    
                    if (rbx_4 != 0)
                        *rsi_2 += 1
                        rbx_4 = var_538_1
                    
                    sub_14080ccb0(rcx_23, rdx_12, r8_4, 1)
                    
                    if (rbx_4 != 0)
                        int32_t rax_20 = *rsi_2
                        *rsi_2 -= 1
                        
                        if (rax_20 == 1)
                            sub_140a2f6e0(var_538_1)
                else
                    double var_268[0x2] = rax_16.o
                    uint64_t var_238_1 = var_430_1
                    double var_258_1[0x2] = var_570_4
                    double var_248_1[0x2] = var_560_4
                    sub_14232da40(&var_268)
            else
                sub_14232da40(&var_460)
    
    int64_t* i_5 = arg1[6]
    
    for (void* r15_3 = &i_5[sx.q(arg1[7].d)]; i_5 != r15_3; i_5 = &i_5[1])
        int64_t rax_22 = *i_5
        
        if (rax_22 != 0)
            double var_570_5[0x2] = *arg2
            zmm0 = arg2[2]
            uint128_t var_560_5 = arg2[1]
            double var_550_5[0x2] = zmm0
            uint128_t var_428 = rax_22.o
            uint128_t var_418_1 = var_570_5
            int64_t var_3f8_1 = (_mm_unpackhi_pd(zmm0, zmm0[0])).q
            uint128_t var_408_1 = var_560_5
            
            if (sub_140a80f40() == 0)
                uint32_t rax_24
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_24.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_24.b == 0))
                    void var_b8
                    void** rax_25 = sub_142332190(&var_b8, nullptr, 0xff)
                    void* rcx_28 = *rax_25
                    *(rcx_28 + 0x10) = rax_22.o
                    *(rcx_28 + 0x20) = var_570_5
                    *(rcx_28 + 0x30) = var_560_5
                    *(rcx_28 + 0x40) = var_3f8_1
                    void* rcx_29 = *rax_25
                    int32_t r8_5 = rax_25[2].d
                    int64_t* rdx_15 = rax_25[1]
                    int64_t* rbx_5 = *(rcx_29 + 0x50)
                    int64_t* var_530_1 = rbx_5
                    int32_t* rdi_2 = &rbx_5[9]
                    
                    if (rbx_5 != 0)
                        *rdi_2 += 1
                        rbx_5 = var_530_1
                    
                    sub_14080ccb0(rcx_29, rdx_15, r8_5, 1)
                    
                    if (rbx_5 != 0)
                        int32_t rax_26 = *rdi_2
                        *rdi_2 -= 1
                        
                        if (rax_26 == 1)
                            sub_140a2f6e0(var_530_1)
                else
                    double var_230[0x2] = rax_22.o
                    uint64_t var_200_1 = var_3f8_1
                    double var_220_1[0x2] = var_570_5
                    double var_210_1[0x2] = var_560_5
                    sub_14232dd20(&var_230)
            else
                sub_14232dd20(&var_428)
    
    int64_t* i_6 = arg1[4]
    result = sx.q(arg1[5].d)
    
    for (void* r15_4 = &i_6[result]; i_6 != r15_4; i_6 = &i_6[1])
        result = *i_6
        
        if (result != 0)
            double var_570_6[0x2] = *arg2
            zmm0 = arg2[2]
            uint128_t var_560_6 = arg2[1]
            double var_550_6[0x2] = zmm0
            uint128_t var_3f0 = result.o
            uint128_t var_3e0_1 = var_570_6
            int64_t var_3c0_1 = (_mm_unpackhi_pd(zmm0, zmm0[0])).q
            uint128_t var_3d0_1 = var_560_6
            
            if (sub_140a80f40() == 0)
                uint32_t rax_28
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_28.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_28.b == 0))
                    void var_a0
                    void** rax_29 = sub_142332430(&var_a0, nullptr, 0xff)
                    void* rcx_34 = *rax_29
                    *(rcx_34 + 0x10) = result.o
                    *(rcx_34 + 0x20) = var_570_6
                    *(rcx_34 + 0x30) = var_560_6
                    *(rcx_34 + 0x40) = var_3c0_1
                    void* rcx_35 = *rax_29
                    int32_t r8_6 = rax_29[2].d
                    int64_t* rdx_18 = rax_29[1]
                    int64_t* rbx_6 = *(rcx_35 + 0x50)
                    int64_t* var_528_1 = rbx_6
                    int32_t* rdi_3 = &rbx_6[9]
                    
                    if (rbx_6 != 0)
                        *rdi_3 += 1
                        rbx_6 = var_528_1
                    
                    result = sub_14080ccb0(rcx_35, rdx_18, r8_6, 1)
                    
                    if (rbx_6 != 0)
                        result = zx.q(*rdi_3)
                        *rdi_3 -= 1
                        
                        if (result.d == 1)
                            result = sub_140a2f6e0(var_528_1)
                else
                    double var_1f8[0x2] = result.o
                    uint64_t var_1c8_1 = var_3c0_1
                    double var_1e8_1[0x2] = var_570_6
                    double var_1d8_1[0x2] = var_560_6
                    result = common_chdir<char>(&var_1f8)
            else
                result = common_chdir<char>(&var_3f0)
return result
