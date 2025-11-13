// 函数: sub_1422e5ed0
// 地址: 0x1422e5ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg8
int64_t* rcx_1 = arg8[1]

if (rcx_1 != 0)
    rcx_1[1].d += 1

uint64_t rbx_2 = zx.q(arg7 u>> 4) & 0x7f
*(rax + 0x28) = arg7
int32_t rsi = 0
void var_70
*(rax + 0x2c) = *sub_141976940(&var_70, rbx_2.d)

if (*(rax + 0x48) != arg5)
    int32_t r14_2
    
    if (arg5 == 0 || *arg5 == 0)
        r14_2 = 0
    else
        int64_t r14_1 = -1
        
        do
            r14_1 += 1
        while (arg5[r14_1] != 0)
        
        r14_2 = r14_1.d + 1
    
    int32_t rdx_1 = 0
    *(rax + 0x50) = 0
    
    if (*(rax + 0x54) != r14_2)
        sub_1405947f0(rax + 0x48, r14_2)
        rdx_1 = *(rax + 0x50)
    
    int32_t rax_4 = r14_2 + rdx_1
    *(rax + 0x50) = rax_4
    
    if (rax_4 s> *(rax + 0x54))
        sub_140594770(rax + 0x48)
    
    if (r14_2 != 0)
        memcpy(*(rax + 0x48), arg5, r14_2 * 2)

int32_t rax_3

if (*(rax + 0x58) != arg6)
    int32_t r14_4
    
    if (arg6 == 0 || *arg6 == 0)
        r14_4 = 0
    else
        int64_t r14_3 = -1
        
        do
            r14_3 += 1
        while (arg6[r14_3] != 0)
        
        r14_4 = r14_3.d + 1
    
    int32_t rdx_4 = 0
    *(rax + 0x60) = 0
    
    if (*(rax + 0x64) != r14_4)
        sub_1405947f0(rax + 0x58, r14_4)
        rdx_4 = *(rax + 0x60)
    
    rax_3 = rdx_4 + r14_4
    *(rax + 0x60) = rax_3
    
    if (rax_3 s> *(rax + 0x64))
        sub_140594770(rax + 0x58)
    
    if (r14_4 != 0)
        memcpy(*(rax + 0x58), arg6, r14_4 * 2)

*(rax + 0x6a) = 0
rax_3.b = data_143f56350 != 0
*(rax + 0x69) = rax_3.b
void* r13_1 = data_143f56338
int64_t var_58
int64_t* rax_5 = sub_140b63b70(rax + 0x2c, &var_58)
int32_t rcx_11 = rax_5[1].d
int32_t r14_5 = rcx_11 - 1

if (rcx_11 == 0)
    r14_5 = 0

int32_t rax_7

if (*(r13_1 + 0x130) == 0)
    rax_7 = 2

if (*(r13_1 + 0x130) != 0 || r14_5 == 0xffffffff)
    rax_7 = 1

int64_t var_218 = 0
int32_t rcx_12 = rax_7 + r14_5
int32_t r15 = *(r13_1 + 0x130)
int64_t r13_2 = *(r13_1 + 0x128)
int32_t var_20c

if (r15 != 0 || rcx_12 != 0)
    sub_1405a4c70(&var_218, r15 + rcx_12, 0)
    memcpy(var_218, r13_2, r15 * 2)
else
    var_20c = 0

sub_140a2cf70(&var_218, *rax_5, r14_5)

if (rax + 0x80 == &var_218)
    int64_t rcx_17 = var_218
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
else
    int64_t rcx_16 = *(rax + 0x80)
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    *(rax + 0x80) = var_218
    *(rax + 0x88) = r15
    *(rax + 0x8c) = var_20c
    int32_t var_210
    var_210.q = 0
    var_218 = 0

int64_t rcx_18 = var_58

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

sub_140597df0(rax + 0xa0, arg1)
sub_140597df0(rax + 0xb0, arg11)
void* rdx_13 = *(arg3 + 0x80)

if (rdx_13 != 0)
    int64_t var_d0 = 0
    int64_t var_c8_1 = 0
    sub_1422f0360(rax + 0x28, rdx_13, 0, &var_d0)
    int64_t rcx_22 = var_d0
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)

if (arg4 != 0)
    int16_t* r13_3 = *arg4
    int64_t r14_7 = -1
    
    do
        r14_7 += 1
    while (r13_3[r14_7] != 0)
    
    int32_t r12_4 = *(rax + 0xa8)
    int32_t rax_14
    
    if (r12_4 != 0 || (r14_7 + 1).d == 0)
        rax_14 = 1
    else
        rax_14 = r12_4 + 2
    
    int64_t var_1d8 = 0
    int32_t rcx_23 = rax_14 + r14_7.d
    int64_t* rax_15 = *(rax + 0xa0)
    int32_t var_1cc
    
    if (r12_4 != 0 || rcx_23 != 0)
        sub_1405a4c70(&var_1d8, r12_4 + rcx_23, 0)
        memcpy(var_1d8, rax_15, r12_4 * 2)
    else
        var_1cc = 0
    
    sub_140a2cf70(&var_1d8, r13_3, r14_7.d)
    
    if (rax + 0xa0 == &var_1d8)
        int64_t rcx_28 = var_1d8
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
    else
        int64_t rcx_27 = *(rax + 0xa0)
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        *(rax + 0xa0) = var_1d8
        *(rax + 0xa8) = r12_4
        *(rax + 0xac) = var_1cc

if (arg2 != 0)
    int16_t* r12_5 = *(arg2 + 8)
    int32_t rcx_29 = 0
    int16_t* var_240 = nullptr
    int32_t rdx_17 = 0
    int32_t var_238_1 = 0
    int16_t* r9_1 = nullptr
    int32_t var_234_1 = 0
    
    if (r12_5 != 0 && *r12_5 != 0)
        int64_t r14_8 = -1
        
        do
            r14_8 += 1
        while (r12_5[r14_8] != 0)
        
        if (r14_8.d + 1 s> 0)
            sub_1405947f0(&var_240, r14_8.d + 1)
            rdx_17 = var_234_1
            rcx_29 = var_238_1
            r9_1 = var_240
        
        int32_t rax_20 = rcx_29 + r14_8.d + 1
        var_238_1 = rax_20
        
        if (rax_20 s> rdx_17)
            sub_140594770(&var_240)
            r9_1 = var_240
        
        UnDecorator::getReferenceType(r9_1, r12_5, (r14_8.d + 1) * 2)
        rcx_29 = var_238_1
        r9_1 = var_240
    
    if (data_143f5634c != 0)
        int16_t rax_21 = *r9_1
        
        if (rax_21 == 0x46 || rax_21 == 0x54)
            int32_t r14_10 = rcx_29 - 1
            
            if (rcx_29 == 0)
                r14_10 = 0
            
            if (r14_10 s> 1)
                r14_10 = 1
            
            if (r14_10 != 0)
                if (rcx_29 != r14_10)
                    memmove(r9_1, &r9_1[sx.q(r14_10)], (rcx_29 - r14_10) * 2)
                    rcx_29 = var_238_1
                
                var_238_1 = rcx_29 - r14_10
                sub_1405a50a0(&var_240)
        
        sub_140a306e0(&var_240, u"VertexFactory", &data_1433233ac, 1)
        sub_140a306e0(&var_240, u"GPUSkinAPEXCloth", u"APEX", 1)
        sub_140a306e0(&var_240, u"true", &data_143306e7c, 1)
        sub_140a306e0(&var_240, u"false", &data_14332340c, 1)
        rcx_29 = var_238_1
        r9_1 = var_240
    
    int32_t r13_4 = rcx_29 - 1
    
    if (rcx_29 == 0)
        r13_4 = 0
    
    int32_t r14_11 = *(rax + 0xa8)
    int32_t rax_26
    
    if (r14_11 == 0)
        rax_26 = r14_11 + 2
    
    if (r14_11 != 0 || r13_4 == 0xffffffff)
        rax_26 = 1
    
    int64_t r12_6 = *(rax + 0xa0)
    int32_t rcx_40 = rax_26 + r13_4
    int64_t var_1c8 = 0
    int32_t var_1bc
    
    if (r14_11 != 0 || rcx_40 != 0)
        sub_1405a4c70(&var_1c8, r14_11 + rcx_40, 0)
        memcpy(var_1c8, r12_6, r14_11 * 2)
        r9_1 = var_240
    else
        var_1bc = 0
    
    sub_140a2cf70(&var_1c8, r9_1, r13_4)
    
    if (rax + 0xa0 == &var_1c8)
        int64_t rcx_45 = var_1c8
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
    else
        int64_t rcx_44 = *(rax + 0xa0)
        
        if (rcx_44 != 0)
            sub_140a74f90(rcx_44)
        
        *(rax + 0xa0) = var_1c8
        *(rax + 0xa8) = r14_11
        *(rax + 0xac) = var_1bc
    
    int16_t* rcx_46 = var_240
    
    if (rcx_46 != 0)
        sub_140a74f90(rcx_46)

int32_t rcx_47 = 0
int16_t* r12_7 = nullptr
int16_t* var_228 = nullptr
int32_t r13_5 = 0
int32_t var_220 = 0
int32_t var_21c = 0
int64_t* rax_31 = *(arg3 + 0x18)

if (rax_31 != 0 && *rax_31 != 0)
    int64_t r14_12 = -1
    
    do
        r14_12 += 1
    while (*(rax_31 + (r14_12 << 1)) != 0)
    
    if (r14_12.d + 1 s> 0)
        sub_1405947f0(&var_228, r14_12.d + 1)
        rcx_47 = var_21c
        r13_5 = var_220
        r12_7 = var_228
    
    r13_5 += r14_12.d + 1
    
    if (r13_5 s> rcx_47)
        sub_140594770(&var_228)
        r12_7 = var_228
    
    UnDecorator::getReferenceType(r12_7, rax_31, (r14_12.d + 1) * 2)

