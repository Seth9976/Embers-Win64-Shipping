// 函数: sub_140883cd0
// 地址: 0x140883cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419c7530(arg1 + 0x118, arg3, u"InputFloat", 0)
sub_1419c7530(arg1 + 0x11c, arg3, u"InputInt", 0)
sub_1407862f0(arg1 + 0x120, arg3, u"OutputFloat")
sub_1407862f0(arg1 + 0x128, arg3, u"OutputInt")
sub_1407862f0(arg1 + 0x130, arg3, u"InstanceCounts")
sub_1419c6ab0(arg1 + 0x138, arg3, u"ReadInstanceCountOffset", 0)
sub_1419c6ab0(arg1 + 0x13e, arg3, u"WriteInstanceCountOffset", 0)
sub_1419c7530(arg1 + 0x144, arg3, u"FreeIDList", 0)
sub_1407862f0(arg1 + 0x148, arg3, u"IDToIndexTable")
sub_1419c6ab0(arg1 + 0x168, arg3, u"SimStart", 0)
sub_1419c6ab0(arg1 + 0x16e, arg3, u"EmitterTickCounter", 0)
sub_1419c6ab0(arg1 + 0x174, arg3, u"EmitterSpawnInfoOffsets", 0)
sub_1419c6ab0(arg1 + 0x17a, arg3, u"EmitterSpawnInfoParams", 0)
sub_1419c6ab0(arg1 + 0x180, arg3, u"NumEventsPerParticle", 0)
sub_1419c6ab0(arg1 + 0x186, arg3, u"NumParticlesPerEvent", 0)
sub_1419c6ab0(arg1 + 0x18c, arg3, u"CopyInstancesBeforeStart", 0)
sub_1419c6ab0(arg1 + 0x192, arg3, u"SpawnedInstances", 0)
sub_1419c6ab0(arg1 + 0x198, arg3, u"UpdateStartInstance", 0)
sub_1419c6ab0(arg1 + 0x19e, arg3, u"DefaultSimulationStageIndex", 0)
sub_1419c6ab0(arg1 + 0x1a4, arg3, u"SimulationStageIndex", 0)
sub_1419c6ab0(arg1 + 0x1aa, arg3, u"IterationInterfaceCount", 0)
sub_1419c6ab0(arg1 + 0x1b0, arg3, u"ComponentBufferSizeRead", 0)
sub_1419c6ab0(arg1 + 0x1b6, arg3, u"ComponentBufferSizeWrite", 0)
sub_1419c75a0(arg1 + 0x166, arg3, u"View", 0)
sub_1419c75a0(arg1 + 0x150, arg3, u"FNiagaraGlobalParameters", 0)
sub_1419c75a0(arg1 + 0x154, arg3, u"FNiagaraSystemParameters", 0)
sub_1419c75a0(arg1 + 0x158, arg3, u"FNiagaraOwnerParameters", 0)
sub_1419c75a0(arg1 + 0x15c, arg3, u"FNiagaraEmitterParameters", 0)
sub_1419c75a0(arg1 + 0x160, arg3, u"FNiagaraExternalParameters", 0)
sub_1419c75a0(arg1 + 0x152, arg3, u"PREV_FNiagaraGlobalParameters", 0)
sub_1419c75a0(arg1 + 0x156, arg3, u"PREV_FNiagaraSystemParameters", 0)
sub_1419c75a0(arg1 + 0x15a, arg3, u"PREV_FNiagaraOwnerParameters", 0)
sub_1419c75a0(arg1 + 0x15e, arg3, u"PREV_FNiagaraEmitterParameters", 0)
sub_1419c75a0(arg1 + 0x162, arg3, u"PREV_FNiagaraExternalParameters", 0)
int32_t i_4 = 0
int32_t i

