// 函数: sub_14197a240
// 地址: 0x14197a240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
void arg_18
int64_t* rax_1 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_18, "Language", 1))
int16_t* const rdi = &data_142d40450
int16_t* rdx_1

if (rax_1[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax_1

int64_t arg_10
sub_140b58260(&arg_10, rdx_1, 1)
int64_t rcx_3 = var_28
*arg2 = arg_10

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t* rax_4 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "MaxFeatureLevel", 1))
int16_t* rdx_3

if (rax_4[1].d == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *rax_4

int32_t rcx_7 = 0
void* rdx_4 = &data_143f02508
int64_t i = *sub_140b58260(&arg_18, rdx_3, 1)

while (*rdx_4 != i)
    rcx_7 += 1
    rdx_4 += 8
    
    if (rcx_7 u>= 4)
        rcx_7 = 4
        break

arg2[1].d = rcx_7
int64_t rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rax_7 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bIsMobile", 1))
wchar16* rcx_11

if (rax_7[1].d == 0)
    rcx_11 = &data_142d40450
else
    rcx_11 = *rax_7

char rax_8 = sub_140b16cc0(rcx_11)
int64_t rcx_12 = var_28

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

*(arg2 + 0xc) &= 0xfffffffe
*(arg2 + 0xc) |= zx.d(rax_8)
int64_t* rax_11 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bIsMetalMRT", 1))
wchar16* rcx_15

if (rax_11[1].d == 0)
    rcx_15 = &data_142d40450
else
    rcx_15 = *rax_11

char rax_12 = sub_140b16cc0(rcx_15)
int64_t rcx_16 = var_28

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

*(arg2 + 0xc) &= 0xfffffffd
*(arg2 + 0xc) |= zx.d(rax_12) * 2
int64_t* rax_16 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bIsPC", 1))
wchar16* rcx_19

if (rax_16[1].d == 0)
    rcx_19 = &data_142d40450
else
    rcx_19 = *rax_16

char rax_17 = sub_140b16cc0(rcx_19)
int64_t rcx_20 = var_28

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

*(arg2 + 0xc) &= 0xfffffffb
*(arg2 + 0xc) |= zx.d(rax_17) << 2
int64_t* rax_21 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bIsConsole", 1))
wchar16* rcx_23

if (rax_21[1].d == 0)
    rcx_23 = &data_142d40450
else
    rcx_23 = *rax_21

char rax_22 = sub_140b16cc0(rcx_23)
int64_t rcx_24 = var_28

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

*(arg2 + 0xc) &= 0xfffffff7
*(arg2 + 0xc) |= zx.d(rax_22) << 3
int64_t* rax_26 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bIsAndroidOpenGLES", 1))
wchar16* rcx_27

if (rax_26[1].d == 0)
    rcx_27 = &data_142d40450
else
    rcx_27 = *rax_26

char rax_27 = sub_140b16cc0(rcx_27)
int64_t rcx_28 = var_28

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

*(arg2 + 0xc) &= 0xffffffef
*(arg2 + 0xc) |= zx.d(rax_27) << 4
int64_t* rax_31 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsDrawIndirect", 1))
wchar16* rcx_31

if (rax_31[1].d == 0)
    rcx_31 = &data_142d40450
else
    rcx_31 = *rax_31

char rax_32 = sub_140b16cc0(rcx_31)
int64_t rcx_32 = var_28

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

*(arg2 + 0xc) &= 0xffffffdf
*(arg2 + 0xc) |= zx.d(rax_32) << 5
int64_t* rax_36 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsMobileMultiView", 1))
wchar16* rcx_35

if (rax_36[1].d == 0)
    rcx_35 = &data_142d40450
else
    rcx_35 = *rax_36

char rax_37 = sub_140b16cc0(rcx_35)
int64_t rcx_36 = var_28

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

*(arg2 + 0xc) &= 0xffffffbf
*(arg2 + 0xc) |= zx.d(rax_37) << 6
int64_t* rax_41 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsVolumeTextureCompression", 1))
wchar16* rcx_39

if (rax_41[1].d == 0)
    rcx_39 = &data_142d40450
else
    rcx_39 = *rax_41

char rax_42 = sub_140b16cc0(rcx_39)
int64_t rcx_40 = var_28

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

*(arg2 + 0xc) &= 0xffffff7f
*(arg2 + 0xc) |= zx.d(rax_42) << 7
int64_t* rax_46 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsDistanceFields", 1))
wchar16* rcx_43

if (rax_46[1].d == 0)
    rcx_43 = &data_142d40450
else
    rcx_43 = *rax_46

char rax_47 = sub_140b16cc0(rcx_43)
int64_t rcx_44 = var_28

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

*(arg2 + 0xc) &= 0xfffffeff
*(arg2 + 0xc) |= zx.d(rax_47) << 8
int64_t* rax_51 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsDiaphragmDOF", 1))
wchar16* rcx_47

if (rax_51[1].d == 0)
    rcx_47 = &data_142d40450
else
    rcx_47 = *rax_51

char rax_52 = sub_140b16cc0(rcx_47)
int64_t rcx_48 = var_28

if (rcx_48 != 0)
    sub_140a74f90(rcx_48)

*(arg2 + 0xc) &= 0xfffffdff
*(arg2 + 0xc) |= zx.d(rax_52) << 9
int64_t* rax_56 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsRGBColorBuffer", 1))
wchar16* rcx_51

if (rax_56[1].d == 0)
    rcx_51 = &data_142d40450
else
    rcx_51 = *rax_56

char rax_57 = sub_140b16cc0(rcx_51)
int64_t rcx_52 = var_28

if (rcx_52 != 0)
    sub_140a74f90(rcx_52)

*(arg2 + 0xc) &= 0xfffffbff
*(arg2 + 0xc) |= zx.d(rax_57) << 0xa
int64_t* rax_61 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsCapsuleShadows", 1))
wchar16* rcx_55

if (rax_61[1].d == 0)
    rcx_55 = &data_142d40450
else
    rcx_55 = *rax_61

char rax_62 = sub_140b16cc0(rcx_55)
int64_t rcx_56 = var_28

if (rcx_56 != 0)
    sub_140a74f90(rcx_56)

*(arg2 + 0xc) &= 0xfffff7ff
*(arg2 + 0xc) |= zx.d(rax_62) << 0xb
int64_t* rax_66 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsVolumetricFog", 1))
wchar16* rcx_59

if (rax_66[1].d == 0)
    rcx_59 = &data_142d40450
else
    rcx_59 = *rax_66

char rax_67 = sub_140b16cc0(rcx_59)
int64_t rcx_60 = var_28

if (rcx_60 != 0)
    sub_140a74f90(rcx_60)

*(arg2 + 0xc) &= 0xffffefff
*(arg2 + 0xc) |= zx.d(rax_67) << 0xc
int64_t* rax_71 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsIndexBufferUAVs", 1))
wchar16* rcx_63

if (rax_71[1].d == 0)
    rcx_63 = &data_142d40450
else
    rcx_63 = *rax_71

char rax_72 = sub_140b16cc0(rcx_63)
int64_t rcx_64 = var_28

if (rcx_64 != 0)
    sub_140a74f90(rcx_64)

*(arg2 + 0xc) &= 0xffffdfff
*(arg2 + 0xc) |= zx.d(rax_72) << 0xd
int64_t* rax_76 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsInstancedStereo", 1))
wchar16* rcx_67

if (rax_76[1].d == 0)
    rcx_67 = &data_142d40450
else
    rcx_67 = *rax_76

char rax_77 = sub_140b16cc0(rcx_67)
int64_t rcx_68 = var_28

if (rcx_68 != 0)
    sub_140a74f90(rcx_68)

*(arg2 + 0xc) &= 0xffffbfff
*(arg2 + 0xc) |= zx.d(rax_77) << 0xe
int64_t* rax_81 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsMultiView", 1))
wchar16* rcx_71

if (rax_81[1].d == 0)
    rcx_71 = &data_142d40450
else
    rcx_71 = *rax_81

char rax_82 = sub_140b16cc0(rcx_71)
int64_t rcx_72 = var_28

if (rcx_72 != 0)
    sub_140a74f90(rcx_72)

*(arg2 + 0xc) &= 0xffff7fff
*(arg2 + 0xc) |= zx.d(rax_82) << 0xf
int64_t* rax_86 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsMSAA", 1))
wchar16* rcx_75

if (rax_86[1].d == 0)
    rcx_75 = &data_142d40450
else
    rcx_75 = *rax_86

char rax_87 = sub_140b16cc0(rcx_75)
int64_t rcx_76 = var_28

if (rcx_76 != 0)
    sub_140a74f90(rcx_76)

*(arg2 + 0xc) &= 0xfffeffff
*(arg2 + 0xc) |= zx.d(rax_87) << 0x10
int64_t* rax_91 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupports4ComponentUAVReadWrite", 1))
wchar16* rcx_79

if (rax_91[1].d == 0)
    rcx_79 = &data_142d40450
else
    rcx_79 = *rax_91

char rax_92 = sub_140b16cc0(rcx_79)
int64_t rcx_80 = var_28

if (rcx_80 != 0)
    sub_140a74f90(rcx_80)

*(arg2 + 0xc) &= 0xfffdffff
*(arg2 + 0xc) |= zx.d(rax_92) << 0x11
int64_t* rax_96 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsRenderTargetWriteMask", 1))
wchar16* rcx_83

if (rax_96[1].d == 0)
    rcx_83 = &data_142d40450
else
    rcx_83 = *rax_96

char rax_97 = sub_140b16cc0(rcx_83)
int64_t rcx_84 = var_28

if (rcx_84 != 0)
    sub_140a74f90(rcx_84)

*(arg2 + 0xc) &= 0xfffbffff
*(arg2 + 0xc) |= zx.d(rax_97) << 0x12
int64_t* rax_101 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsRayTracing", 1))
wchar16* rcx_87

if (rax_101[1].d == 0)
    rcx_87 = &data_142d40450
else
    rcx_87 = *rax_101

char rax_102 = sub_140b16cc0(rcx_87)
int64_t rcx_88 = var_28

if (rcx_88 != 0)
    sub_140a74f90(rcx_88)

*(arg2 + 0xc) &= 0xfff7ffff
*(arg2 + 0xc) |= zx.d(rax_102) << 0x13
int64_t* rax_106 = sub_141973240(&var_28, arg1, 
    *sub_140b58170(&arg_10, "bSupportsRayTracingMissShaderBindings", 1))
wchar16* rcx_91

if (rax_106[1].d == 0)
    rcx_91 = &data_142d40450
else
    rcx_91 = *rax_106

char rax_107 = sub_140b16cc0(rcx_91)
int64_t rcx_92 = var_28

if (rcx_92 != 0)
    sub_140a74f90(rcx_92)

*(arg2 + 0xc) &= 0xffefffff
*(arg2 + 0xc) |= zx.d(rax_107) << 0x14
int64_t* rax_111 = sub_141973240(&var_28, arg1, 
    *sub_140b58170(&arg_10, "bSupportsRayTracingIndirectInstanceData", 1))
wchar16* rcx_95

if (rax_111[1].d == 0)
    rcx_95 = &data_142d40450
else
    rcx_95 = *rax_111

char rax_112 = sub_140b16cc0(rcx_95)
int64_t rcx_96 = var_28

if (rcx_96 != 0)
    sub_140a74f90(rcx_96)

*(arg2 + 0xc) &= 0xffdfffff
*(arg2 + 0xc) |= zx.d(rax_112) << 0x15
int64_t* rax_116 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsGPUSkinCache", 1))
wchar16* rcx_99

if (rax_116[1].d == 0)
    rcx_99 = &data_142d40450
else
    rcx_99 = *rax_116

char rax_117 = sub_140b16cc0(rcx_99)
int64_t rcx_100 = var_28

if (rcx_100 != 0)
    sub_140a74f90(rcx_100)

*(arg2 + 0xc) &= 0xffbfffff
*(arg2 + 0xc) |= zx.d(rax_117) << 0x16
int64_t* rax_121 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsByteBufferComputeShaders", 1))
wchar16* rcx_103

if (rax_121[1].d == 0)
    rcx_103 = &data_142d40450
else
    rcx_103 = *rax_121

char rax_122 = sub_140b16cc0(rcx_103)
int64_t rcx_104 = var_28

if (rcx_104 != 0)
    sub_140a74f90(rcx_104)

*(arg2 + 0xc) &= 0xfeffffff
*(arg2 + 0xc) |= zx.d(rax_122) << 0x18
int64_t* rax_126 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsGPUScene", 1))
wchar16* rcx_107

if (rax_126[1].d == 0)
    rcx_107 = &data_142d40450
else
    rcx_107 = *rax_126

char rax_127 = sub_140b16cc0(rcx_107)
int64_t rcx_108 = var_28

if (rcx_108 != 0)
    sub_140a74f90(rcx_108)

*(arg2 + 0xc) &= 0xff7fffff
*(arg2 + 0xc) |= zx.d(rax_127) << 0x17
int64_t* rax_131 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsPrimitiveShaders", 1))
wchar16* rcx_111

if (rax_131[1].d == 0)
    rcx_111 = &data_142d40450
else
    rcx_111 = *rax_131

char rax_132 = sub_140b16cc0(rcx_111)
int64_t rcx_112 = var_28

if (rcx_112 != 0)
    sub_140a74f90(rcx_112)

*(arg2 + 0xc) &= 0xfdffffff
*(arg2 + 0xc) |= zx.d(rax_132) << 0x19
int64_t* rax_136 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsUInt64ImageAtomics", 1))
wchar16* rcx_115

if (rax_136[1].d == 0)
    rcx_115 = &data_142d40450
else
    rcx_115 = *rax_136

char rax_137 = sub_140b16cc0(rcx_115)
int64_t rcx_116 = var_28

if (rcx_116 != 0)
    sub_140a74f90(rcx_116)

*(arg2 + 0xc) &= 0xfbffffff
*(arg2 + 0xc) |= zx.d(rax_137) << 0x1a
int64_t* rax_141 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsTemporalHistoryUpscale", 1))
wchar16* rcx_119

if (rax_141[1].d == 0)
    rcx_119 = &data_142d40450
else
    rcx_119 = *rax_141

char rax_142 = sub_140b16cc0(rcx_119)
int64_t rcx_120 = var_28

if (rcx_120 != 0)
    sub_140a74f90(rcx_120)

*(arg2 + 0xc) &= 0xf7ffffff
*(arg2 + 0xc) |= zx.d(rax_142) << 0x1b
int64_t* rax_146 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsRTIndexFromVS", 1))
wchar16* rcx_123

if (rax_146[1].d == 0)
    rcx_123 = &data_142d40450
else
    rcx_123 = *rax_146

char rax_147 = sub_140b16cc0(rcx_123)
int64_t rcx_124 = var_28

if (rcx_124 != 0)
    sub_140a74f90(rcx_124)

*(arg2 + 0xc) &= 0xefffffff
*(arg2 + 0xc) |= zx.d(rax_147) << 0x1c
int64_t* rax_151 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsWaveOperations", 1))
wchar16* rcx_127

if (rax_151[1].d == 0)
    rcx_127 = &data_142d40450
else
    rcx_127 = *rax_151

char rax_152 = sub_140b16cc0(rcx_127)
int64_t rcx_128 = var_28

if (rcx_128 != 0)
    sub_140a74f90(rcx_128)

*(arg2 + 0xc) &= 0xdfffffff
*(arg2 + 0xc) |= zx.d(rax_152) << 0x1d
int64_t* rax_156 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bSupportsGPUScene", 1))
wchar16* rcx_131

if (rax_156[1].d == 0)
    rcx_131 = &data_142d40450
else
    rcx_131 = *rax_156

char rax_157 = sub_140b16cc0(rcx_131)
int64_t rcx_132 = var_28

if (rcx_132 != 0)
    sub_140a74f90(rcx_132)

*(arg2 + 0xc) &= 0xff7fffff
*(arg2 + 0xc) |= zx.d(rax_157) << 0x17
int64_t* rax_161 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bRequiresExplicit128bitRT", 1))
wchar16* rcx_135

if (rax_161[1].d == 0)
    rcx_135 = &data_142d40450
else
    rcx_135 = *rax_161

char rax_162 = sub_140b16cc0(rcx_135)
int64_t rcx_136 = var_28

if (rcx_136 != 0)
    sub_140a74f90(rcx_136)

*(arg2 + 0xc) &= 0xbfffffff
*(arg2 + 0xc) |= zx.d(rax_162) << 0x1e
int64_t* rax_166 = sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bTargetsTiledGPU", 1))
wchar16* rcx_139

if (rax_166[1].d == 0)
    rcx_139 = &data_142d40450
else
    rcx_139 = *rax_166

char rax_167 = sub_140b16cc0(rcx_139)
int64_t rcx_140 = var_28

if (rcx_140 != 0)
    sub_140a74f90(rcx_140)

*(arg2 + 0xc) &= 0x7fffffff
*(arg2 + 0xc) |= zx.d(rax_167) << 0x1f
int16_t** rax_171 =
    sub_141973240(&var_28, arg1, *sub_140b58170(&arg_10, "bNeedsOfflineCompiler", 1))

if (rax_171[1].d != 0)
    rdi = *rax_171

char result_1 = sub_140b16cc0(rdi)
int64_t rcx_144 = var_28

if (rcx_144 != 0)
    sub_140a74f90(rcx_144)

arg2[2].d &= 0xfffffffe
uint32_t result = zx.d(result_1)
arg2[2].d |= result
return result