if (data_143f5634c != 0)
    int16_t rax_32 = *r12_7
    
    if (rax_32 == 0x46 || rax_32 == 0x54)
        int32_t rax_33 = r13_5 - 1
        
        if (r13_5 == 0)
            rax_33 = 0
        
        if (rax_33 s> 1)
            rax_33 = 1
        
        if (rax_33 != 0)
            int32_t r13_6 = r13_5 - rax_33
            
            if (r13_5 != rax_33)
                memmove(r12_7, &r12_7[sx.q(rax_33)], r13_6 * 2)
            
            sub_1405a50a0(&var_228)
            r13_5 = r13_6
            r12_7 = var_228

int16_t* var_90
sub_140a2e390(&var_90, u"%i", zx.q(*(rax + 0x20)))
int32_t r13_7

if (r13_5 == 0)
    r13_7 = 0
else
    r13_7 = r13_5 - 1

int32_t r14_14 = *(rax + 0xa8)
int32_t rax_37

if (r14_14 != 0 || r13_7 == 0xffffffff)
    rax_37 = 1
else
    rax_37 = r14_14 + 2

int64_t var_1f8 = 0
int32_t rcx_54 = rax_37 + r13_7
int64_t* rax_38 = *(rax + 0xa0)
int32_t var_1ec

if (r14_14 != 0 || rcx_54 != 0)
    sub_1405a4c70(&var_1f8, r14_14 + rcx_54, 0)
    memcpy(var_1f8, rax_38, r14_14 * 2)
else
    var_1ec = 0

sub_140a2cf70(&var_1f8, r12_7, r13_7)
int32_t var_88
int32_t r14_16

if (var_88 == 0)
    r14_16 = 0
else
    r14_16 = var_88 - 1

int32_t r8_25

if (r14_14 != 0 || r14_16 == 0xffffffff)
    r8_25 = 0
else
    r8_25 = 1

int64_t var_208 = var_1f8
int32_t rdx_34 = r14_16 + 1 + r14_14 + r8_25
var_1f8 = 0
int32_t var_1f0
var_1f0.q = 0

if (rdx_34 s> var_1ec)
    sub_1405947f0(&var_208, rdx_34)

sub_140a2cf70(&var_208, var_90, r14_16)

if (rax + 0xa0 == &var_208)
    int64_t rcx_62 = var_208
    
    if (rcx_62 != 0)
        sub_140a74f90(rcx_62)
else
    int64_t rcx_61 = *(rax + 0xa0)
    
    if (rcx_61 != 0)
        sub_140a74f90(rcx_61)
    
    *(rax + 0xa0) = var_208
    *(rax + 0xa8) = r14_14
    *(rax + 0xac) = var_1ec
    int32_t var_200
    var_200.q = 0
    var_208 = 0

int64_t rcx_63 = var_1f8

if (rcx_63 != 0)
    sub_140a74f90(rcx_63)

int16_t* rcx_64 = var_90

if (rcx_64 != 0)
    sub_140a74f90(rcx_64)

if (data_143f5634c != 0)
    sub_140a306e0(rax + 0xa0, u"BasePass", &data_143323414, 1)
    sub_140a306e0(rax + 0xa0, u"ForForward", &data_143323420, 1)
    sub_140a306e0(rax + 0xa0, u"Shadow", u"Shdw", 1)
    sub_140a306e0(rax + 0xa0, u"LightMap", &data_143323460, 1)
    sub_140a306e0(rax + 0xa0, u"EHeightFogFeature==E_", &data_142d40450, 1)
    sub_140a306e0(rax + 0xa0, u"Capsule", u"Caps", 1)
    sub_140a306e0(rax + 0xa0, u"Movable", &data_1433234b0, 1)
    sub_140a306e0(rax + 0xa0, u"Culling", u"Cull", 1)
    sub_140a306e0(rax + 0xa0, u"Atmospheric", &data_1433234e8, 1)
    sub_140a306e0(rax + 0xa0, u"Atmosphere", &data_1433234e8, 1)
    sub_140a306e0(rax + 0xa0, u"Exponential", &data_143323508, 1)
    sub_140a306e0(rax + 0xa0, u"Ambient", &data_143323528, 1)
    sub_140a306e0(rax + 0xa0, u"Perspective", u"Persp", 1)
    sub_140a306e0(rax + 0xa0, u"Occlusion", &data_143323568, 1)
    sub_140a306e0(rax + 0xa0, u"Position", &data_143323588, 1)
    sub_140a306e0(rax + 0xa0, u"Skylight", &data_1432d4398, 1)
    sub_140a306e0(rax + 0xa0, u"LightingPolicy", &data_1433235a4, 1)
    sub_140a306e0(rax + 0xa0, u"TranslucentLighting", u"TranslLight", 1)
    sub_140a306e0(rax + 0xa0, u"Translucency", u"Transl", 1)
    sub_140a306e0(rax + 0xa0, u"DistanceField", u"DistFiel", 1)
    sub_140a306e0(rax + 0xa0, u"Indirect", &data_143323658, 1)
    sub_140a306e0(rax + 0xa0, u"Cached", u"Cach", 1)
    sub_140a306e0(rax + 0xa0, u"Inject", &data_143323698, 1)
    sub_140a306e0(rax + 0xa0, u"Visualization", &data_1433236b0, 1)
    sub_140a306e0(rax + 0xa0, u"Instanced", u"Inst", 1)
    sub_140a306e0(rax + 0xa0, u"Evaluate", u"Eval", 1)
    sub_140a306e0(rax + 0xa0, u"Landscape", u"Land", 1)
    sub_140a306e0(rax + 0xa0, u"Dynamic", &data_143323720, 1)
    sub_140a306e0(rax + 0xa0, u"Vertex", &data_143323728, 1)
    sub_140a306e0(rax + 0xa0, u"Output", &data_142d57340, 1)
    sub_140a306e0(rax + 0xa0, u"Directional", &data_143323730, 1)
    sub_140a306e0(rax + 0xa0, u"Irradiance", &data_143323750, 1)
    sub_140a306e0(rax + 0xa0, u"Deferred", &data_143323770, 1)
    sub_140a306e0(rax + 0xa0, u"true", &data_143306e7c, 1)
    sub_140a306e0(rax + 0xa0, u"false", &data_14332340c, 1)
    sub_140a306e0(rax + 0xa0, u"PROPAGATE_AO", &data_143323778, 1)
    sub_140a306e0(rax + 0xa0, u"PROPAGATE_SECONDARY_OCCLUSION", u"SEC_OCC", 1)
    sub_140a306e0(rax + 0xa0, u"PROPAGATE_MULTIPLE_BOUNCES", u"MULT_BOUNC", 1)
    sub_140a306e0(rax + 0xa0, u"PostProcess", u"Post", 1)
    sub_140a306e0(rax + 0xa0, u"AntiAliasing", &data_143323868, 1)
    sub_140a306e0(rax + 0xa0, u"Mobile", &data_143323870, 1)
    sub_140a306e0(rax + 0xa0, u"Linear", &data_143323878, 1)
    sub_140a306e0(rax + 0xa0, u"INT32_MAX", u"IMAX", 1)
    sub_140a306e0(rax + 0xa0, u"Policy", &data_1433238a8, 1)
    sub_140a306e0(rax + 0xa0, u"EAtmRenderFlag==E_", &data_142d40450, 1)

if (r12_7 != 0)
    sub_140a74f90(r12_7)

if (data_143f56348 != 0)
    int32_t rax_44 = *(rax + 0xa8)
    int32_t r13_8 = rax_44 - 1
    int32_t r14_17 = *(rax + 0x88)
    
    if (rax_44 == 0)
        r13_8 = 0
    
    int32_t rax_46
    
    if (r14_17 != 0 || r13_8 == 0xffffffff)
        rax_46 = 1
    else
        rax_46 = r14_17 + 2
    
    int64_t r12_8 = *(rax + 0x80)
    int32_t rcx_111 = rax_46 + r13_8
    int16_t* var_1e8 = nullptr
    int32_t var_1dc
    
    if (r14_17 != 0 || rcx_111 != 0)
        sub_1405a4c70(&var_1e8, r14_17 + rcx_111, 0)
        memcpy(var_1e8, r12_8, r14_17 * 2)
    else
        var_1dc = 0
    
    sub_140a2cf70(&var_1e8, *(rax + 0xa0), r13_8)
    int32_t r15_2 = arg12[1].d
    uint64_t var_168
    int32_t r13_9
    
    if (r14_17 s> 1)
        int32_t r14_19 = r15_2 - 1
        
        if (r15_2 == 0)
            r14_19 = 0
        
        int32_t rdx_42
        
        if (r14_17 != 0 || r14_19 == 0)
            rdx_42 = 0
        else
            rdx_42 = r14_17 + 1
        
        int16_t* var_1b8 = var_1e8
        int32_t rdx_44 = rdx_42 + r14_17 + r14_19
        var_1e8 = nullptr
        int32_t var_1e0_1
        var_1e0_1.q = 0
        
        if (rdx_44 s> var_1dc)
            sub_1405947f0(&var_1b8, rdx_44)
        
        sub_140a20ba0(&var_1b8, *arg12, r14_19)
        r15_2 = r14_17
        r13_9 = var_1dc
        r12_7 = var_1b8
        var_1b8 = nullptr
        int32_t var_160_2 = r15_2
        int32_t var_15c_2 = r13_9
        int32_t var_1b0_1
        var_1b0_1.q = 0
    else
        int64_t r14_18 = *arg12
        var_168 = 0
        
        if (r15_2 != 0)
            sub_1405a4c70(&var_168, r15_2, 0)
            r12_7 = var_168
            memcpy(r12_7, r14_18, r15_2 * 2)
            int32_t var_15c
            r13_9 = var_15c
        else
            r13_9 = 0
            int32_t var_15c_1 = 0
            r12_7 = nullptr
    
    if (rax + 0x90 != &var_168)
        int16_t* rcx_120 = *(rax + 0x90)
        
        if (rcx_120 != 0)
            sub_140a74f90(rcx_120)
        
        *(rax + 0x90) = r12_7
        r12_7 = nullptr
        *(rax + 0x98) = r15_2
        *(rax + 0x9c) = r13_9
    
    sub_140a306e0(rax + 0x90, &data_142e5cee0, &data_142dc30a4, 1)
    
    if (r12_7 != 0)
        sub_140a74f90(r12_7)
    
    int16_t* rcx_123 = var_1e8
    
    if (rcx_123 != 0)
        sub_140a74f90(rcx_123)
    
    sub_140a306e0(rax + 0x90, &data_142e5cee4, &data_142da76f4, 1)
    sub_140a306e0(rax + 0x90, &data_142d6ad1c, &(*u"()=:<>!&| ==")[0xa], 1)
    sub_140a306e0(rax + 0x90, &(*U"RGBXYZF10|")[9], &data_142d99650, 1)
    sub_140a306e0(rax + 0x90, &data_142d6bbe8, &data_142d404b0, 1)
    sub_140a306e0(rax + 0x90, &data_142e5f8f8, &data_142e5e898, 1)
    sub_140a306e0(rax + 0x90, &data_142d4056c, &data_142e51e18, 1)
    sub_140a464c0()
    *(rax + 0x98)
    
    if ((*(data_14399ea08 + 0x50))() == 0)
        sub_140a464c0()
        
        if (*(rax + 0x98) == 0)
            (*(data_14399ea08 + 0x58))(&data_14399ea08, &data_142d40450, 1)
        else
            (*(data_14399ea08 + 0x58))(&data_14399ea08, *(rax + 0x90), 1)

