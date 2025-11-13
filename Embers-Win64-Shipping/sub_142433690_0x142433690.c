// 函数: sub_142433690
// 地址: 0x142433690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
*arg1 = 0
arg1[1] = 0
sub_1405a5130(arg1, 0xff)
TEB* gsbase
void* r15 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)

do
    int64_t* rbx_2
    
    if (i != 0)
        switch (i)
            case 1
                void var_2a0
                int64_t* rax_6 = _vfprintf_p_l(&var_2a0, u"Wireframe", u"UViewModeUtils")
                int64_t rbx_3 = sx.q(arg1[1].d)
                int32_t rcx_5 = (rbx_3 + 1).d
                arg1[1].d = rcx_5
                
                if (rcx_5 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_7 = *arg1 + rbx_3 * 0x18
                *rcx_7 = *rax_6
                void* rax_9 = rax_6[1]
                rcx_7[1] = rax_9
                
                if (rax_9 != 0)
                    *(rax_9 + 8) += 1
                
                rcx_7[2].d = rax_6[2].d
                int64_t* var_298
                rbx_2 = var_298
                goto label_1424343a0
            case 2
                void var_288
                int64_t* rax_11 = _vfprintf_p_l(&var_288, u"Unlit", u"UViewModeUtils")
                int64_t rbx_4 = sx.q(arg1[1].d)
                int32_t rcx_9 = (rbx_4 + 1).d
                arg1[1].d = rcx_9
                
                if (rcx_9 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_11 = *arg1 + rbx_4 * 0x18
                *rcx_11 = *rax_11
                void* rax_14 = rax_11[1]
                rcx_11[1] = rax_14
                
                if (rax_14 != 0)
                    *(rax_14 + 8) += 1
                
                rcx_11[2].d = rax_11[2].d
                int64_t* var_280
                rbx_2 = var_280
                goto label_1424343a0
            case 3
                void var_270
                int64_t* rax_16 = _vfprintf_p_l(&var_270, &data_143326ea8, u"UViewModeUtils")
                int64_t rbx_5 = sx.q(arg1[1].d)
                int32_t rcx_13 = (rbx_5 + 1).d
                arg1[1].d = rcx_13
                
                if (rcx_13 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_15 = *arg1 + rbx_5 * 0x18
                *rcx_15 = *rax_16
                void* rax_19 = rax_16[1]
                rcx_15[1] = rax_19
                
                if (rax_19 != 0)
                    *(rax_19 + 8) += 1
                
                rcx_15[2].d = rax_16[2].d
                int64_t* var_268
                rbx_2 = var_268
                goto label_1424343a0
            case 4
                void var_258
                int64_t* rax_21 = _vfprintf_p_l(&var_258, u"Detail Lighting", u"UViewModeUtils")
                int64_t rbx_6 = sx.q(arg1[1].d)
                int32_t rcx_17 = (rbx_6 + 1).d
                arg1[1].d = rcx_17
                
                if (rcx_17 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_19 = *arg1 + rbx_6 * 0x18
                *rcx_19 = *rax_21
                void* rax_24 = rax_21[1]
                rcx_19[1] = rax_24
                
                if (rax_24 != 0)
                    *(rax_24 + 8) += 1
                
                rcx_19[2].d = rax_21[2].d
                int64_t* var_250
                rbx_2 = var_250
                goto label_1424343a0
            case 5
                void var_240
                int64_t* rax_26 = _vfprintf_p_l(&var_240, u"Lighting Only", u"UViewModeUtils")
                int64_t rbx_7 = sx.q(arg1[1].d)
                int32_t rcx_21 = (rbx_7 + 1).d
                arg1[1].d = rcx_21
                
                if (rcx_21 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_23 = *arg1 + rbx_7 * 0x18
                *rcx_23 = *rax_26
                void* rax_29 = rax_26[1]
                rcx_23[1] = rax_29
                
                if (rax_29 != 0)
                    *(rax_29 + 8) += 1
                
                rcx_23[2].d = rax_26[2].d
                int64_t* var_238
                rbx_2 = var_238
                goto label_1424343a0
            case 6
                void var_228
                int64_t* rax_31 = _vfprintf_p_l(&var_228, u"Light Complexity", u"UViewModeUtils")
                int64_t rbx_8 = sx.q(arg1[1].d)
                int32_t rcx_25 = (rbx_8 + 1).d
                arg1[1].d = rcx_25
                
                if (rcx_25 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_27 = *arg1 + rbx_8 * 0x18
                *rcx_27 = *rax_31
                void* rax_34 = rax_31[1]
                rcx_27[1] = rax_34
                
                if (rax_34 != 0)
                    *(rax_34 + 8) += 1
                
                rcx_27[2].d = rax_31[2].d
                int64_t* var_220
                rbx_2 = var_220
                goto label_1424343a0
            case 8
                void var_210
                int64_t* rax_36 = _vfprintf_p_l(&var_210, u"Shader Complexity", u"UViewModeUtils")
                int64_t rbx_9 = sx.q(arg1[1].d)
                int32_t rcx_29 = (rbx_9 + 1).d
                arg1[1].d = rcx_29
                
                if (rcx_29 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_31 = *arg1 + rbx_9 * 0x18
                *rcx_31 = *rax_36
                void* rax_39 = rax_36[1]
                rcx_31[1] = rax_39
                
                if (rax_39 != 0)
                    *(rax_39 + 8) += 1
                
                rcx_31[2].d = rax_36[2].d
                int64_t* var_208
                rbx_2 = var_208
                goto label_1424343a0
            case 9
                void var_1f8
                int64_t* rax_41 = _vfprintf_p_l(&var_1f8, u"Lightmap Density", u"UViewModeUtils")
                int64_t rbx_10 = sx.q(arg1[1].d)
                int32_t rcx_33 = (rbx_10 + 1).d
                arg1[1].d = rcx_33
                
                if (rcx_33 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_35 = *arg1 + rbx_10 * 0x18
                *rcx_35 = *rax_41
                void* rax_44 = rax_41[1]
                rcx_35[1] = rax_44
                
                if (rax_44 != 0)
                    *(rax_44 + 8) += 1
                
                rcx_35[2].d = rax_41[2].d
                int64_t* var_1f0
                rbx_2 = var_1f0
                goto label_1424343a0
            case 0xa
                void var_1e0
                int64_t* rax_46 = _vfprintf_p_l(&var_1e0, Lit Lightmap Density", UViewModeUtils")
                int64_t rbx_11 = sx.q(arg1[1].d)
                int32_t rcx_37 = (rbx_11 + 1).d
                arg1[1].d = rcx_37
                
                if (rcx_37 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_39 = *arg1 + rbx_11 * 0x18
                *rcx_39 = *rax_46
                void* rax_49 = rax_46[1]
                rcx_39[1] = rax_49
                
                if (rax_49 != 0)
                    *(rax_49 + 8) += 1
                
                rcx_39[2].d = rax_46[2].d
                int64_t* var_1d8
                rbx_2 = var_1d8
                goto label_1424343a0
            case 0xb
                void var_1c8
                int64_t* rax_51 = _vfprintf_p_l(&var_1c8, u"Reflections", u"UViewModeUtils")
                int64_t rbx_12 = sx.q(arg1[1].d)
                int32_t rcx_41 = (rbx_12 + 1).d
                arg1[1].d = rcx_41
                
                if (rcx_41 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_43 = *arg1 + rbx_12 * 0x18
                *rcx_43 = *rax_51
                void* rax_54 = rax_51[1]
                rcx_43[1] = rax_54
                
                if (rax_54 != 0)
                    *(rax_54 + 8) += 1
                
                rcx_43[2].d = rax_51[2].d
                int64_t* var_1c0
                rbx_2 = var_1c0
                goto label_1424343a0
            case 0xc
                void var_1b0
                int64_t* rax_56 = _vfprintf_p_l(&var_1b0, Buffer Visualization5", UViewModeUtils")
                int64_t rbx_13 = sx.q(arg1[1].d)
                int32_t rcx_45 = (rbx_13 + 1).d
                arg1[1].d = rcx_45
                
                if (rcx_45 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_47 = *arg1 + rbx_13 * 0x18
                *rcx_47 = *rax_56
                void* rax_59 = rax_56[1]
                rcx_47[1] = rax_59
                
                if (rax_59 != 0)
                    *(rax_59 + 8) += 1
                
                rcx_47[2].d = rax_56[2].d
                int64_t* var_1a8
                rbx_2 = var_1a8
                goto label_1424343a0
            case 0xe
                void var_198
                int64_t* rax_61 = _vfprintf_p_l(&var_198, Stationary Light Overlap", UViewModeUtils"
                    )
                int64_t rbx_14 = sx.q(arg1[1].d)
                int32_t rcx_49 = (rbx_14 + 1).d
                arg1[1].d = rcx_49
                
                if (rcx_49 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_51 = *arg1 + rbx_14 * 0x18
                *rcx_51 = *rax_61
                void* rax_64 = rax_61[1]
                rcx_51[1] = rax_64
                
                if (rax_64 != 0)
                    *(rax_64 + 8) += 1
                
                rcx_51[2].d = rax_61[2].d
                int64_t* var_190
                rbx_2 = var_190
                goto label_1424343a0
            case 0xf
                void var_180
                int64_t* rax_66 = _vfprintf_p_l(&var_180, u"Player Collision", u"UViewModeUtils")
                int64_t rbx_15 = sx.q(arg1[1].d)
                int32_t rcx_53 = (rbx_15 + 1).d
                arg1[1].d = rcx_53
                
                if (rcx_53 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_55 = *arg1 + rbx_15 * 0x18
                *rcx_55 = *rax_66
                void* rax_69 = rax_66[1]
                rcx_55[1] = rax_69
                
                if (rax_69 != 0)
                    *(rax_69 + 8) += 1
                
                rcx_55[2].d = rax_66[2].d
                int64_t* var_178
                rbx_2 = var_178
                goto label_1424343a0
            case 0x10
                void var_168
                int64_t* rax_71 = _vfprintf_p_l(&var_168, Visibility Collision", UViewModeUtils")
                int64_t rbx_16 = sx.q(arg1[1].d)
                int32_t rcx_57 = (rbx_16 + 1).d
                arg1[1].d = rcx_57
                
                if (rcx_57 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_59 = *arg1 + rbx_16 * 0x18
                *rcx_59 = *rax_71
                void* rax_74 = rax_71[1]
                rcx_59[1] = rax_74
                
                if (rax_74 != 0)
                    *(rax_74 + 8) += 1
                
                rcx_59[2].d = rax_71[2].d
                int64_t* var_160
                rbx_2 = var_160
                goto label_1424343a0
            case 0x12
                void var_150
                int64_t* rax_76 = _vfprintf_p_l(&var_150, u"Mesh LOD Coloration", u"UViewModeUtils")
                int64_t rbx_17 = sx.q(arg1[1].d)
                int32_t rcx_61 = (rbx_17 + 1).d
                arg1[1].d = rcx_61
                
                if (rcx_61 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_63 = *arg1 + rbx_17 * 0x18
                *rcx_63 = *rax_76
                void* rax_79 = rax_76[1]
                rcx_63[1] = rax_79
                
                if (rax_79 != 0)
                    *(rax_79 + 8) += 1
                
                rcx_63[2].d = rax_76[2].d
                int64_t* var_148
                rbx_2 = var_148
                goto label_1424343a0
            case 0x13
                void var_138
                int64_t* rax_81 = _vfprintf_p_l(&var_138, u"Quad Overdraw", u"UViewModeUtils")
                int64_t rbx_18 = sx.q(arg1[1].d)
                int32_t rcx_65 = (rbx_18 + 1).d
                arg1[1].d = rcx_65
                
                if (rcx_65 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_67 = *arg1 + rbx_18 * 0x18
                *rcx_67 = *rax_81
                void* rax_84 = rax_81[1]
                rcx_67[1] = rax_84
                
                if (rax_84 != 0)
                    *(rax_84 + 8) += 1
                
                rcx_67[2].d = rax_81[2].d
                int64_t* var_130
                rbx_2 = var_130
                goto label_1424343a0
            case 0x14
                void var_120
                int64_t* rax_86 = _vfprintf_p_l(&var_120, u"Primitive Distance", u"UViewModeUtils")
                int64_t rbx_19 = sx.q(arg1[1].d)
                int32_t rcx_69 = (rbx_19 + 1).d
                arg1[1].d = rcx_69
                
                if (rcx_69 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_71 = *arg1 + rbx_19 * 0x18
                *rcx_71 = *rax_86
                void* rax_89 = rax_86[1]
                rcx_71[1] = rax_89
                
                if (rax_89 != 0)
                    *(rax_89 + 8) += 1
                
                rcx_71[2].d = rax_86[2].d
                int64_t* var_118
                rbx_2 = var_118
                goto label_1424343a0
            case 0x15
                void var_108
                int64_t* rax_91 = _vfprintf_p_l(&var_108, u"Mesh UV Density", u"UViewModeUtils")
                int64_t rbx_20 = sx.q(arg1[1].d)
                int32_t rcx_73 = (rbx_20 + 1).d
                arg1[1].d = rcx_73
                
                if (rcx_73 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_75 = *arg1 + rbx_20 * 0x18
                *rcx_75 = *rax_91
                void* rax_94 = rax_91[1]
                rcx_75[1] = rax_94
                
                if (rax_94 != 0)
                    *(rax_94 + 8) += 1
                
                rcx_75[2].d = rax_91[2].d
                int64_t* var_100
                rbx_2 = var_100
                goto label_1424343a0
            case 0x16
                void var_f0
                int64_t* rax_96 = _vfprintf_p_l(&var_f0, Shader Complexity & Quads", UViewModeUtils"
                    )
                int64_t rbx_21 = sx.q(arg1[1].d)
                int32_t rcx_77 = (rbx_21 + 1).d
                arg1[1].d = rcx_77
                
                if (rcx_77 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_79 = *arg1 + rbx_21 * 0x18
                *rcx_79 = *rax_96
                void* rax_99 = rax_96[1]
                rcx_79[1] = rax_99
                
                if (rax_99 != 0)
                    *(rax_99 + 8) += 1
                
                rcx_79[2].d = rax_96[2].d
                int64_t* var_e8
                rbx_2 = var_e8
                goto label_1424343a0
            case 0x17
                void var_d8
                int64_t* rax_101 =
                    _vfprintf_p_l(&var_d8, Hierarchical LOD Coloration", UViewModeUtils")
                int64_t rbx_22 = sx.q(arg1[1].d)
                int32_t rcx_81 = (rbx_22 + 1).d
                arg1[1].d = rcx_81
                
                if (rcx_81 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_83 = *arg1 + rbx_22 * 0x18
                *rcx_83 = *rax_101
                void* rax_104 = rax_101[1]
                rcx_83[1] = rax_104
                
                if (rax_104 != 0)
                    *(rax_104 + 8) += 1
                
                rcx_83[2].d = rax_101[2].d
                int64_t* var_d0
                rbx_2 = var_d0
                goto label_1424343a0
            case 0x18
                void var_c0
                int64_t* rax_106 = _vfprintf_p_l(&var_c0, Group LOD Coloration", UViewModeUtils")
                int64_t rbx_23 = sx.q(arg1[1].d)
                int32_t rcx_85 = (rbx_23 + 1).d
                arg1[1].d = rcx_85
                
                if (rcx_85 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_87 = *arg1 + rbx_23 * 0x18
                *rcx_87 = *rax_106
                void* rax_109 = rax_106[1]
                rcx_87[1] = rax_109
                
                if (rax_109 != 0)
                    *(rax_109 + 8) += 1
                
                rcx_87[2].d = rax_106[2].d
                int64_t* var_b8
                rbx_2 = var_b8
                goto label_1424343a0
            case 0x19
                void var_a8
                int64_t* rax_111 = _vfprintf_p_l(&var_a8, Material Texture Scales", UViewModeUtils")
                int64_t rbx_24 = sx.q(arg1[1].d)
                int32_t rcx_89 = (rbx_24 + 1).d
                arg1[1].d = rcx_89
                
                if (rcx_89 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_91 = *arg1 + rbx_24 * 0x18
                *rcx_91 = *rax_111
                void* rax_114 = rax_111[1]
                rcx_91[1] = rax_114
                
                if (rax_114 != 0)
                    *(rax_114 + 8) += 1
                
                rcx_91[2].d = rax_111[2].d
                int64_t* var_a0
                rbx_2 = var_a0
                goto label_1424343a0
            case 0x1a
                void var_90
                int64_t* rax_116 =
                    _vfprintf_p_l(&var_90, Required Texture Resolution", UViewModeUtils")
                int64_t rbx_25 = sx.q(arg1[1].d)
                int32_t rcx_93 = (rbx_25 + 1).d
                arg1[1].d = rcx_93
                
                if (rcx_93 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_95 = *arg1 + rbx_25 * 0x18
                *rcx_95 = *rax_116
                void* rax_119 = rax_116[1]
                rcx_95[1] = rax_119
                
                if (rax_119 != 0)
                    *(rax_119 + 8) += 1
                
                rcx_95[2].d = rax_116[2].d
                int64_t* var_88
                rbx_2 = var_88
                goto label_1424343a0
            case 0x1b
                void var_78
                int64_t* rax_121 = _vfprintf_p_l(&var_78, u"Path Tracing", u"UViewModeUtils")
                int64_t rbx_26 = sx.q(arg1[1].d)
                int32_t rcx_97 = (rbx_26 + 1).d
                arg1[1].d = rcx_97
                
                if (rcx_97 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_99 = *arg1 + rbx_26 * 0x18
                *rcx_99 = *rax_121
                void* rax_124 = rax_121[1]
                rcx_99[1] = rax_124
                
                if (rax_124 != 0)
                    *(rax_124 + 8) += 1
                
                rcx_99[2].d = rax_121[2].d
                int64_t* var_70
                rbx_2 = var_70
                goto label_1424343a0
            case 0x1c
                void var_60
                int64_t* rax_126 = _vfprintf_p_l(&var_60, u"Ray Tracing Debug", u"UViewModeUtils")
                int64_t rbx_27 = sx.q(arg1[1].d)
                int32_t rcx_101 = (rbx_27 + 1).d
                arg1[1].d = rcx_101
                
                if (rcx_101 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_103 = *arg1 + rbx_27 * 0x18
                *rcx_103 = *rax_126
                void* rax_129 = rax_126[1]
                rcx_103[1] = rax_129
                
                if (rax_129 != 0)
                    *(rax_129 + 8) += 1
                
                rcx_103[2].d = rax_126[2].d
                int64_t* var_58
                rbx_2 = var_58
                goto label_1424343a0
            case 0x1d
                void var_48
                int64_t* rax_131 = _vfprintf_p_l(&var_48, Max EViewModeIndex value", UViewModeUtils"
                    )
                int64_t rbx_28 = sx.q(arg1[1].d)
                int32_t rcx_105 = (rbx_28 + 1).d
                arg1[1].d = rcx_105
                
                if (rcx_105 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_107 = *arg1 + rbx_28 * 0x18
                *rcx_107 = *rax_131
                void* rax_134 = rax_131[1]
                rcx_107[1] = rax_134
                
                if (rax_134 != 0)
                    *(rax_134 + 8) += 1
                
                rcx_107[2].d = rax_131[2].d
                int64_t* var_40
                rbx_2 = var_40
                goto label_1424343a0
            case 0xff
                void var_30
                int64_t* rax_136 =
                    _vfprintf_p_l(&var_30, Unknown EViewModeIndex value", UViewModeUtils")
                int64_t rbx_29 = sx.q(arg1[1].d)
                int32_t rcx_109 = (rbx_29 + 1).d
                arg1[1].d = rcx_109
                
                if (rcx_109 s> *(arg1 + 0xc))
                    sub_1405a4df0(arg1)
                
                int64_t* rcx_111 = *arg1 + rbx_29 * 0x18
                *rcx_111 = *rax_136
                void* rax_139 = rax_136[1]
                rcx_111[1] = rax_139
                
                if (rax_139 != 0)
                    *(rax_139 + 8) += 1
                
                rcx_111[2].d = rax_136[2].d
                int64_t* var_28
                rbx_2 = var_28
                goto label_1424343a0
        
        if (data_143cd6ff0 s> *(0x14 + *r15))
            _Init_thread_header(&data_143cd6ff0)
            
            if (data_143cd6ff0 == 0xffffffff)
                sub_140a96080(&data_143cd6fd8)
                atexit(sub_142cb0d20)
                _Init_thread_footer(&data_143cd6ff0)
        
        int64_t rbx_30 = sx.q(arg1[1].d)
        int32_t rax_147 = (rbx_30 + 1).d
        arg1[1].d = rax_147
        
        if (rax_147 s> *(arg1 + 0xc))
            sub_1405a4df0(arg1)
        
        int64_t* rdx_58 = *arg1 + rbx_30 * 0x18
        *rdx_58 = data_143cd6fd8
        void* rax_150 = data_143cd6fe0
        rdx_58[1] = rax_150
        
        if (rax_150 != 0)
            *(rax_150 + 8) += 1
        
        rdx_58[2].d = data_143cd6fe8
    else
        void var_2b8
        int64_t* rax_1 = _vfprintf_p_l(&var_2b8, u"Brush Wireframe", u"UViewModeUtils")
        int64_t rbx_1 = sx.q(arg1[1].d)
        int32_t rcx_1 = (rbx_1 + 1).d
        arg1[1].d = rcx_1
        
        if (rcx_1 s> *(arg1 + 0xc))
            sub_1405a4df0(arg1)
        
        int64_t* rcx_3 = *arg1 + rbx_1 * 0x18
        *rcx_3 = *rax_1
        void* rax_4 = rax_1[1]
        rcx_3[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        rcx_3[2].d = rax_1[2].d
        int64_t* var_2b0
        rbx_2 = var_2b0
    label_1424343a0:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_143 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_143 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    i += 1
while (i s< 0x100)

return arg1