do
    i = i_4 + 1
    int64_t var_c0 = 0
    int32_t var_b8_1 = 0
    sub_140a20c40(&var_c0, i)
    int32_t rbx_2
    
    if (var_b8_1 == 0)
        rbx_2 = 0
    else
        rbx_2 = var_b8_1 - 1
    
    int16_t* var_168 = nullptr
    int32_t rdx_35 = 0
    int32_t rax_1 = 0
    int32_t var_160_1 = 0
    int16_t* rsi_1 = nullptr
    int32_t var_15c_1 = 0
    
    if (rbx_2 + 0x12 s> 0)
        sub_1405947f0(&var_168, rbx_2 + 0x12)
        rax_1 = var_15c_1
        rdx_35 = var_160_1
        rsi_1 = var_168
    
    int32_t r15_2 = rdx_35 + 0x12 + rbx_2
    
    if (r15_2 s> rax_1)
        sub_140594770(&var_168)
        rsi_1 = var_168
    
    int64_t rbx_3 = sx.q(rbx_2)
    __builtin_memcpy(rsi_1, u"WriteDataSetFloat", 0x22)
    memcpy(&rsi_1[0x11], var_c0, rbx_3.d * 2)
    rsi_1[rbx_3 + 0x11] = 0
    int64_t rcx_39 = var_c0
    var_168 = nullptr
    int32_t var_160_2
    var_160_2.q = 0
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    int16_t* const rdi_1 = &data_142d40450
    uint64_t i_5 = zx.q(i_4)
    
    if (r15_2 != 0)
        rdi_1 = rsi_1
    
    void* rax_2 = arg1 + (i_5 << 3)
    sub_1419c7530(rax_2 + 0x1dc, arg3, rdi_1, 0)
    int16_t* var_188 = nullptr
    int64_t var_180_1 = 0
    sub_1405947f0(&var_188, 3)
    int32_t rbx_4 = var_180_1:4.d
    int32_t arg_20 = rbx_4
    int32_t r15_3 = var_180_1.d + 3
    var_180_1.d = r15_3
    
    if (r15_3 s> rbx_4)
        sub_140594770(&var_188)
        r15_3 = var_180_1.d
        arg_20 = var_180_1:4.d
    
    int16_t* r13 = var_188
    UnDecorator::getReferenceType(r13, &data_142da77e8, 6)
    
    if (rdi_1 == 0 || *rdi_1 == 0)
        var_188 = nullptr
        int64_t var_180_3 = 0
    else
        int64_t rbx_5 = -1
        
        do
            rbx_5 += 1
        while (rdi_1[rbx_5] != 0)
        
        int32_t rcx_45
        
        if (r15_3 != 0 || rbx_5.d == 0)
            rcx_45 = 0
        else
            rcx_45 = r15_3 + 1
        
        var_188 = nullptr
        int32_t rdx_41 = rcx_45 + r15_3 + rbx_5.d
        int16_t* var_e8 = r13
        int32_t var_dc_1 = arg_20
        int64_t var_180_2 = 0
        
        if (rdx_41 s> arg_20)
            sub_1405947f0(&var_e8, rdx_41)
        
        sub_140a20ba0(&var_e8, rdi_1, rbx_5.d)
        r13 = var_e8
        var_e8 = nullptr
        int32_t var_e0_1
        var_e0_1.q = 0
    
    int16_t* const r8_3 = &data_142d40450
    
    if (r15_3 != 0)
        r8_3 = r13
    
    sub_1419c7530(rax_2 + 0x1e0, arg3, r8_3, 0)
    
    if (r13 != 0)
        sub_140a74f90(r13)
    
    int64_t var_b0 = 0
    int32_t var_a8_1 = 0
    sub_140a20c40(&var_b0, i)
    int32_t rbx_7
    
    if (var_a8_1 == 0)
        rbx_7 = 0
    else
        rbx_7 = var_a8_1 - 1
    
    int16_t* var_158 = nullptr
    int32_t rdx_45 = 0
    int32_t rax_5 = 0
    int32_t var_150_1 = 0
    int16_t* rdi_2 = nullptr
    int32_t var_14c_1 = 0
    
    if (rbx_7 + 0x10 s> 0)
        sub_1405947f0(&var_158, rbx_7 + 0x10)
        rax_5 = var_14c_1
        rdx_45 = var_150_1
        rdi_2 = var_158
    
    int32_t r15_5 = rbx_7 + 0x10 + rdx_45
    
    if (r15_5 s> rax_5)
        sub_140594770(&var_158)
        rdi_2 = var_158
    
    int64_t rbx_8 = sx.q(rbx_7)
    __builtin_memcpy(rdi_2, u"WriteDataSetInt", 0x1e)
    memcpy(&rdi_2[0xf], var_b0, rbx_8.d * 2)
    rdi_2[rbx_8 + 0xf] = 0
    var_158 = nullptr
    int32_t var_150_2
    var_150_2.q = 0
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    int64_t rcx_57 = var_b0
    
    if (rcx_57 != 0)
        sub_140a74f90(rcx_57)
    
    int16_t* rsi_2 = &data_142d40450
    
    if (r15_5 != 0)
        rsi_2 = rdi_2
    
    sub_1419c7530(rax_2 + 0x1bc, arg3, rsi_2, 0)
    int16_t* var_178 = nullptr
    int64_t var_170_1 = 0
    sub_1405947f0(&var_178, 3)
    int32_t rbx_9 = var_170_1:4.d
    arg_20 = rbx_9
    int32_t r15_6 = var_170_1.d + 3
    var_170_1.d = r15_6
    
    if (r15_6 s> rbx_9)
        sub_140594770(&var_178)
        r15_6 = var_170_1.d
        arg_20 = var_170_1:4.d
    
    int16_t* r13_1 = var_178
    UnDecorator::getReferenceType(r13_1, &data_142da77e8, 6)
    
    if (rsi_2 == 0 || *rsi_2 == 0)
        var_178 = nullptr
        int64_t var_170_3 = 0
    else
        int64_t rbx_10 = -1
        
        do
            rbx_10 += 1
        while (rsi_2[rbx_10] != 0)
        
        int32_t rcx_63
        
        if (r15_6 != 0 || rbx_10.d == 0)
            rcx_63 = 0
        else
            rcx_63 = r15_6 + 1
        
        var_178 = nullptr
        int32_t rdx_51 = r15_6 + rbx_10.d + rcx_63
        int16_t* var_d8 = r13_1
        int32_t var_cc_1 = arg_20
        int64_t var_170_2 = 0
        
        if (rdx_51 s> arg_20)
            sub_1405947f0(&var_d8, rdx_51)
        
        sub_140a20ba0(&var_d8, rsi_2, rbx_10.d)
        r13_1 = var_d8
        var_d8 = nullptr
        int32_t var_d0_1
        var_d0_1.q = 0
    
    int16_t* r8_7 = &data_142d40450
    
    if (r15_6 != 0)
        r8_7 = r13_1
    
    sub_1419c7530(rax_2 + 0x1c0, arg3, r8_7, 0)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    int64_t var_a0 = 0
    int32_t var_98_1 = 0
    sub_140a20c40(&var_a0, i)
    int32_t rbx_12
    
    if (var_98_1 == 0)
        rbx_12 = 0
    else
        rbx_12 = var_98_1 - 1
    
    int16_t* var_148 = nullptr
    int32_t rdx_55 = 0
    int32_t var_140_1 = 0
    int32_t rax_8 = 0
    int32_t var_13c_1 = 0
    int16_t* rsi_3 = nullptr
    
    if (rbx_12 + 0x11 s> 0)
        sub_1405947f0(&var_148, rbx_12 + 0x11)
        rax_8 = var_13c_1
        rdx_55 = var_140_1
        rsi_3 = var_148
    
    int32_t r15_9 = rbx_12 + 0x11 + rdx_55
    
    if (r15_9 s> rax_8)
        sub_140594770(&var_148)
        rsi_3 = var_148
    
    int64_t rbx_13 = sx.q(rbx_12)
    __builtin_memcpy(rsi_3, u"ReadDataSetFloat", 0x20)
    memcpy(&rsi_3[0x10], var_a0, rbx_13.d * 2)
    rsi_3[rbx_13 + 0x10] = 0
    var_148 = nullptr
    int32_t var_140_2
    var_140_2.q = 0
    
    if (rdi_2 != 0)
        sub_140a74f90(rdi_2)
    
    int64_t rcx_75 = var_a0
    
    if (rcx_75 != 0)
        sub_140a74f90(rcx_75)
    
    int16_t* const r8_9 = &data_142d40450
    
    if (r15_9 != 0)
        r8_9 = rsi_3
    
    sub_1419c7530(arg1 + 0x20c + (i_5 << 2), arg3, r8_9, 0)
    int64_t var_90 = 0
    int32_t var_88_1 = 0
    sub_140a20c40(&var_90, i)
    int32_t rbx_15
    
    if (var_88_1 == 0)
        rbx_15 = 0
    else
        rbx_15 = var_88_1 - 1
    
    int32_t rdx_60 = 0
    int16_t* var_138 = nullptr
    int32_t rax_9 = 0
    int32_t var_130_1 = 0
    int16_t* rdi_3 = nullptr
    int32_t var_12c_1 = 0
    
    if (rbx_15 + 0xf s> 0)
        sub_1405947f0(&var_138, rbx_15 + 0xf)
        rax_9 = var_12c_1
        rdx_60 = var_130_1
        rdi_3 = var_138
    
    int32_t r15_12 = rbx_15 + 0xf + rdx_60
    
    if (r15_12 s> rax_9)
        sub_140594770(&var_138)
        rdi_3 = var_138
    
    int64_t rbx_16 = sx.q(rbx_15)
    __builtin_memcpy(rdi_3, u"ReadDataSetInt", 0x1c)
    memcpy(&rdi_3[0xe], var_90, rbx_16.d * 2)
    rdi_3[rbx_16 + 0xe] = 0
    var_138 = nullptr
    int32_t var_130_2
    var_130_2.q = 0
    
    if (rsi_3 != 0)
        sub_140a74f90(rsi_3)
    
    int64_t rcx_85 = var_90
    
    if (rcx_85 != 0)
        sub_140a74f90(rcx_85)
    
    int16_t* r8_11 = &data_142d40450
    
    if (r15_12 != 0)
        r8_11 = rdi_3
    
    sub_1419c7530(arg1 + 0x1fc + (i_5 << 2), arg3, r8_11, 0)
    int64_t var_80 = 0
    int32_t var_78_1 = 0
    sub_140a20c40(&var_80, i)
    int32_t rbx_18
    
    if (var_78_1 == 0)
        rbx_18 = 0
    else
        rbx_18 = var_78_1 - 1
    
    int32_t rdx_65 = 0
    int16_t* var_128 = nullptr
    int32_t rax_10 = 0
    int32_t var_120_1 = 0
    int16_t* rsi_4 = nullptr
    int32_t var_11c_1 = 0
    
    if (rbx_18 + 0x1f s> 0)
        sub_1405947f0(&var_128, rbx_18 + 0x1f)
        rax_10 = var_11c_1
        rdx_65 = var_120_1
        rsi_4 = var_128
    
    int32_t r15_15 = rbx_18 + 0x1f + rdx_65
    
    if (r15_15 s> rax_10)
        sub_140594770(&var_128)
        rsi_4 = var_128
    
    int64_t rbx_19 = sx.q(rbx_18)
    __builtin_memcpy(rsi_4, u"DSComponentBufferSizeRea", 0x30)
    *(rsi_4 + 0x30) = 0x6f006c00460064
    *(rsi_4 + 0x38) = 0x740061
    memcpy(&rsi_4[0x1e], var_80, rbx_19.d * 2)
    rsi_4[rbx_19 + 0x1e] = 0
    var_128 = nullptr
    int32_t var_120_2
    var_120_2.q = 0
    
    if (rdi_3 != 0)
        sub_140a74f90(rdi_3)
    
    int64_t rcx_95 = var_80
    
    if (rcx_95 != 0)
        sub_140a74f90(rcx_95)
    
    int16_t* r8_13 = &data_142d40450
    
    if (r15_15 != 0)
        r8_13 = rsi_4
    
    void* r13_3 = arg1 + i_5 * 6
    sub_1419c6ab0(r13_3 + 0x24c, arg3, r8_13, 0)
    int64_t var_70 = 0
    int32_t var_68_1 = 0
    sub_140a20c40(&var_70, i)
    int32_t rbx_21
    
    if (var_68_1 == 0)
        rbx_21 = 0
    else
        rbx_21 = var_68_1 - 1
    
    int16_t* var_118 = nullptr
    int32_t rdx_70 = 0
    int32_t rax_13 = 0
    int32_t var_110_1 = 0
    int16_t* rdi_4 = nullptr
    int32_t var_10c_1 = 0
    
    if (rbx_21 + 0x20 s> 0)
        sub_1405947f0(&var_118, rbx_21 + 0x20)
        rax_13 = var_10c_1
        rdx_70 = var_110_1
        rdi_4 = var_118
    
    int32_t r15_17 = rdx_70 + 0x20 + rbx_21
    
    if (r15_17 s> rax_13)
        sub_140594770(&var_118)
        rdi_4 = var_118
    
    int64_t rbx_22 = sx.q(rbx_21)
    __builtin_memcpy(rdi_4, u"DSComponentBufferSizeWri", 0x30)
    *(rdi_4 + 0x30) = 0x6c004600650074
    *(rdi_4 + 0x38) = 0x61006f
    rdi_4[0x1e] = 0x74
    memcpy(&rdi_4[0x1f], var_70, rbx_22.d * 2)
    rdi_4[rbx_22 + 0x1f] = 0
    var_118 = nullptr
    int32_t var_110_2
    var_110_2.q = 0
    
    if (rsi_4 != 0)
        sub_140a74f90(rsi_4)
    
    int64_t rcx_104 = var_70
    
    if (rcx_104 != 0)
        sub_140a74f90(rcx_104)
    
    int16_t* r8_15 = &data_142d40450
    
    if (r15_17 != 0)
        r8_15 = rdi_4
    
    sub_1419c6ab0(r13_3 + 0x21c, arg3, r8_15, 0)
    int64_t var_60 = 0
    int32_t var_58_1 = 0
    sub_140a20c40(&var_60, i)
    int32_t rbx_24
    
    if (var_58_1 == 0)
        rbx_24 = 0
    else
        rbx_24 = var_58_1 - 1
    
    int16_t* var_108 = nullptr
    int32_t rdx_75 = 0
    int32_t rax_14 = 0
    int32_t var_100_1 = 0
    int16_t* rsi_5 = nullptr
    int32_t var_fc_1 = 0
    
    if (rbx_24 + 0x1d s> 0)
        sub_1405947f0(&var_108, rbx_24 + 0x1d)
        rax_14 = var_fc_1
        rdx_75 = var_100_1
        rsi_5 = var_108
    
    int32_t r15_19 = rdx_75 + 0x1d + rbx_24
    
    if (r15_19 s> rax_14)
        sub_140594770(&var_108)
        rsi_5 = var_108
    
    int64_t rbx_25 = sx.q(rbx_24)
    __builtin_memcpy(rsi_5, u"DSComponentBufferSizeRea", 0x30)
    *(rsi_5 + 0x30) = 0x74006e00490064
    memcpy(&rsi_5[0x1c], var_60, rbx_25.d * 2)
    rsi_5[rbx_25 + 0x1c] = 0
    var_108 = nullptr
    int32_t var_100_2
    var_100_2.q = 0
    
    if (rdi_4 != 0)
        sub_140a74f90(rdi_4)
    
    int64_t rcx_112 = var_60
    
    if (rcx_112 != 0)
        sub_140a74f90(rcx_112)
    
    int16_t* r8_17 = &data_142d40450
    
    if (r15_19 != 0)
        r8_17 = rsi_5
    
    sub_1419c6ab0(r13_3 + 0x264, arg3, r8_17, 0)
    int64_t var_50 = 0
    int32_t var_48_1 = 0
    sub_140a20c40(&var_50, i)
    int32_t rbx_27
    
    if (var_48_1 == 0)
        rbx_27 = 0
    else
        rbx_27 = var_48_1 - 1
    
    int16_t* var_f8 = nullptr
    int32_t rdx_80 = 0
    int32_t rax_15 = 0
    int32_t var_f0_1 = 0
    int16_t* rdi_5 = nullptr
    int32_t var_ec_1 = 0
    
    if (rbx_27 + 0x1e s> 0)
        sub_1405947f0(&var_f8, rbx_27 + 0x1e)
        rax_15 = var_ec_1
        rdx_80 = var_f0_1
        rdi_5 = var_f8
    
    int32_t r15_21 = rdx_80 + 0x1e + rbx_27
    
    if (r15_21 s> rax_15)
        sub_140594770(&var_f8)
        rdi_5 = var_f8
    
    int64_t rbx_28 = sx.q(rbx_27)
    __builtin_memcpy(rdi_5, u"DSComponentBufferSizeWri", 0x30)
    *(rdi_5 + 0x30) = 0x6e004900650074
    rdi_5[0x1c] = 0x74
    memcpy(&rdi_5[0x1d], var_50, rbx_28.d * 2)
    rdi_5[rbx_28 + 0x1d] = 0
    var_f8 = nullptr
    int32_t var_f0_2
    var_f0_2.q = 0
    
    if (rsi_5 != 0)
        sub_140a74f90(rsi_5)
    
    int64_t rcx_120 = var_50
    
    if (rcx_120 != 0)
        sub_140a74f90(rcx_120)
    
    int16_t* r8_19 = &data_142d40450
    
    if (r15_21 != 0)
        r8_19 = rdi_5
    
    sub_1419c6ab0(r13_3 + 0x234, arg3, r8_19, 0)
    
    if (rdi_5 != 0)
        sub_140a74f90(rdi_5)
    
    i_4 = i
