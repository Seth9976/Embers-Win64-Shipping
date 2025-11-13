// 函数: sub_141194150
// 地址: 0x141194150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x22c0)
void var_22d8
int64_t result = __security_cookie ^ &var_22d8
int64_t result_1 = result

if (arg2[1].d != 0)
    int64_t* r12_1 = *arg2
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    int64_t* var_2268_1 = r12_1
    
    if (data_143e6a6d0 != 0)
        int32_t rcx_1 = r12_1[0x2b4].d - r12_1[0x2b3].d
        int32_t rax_5 = *(r12_1 + 0xd6c) * rcx_1
        uint128_t zmm1 = _mm_cvtepi32_ps(zx.o((*(r12_1 + 0x15a4) - *(r12_1 + 0x159c)) * rcx_1))
        uint128_t zmm0
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_5 + r12_1[0x1ad].d)).d f/ zmm1.d
        data_1439b6048 = zmm0.d
    
    void* rax_7 = *r12_1
    int64_t rcx_3 = sx.q(data_143e6a68c)
    int64_t* var_2280_1 = &data_143ec4c60
    int64_t* rdi_1 = &data_143ec4c60
    char var_2287_1
    
    if (rcx_3.d u> 0xb)
        var_2287_1 = 0
    else
        switch (rcx_3)
            case 0
                var_2287_1 = 0
            case 1
                var_2287_1 = 1
            case 2
                var_2287_1 = 2
            case 3
                var_2287_1 = 4
            case 4
                var_2287_1 = 5
            case 5
                var_2287_1 = 3
            case 6
                var_2287_1 = 6
            case 7
                var_2287_1 = 7
            case 8
                var_2287_1 = 8
            case 9
                var_2287_1 = 9
            case 0xa
                var_2287_1 = 0xa
            case 0xb
                var_2287_1 = 0xb
    
    result = sx.q(data_143e6a688)
    uint64_t r15
    
    if (result.d u> 0x13)
        r15.b = 0
    else
        switch (result)
            case 0
                r15.b = 0
            case 1
                r15.b = 1
            case 2
                r15.b = 2
            case 3
                r15.b = 4
            case 4
                r15.b = 3
            case 5
                r15.b = 5
            case 6
                r15.b = 7
            case 7
                r15.b = 6
            case 8
                r15.b = 8
            case 9
                r15.b = 9
            case 0xa
                r15.b = 0xa
            case 0xb
                r15.b = 0xb
            case 0xc
                r15.b = 0xc
            case 0xd
                r15.b = 0xd
            case 0xe
                r15.b = 0xe
            case 0xf
                r15.b = 0xf
            case 0x10
                r15.b = 0x10
            case 0x11
                r15.b = 0x11
            case 0x12
                r15.b = 0x12
            case 0x13
                r15.b = 0x13
    
    char var_2288_1 = r15.b
    void*** var_21d8
    void*** var_21d0
    void*** var_21c8
    void*** var_21c0
    int128_t zmm7
    int128_t zmm8
    int128_t zmm9
    
    if (arg3 != 0)
        if (data_143e6a690 s> 0)
        label_141194399:
            void var_1590
            sub_1419928d0(&var_1590, arg1)
            void*** rax_9 =
                sub_1410fccd0(&var_1590, sub_14139d440(&data_143ec4c60), SceneColorTexture", 0)
            bool cond:2_1 = data_143e6a690 s<= 0
            void*** var_21b8 = rax_9
            
            if (not(cond:2_1))
                zmm7, zmm8, zmm9 = sub_141184050(&var_1590, r12_1, &var_21b8)
            
            if (arg3[4] != 0 && arg3[5] != 0)
                if (arg3[6] != 0 && arg3[7] != 0)
                    var_21d8 = sub_141193740(&var_1590, &arg3[4], u"HairDebugShadingPoint", 0)
                    var_21d0 = sub_141193740(&var_1590, &arg3[5], HairDebugShadingPointCounter", 0)
                    var_21c8 = sub_141193740(&var_1590, &arg3[6], u"HairDebugSample", 0)
                    var_21c0 = sub_141193740(&var_1590, &arg3[7], u"HairDebugSampleCounter", 0)
                    int128_t var_1c18_1 = var_21c8.o
                    int128_t var_1c28 = var_21d8.o
                    zmm7, zmm8, zmm9 = sub_1411842f0(&var_1590, r12_1, &var_1c28, &var_21b8)
                
                rdi_1 = var_2280_1
            
            sub_14199ef00(&var_1590)
            result = sub_1410eb9e0(&var_1590)
        else if (arg3[4] != 0 && arg3[5] != 0 && arg3[6] != 0 && arg3[7] != 0)
            goto label_141194399
    
    int128_t zmm14 = 0x3f800000
    int16_t* r14_1 = nullptr
    int32_t var_22b8
    int32_t var_22b0
    int32_t var_22a8
    int32_t* var_2270
    int32_t** var_2248
    
    if (r15.b == 1)
        void* rdx_10 = *(*sub_14139d440(rdi_1) + 8)
        void* var_21b0 = rdx_10
        void* rax_15 = rdx_10
        
        if (rdx_10 != 0)
            *(rdx_10 + 8) += 1
            rax_15 = var_21b0
        
        int64_t var_20f0 = 0
        void** const var_20f8 = &data_142f18ee0
        void* var_20e8 = rax_15
        
        if (rdx_10 != 0)
            *(rdx_10 + 8) += 1
        
        int32_t var_20dc_1 = *(r12_1 + 0x15a4) - *(r12_1 + 0x159c)
        int32_t var_20e0_1 = r12_1[0x2b4].d - r12_1[0x2b3].d
        sub_1405d1550(&var_21b0)
        void var_1a28
        int128_t zmm10_1
        int32_t zmm11_1
        zmm10_1, zmm11_1, zmm14 = sub_1423fa870(&var_1a28, &var_20f8, 0, (*(rax_7 + 0x38))[0], 
            *(rax_7 + 0x30), *(rax_7 + 0x34), r12_1[0x2a9].d, 0x3f800000)
        int128_t zmm1_3 = data_142f2cb30
        int128_t var_1ee8 = data_142f2cb40
        int128_t var_1d20 = data_142f2cb20
        int128_t var_20a8 = zmm1_3
        void* var_2158
        int16_t* var_1f08
        sub_140a2e390(&var_1f08, ----------------------------------------------------------------", 
            sub_14118cbb0(&var_2158))
        int16_t* const rbx_2 = &data_142d40450
        int16_t* rdi_3 = var_1f08
        int32_t var_1f00
        
        if (var_1f00 != 0)
            rbx_2 = rdi_3
        
        var_22a8.q = &data_14399f5e0
        var_22b0.q = &var_20a8
        var_22b8.q = sub_1423de050()
        sub_142409910(&var_1a28, zmm10_1, 0x42500000, rbx_2, var_22b8, var_22b0, var_22a8)
        int32_t i_8
        int32_t i_7 = i_8
        int16_t* var_1ef8
        sub_140a2e390(&var_1ef8, u"Registered component count : %d", zx.q(i_7))
        
        if (rdi_3 != 0)
            sub_140a74f90(rdi_3)
        
        int16_t* const rbx_3 = &data_142d40450
        int16_t* rsi_2 = var_1ef8
        int32_t var_1ef0
        
        if (var_1ef0 != 0)
            rbx_3 = rsi_2
        
        var_22a8.q = &data_14399f5e0
        var_22b0.q = &var_20a8
        var_22b8.q = sub_1423de050()
        int128_t zmm6_1 =
            sub_142409910(&var_1a28, zmm10_1, 0x42840000, rbx_3, var_22b8, var_22b0, var_22a8)
        void* rdi_4 = var_2158
        void* i = sx.q(i_7) * 0x38 + rdi_4
        
        if (rdi_4 != i)
            int32_t* r15_1 = rdi_4 + 0x10
            var_2270 = r15_1
            
            do
                int64_t* rcx_28 = *(rax_7 + 0x20)
                void* rax_26 = (*(*rcx_28 + 0x240))(rcx_28)
                int64_t r13_1 = sx.q(r15_1[-3])
                uint32_t rbx_4 = zx.d(*(rax_26 + 0x11a))
                var_2248.d = rbx_4
                int16_t* const r8_4
                
                if (r15_1[4] == 0)
                    r8_4 = &data_142d40450
                else
                    r8_4 = *(r15_1 + 8)
                
                int16_t* const rdx_12
                
                if (*r15_1 == 0)
                    rdx_12 = &data_142d40450
                else
                    rdx_12 = *(r15_1 - 8)
                
                if (r13_1.d u<= 7)
                    switch (r13_1)
                        case 7
                            nop
                
                var_22a8.q = r8_4
                var_22b0.q = rdx_12
                var_22b8 = r15_1[8]
                int16_t* var_2198
                sub_140a2e390(&var_2198, 
                    * Id:%d | WorldType:%s | Group count : %d | Asset : %s | Skeletal : %s ", 
                    zx.q(r15_1[-4]))
                
                if (rsi_2 != 0)
                    sub_140a74f90(rsi_2)
                
                int32_t var_2190
                int32_t rax_27 = var_2190
                rsi_2 = var_2198
                int128_t* rdi_5 = &var_20a8
                var_2198 = nullptr
                int16_t* rbx_5 = &data_142d40450
                var_2190.q = 0
                
                if (r13_1.d != rbx_4)
                    rdi_5 = &var_1ee8
                
                zmm6_1.d = zmm6_1.d f+ zmm11_1
                
                if (rax_27 != 0)
                    rbx_5 = rsi_2
                
                var_22a8.q = &data_14399f5e0
                var_22b0.q = rdi_5
                var_22b8.q = sub_1423de050()
                zmm6_1 =
                    sub_142409910(&var_1a28, zmm10_1, zmm6_1, rbx_5, var_22b8, var_22b0, var_22a8)
                int64_t* rdi_6 = *(r15_1 + 0x18)
                void* rax_30 = &rdi_6[sx.q(r15_1[8]) * 3]
                
                if (rdi_6 != rax_30)
                    int128_t* r12_2 = &var_1d20
                    
                    if (r13_1.d != var_2248.d)
                        r12_2 = &var_1ee8
                    
                    do
                        wchar16 const* const rdx_13 = u"False"
                        wchar16 const* const rcx_35 = u"False"
                        float zmm1_7[0x2] = *rdi_6
                        wchar16 const* const rax_31 = u"False"
                        int32_t var_2290_1 = *(rdi_6 + 0x14)
                        
                        if (*(rdi_6 + 0x12) != 0)
                            rdx_13 = u"True"
                        
                        uint64_t r8_7 = zx.q(*(rdi_6 + 0xc))
                        wchar16 const* const var_2298_1 = rdx_13
                        
                        if (*(rdi_6 + 0x11) != 0)
                            rcx_35 = u"True"
                        
                        int32_t var_22a0_1
                        var_22a0_1.q = rcx_35
                        
                        if (rdi_6[2].b != 0)
                            rax_31 = u"True"
                        
                        rdi_6[1].d
                        var_22a8.q = rax_31
                        var_22b0.q = _mm_cvtps_pd(*(rdi_6 + 4))
                        var_22b8.q = _mm_cvtps_pd(zmm1_7)
                        int16_t* var_2188
                        sub_140a2e390(&var_2188, 
                                    |> CurveCount : %d | VertexCount : %d | MaxRadius : %f | MaxLength : "
                        " | Skinned: %s | Binding: %s | Simulation: %s| LOD count : %d", r8_7)
                        
                        if (rsi_2 != 0)
                            sub_140a74f90(rsi_2)
                        
                        zmm6_1.d = zmm6_1.d f+ zmm11_1
                        rsi_2 = var_2188
                        int16_t* rbx_6 = &data_142d40450
                        var_2188 = nullptr
                        int32_t var_2180
                        
                        if (var_2180 != 0)
                            rbx_6 = rsi_2
                        
                        var_2180.q = 0
                        var_22a8.q = &data_14399f5e0
                        var_22b0.q = r12_2
                        var_22b8.q = sub_1423de050()
                        zmm6_1 = sub_142409910(&var_1a28, zmm10_1, zmm6_1, rbx_6, var_22b8, 
                            var_22b0, var_22a8)
                        rdi_6 = &rdi_6[3]
                    while (rdi_6 != rax_30)
                    
                    r15_1 = var_2270
                
                r15_1 = &r15_1[0xe]
                var_2270 = r15_1
            while (&r15_1[-4] != i)
            
            i_7 = i_8
            rdi_4 = var_2158
            r12_1 = var_2268_1
        
        zmm7, zmm8, zmm9 = sub_14240e4b0(&var_1a28, arg1, 0, 0)
        
        if (i_7 != 0)
            void* rbx_7 = rdi_4 + 0x18
            int32_t i_1
            
            do
                int64_t rcx_40 = *(rbx_7 + 0x10)
                
                if (rcx_40 != 0)
                    sub_140a74f90(rcx_40)
                
                int64_t rcx_41 = *rbx_7
                
                if (rcx_41 != 0)
                    sub_140a74f90(rcx_41)
                
                int64_t rcx_42 = *(rbx_7 - 0x10)
                
                if (rcx_42 != 0)
                    sub_140a74f90(rcx_42)
                
                rbx_7 += 0x38
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        
        if (rdi_4 != 0)
            sub_140a74f90(rdi_4)
        
        if (rsi_2 != 0)
            sub_140a74f90(rsi_2)
        
        sub_1423fef60(&var_1a28)
        sub_1405d1550(&var_20e8)
        var_20f8 = &data_142f18c08
        result = sub_1405d1550(&var_20f0)
        r15 = zx.q(var_2288_1)
    
    void** rbx_15 = arg3
    
    if (rbx_15 != 0)
        int128_t var_78_1 = zmm9
        zmm9 = zx.o(0)
        void* rdi_9
        
        if (r15.b != 1)
            rdi_9 = arg1
            
            if (r15.b == 3 && rbx_15[3].d u> 0)
                void var_f88
                sub_1419928d0(&var_f88, rdi_9)
                int32_t** rbx_12 = rbx_15[2]
                var_2248 = rbx_12
                int32_t* r15_5 = *rbx_12
                var_2270 = r15_5
                void* r12_4 = sx.q(rbx_12[1].d) * 0xe0 + r15_5
                void* var_2258_1 = r12_4
                
                if (r15_5 != r12_4)
                    do
                        int64_t* rdi_11 = rbx_12[4]
                        
                        if (rdi_11 != 0)
                            (*(*rdi_11 + 0x30))(rdi_11)
                        
                        int64_t* rbx_13 = rbx_12[5]
                        
                        if (rbx_13 != 0)
                            (*(*rbx_13 + 0x30))(rbx_13)
                        
                        if (rdi_11 != 0)
                            if (rbx_13 != 0)
                                void* rsi_6 = *(r15_5 + 0x70)
                                void* r13_5 = sx.q(r15_5[0x1e]) * 0xc0 + rsi_6
                                
                                if (rsi_6 != r13_5)
                                    do
                                        if (*(rsi_6 + 0x60) == data_143e6a684)
                                            int64_t* rax_57 = sub_14139d440(var_2280_1)
                                            int64_t* r15_6 = *rax_57
                                            int32_t var_21f0
                                            int64_t var_ec8
                                            sub_140865c40(&var_ec8, &var_21f0, r15_6)
                                            int64_t rcx_80 = sx.q(var_21f0)
                                            void* const rdx_23
                                            
                                            if (rcx_80.d == 0xffffffff)
                                                rdx_23 = nullptr
                                            else
                                                rdx_23 = var_ec8 + rcx_80 * 0x18
                                            
                                            int64_t* rax_58 = rdx_23 + 8
                                            
                                            if (rdx_23 == 0)
                                                rax_58 = nullptr
                                            
                                            void*** rcx_82
                                            
                                            if (rax_58 == 0)
                                                int128_t* rax_60 = (*(*r15_6 + 0x10))(r15_6)
                                                int64_t* var_f80
                                                void*** rax_61 = sub_14081d830(0x88, var_f80, 1, 0)
                                                void*** rcx_84 = rax_61
                                                
                                                if (rax_61 == 0)
                                                    rcx_84 = nullptr
                                                else
                                                    rcx_84[2] = 0
                                                    rcx_84[1] = u"SceneColorTexture"
                                                    rcx_84[3].b = 0
                                                    *(rcx_84 + 0x1c) = 0
                                                    rcx_84[4] = 0
                                                    rcx_84[5].w = 0x200
                                                    *rcx_84 = &data_142f11960
                                                    *(rcx_84 + 0x30) = *rax_60
                                                    *(rcx_84 + 0x40) = rax_60[1]
                                                    *(rcx_84 + 0x50) = rax_60[2]
                                                    *(rcx_84 + 0x60) = rax_60[3]
                                                    int128_t zmm0_8 = rax_60[4]
                                                    rcx_84[0x10] = 0
                                                    *(rcx_84 + 0x70) = zmm0_8
                                                
                                                int64_t rax_62 = *rax_57
                                                void*** var_2208 = rcx_84
                                                rcx_84[0x10] = rax_62
                                                int64_t* var_1eb0_1 = rax_57
                                                var_2208[2] = *(*rax_57 + 0x10)
                                                void**** var_1eb8 = &var_2208
                                                void var_20cc
                                                void var_f68
                                                sub_14107bc20(&var_f68, &var_20cc, &var_1eb8, 
                                                    nullptr)
                                                int64_t var_2088 = *rax_57
                                                int64_t* var_1ea8 = &var_2088
                                                void**** var_1ea0_1 = &var_2208
                                                void var_20d0
                                                sub_14107baa0(&var_ec8, &var_20d0, &var_1ea8, 
                                                    nullptr)
                                                rcx_82 = var_2208
                                            else
                                                rcx_82 = *rax_58
                                            
                                            void*** var_20c8 = rcx_82
                                            var_22b0.q = &var_20c8
                                            var_22b8.q = &var_2248[2]
                                            int128_t var_1d00 = zx.o(0)
                                            zmm7, zmm8, zmm9 = sub_141180600(&var_f88, var_2268_1, 
                                                &var_1d00, rsi_6, var_22b8, var_22b0)
                                        
                                        rsi_6 += 0xc0
                                    while (rsi_6 != r13_5)
                                    
                                    r15_5 = var_2270
                                    r12_4 = var_2258_1
                                
                                (*(*rbx_13 + 0x38))(rbx_13)
                            
                            (*(*rdi_11 + 0x38))(rdi_11)
                        else if (rbx_13 != 0)
                            (*(*rbx_13 + 0x38))(rbx_13)
                        
                        rbx_12 = var_2248
                        r15_5 = &r15_5[0x38]
                        var_2270 = r15_5
                    while (r15_5 != r12_4)
                    
                    rdi_9 = arg1
                
                sub_14199ef00(&var_f88)
                sub_1410eb9e0(&var_f88)
                r15 = zx.q(var_2288_1)
                rbx_15 = arg3
        else
            if (rbx_15[1].d u> 0)
                void var_330
                sub_1419928d0(&var_330, arg1)
                var_22b0.q = &var_2280_1[9]
                var_22b8.q = rbx_15[2]
                sub_141180f50(&var_330, r12_1, zx.q(r15.b), *rbx_15, var_22b8, var_22b0)
                sub_14199ef00(&var_330)
                sub_1410eb9e0(&var_330)
            
            int64_t* r15_2 = rbx_15[2]
            int64_t* var_1d58_1 = r12_1
            void** const var_1d60 = &data_142f29fd0
            int64_t* var_1d50_1 = r12_1
            int64_t var_1d48_1 = (zx.o(0)).q
            int64_t var_1d38_1 = 0
            
            if (r15_2[0x18] != 0)
                int64_t* rbx_8 = *r15_2
                void* rsi_4 = sx.q(r15_2[1].d) * 0xe0 + rbx_8
                
                if (rbx_8 != rsi_4)
                    int64_t* rdi_7 = rbx_8 + 0xc
                    
                    do
                        int32_t rax_38 = rbx_8[1].d
                        uint64_t var_2048 = *rbx_8
                        int32_t var_2040_1 = rax_38
                        uint64_t var_203c_1 = *rdi_7
                        int32_t var_2034_1 = rdi_7[1].d
                        char var_2030_1 = 1
                        void var_1d10
                        sub_140acc920(&var_1d10, &data_14399f638)
                        var_22a8.b = 0
                        zmm9, zmm14 = sub_14229ae30(&var_1d60, &var_2048, &var_1d10, 0, zmm9.d, 
                            zmm9.d, var_22a8.b)
                        rbx_8 = &rbx_8[0x1c]
                        rdi_7 = &rdi_7[0x1c]
                    while (rbx_8 != rsi_4)
            
            void*** rdx_18 = *(*sub_14139d440(var_2280_1) + 8)
            void*** var_21a8 = rdx_18
            void*** rax_41 = rdx_18
            
            if (rdx_18 != 0)
                rdx_18[1].d += 1
                rax_41 = var_21a8
            
            var_21d0 = nullptr
            var_21d8 = &data_142f18ee0
            var_21c8 = rax_41
            
            if (rdx_18 != 0)
                rdx_18[1].d += 1
            
            var_21c0:4.d = *(r12_1 + 0x15a4) - *(r12_1 + 0x159c)
            var_21c0.d = r12_1[0x2b4].d - r12_1[0x2b3].d
            sub_1405d1550(&var_21a8)
            void var_1918
            int64_t r8_10
            int128_t zmm6_2
            int128_t zmm10_2
            int32_t zmm11_2
            r8_10, zmm6_2, zmm10_2, zmm11_2, zmm14 = sub_1423fa870(&var_1918, &var_21d8, 0, 
                (*(rax_7 + 0x38))[0], *(rax_7 + 0x30), *(rax_7 + 0x34), r12_1[0x2a9].d, zmm14.d)
            int128_t var_2098 = data_142f2cb30
            int16_t* var_1ed8
            sub_140a2e390(&var_1ed8, 
                ----------------------------------------------------------------", r8_10)
            zmm6_2.d = zmm6_2.d f+ zmm11_2
            int16_t* rdi_8 = var_1ed8
            int16_t* const rbx_9 = &data_142d40450
            int32_t var_1ed0
            
            if (var_1ed0 != 0)
                rbx_9 = rdi_8
            
            var_22a8.q = &data_14399f5e0
            var_22b0.q = &var_2098
            var_22b8.q = sub_1423de050()
            int128_t zmm6_3 =
                sub_142409910(&var_1918, zmm10_2, zmm6_2, rbx_9, var_22b8, var_22b0, var_22a8)
            int16_t* var_1ec8
            sub_140a2e390(&var_1ec8, u"Macro group count : %d", zx.q(r15_2[1].d))
            
            if (rdi_8 != 0)
                sub_140a74f90(rdi_8)
            
            zmm6_3.d = zmm6_3.d f+ zmm11_2
            int16_t* rsi_5 = var_1ec8
            int16_t* const rbx_10 = &data_142d40450
            int32_t var_1ec0
            
            if (var_1ec0 != 0)
                rbx_10 = rsi_5
            
            var_22a8.q = &data_14399f5e0
            var_22b0.q = &var_2098
            var_22b8.q = sub_1423de050()
            int128_t zmm6_4 =
                sub_142409910(&var_1918, zmm10_2, zmm6_3, rbx_10, var_22b8, var_22b0, var_22a8)
            void* i_2 = *r15_2
            
            for (void* r15_4 = sx.q(r15_2[1].d) * 0xe0 + i_2; i_2 != r15_4; i_2 += 0xe0)
                uint64_t r8_12 = zx.q(*(i_2 + 0xcc))
                _mm_cvtps_pd(*(i_2 + 0xb8))
                int16_t* var_2178
                sub_140a2e390(&var_2178, u" %d - Bound Radus: %f.2m (%dx%d)", r8_12)
                
                if (rsi_5 != 0)
                    sub_140a74f90(rsi_5)
                
                zmm6_4.d = zmm6_4.d f+ zmm11_2
                rsi_5 = var_2178
                int16_t* rbx_11 = &data_142d40450
                var_2178 = nullptr
                int32_t var_2170
                
                if (var_2170 != 0)
                    rbx_11 = rsi_5
                
                var_2170.q = 0
                var_22a8.q = &data_14399f5e0
                var_22b0.q = &var_2098
                var_22b8.q = sub_1423de050()
                zmm6_4 =
                    sub_142409910(&var_1918, zmm10_2, zmm6_4, rbx_11, var_22b8, var_22b0, var_22a8)
            
            rdi_9 = arg1
            zmm7, zmm8, zmm9 = sub_14240e4b0(&var_1918, rdi_9, 0, 0)
            
            if (rsi_5 != 0)
                sub_140a74f90(rsi_5)
            
            sub_1423fef60(&var_1918)
            sub_1405d1550(&var_21c8)
            var_21d8 = &data_142f18c08
            sub_1405d1550(&var_21d0)
            
            if (var_1d48_1 != 0)
                int32_t temp2_1 = *(var_1d48_1 + 8)
                *(var_1d48_1 + 8) -= 1
                
                if (temp2_1 == 1)
                    (**var_1d48_1)(var_1d48_1, 1)
            
            r15 = zx.q(var_2288_1)
            rbx_15 = arg3
        
        char var_2286_1
        
        if (sub_1411e7de0() != 0 && r15.b == 4)
            void var_d10
            sub_1419928d0(&var_d10, rdi_9)
            void*** var_21a0 =
                sub_1410fccd0(&var_d10, sub_14139d440(var_2280_1), SceneColorTexture", 0)
            
            if (rbx_15[3].d u> 0)
                int64_t* rsi_7 = rbx_15[2]
                void* i_3 = *rsi_7
                
                for (void* rdi_13 = sx.q(rsi_7[1].d) * 0xe0 + i_3; i_3 != rdi_13; i_3 += 0xe0)
                    var_22b0.q = &var_21a0
                    var_22b8.q = 0
                    sub_141180600(&var_d10, var_2268_1, i_3 + 0xbc, nullptr, var_22b8, var_22b0)
                
                int32_t* rbx_16 = var_2268_1
                void var_1cf0
                sub_1411dc520(&var_1cf0, &rbx_16[0x566], rsi_7)
                var_22b0.q = &var_21a0
                var_22b8.q = 0
                zmm7, zmm8, zmm9 =
                    sub_141180600(&var_d10, rbx_16, &var_1cf0, nullptr, var_22b8, var_22b0)
                rbx_15 = arg3
                rdi_9 = arg1
            
            sub_14199ef00(&var_d10)
            sub_1410eb9e0(&var_d10)
            var_2286_1 = 0
        else if ((r15 - 8).b u<= 3)
            var_2286_1 = 1
        else
            var_2286_1 = 0
        
        void* rbx_17
        
        if ((r15 - 2).b u<= 1 && rbx_15[3].d u> 0)
            rbx_17 = rbx_15[2]
        
        int64_t* r12_6
        
        if ((r15 - 2).b u> 1 || rbx_15[3].d u<= 0 || *(rbx_17 + 0x1c) == 0)
            r12_6 = var_2268_1
        else
            void var_820
            sub_1419928d0(&var_820, rdi_9)
            r12_6 = var_2268_1
            void*** var_20c0 =
                sub_1410fccd0(&var_820, sub_14139d440(var_2280_1), SceneColorTexture", 0)
            zmm7 = sub_141181fc0(&var_820, r12_6, rbx_17, &var_20c0)
            sub_14199ef00(&var_820)
            sub_1410eb9e0(&var_820)
        
        int128_t var_58_1 = zmm7
        void** const var_2078 = &data_142f29fd0
        int128_t var_68_1 = zmm8
        int64_t* var_2070_1 = r12_6
        int64_t* var_2068_1 = r12_6
        int64_t var_2050_1 = 0
        int64_t var_2060_1 = (zx.o(0)).q
        float zmm2[0x4]
        float zmm3[0x4]
        
        if (r15.b != 2)
            if (r15.b == 3 && arg3[3].d u> 0)
                void** rax_83 = arg3[2]
                
                if (*(rax_83 + 0x1c) == 0)
                    void* i_4 = *rax_83
                    int32_t r12_9 = data_143e6a684
                    
                    if (r12_9 s<= 0)
                        r12_9 = 0
                    
                    for (void* r13_7 = sx.q(rax_83[1].d) * 0xe0 + i_4; i_4 != r13_7; i_4 += 0xe0)
                        int128_t* rbx_23 = *(i_4 + 0x70)
                        void* rsi_11 = &rbx_23[sx.q(*(i_4 + 0x78)) * 0xc]
                        
                        if (rbx_23 != rsi_11)
                            float (* rdi_15)[0x4] = &rbx_23[0xb]
                            
                            do
                                if (rdi_15[-5][0] == r12_9)
                                    uint32_t var_1b78[0x4][0x4]
                                    int32_t zmm9_2 = sub_141f853c0(&var_2078, 
                                        sub_140631b10(rbx_23, &var_1b78), data_14399f654, 0)
                                    void var_1cd0
                                    sub_140acc920(&var_1cd0, &data_14399f644)
                                    zmm3 = rdi_15[-1][0]
                                    float zmm7_2[0x4] = (*rdi_15)[-2]
                                    zmm2 = *rdi_15
                                    int64_t zmm6_6 = (*rdi_15)[-3]
                                    zmm7_2[0] = zmm7_2[0] + (*rdi_15)[1]
                                    zmm7_2[0] = zmm7_2[0] - (*rdi_15)[1]
                                    var_22a8.b = 0
                                    zmm3[0] = zmm3[0] - (*rdi_15)[-1]
                                    zmm3[0] = zmm3[0] + (*rdi_15)[-1]
                                    float var_2238_2 = zmm7_2[0]
                                    int64_t zmm8_2
                                    zmm8_2.d = zmm2[0].q.d f+ zmm6_6.d
                                    zmm6_6.d = zmm6_6.d f- zmm2[0]
                                    float var_2020_1 = zmm7_2[0]
                                    int64_t var_2028 = (_mm_unpacklo_ps(zmm3, zmm6_6)).q
                                    int64_t var_201c_1 = (_mm_unpacklo_ps(zmm3, zmm8_2)).q
                                    float var_2014_1 = var_2238_2
                                    char var_2010_1 = 1
                                    zmm9, zmm14 = sub_14229ae30(&var_2078, &var_2028, &var_1cd0, 0, 
                                        zmm9_2, zmm9_2, var_22a8.b)
                                
                                rbx_23 = &rbx_23[0xc]
                                rdi_15 = &rdi_15[0xc]
                            while (rbx_23 != rsi_11)
                    
                    r12_6 = var_2268_1
        else if (arg3[3].d u> 0)
            int64_t* rax_77 = arg3[2]
            
            if (*(rax_77 + 0x1c) == 0)
                void* i_5 = *rax_77
                
                for (void* r12_8 = sx.q(rax_77[1].d) * 0xe0 + i_5; i_5 != r12_8; i_5 += 0xe0)
                    int128_t* rdi_14 = *(i_5 + 0x70)
                    void* rbx_21 = &rdi_14[sx.q(*(i_5 + 0x78)) * 0xc]
                    
                    if (rdi_14 != rbx_21)
                        void* r15_8 = &rdi_14[0xb]
                        
                        do
                            uint32_t var_1bb8[0x4][0x4]
                            int32_t zmm9_1 = sub_141f853c0(&var_2078, 
                                sub_140631b10(rdi_14, &var_1bb8), data_14399f654, 0)
                            void var_1ce0
                            sub_140acc920(&var_1ce0, &data_14399f644)
                            zmm3 = *(r15_8 - 0x10)
                            float zmm7_1[0x4] = *(r15_8 - 8)
                            int64_t zmm6_5 = *(r15_8 - 0xc)
                            var_22a8.b = 0
                            zmm7_1[0] = zmm7_1[0] f+ *(r15_8 + 4)
                            zmm7_1[0] = zmm7_1[0] f- *(r15_8 + 4)
                            zmm3[0] = zmm3[0] f- *(r15_8 - 4)
                            zmm3[0] = zmm3[0] f+ *(r15_8 - 4)
                            float var_2238_1 = zmm7_1[0]
                            int64_t zmm8_1 = zmm6_5
                            zmm6_5.d = zmm6_5.d f- *r15_8
                            zmm8_1.d = zmm8_1.d f+ *r15_8
                            float var_1fe0_1 = zmm7_1[0]
                            int64_t var_1fe8 = (_mm_unpacklo_ps(zmm3, zmm6_5)).q
                            int64_t var_1fdc_1 = (_mm_unpacklo_ps(zmm3, zmm8_1)).q
                            float var_1fd4_1 = var_2238_1
                            char var_1fd0_1 = 1
                            zmm9, zmm14 = sub_14229ae30(&var_2078, &var_1fe8, &var_1ce0, 0, zmm9_1, 
                                zmm9_1, var_22a8.b)
                            rdi_14 = &rdi_14[0xc]
                            r15_8 += 0xc0
                        while (rdi_14 != rbx_21)
                
                r12_6 = var_2268_1
        
        void** rdi_16 = arg3
        
        if (var_2286_1 != 0 && rdi_16[3].d u> 0)
            int64_t* rax_89 = rdi_16[2]
            
            if (rax_89[0x18] != 0)
                int64_t* i_6 = *rax_89
                
                for (void* rdi_18 = sx.q(rax_89[1].d) * 0xe0 + i_6; i_6 != rdi_18; i_6 = &i_6[0x1c])
                    int32_t rax_91 = i_6[1].d
                    uint64_t var_2008 = *i_6
                    int32_t var_2000_1 = rax_91
                    uint64_t var_1ffc_1 = *(i_6 + 0xc)
                    int32_t var_1ff4_1 = *(i_6 + 0x14)
                    char var_1ff0_1 = 1
                    void var_1cc0
                    sub_140acc920(&var_1cc0, &data_14399f638)
                    var_22a8.b = 0
                    sub_14229ae30(&var_2078, &var_2008, &var_1cc0, 0, zmm9.d, zmm9.d, var_22a8.b)
                    uint32_t var_1bf8[0x4][0x4]
                    uint32_t (* rax_93)[0x4]
                    rax_93, zmm14 = sub_140631b10(&i_6[6], &var_1bf8)
                    zmm9 = sub_141f853c0(&var_2078, rax_93, data_14399f650, 0)
                
                rdi_16 = arg3
        
        if (var_2060_1 != 0)
            int32_t temp1_1 = *(var_2060_1 + 8)
            *(var_2060_1 + 8) -= 1
            
            if (temp1_1 == 1)
                (**var_2060_1)(var_2060_1, 1)
        
        if (var_2288_1 - 5 u<= 2 || var_2288_1 - 0xd u<= 6)
            void var_a98
            sub_1419928d0(&var_a98, arg1)
            void*** var_20b8 =
                sub_1410fccd0(&var_a98, sub_14139d440(var_2280_1), SceneColorTexture", 0)
            
            if (rdi_16[1].d u> 0)
                void* rsi_12 = *rdi_16
                int64_t rdi_19 = rdi_16[2]
                var_22b0.q = &var_20b8
                var_22b8.q = &var_2280_1[9]
                sub_1411809d0(&var_a98, r12_6, var_2288_1, rsi_12, var_22b8, var_22b0)
                var_22b0.q = &var_2280_1[9]
                var_22b8.q = rdi_19
                sub_141180f50(&var_a98, r12_6, zx.q(var_2288_1), rsi_12, var_22b8, var_22b0)
                rdi_16 = arg3
            
            sub_14199ef00(&var_a98)
            sub_1410eb9e0(&var_a98)
        
        void* r15_10 = arg1
        int64_t* rbx_26
        
        if (var_2286_1 != 0 && rdi_16[3].d u> 0)
            rbx_26 = rdi_16[2]
        
        int64_t* rsi_13
        
        if (var_2286_1 == 0 || rdi_16[3].d u<= 0 || rbx_26[0x18] == 0)
            rsi_13 = var_2280_1
        else
            void var_5a8
            sub_1419928d0(&var_5a8, r15_10)
            rsi_13 = var_2280_1
            void*** var_20b0 = sub_1410fccd0(&var_5a8, sub_14139d440(rsi_13), SceneColorTexture", 0)
            sub_141184830(&var_5a8, r12_6, rbx_26, &var_20b0)
            sub_14199ef00(&var_5a8)
            sub_1410eb9e0(&var_5a8)
        
        if (var_2288_1 == 0xc)
            int64_t* rcx_133 = *(*r12_6 + 0x20)
            uint32_t rbx_27 = zx.d(*((*(*rcx_133 + 0x240))(rcx_133) + 0x11a))
            var_2248.d = rbx_27
            void var_1318
            sub_1419928d0(&var_1318, r15_10)
            void*** rax_105 = sub_1410fccd0(&var_1318, sub_14139d440(rsi_13), SceneColorTexture", 0)
            void*** var_21e8 = rax_105
            
            if (rdi_16[1].d u> 0)
                int128_t zmm6_7 = data_1439c7b68
                wchar16 const* const var_2108_1 = u"UnknownTexture"
                char var_2285 = 1
                int32_t var_2134_1 = *(rax_105 + 0x44)
                int32_t var_2130_1 = rax_105[9].d
                int16_t var_2100_1 = 1
                char var_20fe_1 = 0
                int128_t var_1c68_1 = var_2108_1.o
                int32_t var_2124_1 = 0x10000
                int16_t var_2110_1 = 0x100
                int32_t var_212c_1 = 0
                zmm7 = data_1439c7b78.o
                int16_t var_2120_1 = 1
                int32_t var_2114_1 = 4
                int128_t var_2148_1 = zmm6_7
                var_1c68_1.q = u"HairInterpolationDepthTexture"
                int64_t* var_1310
                void*** rax_109
                int128_t zmm6_8
                rax_109, zmm6_8 = sub_14081d830(0x88, var_1310, 1, 0)
                
                if (rax_109 == 0)
                    rax_109 = nullptr
                else
                    rax_109[1] = u"HairInterpolationDepthTexture"
                    rax_109[2] = 0
                    rax_109[3].b = 0
                    *(rax_109 + 0x1c) = 0
                    rax_109[4] = 0
                    rax_109[5].w = 0x200
                    *(rax_109 + 0x30) = zmm6_8
                    *rax_109 = &data_142f11960
                    *(rax_109 + 0x40) = zmm7
                    rax_109[0x10] = 0
                    *(rax_109 + 0x50) = 1.o
                    *(rax_109 + 0x60) = 0xb:4.o
                    *(rax_109 + 0x70) = var_1c68_1
                
                void*** var_21e0 = rax_109
                int64_t* rcx_138 = *(*r12_6 + 0x20)
                void* rax_112 = (*(*rcx_138 + 0x260))(rcx_138)
                void* rsi_14 = rax_112
                
                if (data_143e6a698 s> 0)
                    void* rdi_20 = data_143e6d188
                    char* var_1e88 = &var_2285
                    int64_t r15_11 = 0
                    int64_t* var_1e78_1 = r12_6
                    void**** var_1e68_1 = &var_21e8
                    int32_t r12_10 = 0
                    uint32_t var_1e80_1 = rbx_27
                    void** var_1e60_1 = &var_21e0
                    void* var_1e70_1 = rsi_14
                    int32_t* r13_10 = sx.q(data_143e6d190) * 0x160 + rdi_20
                    int64_t var_2200 = 0
                    int64_t var_21f8_1 = 0
                    void* var_2240_3 = rdi_20
                    
                    if (rdi_20 != r13_10)
                        int32_t r14_2 = 0
                        void* r13_11 = rdi_20 + 0xc0
                        int32_t* rax_114 = r13_10
                        
                        do
                            if (*(r13_11 - 0xb8) == rbx_27)
                                void var_1fc8
                                sub_14205a1d0(rsi_14, &var_1fc8, *(r13_11 - 0xbc))
                                int32_t var_1fb8
                                int64_t rax_115 = sx.q(var_1fb8)
                                void* var_1fc0
                                
                                if (rax_115.d != 0)
                                    void* rbx_28 = var_1fc0
                                    void* rsi_17 = (rax_115 << 6) + rbx_28
                                    
                                    if (rbx_28 != rsi_17)
                                        do
                                            zmm2 = *(rbx_28 + 0x20)
                                            int64_t rdi_21 = sx.q(r12_10)
                                            zmm3 = *(rbx_28 + 0x30)
                                            float zmm0_13[0x4] = *rbx_28
                                            r12_10 = (rdi_21 + 1).d
                                            float zmm1_14[0x4] = *(rbx_28 + 0x10)
                                            var_21f8_1.d = r12_10
                                            zmm6_8 = *(r13_11 - 0x20)
                                            zmm7 = *(r13_11 - 0x10)
                                            zmm8 = *r13_11
                                            int64_t var_1e18_1 = zmm0_13[0].q
                                            int64_t var_1e10_1 = _mm_bsrli_si128(zmm0_13, 8)[0].q
                                            float var_1dec_1 = _mm_bsrli_si128(zmm2, 0xc)[0]
                                            int64_t var_1e08_1 = zmm1_14[0].q
                                            int64_t rax_116 = _mm_bsrli_si128(zmm1_14, 8)[0].q
                                            float var_1df4_1 = _mm_bsrli_si128(zmm2, 4)[0]
                                            int32_t var_1dfc_1 = rax_116.d
                                            float var_1de8_1 = zmm3[0]
                                            zmm0_13 = _mm_bsrli_si128(zmm3, 4)
                                            zmm1_14 = _mm_bsrli_si128(zmm2, 8)
                                            zmm3 = _mm_bsrli_si128(zmm3, 8)
                                            float var_1de4_1 = zmm0_13[0]
                                            uint32_t var_1e00_1 = (rax_116 u>> 0x20).d
                                            float var_1df0_1 = zmm1_14[0]
                                            float var_1df8_1 = zmm2[0]
                                            float var_1de0_1 = zmm3[0]
                                            int128_t var_1e48_1 = zmm6_8
                                            int128_t var_1e38_1 = zmm7
                                            int128_t var_1e28_1 = zmm8
                                            
                                            if (r12_10 s> r14_2)
                                                sub_1405fdd60(&var_2200)
                                                r12_10 = var_21f8_1.d
                                                r15_11 = var_2200
                                                r14_2 = var_21f8_1:4.d
                                            
                                            rbx_28 += 0x40
                                            int128_t* rcx_143 = rdi_21 * 0x70 + r15_11
                                            *rcx_143 = zmm6_8
                                            rcx_143[1] = zmm7
                                            rcx_143[2] = zmm8
                                            rcx_143[3] = var_1e18_1.o
                                            rcx_143[4] = var_1e08_1.o
                                            rcx_143[5] = var_1df8_1.o
                                            rcx_143[6] = var_1de8_1.o
                                        while (rbx_28 != rsi_17)
                                        
                                        rbx_28 = var_1fc0
                                        rdi_20 = var_2240_3
                                    
                                    if (rbx_28 != 0)
                                        sub_140a74f90(rbx_28)
                                    
                                    rbx_27 = var_2248.d
                                    rsi_14 = rax_112
                                else if (var_1fc0 != 0)
                                    sub_140a74f90(var_1fc0)
                                rax_114 = r13_10
                            
                            rdi_20 += 0x160
                            r13_11 += 0x160
                            var_2240_3 = rdi_20
                        while (rdi_20 != rax_114)
                        
                        r14_1 = nullptr
                    
                    int64_t rbx_29 = r15_11
                    r12_6 = var_2268_1
                    int64_t rdi_23 = sx.q(r12_10) * 0x70 + r15_11
                    
                    if (r15_11 != rdi_23)
                        char rax_119 = var_2285
                        
                        do
                            var_22a8.q = &var_21e0
                            var_22b0.q = &var_21e8
                            var_22b8.q = rbx_29
                            sub_141181a80(&var_1318, r12_6, 1.40129846e-45f, rax_119, var_22b8, 
                                var_22b0, var_22a8)
                            rax_119 = 0
                            rbx_29 += 0x70
                            var_2285 = 0
                        while (rbx_29 != rdi_23)
                    
                    if (r15_11 != 0)
                        sub_140a74f90(r15_11)
                    
                    sub_14117dbe0(&var_1e88, &var_1318, 0f)
                    sub_14117dbe0(&var_1e88, &var_1318, 2.80259693e-45f)
                    sub_14117dbe0(&var_1e88, &var_1318, 4.20389539e-45f)
                    rbx_27 = var_2248.d
                    rdi_16 = arg3
                    r15_10 = arg1
                
                int32_t r8_32 = data_143e6a6b0
                int32_t rdx_61 = data_143e6a6b4
                int32_t rcx_150 = data_143e6a6bc
                void* var_1dd8 = &var_1318
                char* var_1db8_1 = &var_2285
                void*** var_1db0_1 = var_21e8
                void*** var_1da8_1 = var_21e0
                int32_t rax_122 = data_143e6a6b8
                int64_t* var_1dd0_1 = r12_6
                uint32_t var_1dc8_1 = rbx_27
                void* var_1dc0_1 = rsi_14
                
                if (r8_32 s> 0 || rdx_61 s> 0 || rax_122 s> 0 || rcx_150 s> 0)
                    rcx_150.b = rcx_150 s> 0
                    var_22b0.b = rcx_150.b
                    rax_122.b = rax_122 s> 0
                    var_22b8.b = rax_122.b
                    r8_32.b = r8_32 s> 0
                    sub_14117e1f0(&var_1dd8, 0, r8_32.b, rdx_61 s> 0, var_22b8.b, var_22b0.b)
                
                int32_t r8_33 = data_143e6a6a0
                int32_t rdx_62 = data_143e6a6a4
                int32_t rax_123 = data_143e6a6a8
                int32_t rcx_152 = data_143e6a6ac
                
                if (r8_33 s> 0 || rdx_62 s> 0 || rax_123 s> 0 || rcx_152 s> 0)
                    rcx_152.b = rcx_152 s> 0
                    var_22b0.b = rcx_152.b
                    rax_123.b = rax_123 s> 0
                    var_22b8.b = rax_123.b
                    r8_33.b = r8_33 s> 0
                    sub_14117e1f0(&var_1dd8, 1, r8_33.b, rdx_62 s> 0, var_22b8.b, var_22b0.b)
                
                rsi_13 = var_2280_1
            
            sub_14199ef00(&var_1318)
            sub_1410eb9e0(&var_1318)
        
        if (rdi_16[1].d u> 0 && data_143e6a6c0 != 0)
            void* rdi_24 = *rdi_16
            
            if (*(rdi_24 + 0x50) != 0)
                void var_1808
                sub_1419928d0(&var_1808, r15_10)
                void*** rax_125 =
                    sub_1410fccd0(&var_1808, sub_14139d440(rsi_13), SceneColorTexture", 0)
                void*** rax_126 =
                    sub_1410fccd0(&var_1808, rdi_24 + 0x50, PPLLNodeCounterTexture", 0)
                void*** rax_127 = sub_1410fccd0(&var_1808, rdi_24 + 0x58, PPLLNodeIndexTexture", 0)
                void*** rax_128 = sub_141193740(&var_1808, rdi_24 + 0x60, u"PPLLNodeDataBuffer", 0)
                int64_t* rcx_162 = *(rdi_24 + 0x58)
                int64_t rdx_68 = *rcx_162
                int64_t r13_12 = *((*(rdx_68 + 0x10))(rcx_162, rdx_68) + 0x14)
                int64_t* var_1800
                int64_t* rax_130 = sub_14081d830(0x40, var_1800, 1, 0)
                int64_t* rbx_30 = rax_130
                
                if (rax_130 == 0)
                    rbx_30 = nullptr
                else
                    *rax_130 = 0
                    __builtin_memset(&rax_130[2], 0, 0x30)
                
                __builtin_memset(rbx_30, 0, 0x40)
                rbx_30[1].d = float.s(zx.q(*(rdi_24 + 0x90)))
                float var_2250
                var_2250.q = 1
                float zmm0_14 = float.s(zx.q(*(rdi_24 + 0x90) * (r13_12 u>> 0x20).d * r13_12.d))
                rbx_30[2] = rax_126
                rbx_30[3] = rax_127
                *(rbx_30 + 0xc) = zmm0_14
                
                if ((rax_128[7].d & 0x100) != 0)
                    var_2250 = 5.60519386e-45f
                    int32_t var_224c_1 = 0x1c
                
                void*** rax_137 = sub_14081d830(0x28, var_1800, 1, 0)
                
                if (rax_137 == 0)
                    rax_137 = nullptr
                else
                    rax_137[1] = rax_128[1]
                    *rax_137 = &data_142f285c0
                    rax_137[2] = 0
                    *(rax_137 + 0x18) = rax_128.o
                
                r12_6 = var_2268_1
                rbx_30[4] = rax_137
                sub_1405d16e0(rbx_30, r12_6[2])
                var_2250.w = 0
                void*** rax_138 = sub_14081d830(0x28, var_1800, 1, 0)
                
                if (rax_138 == 0)
                    rax_138 = nullptr
                else
                    rax_138[1] = rax_125[1]
                    *rax_138 = &data_142f285c0
                    rax_138[2] = 0
                    *(rax_138 + 0x18) = rax_125.o
                
                rbx_30[5] = rax_138
                sub_1414610e0(r12_6, &rbx_30[6])
                int128_t var_1c58
                sub_1419a2ec0(r12_6[0xa2a], &var_1c58, &data_143e6ca80, 0)
                zmm7 = var_1c58
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = sx.q(rax_125[9].d + 7)
                int128_t var_1c08_1 = zx.o(0)
                int32_t rcx_169 = ((temp3_1 & 7) + temp4_1) s>> 3
                int32_t temp5_1
                int32_t temp6_1
                temp5_1:temp6_1 = sx.q(*(rax_125 + 0x44) + 7)
                void*** var_2258_5
                var_2258_5:4.d = rcx_169
                var_2258_5.d = (temp6_1 + (temp5_1 & 7)) s>> 3
                int128_t var_1c48_1 = sub_14118f720(rcx_169.b)
                sub_141998c50(zmm7.q, &data_143e73c30, rbx_30)
                int32_t var_1c88_1 = 1
                void*** var_1c90_1 = var_2258_5
                void*** rax_147
                char rcx_171
                rax_147, rcx_171 = sub_14081d830(0x60, var_1800, 1, 0)
                void*** rdi_25 = rax_147
                
                if (rax_147 == 0)
                    rdi_25 = nullptr
                else
                    sub_14118f720(rcx_171)
                    var_2250.q = &data_143e73c60
                    int128_t var_1c38 = rbx_30.o
                    void var_2230
                    sub_141992bd0(rdi_25, &var_2230, &var_1c38, 2)
                    *rdi_25 = &data_142f2ca78
                    *(rdi_25 + 0x38) = rbx_30.o
                    *(rdi_25 + 0x48) = zmm7
                    rdi_25[0xb] = var_1c88_1.q
                
                sub_1419968d0(&var_1808, rdi_25)
                sub_14199ef00(&var_1808)
                sub_1410eb9e0(&var_1808)
            
            rdi_16 = arg3
        
        uint32_t rcx_223 = zx.d(var_2288_1)
        result = zx.q(rcx_223 - 2)
        void* rdi_30
        
        if (result.b u> 1)
            rdi_30 = arg1
        else
            void* rax_149 = *(*sub_14139d440(var_2280_1) + 8)
            void* var_2080 = rax_149
            
            if (rax_149 != 0)
                *(rax_149 + 8) += 1
            
            void** var_1da0
            sub_14117afd0(&var_1da0, r12_6, &var_2080)
            void var_1b38
            int128_t zmm10_3
            int32_t zmm11_3
            zmm10_3, zmm11_3, zmm14 = sub_1423fa870(&var_1b38, &var_1da0, 0, (*(rax_7 + 0x38))[0], 
                *(rax_7 + 0x30), *(rax_7 + 0x34), r12_6[0x2a9].d, zmm14.d)
            int32_t r13_13 = 0
            int32_t r15_13 = 0
            char var_2286_2 = 0
            
            if (rdi_16[3].d u> 0)
                void* rbx_31 = rdi_16[2]
                void* rcx_180 = *(rbx_31 + 0x20)
                
                if (rcx_180 != 0)
                    int64_t* rcx_181 = *(rcx_180 + 8)
                    void* rax_153 = (*(*rcx_181 + 8))(rcx_181)
                    *(rax_153 + 0x64)
                    r15_13 = *(rax_153 + 0x60)
                
                r13_13 = *(rbx_31 + 0x10)
                var_2286_2 = *(rbx_31 + 0x1c)
            
            int32_t rax_155 = data_143e6a684
            int128_t var_2220 = data_142f2cb30
            var_2248.d = rax_155
            bool var_1fb0
            bool* rax_156 = sub_1411e1150(&var_1fb0)
            var_2270.d = *rax_156
            uint32_t var_22a8_2 = zx.d(rax_156[4])
            uint32_t var_22b0_3 = zx.d(var_2270:3.b)
            uint32_t var_22b8_3 = zx.d(var_2270:2.b)
            int16_t* var_1e98
            sub_140a2e390(&var_1e98, Hair Components : (R=%d, TT=%d, TRT=%d, GS=%d, LS=%d)", 
                zx.q(var_2270.b))
            int16_t* rdi_26 = var_1e98
            int16_t* const rbx_32 = &data_142d40450
            int32_t var_1e90
            
            if (var_1e90 != 0)
                rbx_32 = rdi_26
            
            var_22a8_2.q = &data_14399f5e0
            var_22b0_3.q = &var_2220
            var_22b8_3.q = sub_1423de050()
            int16_t* var_1e58
            sub_140a2e390(&var_1e58, 
                ----------------------------------------------------------------", sub_142409910(
                &var_1b38, zmm10_3, 0x42500000, rbx_32, var_22b8_3, var_22b0_3, var_22a8_2))
            
            if (rdi_26 != 0)
                sub_140a74f90(rdi_26)
            
            int16_t* const rbx_33 = &data_142d40450
            int16_t* rdi_27 = var_1e58
            int32_t var_1e50
            
            if (var_1e50 != 0)
                rbx_33 = rdi_27
            
            var_22a8_2.q = &data_14399f5e0
            var_22b0_3.q = &var_2220
            var_22b8_3.q = sub_1423de050()
            sub_142409910(&var_1b38, zmm10_3, 0x42840000, rbx_33, var_22b8_3, var_22b0_3, 
                var_22a8_2)
            int16_t* var_1fa8
            sub_140a2e390(&var_1fa8, u"Debug strands mode : %s", sub_1411a4560(var_2287_1))
            
            if (rdi_27 != 0)
                sub_140a74f90(rdi_27)
            
            int16_t* const rbx_34 = &data_142d40450
            int16_t* rsi_19 = var_1fa8
            int32_t var_1fa0
            
            if (var_1fa0 != 0)
                rbx_34 = rsi_19
            
            var_22a8_2.q = &data_14399f5e0
            var_22b0_3.q = &var_2220
            var_22b8_3.q = sub_1423de050()
            sub_142409910(&var_1b38, zmm10_3, 0x42a00000, rbx_34, var_22b8_3, var_22b0_3, 
                var_22a8_2)
            void* const rdi_28 = &data_142e657e8
            void* const r8_40 = &data_142e657e8
            
            if (sub_1411e7df0() != 0)
                r8_40 = &data_142e657e0
            
            int16_t* var_1f98
            sub_140a2e390(&var_1f98, u"Voxelization : %s", r8_40)
            
            if (rsi_19 != 0)
                sub_140a74f90(rsi_19)
            
            int16_t* const rbx_35 = &data_142d40450
            int16_t* rsi_20 = var_1f98
            int32_t var_1f90
            
            if (var_1f90 != 0)
                rbx_35 = rsi_20
            
            var_22a8_2.q = &data_14399f5e0
            var_22b0_3.q = &var_2220
            var_22b8_3.q = sub_1423de050()
            sub_142409910(&var_1b38, zmm10_3, 0x42bc0000, rbx_35, var_22b8_3, var_22b0_3, 
                var_22a8_2)
            void* const r8_41 = &data_142e657e8
            
            if (sub_1411e7de0() != 0)
                r8_41 = &data_142e657e0
            
            int16_t* var_1f88
            sub_140a2e390(&var_1f88, u"View rect optim.: %s", r8_41)
            
            if (rsi_20 != 0)
                sub_140a74f90(rsi_20)
            
            int16_t* const rbx_36 = &data_142d40450
            int16_t* rsi_21 = var_1f88
            int32_t var_1f80
            
            if (var_1f80 != 0)
                rbx_36 = rsi_21
            
            var_22a8_2.q = &data_14399f5e0
            var_22b0_3.q = &var_2220
            var_22b8_3.q = sub_1423de050()
            int16_t* var_1f78
            sub_140a2e390(&var_1f78, 
                ----------------------------------------------------------------", sub_142409910(
                &var_1b38, zmm10_3, 0x42d80000, rbx_36, var_22b8_3, var_22b0_3, var_22a8_2))
            
            if (rsi_21 != 0)
                sub_140a74f90(rsi_21)
            
            int16_t* const rbx_37 = &data_142d40450
            int16_t* rsi_22 = var_1f78
            int32_t var_1f70
            
            if (var_1f70 != 0)
                rbx_37 = rsi_22
            
            var_22a8_2.q = &data_14399f5e0
            var_22b0_3.q = &var_2220
            var_22b8_3.q = sub_1423de050()
            sub_142409910(&var_1b38, zmm10_3, 0x42f40000, rbx_37, var_22b8_3, var_22b0_3, 
                var_22a8_2)
            int16_t* var_1f68
            sub_140a2e390(&var_1f68, u"DOM Atlas resolution  : %dx%d", zx.q(r15_13))
            
            if (rsi_22 != 0)
                sub_140a74f90(rsi_22)
            
            int16_t* rsi_23 = var_1f68
            int16_t* const rbx_38 = &data_142d40450
            int32_t var_1f60
            
            if (var_1f60 != 0)
                rbx_38 = rsi_23
            
            var_22a8_2.q = &data_14399f5e0
            var_22b0_3.q = &var_2220
            var_22b8_3.q = sub_1423de050()
            sub_142409910(&var_1b38, zmm10_3, 0x43080000, rbx_38, var_22b8_3, var_22b0_3, 
                var_22a8_2)
            int16_t* var_1f58
            sub_140a2e390(&var_1f58, u"DOM Atlas slot        : %d/%d", zx.q(r13_13))
            
            if (rsi_23 != 0)
                sub_140a74f90(rsi_23)
            
            int16_t* rbx_39 = &data_142d40450
            int16_t* rsi_24 = var_1f58
            int32_t var_1f50
            
            if (var_1f50 != 0)
                rbx_39 = rsi_24
            
            var_22a8_2.q = &data_14399f5e0
            var_22b0_3.q = &var_2220
            var_22b8_3.q = sub_1423de050()
            sub_142409910(&var_1b38, zmm10_3, 0x43160000, rbx_39, var_22b8_3, var_22b0_3, 
                var_22a8_2)
            int16_t* var_1f48
            sub_140a2e390(&var_1f48, u"DOM Texture Index     : %d/%d", zx.q(var_2248.d))
            
            if (rsi_24 != 0)
                sub_140a74f90(rsi_24)
            
            int16_t* rbx_40 = &data_142d40450
            int16_t* rsi_25 = var_1f48
            int32_t var_1f40
            
            if (var_1f40 != 0)
                rbx_40 = rsi_25
            
            var_22a8_2.q = &data_14399f5e0
            var_22b0_3.q = &var_2220
            var_22b8_3.q = sub_1423de050()
            sub_142409910(&var_1b38, zmm10_3, 0x43240000, rbx_40, var_22b8_3, var_22b0_3, 
                var_22a8_2)
            
            if (var_2286_2 != 0)
                rdi_28 = &data_142e657e0
            
            int16_t* var_1f38
            sub_140a2e390(&var_1f38, u"DOM GPU driven        : %s", rdi_28)
            
            if (rsi_25 != 0)
                sub_140a74f90(rsi_25)
            
            int16_t* rbx_41 = &data_142d40450
            int16_t* rsi_26 = var_1f38
            int32_t var_1f30
            
            if (var_1f30 != 0)
                rbx_41 = rsi_26
            
            var_22a8_2.q = &data_14399f5e0
            var_22b0_3.q = &var_2220
            var_22b8_3.q = sub_1423de050()
            int128_t zmm6_10 = sub_142409910(&var_1b38, zmm10_3, 0x43320000, rbx_41, var_22b8_3, 
                var_22b0_3, var_22a8_2)
            
            if (arg3[3].d u> 0)
                int64_t* rax_171 = arg3[2]
                void* r13_14 = *rax_171
                void* var_2240_5 = r13_14
                void* r12_15 = sx.q(rax_171[1].d) * 0xe0 + r13_14
                void* var_2258_7 = r12_15
                
                if (r13_14 != r12_15)
                    int32_t zmm7_3 = 0x3dcccccd
                    
                    do
                        void* rdi_29 = *(r13_14 + 0x70)
                        void* r15_16 = sx.q(*(r13_14 + 0x78)) * 0xc0 + rdi_29
                        
                        if (rdi_29 != r15_16)
                            do
                                float zmm0_22[0x2] = *(rdi_29 + 0xb8)
                                uint64_t r8_47 = zx.q(*(rdi_29 + 0x60))
                                int32_t var_22b0_4 = *(rdi_29 + 0x68)
                                int32_t rax_175 = *(rdi_29 + 0x64)
                                zmm0_22[0] = zmm0_22[0] f* zmm7_3
                                int32_t var_22b8_4 = rax_175
                                _mm_cvtps_pd(zmm0_22)
                                int16_t* var_2168
                                sub_140a2e390(&var_2168, u" %d - Bound Radus: %f.2m (%dx%d)", r8_47)
                                
                                if (rsi_26 != 0)
                                    sub_140a74f90(rsi_26)
                                
                                zmm6_10.d = zmm6_10.d f+ zmm11_3
                                rsi_26 = var_2168
                                int16_t* rbx_43 = &data_142d40450
                                var_2168 = nullptr
                                int32_t var_2160
                                
                                if (var_2160 != 0)
                                    rbx_43 = rsi_26
                                
                                var_2160.q = 0
                                var_22a8_2.q = &data_14399f5e0
                                var_22b0_4.q = &var_2220
                                var_22b8_4.q = sub_1423de050()
                                zmm6_10, zmm7_3 = sub_142409910(&var_1b38, zmm10_3, zmm6_10, 
                                    rbx_43, var_22b8_4, var_22b0_4, var_22a8_2)
                                rdi_29 += 0xc0
                            while (rdi_29 != r15_16)
                            
                            r13_14 = var_2240_5
                            r12_15 = var_2258_7
                        
                        r13_14 += 0xe0
                        var_2240_5 = r13_14
                    while (r13_14 != r12_15)
            
            rdi_30 = arg1
            sub_14240e4b0(&var_1b38, rdi_30, 0, 0)
            
            if (rsi_26 != 0)
                sub_140a74f90(rsi_26)
            
            sub_1423fef60(&var_1b38)
            void var_1d90
            sub_1405d1550(&var_1d90)
            var_1da0 = &data_142f18c08
            void var_1d98
            result = sub_1405d1550(&var_1d98)
            rcx_223 = zx.d(var_2288_1)
            r12_6 = var_2268_1
        
        if (var_2287_1 != 0 || rcx_223.b != 0)
            int32_t rbx_44 = 0
            _mm_cvtepi32_ps(zx.o(*(r12_6 + 0x15a4) - *(r12_6 + 0x159c)))
            
            if (var_2287_1 != 0)
                int16_t* var_1f28
                sub_140a2e390(&var_1f28, u"Hair Debug mode - %s", sub_1411a4560(var_2287_1))
                r14_1 = var_1f28
                int32_t var_1f20
                rbx_44 = var_1f20
            else if (rcx_223.b != 0)
                uint64_t rax_181 = zx.q(rcx_223.b)
                wchar16 const* const rax_182
                
                if (rax_181.d u> 0x13)
                    rax_182 = u"None"
                else
                    switch (rax_181)
                        case 1
                            rax_182 = u"Macro groups info"
                        case 2
                            rax_182 = u"All DOMs light bounds"
                        case 3
                            rax_182 = u"Deep opacity maps"
                        case 4
                            rax_182 = u"Screen projected macro groups"
                        case 5
                            rax_182 = u"Sub-pixel sample count"
                        case 6
                            rax_182 = Type of hair coverage - Fully covered : Green / Partially covered : Red"
                        case 7
                            rax_182 = u"TAA resolve type (regular/responsive)"
                        case 8
                            rax_182 = u"Hair density volume"
                        case 9
                            rax_182 = u"Hair tangent volume"
                        case 0xa
                            rax_182 = u"Hair base color volume"
                        case 0xb
                            rax_182 = u"Hair roughness volume"
                        case 0xc
                            rax_182 = u"Hair mesh projection"
                        case 0xd
                            rax_182 = u"Hair coverage"
                        case 0xe
                            rax_182 = u"Hair material depth"
                        case 0xf
                            rax_182 = u"Hair material base color"
                        case 0x10
                            rax_182 = u"Hair material roughness"
                        case 0x11
                            rax_182 = u"Hair material specular"
                        case 0x12
                            rax_182 = u"Hair material tangent"
                        case 0x13
                            rax_182 = u"Hair tile cotegorization"
                
                int16_t* var_1f18
                sub_140a2e390(&var_1f18, u"Hair Debug mode - %s", rax_182)
                r14_1 = var_1f18
                int32_t var_1f10
                rbx_44 = var_1f10
            
            void* rax_184 = *(*sub_14139d440(var_2280_1) + 8)
            void* var_20d8 = rax_184
            
            if (rax_184 != 0)
                *(rax_184 + 8) += 1
            
            void** var_1d80
            sub_14117afd0(&var_1d80, r12_6, &var_20d8)
            void var_1098
            int128_t zmm6_11
            zmm6_11.d = sub_1423fa870(&var_1098, &var_1d80, 0, (*(rax_7 + 0x38))[0], 
                *(rax_7 + 0x30), *(rax_7 + 0x34), r12_6[0x2a9].d, zmm14.d).d f- 28f
            int16_t* const rbx_45 = &data_142d40450
            
            if (rbx_44 != 0)
                rbx_45 = r14_1
            
            int128_t var_1d30 = data_142f2cb30
            int32_t var_22a8_3
            var_22a8_3.q = &data_14399f5e0
            int32_t var_22b0_5
            var_22b0_5.q = &var_1d30
            int32_t var_22b8_5
            var_22b8_5.q = sub_1423de050()
            sub_142409910(&var_1098, 0x42200000, zmm6_11, rbx_45, var_22b8_5, var_22b0_5, 
                var_22a8_3)
            sub_14240e4b0(&var_1098, rdi_30, 0, 0)
            sub_1423fef60(&var_1098)
            void var_1d70
            sub_1405d1550(&var_1d70)
            var_1d80 = &data_142f18c08
            void var_1d78
            result = sub_1405d1550(&var_1d78)
            
            if (r14_1 != 0)
                result = sub_140a74f90(r14_1)

__security_check_cookie(result_1 ^ &var_22d8)
return result