int32_t rdi_1 = arg7 & 0xf
int64_t r8_33
r8_33.b = rdi_1 == 3
sub_1405d3490(rax + 0x368, u"PIXELSHADER", r8_33)
int64_t r8_34
r8_34.b = rdi_1 == 2
sub_1405d3490(rax + 0x368, u"DOMAINSHADER", r8_34)
int64_t r8_35
r8_35.b = rdi_1 == 1
sub_1405d3490(rax + 0x368, u"HULLSHADER", r8_35)
int64_t r8_36
r8_36.b = rdi_1 == 0
sub_1405d3490(rax + 0x368, u"VERTEXSHADER", r8_36)
int64_t r8_37
r8_37.b = rdi_1 == 4
sub_1405d3490(rax + 0x368, u"GEOMETRYSHADER", r8_37)
int64_t r8_38
r8_38.b = rdi_1 == 5
sub_1405d3490(rax + 0x368, u"COMPUTESHADER", r8_38)
int64_t r8_39
r8_39.b = rdi_1 == 9
sub_1405d3490(rax + 0x368, u"RAYCALLABLESHADER", r8_39)
int64_t r8_40
r8_40.b = rdi_1 == 8
sub_1405d3490(rax + 0x368, u"RAYHITGROUPSHADER", r8_40)
int64_t r8_41
r8_41.b = rdi_1 == 6
sub_1405d3490(rax + 0x368, u"RAYGENSHADER", r8_41)
int64_t r8_42
r8_42.b = rdi_1 == 7
sub_1405d3490(rax + 0x368, u"RAYMISSSHADER", r8_42)
sub_1408891d0(rax + 0x368, u"COMPILER_DEFINE", u"#define")
int32_t var_c0 = rbx_2.d

switch (rbx_2.d)
    case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
        sub_140889380(rax + 0x368, u"SHADING_PATH_DEFERRED", 1)
    case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
        nop
    default
        if (*(zx.q(rbx_2.d) * 0x14 + 0x143f025f8) s>= 3)
            sub_140889380(rax + 0x368, u"SHADING_PATH_DEFERRED", 1)

int32_t var_bc = rbx_2.d
int32_t rdi_2

switch (rbx_2.d)
    case 0, 2, 4, 6, 0xc, 0xd, 0x10, 0x12, 0x14, 0x19, 0x1b, 0x1c, 0x1f, 0x30
        rdi_2 = 3
    case 0xb, 0xe, 0xf, 0x11, 0x15, 0x16, 0x18, 0x1a, 0x1d, 0x1e
        rdi_2 = 1
        sub_140889380(rax + 0x368, u"SHADING_PATH_MOBILE", 1)
    default
        rdi_2 = *(zx.q(rbx_2.d) * 0x14 + 0x143f025f8)
        
        if (rdi_2 s< 3)
            sub_140889380(rax + 0x368, u"SHADING_PATH_MOBILE", 1)

TEB* gsbase
int64_t* r14_23 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f56ae8 s> *r14_23)
    _Init_thread_header(&data_143f56ae8)
    
    if (data_143f56ae8 == 0xffffffff)
        int64_t* rcx_328 = data_143db18d0
        
        if (rcx_328 == 0)
            sub_140a53c40()
            rcx_328 = data_143db18d0
        
        int64_t r8_86
        r8_86.b = 1
        int64_t* rax_240 = (*(*rcx_328 + 0xb0))(rcx_328, u"vr.InstancedStereo", r8_86)
        int64_t rax_241
        
        if (rax_240 == 0)
            rax_241 = 0
        else
            int64_t rdx_91 = *rax_240
            rax_241 = (*(rdx_91 + 0x58))(rax_240, rdx_91)
        
        data_143f56ae0 = rax_241
        _Init_thread_footer(&data_143f56ae8)

if (data_143f56af8 s> *r14_23)
    _Init_thread_header(&data_143f56af8)
    
    if (data_143f56af8 == 0xffffffff)
        int64_t* rcx_330 = data_143db18d0
        
        if (rcx_330 == 0)
            sub_140a53c40()
            rcx_330 = data_143db18d0
        
        int64_t r8_87
        r8_87.b = 1
        int64_t* rax_243 = (*(*rcx_330 + 0xb0))(rcx_330, u"vr.MobileMultiView", r8_87)
        int64_t rax_244
        
        if (rax_243 == 0)
            rax_244 = 0
        else
            int64_t rdx_92 = *rax_243
            rax_244 = (*(rdx_92 + 0x58))(rax_243, rdx_92)
        
        data_143f56af0 = rax_244
        _Init_thread_footer(&data_143f56af8)

if (data_143f56b08 s> *r14_23)
    _Init_thread_header(&data_143f56b08)
    
    if (data_143f56b08 == 0xffffffff)
        int64_t* rcx_332 = data_143db18d0
        
        if (rcx_332 == 0)
            sub_140a53c40()
            rcx_332 = data_143db18d0
        
        int64_t r8_88
        r8_88.b = 1
        int64_t* rax_246 = (*(*rcx_332 + 0xb0))(rcx_332, u"vr.ODSCapture", r8_88)
        int64_t rax_247
        
        if (rax_246 == 0)
            rax_247 = 0
        else
            int64_t rdx_93 = *rax_246
            rax_247 = (*(rdx_93 + 0x58))(rax_246, rdx_93)
        
        data_143f56b00 = rax_247
        _Init_thread_footer(&data_143f56b08)

if (data_143f56b18 s> *r14_23)
    _Init_thread_header(&data_143f56b18)
    
    if (data_143f56b18 == 0xffffffff)
        int64_t* rcx_334 = data_143db18d0
        
        if (rcx_334 == 0)
            sub_140a53c40()
            rcx_334 = data_143db18d0
        
        int64_t r8_89
        r8_89.b = 1
        int64_t* rax_249 = (*(*rcx_334 + 0xb0))(rcx_334, u"r.MobileHDR", r8_89)
        int64_t rax_250
        
        if (rax_249 == 0)
            rax_250 = 0
        else
            int64_t rdx_94 = *rax_249
            rax_250 = (*(rdx_94 + 0x58))(rax_249, rdx_94)
        
        data_143f56b10 = rax_250
        _Init_thread_footer(&data_143f56b18)

int32_t* rax_64 = data_143f56ae0

if (rax_64 == 0)
    r12_7.b = 0
else
    r12_7.b = *rax_64 != 0

int32_t* rax_65 = data_143f56af0
int32_t* rcx_150

if (rax_65 != 0)
    rcx_150 = data_143f56b10

char rdx_49

if (rax_65 == 0 || rcx_150 == 0 || *rax_65 == 0 || *rcx_150 != 0)
    rdx_49 = 0
else
    rdx_49 = 1

int32_t* rax_66 = data_143f56b00

if (rax_66 != 0)
    arg7 = 1

if (rax_66 == 0 || *rax_66 == 0)
    arg7 = 0

char r15_3

if (rdi_2 s< 3 || r12_7.b == 0)
    r15_3 = 0
else if (rbx_2.d == 0 || rbx_2.d == 2 || rbx_2.d == 0x10 || rbx_2.d == 0x12 || rbx_2.d == 0xe)
    r15_3 = 1
else if (((*(rbx_2 * 0x14 + &data_143f025fc) u>> 0xe).b & 1) == 0)
    r15_3 = 0
else
    r15_3 = 1

int32_t rdi_3

if (rdi_2 s>= 3 || rdx_49 == 0)
    rdi_3 = 0
else if (rbx_2.d == 0x18 || rbx_2.d == 0x11 || rbx_2.d == 0x15 || rbx_2.d == 0x1d)
    rdi_3 = 1