while (i u< 4)
void* rdi_6 = *(arg1 + 0x280)
int32_t r15_22 = arg2[1].d

if ((rdi_6.b & 1) != 0)
    rdi_6 = (rdi_6 s>> 1) + arg1 + 0x280

int32_t i_3 = *(arg1 + 0x288)

if (i_3 != 0)
    int32_t i_1
    
    do
        sub_140882ff0(rdi_6)
        rdi_6 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(arg1 + 0x288) = 0

if (*(arg1 + 0x28c) != r15_22)
    sub_140888c10(arg1 + 0x280, r15_22)

void* i_2 = *arg2
int64_t result = sx.q(arg2[1].d)

for (void* r15_25 = result * 0x30 + i_2; i_2 != r15_25; i_2 += 0x30)
    int64_t rsi_6 = sx.q(*(arg1 + 0x288))
    int32_t rax_16 = (rsi_6 + 1).d
    *(arg1 + 0x288) = rax_16
    
    if (rax_16 s> *(arg1 + 0x28c))
        sub_140888950(arg1 + 0x280, rsi_6.d)
    
    void* rax_18 = *(arg1 + 0x280)
    
    if ((rax_18.b & 1) != 0)
        rax_18 = (rax_18 s>> 1) + arg1 + 0x280
    
    void* rcx_128 = (rsi_6 << 4) + rax_18
    *rcx_128 = 0
    *(rcx_128 + 8) = 0
    result = sub_140883b60(rcx_128, i_2, arg3)

return result
