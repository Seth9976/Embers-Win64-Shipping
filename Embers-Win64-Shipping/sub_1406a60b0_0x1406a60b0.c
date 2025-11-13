// 函数: sub_1406a60b0
// 地址: 0x1406a60b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2750)
float zmm6[0x4]
float var_38[0x4] = zmm6
void var_2778
int64_t rax_1 = __security_cookie ^ &var_2778
int64_t* result = sub_140de8fc0(*(arg1 + 0x278))
uint32_t rdx = zx.d(*(arg1 + 0x158))
int16_t* var_2748
int32_t var_2740
void var_2738
void var_2737
void var_2736
int64_t* result_4
int64_t* result_5
int64_t* result_2
int64_t* result_6
int64_t* result_11
int64_t* var_26b8
int16_t* var_2660
int32_t var_2658
void* var_2640
int64_t* var_2620
void* var_25f8
int32_t var_25e8
void* var_25e0
void* var_25c8
void* var_25b0
void* var_2578
int64_t var_2558
int64_t var_2378
void var_20b8
int64_t var_1f18
void var_1ba8
void var_1860

if (rdx == 0)
    var_26b8 = nullptr
    int32_t i_3 = 0
    int16_t* var_26e8 = nullptr
    int32_t var_26e0_1 = 0
    sub_140a2ccb0(arg1 + 0x2c8, &var_26b8, U",", 1)
    int32_t i_4 = i_3
    int32_t var_273c
    int16_t* var_2730
    int32_t var_2728
    
    if (i_4 == 0)
        int16_t* rcx_222 = var_26e8
        
        if (rcx_222 != 0)
            sub_140a74f90(rcx_222)
    else
        int32_t rdx_63 = i_4 - 1
        
        if (i_4 == 1)
            sub_140597df0(&var_26e8, var_26b8)
        else if (rdx_63 == 1)
            int64_t* rdi_13 = var_26b8
            int32_t rsi_9 = 5
            var_2730 = nullptr
            int32_t rbx_31 = rdi_13[1].d
            int64_t r15_6 = *rdi_13
            
            if (rbx_31 != 0)
                rsi_9 = 4
            
            sub_1405a4c70(&var_2730, rbx_31 + rsi_9, 0)
            memcpy(var_2730, r15_6, rbx_31 * 2)
            sub_140a20ba0(&var_2730, u" or ", 4)
            int16_t* r15_7 = var_2730
            int32_t rbx_32 = rdi_13[3].d
            var_2730 = nullptr
            var_2728.q = 0
            int16_t* rsi_10
            int32_t rdi_15
            
            if (rbx_31 s> 1)
                int32_t rsi_11 = rbx_32 - 1
                
                if (rbx_32 == 0)
                    rsi_11 = 0
                
                int32_t rcx_228
                
                if (rbx_31 == 0)
                    rcx_228 = rbx_31 + 1
                
                if (rbx_31 != 0 || rsi_11 == 0)
                    rcx_228 = 0
                
                var_2748 = r15_7
                int32_t rdx_78 = rcx_228 + rsi_11 + rbx_31
                int32_t var_2724
                var_273c = var_2724
                r15_7 = nullptr
                
                if (rdx_78 s> var_2724)
                    sub_1405947f0(&var_2748, rdx_78)
                
                sub_140a20ba0(&var_2748, rdi_13[2], rsi_11)
                rbx_32 = rbx_31
                rdi_15 = var_273c
                rsi_10 = var_2748
                var_2748 = nullptr
                var_2658 = rbx_32
                int32_t var_2654_2 = rdi_15
                var_2740.q = 0
            else
                int64_t rdi_14 = rdi_13[2]
                var_2660 = nullptr
                
                if (rbx_32 != 0)
                    sub_1405a4c70(&var_2660, rbx_32, 0)
                    rsi_10 = var_2660
                    memcpy(rsi_10, rdi_14, rbx_32 * 2)
                    int32_t var_2654
                    rdi_15 = var_2654
                else
                    rdi_15 = 0
                    int32_t var_2654_1 = 0
                    rsi_10 = nullptr
            
            int16_t* rcx_231 = var_26e8
            
            if (rcx_231 != 0)
                sub_140a74f90(rcx_231)
            
            var_26e8 = rsi_10
            var_26e0_1 = rbx_32
            var_26e0_1 = rdi_15
            
            if (r15_7 != 0)
                sub_140a74f90(r15_7)
        else
            int32_t i = 0
            
            if (i_4 - 1 s> 0)
                int64_t rsi_5 = 0
                
                do
                    int64_t* rax_137 = var_26b8
                    var_2748 = nullptr
                    int32_t rbx_27 = *(rax_137 + rsi_5 + 8)
                    int64_t rdi_11 = *(rax_137 + rsi_5)
                    sub_1405a4c70(&var_2748, sbb.d(rdx_63, rdx_63, rbx_27 != 0) + 3 + rbx_27, 0)
                    memcpy(var_2748, rdi_11, rbx_27 * 2)
                    sub_140a20ba0(&var_2748, &data_142d8adc4, 2)
                    int16_t* rbx_28 = var_2748
                    var_2748 = nullptr
                    var_2740.q = 0
                    int32_t r8_15 = rbx_27 - 1
                    
                    if (rbx_27 == 0)
                        r8_15 = 0
                    
                    rdx_63 = sub_140a20ba0(&var_26e8, rbx_28, r8_15)
                    
                    if (rbx_28 != 0)
                        rdx_63 = sub_140a74f90(rbx_28)
                    
                    i_4 = i_3
                    i += 1
                    rsi_5 += 0x10
                while (i s< i_4 - 1)
            
            var_2730 = nullptr
            int32_t rdx_69 = 0
            int16_t* rdi_12 = nullptr
            void* rsi_8 = &var_26b8[sx.q(i_4 - 1) * 2]
            int32_t var_2728_1 = 0
            int32_t rax_143 = *(rsi_8 + 8)
            int32_t rbx_29 = rax_143 - 1
            int32_t rax_144 = 0
            
            if (rax_143 == 0)
                rbx_29 = 0
            
            int32_t var_2724_1 = 0
            
            if (rbx_29 + 4 s> 0)
                sub_1405947f0(&var_2730, rbx_29 + 4)
                rax_144 = var_2724_1
                rdx_69 = var_2728_1
                rdi_12 = var_2730
            
            int32_t r15_5 = rbx_29 + 4 + rdx_69
            
            if (r15_5 s> rax_144)
                sub_140594770(&var_2730)
                rdi_12 = var_2730
            
            *rdi_12 = 0x72006f
            rdi_12[2] = 0x20
            int64_t rbx_30 = sx.q(rbx_29)
            memcpy(&rdi_12[3], *rsi_8, rbx_30.d * 2)
            rdi_12[rbx_30 + 3] = 0
            int32_t r8_17 = r15_5 - 1
            
            if (r15_5 == 0)
                r8_17 = 0
            
            sub_140a20ba0(&var_26e8, rdi_12, r8_17)
            
            if (rdi_12 != 0)
                sub_140a74f90(rdi_12)
    
    result_11 = nullptr
    int64_t var_26c0_1 = 0
    sub_1405947f0(&result_11, 6)
    int32_t rdi_16 = var_26c0_1.d + 6
    var_26c0_1.d = rdi_16
    
    if (rdi_16 s> 0)
        sub_140594770(&result_11)
        rdi_16 = var_26c0_1.d
    
    int64_t* result_10 = result_11
    sub_1405a7220(result_10, 6, " file", 6, 0x3f)
    int64_t* result_1 = nullptr
    int64_t var_26a0_1 = 0
    sub_1405947f0(&result_1, 0xa)
    int32_t rbx_33 = var_26a0_1.d + 0xa
    var_26a0_1.d = rbx_33
    
    if (rbx_33 s> 0)
        sub_140594770(&result_1)
        rbx_33 = var_26a0_1.d
    
    sub_1405a7220(result_1, 0xa, "Select a ", 0xa, 0x3f)
    int32_t rax_147
    int32_t rbx_34
    int64_t* result_3
    int64_t var_2718
    
    if (rbx_33 s> 1)
        int32_t r15_9
        
        if (var_26e0_1 == 0)
            r15_9 = 0
        else
            r15_9 = var_26e0_1 - 1
        
        int32_t rcx_241
        
        if (rbx_33 == 0)
            rcx_241 = rbx_33 + 1
        
        if (rbx_33 != 0 || r15_9 == 0)
            rcx_241 = 0
        
        result_2 = result_1
        int32_t rdx_86 = r15_9 + rbx_33 + rcx_241
        int32_t rax_149 = var_26a0_1:4.d
        result_1 = nullptr
        
        if (rdx_86 s> rax_149)
            sub_1405947f0(&result_2, rdx_86)
        
        sub_140a20ba0(&result_2, var_26e8, r15_9)
        result_3 = result_2
        rbx_34 = rbx_33
        rax_147 = rax_149
        result_4 = result_3
        int32_t var_26f8_1
        var_26f8_1.q = 0
        result_2 = nullptr
        var_2718.d = rbx_34
        var_2718:4.d = rax_147
    else
        rbx_34 = var_26e0_1
        result_3 = nullptr
        int16_t* rax_146 = var_26e8
        result_4 = nullptr
        var_2718.d = rbx_34
        
        if (rbx_34 != 0)
            sub_1405a4c70(&result_4, rbx_34, 0)
            result_3 = result_4
            memcpy(result_3, rax_146, rbx_34 * 2)
            rax_147 = var_2718:4.d
            rbx_34 = var_2718.d
        else
            rax_147 = 0
            var_2718:4.d = rax_147
    int32_t rax_150
    
    if (rbx_34 s> 1)
        int32_t rdi_17
        
        if (rdi_16 == 0)
            rdi_17 = 0
        else
            rdi_17 = rdi_16 - 1
        
        int32_t rcx_244
        
        if (rbx_34 == 0)
            rcx_244 = rbx_34 + 1
        
        if (rbx_34 != 0 || rdi_17 == 0)
            rcx_244 = 0
        
        result_5 = result_3
        int32_t rdx_89 = rdi_17 + rcx_244 + rbx_34
        result_4 = nullptr
        int64_t var_2708
        var_2708.d = rbx_34
        result_3 = nullptr
        var_2708:4.d = rax_147
        
        if (rdx_89 s> rax_147)
            sub_1405947f0(&result_5, rdx_89)
        
        sub_140a20ba0(&result_5, result_10, rdi_17)
        result_6 = result_5
        int32_t var_26d0_2 = var_2708.d
        rax_150 = var_2708:4.d
        int64_t var_2708_3 = 0
        result_5 = nullptr
    else
        rax_150 = var_26c0_1:4.d
        result_6 = result_10
        result_11 = nullptr
        int32_t var_26d0_1 = rdi_16
    
    int32_t var_26cc_1 = rax_150
    sub_140a9fca0(&var_25b0, &result_6)
    var_2640 = var_25b0
    void* var_25a8
    void* var_2638_2 = var_25a8
    
    if (var_25a8 != 0)
        *(var_25a8 + 8) += 1
        result_3 = result_4
    
    int128_t zmm0_3 = data_143cdda20
    int128_t zmm1_19 = data_143cdda30
    int32_t var_25a0
    int32_t var_2630_2 = var_25a0
    var_2558 = data_143cdda10
    int64_t var_2550_2 = data_143cdda18
    int64_t var_2528_2 = data_143cdda40
    void* rax_159 = data_143cdda48
    char var_2628_2 = 1
    var_2620 = nullptr
    int32_t var_2618_2 = 0
    void* var_2520_2 = rax_159
    int128_t var_2548_2 = zmm0_3
    int128_t var_2538_2 = zmm1_19
    
    if (rax_159 != 0)
        *(rax_159 + 8) += 1
    
    int64_t var_2518_2 = data_143cdda50
    int32_t var_2510_2 = data_143cdda58
    char var_250c_2 = data_143cdda5c
    char var_2508_2 = 1
    int64_t var_2500_2 = 0
    int32_t var_24f8_2 = 0
    var_2748 = nullptr
    var_2740.q = 0
    sub_1405947f0(&var_2748, 0x10)
    int32_t rsi_12 = var_2740 + 0x10
    
    if (rsi_12 s> var_273c)
        sub_140594770(&var_2748)
    
    int16_t* r12_1 = var_2748
    sub_1405a7220(r12_1, 0x10, "dark-background", 0x10, 0x3f)
    int64_t rcx_256
    
    if (data_143cdd238 == data_143cdd264)
    label_1406a7c0d:
        rcx_256 = 0
    else
        int32_t rcx_251
        int16_t* rdx_93
        
        if (rsi_12 == 0)
            rdx_93 = &data_142d40450
            rcx_251 = 0
        else
            rdx_93 = r12_1
            rcx_251 = rsi_12 - 1
        
        void* rbx_35 = data_143cdd270
        int64_t rcx_252 = sx.q(sub_1405969c0(rcx_251, rdx_93))
        void* rax_167 = &data_143cdd268
        
        if (rbx_35 != 0)
            rax_167 = rbx_35
        
        int32_t rbx_36 = *(rax_167 + ((rcx_252 & (sx.q(data_143cdd278) - 1)) << 2))
        
        if (rbx_36 == 0xffffffff)
        label_1406a7c0d_1:
            rcx_256 = 0
        else
            int64_t rcx_254 = data_143cdd230
            int64_t rdi_19
            
            while (true)
                int16_t* rdx_94 = &data_142d40450
                rdi_19 = sx.q(rbx_36) * 0xa0
                
                if (rsi_12 != 0)
                    rdx_94 = r12_1
                
                int16_t* const rcx_255
                
                if (*(rdi_19 + rcx_254 + 8) == 0)
                    rcx_255 = &data_142d40450
                else
                    rcx_255 = *(rdi_19 + rcx_254)
                
                if (sub_140a54510(rcx_255, rdx_94) == 0)
                    break
                
                rcx_254 = data_143cdd230
                rbx_36 = *(rdi_19 + rcx_254 + 0x98)
                
                if (rbx_36 == 0xffffffff)
                    goto label_1406a7c0d_2
            
            if (rbx_36 == 0xffffffff)
            label_1406a7c0d_2:
                rcx_256 = 0
            else
                rcx_256 = data_143cdd230 + rdi_19
    
    data_142d8c9e0
    int64_t* rax_171 = sub_14068d9d0(&var_1860)
    sub_140692eb0(&rax_171[0x3b], &var_2558)
    sub_14065da90(&rax_171[0x34], &var_2640)
    rax_171[0x37].b = var_2628_2
    
    if (&var_2620 != &rax_171[0x38])
        int64_t* rcx_261
        
        if (var_2618_2 != 0)
            rcx_261 = var_2620
        
        if (var_2618_2 != 0 && rcx_261 != 0)
            (*(*rcx_261 + 0x40))(rcx_261, &rax_171[0x38])
        else if (rax_171[0x39].d != 0)
            int64_t* rcx_263 = rax_171[0x38]
            
            if (rcx_263 != 0)
                (*(*rcx_263 + 0x38))(rcx_263, 0)
                int64_t rcx_264 = rax_171[0x38]
                
                if (rcx_264 != 0)
                    rax_171[0x38] = sub_140a84c80(rcx_264, 0, 0)
                
                rax_171[0x39].d = 0
    
    void*** rax_175 = j_sub_140a82f30(0x7a8)
    void*** rdi_20 = rax_175
    
    if (rax_175 == 0)
        rdi_20 = nullptr
    else
        rax_175[1].d = 1
        *(rax_175 + 0xc) = 1
        *rdi_20 = &data_142d8b060
        
        if (rdi_20 != -0x10)
            sub_140f66da0(&rdi_20[2])
    
    var_25f8 = &rdi_20[2]
    sub_14065fa30(&var_25f8, &rdi_20[2])
    int16_t var_2758_8
    var_2758_8.q = 0x798
    var_25e8.q = &var_2738
    int16_t** rax_176 =
        sub_140697520(&var_25f8, &var_2578, rax_171, sub_140e23ed0(&rdi_20[2], "STextBlock"))
    int64_t* rbx_40 = rax_176[1]
    var_2660 = *rax_176
    var_2658.q = rbx_40
    
    if (rbx_40 != 0)
        rbx_40[1].d += 1
    
    void*** rax_177 = j_sub_140a82f30(0x88)
    void*** rsi_14 = rax_177
    
    if (rax_177 == 0)
        rsi_14 = nullptr
    else
        sub_14068e490(rax_177)
        *rsi_14 = &data_142d8add0
    
    sub_140693600(rsi_14, &var_2660)
    
    if (rbx_40 != 0)
        rbx_40[1].d -= 1
        
        if (rbx_40[1].d == 1)
            (**rbx_40)(rbx_40)
            int32_t temp20_1 = *(rbx_40 + 0xc)
            *(rbx_40 + 0xc) -= 1
            
            if (temp20_1 == 1)
                (*(*rbx_40 + 8))(rbx_40, 1)
    
    void*** rax_180 = j_sub_140a82f30(0x2e8)
    void*** rdi_21 = rax_180
    
    if (rax_180 == 0)
        rdi_21 = nullptr
    else
        rax_180[1].d = 1
        *(rax_180 + 0xc) = 1
        *rdi_21 = &data_142d8c590
        
        if (rdi_21 != -0x10)
            sub_14068e500(&rdi_21[2])
    
    var_25e0 = &rdi_21[2]
    sub_14065fa30(&var_25e0, &rdi_21[2])
    var_2758_8.q = 0x2d8
    void* var_25d0_1 = &var_2736
    sub_140e23ed0(&rdi_21[2], "SHorizontalBox")
    int64_t* rax_181
    int128_t zmm1_21
    rax_181, zmm1_21 = sub_14068d420(&var_20b8)
    void* var_22f8
    int64_t** rax_183 = sub_140696920(&var_25e0, &var_22f8, sub_1406938c0(rax_181, rsi_14), zmm1_21)
    result_4 = *rax_183
    void* rcx_281 = rax_183[1]
    void* var_2718_2 = rcx_281
    
    if (rcx_281 != 0)
        *(rcx_281 + 8) += 1
    
    int64_t* rax_184
    int128_t zmm6_3
    rax_184, zmm6_3 = sub_14068c640(&var_1ba8)
    rax_184[0x39].b = 1
    *(rax_184 + 0x1b8) = zmm6_3
    
    if (&var_2378 != &rax_184[0x3a] && rax_184[0x3b].d != 0)
        int64_t* rcx_283 = rax_184[0x3a]
        
        if (rcx_283 != 0)
            (*(*rcx_283 + 0x38))(rcx_283, 0)
            int64_t rcx_284 = rax_184[0x3a]
            
            if (rcx_284 != 0)
                rax_184[0x3a] = sub_140a84c80(rcx_284, 0, 0)
            
            rax_184[0x3b].d = 0
    
    rax_184[0x44] = rcx_256 + 0x10
    rax_184[0x45].b = 1
    void var_2650
    
    if (&var_2650 != &rax_184[0x46] && rax_184[0x47].d != 0)
        int64_t* rcx_285 = rax_184[0x46]
        
        if (rcx_285 != 0)
            (*(*rcx_285 + 0x38))(rcx_285, 0)
            int64_t rcx_286 = rax_184[0x46]
            
            if (rcx_286 != 0)
                rax_184[0x46] = sub_140a84c80(rcx_286, 0, 0)
            
            rax_184[0x47].d = 0
    
    int64_t* rax_190 = j_sub_140a82f30(0x4c8)
    int64_t* rdi_22 = rax_190
    
    if (rax_190 == 0)
        rdi_22 = nullptr
    else
        rax_190[1].d = 1
        *(rax_190 + 0xc) = 1
        *rdi_22 = &data_142d8c5a0
        
        if (rdi_22 != -0x10)
            sub_140f20640(&rdi_22[2])
    
    var_25c8 = &rdi_22[2]
    sub_14065fa30(&var_25c8, &rdi_22[2])
    var_2758_8.q = 0x4b8
    void* var_25b8_1 = &var_2737
    void* rax_191
    int128_t zmm1_23
    rax_191, zmm1_23 = sub_1406936e0(rax_184, &result_4, sub_140e23ed0(&rdi_22[2], "SBorder"))
    void* var_2308
    void** rax_192 = sub_140695920(&var_25c8, &var_2308, rax_191, zmm1_23)
    var_2730 = *rax_192
    void* rcx_293 = rax_192[1]
    var_2728.q = rcx_293
    
    if (rcx_293 != 0)
        *(rcx_293 + 8) += 1
    
    sub_140693860(sub_140698a90(*(arg1 + 0x278)), &var_2730)
    int64_t* var_2300
    
    if (var_2300 != 0)
        var_2300[1].d -= 1
        
        if (var_2300[1].d == 1)
            (**var_2300)(var_2300)
            int32_t temp23_1 = *(var_2300 + 0xc)
            *(var_2300 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*(*var_2300 + 8))(var_2300, 1)
    
    if (rdi_22 != 0)
        rdi_22[1].d -= 1
        
        if (rdi_22[1].d == 1)
            (**rdi_22)(rdi_22)
            int32_t temp26_1 = *(rdi_22 + 0xc)
            *(rdi_22 + 0xc) -= 1
            
            if (temp26_1 == 1)
                (*(*rdi_22 + 8))(rdi_22, 1)
    
    sub_14068fed0(&var_1ba8)
    int64_t* var_22f0
    
    if (var_22f0 != 0)
        var_22f0[1].d -= 1
        
        if (var_22f0[1].d == 1)
            (**var_22f0)(var_22f0)
            int32_t temp29_1 = *(var_22f0 + 0xc)
            *(var_22f0 + 0xc) -= 1
            
            if (temp29_1 == 1)
                (*(*var_22f0 + 8))(var_22f0, 1)
    
    if (rdi_21 != 0)
        rdi_21[1].d -= 1
        
        if (rdi_21[1].d == 1)
            (**rdi_21)(rdi_21)
            int32_t temp31_1 = *(rdi_21 + 0xc)
            *(rdi_21 + 0xc) -= 1
            
            if (temp31_1 == 1)
                (*rdi_21)[1](rdi_21, 1)
    
    if (var_1f18 != 0)
        sub_140a74f90(var_1f18)
    
    sub_140660250(&var_20b8)
    char var_2570
    int64_t* rbx_49 = var_2570.q
    
    if (rbx_49 != 0)
        rbx_49[1].d -= 1
        
        if (rbx_49[1].d == 1)
            (**rbx_49)(rbx_49)
            int32_t temp38_1 = *(rbx_49 + 0xc)
            *(rbx_49 + 0xc) -= 1
            
            if (temp38_1 == 1)
                (*(*rbx_49 + 8))(rbx_49, 1)
    
    if (rdi_20 != 0)
        rdi_20[1].d -= 1
        
        if (rdi_20[1].d == 1)
            (**rdi_20)(rdi_20)
            int32_t temp40_1 = *(rdi_20 + 0xc)
            *(rdi_20 + 0xc) -= 1
            
            if (temp40_1 == 1)
                (*rdi_20)[1](rdi_20, 1)
    
    sub_1406913d0(&var_1860)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    sub_14068fb40(&var_2558)
    sub_1406601b0(&var_2640)
    sub_1405970a0(&var_25b0)
    int64_t* result_9 = result_6
    
    if (result_9 != 0)
        sub_140a74f90(result_9)
    
    if (result_3 != 0)
        sub_140a74f90(result_3)
    
    result = result_1
    
    if (result != 0)
        result = sub_140a74f90(result)
    
    int64_t* result_12 = result_11
    
    if (result_12 != 0)
        result = sub_140a74f90(result_12)
    
    int16_t* rcx_318 = var_26e8
    
    if (rcx_318 != 0)
        result = sub_140a74f90(rcx_318)
    
    int32_t i_2 = i_3
    int64_t* rbx_51 = var_26b8
    
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_319 = *rbx_51
            
            if (rcx_319 != 0)
                result = sub_140a74f90(rcx_319)
            
            rbx_51 = &rbx_51[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rbx_51 = var_26b8
    
    if (rbx_51 != 0)
        result = sub_140a74f90(rbx_51)
else
    int32_t var_26f8
    int32_t var_26d0
    
    if (rdx == 1)
        *(arg1 + 0x138) = 0
        result_4 = nullptr
        int32_t var_2718_1 = 0
        sub_1405947f0(&result_4, 0x10)
        int32_t rax_93 = var_2718_1 + 0x10
        var_2718_1 = rax_93
        
        if (rax_93 s> 0)
            sub_140594770(&result_4)
        
        sub_1405a7220(result_4, 0x10, "Select a folder", 0x10, 0x3f)
        sub_140a9fca0(&var_25f8, &result_4)
        var_2640 = var_25f8
        void* var_25f0
        void* var_2638_1 = var_25f0
        
        if (var_25f0 != 0)
            *(var_25f0 + 8) += 1
        
        int128_t zmm0_2 = data_143cdda20
        int128_t zmm1_14 = data_143cdda30
        int32_t var_2630_1 = var_25e8
        var_2558 = data_143cdda10
        int64_t var_2550_1 = data_143cdda18
        int64_t var_2528_1 = data_143cdda40
        void* rax_100 = data_143cdda48
        char var_2628_1 = 1
        var_2620 = nullptr
        int32_t var_2618_1 = 0
        void* var_2520_1 = rax_100
        int128_t var_2548_1 = zmm0_2
        int128_t var_2538_1 = zmm1_14
        
        if (rax_100 != 0)
            *(rax_100 + 8) += 1
        
        int64_t var_2518_1 = data_143cdda50
        int32_t var_2510_1 = data_143cdda58
        char var_250c_1 = data_143cdda5c
        char var_2508_1 = 1
        int64_t var_2500_1 = 0
        int32_t var_24f8_1 = 0
        result_5 = nullptr
        int32_t var_2708_2 = 0
        sub_1405947f0(&result_5, 0x10)
        int32_t rax_104 = var_2708_2 + 0x10
        var_2708_2 = rax_104
        
        if (rax_104 s> 0)
            sub_140594770(&result_5)
        
        int64_t* result_8 = result_5
        sub_1405a7220(result_8, 0x10, "dark-background", 0x10, 0x3f)
        int32_t var_25fc
        sub_14069a490(&data_143cdd230, &var_25fc, &result_5)
        int64_t rax_105 = sx.q(var_25fc)
        void* rax_108
        
        if (rax_105.d == 0xffffffff)
            rax_108 = nullptr
        else
            rax_108 = rax_105 * 0xa0 + data_143cdd230
        
        var_2578 = rax_108 + 0x10
        int128_t var_2390
        __builtin_memcpy(&var_2390, 
            "\x00\x00\x80\x40\x00\x00\x80\x40\x00\x00\x80\x40\x00\x00\x80\x40\x01", 0x11)
        char var_2570_1 = 1
        int64_t var_2568 = 0
        int32_t var_2560_1 = 0
        var_2378 = 0
        int32_t var_2370_1 = 0
        int64_t* rax_109 = sub_14068d9d0(&var_1860)
        sub_140692eb0(&rax_109[0x3b], &var_2558)
        sub_14065da90(&rax_109[0x34], &var_2640)
        rax_109[0x37].b = var_2628_1
        
        if (&var_2620 != &rax_109[0x38])
            int64_t* rcx_166
            
            if (var_2618_1 != 0)
                rcx_166 = var_2620
            
            if (var_2618_1 != 0 && rcx_166 != 0)
                (*(*rcx_166 + 0x40))(rcx_166, &rax_109[0x38])
            else if (rax_109[0x39].d != 0)
                int64_t* rcx_167 = rax_109[0x38]
                
                if (rcx_167 != 0)
                    (*(*rcx_167 + 0x38))(rcx_167, 0)
                    int64_t rcx_168 = rax_109[0x38]
                    
                    if (rcx_168 != 0)
                        rax_109[0x38] = sub_140a84c80(rcx_168, 0, 0)
                    
                    rax_109[0x39].d = 0
        
        int16_t var_2758_5
        var_2758_5.q = &var_2737
        int64_t* rax_113
        int128_t zmm1_15
        rax_113, zmm1_15 = sub_1406887a0(&var_25c8, "STextBlock", 
            "D:"
        "/Projects/Unreal/Embers/Plugins/LyricFileExplorer/Source/LyricFileExplorer/Private/LyricFileExplorer."
        "cpp", 
            0x232, var_2758_5)
        void** rax_114 = sub_140697520(rax_113, &result_11, rax_109, zmm1_15)
        result_6 = *rax_114
        void* rcx_172 = rax_114[1]
        var_26d0.q = rcx_172
        
        if (rcx_172 != 0)
            *(rcx_172 + 8) += 1
        
        void* rax_116 = sub_140693860(sub_1406a4fe0(), &result_6)
        void* rax_118 = sub_1406938c0(sub_14068d420(&var_20b8), rax_116)
        var_2758_5.q = &var_2736
        int64_t* rax_119
        int128_t zmm1_16
        rax_119, zmm1_16 = sub_140688620(&var_25e0, "SHorizontalBox", 
            "D:"
        "/Projects/Unreal/Embers/Plugins/LyricFileExplorer/Source/LyricFileExplorer/Private/LyricFileExplorer."
        "cpp", 
            0x22f, var_2758_5)
        void** rax_120 = sub_140696920(rax_119, &var_26b8, rax_118, zmm1_16)
        var_2660 = *rax_120
        void* rcx_179 = rax_120[1]
        var_2658.q = rcx_179
        
        if (rcx_179 != 0)
            *(rcx_179 + 8) += 1
        
        int64_t* rax_121
        int128_t zmm1_17
        int128_t zmm6_2
        rax_121, zmm1_17, zmm6_2 = sub_14068c640(&var_1ba8)
        rax_121[0x39].b = 1
        *(rax_121 + 0x1b8) = zmm6_2
        
        if (&var_2378 != &rax_121[0x3a] && rax_121[0x3b].d != 0)
            int64_t* rcx_181 = rax_121[0x3a]
            
            if (rcx_181 != 0)
                (*(*rcx_181 + 0x38))(rcx_181, 0)
                int64_t rcx_182 = rax_121[0x3a]
                
                if (rcx_182 != 0)
                    rax_121[0x3a] = sub_140a84c80(rcx_182, 0, 0)
                
                rax_121[0x3b].d = 0
        
        rax_121[0x44] = rax_108 + 0x10
        rax_121[0x45].b = 1
        
        if (&var_2568 != &rax_121[0x46] && rax_121[0x47].d != 0)
            int64_t* rcx_183 = rax_121[0x46]
            
            if (rcx_183 != 0)
                (*(*rcx_183 + 0x38))(rcx_183, 0)
                int64_t rcx_184 = rax_121[0x46]
                
                if (rcx_184 != 0)
                    rax_121[0x46] = sub_140a84c80(rcx_184, 0, 0)
                
                rax_121[0x47].d = 0
        
        void* rax_126 = sub_1406936e0(rax_121, &var_2660, zmm1_17)
        var_2758_5.q = &var_2738
        void** rax_127
        int128_t zmm1_18
        rax_127, zmm1_18 = sub_140688320(&var_25b0, "SBorder", 
            "D:"
        "/Projects/Unreal/Embers/Plugins/LyricFileExplorer/Source/LyricFileExplorer/Private/LyricFileExplorer."
        "cpp", 
            0x22b, var_2758_5)
        void** rax_128 = sub_140695920(rax_127, &var_2748, rax_126, zmm1_18)
        result_2 = *rax_128
        void* rcx_189 = rax_128[1]
        var_26f8.q = rcx_189
        
        if (rcx_189 != 0)
            *(rcx_189 + 8) += 1
        
        sub_140693860(sub_140698a90(*(arg1 + 0x278)), &result_2)
        int64_t* rbx_24 = var_2740.q
        
        if (rbx_24 != 0)
            rbx_24[1].d -= 1
            
            if (rbx_24[1].d == 1)
                (**rbx_24)(rbx_24)
                int32_t temp6_1 = *(rbx_24 + 0xc)
                *(rbx_24 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_24 + 8))(rbx_24, 1)
        
        sub_140669d70(&var_25b0)
        sub_14068fed0(&var_1ba8)
        int64_t* var_26b0
        
        if (var_26b0 != 0)
            var_26b0[1].d -= 1
            
            if (var_26b0[1].d == 1)
                (**var_26b0)(var_26b0)
                int32_t temp8_1 = *(var_26b0 + 0xc)
                *(var_26b0 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_26b0 + 8))(var_26b0, 1)
        
        sub_140669d70(&var_25e0)
        
        if (var_1f18 != 0)
            sub_140a74f90(var_1f18)
        
        sub_140660250(&var_20b8)
        int64_t* var_26c0
        
        if (var_26c0 != 0)
            var_26c0[1].d -= 1
            
            if (var_26c0[1].d == 1)
                (**var_26c0)(var_26c0)
                int32_t temp13_1 = *(var_26c0 + 0xc)
                *(var_26c0 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*var_26c0 + 8))(var_26c0, 1)
        
        sub_140669d70(&var_25c8)
        sub_1406913d0(&var_1860)
        sub_14068fa50(&var_2390)
        sub_14068f9f0(&var_2578)
        
        if (result_8 != 0)
            sub_140a74f90(result_8)
        
        sub_14068fb40(&var_2558)
        sub_1406601b0(&var_2640)
        result = sub_1405970a0(&var_25f8)
        int64_t* result_7 = result_4
        
        if (result_7 != 0)
            result = sub_140a74f90(result_7)
    else if (rdx == 2)
        int64_t var_24b8
        sub_140a9fca0(&var_24b8, arg1 + 0x2c8)
        int64_t var_2458 = var_24b8
        void* var_24b0
        void* var_2450_1 = var_24b0
        
        if (var_24b0 != 0)
            *(var_24b0 + 8) += 1
        
        int32_t var_24a8
        int32_t var_2448_1 = var_24a8
        int64_t var_2438 = 0
        int32_t var_2430_1 = 0
        int128_t var_2368
        __builtin_memcpy(&var_2368, 
            "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f\xcd\xcc\xcc\x3e\x00", 0x11)
        int128_t var_2350_1 = zx.o(0)
        int64_t var_2338 = 0
        int32_t var_2330_1 = 0
        char var_2440_1 = 1
        char var_2340_1 = 1
        void var_2188
        sub_14068e440(&var_2188, &data_143cdda10)
        char var_2138_1 = 1
        float var_23b8[0x4]
        __builtin_memcpy(&var_23b8, 
            "\x00\x00\x80\x40\x00\x00\x80\x40\x00\x00\x80\x40\x00\x00\x80\x40\x01", 0x11)
        int64_t var_2130_1 = 0
        int32_t var_2128_1 = 0
        int64_t var_23a0 = 0
        int32_t var_2398_1 = 0
        int64_t var_2690 = 0
        int32_t var_2688_1 = 0
        sub_1405947f0(&var_2690, 7)
        int32_t rax_5 = var_2688_1 + 7
        var_2688_1 = rax_5
        
        if (rax_5 s> 0)
            sub_140594770(&var_2690)
        
        sub_1405a7220(var_2690, 7, "dark-2", 7, 0x3f)
        int32_t var_2600
        sub_14069a490(&data_143cdd230, &var_2600, &var_2690)
        int64_t rax_6 = sx.q(var_2600)
        int64_t rax_9
        
        if (rax_6.d == 0xffffffff)
            rax_9 = 0
        else
            rax_9 = rax_6 * 0xa0 + data_143cdd230
        
        int64_t rsi_1 = rax_9 + 0x10
        char var_24e8_1 = 1
        int64_t var_24f0 = rsi_1
        int64_t var_24e0 = 0
        int32_t var_24d8_1 = 0
        int64_t var_2680 = 0
        int32_t var_2678_1 = 0
        sub_1405947f0(&var_2680, 0xb)
        int32_t rax_10 = var_2678_1 + 0xb
        var_2678_1 = rax_10
        
        if (rax_10 s> 0)
            sub_140594770(&var_2680)
        
        sub_1405a7220(var_2680, 0xb, "File name:", 0xb, 0x3f)
        int64_t var_24a0
        sub_140a9fca0(&var_24a0, &var_2680)
        int64_t var_2488 = var_24a0
        void* var_2498
        void* var_2480_1 = var_2498
        
        if (var_2498 != 0)
            *(var_2498 + 8) += 1
            rsi_1 = var_24f0
        
        int32_t var_2490
        int32_t var_2478_1 = var_2490
        char var_2470_1 = 1
        int64_t var_2468 = 0
        int32_t var_2460_1 = 0
        void var_21f0
        sub_14068e440(&var_21f0, &data_143cdda10)
        char var_21a0_1 = 1
        int64_t var_2198_1 = 0
        int32_t var_2190_1 = 0
        void var_8f8
        int64_t* rax_14 = sub_14068d9d0(&var_8f8)
        sub_140692eb0(&rax_14[0x3b], &var_2188)
        sub_140693390(&rax_14[0x4c], &var_2368)
        rax_14[0x51].b = var_2340_1
        sub_140692f90(&rax_14[0x52], &var_2338)
        sub_14065da90(&rax_14[0x34], &var_2458)
        rax_14[0x37].b = var_2440_1
        sub_140692f90(&rax_14[0x38], &var_2438)
        int16_t var_2758_2
        void var_26ea
        var_2758_2.q = &var_26ea
        void var_2250
        int64_t* rax_16
        int128_t zmm1_1
        rax_16, zmm1_1 = sub_1406887a0(&var_2250, "STextBlock", 
            "D:"
        "/Projects/Unreal/Embers/Plugins/LyricFileExplorer/Source/LyricFileExplorer/Private/LyricFileExplorer."
        "cpp", 
            0x25a, var_2758_2)
        void* var_22b8
        void** rax_17 = sub_140697520(rax_16, &var_22b8, rax_14, zmm1_1)
        void* var_23d8 = *rax_17
        void* rcx_21 = rax_17[1]
        void* var_23d0_1 = rcx_21
        
        if (rcx_21 != 0)
            *(rcx_21 + 8) += 1
        
        void*** rax_18 = sub_1406a4fe0()
        *(rax_18 + 0x21) = 2
        int64_t* r15_1 = *(arg1 + 0x2a0)
        int64_t var_2588 = *(arg1 + 0x298)
        int64_t* var_2580_1 = r15_1
        
        if (r15_1 != 0)
            r15_1[1].d += 1
            r15_1[1].d += 1
        
        void var_1418
        int64_t* rax_19
        int128_t zmm1_2
        int128_t zmm6_1
        rax_19, zmm1_2, zmm6_1 = sub_14068c640(&var_1418)
        rax_19[0x44] = rsi_1
        rax_19[0x45].b = 1
        sub_140692f90(&rax_19[0x46], &var_24e0)
        rax_19[0x39].b = 1
        *(rax_19 + 0x1b8) = zmm6_1
        sub_140692f90(&rax_19[0x3a], &var_23a0)
        *(rax_19 + 0x1b4) = 2
        void* rax_20 = sub_1406936e0(rax_19, &var_2588, zmm1_2)
        void var_26f0
        var_2758_2.q = &var_26f0
        void var_2268
        int64_t* rax_21
        int128_t zmm1_3
        rax_21, zmm1_3 = sub_140688320(&var_2268, "SBorder", 
            "D:"
        "/Projects/Unreal/Embers/Plugins/LyricFileExplorer/Source/LyricFileExplorer/Private/LyricFileExplorer."
        "cpp", 
            0x24d, var_2758_2)
        void* var_22a8
        void** rax_22 = sub_140695920(rax_21, &var_22a8, rax_20, zmm1_3)
        void* var_23c8 = *rax_22
        void* rcx_30 = rax_22[1]
        void* var_23c0_1 = rcx_30
        
        if (rcx_30 != 0)
            *(rcx_30 + 8) += 1
        
        void var_d40
        int64_t* rax_23 = sub_14068d9d0(&var_d40)
        sub_140692eb0(&rax_23[0x3b], &var_21f0)
        sub_14065da90(&rax_23[0x34], &var_2488)
        rax_23[0x37].b = var_2470_1
        sub_140692f90(&rax_23[0x38], &var_2468)
        void var_26ef
        var_2758_2.q = &var_26ef
        void var_2280
        int64_t* rax_24
        int128_t zmm1_4
        rax_24, zmm1_4 = sub_1406887a0(&var_2280, "STextBlock", 
            "D:"
        "/Projects/Unreal/Embers/Plugins/LyricFileExplorer/Source/LyricFileExplorer/Private/LyricFileExplorer."
        "cpp", 
            0x246, var_2758_2)
        void* var_2328
        void** rax_25 = sub_140697520(rax_24, &var_2328, rax_23, zmm1_4)
        void* var_23e8 = *rax_25
        void* rcx_39 = rax_25[1]
        void* var_23e0_1 = rcx_39
        
        if (rcx_39 != 0)
            *(rcx_39 + 8) += 1
        
        void* rax_27 = sub_140698b50(sub_1406a4fe0())
        *(rax_27 + 0x21) = 2
        var_2758_2.d = 0
        void* rax_30 = sub_140693860(
            sub_14069cf40(sub_140698b50(rax_18), 0x40800000, (zx.o(0)).d, (zx.o(0)).d, var_2758_2), 
            &var_23d8)
        void* rax_33 = sub_140693860(sub_140698b50(sub_1406a4fe0()), &var_23c8)
        var_2758_2.d = 0
        void* rax_35 = sub_140693860(
            sub_14069cf40(rax_27, zx.o(0), (zx.o(0)).d, 0x41000000, var_2758_2), &var_23e8)
        void var_1f08
        void* rax_39 = sub_1406938c0(
            sub_1406938c0(sub_1406938c0(sub_14068d420(&var_1f08), rax_35), rax_33), rax_30)
        void var_26ee
        var_2758_2.q = &var_26ee
        void var_2298
        int64_t* rax_40
        int128_t zmm1_7
        rax_40, zmm1_7 = sub_140688620(&var_2298, "SHorizontalBox", 
            "D:"
        "/Projects/Unreal/Embers/Plugins/LyricFileExplorer/Source/LyricFileExplorer/Private/LyricFileExplorer."
        "cpp", 
            0x240, var_2758_2)
        void* var_2318
        void** rax_41 = sub_140696920(rax_40, &var_2318, rax_39, zmm1_7)
        void* var_23f8 = *rax_41
        void* rcx_55 = rax_41[1]
        void* var_23f0_1 = rcx_55
        
        if (rcx_55 != 0)
            *(rcx_55 + 8) += 1
        
        var_2758_2.d = 0x41200000
        sub_140693860(
            sub_14069cf40(sub_140698b50(sub_140698a90(*(arg1 + 0x278))), 0x41200000, 0x41200000, 
                0x41200000, var_2758_2), 
            &var_23f8)
        int64_t* var_2310
        
        if (var_2310 != 0)
            var_2310[1].d -= 1
            
            if (var_2310[1].d == 1)
                (**var_2310)(var_2310)
                int32_t temp7_1 = *(var_2310 + 0xc)
                *(var_2310 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_2310 + 8))(var_2310, 1)
        
        sub_140669d70(&var_2298)
        int64_t var_1d68
        
        if (var_1d68 != 0)
            sub_140a74f90(var_1d68)
        
        sub_140660250(&var_1f08)
        int64_t* var_2320
        
        if (var_2320 != 0)
            var_2320[1].d -= 1
            
            if (var_2320[1].d == 1)
                (**var_2320)(var_2320)
                int32_t temp12_1 = *(var_2320 + 0xc)
                *(var_2320 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*var_2320 + 8))(var_2320, 1)
        
        sub_140669d70(&var_2280)
        sub_1406913d0(&var_d40)
        int64_t* var_22a0
        
        if (var_22a0 != 0)
            var_22a0[1].d -= 1
            
            if (var_22a0[1].d == 1)
                (**var_22a0)(var_22a0)
                int32_t temp15_1 = *(var_22a0 + 0xc)
                *(var_22a0 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*var_22a0 + 8))(var_22a0, 1)
        
        sub_140669d70(&var_2268)
        sub_14068fed0(&var_1418)
        
        if (r15_1 != 0)
            r15_1[1].d -= 1
            
            if (r15_1[1].d == 1)
                (**r15_1)(r15_1)
                int32_t temp17_1 = *(r15_1 + 0xc)
                *(r15_1 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*r15_1 + 8))(r15_1, 1)
        
        int64_t* var_22b0
        
        if (var_22b0 != 0)
            var_22b0[1].d -= 1
            
            if (var_22b0[1].d == 1)
                (**var_22b0)(var_22b0)
                int32_t temp18_1 = *(var_22b0 + 0xc)
                *(var_22b0 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_22b0 + 8))(var_22b0, 1)
        
        sub_140669d70(&var_2250)
        sub_1406913d0(&var_8f8)
        sub_14068fb40(&var_21f0)
        sub_1406601b0(&var_2488)
        sub_1405970a0(&var_24a0)
        int64_t rcx_82 = var_2680
        
        if (rcx_82 != 0)
            sub_140a74f90(rcx_82)
        
        sub_14068f9f0(&var_24f0)
        int64_t rax_55 = var_2690
        
        if (rax_55 != 0)
            sub_140a74f90(rax_55)
        
        sub_14068fa50(&var_23b8)
        sub_14068fb40(&var_2188)
        sub_14068fab0(&var_2368)
        sub_1406601b0(&var_2458)
        sub_1405970a0(&var_24b8)
        void var_2120
        sub_14068e440(&var_2120, &data_143cdda60)
        char var_20d0_1 = 1
        int64_t var_20c8_1 = 0
        int32_t var_20c0_1 = 0
        int64_t var_2670 = 0
        int32_t var_2668_1 = 0
        sub_1405947f0(&var_2670, 5)
        int32_t rax_56 = var_2668_1 + 5
        var_2668_1 = rax_56
        
        if (rax_56 s> 0)
            sub_140594770(&var_2670)
        
        sub_1405a7220(var_2670, 5, "Save", 5, 0x3f)
        int64_t var_24d0
        sub_140a9fca0(&var_24d0, &var_2670)
        int64_t var_2428 = var_24d0
        void* var_24c8
        void* var_2420_1 = var_24c8
        
        if (var_24c8 != 0)
            *(var_24c8 + 8) += 1
        
        __builtin_memcpy(&var_25b0, 
            "\x00\x00\xf0\x41\x00\x00\xc0\x40\x00\x00\xf0\x41\x00\x00\xc0\x40\x01", 0x11)
        int32_t var_24c0
        int32_t var_2418_1 = var_24c0
        char var_2410_1 = 1
        int64_t var_2408 = 0
        int32_t var_2400_1 = 0
        int64_t var_2598 = 0
        int32_t var_2590_1 = 0
        sub_140acc920(&var_2748, &data_14399f630)
        int32_t var_2630
        var_2630.b = 0
        char var_2618 = 1
        var_2640.o = var_2748.o
        int64_t var_2610 = 0
        char var_2628
        var_2628.o = zx.o(0)
        int32_t var_2608_1 = 0
        void var_4b0
        int64_t* rax_60 = sub_14068d9d0(&var_4b0)
        sub_14065da90(&rax_60[0x34], &var_2428)
        rax_60[0x37].b = var_2410_1
        sub_140692f90(&rax_60[0x38], &var_2408)
        sub_140692eb0(&rax_60[0x3b], &var_2120)
        int16_t var_2758_3
        void var_26ed
        var_2758_3.q = &var_26ed
        void var_2208
        int64_t* rax_61
        int128_t zmm1_9
        rax_61, zmm1_9 = sub_1406887a0(&var_2208, "STextBlock", 
            "D:"
        "/Projects/Unreal/Embers/Plugins/LyricFileExplorer/Source/LyricFileExplorer/Private/LyricFileExplorer."
        "cpp", 
            0x27f, var_2758_3)
        void* var_22e8
        void** rax_62 = sub_140697520(rax_61, &var_22e8, rax_60, zmm1_9)
        var_2660 = *rax_62
        void* rcx_104 = rax_62[1]
        var_2658.q = rcx_104
        
        if (rcx_104 != 0)
            *(rcx_104 + 8) += 1
        
        void var_10d0
        int64_t* rax_63
        int128_t zmm7_1
        rax_63, zmm7_1 = sub_14068cc20(&var_10d0)
        rax_63[0x36] = &data_143cdd780
        int128_t zmm1_10 = sub_140693390(&rax_63[0x60], &var_2640)
        rax_63[0x65].b = var_2618
        sub_140692f90(&rax_63[0x66], &var_2610)
        rax_63[0x3b].b = 1
        *(rax_63 + 0x1c8) = zmm7_1
        sub_140692f90(&rax_63[0x3c], &var_2598)
        int64_t* rax_64 = sub_140a84c80(0, 0x20, 0)
        int64_t* rbx_10 = rax_64
        
        if (rax_64 != 0)
            rbx_10[1] = arg1
            *rbx_10 = &data_142d8c060
            rbx_10[3] = sub_140a387b0()
        
        if (&var_2578 == &rax_63[0x44])
            goto label_1406a6be4
        
        if (rbx_10 == 0)
            if (rax_63[0x45].d != 0)
                int64_t* rcx_153 = rax_63[0x44]
                
                if (rcx_153 != 0)
                    (*(*rcx_153 + 0x38))(rcx_153, 0)
                    int64_t rcx_154 = rax_63[0x44]
                    
                    if (rcx_154 != 0)
                        rax_63[0x44] = sub_140a84c80(rcx_154, 0, 0)
                    
                    rax_63[0x45].d = 0
            
            goto label_1406a6c04
        
        (*(*rbx_10 + 0x40))(rbx_10, &rax_63[0x44])
    label_1406a6be4:
        
        if (rbx_10 != 0)
            (*(*rbx_10 + 0x38))(rbx_10, 0)
            rbx_10 = sub_140a84c80(rbx_10, 0, 0)
        label_1406a6c04:
            
            if (rbx_10 != 0)
                zmm1_10 = sub_140a74f90(rbx_10)
        
        void* rax_69 = sub_1406936e0(rax_63, &var_2660, zmm1_10)
        void var_26ec
        var_2758_3.q = &var_26ec
        void var_2220
        int64_t* rax_70
        int128_t zmm1_11
        rax_70, zmm1_11 = sub_1406884a0(&var_2220, "SButton", 
            "D:"
        "/Projects/Unreal/Embers/Plugins/LyricFileExplorer/Source/LyricFileExplorer/Private/LyricFileExplorer."
        "cpp", 
            0x26d, var_2758_3)
        int64_t* var_22d8
        int64_t** rax_71 = sub_140696120(rax_70, &var_22d8, rax_69, zmm1_11)
        result_5 = *rax_71
        void* rcx_118 = rax_71[1]
        void* var_2708_1 = rcx_118
        
        if (rcx_118 != 0)
            *(rcx_118 + 8) += 1
        
        void*** rax_72 = sub_1406a4fe0()
        rax_72[4].b = 3
        int64_t* rsi_4 = *(arg1 + 0x290)
        result_6 = *(arg1 + 0x288)
        var_26d0.q = rsi_4
        
        if (rsi_4 != 0)
            rsi_4[1].d += 1
            rsi_4[1].d += 1
        
        void*** rax_73 = sub_1406a4fe0()
        *(rax_73 + 0x21) = 2
        void* rax_74 = sub_140693860(rax_72, &result_5)
        void* rax_75 = sub_140693860(rax_73, &result_6)
        void var_1d58
        void* rax_78 = sub_1406938c0(sub_1406938c0(sub_14068d420(&var_1d58), rax_75), rax_74)
        void var_26eb
        var_2758_3.q = &var_26eb
        void var_2238
        int64_t* rax_79
        int128_t zmm1_12
        rax_79, zmm1_12, zmm6 = sub_140688620(&var_2238, "SHorizontalBox", 
            "D:"
        "/Projects/Unreal/Embers/Plugins/LyricFileExplorer/Source/LyricFileExplorer/Private/LyricFileExplorer."
        "cpp", 
            0x263, var_2758_3)
        void* var_22c8
        void** rax_80 = sub_140696920(rax_79, &var_22c8, rax_78, zmm1_12)
        result_2 = *rax_80
        void* rcx_128 = rax_80[1]
        var_26f8.q = rcx_128
        
        if (rcx_128 != 0)
            *(rcx_128 + 8) += 1
        
        void*** rax_81 = sub_140698a90(*(arg1 + 0x278))
        var_2758_3.d = zmm6[0]
        sub_140693860(sub_14069cf40(rax_81, zmm6, (zx.o(0)).d, zmm6[0], var_2758_3), &result_2)
        int64_t* var_22c0
        
        if (var_22c0 != 0)
            var_22c0[1].d -= 1
            
            if (var_22c0[1].d == 1)
                (**var_22c0)(var_22c0)
                int32_t temp27_1 = *(var_22c0 + 0xc)
                *(var_22c0 + 0xc) -= 1
                
                if (temp27_1 == 1)
                    (*(*var_22c0 + 8))(var_22c0, 1)
        
        sub_140669d70(&var_2238)
        int64_t var_1bb8
        
        if (var_1bb8 != 0)
            sub_140a74f90(var_1bb8)
        
        sub_140660250(&var_1d58)
        
        if (rsi_4 != 0)
            rsi_4[1].d -= 1
            
            if (rsi_4[1].d == 1)
                (**rsi_4)(rsi_4)
                int32_t temp33_1 = *(rsi_4 + 0xc)
                *(rsi_4 + 0xc) -= 1
                
                if (temp33_1 == 1)
                    (*(*rsi_4 + 8))(rsi_4, 1)
        
        int64_t* var_22d0
        
        if (var_22d0 != 0)
            var_22d0[1].d -= 1
            
            if (var_22d0[1].d == 1)
                (**var_22d0)(var_22d0)
                int32_t temp36_1 = *(var_22d0 + 0xc)
                *(var_22d0 + 0xc) -= 1
                
                if (temp36_1 == 1)
                    (*(*var_22d0 + 8))(var_22d0, 1)
        
        sub_140669d70(&var_2220)
        sub_1406905f0(&var_10d0)
        int64_t* var_22e0
        
        if (var_22e0 != 0)
            var_22e0[1].d -= 1
            
            if (var_22e0[1].d == 1)
                (**var_22e0)(var_22e0)
                int32_t temp39_1 = *(var_22e0 + 0xc)
                *(var_22e0 + 0xc) -= 1
                
                if (temp39_1 == 1)
                    (*(*var_22e0 + 8))(var_22e0, 1)
        
        sub_140669d70(&var_2208)
        sub_1406913d0(&var_4b0)
        sub_14068fab0(&var_2640)
        sub_14068fa50(&var_25b0)
        sub_1406601b0(&var_2428)
        sub_1405970a0(&var_24d0)
        int64_t rcx_151 = var_2670
        
        if (rcx_151 != 0)
            sub_140a74f90(rcx_151)
        
        result = sub_14068fb40(&var_2120)
__security_check_cookie(rax_1 ^ &var_2778)
return result
