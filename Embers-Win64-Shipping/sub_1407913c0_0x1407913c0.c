// 函数: sub_1407913c0
// 地址: 0x1407913c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_88

if (sub_140b5b9d0(arg3, u"PerformCollisionQuery") != 0)
    int32_t rax_1 = arg3[2].d
    var_88 = nullptr
    int32_t rdx = 0
    int32_t var_7c_1 = 0
    int64_t* rdi_1 = nullptr
    int32_t var_80_1 = 0
    int32_t rbx_1 = rax_1 - 1
    int32_t r12_1 = 0
    
    if (rax_1 == 0)
        rbx_1 = 0
    
    if (rbx_1 + 6 s> 0)
        sub_1405947f0(&var_88, rbx_1 + 6)
        rdx = var_80_1
        r12_1 = var_7c_1
        rdi_1 = var_88
    
    int32_t r15_2 = rbx_1 + 6 + rdx
    
    if (r15_2 s> r12_1)
        sub_140594770(&var_88)
        r12_1 = var_7c_1
        rdi_1 = var_88
    
    *rdi_1 = 0x640069006f0076
    rdi_1[1].w = 0x20
    int64_t rbx_2 = sx.q(rbx_1)
    memcpy(rdi_1 + 0xa, arg3[1], rbx_2.d * 2)
    *(rdi_1 + (rbx_2 << 1) + 0xa) = 0
    var_88 = rdi_1
    int32_t rax_3
    rax_3.b = r15_2 == 0
    int32_t var_7c_2 = r12_1
    int32_t rdx_4 = rax_3 + 0x13e + r15_2
    
    if (rdx_4 s> r12_1)
        sub_1405947f0(&var_88, rdx_4)
    
    sub_140a20ba0(&var_88, 
        (in int InQueryID, in float3 In_ParticlePos, in float3 In_ParticleVel, in float In_DeltaSeconds, "
    "float CollisionRadius, in float CollisionDepth", 0x13e)
    int64_t* rbx_3 = var_88
    var_88 = nullptr
    int32_t r8_1 = r15_2 - 1
    int32_t var_80_3
    var_80_3.q = 0
    
    if (r15_2 == 0)
        r8_1 = 0
    
    sub_140a20ba0(arg4, rbx_3, r8_1)
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
    
    sub_140a20ba0(arg4, 
        \t\tOutCollisionValid = false;\n\t\tOut_QueryID = InQueryID;\n\t\tOut_Collision", 0x8da)
    return 1

char rax_6
int32_t rcx_10
rax_6, rcx_10 = sub_140b5b9d0(arg3, u"PerformCollisionQueryGPUShader")
int64_t var_58
int64_t* var_38

if (rax_6 == 0)
    int32_t var_50
    
    if (sub_140b5b9d0(arg3, u"QuerySceneDepthGPU") != 0)
        int32_t rax_33 = arg3[2].d
        var_88 = nullptr
        int32_t rdx_44 = 0
        int32_t var_7c_12 = 0
        int64_t* rdi_9 = nullptr
        int32_t var_80_17 = 0
        int32_t rbx_18 = rax_33 - 1
        int32_t r15_7 = 0
        
        if (rax_33 == 0)
            rbx_18 = 0
        
        if (rbx_18 + 6 s> 0)
            sub_1405947f0(&var_88, rbx_18 + 6)
            rdx_44 = var_80_17
            r15_7 = var_7c_12
            rdi_9 = var_88
        
        int32_t r12_11 = rbx_18 + 6 + rdx_44
        
        if (r12_11 s> r15_7)
            sub_140594770(&var_88)
            r15_7 = var_7c_12
            rdi_9 = var_88
        
        *rdi_9 = 0x640069006f0076
        rdi_9[1].w = 0x20
        int64_t rbx_19 = sx.q(rbx_18)
        int32_t r8_26 = memcpy(rdi_9 + 0xa, arg3[1], rbx_19.d * 2)
        int32_t var_30_2 = r12_11
        *(rdi_9 + (rbx_19 << 1) + 0xa) = 0
        var_38 = rdi_9
        int32_t var_2c_2 = r15_7
        sub_140596690(&var_58, &var_38, sbb.d(r8_26, r8_26, r12_11 != 0) + 0xa6)
        sub_140a20ba0(&var_58, 
            (in float3 In_SamplePos, out float Out_SceneDepth, out float3 Out_CameraPosWorld, out bool "
        "Out_IsInsideView, out float3 Out_WorldPos, out float", 0xa5)
        bool cond:5_1 = var_50 == 0
        int64_t rbx_20 = var_58
        var_58 = 0
        int32_t r8_29 = var_50 - 1
        var_50.q = 0
        
        if (cond:5_1)
            r8_29 = 0
        
        sub_140a20ba0(arg4, rbx_20, r8_29)
        
        if (rbx_20 != 0)
            sub_140a74f90(rbx_20)
        
        int64_t* rcx_71 = var_38
        
        if (rcx_71 != 0)
            sub_140a74f90(rcx_71)
        
        sub_140a20ba0(arg4, 
            \t\t\tOut_SceneDepth = -1;\n\t\t\tOut_WorldPos = float3(0.0, 0.0, 0.0);\n\t\t\t"
        "Out_WorldNormal = float3(0.0, 0.0, ", 0x46e)
        return 1
    
    if (sub_140b5b9d0(arg3, u"QueryMeshDistanceFieldGPU") == 0)
        return 0
    
    int32_t rax_36 = arg3[2].d
    var_88 = nullptr
    int32_t rdx_49 = 0
    int32_t var_7c_13 = 0
    int64_t* rdi_11 = nullptr
    int32_t var_80_19 = 0
    int32_t rbx_21 = rax_36 - 1
    int32_t r15_8 = 0
    
    if (rax_36 == 0)
        rbx_21 = 0
    
    if (rbx_21 + 6 s> 0)
        sub_1405947f0(&var_88, rbx_21 + 6)
        rdx_49 = var_80_19
        r15_8 = var_7c_13
        rdi_11 = var_88
    
    int32_t r12_14 = rbx_21 + 6 + rdx_49
    
    if (r12_14 s> r15_8)
        sub_140594770(&var_88)
        r15_8 = var_7c_13
        rdi_11 = var_88
    
    *rdi_11 = 0x640069006f0076
    rdi_11[1].w = 0x20
    int64_t rbx_22 = sx.q(rbx_21)
    int32_t r8_31 = memcpy(rdi_11 + 0xa, arg3[1], rbx_22.d * 2)
    int32_t var_30_3 = r12_14
    *(rdi_11 + (rbx_22 << 1) + 0xa) = 0
    var_38 = rdi_11
    int32_t var_2c_3 = r15_8
    sub_140596690(&var_58, &var_38, sbb.d(r8_31, r8_31, r12_14 != 0) + 0x63)
    sub_140a20ba0(&var_58, 
        (in float3 In_SamplePos, out float Out_DistanceToNearestSurface, out float3 Out_FieldGradient) "
    "{\n", 0x62)
    bool cond:7_1 = var_50 == 0
    int64_t rbx_23 = var_58
    var_58 = 0
    int32_t r8_34 = var_50 - 1
    var_50.q = 0
    
    if (cond:7_1)
        r8_34 = 0
    
    sub_140a20ba0(arg4, rbx_23, r8_34)
    
    if (rbx_23 != 0)
        sub_140a74f90(rbx_23)
    
    int64_t* rcx_81 = var_38
    
    if (rcx_81 != 0)
        sub_140a74f90(rcx_81)
    
    sub_140a20ba0(arg4, 
        \t\t\t#if PLATFORM_SUPPORTS_DISTANCE_FIELDS\n\t\t\tOut_DistanceToNearestSurface = "
    "GetDistanceToNearestSurfaceGlobal(In_SamplePos);\n\t\t\tOut_FieldGradien", 0x121)
    return 1

int32_t rdi_3 = arg3[2].d
int64_t rbx_4 = arg3[1]
int64_t var_68 = 0
sub_1405a4c70(&var_68, sbb.d(rcx_10, rcx_10, rdi_3 != 0) + 0x15 + rdi_3, 0)
memcpy(var_68, rbx_4, rdi_3 * 2)
int32_t rcx_15 = sub_140a20ba0(&var_68, u"_SceneDepthCollision", 0x14)
int32_t rdi_4 = arg3[2].d
int64_t rbx_5 = arg3[1]
var_58 = 0
sub_1405a4c70(&var_58, sbb.d(rcx_15, rcx_15, rdi_4 != 0) + 0x18 + rdi_4, 0)
memcpy(var_58, rbx_5, rdi_4 * 2)
sub_140a20ba0(&var_58, u"_DistanceFieldCollision", 0x17)
int32_t rdi_5 = rdi_3
int32_t rbx_6 = rdi_5 - 1

if (rdi_5 == 0)
    rbx_6 = 0

var_88 = nullptr
int32_t var_7c_3 = 0
int32_t rdx_12 = 0
int32_t var_80_4 = 0
int64_t* r15_3 = nullptr
int32_t r12_2 = 0

if (rbx_6 + 6 s> 0)
    sub_1405947f0(&var_88, rbx_6 + 6)
    rdx_12 = var_80_4
    r12_2 = var_7c_3
    r15_3 = var_88

int32_t r13_2 = rdx_12 + 6 + rbx_6

if (r13_2 s> r12_2)
    sub_140594770(&var_88)
    r12_2 = var_7c_3
    r15_3 = var_88

int64_t rdx_14 = var_68
*r15_3 = 0x640069006f0076
int64_t rbx_7 = sx.q(rbx_6)
r15_3[1].w = 0x20
memcpy(r15_3 + 0xa, rdx_14, rbx_7.d * 2)
*(r15_3 + (rbx_7 << 1) + 0xa) = 0
var_88 = r15_3
int32_t rax_12
rax_12.b = r13_2 == 0
int32_t var_7c_4 = r12_2
int32_t rdx_16 = rax_12 + 0x7e3 + r13_2

if (rdx_16 s> r12_2)
    sub_1405947f0(&var_88, rdx_16)

sub_140a20ba0(&var_88, 
    (in float3 In_SamplePos, in float3 In_TraceEndPos, in float CollisionDepthBounds, in float "
"ParticleRadius, out bool OutCollisionValid, out float3 Out_CollisionPos, out float3 Out_Coll", 
    0x7e3)
int64_t* rbx_8 = var_88
var_88 = nullptr
int32_t r8_7 = r13_2 - 1
int32_t var_80_6
var_80_6.q = 0

if (r13_2 == 0)
    r8_7 = 0

sub_140a20ba0(arg4, rbx_8, r8_7)

if (rbx_8 != 0)
    sub_140a74f90(rbx_8)

int32_t rbx_9 = rdi_4 - 1

if (rdi_4 == 0)
    rbx_9 = 0

var_88 = nullptr
int32_t var_7c_5 = 0
int32_t rdx_18 = 0
int32_t var_80_7 = 0
int64_t* r15_4 = nullptr
int32_t r12_3 = 0

if (rbx_9 + 6 s> 0)
    sub_1405947f0(&var_88, rbx_9 + 6)
    rdx_18 = var_80_7
    r12_3 = var_7c_5
    r15_4 = var_88

int32_t r13_4 = rbx_9 + 6 + rdx_18

if (r13_4 s> r12_3)
    sub_140594770(&var_88)
    r12_3 = var_7c_5
    r15_4 = var_88

int64_t rdx_20 = var_58
*r15_4 = 0x640069006f0076
int64_t rbx_10 = sx.q(rbx_9)
r15_4[1].w = 0x20
memcpy(r15_4 + 0xa, rdx_20, rbx_10.d * 2)
*(r15_4 + (rbx_10 << 1) + 0xa) = 0
var_88 = r15_4
int32_t rax_16
rax_16.b = r13_4 == 0
int32_t var_7c_6 = r12_3
int32_t rdx_22 = rax_16 + 0x29f + r13_4

if (rdx_22 s> r12_3)
    sub_1405947f0(&var_88, rdx_22)

sub_140a20ba0(&var_88, 
    (in float3 InPosition, in float3 In_TraceEndPos, out bool OutCollisionValid, ou", 0x29f)
int64_t* rbx_11 = var_88
var_88 = nullptr
int32_t r8_9 = r13_4 - 1
int32_t var_80_9
var_80_9.q = 0

if (r13_4 == 0)
    r8_9 = 0

sub_140a20ba0(arg4, rbx_11, r8_9)

if (rbx_11 != 0)
    sub_140a74f90(rbx_11)

int32_t rax_18 = arg3[2].d
int32_t rdx_24 = 0
var_88 = nullptr
int64_t* r15_5 = nullptr
int32_t var_80_10 = 0
int32_t r13_5 = 0
int32_t var_7c_7 = 0
int32_t rbx_12 = rax_18 - 1

if (rax_18 == 0)
    rbx_12 = 0

if (rbx_12 + 6 s> 0)
    sub_1405947f0(&var_88, rbx_12 + 6)
    rdx_24 = var_80_10
    r13_5 = var_7c_7
    r15_5 = var_88

int32_t r12_6 = rbx_12 + 6 + rdx_24

if (r12_6 s> r13_5)
    sub_140594770(&var_88)
    r13_5 = var_7c_7
    r15_5 = var_88

*r15_5 = 0x640069006f0076
r15_5[1].w = 0x20
int64_t rbx_13 = sx.q(rbx_12)
memcpy(r15_5 + 0xa, arg3[1], rbx_13.d * 2)
*(r15_5 + (rbx_13 << 1) + 0xa) = 0
var_88 = r15_5
int32_t rax_20
rax_20.b = r12_6 == 0
int32_t rdx_28 = r12_6 + 0x52 + rax_20

if (rdx_28 s> r13_5)
    sub_1405947f0(&var_88, rdx_28)

int32_t rdx_29 = sub_140a20ba0(&var_88, 
    (in float3 In_SamplePos, in float3 In_TraceEndPos, in float CollisionDepthBounds, ", 0x52)
int64_t* var_78 = var_88
var_88 = nullptr
int32_t var_80_12
var_80_12.q = 0
int32_t rdx_32 = sbb.d(rdx_29, rdx_29, r12_6 != 0) + 0x94 + r12_6

if (rdx_32 s> r13_5)
    sub_1405947f0(&var_78, rdx_32)

sub_140a20ba0(&var_78, 
    in float ParticleRadius, in bool UseMeshDistanceField, out bool OutCollisionValid, out float3 "
"Out_CollisionPos, out float3 Out_CollisionNormal) \n{\n", 0x93)
int64_t* rbx_14 = var_78
var_78 = nullptr
int32_t r8_12 = r12_6 - 1
int32_t var_70_1
var_70_1.q = 0

if (r12_6 == 0)
    r8_12 = 0

sub_140a20ba0(arg4, rbx_14, r8_12)

if (rbx_14 != 0)
    sub_140a74f90(rbx_14)

int32_t rbx_15 = rdi_4 - 1

if (rdi_4 == 0)
    rbx_15 = 0

var_88 = nullptr
int32_t var_7c_9 = 0
int32_t rdx_34 = 0
int32_t var_80_13 = 0
int64_t* r14_1 = nullptr
int32_t r15_6 = 0

if (rbx_15 + 0x27 s> 0)
    sub_1405947f0(&var_88, rbx_15 + 0x27)
    rdx_34 = var_80_13
    r15_6 = var_7c_9
    r14_1 = var_88

int32_t r12_8 = rbx_15 + 0x27 + rdx_34

if (r12_8 s> r15_6)
    sub_140594770(&var_88)
    r15_6 = var_7c_9
    r14_1 = var_88

int64_t r13_6 = var_58
int64_t rbx_16 = sx.q(rbx_15)
__builtin_memcpy(r14_1, u"\t\t\tif (UseMeshDistanceField)\n\t\t\t", 0x40)
r14_1[8] = 0x90009000a007b
r14_1[9].d = 0x90009
int32_t r8_14 = memcpy(r14_1 + 0x4c, r13_6, rbx_16.d * 2)
int32_t var_30_1 = r12_8
*(r14_1 + (rbx_16 << 1) + 0x4c) = 0
var_38 = r14_1
int32_t var_2c_1 = r15_6
sub_140596690(&var_58, &var_38, sbb.d(r8_14, r8_14, r12_8 != 0) + 0x71)
int32_t r8_17 = sub_140a20ba0(&var_58, 
    (In_SamplePos, In_TraceEndPos, OutCollisionValid, Out_CollisionPos, Out_CollisionNormal);\n\t\t\t}\n"
"\t\telse\n\t\t\t{\n\t\t\t\t", 0x70)
int64_t r14_2 = var_58
int64_t var_48 = r14_2
var_58 = 0
int32_t var_40_1 = rdi_4
int32_t var_4c
int32_t var_3c_1 = var_4c
int32_t var_50_1
var_50_1.q = 0
int64_t rbx_17

if (rdi_4 s> 1)
    int32_t rdi_6
    
    if (rdi_5 == 0)
        rdi_6 = 0
    else
        rdi_6 = rdi_5 - 1
    
    int32_t rax_28
    
    if (rdi_4 == 0)
        rax_28 = rdi_4 + 1
    
    if (rdi_4 != 0 || rdi_6 == 0)
        rax_28 = 0
    
    sub_140596690(&var_78, &var_48, rax_28 + rdi_6)
    rbx_17 = var_68
    r8_17 = sub_140a20ba0(&var_78, rbx_17, rdi_6)
    rdi_5 = var_70_1
    r14_2 = var_48
    var_88 = var_78
    int32_t var_7c_11 = r13_5
    var_70_1.q = 0
    var_78 = nullptr
    int32_t var_80_16 = rdi_5
else
    var_88 = nullptr
    
    if (rdi_5 != 0)
        sub_1405a4c70(&var_88, rdi_5, 0)
        rbx_17 = var_68
        r8_17 = memcpy(var_88, rbx_17, rdi_5 * 2)
    else
        rbx_17 = var_68
        int32_t var_7c_10 = 0

sub_140596690(&var_68, &var_88, sbb.d(r8_17, r8_17, rdi_5 != 0) + 0x89)
sub_140a20ba0(&var_68, 
    (In_SamplePos, In_TraceEndPos, CollisionDepthBounds, ParticleRadius, OutCollisionValid, "
"Out_CollisionPos, Out_CollisionNormal);\n\t\t\t}\n}\n\n", 0x88)
int64_t rdi_8 = var_68
var_68 = 0
int32_t r8_24 = rdi_3 - 1
int32_t var_60_1
var_60_1.q = 0

if (rdi_3 == 0)
    r8_24 = 0

sub_140a20ba0(arg4, rdi_8, r8_24)

if (rdi_8 != 0)
    sub_140a74f90(rdi_8)

int64_t* rcx_58 = var_88

if (rcx_58 != 0)
    sub_140a74f90(rcx_58)

if (r14_2 != 0)
    sub_140a74f90(r14_2)

int64_t* rcx_60 = var_38

if (rcx_60 != 0)
    sub_140a74f90(rcx_60)

if (r13_6 != 0)
    sub_140a74f90(r13_6)

if (rbx_17 != 0)
    sub_140a74f90(rbx_17)

return 1
