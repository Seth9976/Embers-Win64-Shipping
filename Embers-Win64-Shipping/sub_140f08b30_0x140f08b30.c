// 函数: sub_140f08b30
// 地址: 0x140f08b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int64_t* result = (**(arg1 + 0x2b8))(arg1 + 0x2b8)

if (result.d s> 0)
    *(arg1 + 0x30c) = 0xffffffff
    
    if (*(arg1 + 0x348) != 0)
        int64_t* rcx_1 = *(arg1 + 0x340)
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
            int64_t* rcx_2
            
            if (*(arg1 + 0x348) == 0)
                rcx_2 = nullptr
            else
                rcx_2 = *(arg1 + 0x340)
            
            (*(*rcx_2 + 0x48))(rcx_2)
            *(arg1 + 0x338) = arg4.d
    
    float zmm11[0x4] = *(arg1 + 0x338)
    float var_260_1 = zmm11[0]
    
    if (*(arg1 + 0x360) != 0)
        int64_t* rcx_3 = *(arg1 + 0x358)
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
            int64_t* rcx_4
            
            if (*(arg1 + 0x360) == 0)
                rcx_4 = nullptr
            else
                rcx_4 = *(arg1 + 0x358)
            
            (*(*rcx_4 + 0x48))(rcx_4)
            *(arg1 + 0x350) = arg4.d
    
    float zmm9[0x4] = *(arg1 + 0x350)
    float var_264_1 = zmm9[0]
    float zmm1[0x4]
    
    if (*(arg1 + 0x310) != 0)
        arg4 = *arg2
        zmm1 = *(arg1 + 0x308)
    else
        arg4 = *(arg1 + 0x308)
        zmm1 = arg2[1]
    
    bool cond:4_1 = *(arg1 + 0x300) == 0
    float var_28c_1 = zmm1[0]
    float var_290 = arg4.d
    float zmm7[0x4] = var_290
    float zmm12[0x4] = var_28c_1
    float var_268_1 = zmm7[0]
    int128_t var_288
    
    if (not(cond:4_1))
        int64_t* rcx_5 = *(arg1 + 0x2f8)
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
            int64_t* rcx_6
            
            if (*(arg1 + 0x300) == 0)
                rcx_6 = nullptr
            else
                rcx_6 = *(arg1 + 0x2f8)
            
            (*(*rcx_6 + 0x48))(rcx_6, &var_288)
            *(arg1 + 0x2e0) = var_288
    
    bool cond:3_1 = *(arg1 + 0x300) == 0
    float zmm6[0x4] = *(arg1 + 0x2e8)
    arg4 = *(arg1 + 0x2ec)
    zmm6[0] = zmm6[0] f+ *(arg1 + 0x2e0)
    arg4.d = arg4.d f+ *(arg1 + 0x2e4)
    float var_25c_1 = zmm6[0]
    int32_t var_26c_1 = arg4.d
    
    if (not(cond:3_1))
        int64_t* rcx_7 = *(arg1 + 0x2f8)
        
        if (rcx_7 != 0 && (*(*rcx_7 + 0x28))(rcx_7) != 0)
            int64_t* rcx_8
            
            if (*(arg1 + 0x300) == 0)
                rcx_8 = nullptr
            else
                rcx_8 = *(arg1 + 0x2f8)
            
            (*(*rcx_8 + 0x48))(rcx_8, &var_288)
            *(arg1 + 0x2e0) = var_288
    
    int128_t zmm13 = data_143dbb1f0.d
    int128_t zmm15 = data_143dbb1f0:4.d
    int32_t rax_16 = (**(arg1 + 0x2b8))(arg1 + 0x2b8)
    int64_t rax_17 = sx.q(rax_16 - 1)
    int32_t var_240
    result = sub_140e13cf0(*(*(*(arg1 + 0x2c8) + (rax_17 << 3)) + 0x10), &var_240)
    int32_t rcx_13 = 0
    int32_t var_294_1 = 0
    
    if (rax_16 - 1 s> 0)
        int64_t r12_1 = 0
        float zmm8[0x4] = zx.o(0)
        int128_t zmm10 = 0x80000000
        
        do
            result = *(arg1 + 0x2c8)
            void* rsi_1 = result[r12_1]
            char* rbx_3 = *(rsi_1 + 0x10) + 0x1a8
            
            if (*(rbx_3 + 0x10) != 0)
                int64_t* rcx_14 = *(rbx_3 + 8)
                
                if (rcx_14 != 0)
                    result = (*(*rcx_14 + 0x28))(rcx_14)
                    
                    if (result.b != 0)
                        int64_t* rcx_15
                        
                        if (*(rbx_3 + 0x10) == 0)
                            rcx_15 = nullptr
                        else
                            rcx_15 = *(rbx_3 + 8)
                        
                        char result_1
                        (*(*rcx_15 + 0x48))(rcx_15, &result_1)
                        result = zx.q(result_1)
                        *rbx_3 = result.b
                
                rcx_13 = var_294_1
            
            char rbx_4 = *rbx_3
            
            if ((*arg3 & rbx_4) != 0)
                void var_210
                int64_t* rax_20 = sub_140e13cf0(*(rsi_1 + 0x10), &var_210)
                bool cond:5_1 = *(arg1 + 0x310) != 0
                float zmm0[0x4] = var_26c_1
                zmm6[0] = zmm6[0] f+ *rax_20
                zmm0[0] = zmm0[0] f+ *(rax_20 + 4)
                
                if (not(cond:5_1))
                    zmm0 = zmm6
                
                void* rdx_6
                int32_t rdi_4
                
                if ((zmm11[0] <= zmm8[0] || not(zmm0[0] > zmm11[0]))
                        && (zmm9[0] <= zmm8[0] || zmm0[0] >= zmm9[0]))
                    zmm8 = *(arg1 + 0x2e0)
                    zmm11 = zmm7
                    zmm6 = *(arg1 + 0x2e8)
                    int32_t rdi_5 = *(rsi_1 + 0x20)
                    zmm8[0] = zmm8[0] + zmm6[0]
                    zmm11[0] = zmm11[0] - zmm8[0]
                    
                    if (rdi_5 != 0)
                        void var_1f8
                        float (* rax_22)[0x4] = sub_140e13cf0(*(rsi_1 + 0x10), &var_1f8)
                        float temp0_2[0x4] = __minss_xmmss_memss(zmm11[0], *rax_22)
                        
                        if (rdi_5 == 1)
                            zmm11 = temp0_2
                        else if (rdi_5 == 2)
                            zmm7[0] = zmm7[0] - temp0_2[0]
                            zmm7[0] = zmm7[0] * 0.5f
                            zmm7[0] = zmm7[0] + zmm8[0]
                            zmm8 = zmm7
                            zmm8[0] = zmm8[0] - zmm6[0]
                            zmm11 = temp0_2
                        else if (rdi_5 == 3)
                            zmm8 = zmm7
                            zmm8[0] = zmm8[0] - temp0_2[0]
                            zmm8[0] = zmm8[0] - zmm6[0]
                            zmm11 = temp0_2
                    
                    zmm7 = *(arg1 + 0x2e4)
                    zmm9 = zmm12
                    zmm6 = *(arg1 + 0x2ec)
                    rdi_4 = *(rsi_1 + 0x24)
                    zmm7[0] = zmm7[0] + zmm6[0]
                    zmm9[0] = zmm9[0] - zmm7[0]
                    
                    if (rdi_4 != 0)
                        void var_1f0
                        rdx_6 = &var_1f0
                        goto label_140f09025
                else
                    zmm8 = *(arg1 + 0x2e0)
                    zmm11 = zmm6
                    zmm7 = *(arg1 + 0x2e8)
                    int32_t rdi_1 = *(rsi_1 + 0x20)
                    zmm8[0] = zmm8[0] + zmm7[0]
                    zmm11[0] = zmm11[0] - zmm8[0]
                    
                    if (rdi_1 != 0)
                        void var_208
                        int64_t* rax_21 = sub_140e13cf0(*(rsi_1 + 0x10), &var_208)
                        float temp0_1[0x4] = __minss_xmmss_memss(zmm11[0], *rax_21)
                        
                        if (rdi_1 == 1)
                            zmm11 = temp0_1
                        else if (rdi_1 == 2)
                            zmm6[0] = zmm6[0] - temp0_1[0]
                            zmm6[0] = zmm6[0] * 0.5f
                            zmm6[0] = zmm6[0] + zmm8[0]
                            zmm8 = zmm6
                            zmm8[0] = zmm8[0] - zmm7[0]
                            zmm11 = temp0_1
                        else if (rdi_1 == 3)
                            zmm8 = zmm6
                            zmm8[0] = zmm8[0] - temp0_1[0]
                            zmm8[0] = zmm8[0] - zmm7[0]
                            zmm11 = temp0_1
                    
                    zmm7 = *(arg1 + 0x2e4)
                    zmm9 = zmm12
                    zmm6 = *(arg1 + 0x2ec)
                    rdi_4 = *(rsi_1 + 0x24)
                    zmm7[0] = zmm7[0] + zmm6[0]
                    zmm9[0] = zmm9[0] - zmm7[0]
                    
                    if (rdi_4 != 0)
                        void var_200
                        rdx_6 = &var_200
                    label_140f09025:
                        float temp0_4[0x4] =
                            _mm_min_ss((*(sub_140e13cf0(*(rsi_1 + 0x10), rdx_6) + 4))[0], zmm9[0])
                        
                        if (rdi_4 == 1)
                            zmm9 = temp0_4
                        else if (rdi_4 == 2)
                            zmm12[0] = zmm12[0] - temp0_4[0]
                            zmm12[0] = zmm12[0] * 0.5f
                            zmm12[0] = zmm12[0] + zmm7[0]
                            zmm7 = zmm12
                            zmm7[0] = zmm7[0] - zmm6[0]
                            zmm9 = temp0_4
                        else if (rdi_4 == 3)
                            zmm7 = zmm12
                            zmm7[0] = zmm7[0] - temp0_4[0]
                            zmm7[0] = zmm7[0] - zmm6[0]
                            zmm9 = temp0_4
                sub_140da8da0()
                int128_t var_138 = data_143e242d0
                float var_128_1[0x4] = data_143e242e0
                int128_t zmm0_2 = data_143e242f0
                uint64_t var_108_1 = data_143e24300
                void* var_100 = data_143e24308
                int64_t* rcx_21 = data_143e24310
                
                if (rcx_21 != 0)
                    rcx_21[1].d += 1
                
                int128_t* rcx_23 = *(rsi_1 + 0x10) + 0x1c8
                float var_278
                int64_t var_248
                uint128_t var_1e8
                uint64_t var_1d8
                float var_1c8[0x4]
                uint64_t var_1b8
                int32_t var_1ac
                float var_1a8[0x4]
                int64_t var_198
                char var_194
                float var_188[0x4]
                void* var_150
                int64_t* var_f8_2
                int32_t rdi_14
                int128_t zmm0_5
                uint64_t var_250
                
                if (*(arg1 + 0x310) != 0)
                    bool cond:6_1 = data_143e20cf4 != 0
                    zmm7[0] = zmm7[0] f+ zmm15.d
                    var_290 = zmm11[0]
                    var_28c_1 = zmm9[0]
                    var_288:4.d = zmm8[0]
                    var_288.d = 0x3f800000
                    var_288:8.d = zmm7[0]
                    char rcx_36
                    uint128_t zmm0_6
                    float zmm1_3[0x4]
                    char var_1d0_6
                    
                    if (cond:6_1)
                        float (* rax_40)[0x4] = sub_140e111c0(rcx_23)
                        char rdx_13 = 0
                        
                        if ((*rax_40)[6].b == 0)
                            zmm1_3 = var_1c8
                        else
                            zmm0_6 = zx.o(rax_40[1][0].q)
                            rdx_13 = 1
                            zmm1_3 = *rax_40
                            var_1b8 = zmm0_6.q
                            var_1b8.d = (zmm0_6 ^ zmm10).d
                        
                        rcx_36 = 0
                        char var_1d0_5 = 0
                        
                        if (rdx_13 != 0)
                            var_1d8 = var_1b8
                            var_1e8 = zmm1_3
                            rcx_36 = 1
                            var_1d0_6 = 1
                    else
                        int128_t* rax_39 = sub_140e111c0(rcx_23)
                        rcx_36 = 0
                        char var_1d0_4 = 0
                        
                        if (*(rax_39 + 0x18) != 0)
                            zmm1_3 = zx.o(rax_39[1].q)
                            var_1e8 = *rax_39
                            var_1d8 = zmm1_3.q
                            rcx_36 = 1
                            var_1d0_6 = 1
                    
                    if (rcx_36 == 0)
                        zmm6 = arg2[2]
                        var_1c8[0].q = var_290.q
                        var_1e8 = data_142d8c9b0
                        var_1d8.d = zmm8[0]
                        var_1d8:4.d = zmm7[0]
                        zmm7, zmm8, zmm9, zmm10, zmm11, zmm12 =
                            sub_1408b8950(&var_1ac, &var_1e8, &arg2[7])
                        char rcx_41 = arg2[0xd].b ^ var_194
                        zmm6[0] = zmm6[0] * zmm8[0]
                        zmm6[0] = zmm6[0] * zmm7[0]
                        var_194 ^= rcx_41 & 1
                        zmm6[0] = zmm6[0] f+ arg2[3]
                        var_1c8[2] = zmm6[0]
                        zmm6[0] = zmm6[0] f+ arg2[4]
                        var_1b8:4.d = zmm8[0]
                        float var_1b0_2 = zmm7[0]
                        var_1c8[3] = zmm6[0]
                        var_1b8.d = zmm6[0]
                    else
                        uint64_t* rdi_16 = *(rsi_1 + 0x10) + 0x1f8
                        
                        if (rdi_16[3].d != 0)
                            int64_t* rcx_37 = rdi_16[2]
                            
                            if (rcx_37 != 0 && (*(*rcx_37 + 0x28))(rcx_37) != 0)
                                int64_t* rcx_38
                                
                                if (rdi_16[3].d == 0)
                                    rcx_38 = nullptr
                                else
                                    rcx_38 = rdi_16[2]
                                
                                (*(*rcx_38 + 0x48))(rcx_38, &var_248)
                                *rdi_16 = var_248
                        
                        zmm0_6 = zx.o(*rdi_16)
                        int128_t* var_2a8_2 = &arg2[7]
                        var_278 = arg2[2][0]
                        zmm1_3 = arg2[4]
                        int128_t* var_2b0_2 = &var_278
                        var_250 = zmm0_6.q
                        int32_t var_274_1 = arg2[3].d
                        float var_270_1 = zmm1_3[0]
                        zmm9, zmm10, zmm11, zmm12 = sub_140dd8200(&var_1c8, &var_290, &var_288, 
                            &var_1e8, &var_250, var_2b0_2, var_2a8_2)
                    
                    int64_t* rdi_17 = *(rsi_1 + 0x18)
                    
                    if (rdi_17 != 0)
                        rdi_17[1].d += 1
                    
                    var_150 = *(rsi_1 + 0x10)
                    var_188 = var_1c8
                    float var_178_2[0x4] = var_1b8.o
                    int64_t var_158_2 = var_198
                    float var_168_2[0x4] = var_1a8
                    
                    if (rdi_17 != 0)
                        int32_t rax_47 = rdi_17[1].d
                        rdi_17[1].d = rax_47
                        
                        if (rax_47 == 0)
                            (**rdi_17)(rdi_17)
                            int32_t temp7_1 = *(rdi_17 + 0xc)
                            *(rdi_17 + 0xc) -= 1
                            
                            if (temp7_1 == 1)
                                (*(*rdi_17 + 8))(rdi_17, 1)
                    
                    sub_140d96150(&var_138, &var_188)
                    void* rcx_45 = var_100
                    var_100 = var_150
                    var_f8_2 = rdi_17
                    var_150 = rcx_45
                    int64_t* var_148_4 = rcx_21
                    
                    if (rcx_21 != 0)
                        rcx_21[1].d -= 1
                        
                        if (rcx_21[1].d == 1)
                            (**rcx_21)(rcx_21)
                            int32_t temp10_1 = *(rcx_21 + 0xc)
                            *(rcx_21 + 0xc) -= 1
                            
                            if (temp10_1 == 1)
                                (*(*rcx_21 + 8))(rcx_21, 1)
                    
                    zmm0_5.d = var_138:4.d.d f* var_138:8.d
                    zmm0_5.d = zmm0_5.d f+ var_128_1[0]
                    truncf(zmm0_5.d)
                    rdi_14 = int.d(zmm0_5.d)
                    zmm0_5.d = arg2[1].d f* arg2[2]
                    zmm0_5.d = zmm0_5.d f+ arg2[4]
                    int32_t var_23c
                    zmm0_5.d = zmm0_5.d f- var_23c
                    truncf(zmm0_5.d)
                else
                    bool cond:7_1 = data_143e20cf4 != 0
                    zmm10.d = zmm13.d f+ zmm8[0]
                    float var_258 = zmm11[0]
                    float var_254_1 = zmm9[0]
                    float var_21c_1 = zmm7[0]
                    int32_t var_224 = 0x3f800000
                    int32_t var_220_1 = zmm10.d
                    char rcx_24
                    uint128_t zmm0_3
                    uint128_t zmm1_2
                    char var_1d0_3
                    
                    if (cond:7_1)
                        uint128_t* rax_25 = sub_140e111c0(rcx_23)
                        char rdx_8 = 0
                        
                        if (*(rax_25 + 0x18) == 0)
                            zmm1_2 = var_1c8
                        else
                            zmm0_3 = zx.o(rax_25[1].q)
                            rdx_8 = 1
                            zmm1_2 = *rax_25
                            var_1b8 = zmm0_3.q
                            var_1b8.d = (zmm0_3 ^ data_142d3f780).d
                        
                        rcx_24 = 0
                        char var_1d0_2 = 0
                        
                        if (rdx_8 != 0)
                            var_1d8 = var_1b8
                            var_1e8 = zmm1_2
                            rcx_24 = 1
                            var_1d0_3 = 1
                    else
                        int128_t* rax_24 = sub_140e111c0(rcx_23)
                        rcx_24 = 0
                        char var_1d0_1 = 0
                        
                        if (*(rax_24 + 0x18) != 0)
                            zmm1_2 = zx.o(rax_24[1].q)
                            var_1e8 = *rax_24
                            var_1d8 = zmm1_2.q
                            rcx_24 = 1
                            var_1d0_3 = 1
                    
                    if (rcx_24 == 0)
                        zmm6 = arg2[2]
                        var_1c8[0].q = var_258.q
                        var_1e8 = data_142d8c9b0
                        var_1d8.d = zmm10.d
                        var_1d8:4.d = zmm7[0]
                        zmm7, zmm9, zmm10, zmm11, zmm12 =
                            sub_1408b8950(&var_1ac, &var_1e8, &arg2[7])
                        zmm1_2.d = zmm6.d f* zmm10.d
                        char rcx_29 = (arg2[0xd].b ^ var_194) & 1
                        zmm6[0] = zmm6[0] * zmm7[0]
                        var_194 ^= rcx_29
                        zmm1_2.d = zmm1_2.d f+ arg2[3]
                        var_1c8[2] = zmm6[0]
                        zmm6[0] = zmm6[0] f+ arg2[4]
                        var_1b8:4.d = zmm10.d
                        float var_1b0_1 = zmm7[0]
                        var_1c8[3] = zmm1_2.d
                        var_1b8.d = zmm6[0]
                    else
                        int64_t* rdi_11 = *(rsi_1 + 0x10) + 0x1f8
                        
                        if (rdi_11[3].d != 0)
                            int64_t* rcx_25 = rdi_11[2]
                            
                            if (rcx_25 != 0 && (*(*rcx_25 + 0x28))(rcx_25) != 0)
                                int64_t* rcx_26
                                
                                if (rdi_11[3].d == 0)
                                    rcx_26 = nullptr
                                else
                                    rcx_26 = rdi_11[2]
                                
                                int64_t var_218
                                (*(*rcx_26 + 0x48))(rcx_26, &var_218)
                                *rdi_11 = var_218
                        
                        zmm0_3 = zx.o(*rdi_11)
                        int128_t* var_2a8_1 = &arg2[7]
                        int32_t var_230 = arg2[2].d
                        zmm1_2 = arg2[4]
                        int128_t* var_2b0_1 = &var_230
                        var_250 = zmm0_3.q
                        int32_t var_22c_1 = arg2[3].d
                        int32_t var_228_1 = zmm1_2.d
                        zmm9, zmm11, zmm12 = sub_140dd8200(&var_1c8, &var_258, &var_224, &var_1e8, 
                            &var_250, var_2b0_1, var_2a8_1)
                    
                    int64_t* rdi_12 = *(rsi_1 + 0x18)
                    
                    if (rdi_12 != 0)
                        rdi_12[1].d += 1
                    
                    var_150 = *(rsi_1 + 0x10)
                    var_188 = var_1c8
                    uint128_t var_178_1 = var_1b8.o
                    uint64_t var_158_1 = var_198
                    float var_168_1[0x4] = var_1a8
                    
                    if (rdi_12 != 0)
                        int32_t rax_32 = rdi_12[1].d
                        rdi_12[1].d = rax_32
                        
                        if (rax_32 == 0)
                            (**rdi_12)(rdi_12)
                            int32_t temp9_1 = *(rdi_12 + 0xc)
                            *(rdi_12 + 0xc) -= 1
                            
                            if (temp9_1 == 1)
                                (*(*rdi_12 + 8))(rdi_12, 1)
                    
                    sub_140d96150(&var_138, &var_188)
                    void* rcx_33 = var_100
                    var_100 = var_150
                    var_f8_2 = rdi_12
                    var_150 = rcx_33
                    int64_t* var_148_2 = rcx_21
                    
                    if (rcx_21 != 0)
                        rcx_21[1].d -= 1
                        
                        if (rcx_21[1].d == 1)
                            (**rcx_21)(rcx_21)
                            int32_t temp11_1 = *(rcx_21 + 0xc)
                            *(rcx_21 + 0xc) -= 1
                            
                            if (temp11_1 == 1)
                                (*(*rcx_21 + 8))(rcx_21, 1)
                    
                    zmm0_5.d = var_138.d.d f* var_138:8.d
                    zmm0_5.d = zmm0_5.d f+ var_138:0xc.d
                    truncf(zmm0_5.d)
                    rdi_14 = int.d(zmm0_5.d)
                    zmm0_5.d = arg2[2].d f* *arg2
                    zmm0_5.d = zmm0_5.d f+ arg2[3]
                    zmm0_5.d = zmm0_5.d f- var_240
                    truncf(zmm0_5.d)
                    zmm10 = 0x80000000
                
                if (rdi_14 s> int.d(zmm0_5.d))
                    *(arg1 + 0x30c) = var_294_1
                    void* rcx_52 = *(*(arg1 + 0x2c8) + (rax_17 << 3))
                    int64_t* rbx_6 = *(rcx_52 + 0x18)
                    void* rdi_20 = *(rcx_52 + 0x10)
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d += 1
                    
                    sub_140e13cf0(rdi_20, &var_290)
                    bool cond:8_1 = data_143e20cf4 != 0
                    zmm7 = arg2[1]
                    zmm7[0] = zmm7[0] - var_28c_1
                    int32_t var_274_2 = zmm13.d
                    var_278 = 1f
                    zmm7[0] = zmm7[0] * 0.5f
                    float var_270_2 = zmm7[0]
                    char rcx_55
                    uint128_t zmm1_4
                    char var_1d0_9
                    
                    if (cond:8_1)
                        int128_t* rax_63 = sub_140e111c0(rdi_20 + 0x1c8)
                        char rdx_20 = 0
                        
                        if (*(rax_63 + 0x18) == 0)
                            zmm1_4 = var_1c8
                        else
                            uint128_t zmm0_8 = zx.o(rax_63[1].q)
                            rdx_20 = 1
                            zmm1_4 = *rax_63
                            var_1b8 = zmm0_8.q
                            var_1b8.d = (zmm0_8 ^ zmm10).d
                        
                        rcx_55 = 0
                        char var_1d0_8 = 0
                        
                        if (rdx_20 != 0)
                            var_1d8 = var_1b8
                            var_1e8 = zmm1_4
                            rcx_55 = 1
                            var_1d0_9 = 1
                    else
                        uint128_t* rax_62 = sub_140e111c0(rdi_20 + 0x1c8)
                        rcx_55 = 0
                        char var_1d0_7 = 0
                        
                        if (*(rax_62 + 0x18) != 0)
                            zmm1_4 = zx.o(rax_62[1].q)
                            var_1e8 = *rax_62
                            var_1d8 = zmm1_4.q
                            rcx_55 = 1
                            var_1d0_9 = 1
                    
                    if (rcx_55 == 0)
                        zmm6 = arg2[2]
                        var_1c8[0].q = var_290.q
                        var_1e8 = data_142d8c9b0
                        var_1d8.d = zmm13.d
                        var_1d8:4.d = zmm7[0]
                        int32_t zmm7_1 = sub_1408b8950(&var_1ac, &var_1e8, &arg2[7])
                        zmm1_4.d = zmm6.d f* zmm13.d
                        var_288.q = rdi_20
                        char rax_68 = var_194 ^ ((arg2[0xd].b ^ var_194) & 1)
                        zmm6[0] = zmm6[0] f* zmm7_1
                        char var_194_1 = rax_68
                        var_1c8[2] = zmm6[0]
                        var_1b8:4.d = zmm13.d
                        int32_t var_1b0_3 = zmm7_1
                        var_288:8.q = rbx_6
                        zmm1_4.d = zmm1_4.d f+ arg2[3]
                        zmm6[0] = zmm6[0] f+ arg2[4]
                        var_1c8[3] = zmm1_4.d
                        var_1b8.d = zmm6[0]
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d += 1
                        
                        var_150 = rdi_20
                        int64_t* var_148_6 = rbx_6
                        var_188 = var_1c8
                        uint128_t var_178_4 = var_1b8.o
                        uint64_t var_158_4 = var_198
                        float var_168_4[0x4] = var_1a8
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d += 1
                        
                        sub_140669d70(&var_288)
                    else
                        int64_t* rax_64 = sub_140eff780(rdi_20 + 0x1f8)
                        var_288.d = arg2[2].d
                        zmm1_4 = arg2[4]
                        int128_t* var_2b0_3 = &var_288
                        var_248 = *rax_64
                        var_288:4.d = arg2[3].d
                        var_288:8.d = zmm1_4.d
                        sub_140dd8200(&var_1c8, &var_290, &var_278, &var_1e8, &var_248, var_2b0_3, 
                            &arg2[7])
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d += 1
                        
                        var_150 = rdi_20
                        int64_t* var_148_5 = rbx_6
                        var_188 = var_1c8
                        uint128_t var_178_3 = var_1b8.o
                        uint64_t var_158_3 = var_198
                        float var_168_3[0x4] = var_1a8
                        
                        if (rbx_6 != 0)
                            int32_t rax_65 = rbx_6[1].d
                            rbx_6[1].d = rax_65
                            
                            if (rax_65 == 0)
                                (**rbx_6)(rbx_6)
                                int32_t temp13_1 = *(rbx_6 + 0xc)
                                *(rbx_6 + 0xc) -= 1
                                
                                if (temp13_1 == 1)
                                    (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    sub_140d99900(arg3, &var_188)
                    sub_140669d70(&var_150)
                    
                    if (rbx_6 != 0)
                        rbx_6[1].d -= 1
                        
                        if (rbx_6[1].d == 1)
                            (**rbx_6)(rbx_6)
                            int32_t temp14_1 = *(rbx_6 + 0xc)
                            *(rbx_6 + 0xc) -= 1
                            
                            if (temp14_1 == 1)
                                (*(*rbx_6 + 8))(rbx_6, 1)
                    
                    result = sub_140669d70(&var_100)
                    break
                
                if ((*arg3 & rbx_4) != 0)
                    void* rbx_5 = &arg3[8]
                    int64_t rdi_19 = sx.q(*(rbx_5 + 0x128))
                    int32_t rax_55 = (rdi_19 + 1).d
                    *(rbx_5 + 0x128) = rax_55
                    
                    if (rax_55 s> *(rbx_5 + 0x12c))
                        sub_140dbcd70(rbx_5, rdi_19.d)
                    
                    void* rax_56 = *(rbx_5 + 0x120)
                    int64_t rcx_49 = rdi_19 * 9
                    
                    if (rax_56 != 0)
                        rbx_5 = rax_56
                    
                    *(rbx_5 + (rcx_49 << 3)) = var_138
                    *(rbx_5 + (rcx_49 << 3) + 0x10) = var_128_1
                    *(rbx_5 + (rcx_49 << 3) + 0x20) = zmm0_2
                    *(rbx_5 + (rcx_49 << 3) + 0x30) = var_108_1
                    *(rbx_5 + (rcx_49 << 3) + 0x38) = var_100
                    *(rbx_5 + (rcx_49 << 3) + 0x40) = var_f8_2
                    
                    if (var_f8_2 != 0)
                        var_f8_2[1].d += 1
                
                zmm13.d = zmm13.d f+ zmm11[0]
                zmm15.d = zmm15.d f+ zmm9[0]
                result = sub_140669d70(&var_100)
                rcx_13 = var_294_1
                zmm8 = zx.o(0)
                zmm7 = var_268_1
                zmm9 = var_264_1
                zmm11 = var_260_1
                zmm6 = var_25c_1
            
            rcx_13 += 1
            r12_1 += 1
            var_294_1 = rcx_13
        while (r12_1 s< rax_17)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