else
    uint64_t rdx_50 = rbx_2 * 0x14
    
    if (*(rdx_50 + &data_143f025f0) != data_143f025c0 || (*(rdx_50 + &data_143f025fc) & 1) == 0)
        int32_t rcx_152 = *(rbx_2 * 0x14 + &data_143f025fc)
        
        if (((rcx_152 u>> 6).b & 1) != 0)
            rdi_3 = 1
        else if (rbx_2.d == 0 || rbx_2.d == 2 || rbx_2.d == 0x10 || rbx_2.d == 0x12
                || rbx_2.d == 0xe || ((rcx_152 u>> 0xe).b & 1) != 0)
            r15_3 = 1
            rdi_3 = 1
        else
            r15_3 = 0
            rdi_3 = 1
    else
        rdi_3 = 1

sub_1405d3490(rax + 0x368, u"INSTANCED_STEREO", zx.q(r15_3))
int64_t r8_44

if (r15_3 == 0 || (rbx_2.d != 2 && rbx_2.d != 0x10 && rbx_2.d != 0x12
        && ((*(rbx_2 * 0x14 + &data_143f025fc) u>> 0xf).b & 1) == 0))
    r8_44 = 0
else
    r8_44 = 1

sub_1405d3490(rax + 0x368, u"MULTI_VIEW", r8_44)
sub_1405d3490(rax + 0x368, u"MOBILE_MULTI_VIEW", zx.q(rdi_3))

if (r12_7.b != 0 && r15_3 == 0)
    void* rdx_51 = data_143f56338
    
    if (not(test_bit(*(rdx_51 + 0x150), zx.q(rbx_2.d))))
        *(rdx_51 + 0x150) |= 1 << (zx.q(rbx_2.d) u% 0x40)

sub_1405d3490(rax + 0x368, u"ODS_CAPTURE", zx.q(arg7))
sub_1419c5520(arg3, rax + 0xc0, rax + 0x38, rbx_2.d)

if (arg2 != 0)
    sub_1419c5ae0(arg2, rax + 0xc0, rax + 0x38, rbx_2.d)

int32_t rax_80 = *(data_143f562e0 + 8)
void* rdi_4

if (rax_80 == 0 || rax_80 == 1)
    int64_t* rax_81 = j_sub_140a82f30(0x10)
    int64_t* r15_4 = rax_81
    
    if (rax_81 == 0)
        r15_4 = nullptr
    else
        *rax_81 = 0
        rax_81[1] = 0
    
    void* rax_82 = j_sub_140a82f30(0x18)
    rdi_4 = rax_82
    
    if (rax_82 == 0)
        rdi_4 = nullptr
    else
        *(rdi_4 + 0x10) = r15_4
        *(rdi_4 + 8) = 1
        *(rdi_4 + 0xc) = 1
        *rdi_4 = &data_142ee2130
    
    void* var_f8_1 = rdi_4
    data_143f562e0 = r15_4
    int64_t* r15_5 = data_143f562e8
    int64_t var_100_1 = 0
    
    if (rdi_4 == r15_5)
    label_1422e740e:
        
        if (rdi_4 != 0)
            int32_t temp3_1 = *(rdi_4 + 8)
            *(rdi_4 + 8) -= 1
            
            if (temp3_1 == 1)
                (**rdi_4)(rdi_4)
                int32_t temp5_1 = *(rdi_4 + 0xc)
                *(rdi_4 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_4 + 8))(rdi_4, 1)
    else
        void* var_f8_2 = nullptr
        data_143f562e8 = rdi_4
        
        if (r15_5 != 0)
            r15_5[1].d -= 1
            
            if (r15_5[1].d == 1)
                (**r15_5)(r15_5)
                int32_t temp6_1 = *(r15_5 + 0xc)
                *(r15_5 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*r15_5 + 8))(r15_5, 1)
            
            rdi_4 = var_f8_2
            goto label_1422e740e
    
    sub_1422e3d30(data_143f562e0)

int64_t var_1a8 = 0
int32_t var_1a0 = 0
sub_1405947f0(&var_1a8, 0x2f)
int32_t rax_87 = var_1a0 + 0x2f
var_1a0 = rax_87

if (rax_87 s> 0)
    sub_140594770(&var_1a8)

UnDecorator::getReferenceType(var_1a8, u"/Engine/Generated/GeneratedInstancedStereo.ush", 0x5e)
int64_t* var_80 = &var_1a8
int64_t* var_78 = &data_143f562e0
void var_b8
sub_1422d4c20(rax + 0x120, &var_b8, &var_80, nullptr)
int64_t rcx_173 = var_1a8

if (rcx_173 != 0)
    sub_140a74f90(rcx_173)

int32_t* rcx_174 = *(rax + 0x170)
void* rdx_56 = &rcx_174[sx.q(*(rax + 0x178))]

if (rcx_174 == rdx_56)
label_1422e74f0:
    rdi_4.b = 0
else
    while (*rcx_174 != 5)
        rcx_174 = &rcx_174[1]
        
        if (rcx_174 == rdx_56)
            goto label_1422e74f0
    
    rdi_4.b = 1

if (data_143f56b28 s> *r14_23)
    _Init_thread_header(&data_143f56b28)
    
    if (data_143f56b28 == 0xffffffff)
        int64_t* rcx_336 = data_143db18d0
        
        if (rcx_336 == 0)
            sub_140a53c40()
            rcx_336 = data_143db18d0
        
        int64_t r8_90
        r8_90.b = 1
        data_143f56b20 = (*(*rcx_336 + 0xb0))(rcx_336, u"r.Shaders.Optimize", r8_90)
        _Init_thread_footer(&data_143f56b28)

if (rdi_4.b == 0)
    int64_t* rcx_175 = data_143f56b20
    
    if (rcx_175 != 0 && (*(*rcx_175 + 0x90))(rcx_175) == 0)
        int64_t rdi_5 = sx.q(*(rax + 0x178))
        int32_t rax_92 = (rdi_5 + 1).d
        *(rax + 0x178) = rax_92
        
        if (rax_92 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_5 << 2)) = 1

if (sub_1419d8720(rbx_2.d) != 0)
    int64_t rdi_6 = sx.q(*(rax + 0x178))
    int32_t rax_94 = (rdi_6 + 1).d
    *(rax + 0x178) = rax_94
    
    if (rax_94 s> *(rax + 0x17c))
        sub_1405a4cf0(rax + 0x170)
    
    *(*(rax + 0x170) + (rdi_6 << 2)) = 7

if (data_143f56b38 s> *r14_23)
    _Init_thread_header(&data_143f56b38)
    
    if (data_143f56b38 == 0xffffffff)
        int64_t* rcx_337 = data_143db18d0
        
        if (rcx_337 == 0)
            sub_140a53c40()
            rcx_337 = data_143db18d0
        
        int64_t r8_91
        r8_91.b = 1
        data_143f56b30 = (*(*rcx_337 + 0xb0))(rcx_337, u"r.Shaders.FastMath", r8_91)
        _Init_thread_footer(&data_143f56b38)

int64_t* rcx_181 = data_143f56b30

if (rcx_181 != 0 && (*(*rcx_181 + 0x90))(rcx_181) == 0)
    int64_t rdi_7 = sx.q(*(rax + 0x178))
    int32_t rax_98 = (rdi_7 + 1).d
    *(rax + 0x178) = rax_98
    
    if (rax_98 s> *(rax + 0x17c))
        sub_1405a4cf0(rax + 0x170)
    
    *(*(rax + 0x170) + (rdi_7 << 2)) = 8

if (data_143f56b48 s> *r14_23)
    _Init_thread_header(&data_143f56b48)
    
    if (data_143f56b48 == 0xffffffff)
        int64_t* rcx_338 = data_143db18d0
        
        if (rcx_338 == 0)
            sub_140a53c40()
            rcx_338 = data_143db18d0
        
        int64_t r8_92
        r8_92.b = 1
        data_143f56b40 = (*(*rcx_338 + 0xb0))(rcx_338, u"r.Shaders.FlowControlMode", r8_92)
        _Init_thread_footer(&data_143f56b48)

int64_t* rcx_184 = data_143f56b40

if (rcx_184 != 0)
    int32_t rax_101 = (*(*rcx_184 + 0x90))(rcx_184)
    
    if (rax_101 == 1)
        int64_t rdi_9 = sx.q(*(rax + 0x178))
        int32_t rax_104 = (rdi_9 + 1).d
        *(rax + 0x178) = rax_104
        
        if (rax_104 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_9 << 2)) = 0
    else if (rax_101 == 2)
        int64_t rdi_8 = sx.q(*(rax + 0x178))
        int32_t rax_103 = (rdi_8 + 1).d
        *(rax + 0x178) = rax_103
        
        if (rax_103 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_8 << 2)) = 2

if (rbx_2.d == 0)
label_1422e769c:
    
    if (data_143f56b58 s> *r14_23)
        _Init_thread_header(&data_143f56b58)
        
        if (data_143f56b58 == 0xffffffff)
            int64_t* rcx_339 = data_143db18d0
            
            if (rcx_339 == 0)
                sub_140a53c40()
                rcx_339 = data_143db18d0
            
            int64_t r8_93
            r8_93.b = 1
            data_143f56b50 = (*(*rcx_339 + 0xb0))(rcx_339, r.D3D.RemoveUnusedInterpolators", r8_93)
            _Init_thread_footer(&data_143f56b58)
    
    int64_t* rcx_189 = data_143f56b50
    
    if (rcx_189 != 0 && (*(*rcx_189 + 0x90))(rcx_189) != 0)
        int64_t rdi_10 = sx.q(*(rax + 0x178))
        int32_t rax_110 = (rdi_10 + 1).d
        *(rax + 0x178) = rax_110
        
        if (rax_110 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_10 << 2)) = 0xc
    
    if (data_143f56b68 s> *r14_23)
        _Init_thread_header(&data_143f56b68)
        
        if (data_143f56b68 == 0xffffffff)
            int64_t* rcx_340 = data_143db18d0
            
            if (rcx_340 == 0)
                sub_140a53c40()
                rcx_340 = data_143db18d0
            
            int64_t r8_94
            r8_94.b = 1
            data_143f56b60 = (*(*rcx_340 + 0xb0))(rcx_340, u"r.D3D.ForceDXC", r8_94)
            _Init_thread_footer(&data_143f56b68)
    
    int64_t* rcx_192 = data_143f56b60
    
    if (rcx_192 != 0 && (*(*rcx_192 + 0x90))(rcx_192) != 0)
        int64_t rdi_11 = sx.q(*(rax + 0x178))
        int32_t rax_114 = (rdi_11 + 1).d
        *(rax + 0x178) = rax_114
        
        if (rax_114 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_11 << 2)) = 0x14
