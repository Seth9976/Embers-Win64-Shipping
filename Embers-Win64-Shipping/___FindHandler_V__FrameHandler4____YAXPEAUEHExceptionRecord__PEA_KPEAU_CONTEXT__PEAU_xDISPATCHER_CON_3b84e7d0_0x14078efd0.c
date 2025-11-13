// 函数: ??$FindHandler@V__FrameHandler4@@@@YAXPEAUEHExceptionRecord@@PEA_KPEAU_CONTEXT@@PEAU_xDISPATCHER_CONTEXT@@PEAUFuncInfo4@FH4@@EH1@Z
// 地址: 0x14078efd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t var_140 = arg5
int64_t* var_128 = arg1
int16_t* var_138
int64_t* rcx = &var_138
int64_t* var_188 = arg2
var_138 = nullptr
int32_t var_130 = 0

if (arg6 == 0)
    sub_1405947f0(rcx, 0x5d)
    int32_t rax_5 = var_130 + 0x5d
    var_130 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_138)
    
    int16_t* rdx_4 = var_138
    __builtin_memcpy(rdx_4, u"void {FunctionName}(NiagaraID In_ParticleID, out bool Ou", 0x70)
    *(rdx_4 + 0x70) = (*void {FunctionName}(NiagaraID In_ParticleID, out bool Out_Valid, out {ValueType} Out_Value)\n")
        [0x38].o
    __builtin_wcscpy(rdx_4 + 0x80, u" out {ValueType} Out_Value)\n")
else
    sub_1405947f0(rcx, 0x57)
    int32_t rax_4 = var_130 + 0x57
    var_130 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_138)
    
    int16_t* rdx_1 = var_138
    __builtin_memcpy(rdx_1, u"void {FunctionName}(int ParticleIndex, out bool Out_Vali", 0x70)
    *(rdx_1 + 0x70) =
        (*void {FunctionName}(int ParticleIndex, out bool Out_Valid, out {ValueType} Out_Value)\n")
        [0x38].o
    __builtin_wcscpy(rdx_1 + 0x80, u"ValueType} Out_Value)\n")

sub_140a20ba0(&var_138, 
    {\n    int RegisterIndex = {AttributeIndicesName}[{AttributeIndexGroup}]{Attribu", 0x62)
wchar16 const* const rdx_6 =     int NumParticles = {InstanceCountOffsetName} != 0xffffffff ? 
    RWInstanceCounts[{InstanceCountOffsetN"
int32_t r8 = 0xc4

if (arg6 == 0)
    r8 = 0x152

if (arg6 == 0)
    rdx_6 =     int ParticleIndex = (RegisterIndex != -1) && (In_ParticleID.Index >= 0) ? "
    "{IDToIndexTableName}[In_ParticleID.Index] : -1;\n    int AcquireTag = (ParticleInd"

sub_140a20ba0(&var_138, rdx_6, r8)
int32_t rbx_1 = data_143ce0698
int32_t rdi = arg1[1].d
void** var_150 = &data_14396ec00
int32_t var_f8 = rdi
int64_t* var_178
int32_t var_170
int32_t var_16c
int64_t* var_160
int64_t* var_d8

if (rbx_1 s> 1)
    int32_t rdi_2
    
    if (rdi == 0)
        rdi_2 = 0
    else
        rdi_2 = rdi - 1
    
    int32_t rax_7
    
    if (rbx_1 == 0)
        rax_7 = 1
    
    if (rbx_1 != 0 || rdi_2 == 0)
        rax_7 = 0
    
    int64_t rsi_1 = data_143ce0690
    int32_t rcx_7 = rax_7 + rdi_2
    var_178 = nullptr
    var_170 = rbx_1
    
    if (rbx_1 != 0 || rcx_7 != 0)
        sub_1405a4c70(&var_178, rbx_1 + rcx_7, 0)
        memcpy(var_178, rsi_1, rbx_1 * 2)
    else
        var_16c = 0
    
    sub_140a20ba0(&var_178, *arg1, rdi_2)
    var_d8 = var_178
    var_f8 = var_170
else
    int64_t rbx_2 = *arg1
    var_d8 = nullptr
    var_160 = nullptr
    
    if (rdi != 0)
        sub_1405a4c70(&var_160, rdi, 0)
        int64_t* rdi_1 = var_160
        var_d8 = rdi_1
        memcpy(rdi_1, rbx_2, rdi * 2)
        var_f8 = rdi

int32_t rbx_3 = data_143ce06a8
int32_t r14 = arg1[1].d
int64_t* var_f0
int64_t* rdi_3

if (rbx_3 s> 1)
    int32_t r14_1
    
    if (r14 == 0)
        r14_1 = 0
    else
        r14_1 = r14 - 1
    
    int32_t rax_9
    
    if (rbx_3 == 0)
        rax_9 = 1
    
    if (rbx_3 != 0 || r14_1 == 0)
        rax_9 = 0
    
    int64_t rdi_4 = data_143ce06a0
    int32_t rcx_13 = rax_9 + r14_1
    var_160 = nullptr
    int32_t var_154
    
    if (rbx_3 != 0 || rcx_13 != 0)
        sub_1405a4c70(&var_160, rbx_3 + rcx_13, 0)
        memcpy(var_160, rdi_4, rbx_3 * 2)
    else
        var_154 = 0
    
    sub_140a20ba0(&var_160, *arg1, r14_1)
    rdi_3 = var_160
    r14 = rbx_3
    var_f0 = rdi_3
    int32_t var_e4_2 = var_154
    int32_t var_e8_1 = r14
else
    int64_t rbx_4 = *arg1
    rdi_3 = nullptr
    var_f0 = nullptr
    
    if (r14 != 0)
        sub_1405a4c70(&var_f0, r14, 0)
        rdi_3 = var_f0
        memcpy(rdi_3, rbx_4, r14 * 2)
    else
        int32_t var_e4_1 = 0

int32_t rbx_5 = data_143ce0678
int32_t r15 = arg1[1].d
int64_t* var_e0

if (rbx_5 s> 1)
    int32_t r15_1
    
    if (r15 == 0)
        r15_1 = 0
    else
        r15_1 = r15 - 1
    
    int32_t rax_11
    
    if (rbx_5 == 0)
        rax_11 = 1
    
    if (rbx_5 != 0 || r15_1 == 0)
        rax_11 = 0
    
    int64_t rsi_2 = data_143ce0670
    int32_t rcx_19 = r15_1 + rax_11
    var_178 = nullptr
    var_170 = rbx_5
    
    if (rbx_5 != 0 || rcx_19 != 0)
        sub_1405a4c70(&var_178, rbx_5 + rcx_19, 0)
        memcpy(var_178, rsi_2, rbx_5 * 2)
    else
        var_16c = 0
    
    sub_140a20ba0(&var_178, *arg1, r15_1)
    r15 = var_170
    var_e0 = var_178
else
    int64_t rbx_6 = *arg1
    var_e0 = nullptr
    var_160 = nullptr
    
    if (r15 != 0)
        sub_1405a4c70(&var_160, r15, 0)
        int64_t* r12_1 = var_160
        var_e0 = r12_1
        memcpy(r12_1, rbx_6, r15 * 2)

int32_t rbx_7 = data_143ce0688
int32_t rsi_3 = arg1[1].d
int64_t* rbx_8

if (rbx_7 s> 1)
    int32_t rsi_4
    
    if (rsi_3 == 0)
        rsi_4 = 0
    else
        rsi_4 = rsi_3 - 1
    
    int32_t rax_13
    
    if (rbx_7 == 0)
        rax_13 = 1
    
    if (rbx_7 != 0 || rsi_4 == 0)
        rax_13 = 0
    
    int64_t r12_3 = data_143ce0680
    int32_t rcx_25 = rsi_4 + rax_13
    var_178 = nullptr
    var_170 = rbx_7
    
    if (rbx_7 != 0 || rcx_25 != 0)
        sub_1405a4c70(&var_178, rbx_7 + rcx_25, 0)
        memcpy(var_178, r12_3, rbx_7 * 2)
    else
        var_16c = 0
    
    sub_140a20ba0(&var_178, *arg1, rsi_4)
    rbx_8 = var_178
    rsi_3 = var_170
    var_160 = rbx_8
    int32_t var_154_2 = var_16c
    int32_t var_158_5 = rsi_3
else
    int64_t r12_2 = *arg1
    rbx_8 = nullptr
    var_160 = nullptr
    
    if (rsi_3 != 0)
        sub_1405a4c70(&var_160, rsi_3, 0)
        rbx_8 = var_160
        memcpy(rbx_8, r12_2, rsi_3 * 2)
    else
        int32_t var_154_1 = 0

uint32_t rcx_29 = zx.d(arg4)
wchar16 const (** rcx_32)[0x7]
int64_t* rsi_5
int64_t* const r12_4
int32_t r13_1
int32_t r15_2

if (rcx_29 == 0)
    r13_1 = 0x42d40450
    r12_4 = u"float"
    
    if (r15 != 0)
        r13_1 = var_e0.d
    
    rsi_5 = &data_142d40450
    
    if (var_f8 != 0)
        rsi_5 = var_d8
    
label_14078f632:
    rcx_32 = var_150
    r15_2 = var_140
label_14078f63b:
    int64_t var_c8 = 0
    int32_t rdi_5 = 0
    int32_t var_c0_1 = 0
    int64_t rbx_9 = 0
    int64_t r14_2 = sx.q(r15_2)
    int32_t var_1a0
    
    if (r15_2 s> 0)
        do
            int16_t* const r8_21
            
            if (r14_2 s<= 1)
                r8_21 = &data_142d40450
            else
                r8_21 = rcx_32[rbx_9]
            
            int64_t* var_198_1 = rsi_5
            var_1a0 = rdi_5
            int32_t var_1a8 = r13_1
            sub_140a2e390(&var_178, 
                Out_Value%s = %s(%s[(RegisterIndex + %d)*%s + ParticleIndex]);\n", r8_21)
            int32_t r8_23
            
            if (var_170 == 0)
                r8_23 = 0
            else
                r8_23 = var_170 - 1
            
            sub_140a20ba0(&var_c8, var_178, r8_23)
            int64_t* rcx_35 = var_178
            
            if (rcx_35 != 0)
                sub_140a74f90(rcx_35)
            
            rcx_32 = var_150
            rdi_5 += 1
            rbx_9 += 1
        while (rbx_9 s< r14_2)
    
    int32_t rdx_28 = 0
    int32_t rax_15 = 0
    int32_t var_148_1 = 0
    int32_t var_144_1 = 0
    void** r13_2 = nullptr
    var_150 = nullptr
    int32_t rdi_6
    
    if (arg4 == 3)
        sub_1405947f0(&var_150, 0xa)
        rdi_6 = var_148_1 + 0xa
        
        if (rdi_6 s> var_144_1)
            sub_140594770(&var_150)
        
        r13_2 = var_150
        __builtin_memcpy(r13_2, u"NiagaraID", 0x14)
    else if (r15_2 != 1)
        sub_140a2e390(&var_178, u"%s%d", r12_4)
        r13_2 = var_178
        rdi_6 = var_170
    else
        int32_t rbx_11
        
        if (*r12_4 == 0)
            rbx_11 = 0
        else
            int64_t rbx_10 = -1
            
            do
                rbx_10 += 1
            while (*(r12_4 + (rbx_10 << 1)) != 0)
            
            rbx_11 = rbx_10.d + 1
        
        if (rbx_11 != 0)
            sub_1405947f0(&var_150, rbx_11)
            rax_15 = var_144_1
            rdx_28 = var_148_1
            r13_2 = var_150
        
        rdi_6 = rdx_28 + rbx_11
        
        if (rdi_6 s> rax_15)
            sub_140594770(&var_150)
            r13_2 = var_150
        
        if (rbx_11 != 0)
            memcpy(r13_2, r12_4, rbx_11 * 2)
    
    sub_140a20ba0(&var_138, u"    {\n        Out_Valid = true;\n", 0x20)
    int32_t r8_27 = var_c0_1 - 1
    
    if (var_c0_1 == 0)
        r8_27 = 0
    
    sub_140a20ba0(&var_138, var_c8, r8_27)
    sub_140a20ba0(&var_138, 
            }\n    else\n    {\n        Out_Valid = false;\n        Out_Value = ({ValueType})0;\n    }\n"
    "}\n\n", 0x5d)
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x2c)
    int32_t var_7c_1 = 0x80
    int32_t var_78_1 = 0xffffffff
    int32_t var_74_1 = 0
    int64_t var_68_1 = 0
    int32_t var_60_1 = 0
    void var_118
    sub_140b2f3e0(&var_118, sub_140596d10(&var_150, &var_188[1]))
    var_188 = nullptr
    int64_t var_180_1 = 0
    sub_1405947f0(&var_188, 0xd)
    int32_t r15_3 = var_180_1:4.d
    int32_t r14_3 = var_180_1.d + 0xd
    var_180_1.d = r14_3
    
    if (r14_3 s> r15_3)
        sub_140594770(&var_188)
        r15_3 = var_180_1:4.d
        r14_3 = var_180_1.d
    
    int64_t* rbx_12 = var_188
    UnDecorator::getReferenceType(rbx_12, u"FunctionName", 0x1a)
    sub_140783a30(&var_a8, &var_178)
    void** rsi_6 = var_170.q
    *rsi_6 = rbx_12
    rsi_6[1].d = r14_3
    *(rsi_6 + 0xc) = r15_3
    sub_140b2f340(&rsi_6[2], &var_118)
    rsi_6[6].d = 0xffffffff
    int16_t* r15_4 = &data_142d40450
    int32_t rax_18 = rsi_6[1].d
    int16_t* rdx_39
    
    if (rax_18 == 0)
        rdx_39 = &data_142d40450
    else
        rdx_39 = *rsi_6
    
    int32_t rcx_52 = rax_18 - 1
    
    if (rax_18 == 0)
        rcx_52 = 0
    
    var_1a0.q = 0
    sub_140754310(&var_a8, &var_140, sub_1405969c0(rcx_52, rdx_39), rsi_6, var_178.d, var_1a0)
    int64_t var_108
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    var_178 = nullptr
    int32_t var_170_1 = rdi_6
    
    if (rdi_6 != 0)
        sub_1405a4c70(&var_178, rdi_6, 0)
        memcpy(var_178, r13_2, rdi_6 * 2)
    else
        var_16c = 0
    
    sub_140b2f3e0(&var_118, &var_178)
    var_188 = nullptr
    void** var_180_2 = nullptr
    sub_1405947f0(&var_188, 0xa)
    int32_t r14_4 = var_180_2:4.d
    int32_t rsi_7 = var_180_2.d + 0xa
    var_180_2.d = rsi_7
    
    if (rsi_7 s> r14_4)
        sub_140594770(&var_188)
        r14_4 = var_180_2:4.d
        rsi_7 = var_180_2.d
    
    int64_t* rbx_13 = var_188
    UnDecorator::getReferenceType(rbx_13, u"ValueType", 0x14)
    sub_140783a30(&var_a8, &var_188)
    *var_180_2 = rbx_13
    var_180_2[1].d = rsi_7
    *(var_180_2 + 0xc) = r14_4
    sub_140b2f340(&var_180_2[2], &var_118)
    var_180_2[6].d = 0xffffffff
    int32_t rax_21 = var_180_2[1].d
    int16_t* rdx_47
    
    if (rax_21 == 0)
        rdx_47 = &data_142d40450
    else
        rdx_47 = *var_180_2
    
    int32_t rcx_63 = rax_21 - 1
    
    if (rax_21 == 0)
        rcx_63 = 0
    
    var_1a0.q = 0
    sub_140754310(&var_a8, &var_140, sub_1405969c0(rcx_63, rdx_47), var_180_2, var_188.d, var_1a0)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    int32_t rbx_14 = data_143ce06b8
    int64_t* r14_5 = var_128
    int32_t r12_5
    
    if (rbx_14 s> 1)
        int32_t rax_24 = r14_5[1].d
        int32_t rdi_8 = rax_24 - 1
        
        if (rax_24 == 0)
            rdi_8 = 0
        
        int32_t rax_25
        
        if (rbx_14 != 0 || rdi_8 == 0)
            rax_25 = 0
            r12_5 = 1
        else
            r12_5 = 1
            rax_25 = 1
        
        var_188 = nullptr
        int32_t rcx_67 = rax_25 + rdi_8
        int64_t rsi_8 = data_143ce06b0
        var_180_2.d = rbx_14
        
        if (rbx_14 != 0 || rcx_67 != 0)
            sub_1405a4c70(&var_188, rbx_14 + rcx_67, 0)
            memcpy(var_188, rsi_8, rbx_14 * 2)
        else
            var_180_2:4.d = 0
        
        sub_140a20ba0(&var_188, *r14_5, rdi_8)
        var_178 = var_188
        var_170_1 = var_180_2.d
        var_16c = var_180_2:4.d
        int64_t var_180_3 = 0
        var_188 = nullptr
    else
        sub_140596d10(&var_178, r14_5)
        r12_5 = 1
    
    sub_140b2f3e0(&var_118, &var_178)
    var_188 = nullptr
    int32_t var_180_4 = 0
    sub_1405947f0(&var_188, 0x15)
    int32_t rax_29 = var_180_4 + 0x15
    var_180_4 = rax_29
    
    if (rax_29 s> 0)
        sub_140594770(&var_188)
    
    UnDecorator::getReferenceType(var_188, u"AttributeIndicesName", 0x2a)
    sub_14077ad70(&var_a8, &var_188, &var_118)
    int64_t* rcx_76 = var_188
    
    if (rcx_76 != 0)
        sub_140a74f90(rcx_76)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(arg3)
    int32_t rdx_57 = temp3_1 & 3
    int32_t rax_32 = temp4_1 + rdx_57
    sub_140b2f3a0(&var_118, rax_32 s>> 2)
    var_188 = nullptr
    int32_t var_180_5 = 0
    sub_1405947f0(&var_188, 0x14)
    int32_t rcx_82 = var_180_5 + 0x14
    var_180_5 = rcx_82
    
    if (rcx_82 s> 0)
        sub_140594770(&var_188)
    
    UnDecorator::getReferenceType(var_188, u"AttributeIndexGroup", 0x28)
    sub_14077ad70(&var_a8, &var_188, &var_118)
    int64_t* rcx_86 = var_188
    
    if (rcx_86 != 0)
        sub_140a74f90(rcx_86)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    sub_140b2f3c0(&var_118, (&data_14396ec00)[sx.q((rax_32 & 3) - rdx_57)])
    var_188 = nullptr
    int32_t var_180_6 = 0
    sub_1405947f0(&var_188, 0x18)
    int32_t rax_35 = var_180_6 + 0x18
    var_180_6 = rax_35
    
    if (rax_35 s> 0)
        sub_140594770(&var_188)
    
    UnDecorator::getReferenceType(var_188, u"AttributeIndexComponent", 0x30)
    sub_14077ad70(&var_a8, &var_188, &var_118)
    int64_t* rcx_93 = var_188
    
    if (rcx_93 != 0)
        sub_140a74f90(rcx_93)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    int32_t r8_38 = data_143ce0668
    
    if (r8_38 s> 1)
        int32_t rax_36 = r14_5[1].d
        int32_t rbx_16 = rax_36 - 1
        
        if (rax_36 == 0)
            rbx_16 = 0
        
        int32_t rax_37
        
        if (r8_38 == 0)
            rax_37 = 1
        
        if (r8_38 != 0 || rbx_16 == 0)
            rax_37 = 0
        
        int64_t rdx_65 = data_143ce0660
        var_178 = nullptr
        sub_140596860(&var_178, rdx_65, r8_38, 0, rax_37 + rbx_16)
        sub_140a20ba0(&var_178, *r14_5, rbx_16)
        var_128 = var_178
        int32_t var_120_1 = var_170_1
        int32_t var_11c_1 = var_16c
        var_170_1.q = 0
        var_178 = nullptr
    else
        sub_140596d10(&var_128, r14_5)
    
    sub_140b2f3e0(&var_118, &var_128)
    var_188 = nullptr
    int32_t var_180_7 = 0
    sub_1405947f0(&var_188, 0x13)
    int32_t rax_42 = var_180_7 + 0x13
    var_180_7 = rax_42
    
    if (rax_42 s> 0)
        sub_140594770(&var_188)
    
    UnDecorator::getReferenceType(var_188, u"IDToIndexTableName", 0x26)
    sub_14077ad70(&var_a8, &var_188, &var_118)
    int64_t* rcx_103 = var_188
    
    if (rcx_103 != 0)
        sub_140a74f90(rcx_103)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    sub_140b2f3e0(&var_118, sub_140596d10(&var_178, &var_160))
    var_188 = nullptr
    int32_t var_180_8 = 0
    sub_1405947f0(&var_188, 0x13)
    int32_t rax_44 = var_180_8 + 0x13
    var_180_8 = rax_44
    
    if (rax_44 s> 0)
        sub_140594770(&var_188)
    
    UnDecorator::getReferenceType(var_188, u"InputIntBufferName", 0x26)
    sub_14077ad70(&var_a8, &var_188, &var_118)
    int64_t* rcx_111 = var_188
    
    if (rcx_111 != 0)
        sub_140a74f90(rcx_111)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    int32_t r8_42 = data_143ce06c8
    
    if (r8_42 s> 1)
        int32_t rax_45 = r14_5[1].d
        int32_t rbx_17 = rax_45 - 1
        
        if (rax_45 == 0)
            rbx_17 = 0
        
        int32_t rax_46
        
        if (r8_42 == 0)
            rax_46 = 1
        
        if (r8_42 != 0 || rbx_17 == 0)
            rax_46 = 0
        
        int64_t rdx_75 = data_143ce06c0
        var_178 = nullptr
        sub_140596860(&var_178, rdx_75, r8_42, 0, rax_46 + rbx_17)
        sub_140a20ba0(&var_178, *r14_5, rbx_17)
        var_128 = var_178
        int32_t var_120_2 = var_170_1
        int32_t var_11c_2 = var_16c
        var_170_1.q = 0
        var_178 = nullptr
    else
        sub_140596d10(&var_128, r14_5)
    
    sub_140b2f3e0(&var_118, &var_128)
    var_188 = nullptr
    int32_t var_180_9 = 0
    sub_1405947f0(&var_188, 0x1c)
    int32_t rax_51 = var_180_9 + 0x1c
    var_180_9 = rax_51
    
    if (rax_51 s> 0)
        sub_140594770(&var_188)
    
    UnDecorator::getReferenceType(var_188, u"AcquireTagRegisterIndexName", 0x38)
    sub_14077ad70(&var_a8, &var_188, &var_118)
    int64_t* rcx_121 = var_188
    
    if (rcx_121 != 0)
        sub_140a74f90(rcx_121)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    sub_140b2f3e0(&var_118, sub_140596d10(&var_178, &var_f0))
    var_188 = nullptr
    int32_t var_180_10 = 0
    sub_1405947f0(&var_188, 0x16)
    int32_t rax_53 = var_180_10 + 0x16
    var_180_10 = rax_53
    
    if (rax_53 s> 0)
        sub_140594770(&var_188)
    
    UnDecorator::getReferenceType(var_188, u"ParticleStrideIntName", 0x2c)
    sub_14077ad70(&var_a8, &var_188, &var_118)
    int64_t* rcx_129 = var_188
    
    if (rcx_129 != 0)
        sub_140a74f90(rcx_129)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    sub_140b2f3e0(&var_118, sub_140596d10(&var_178, &var_c8))
    var_188 = nullptr
    int32_t var_180_11 = 0
    sub_1405947f0(&var_188, 0xf)
    int32_t rax_55 = var_180_11 + 0xf
    var_180_11 = rax_55
    
    if (rax_55 s> 0)
        sub_140594770(&var_188)
    
    UnDecorator::getReferenceType(var_188, u"FetchValueCode", 0x1e)
    sub_14077ad70(&var_a8, &var_188, &var_118)
    int64_t* rcx_137 = var_188
    
    if (rcx_137 != 0)
        sub_140a74f90(rcx_137)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    int32_t r8_47 = data_143ce0648
    
    if (r8_47 s> 1)
        int32_t rax_56 = r14_5[1].d
        int32_t rbx_18 = rax_56 - 1
        
        if (rax_56 == 0)
            rbx_18 = 0
        
        if (r8_47 != 0 || rbx_18 == 0)
            r12_5 = 0
        
        int64_t rdx_89 = data_143ce0640
        var_178 = nullptr
        sub_140596860(&var_178, rdx_89, r8_47, 0, rbx_18 + r12_5)
        sub_140a20ba0(&var_178, *r14_5, rbx_18)
        var_128 = var_178
        int32_t var_120_3 = var_170_1
        int32_t var_11c_3 = var_16c
        var_170_1.q = 0
        var_178 = nullptr
    else
        sub_140596d10(&var_128, r14_5)
    
    sub_140b2f3e0(&var_118, &var_128)
    var_188 = nullptr
    int32_t var_180_12 = 0
    sub_1405947f0(&var_188, 0x18)
    int32_t rax_61 = var_180_12 + 0x18
    var_180_12 = rax_61
    
    if (rax_61 s> 0)
        sub_140594770(&var_188)
    
    UnDecorator::getReferenceType(var_188, u"InstanceCountOffsetName", 0x30)
    sub_14077ad70(&var_a8, &var_188, &var_118)
    int64_t* rcx_147 = var_188
    
    if (rcx_147 != 0)
        sub_140a74f90(rcx_147)
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    if (var_130 != 0)
        r15_4 = var_138
    
    int64_t* rax_62 = sub_140b3b600(&var_178, r15_4, &var_a8)
    int32_t rdx_95 = rax_62[1].d
    int32_t r8_51 = rdx_95 - 1
    
    if (rdx_95 == 0)
        r8_51 = 0
    
    sub_140a20ba0(arg7, *rax_62, r8_51)
    int64_t* rcx_151 = var_178
    
    if (rcx_151 != 0)
        sub_140a74f90(rcx_151)
    
    int32_t var_60_2 = 0
    rsi_3.b = 1
    
    if (var_68_1 != 0)
        sub_140a74f90(var_68_1)
    
    sub_1407464c0(&var_a8)
    
    if (r13_2 != 0)
        sub_140a74f90(r13_2)
    
    int64_t rcx_155 = var_c8
    
    if (rcx_155 != 0)
        sub_140a74f90(rcx_155)
    
    rbx_8 = var_160
    rdi_3 = var_f0
else
    if (rcx_29 == 1)
        r12_4 = &data_142da76c0
    label_14078f5f1:
        r13_1 = 0x42d40450
        rsi_5 = &data_142d40450
        
        if (rsi_3 != 0)
            r13_1 = rbx_8.d
        
        if (r14 != 0)
            rsi_5 = rdi_3
        
        goto label_14078f632
    
    if (rcx_29 == 2)
        r12_4 = u"bool"
        goto label_14078f5f1
    
    if (rcx_29 == 3)
        r13_1 = 0x42d40450
        rcx_32 = &data_14396ec20
        
        if (rsi_3 != 0)
            r13_1 = rbx_8.d
        
        var_150 = &data_14396ec20
        r12_4 = &data_142da76c0
        rsi_5 = &data_142d40450
        r15_2 = 2
        
        if (r14 != 0)
            rsi_5 = rdi_3
        
        goto label_14078f63b
    
    rsi_3.b = 0

if (rbx_8 != 0)
    sub_140a74f90(rbx_8)

if (var_e0 != 0)
    sub_140a74f90(var_e0)

if (rdi_3 != 0)
    sub_140a74f90(rdi_3)

if (var_d8 != 0)
    sub_140a74f90(var_d8)

int16_t* rcx_160 = var_138

if (rcx_160 != 0)
    sub_140a74f90(rcx_160)

__security_check_cookie(rax_1 ^ &var_1c8)
return zx.q(rsi_3.b)
