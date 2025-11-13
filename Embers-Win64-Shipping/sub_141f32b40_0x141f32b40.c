// 函数: sub_141f32b40
// 地址: 0x141f32b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_768
int64_t rax_1 = __security_cookie ^ &var_768
char var_738 = 0
char* var_610 = &var_738
void*** (* var_618)() = sub_140884c50
int64_t result

if (*(sub_140a756e0(&var_618, &data_14397f5f0) + 0x34) s<= 0)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    
    if (arg2 == 0)
        result.b = 0
    else
        char var_737_1
        
        if (arg2 != arg1[0x18] || arg4 != arg1[0x19])
            var_737_1 = 0
        else
            int64_t* i = arg2[0x1a]
            var_737_1 = 1
            
            for (; i != &i[sx.q(arg2[0x1b].d)]; i = &i[1])
                if (*i == arg1)
                    goto label_141f344ce_1
        
        int64_t rcx_32
        
        if (arg2 == arg1)
            void var_6a8
            sub_140b58170(&var_6a8, "PIE", 1)
            int64_t var_588
            void var_290
            int64_t* rax_3 = sub_140aae2f0(&var_290, sub_140d21e10(arg1, &var_588, 0))
            void var_478
            char* var_388
            char** rax_5 = sub_140a96390(&var_388, 
                _vfprintf_p_l(&var_478, AttachTo: '{0}' cannot be attached to itself. Aborting.", 
                SceneComponent"))
            int64_t rcx_7 = *rax_3
            int64_t* rcx_8 = rax_3[1]
            int32_t var_230_1 = 4
            
            if (rcx_8 != 0)
                rcx_8[1].d += 1
            
            int32_t rax_6 = rax_3[2].d
            char var_208_1 = 1
            int32_t* var_6d8 = nullptr
            int32_t var_6d0_1 = 1
            sub_1405a4b40(&var_6d8, 1, 0)
            int32_t* rcx_10 = var_6d8
            *rcx_10 = var_230_1
            int64_t var_228
            *(rcx_10 + 8) = var_228
            *(rcx_10 + 8) = var_228
            rcx_10[2] = var_228.d
            *(rcx_10 + 8) = var_228
            rcx_10[0xa].b = 0
            
            if (var_208_1 != 0)
                *(rcx_10 + 0x10) = rcx_7
                *(rcx_10 + 0x18) = rcx_8
                
                if (rcx_8 != 0)
                    rcx_8[1].d += 1
                
                rcx_10[8] = rax_6
                rcx_10[0xa].b = 1
            
            char* var_608 = *rax_5
            void* rax_14 = rax_5[1]
            void* var_600_1 = rax_14
            
            if (rax_14 != 0)
                *(rax_14 + 8) += 1
            
            void var_490
            int64_t* rax_15 = sub_140aac870(&var_490, &var_608, &var_6d8)
            int64_t var_648 = *rax_15
            int64_t* rcx_13 = rax_15[1]
            
            if (rcx_13 != 0)
                rcx_13[1].d += 1
            
            int32_t var_638_1 = rax_15[2].d
            int64_t* var_488
            
            if (var_488 != 0)
                var_488[1].d -= 1
                
                if (var_488[1].d == 1)
                    (**var_488)(var_488)
                    int32_t rax_19 = *(var_488 + 0xc)
                    *(var_488 + 0xc) -= 1
                    
                    if (rax_19 == 1)
                        (*(*var_488 + 8))(var_488, 1)
            
            sub_140596f50(&var_6d8)
            
            if (var_208_1 != 0)
                char var_208_2 = 0
                
                if (rcx_8 != 0)
                    rcx_8[1].d -= 1
                    
                    if (rcx_8[1].d == 1)
                        (**rcx_8)(rcx_8)
                        int32_t rax_23 = *(rcx_8 + 0xc)
                        *(rcx_8 + 0xc) -= 1
                        
                        if (rax_23 == 1)
                            (*(*rcx_8 + 8))(rcx_8, 1)
            
            int64_t* rbx_3 = rax_5[1]
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_27 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_27 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            int64_t* rbx_4 = rax_3[1]
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t rax_31 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rax_31 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            void var_4c8
            void var_378
            sub_140ae44d0(sub_140accdf0(&var_378, &var_6a8), &var_4c8, &var_648)
            int64_t* var_4c0
            
            if (var_4c0 != 0)
                var_4c0[1].d -= 1
                
                if (var_4c0[1].d == 1)
                    (**var_4c0)(var_4c0)
                    int32_t temp4_1 = *(var_4c0 + 0xc)
                    *(var_4c0 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_4c0 + 8))(var_4c0, 1)
            
            sub_140acd9c0(&var_378)
            
            if (rcx_13 != 0)
                rcx_13[1].d -= 1
                
                if (rcx_13[1].d == 1)
                    (**rcx_13)(rcx_13)
                    int32_t rax_38 = *(rcx_13 + 0xc)
                    *(rcx_13 + 0xc) -= 1
                    
                    if (rax_38 == 1)
                        (*(*rcx_13 + 8))(rcx_13, 1)
            
            int64_t* var_470
            
            if (var_470 != 0)
                var_470[1].d -= 1
                
                if (var_470[1].d == 1)
                    (**var_470)(var_470)
                    int32_t rdi_1 = *(var_470 + 0xc)
                    *(var_470 + 0xc) -= 1
                    
                    if (rdi_1 == 1)
                        (*(*var_470 + 8))(var_470, zx.q(rdi_1))
            
            rcx_32 = var_588
            goto label_141f32f92
        
        void* rax_43 = arg1[0x14]
        
        if (rax_43 == arg2[0x14] && rax_43 != 0 && *(rax_43 + 0x130) == arg1)
            void var_6a0
            sub_140b58170(&var_6a0, "PIE", 1)
            int64_t var_568
            void var_278
            int64_t* rax_45 = sub_140aae2f0(&var_278, sub_140d21e10(arg1, &var_568, 0))
            void var_448
            char* var_3d0
            char** rax_47 = sub_140a96390(&var_3d0, 
                _vfprintf_p_l(&var_448, 
                    AttachTo: '{0}' root component cannot be attached to other components in the sa", 
                SceneComponent"))
            int64_t rcx_40 = *rax_45
            int64_t* rcx_41 = rax_45[1]
            int32_t var_200_1 = 4
            
            if (rcx_41 != 0)
                rcx_41[1].d += 1
            
            int32_t rax_48 = rax_45[2].d
            char var_1d8_1 = 1
            int32_t* var_6e8 = nullptr
            int32_t var_6e0_1 = 1
            sub_1405a4b40(&var_6e8, 1, 0)
            int32_t* rcx_43 = var_6e8
            *rcx_43 = var_200_1
            int64_t var_1f8
            *(rcx_43 + 8) = var_1f8
            *(rcx_43 + 8) = var_1f8
            rcx_43[2] = var_1f8.d
            *(rcx_43 + 8) = var_1f8
            rcx_43[0xa].b = 0
            
            if (var_1d8_1 != 0)
                *(rcx_43 + 0x10) = rcx_40
                *(rcx_43 + 0x18) = rcx_41
                
                if (rcx_41 != 0)
                    rcx_41[1].d += 1
                
                rcx_43[8] = rax_48
                rcx_43[0xa].b = 1
            
            char* var_5f8 = *rax_47
            void* rax_56 = rax_47[1]
            void* var_5f0_1 = rax_56
            
            if (rax_56 != 0)
                *(rax_56 + 8) += 1
            
            void var_460
            int64_t* rax_57 = sub_140aac870(&var_460, &var_5f8, &var_6e8)
            int64_t var_660 = *rax_57
            int64_t* rcx_46 = rax_57[1]
            
            if (rcx_46 != 0)
                rcx_46[1].d += 1
            
            int32_t var_650_1 = rax_57[2].d
            int64_t* var_458
            
            if (var_458 != 0)
                var_458[1].d -= 1
                
                if (var_458[1].d == 1)
                    (**var_458)(var_458)
                    int32_t rax_61 = *(var_458 + 0xc)
                    *(var_458 + 0xc) -= 1
                    
                    if (rax_61 == 1)
                        (*(*var_458 + 8))(var_458, 1)
            
            sub_140596f50(&var_6e8)
            
            if (var_1d8_1 != 0)
                char var_1d8_2 = 0
                
                if (rcx_41 != 0)
                    rcx_41[1].d -= 1
                    
                    if (rcx_41[1].d == 1)
                        (**rcx_41)(rcx_41)
                        int32_t rax_65 = *(rcx_41 + 0xc)
                        *(rcx_41 + 0xc) -= 1
                        
                        if (rax_65 == 1)
                            (*(*rcx_41 + 8))(rcx_41, 1)
            
            int64_t* rbx_10 = rax_47[1]
            
            if (rbx_10 != 0)
                rbx_10[1].d -= 1
                
                if (rbx_10[1].d == 1)
                    (**rbx_10)(rbx_10)
                    int32_t rax_69 = *(rbx_10 + 0xc)
                    *(rbx_10 + 0xc) -= 1
                    
                    if (rax_69 == 1)
                        (*(*rbx_10 + 8))(rbx_10, 1)
            
            int64_t* rbx_11 = rax_45[1]
            
            if (rbx_11 != 0)
                rbx_11[1].d -= 1
                
                if (rbx_11[1].d == 1)
                    (**rbx_11)(rbx_11)
                    int32_t rax_73 = *(rbx_11 + 0xc)
                    *(rbx_11 + 0xc) -= 1
                    
                    if (rax_73 == 1)
                        (*(*rbx_11 + 8))(rbx_11, 1)
            
            void var_578
            void var_350
            sub_140ae44d0(sub_140accdf0(&var_350, &var_6a0), &var_578, &var_660)
            int64_t* var_570
            
            if (var_570 != 0)
                var_570[1].d -= 1
                
                if (var_570[1].d == 1)
                    (**var_570)(var_570)
                    int32_t temp10_1 = *(var_570 + 0xc)
                    *(var_570 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*var_570 + 8))(var_570, 1)
            
            sub_140acd9c0(&var_350)
            
            if (rcx_46 != 0)
                rcx_46[1].d -= 1
                
                if (rcx_46[1].d == 1)
                    (**rcx_46)(rcx_46)
                    int32_t rax_80 = *(rcx_46 + 0xc)
                    *(rcx_46 + 0xc) -= 1
                    
                    if (rax_80 == 1)
                        (*(*rcx_46 + 8))(rcx_46, 1)
            
            int64_t* var_440
            
            if (var_440 != 0)
                var_440[1].d -= 1
                
                if (var_440[1].d == 1)
                    (**var_440)(var_440)
                    int32_t rdi_2 = *(var_440 + 0xc)
                    *(var_440 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        (*(*var_440 + 8))(var_440, zx.q(rdi_2))
            
            rcx_32 = var_568
            goto label_141f32f92
        
        void* rax_85 = arg2[0x18]
        char var_140
        
        if (rax_85 != 0)
            while (arg1 != rax_85)
                rax_85 = *(rax_85 + 0xc0)
                
                if (rax_85 == 0)
                    goto label_141f33388
            
            void var_690
            sub_140b58170(&var_690, "PIE", 1)
            int64_t var_538
            void var_260
            int64_t* rax_117 = sub_140aae2f0(&var_260, sub_140d21e10(arg1, &var_538, 0))
            int64_t var_548
            void var_248
            int64_t* rax_119 = sub_140aae2f0(&var_248, sub_140d21e10(arg2, &var_548, 0))
            void var_418
            char* var_3c0
            char** rax_121 = sub_140a96390(&var_3c0, 
                _vfprintf_p_l(&var_418, 
                    AttachTo: '{0}' already attached to '{1}', would form cycle. Aborting.", 
                SceneComponent"))
            int64_t var_1b8_1 = *rax_119
            void* rcx_108 = rax_119[1]
            int32_t var_1c8_1 = 4
            void* var_1b0_1 = rcx_108
            
            if (rcx_108 != 0)
                *(rcx_108 + 8) += 1
            
            int32_t var_1a8_1 = rax_119[2].d
            int64_t var_188_1 = *rax_117
            void* rax_124 = rax_117[1]
            char var_1a0_1 = 1
            int32_t var_198_1 = 4
            void* var_180_1 = rax_124
            
            if (rax_124 != 0)
                *(rax_124 + 8) += 1
            
            int64_t i_2 = 2
            int32_t var_178_1 = rax_117[2].d
            char var_170_1 = 1
            void* var_6f8 = nullptr
            int32_t var_6f0_1 = 2
            sub_1405a4b40(&var_6f8, 2, 0)
            void var_1c0
            void* rdx_32 = &var_1c0
            int64_t* rcx_111 = var_6f8 + 8
            int32_t i_7 = 2
            int32_t i_1
            
            do
                rcx_111[-1].d = *(rdx_32 - 8)
                *rcx_111 = *rdx_32
                *rcx_111 = *rdx_32
                *rcx_111 = *rdx_32
                *rcx_111 = *rdx_32
                rcx_111[4].b = 0
                
                if (*(rdx_32 + 0x20) != 0)
                    rcx_111[1] = *(rdx_32 + 8)
                    void* rax_132 = *(rdx_32 + 0x10)
                    rcx_111[2] = rax_132
                    
                    if (rax_132 != 0)
                        *(rax_132 + 8) += 1
                    
                    rcx_111[3].d = *(rdx_32 + 0x18)
                    rcx_111[4].b = 1
                
                rcx_111 = &rcx_111[6]
                rdx_32 += 0x30
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
            char* var_5e8 = *rax_121
            void* rax_135 = rax_121[1]
            void* var_5e0_1 = rax_135
            
            if (rax_135 != 0)
                *(rax_135 + 8) += 1
            
            void var_430
            int64_t* rax_136 = sub_140aac870(&var_430, &var_5e8, &var_6f8)
            int64_t var_678 = *rax_136
            int64_t* rcx_114 = rax_136[1]
            
            if (rcx_114 != 0)
                rcx_114[1].d += 1
            
            int32_t var_668_1 = rax_136[2].d
            int64_t* var_428
            
            if (var_428 != 0)
                var_428[1].d -= 1
                
                if (var_428[1].d == 1)
                    (**var_428)(var_428)
                    int32_t rax_140 = *(var_428 + 0xc)
                    *(var_428 + 0xc) -= 1
                    
                    if (rax_140 == 1)
                        (*(*var_428 + 8))(var_428, 1)
            
            sub_140596f50(&var_6f8)
            char* rsi_4 = &var_140
            
            do
                i_2 -= 1
                rsi_4 = &rsi_4[-0x30]
                
                if (*rsi_4 != 0)
                    *rsi_4 = 0
                    int64_t* rbx_18 = *(rsi_4 - 0x10)
                    
                    if (rbx_18 != 0)
                        rbx_18[1].d -= 1
                        
                        if (rbx_18[1].d == 1)
                            (**rbx_18)(rbx_18)
                            int32_t rax_144 = *(rbx_18 + 0xc)
                            *(rbx_18 + 0xc) -= 1
                            
                            if (rax_144 == 1)
                                (*(*rbx_18 + 8))(rbx_18, 1)
            while (i_2 != 0)
            
            int64_t* rbx_20 = rax_121[1]
            
            if (rbx_20 != 0)
                rbx_20[1].d -= 1
                
                if (rbx_20[1].d == 1)
                    (**rbx_20)(rbx_20)
                    int32_t rax_148 = *(rbx_20 + 0xc)
                    *(rbx_20 + 0xc) -= 1
                    
                    if (rax_148 == 1)
                        (*(*rbx_20 + 8))(rbx_20, zx.q((i_2 + 1).d))
            
            int64_t* rbx_21 = rax_119[1]
            
            if (rbx_21 != 0)
                rbx_21[1].d -= 1
                
                if (rbx_21[1].d == 1)
                    (**rbx_21)(rbx_21)
                    int32_t rax_152 = *(rbx_21 + 0xc)
                    *(rbx_21 + 0xc) -= 1
                    
                    if (rax_152 == 1)
                        (*(*rbx_21 + 8))(rbx_21, 1)
            
            int64_t* rbx_22 = rax_117[1]
            
            if (rbx_22 != 0)
                rbx_22[1].d -= 1
                
                if (rbx_22[1].d == 1)
                    (**rbx_22)(rbx_22)
                    int32_t rax_156 = *(rbx_22 + 0xc)
                    *(rbx_22 + 0xc) -= 1
                    
                    if (rax_156 == 1)
                        (*(*rbx_22 + 8))(rbx_22, 1)
            
            void var_558
            void var_328
            sub_140ae44d0(sub_140accdf0(&var_328, &var_690), &var_558, &var_678)
            int64_t* var_550
            
            if (var_550 != 0)
                var_550[1].d -= 1
                
                if (var_550[1].d == 1)
                    (**var_550)(var_550)
                    int32_t temp21_1 = *(var_550 + 0xc)
                    *(var_550 + 0xc) -= 1
                    
                    if (temp21_1 == 1)
                        (*(*var_550 + 8))(var_550, 1)
            
            sub_140acd9c0(&var_328)
            
            if (rcx_114 != 0)
                rcx_114[1].d -= 1
                
                if (rcx_114[1].d == 1)
                    (**rcx_114)(rcx_114)
                    int32_t rax_163 = *(rcx_114 + 0xc)
                    *(rcx_114 + 0xc) -= 1
                    
                    if (rax_163 == 1)
                        (*(*rcx_114 + 8))(rcx_114, 1)
            
            int64_t* var_410
            
            if (var_410 != 0)
                var_410[1].d -= 1
                
                if (var_410[1].d == 1)
                    (**var_410)(var_410)
                    int32_t rdi_4 = *(var_410 + 0xc)
                    *(var_410 + 0xc) -= 1
                    
                    if (rdi_4 == 1)
                        (*(*var_410 + 8))(var_410, zx.q(rdi_4))
            
            int64_t rcx_135 = var_548
            
            if (rcx_135 != 0)
                sub_140a74f90(rcx_135)
            
            rcx_32 = var_538
            goto label_141f32f92
        
    label_141f33388:
        
        if ((*(*arg2 + 0x4e8))(arg2, arg1, arg4).b == 0)
            result.b = 0
        else
            char rax_87 = sub_141ee76e0(arg1)
            float var_c8[0x4]
            
            if (rax_87 != 0 || *(arg1 + 0x14f) != rax_87 || *(arg2 + 0x14f) == rax_87)
                if (sub_140d23dc0(arg2, 0x30) == sub_140d23dc0(arg1, 0x30))
                    char r13_1 = *(arg1 + 0x14d)
                    *(arg1 + 0x14d) = r13_1 | 0x20
                    int64_t* rdx_38 = arg2[0x1a]
                    int64_t* r15_3 = rdx_38
                    void* rcx_139 = &rdx_38[sx.q(arg2[0x1b].d)]
                    int32_t r15_4
                    
                    if (rdx_38 == rcx_139)
                    label_141f33b83:
                        r15_4 = -1
                    else
                        while (*r15_3 != arg1)
                            r15_3 = &r15_3[1]
                            
                            if (r15_3 == rcx_139)
                                goto label_141f33b83
                        
                        r15_4 = ((r15_3 - rdx_38) s>> 3).d
                    
                    int32_t rax_172 = data_143a2d7b4
                    
                    if (rax_172 == 1 && (*(arg1 + 0x14c) & 2) == 0 && rax_172 == rax_172)
                        char rax_173 = *(arg2 + 0x14c)
                        
                        if ((rax_173 & 2) != 0)
                            void* rcx_140 = arg2[0x18]
                            *(arg2 + 0x14c) = rax_173 & 0xfd
                            
                            if (rcx_140 != 0)
                                sub_141f36700(rcx_140)
                    
                    char rax_174 = *arg3
                    char rcx_141 = arg3[1]
                    char rdx_39 = arg3[2]
                    bool var_734 = rax_174 != 0
                    char var_731_1 = 1
                    bool var_733_1 = rcx_141 != 0
                    bool var_732_1 = rdx_39 != 0
                    
                    if (var_737_1 == 0 || (arg1[0x11].b & 1) != 0 || rax_174 != 0 || rcx_141 != 0
                            || rdx_39 != 0 || r15_4 != 0xffffffff)
                        (*(*arg1 + 0x400))(arg1, &var_734)
                    
                    *(arg1 + 0x14d) &= 0xdf
                    r13_1 &= 0x20
                    *(arg1 + 0x14d) |= r13_1
                    var_738 = r13_1
                    char rax_176
                    int64_t r8_10
                    rax_176, r8_10 = sub_141f2c990(arg1)
                    
                    if (rax_176 == 0)
                    label_141f34032:
                        sub_1423bc410(&arg1[6], arg2, &arg2[6])
                        *(arg1 + 0x14c) |= 0x40
                        char rax_192 = 0
                        bool rcx_155 = *(arg1 + 0x14c)
                        arg1[0x18] = arg2
                        arg1[0x19] = arg4
                        
                        if (*arg3 == 2)
                            rax_192 = -0x80
                        
                        *(arg1 + 0x14c) = rax_192 | (rcx_155 & 0x7f)
                        int64_t rax_194 = *arg1
                        *(arg1 + 0x14d) = arg3[1] == 2 | (*(arg1 + 0x14d) & 0xfe)
                        (*(rax_194 + 0x478))(arg1, 0x80)
                        
                        if (r15_4 == 0xffffffff)
                            int64_t r15_6 = sx.q(arg2[0x1b].d)
                            int32_t rax_196 = (r15_6 + 1).d
                            arg2[0x1b].d = rax_196
                            
                            if (rax_196 s> *(arg2 + 0xdc))
                                sub_1405a4d70(&arg2[0x1a])
                            
                            *(arg2[0x1a] + (r15_6 << 3)) = arg1
                        else
                            sub_141f2c670(&arg2[0x1a], r15_4, 1)
                            *(arg2[0x1a] + (sx.q(r15_4) << 3)) = arg1
                        
                        sub_140d18150(arg1, arg2, 1)
                        
                        if ((arg2[0x11].b & 0x10) != 0 && sub_141ee58f0(arg2) != 3)
                            int32_t rax_199
                            
                            if ((arg1[0x11].b & 0x10) != 0)
                                rax_199 = sub_141ee58f0(arg1)
                            
                            if ((arg1[0x11].b & 0x10) == 0 || rax_199 == 3)
                                int64_t* var_680 = arg1
                                sub_1405a7050(&arg2[0x1c], &var_680)
                        
                        int64_t* rcx_164 = arg1[0x18]
                        void var_a8
                        (*(*rcx_164 + 0x408))(rcx_164, &var_a8, arg1[0x19], 0)
                        float var_d8[0x4]
                        sub_140ad7d70(&arg1[0x38], &var_d8, &var_a8)
                        uint32_t rcx_166 = zx.d(*arg3)
                        float zmm2_2[0x4]
                        
                        if (rcx_166 == 1)
                            int32_t rax_201
                            
                            if ((*(arg1 + 0x14c) & 4) == 0)
                                zmm2_2 = var_c8
                                rax_201 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa).d
                            else
                                zmm2_2 = *(arg1 + 0x1d0)
                                rax_201 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa).d
                            
                            *(arg1 + 0x11c) = (_mm_unpacklo_ps(zmm2_2, 
                                _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)[0].q)).q
                            *(arg1 + 0x124) = rax_201
                        else if (rcx_166 == 2)
                            *(arg1 + 0x11c) = data_143dbb1f8.q
                            *(arg1 + 0x124) = data_143dbb200
                        
                        uint32_t rcx_168 = zx.d(arg3[1])
                        
                        if (rcx_168 == 1)
                            float rax_202
                            float zmm1_5[0x4]
                            
                            if ((*(arg1 + 0x14c) & 8) == 0)
                                float zmm6_1[0x4] = var_d8
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(*(arg1 + 0x1a0), zmm6_1, 4)) != 0)
                                    float zmm5_2[0x4] = data_143f3b3d0
                                    zmm1_5 = _mm_mul_ps(zmm6_1, zmm6_1)
                                    zmm1_5 =
                                        _mm_add_ps(zmm1_5, _mm_shuffle_ps(zmm1_5, zmm1_5, 0x4e))
                                    float zmm4_2[0x4] =
                                        _mm_add_ps(_mm_shuffle_ps(zmm1_5, zmm1_5, 0x39), zmm1_5)
                                    zmm1_5 = _mm_rsqrt_ps(zmm4_2)
                                    float zmm3_1[0x4] = _mm_mul_ps(zmm4_2, zmm5_2)
                                    zmm2_2 = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm5_2, 
                                                _mm_mul_ps(_mm_mul_ps(zmm1_5, zmm1_5), zmm3_1)), 
                                            zmm1_5), 
                                        zmm1_5)
                                    zmm5_2 = _mm_sub_ps(zmm5_2, 
                                        _mm_mul_ps(_mm_mul_ps(zmm2_2, zmm2_2), zmm3_1))
                                    uint128_t zmm0_5 = _mm_cmpeq_ps(
                                        _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
                                    *(arg1 + 0x1a0) = _mm_and_ps(
                                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_2, zmm2_2), zmm2_2), 
                                            zmm6_1) ^ data_143f3b3c0, 
                                        zmm0_5) ^ data_143f3b3c0
                                    void var_4b8
                                    int64_t* rax_207 = sub_140adf5d0(&arg1[0x34], &var_4b8)
                                    arg1[0x36] = *rax_207
                                    arg1[0x37].d = rax_207[1].d
                                
                                arg1[0x25] = arg1[0x36]
                                rax_202 = arg1[0x37].d
                            else
                                zmm1_5 = *(arg1 + 0x1c0)
                                uint32_t temp0_77 =
                                    _mm_movemask_ps(_mm_cmpeq_ps(*(arg1 + 0x180), zmm1_5, 4))
                                float var_4d8[0x4] = zmm1_5
                                
                                if (temp0_77 != 0)
                                    *(arg1 + 0x180) = zmm1_5
                                    void var_4ac
                                    int32_t* rax_204 = sub_140adf5d0(&var_4d8, &var_4ac)
                                    arg1[0x32] = *rax_204
                                    arg1[0x33].d = rax_204[2]
                                
                                arg1[0x25] = arg1[0x32]
                                rax_202 = arg1[0x33].d
                            arg1[0x26].d = rax_202
                        else if (rcx_168 == 2)
                            arg1[0x25] = data_143dbb208
                            arg1[0x26].d = data_143dbb210
                        
                        uint32_t rcx_172 = zx.d(arg3[2])
                        
                        if (rcx_172 == 1)
                            int32_t rax_209
                            
                            if ((*(arg1 + 0x14c) & 0x10) == 0)
                                float var_b8[0x4]
                                zmm2_2 = var_b8
                                rax_209 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa).d
                            else
                                zmm2_2 = *(arg1 + 0x1e0)
                                rax_209 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa).d
                            
                            *(arg1 + 0x134) = (_mm_unpacklo_ps(zmm2_2, 
                                _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)[0].q)).q
                            *(arg1 + 0x13c) = rax_209
                        else if (rcx_172 == 2)
                            int32_t var_6c0_2 = 0x3f800000
                            *(arg1 + 0x134) = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
                            *(arg1 + 0x13c) = 0x3f800000
                        
                        int64_t* rcx_174 = arg1[0x18]
                        (*(*rcx_174 + 0x4f8))(rcx_174, arg1)
                        int64_t r8_18
                        result, r8_18 = sub_1405c6ac0(arg1, 0, 1)
                        
                        if (arg3[3] != 0)
                            result, r8_18 = sub_141f2c990(arg1)
                            
                            if (result.b != 0)
                                r8_18.b = 1
                                int64_t var_710_1 = 0
                                result, r8_18 = (*(*arg1 + 0x6a8))(arg1, 0, r8_18)
                                
                                if (result != 0)
                                    result, r8_18 = (*(*arg1 + 0x6e0))(arg1, arg1[0x18], 
                                        arg1[0x19], zx.q(arg3[3]))
                        
                        if ((arg1[0x11].b & 1) == 0)
                        label_141f344ce:
                            result.b = 1
                        else if (arg1[0x2f].d s<= 0)
                            if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
                                r8_18.b = 1
                                result = (*(*arg1 + 0x468))(arg1, 0, r8_18, 0)
                                *(arg1 + 0x14c) &= 0xfd
                                result.b &= 1
                                result.b *= 2
                                *(arg1 + 0x14c) |= result.b
                            
                        label_141f344ce_1:
                            result.b = 1
                        else
                            void* rdx_57 = *(arg1[0x2e] + (sx.q(arg1[0x2f].d) << 3) - 8)
                            result.b = 1
                            *(rdx_57 + 0x350) |= 2
                            *(rdx_57 + 0x10) = 3
                            *(rdx_57 + 0x74) = 0xffffffff
                    else
                        r8_10.b = 1
                        int64_t var_730_1 = 0
                        void* rax_178 = (*(*arg1 + 0x6a8))(arg1, 0, r8_10)
                        
                        if (rax_178 == 0 || (*(rax_178 + 0xc) & 0x10) == 0 || arg3[3] != 0)
                            goto label_141f34032
                        
                        void* rax_179 = arg1[0x15]
                        void* var_730_2 = rax_179
                        
                        if (rax_179 == 0)
                            rax_179 = sub_141ee69e0(arg1)
                            var_730_2 = rax_179
                            
                            if (rax_179 == 0)
                                goto label_141f34032
                            
                            goto label_141f33caa
                        
                    label_141f33caa:
                        
                        if (sub_14243ade0(rax_179) == 0 || (*(var_730_2 + 0x11c) & 2) != 0
                                || (((*(arg1[0x14] + 0x5c) & 0x60) - 0x20) & 0xdf) != 0)
                            goto label_141f34032
                        
                        int64_t rax_183 = *arg1
                        *(arg1 + 0x14d) |= 0x20
                        (*(rax_183 + 0x400))(arg1, &var_734)
                        result.b = *(arg1 + 0x14d) & 0xdf
                        result.b |= var_738
                        *(arg1 + 0x14d) = result.b
                        
                        if (*arg3 == 0 || arg3[1] == 0 || arg3[2] == 0)
                            float zmm0_3[0x4] = zx.o(arg1[0x25])
                            float zmm8[0x4]
                            
                            if (zmm0_3[0] f!= arg1[0x36].d || zmm0_3.q:4.d[0] f!= *(arg1 + 0x1b4)
                                    || not(arg1[0x26].d[0] f== arg1[0x37].d))
                                float zmm4_1[0x4] = zx.o(arg1[0x25])
                                int32_t rax_185 = arg1[0x26].d
                                float zmm5_1[0x4] = data_143f3b3e0
                                float zmm2[0x4] =
                                    _mm_unpacklo_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), 0)
                                float zmm7[0x4] = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(zmm4_1, rax_185[0].q), zmm2[0].q)
                                zmm2 = data_143f3b420
                                float var_68_1[0x4] = zmm8
                                zmm8 = data_143f3b410
                                float zmm3[0x4] = _mm_div_ps(zmm7, zmm8)
                                zmm5_1 = _mm_and_ps(zmm5_1, zmm8)
                                zmm4_1 = _mm_cvtepi32_ps(_mm_cvttps_epi32(zmm3))
                                zmm2 = _mm_and_ps(
                                    _mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3, data_143f3b3e0), 
                                        2), 
                                    zmm4_1 ^ zmm3) ^ zmm4_1
                                float zmm1_1[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5_1), 
                                    _mm_min_ps(_mm_sub_ps(zmm7, _mm_mul_ps(zmm2, zmm8)), zmm5_1))
                                zmm0_3 = _mm_add_ps(zmm1_1, zmm8)
                                zmm2 = _mm_and_ps(zmm0_3 ^ zmm1_1, _mm_cmpeq_ps(zx.o(0), zmm1_1, 2))
                                    ^ zmm0_3
                                zmm0_3 = _mm_cmpeq_ps(data_143f3b400, zmm2, 1)
                                zmm3 = _mm_and_ps(_mm_sub_ps(zmm2, zmm8) ^ zmm2, zmm0_3) ^ zmm2
                                float var_720_3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)[0]
                                arg1[0x36] =
                                    (_mm_unpacklo_ps(zmm3, _mm_shuffle_ps(zmm3, zmm3, 0x55)[0].q)).q
                                arg1[0x37].d = var_720_3
                                float var_398[0x4]
                                float (* rax_187)[0x4]
                                rax_187, zmm6 = sub_140ade170(&arg1[0x36], &var_398)
                                zmm8 = var_68_1
                                *(arg1 + 0x1a0) = *rax_187
                            
                            char var_740_1 = 0
                            float var_4f8[0x4]
                            int128_t* var_748_1 = &var_4f8
                            var_4f8 = *(arg1 + 0x1a0)
                            int64_t r8_12
                            float zmm9[0x4]
                            float zmm11[0x4]
                            uint128_t zmm12
                            uint128_t zmm15
                            result, r8_12 = sub_141f4d380(arg1, arg2, arg4, 0, zmm6, zmm8, zmm9, 
                                zmm11, zmm12, zmm15, var_748_1, var_740_1)
                            float zmm2_1[0x4]
                            
                            if (*arg3 == 0)
                                zmm2_1 = *(arg1 + 0x1d0)
                                result = zx.q(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d)
                                *(arg1 + 0x11c) = (_mm_unpacklo_ps(zmm2_1, 
                                    _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
                                *(arg1 + 0x124) = result.d
                            
                            if (arg3[1] == 0)
                                float zmm1_4[0x4] = *(arg1 + 0x1c0)
                                uint32_t temp0_68 =
                                    _mm_movemask_ps(_mm_cmpeq_ps(*(arg1 + 0x180), zmm1_4, 4))
                                float var_4e8[0x4] = zmm1_4
                                
                                if (temp0_68 != 0)
                                    *(arg1 + 0x180) = zmm1_4
                                    void var_4a0
                                    int32_t* rax_189
                                    rax_189, r8_12 = sub_140adf5d0(&var_4e8, &var_4a0)
                                    arg1[0x32] = *rax_189
                                    arg1[0x33].d = rax_189[2]
                                
                                arg1[0x25] = arg1[0x32]
                                arg1[0x26].d = arg1[0x33].d
                            
                            if (arg3[2] == 0)
                                zmm2_1 = *(arg1 + 0x1e0)
                                result = zx.q(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa).d)
                                *(arg1 + 0x134) = (_mm_unpacklo_ps(zmm2_1, 
                                    _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
                                *(arg1 + 0x13c) = result.d
                            
                            if ((arg1[0x11].b & 1) != 0)
                                if (arg1[0x2f].d s> 0)
                                    void* rdx_45 = *(arg1[0x2e] + (sx.q(arg1[0x2f].d) << 3) - 8)
                                    *(rdx_45 + 0x350) |= 2
                                    *(rdx_45 + 0x10) = 3
                                    *(rdx_45 + 0x74) = 0xffffffff
                                else if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
                                    r8_12.b = 1
                                    result = (*(*arg1 + 0x468))(arg1, 0, r8_12, 0)
                                    *(arg1 + 0x14c) &= 0xfd
                                    result.b &= 1
                                    result.b *= 2
                                    *(arg1 + 0x14c) |= result.b
                        
                        result.b = 0
                else
                    sub_140d23dc0(arg2, 0x30)
                    result.b = 0
            else
                int64_t var_6b8 = 0
                int64_t var_6b0_1 = 0
                void var_688
                sub_140b58170(&var_688, "PIE", 1)
                int64_t var_508
                void var_2d8
                int64_t* rax_89 = sub_140aae2f0(&var_2d8, sub_140d21e10(arg1, &var_508, 0))
                void var_2c0
                int64_t* rax_90 = sub_140aae420(&var_2c0, &var_6b8)
                int64_t var_518
                void var_2a8
                int64_t* rax_92 = sub_140aae2f0(&var_2a8, sub_140d21e10(arg2, &var_518, 0))
                void var_3e8
                char* var_3b0
                char** rax_94 = sub_140a96390(&var_3b0, 
                    _vfprintf_p_l(&var_3e8, 
                        AttachTo: '{0}' is not static {1}, cannot attach '{2}' which is static to it. "
                "Aborting.", 
                    SceneComponent"))
                int64_t var_158_1 = *rax_92
                void* rcx_76 = rax_92[1]
                int32_t var_168_1 = 4
                void* var_150_1 = rcx_76
                
                if (rcx_76 != 0)
                    *(rcx_76 + 8) += 1
                
                int64_t var_128_1 = *rax_90
                void* rax_96 = rax_90[1]
                int32_t var_148_1 = rax_92[2].d
                var_140 = 1
                int32_t var_138_1 = 4
                void* var_120_1 = rax_96
                
                if (rax_96 != 0)
                    *(rax_96 + 8) += 1
                
                int32_t var_118_1 = rax_90[2].d
                int64_t var_f8_1 = *rax_89
                void* rax_99 = rax_89[1]
                char var_110_1 = 1
                int32_t var_108_1 = 4
                void* var_f0_1 = rax_99
                
                if (rax_99 != 0)
                    *(rax_99 + 8) += 1
                
                int64_t i_5 = 3
                int32_t var_e8_1 = rax_89[2].d
                char var_e0_1 = 1
                void* var_708 = nullptr
                int32_t var_700_1 = 3
                sub_1405a4b40(&var_708, 3, 0)
                void var_160
                void* rdx_23 = &var_160
                int64_t* rcx_80 = var_708 + 8
                int32_t i_6 = 3
                int32_t i_3
                
                do
                    rcx_80[-1].d = *(rdx_23 - 8)
                    *rcx_80 = *rdx_23
                    *rcx_80 = *rdx_23
                    *rcx_80 = *rdx_23
                    *rcx_80 = *rdx_23
                    rcx_80[4].b = 0
                    
                    if (*(rdx_23 + 0x20) != 0)
                        rcx_80[1] = *(rdx_23 + 8)
                        void* rax_107 = *(rdx_23 + 0x10)
                        rcx_80[2] = rax_107
                        
                        if (rax_107 != 0)
                            *(rax_107 + 8) += 1
                        
                        rcx_80[3].d = *(rdx_23 + 0x18)
                        rcx_80[4].b = 1
                    
                    rcx_80 = &rcx_80[6]
                    rdx_23 += 0x30
                    i_3 = i_6
                    i_6 -= 1
                while (i_3 != 1)
                char* var_5d8 = *rax_94
                void* rax_110 = rax_94[1]
                void* var_5d0_1 = rax_110
                
                if (rax_110 != 0)
                    *(rax_110 + 8) += 1
                
                void var_400
                int64_t* rax_111 = sub_140aac870(&var_400, &var_5d8, &var_708)
                int64_t var_630 = *rax_111
                void* rcx_83 = rax_111[1]
                void* var_628_1 = rcx_83
                
                if (rcx_83 != 0)
                    *(rcx_83 + 8) += 1
                
                int32_t var_620_1 = rax_111[2].d
                sub_1405970a0(&var_400)
                sub_140596f50(&var_708)
                int128_t* rdi_3 = &var_c8
                int64_t i_4
                
                do
                    rdi_3 -= 0x30
                    sub_1405d57e0(rdi_3)
                    i_4 = i_5
                    i_5 -= 1
                while (i_4 != 1)
                sub_1405970a0(rax_94)
                sub_1405970a0(rax_92)
                sub_1405970a0(rax_90)
                sub_1405970a0(rax_89)
                void var_528
                void var_300
                sub_140ae44d0(sub_140accdf0(&var_300, &var_688), &var_528, &var_630)
                int64_t* var_520
                
                if (var_520 != 0)
                    var_520[1].d -= 1
                    
                    if (var_520[1].d == 1)
                        (**var_520)(var_520)
                        int32_t temp17_1 = *(var_520 + 0xc)
                        *(var_520 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            (*(*var_520 + 8))(var_520, 1)
                
                sub_140acd9c0(&var_300)
                sub_1405970a0(&var_630)
                sub_1405970a0(&var_3e8)
                int64_t rcx_98 = var_518
                
                if (rcx_98 != 0)
                    sub_140a74f90(rcx_98)
                
                int64_t rcx_99 = var_508
                
                if (rcx_99 != 0)
                    sub_140a74f90(rcx_99)
                
                rcx_32 = var_6b8
            label_141f32f92:
                
                if (rcx_32 == 0)
                    result.b = 0
                else
                    sub_140a74f90(rcx_32)
                    result.b = 0
else
    sub_141f4a650(arg1, arg2, arg4)
    *(arg1 + 0x14c) &= 0x7f
    result.b = 1
    *(arg1 + 0x14d) &= 0xfe

__security_check_cookie(rax_1 ^ &var_768)
return result