else if (rbx_2.d != 4)
    if (rbx_2.d == 0xe)
        goto label_1422e769c
    
    int64_t rax_106
    rax_106.b = *(rbx_2 * 0x14 + &data_143f025f0) == data_143f025a8
    
    if (rax_106.b != 0)
        goto label_1422e769c

char r15_6

if (rbx_2.d == 0xb || rbx_2.d == 0xc || rbx_2.d == 0x1e || rbx_2.d == 0x1f || rbx_2.d == 0x12
        || rbx_2.d == 0x10 || rbx_2.d == 0x16 || rbx_2.d == 0x1b
        || *(rbx_2 * 0x14 + &data_143f025f0) == data_143f025b0)
    if (data_143f56b78 s> *r14_23)
        _Init_thread_header(&data_143f56b78)
        
        if (data_143f56b78 == 0xffffffff)
            int64_t* rcx_341 = data_143db18d0
            
            if (rcx_341 == 0)
                sub_140a53c40()
                rcx_341 = data_143db18d0
            
            int64_t r8_95
            r8_95.b = 1
            data_143f56b70 = (*(*rcx_341 + 0xb0))(rcx_341, u"r.Shaders.ZeroInitialise", r8_95)
            _Init_thread_footer(&data_143f56b78)
    
    int64_t* rcx_195 = data_143f56b70
    
    if ((*(*rcx_195 + 0x90))(rcx_195) != 0)
        int64_t rdi_12 = sx.q(*(rax + 0x178))
        int32_t rax_120 = (rdi_12 + 1).d
        *(rax + 0x178) = rax_120
        
        if (rax_120 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_12 << 2)) = 9
    
    if (data_143f56b88 s> *r14_23)
        _Init_thread_header(&data_143f56b88)
        
        if (data_143f56b88 == 0xffffffff)
            int64_t* rcx_342 = data_143db18d0
            
            if (rcx_342 == 0)
                sub_140a53c40()
                rcx_342 = data_143db18d0
            
            int64_t r8_96
            r8_96.b = 1
            data_143f56b80 = (*(*rcx_342 + 0xb0))(rcx_342, u"r.Shaders.BoundsChecking", r8_96)
            _Init_thread_footer(&data_143f56b88)
    
    int64_t* rcx_198 = data_143f56b80
    
    if ((*(*rcx_198 + 0x90))(rcx_198) != 0)
        int64_t rdi_13 = sx.q(*(rax + 0x178))
        int32_t rax_124 = (rdi_13 + 1).d
        *(rax + 0x178) = rax_124
        
        if (rax_124 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_13 << 2)) = 0xa
    
    if (data_143f56b98 s> *r14_23)
        _Init_thread_header(&data_143f56b98)
        
        if (data_143f56b98 == 0xffffffff)
            data_143f56b90 = sub_140b1b400()
            _Init_thread_footer(&data_143f56b98)
    
    int64_t var_a0
    sub_141976940(&var_a0, rbx_2.d)
    int64_t* rcx_202 = data_143f56b90
    int64_t* rax_127 = (*(*rcx_202 + 0x50))(rcx_202, var_a0)
    
    if (data_143f56ba0 s> *r14_23)
        _Init_thread_header(&data_143f56ba0)
        
        if (data_143f56ba0 == 0xffffffff)
            char rax_266
            
            if (rax_127 != 0)
                int64_t rdx_95 = *rax_127
                rax_266 = (*(rdx_95 + 0x38))(rax_127, rdx_95)
            
            if (rax_127 == 0 || rax_266 == 0)
                rax_266 = 0
            else
                rax_266 = 1
            
            data_143f56b9c = rax_266
            _Init_thread_footer(&data_143f56ba0)
    
    if (data_143f56b9c != 0)
        void* rcx_206 = data_143ddb400
        int64_t var_f0
        __builtin_memset(&var_f0, 0, 0x20)
        int64_t var_128 = 0
        int32_t var_120_1 = 0
        int64_t var_e0
        sub_140af5b90(rcx_206, /Script/IOSRuntimeSettings.IOSRuntimeSettings", RemoteServerName", 
            &var_e0, &data_143de5780)
        sub_140af5b90(data_143ddb400, /Script/IOSRuntimeSettings.IOSRuntimeSettings", RSyncUsername"
            , &var_f0, &data_143de5780)
        sub_140af5b90(data_143ddb400, /Script/IOSRuntimeSettings.IOSRuntimeSettings", 
            SSHPrivateKeyOverridePath", &var_128, &data_143de5780)
        int64_t var_198 = 0
        int32_t var_190_1 = 0
        sub_1405947f0(&var_198, 0x11)
        int32_t rax_129 = var_190_1 + 0x11
        var_190_1 = rax_129
        
        if (rax_129 s> 0)
            sub_140594770(&var_198)
        
        UnDecorator::getReferenceType(var_198, u"RemoteServerName", 0x22)
        sub_1408826e0(rax + 0x2c0, &var_198, &var_e0)
        int64_t rcx_213 = var_198
        
        if (rcx_213 != 0)
            sub_140a74f90(rcx_213)
        
        int64_t var_188 = 0
        int32_t var_180_1 = 0
        sub_1405947f0(&var_188, 0xe)
        int32_t rax_130 = var_180_1 + 0xe
        var_180_1 = rax_130
        
        if (rax_130 s> 0)
            sub_140594770(&var_188)
        
        UnDecorator::getReferenceType(var_188, u"RSyncUsername", 0x1c)
        sub_1408826e0(rax + 0x2c0, &var_188, &var_f0)
        int64_t rcx_218 = var_188
        
        if (rcx_218 != 0)
            sub_140a74f90(rcx_218)
        
        if (var_120_1 != 0 && var_120_1 - 1 s> 0)
            int64_t var_178 = 0
            int32_t var_170_1 = 0
            sub_1405947f0(&var_178, 0x1a)
            int32_t rax_133 = var_170_1 + 0x1a
            var_170_1 = rax_133
            
            if (rax_133 s> 0)
                sub_140594770(&var_178)
            
            UnDecorator::getReferenceType(var_178, u"SSHPrivateKeyOverridePath", 0x34)
            sub_1408826e0(rax + 0x2c0, &var_178, &var_128)
            int64_t rcx_223 = var_178
            
            if (rcx_223 != 0)
                sub_140a74f90(rcx_223)
        
        int64_t rcx_224 = var_128
        
        if (rcx_224 != 0)
            sub_140a74f90(rcx_224)
        
        int64_t rcx_225 = var_f0
        
        if (rcx_225 != 0)
            sub_140a74f90(rcx_225)
        
        int64_t rcx_226 = var_e0
        
        if (rcx_226 != 0)
            sub_140a74f90(rcx_226)
    else
        int64_t rdi_15 = sx.q(*(rax + 0x178))
        int32_t rax_128 = (rdi_15 + 1).d
        *(rax + 0x178) = rax_128
        
        if (rax_128 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_15 << 2)) = 1
    
    void* rcx_227 = data_143ddb400
    char var_247 = 0
    sub_140af2fd0(rcx_227, /Script/UnrealEd.ProjectPackagingSettings", 
        bSharedMaterialNativeLibraries", &var_247, &data_143de5830)
    
    if (data_143f56b9c != 0 && var_247 != 0)
        int64_t rdi_18 = sx.q(*(rax + 0x178))
        int32_t rax_134 = (rdi_18 + 1).d
        *(rax + 0x178) = rax_134
        
        if (rax_134 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_18 << 2)) = 0x10
    
    int32_t var_b4_1 = rbx_2.d
    sub_1405d3490(rax + 0x368, u"MAX_SHADER_LANGUAGE_VERSION", zx.q(sub_14197ef40(rbx_2.d)))
    uint64_t var_138 = 0
    int32_t var_130_1 = 0
    uint64_t var_148 = 0
    int32_t var_140_1 = 0
    uint64_t var_158 = 0
    int32_t var_150_1 = 0
    char var_248 = 1
    
    if (rbx_2.d == 0 || rbx_2.d == 0xe || rbx_2.d == 6 || rbx_2.d == 0xf || rbx_2.d == 0x12
            || rbx_2.d == 0x10 || rbx_2.d == 0x11 || rbx_2.d == 0x14 || rbx_2.d == 0x16
            || rbx_2.d == 0x1b || ((*(rbx_2 * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
        sub_140af5b90(data_143ddb400, /Script/MacTargetPlatform.MacTargetSettings", 
            UseFastIntrinsics", &var_138, &data_143de5780)
        sub_140af2fd0(data_143ddb400, /Script/MacTargetPlatform.MacTargetSettings", 
            EnableMathOptimisations", &var_248, &data_143de5780)
        sub_140af5b90(data_143ddb400, /Script/MacTargetPlatform.MacTargetSettings", ForceFloats", 
            &var_148, &data_143de5780)
        sub_140af5b90(data_143ddb400, /Script/MacTargetPlatform.MacTargetSettings", 
            IndirectArgumentTier", &var_158, &data_143de5780)
        r15_6 = arg10
    else
        sub_140af5b90(data_143ddb400, /Script/IOSRuntimeSettings.IOSRuntimeSettings", 
            UseFastIntrinsics", &var_138, &data_143de5780)
        sub_140af2fd0(data_143ddb400, /Script/IOSRuntimeSettings.IOSRuntimeSettings", 
            EnableMathOptimisations", &var_248, &data_143de5780)
        sub_140af5b90(data_143ddb400, /Script/IOSRuntimeSettings.IOSRuntimeSettings", ForceFloats", 
            &var_148, &data_143de5780)
        sub_140af5b90(data_143ddb400, /Script/IOSRuntimeSettings.IOSRuntimeSettings", 
            IndirectArgumentTier", &var_158, &data_143de5780)
        r15_6 = 0
    
    int16_t* r8_54 = &data_142d40450
    
    if (var_130_1 != 0)
        r8_54 = var_138
    
    sub_1408891d0(rax + 0x368, u"METAL_USE_FAST_INTRINSICS", r8_54)
    int16_t* r8_55 = &data_142d40450
    
    if (var_140_1 != 0)
        r8_55 = var_148
    
    sub_1408891d0(rax + 0x368, u"FORCE_FLOATS", r8_55)
    int16_t* r8_56 = &data_142d40450
    
    if (var_150_1 != 0)
        r8_56 = var_158
    
    sub_1408891d0(rax + 0x368, u"METAL_INDIRECT_ARGUMENT_BUFFERS", r8_56)
    
    if (var_248 == 0)
        int64_t rdi_19 = sx.q(*(rax + 0x178))
        int32_t rax_138 = (rdi_19 + 1).d
        *(rax + 0x178) = rax_138
        
        if (rax_138 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_19 << 2)) = 8
    
    uint64_t rcx_246 = var_158
    
    if (rcx_246 != 0)
        sub_140a74f90(rcx_246)
    
    uint64_t rcx_247 = var_148
    
    if (rcx_247 != 0)
        sub_140a74f90(rcx_247)
    
    uint64_t rcx_248 = var_138
    
    if (rcx_248 != 0)
        sub_140a74f90(rcx_248)
    
    if (data_143f56bb0 s> *r14_23)
        _Init_thread_header(&data_143f56bb0)
        
        if (data_143f56bb0 == 0xffffffff)
            int64_t* rcx_344 = data_143db18d0
            
            if (rcx_344 == 0)
                sub_140a53c40()
                rcx_344 = data_143db18d0
            
            int64_t r8_97
            r8_97.b = 1
            data_143f56ba8 = (*(*rcx_344 + 0xb0))(rcx_344, u"r.Metal.ForceDXC", r8_97)
            _Init_thread_footer(&data_143f56bb0)
    
    int64_t* rcx_249 = data_143f56ba8
    
    if (rcx_249 != 0 && (*(*rcx_249 + 0x90))(rcx_249) != 0)
        int64_t rdi_20 = sx.q(*(rax + 0x178))
        int32_t rax_142 = (rdi_20 + 1).d
        *(rax + 0x178) = rax_142
        
        if (rax_142 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_20 << 2)) = 0x14
else
    r15_6 = arg10

if (rbx_2.d == 6 || rbx_2.d == 0xf || rbx_2.d == 0xd || rbx_2.d == 0x18
        || *(rbx_2 * 0x14 + &data_143f025f0) == data_143f025b8)
    if (data_143f56bc0 s> *r14_23)
        _Init_thread_header(&data_143f56bc0)
        
        if (data_143f56bc0 == 0xffffffff)
            int64_t* rcx_345 = data_143db18d0
            
            if (rcx_345 == 0)
                sub_140a53c40()
                rcx_345 = data_143db18d0
            
            int64_t r8_98
            r8_98.b = 1
            data_143f56bb8 = (*(*rcx_345 + 0xb0))(rcx_345, u"r.OpenGL.ForceDXC", r8_98)
            _Init_thread_footer(&data_143f56bc0)
    
    int64_t* rcx_252 = data_143f56bb8
    
    if (rcx_252 != 0 && (*(*rcx_252 + 0x90))(rcx_252) != 0)
        int64_t rdi_21 = sx.q(*(rax + 0x178))
        int32_t rax_148 = (rdi_21 + 1).d
        *(rax + 0x178) = rax_148
        
        if (rax_148 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_21 << 2)) = 0x14

if (rbx_2.d == 0x14 || rbx_2.d == 0x1c || rbx_2.d == 0x11 || rbx_2.d == 0x15 || rbx_2.d == 0x1d
        || rbx_2.d == 0x30 || *(rbx_2 * 0x14 + &data_143f025f0) == data_143f025c0)
    if (data_143f56bd0 s> *r14_23)
        _Init_thread_header(&data_143f56bd0)
        
        if (data_143f56bd0 == 0xffffffff)
            int64_t* rcx_346 = data_143db18d0
            
            if (rcx_346 == 0)
                sub_140a53c40()
                rcx_346 = data_143db18d0
            
            int64_t r8_99
            r8_99.b = 1
            data_143f56bc8 = (*(*rcx_346 + 0xb0))(rcx_346, u"r.Vulkan.ForceDXC", r8_99)
            _Init_thread_footer(&data_143f56bd0)
    
    int64_t* rcx_255 = data_143f56bc8
    
    if (rcx_255 != 0 && (*(*rcx_255 + 0x90))(rcx_255) != 0)
        int64_t rdi_22 = sx.q(*(rax + 0x178))
        int32_t rax_154 = (rdi_22 + 1).d
        *(rax + 0x178) = rax_154
        
        if (rax_154 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_22 << 2)) = 0x14

if ((rbx_2.d == 6 || rbx_2.d == 0xf || rbx_2.d == 0xd || rbx_2.d == 0x18
        || *(rbx_2 * 0x14 + &data_143f025f0) == data_143f025b8) && ((rbx_2.d u<= 0x1e
        && test_bit(0x6562c800, rbx_2.d)) || (*(rbx_2 * 0x14 + &data_143f025fc) & 1) != 0))
    if (data_143f56be0 s> *r14_23)
        _Init_thread_header(&data_143f56be0)
        
        if (data_143f56be0 == 0xffffffff)
            int64_t* rcx_347 = data_143db18d0
            
            if (rcx_347 == 0)
                sub_140a53c40()
                rcx_347 = data_143db18d0
            
            int64_t r8_100
            r8_100.b = 1
            data_143f56bd8 = (*(*rcx_347 + 0xb0))(rcx_347, u"OpenGL.UseEmulatedUBs", r8_100)
            _Init_thread_footer(&data_143f56be0)
    
    int64_t* rcx_259 = data_143f56bd8
    
    if (rcx_259 != 0 && (*(*rcx_259 + 0x90))(rcx_259) != 0)
        int64_t rdi_23 = sx.q(*(rax + 0x178))
        int32_t rax_160 = (rdi_23 + 1).d
        *(rax + 0x178) = rax_160
        
        if (rax_160 s> *(rax + 0x17c))
            sub_1405a4cf0(rax + 0x170)
        
        *(*(rax + 0x170) + (rdi_23 << 2)) = 0x12

sub_1405d3490(rax + 0x368, u"HAS_INVERTED_Z_BUFFER", 1)
void* rcx_263 = data_143ddb400
uint64_t var_118 = 0
int32_t var_110 = 0
sub_140af5b90(rcx_263, u"DevOptions.Shaders", u"ShaderPDBRoot", &var_118, &data_143de5780)

if (var_110 s> 1)
    int16_t* r8_57 = &data_142d40450
    
    if (var_110 != 0)
        r8_57 = var_118
    
    sub_1408891d0(rax + 0x368, u"SHADER_PDB_ROOT", r8_57)

uint64_t rcx_265 = var_118

if (rcx_265 != 0)
    sub_140a74f90(rcx_265)

if (data_143f56bf0 s> *r14_23)
    _Init_thread_header(&data_143f56bf0)
    
    if (data_143f56bf0 == 0xffffffff)
        int64_t* rcx_348 = data_143db18d0
        
        if (rcx_348 == 0)
            sub_140a53c40()
            rcx_348 = data_143db18d0
        
        int64_t* rax_276 = (*(*rcx_348 + 0xb0))(rcx_348, u"r.ClearCoatNormal", 1)
        int64_t rax_277
        
        if (rax_276 == 0)
            rax_277 = 0
        else
            int64_t rdx_96 = *rax_276
            rax_277 = (*(rdx_96 + 0x58))(rax_276, rdx_96)
        
        data_143f56be8 = rax_277
        _Init_thread_footer(&data_143f56bf0)

int32_t* rax_163 = data_143f56be8
int64_t r8_58 = 0

if (rax_163 != 0)
    r8_58.b = *rax_163 != 0

sub_140889380(rax + 0x368, u"CLEAR_COAT_BOTTOM_NORMAL", r8_58)

if (data_143f56c00 s> *r14_23)
    _Init_thread_header(&data_143f56c00)
    
    if (data_143f56c00 == 0xffffffff)
        int64_t* rcx_350 = data_143db18d0
        
        if (rcx_350 == 0)
            sub_140a53c40()
            rcx_350 = data_143db18d0
        
        int64_t* rax_279 = (*(*rcx_350 + 0xb0))(rcx_350, u"r.IrisNormal", 1)
        int64_t rax_280
        
        if (rax_279 == 0)
            rax_280 = 0
        else
            int64_t rdx_97 = *rax_279
            rax_280 = (*(rdx_97 + 0x58))(rax_279, rdx_97)
        
        data_143f56bf8 = rax_280
        _Init_thread_footer(&data_143f56c00)

int32_t* rax_165 = data_143f56bf8
int64_t r8_59 = 0

if (rax_165 != 0)
    r8_59.b = *rax_165 != 0

sub_140889380(rax + 0x368, u"IRIS_NORMAL", r8_59)

if (data_143f56c10 s> *r14_23)
    _Init_thread_header(&data_143f56c10)
    
    if (data_143f56c10 == 0xffffffff)
        int64_t* rcx_352 = data_143db18d0
        
        if (rcx_352 == 0)
            sub_140a53c40()
            rcx_352 = data_143db18d0
        
        int64_t* rax_282 = (*(*rcx_352 + 0xb0))(rcx_352, u"Compat.UseDXT5NormalMaps", 1)
        int64_t rax_283
        
        if (rax_282 == 0)
            rax_283 = 0
        else
            int64_t rdx_98 = *rax_282
            rax_283 = (*(rdx_98 + 0x58))(rax_282, rdx_98)
        
        data_143f56c08 = rax_283
        _Init_thread_footer(&data_143f56c10)

int32_t* rax_167 = data_143f56c08
int64_t r8_60 = 0

if (rax_167 != 0)
    r8_60.b = *rax_167 != 0

sub_140889380(rax + 0x368, u"DXT5_NORMALMAPS", r8_60)

if (r15_6 != 0)
    if (data_143f56c20 s> *r14_23)
        _Init_thread_header(&data_143f56c20)
        
        if (data_143f56c20 == 0xffffffff)
            int64_t* rcx_354 = data_143db18d0
            
            if (rcx_354 == 0)
                sub_140a53c40()
                rcx_354 = data_143db18d0
            
            int64_t* rax_285 = (*(*rcx_354 + 0xb0))(rcx_354, u"r.CompileShadersForDevelopment", 1)
            int64_t rax_286
            
            if (rax_285 == 0)
                rax_286 = 0
            else
                int64_t rdx_99 = *rax_285
                rax_286 = (*(rdx_99 + 0x58))(rax_285, rdx_99)
            
            data_143f56c18 = rax_286
            _Init_thread_footer(&data_143f56c20)
    
    int32_t* rax_169 = data_143f56c18
    int64_t r8_61 = 0
    
    if (rax_169 != 0)
        r8_61.b = *rax_169 != 0
    
    sub_140889380(rax + 0x368, u"COMPILE_SHADERS_FOR_DEVELOPMENT", r8_61)

if (data_143f56c30 s> *r14_23)
    _Init_thread_header(&data_143f56c30)
    
    if (data_143f56c30 == 0xffffffff)
        int64_t* rcx_356 = data_143db18d0
        
        if (rcx_356 == 0)
            sub_140a53c40()
            rcx_356 = data_143db18d0
        
        int64_t* rax_288 = (*(*rcx_356 + 0xb0))(rcx_356, u"r.AllowStaticLighting", 1)
        int64_t rax_289
        
        if (rax_288 == 0)
            rax_289 = 0
        else
            int64_t rdx_100 = *rax_288
            rax_289 = (*(rdx_100 + 0x58))(rax_288, rdx_100)
        
        data_143f56c28 = rax_289
        _Init_thread_footer(&data_143f56c30)

int64_t rax_171 = data_143f56c28
int64_t r8_62

if (rax_171 == 0)
    r8_62 = 1
else
    r8_62.b = *rax_171 != 0

sub_140889380(rax + 0x368, u"ALLOW_STATIC_LIGHTING", r8_62)
int64_t r8_63
r8_63.b = test_bit(data_143f13cb8, zx.q(rbx_2.d))
sub_140889380(rax + 0x368, u"GBUFFER_HAS_VELOCITY", r8_63)
int64_t rax_173 = 1 << rbx_2.b
int64_t r8_64

if ((data_143f13cc0 & rax_173) != 0)
    r8_64 = 1

if ((data_143f13cc0 & rax_173) == 0 || (data_143f13cb8 & rax_173) != 0)
    r8_64 = 0

sub_140889380(rax + 0x368, u"GBUFFER_HAS_TANGENT", r8_64)
int64_t r8_65
r8_65.b = test_bit(data_143f13cc8, zx.q(rbx_2.d))
sub_140889380(rax + 0x368, u"SELECTIVE_BASEPASS_OUTPUTS", r8_65)
sub_140889380(rax + 0x368, u"USE_PREEXPOSURE", 1)
int64_t r8_66
r8_66.b = test_bit(data_143f13cb0, zx.q(rbx_2.d))
sub_140889380(rax + 0x368, u"USE_DBUFFER", r8_66)

if (data_143f56c40 s> *r14_23)
    _Init_thread_header(&data_143f56c40)
    
    if (data_143f56c40 == 0xffffffff)
        int64_t* rcx_358 = data_143db18d0
        
        if (rcx_358 == 0)
            sub_140a53c40()
            rcx_358 = data_143db18d0
        
        data_143f56c38 = (*(*rcx_358 + 0xb0))(rcx_358, u"r.AllowGlobalClipPlane", 1)
        _Init_thread_footer(&data_143f56c40)

int64_t* rcx_280 = data_143f56c38
int64_t r8_67

if (rcx_280 == 0)
    r8_67 = 0
else
    r8_67.b = (*(*rcx_280 + 0x90))(rcx_280) != 0

sub_140889380(rax + 0x368, u"PROJECT_ALLOW_GLOBAL_CLIP_PLANE", r8_67)
int64_t* rax_179 = sub_140b1b3f0()
int64_t r15_7 = *rax_179
void var_68
int64_t* rax_180 = sub_141976940(&var_68, rbx_2.d)
void var_60
int64_t* rax_182 = (*(r15_7 + 0x70))(rax_179, *sub_140b58260(&var_60, u"ShaderFormat", 1), *rax_180)
int64_t* rdi_25
int64_t* r14_24

if (rax_182 == 0)
    rdi_25 = r14_23
    
    if (data_143f56c50 s> *rdi_25)
        _Init_thread_header(&data_143f56c50)
        
        if (data_143f56c50 == 0xffffffff)
            int64_t* rcx_359 = data_143db18d0
            
            if (rcx_359 == 0)
                sub_140a53c40()
                rcx_359 = data_143db18d0
            
            int64_t r8_101
            r8_101.b = 1
            data_143f56c48 = (*(*rcx_359 + 0xb0))(rcx_359, u"r.ForwardShading", r8_101)
            _Init_thread_footer(&data_143f56c50)
    
    int64_t* rcx_287 = data_143f56c48
    
    if (rcx_287 == 0)
        r14_24.b = 0
    else
        r14_24.b = (*(*rcx_287 + 0x90))(rcx_287) != 0
else
    int64_t rdx_83 = *rax_182
    rdi_25 = r14_23
    r14_24 = zx.q((*(rdx_83 + 0xe8))(rax_182, rdx_83))

sub_1405d3490(rax + 0x368, u"FORWARD_SHADING", zx.q(r14_24.b))
int32_t var_b0 = rbx_2.d

if (sub_1419a51c0(rbx_2.d) == 0)
    sub_140889380(rax + 0x368, u"EARLY_Z_PASS_ONLY_MATERIAL_MASKING", 0)
else
    sub_140889380(rax + 0x368, u"EARLY_Z_PASS_ONLY_MATERIAL_MASKING", 1)

if (data_143f56c60 s> *rdi_25)
    _Init_thread_header(&data_143f56c60)
    
    if (data_143f56c60 == 0xffffffff)
        int64_t* rcx_360 = data_143db18d0
        
        if (rcx_360 == 0)
            sub_140a53c40()
            rcx_360 = data_143db18d0
        
        int64_t r8_102
        r8_102.b = 1
        data_143f56c58 = (*(*rcx_360 + 0xb0))(rcx_360, u"r.VertexFoggingForOpaque", r8_102)
        _Init_thread_footer(&data_143f56c60)

int64_t r8_70

if (r14_24.b == 0)
    r8_70 = 0
else
    int64_t* rcx_291 = data_143f56c58
    
    if (rcx_291 == 0)
        r8_70 = 0
    else
        r8_70 = 1
        
        if ((*(*rcx_291 + 0x90))(rcx_291) == 0)
            r8_70 = 0

sub_1405d3490(rax + 0x368, u"PROJECT_VERTEX_FOGGING_FOR_OPAQUE", r8_70)

if (data_143f56c70 s> *rdi_25)
    _Init_thread_header(&data_143f56c70)
    
    if (data_143f56c70 == 0xffffffff)
        int64_t* rcx_361 = data_143db18d0
        
        if (rcx_361 == 0)
            sub_140a53c40()
            rcx_361 = data_143db18d0
        
        int64_t r8_103
        r8_103.b = 1
        data_143f56c68 = (*(*rcx_361 + 0xb0))(rcx_361, u"r.Mobile.DisableVertexFog", r8_103)
        _Init_thread_footer(&data_143f56c70)

int64_t* rcx_293 = data_143f56c68
int64_t r8_71

if (rcx_293 == 0)
    r8_71 = 0
else
    r8_71.b = (*(*rcx_293 + 0x90))(rcx_293) != 0

sub_140889380(rax + 0x368, u"PROJECT_MOBILE_DISABLE_VERTEX_FOG", r8_71)

if (data_143f56c80 s> *rdi_25)
    _Init_thread_header(&data_143f56c80)
    
    if (data_143f56c80 == 0xffffffff)
        int64_t* rcx_362 = data_143db18d0
        
        if (rcx_362 == 0)
            sub_140a53c40()
            rcx_362 = data_143db18d0
        
        int64_t r8_104
        r8_104.b = 1
        data_143f56c78 = (*(*rcx_362 + 0xb0))(rcx_362, u"r.SupportSkyAtmosphere", r8_104)
        _Init_thread_footer(&data_143f56c80)

int64_t* rcx_295 = data_143f56c78
int32_t rax_196

if (rcx_295 != 0)
    rax_196 = (*(*rcx_295 + 0x90))(rcx_295)

if (rcx_295 == 0 || rax_196 == 0)
    r14_24.b = 0
else
    r14_24.b = 1

sub_140889380(rax + 0x368, u"PROJECT_SUPPORT_SKY_ATMOSPHERE", zx.q(r14_24.b))

if (data_143f56c90 s> *rdi_25)
    _Init_thread_header(&data_143f56c90)
    
    if (data_143f56c90 == 0xffffffff)
        int64_t* rcx_363 = data_143db18d0
        
        if (rcx_363 == 0)
            sub_140a53c40()
            rcx_363 = data_143db18d0
        
        int64_t r8_105
        r8_105.b = 1
        data_143f56c88 =
            (*(*rcx_363 + 0xb0))(rcx_363, r.SupportSkyAtmosphereAffectsHeightFog", r8_105)
        _Init_thread_footer(&data_143f56c90)

int64_t* rcx_297 = data_143f56c88
int64_t r8_73

if (rcx_297 == 0 || r14_24.b == 0)
    r8_73 = 0
else
    r8_73.b = (*(*rcx_297 + 0x90))(rcx_297) != 0

sub_140889380(rax + 0x368, u"PROJECT_SUPPORT_SKY_ATMOSPHERE_AFFECTS_HEIGHFOG", r8_73)

if (data_143f56ca0 s> *rdi_25)
    _Init_thread_header(&data_143f56ca0)
    
    if (data_143f56ca0 == 0xffffffff)
        int64_t* rcx_364 = data_143db18d0
        
        if (rcx_364 == 0)
            sub_140a53c40()
            rcx_364 = data_143db18d0
        
        int64_t r8_106
        r8_106.b = 1
        data_143f56c98 = (*(*rcx_364 + 0xb0))(rcx_364, u"r.Mobile.UseLegacyShadingModel", r8_106)
        _Init_thread_footer(&data_143f56ca0)

int64_t* rcx_299 = data_143f56c98
int64_t r8_74

if (rcx_299 == 0)
    r8_74 = 0
else
    r8_74.b = (*(*rcx_299 + 0x90))(rcx_299) != 0

sub_140889380(rax + 0x368, u"PROJECT_MOBILE_USE_LEGACY_SHADING", r8_74)

if (data_143f56cb0 s> *rdi_25)
    _Init_thread_header(&data_143f56cb0)
    
    if (data_143f56cb0 == 0xffffffff)
        int64_t* rcx_365 = data_143db18d0
        
        if (rcx_365 == 0)
            sub_140a53c40()
            rcx_365 = data_143db18d0
        
        int64_t r8_107
        r8_107.b = 1
        data_143f56ca8 = (*(*rcx_365 + 0xb0))(rcx_365, u"r.Mobile.ForceFullPrecisionInPS", r8_107)
        _Init_thread_footer(&data_143f56cb0)

int64_t* rcx_301 = data_143f56ca8

if (rcx_301 != 0 && (*(*rcx_301 + 0x90))(rcx_301) != 0)
    int64_t r14_25 = sx.q(*(rax + 0x178))
    int32_t rax_206 = (r14_25 + 1).d
    *(rax + 0x178) = rax_206
    
    if (rax_206 s> *(rax + 0x17c))
        sub_1405a4cf0(rax + 0x170)
    
    *(*(rax + 0x170) + (r14_25 << 2)) = 0xd

if (data_143f56cc0 s> *rdi_25)
    _Init_thread_header(&data_143f56cc0)
    
    if (data_143f56cc0 == 0xffffffff)
        int64_t* rcx_366 = data_143db18d0
        
        if (rcx_366 == 0)
            sub_140a53c40()
            rcx_366 = data_143db18d0
        
        int64_t r8_108
        r8_108.b = 1
        data_143f56cb8 = (*(*rcx_366 + 0xb0))(rcx_366, u"r.PostProcessing.PropagateAlpha", r8_108)
        _Init_thread_footer(&data_143f56cc0)

int64_t* rcx_304 = data_143f56cb8
int32_t rax_209 = (*(*rcx_304 + 0x90))(rcx_304)

if (rax_209 u> 2)
    rax_209 = 0

sub_140889380(rax + 0x368, u"POST_PROCESS_ALPHA", zx.q(rax_209))

if (data_143f56cd0 s> *rdi_25)
    _Init_thread_header(&data_143f56cd0)
    
    if (data_143f56cd0 == 0xffffffff)
        int64_t* rcx_367 = data_143db18d0
        
        if (rcx_367 == 0)
            sub_140a53c40()
            rcx_367 = data_143db18d0
        
        int64_t r8_109
        r8_109.b = 1
        data_143f56cc8 = (*(*rcx_367 + 0xb0))(rcx_367, u"r.DistanceFieldBuild.EightBit", r8_109)
        _Init_thread_footer(&data_143f56cd0)

int64_t* rcx_306 = data_143f56cc8
int64_t r8_76

if (rcx_306 == 0)
    r8_76 = 0
else
    r8_76.b = (*(*rcx_306 + 0x90))(rcx_306) != 0

sub_140889380(rax + 0x368, u"EIGHT_BIT_MESH_DISTANCE_FIELDS", r8_76)
int64_t r8_77

if (rbx_2.d != 2 && rbx_2.d != 4)
    r8_77 = 0

if (rbx_2.d == 2 || rbx_2.d == 4 || ((*(rbx_2 * 0x14 + &data_143f025fc) u>> 0x12).b & 1) != 0)
    r8_77 = 1

sub_140889380(rax + 0x368, u"PLATFORM_SUPPORTS_RENDERTARGET_WRITE_MASK", r8_77)
int64_t r8_78
r8_78.b = (rbx_2 - 0x19).d u<= 1
sub_140889380(rax + 0x368, u"PLATFORM_SUPPORTS_PER_PIXEL_DBUFFER_MASK", r8_78)
int64_t r8_79

if (rbx_2.d == 0 || rbx_2.d == 2 || rbx_2.d == 0xc || rbx_2.d == 0x1f || rbx_2.d == 0x12
        || rbx_2.d == 0x10 || rbx_2.d == 0x1b)
    r8_79 = 1
else
    uint64_t rdx_85 = zx.q(rbx_2.d)
    uint64_t r9_17 = rbx_2 * 0x14
    int64_t rax_217 = *(r9_17 + &data_143f025f0)
    
    if ((rax_217 != data_143f025b0 || *(r9_17 + 0x143f025f8) != 3)
            && (rdx_85.d u> 0x30 || not(test_bit(0x1000010100010, rdx_85)))
            && (rax_217 != data_143f025c0 || *(r9_17 + 0x143f025f8) != 3)
            && (rdx_85 - 0x19).d u> 1)
        r8_79 = 0
        
        if (((*(rbx_2 * 0x14 + &data_143f025fc) u>> 8).b & 1) != 0)
            r8_79 = 1
    else
        r8_79 = 1

sub_140889380(rax + 0x368, u"PLATFORM_SUPPORTS_DISTANCE_FIELDS", r8_79)

if (data_143f56ce0 s> *rdi_25)
    _Init_thread_header(&data_143f56ce0)
    
    if (data_143f56ce0 == 0xffffffff)
        int64_t* rcx_368 = data_143db18d0
        
        if (rcx_368 == 0)
            sub_140a53c40()
            rcx_368 = data_143db18d0
        
        int64_t r8_110
        r8_110.b = 1
        data_143f56cd8 = (*(*rcx_368 + 0xb0))(rcx_368, u"r.vt.FeedbackFactor", r8_110)
        _Init_thread_footer(&data_143f56ce0)

int64_t* rcx_312 = data_143f56cd8
uint64_t r8_80

if (rcx_312 == 0)
    r8_80 = 1
else
    int32_t rax_224 = (*(*rcx_312 + 0x90))(rcx_312)
    r8_80 = 1
    
    if (rax_224 s>= 1)
        r8_80 = zx.q(rax_224)

sub_140889380(rax + 0x368, u"VIRTUAL_TEXTURE_FEEDBACK_FACTOR", r8_80)

if ((rbx_2.d u<= 0x1e && test_bit(0x6562c800, rbx_2.d))
        || (*(rbx_2 * 0x14 + &data_143f025fc) & 1) != 0)
    if (data_143f56cf0 s> *rdi_25)
        _Init_thread_header(&data_143f56cf0)
        
        if (data_143f56cf0 == 0xffffffff)
            int64_t* rcx_327 = data_143db18d0
            
            if (rcx_327 == 0)
                sub_140a53c40()
                rcx_327 = data_143db18d0
            
            int64_t r8_85
            r8_85.b = 1
            data_143f56ce8 = (*(*rcx_327 + 0xb0))(rcx_327, r.Mobile.EnableMovableSpotlights", r8_85)
            _Init_thread_footer(&data_143f56cf0)
    
    int64_t* rcx_315 = data_143f56ce8
    
    if (rcx_315 != 0)
        rsi.b = (*(*rcx_315 + 0x90))(rcx_315) != 0
    
    sub_140889380(rax + 0x368, u"PROJECT_MOBILE_ENABLE_MOVABLE_SPOTLIGHTS", zx.q(rsi))

int64_t* rax_228 = sub_140b1b400()
int64_t r8_82 = *rax_228
int64_t* rax_229 = (*(r8_82 + 0x50))(rax_228, *(rax + 0x2c), r8_82)
int64_t r8_83 = *rax_229
(*(r8_83 + 0x48))(rax_229, rax + 0x28, r8_83)
int64_t rdi_26 = sx.q(arg9[1].d)
int32_t rax_230 = (rdi_26 + 1).d
arg9[1].d = rax_230

if (rax_230 s> *(arg9 + 0xc))
    sub_1405a4f90(arg9)

int64_t* rcx_322 = (rdi_26 << 4) + *arg9
*rcx_322 = *arg8
void* rax_232 = arg8[1]
rcx_322[1] = rax_232

if (rax_232 != 0)
    *(rax_232 + 8) += 1

if (rcx_1 != 0)
    rcx_1[1].d -= 1
    
    if (rcx_1[1].d == 1)
        (**rcx_1)(rcx_1)
        int32_t rdi_27 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (rdi_27 == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)

return sub_1405970a0(arg8) __tailcall
