// 函数: sub_1423e45f0
// 地址: 0x1423e45f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = arg1
int32_t r15 = 0
int32_t arg_20 = 0
void var_60
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_60)

if (data_143f35848 == 0)
    sub_141cc3750()

int16_t* const rsi = &data_142d40450
int32_t var_e8
int64_t* var_b8

if (sub_1419c6730() != 0)
    var_b8 = nullptr
    int32_t var_b0_1 = 0
    sub_1405947f0(&var_b8, 0x16)
    int32_t rax_1 = var_b0_1 + 0x16
    var_b0_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_1 = var_b8
    UnDecorator::getReferenceType(rbx_1, u"WireframeMaterialName", 0x2c)
    
    if (*(rdi + 0x370) == 0)
        int16_t* r14_1
        
        if (*(rdi + 0x380) == 0)
            r14_1 = &data_142d40450
        else
            r14_1 = *(rdi + 0x378)
        
        var_e8 = 0
        void* rax_3 = sub_140d2f6f0(sub_1425312f0(), 0, r14_1, 0, 0, 0, 1, 0)
        *(rdi + 0x370) = rax_3
        
        if (rax_3 != 0 && (*(rax_3 + 0x1f8) & 0x40) == 0)
            int16_t* const r9_1
            
            if (*(rdi + 0x380) == 0)
                r9_1 = &data_142d40450
            else
                r9_1 = *(rdi + 0x378)
            
            sub_140af98a0("Unknown", 0x922, 
                The special material (%s) was not marked with bUsedAsSpecialEngineMater", r9_1)
            sub_140afbb40()
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    var_b8 = nullptr
    int32_t var_b0_2 = 0
    sub_1405947f0(&var_b8, 0x1f)
    int32_t rax_4 = var_b0_2 + 0x1f
    var_b0_2 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_2 = var_b8
    UnDecorator::getReferenceType(rbx_2, u"LevelColorationLitMaterialName", 0x3e)
    
    if (*(rdi + 0x3c8) == 0)
        int16_t* r14_2
        
        if (*(rdi + 0x3d8) == 0)
            r14_2 = &data_142d40450
        else
            r14_2 = *(rdi + 0x3d0)
        
        var_e8 = 0
        void* rax_6 = sub_140d2f6f0(sub_1425312f0(), 0, r14_2, 0, 0, 0, 1, 0)
        *(rdi + 0x3c8) = rax_6
        
        if (rax_6 != 0 && (*(rax_6 + 0x1f8) & 0x40) == 0)
            int16_t* const r9_2
            
            if (*(rdi + 0x3d8) == 0)
                r9_2 = &data_142d40450
            else
                r9_2 = *(rdi + 0x3d0)
            
            sub_140af98a0("Unknown", 0x922, 
                The special material (%s) was not marked with bUsedAsSpecialEngineMater", r9_2)
            sub_140afbb40()
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    var_b8 = nullptr
    int32_t var_b0_3 = 0
    sub_1405947f0(&var_b8, 0x21)
    int32_t rax_7 = var_b0_3 + 0x21
    var_b0_3 = rax_7
    
    if (rax_7 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_3 = var_b8
    UnDecorator::getReferenceType(rbx_3, u"LevelColorationUnlitMaterialName", 0x42)
    
    if (*(rdi + 0x3e0) == 0)
        int16_t* r14_3
        
        if (*(rdi + 0x3f0) == 0)
            r14_3 = &data_142d40450
        else
            r14_3 = *(rdi + 0x3e8)
        
        var_e8 = 0
        void* rax_9 = sub_140d2f6f0(sub_1425312f0(), 0, r14_3, 0, 0, 0, 1, 0)
        *(rdi + 0x3e0) = rax_9
        
        if (rax_9 != 0 && (*(rax_9 + 0x1f8) & 0x40) == 0)
            int16_t* const r9_3
            
            if (*(rdi + 0x3f0) == 0)
                r9_3 = &data_142d40450
            else
                r9_3 = *(rdi + 0x3e8)
            
            sub_140af98a0("Unknown", 0x922, 
                The special material (%s) was not marked with bUsedAsSpecialEngineMater", r9_3)
            sub_140afbb40()
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
    
    var_b8 = nullptr
    int32_t var_b0_4 = 0
    sub_1405947f0(&var_b8, 0x19)
    int32_t rax_10 = var_b0_4 + 0x19
    var_b0_4 = rax_10
    
    if (rax_10 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_4 = var_b8
    UnDecorator::getReferenceType(rbx_4, u"LightingTexelDensityName", 0x32)
    
    if (*(rdi + 0x3f8) == 0)
        int16_t* r14_4
        
        if (*(rdi + 0x408) == 0)
            r14_4 = &data_142d40450
        else
            r14_4 = *(rdi + 0x400)
        
        var_e8 = 0
        *(rdi + 0x3f8) = sub_140d2f6f0(sub_1425312f0(), 0, r14_4, 0, 0, 0, 1, 0)
    
    if (rbx_4 != 0)
        sub_140a74f90(rbx_4)
    
    var_b8 = nullptr
    int32_t var_b0_5 = 0
    sub_1405947f0(&var_b8, 0x25)
    int32_t rax_13 = var_b0_5 + 0x25
    var_b0_5 = rax_13
    
    if (rax_13 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_5 = var_b8
    UnDecorator::getReferenceType(rbx_5, u"ShadedLevelColorationLitMaterialName", 0x4a)
    
    if (*(rdi + 0x410) == 0)
        int16_t* r14_5
        
        if (*(rdi + 0x420) == 0)
            r14_5 = &data_142d40450
        else
            r14_5 = *(rdi + 0x418)
        
        var_e8 = 0
        void* rax_15 = sub_140d2f6f0(sub_1425312f0(), 0, r14_5, 0, 0, 0, 1, 0)
        *(rdi + 0x410) = rax_15
        
        if (rax_15 != 0 && (*(rax_15 + 0x1f8) & 0x40) == 0)
            int16_t* const r9_4
            
            if (*(rdi + 0x420) == 0)
                r9_4 = &data_142d40450
            else
                r9_4 = *(rdi + 0x418)
            
            sub_140af98a0("Unknown", 0x922, 
                The special material (%s) was not marked with bUsedAsSpecialEngineMater", r9_4)
            sub_140afbb40()
    
    if (rbx_5 != 0)
        sub_140a74f90(rbx_5)
    
    var_b8 = nullptr
    int32_t var_b0_6 = 0
    sub_1405947f0(&var_b8, 0x27)
    int32_t rax_16 = var_b0_6 + 0x27
    var_b0_6 = rax_16
    
    if (rax_16 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_6 = var_b8
    UnDecorator::getReferenceType(rbx_6, u"ShadedLevelColorationUnlitMaterialName", 0x4e)
    
    if (*(rdi + 0x428) == 0)
        int16_t* r14_6
        
        if (*(rdi + 0x438) == 0)
            r14_6 = &data_142d40450
        else
            r14_6 = *(rdi + 0x430)
        
        var_e8 = 0
        void* rax_18 = sub_140d2f6f0(sub_1425312f0(), 0, r14_6, 0, 0, 0, 1, 0)
        *(rdi + 0x428) = rax_18
        
        if (rax_18 != 0 && (*(rax_18 + 0x1f8) & 0x40) == 0)
            int16_t* const r9_5
            
            if (*(rdi + 0x438) == 0)
                r9_5 = &data_142d40450
            else
                r9_5 = *(rdi + 0x430)
            
            sub_140af98a0("Unknown", 0x922, 
                The special material (%s) was not marked with bUsedAsSpecialEngineMater", r9_5)
            sub_140afbb40()
    
    if (rbx_6 != 0)
        sub_140a74f90(rbx_6)
    
    var_b8 = nullptr
    int32_t var_b0_7 = 0
    sub_1405947f0(&var_b8, 0x18)
    int32_t rax_19 = var_b0_7 + 0x18
    var_b0_7 = rax_19
    
    if (rax_19 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_7 = var_b8
    UnDecorator::getReferenceType(rbx_7, u"VertexColorMaterialName", 0x30)
    
    if (*(rdi + 0x460) == 0)
        int16_t* r14_7
        
        if (*(rdi + 0x470) == 0)
            r14_7 = &data_142d40450
        else
            r14_7 = *(rdi + 0x468)
        
        var_e8 = 0
        *(rdi + 0x460) = sub_140d2f6f0(sub_1425312f0(), 0, r14_7, 0, 0, 0, 1, 0)
    
    if (rbx_7 != 0)
        sub_140a74f90(rbx_7)
    
    var_b8 = nullptr
    int32_t var_b0_8 = 0
    sub_1405947f0(&var_b8, 0x2a)
    int32_t rax_22 = var_b0_8 + 0x2a
    var_b0_8 = rax_22
    
    if (rax_22 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_8 = var_b8
    UnDecorator::getReferenceType(rbx_8, u"VertexColorViewModeMaterialName_ColorOnly", 0x54)
    
    if (*(rdi + 0x478) == 0)
        int16_t* r14_8
        
        if (*(rdi + 0x488) == 0)
            r14_8 = &data_142d40450
        else
            r14_8 = *(rdi + 0x480)
        
        var_e8 = 0
        *(rdi + 0x478) = sub_140d2f6f0(sub_1425312f0(), 0, r14_8, 0, 0, 0, 1, 0)
    
    if (rbx_8 != 0)
        sub_140a74f90(rbx_8)
    
    var_b8 = nullptr
    int32_t var_b0_9 = 0
    sub_1405947f0(&var_b8, 0x2d)
    int32_t rax_25 = var_b0_9 + 0x2d
    var_b0_9 = rax_25
    
    if (rax_25 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_9 = var_b8
    UnDecorator::getReferenceType(rbx_9, u"VertexColorViewModeMaterialName_AlphaAsColor", 0x5a)
    
    if (*(rdi + 0x490) == 0)
        int16_t* r14_9
        
        if (*(rdi + 0x4a0) == 0)
            r14_9 = &data_142d40450
        else
            r14_9 = *(rdi + 0x498)
        
        var_e8 = 0
        *(rdi + 0x490) = sub_140d2f6f0(sub_1425312f0(), 0, r14_9, 0, 0, 0, 1, 0)
    
    if (rbx_9 != 0)
        sub_140a74f90(rbx_9)
    
    var_b8 = nullptr
    int32_t var_b0_10 = 0
    sub_1405947f0(&var_b8, 0x28)
    int32_t rax_28 = var_b0_10 + 0x28
    var_b0_10 = rax_28
    
    if (rax_28 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_10 = var_b8
    UnDecorator::getReferenceType(rbx_10, u"VertexColorViewModeMaterialName_RedOnly", 0x50)
    
    if (*(rdi + 0x4a8) == 0)
        int16_t* r14_10
        
        if (*(rdi + 0x4b8) == 0)
            r14_10 = &data_142d40450
        else
            r14_10 = *(rdi + 0x4b0)
        
        var_e8 = 0
        *(rdi + 0x4a8) = sub_140d2f6f0(sub_1425312f0(), 0, r14_10, 0, 0, 0, 1, 0)
    
    if (rbx_10 != 0)
        sub_140a74f90(rbx_10)
    
    var_b8 = nullptr
    int32_t var_b0_11 = 0
    sub_1405947f0(&var_b8, 0x2a)
    int32_t rax_31 = var_b0_11 + 0x2a
    var_b0_11 = rax_31
    
    if (rax_31 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_11 = var_b8
    UnDecorator::getReferenceType(rbx_11, u"VertexColorViewModeMaterialName_GreenOnly", 0x54)
    
    if (*(rdi + 0x4c0) == 0)
        int16_t* r14_11
        
        if (*(rdi + 0x4d0) == 0)
            r14_11 = &data_142d40450
        else
            r14_11 = *(rdi + 0x4c8)
        
        var_e8 = 0
        *(rdi + 0x4c0) = sub_140d2f6f0(sub_1425312f0(), 0, r14_11, 0, 0, 0, 1, 0)
    
    if (rbx_11 != 0)
        sub_140a74f90(rbx_11)
    
    var_b8 = nullptr
    int32_t var_b0_12 = 0
    sub_1405947f0(&var_b8, 0x29)
    int32_t rax_34 = var_b0_12 + 0x29
    var_b0_12 = rax_34
    
    if (rax_34 s> 0)
        sub_140594770(&var_b8)
    
    int64_t* rbx_12 = var_b8
    UnDecorator::getReferenceType(rbx_12, u"VertexColorViewModeMaterialName_BlueOnly", 0x52)
    
    if (*(rdi + 0x4d8) == 0)
        int16_t* r14_12
        
        if (*(rdi + 0x4e8) == 0)
            r14_12 = &data_142d40450
        else
            r14_12 = *(rdi + 0x4e0)
        
        var_e8 = 0
        *(rdi + 0x4d8) = sub_140d2f6f0(sub_1425312f0(), 0, r14_12, 0, 0, 0, 1, 0)
    
    if (rbx_12 != 0)
        sub_140a74f90(rbx_12)

var_b8 = nullptr
int32_t var_b0_13 = 0
sub_1405947f0(&var_b8, 0x1a)
int32_t rax_37 = var_b0_13 + 0x1a
var_b0_13 = rax_37

if (rax_37 s> 0)
    sub_140594770(&var_b8)

int64_t* rbx_13 = var_b8
UnDecorator::getReferenceType(rbx_13, u"RemoveSurfaceMaterialName", 0x34)
void* (* var_a8)(int64_t* arg1)
int64_t* rax_38 = sub_140d30800(rdi + 0x448, &var_a8)

if (*(rdi + 0x440) == 0)
    int16_t* r14_13
    
    if (rax_38[1].d == 0)
        r14_13 = &data_142d40450
    else
        r14_13 = *rax_38
    
    var_e8 = 0
    *(rdi + 0x440) = sub_140d2f6f0(sub_1425312f0(), 0, r14_13, 0, 0, 0, 1, 0)

void* (* rcx_66)(int64_t* arg1) = var_a8

if (rcx_66 != 0)
    sub_140a74f90(rcx_66)

if (rbx_13 != 0)
    sub_140a74f90(rbx_13)

var_b8 = nullptr
int32_t var_b0_14 = 0
sub_1405947f0(&var_b8, 0x16)
int32_t rax_41 = var_b0_14 + 0x16
var_b0_14 = rax_41

if (rax_41 s> 0)
    sub_140594770(&var_b8)

int64_t* rbx_14 = var_b8
UnDecorator::getReferenceType(rbx_14, u"DebugMeshMaterialName", 0x2c)
int64_t* rax_42 = sub_140d30800(rdi + 0x390, &var_a8)

if (*(rdi + 0x388) == 0)
    int16_t* r14_14
    
    if (rax_42[1].d == 0)
        r14_14 = &data_142d40450
    else
        r14_14 = *rax_42
    
    var_e8 = 0
    *(rdi + 0x388) = sub_140d2f6f0(sub_1425312f0(), 0, r14_14, 0, 0, 0, 1, 0)

void* (* rcx_73)(int64_t* arg1) = var_a8

if (rcx_73 != 0)
    sub_140a74f90(rcx_73)

if (rbx_14 != 0)
    sub_140a74f90(rbx_14)

var_b8 = nullptr
int32_t var_b0_15 = 0
sub_1405947f0(&var_b8, 0x19)
int32_t rax_45 = var_b0_15 + 0x19
var_b0_15 = rax_45

if (rax_45 s> 0)
    sub_140594770(&var_b8)

int64_t* rbx_15 = var_b8
UnDecorator::getReferenceType(rbx_15, u"EmissiveMeshMaterialName", 0x32)
int64_t* rax_46 = sub_140d30800(rdi + 0x3b0, &var_a8)

if (*(rdi + 0x3a8) == 0)
    int16_t* r14_15
    
    if (rax_46[1].d == 0)
        r14_15 = &data_142d40450
    else
        r14_15 = *rax_46
    
    var_e8 = 0
    *(rdi + 0x3a8) = sub_140d2f6f0(sub_1425312f0(), 0, r14_15, 0, 0, 0, 1, 0)

void* (* rcx_80)(int64_t* arg1) = var_a8

if (rcx_80 != 0)
    sub_140a74f90(rcx_80)

if (rbx_15 != 0)
    sub_140a74f90(rbx_15)

var_b8 = nullptr
int32_t var_b0_16 = 0
sub_1405947f0(&var_b8, 0x24)
int32_t rax_49 = var_b0_16 + 0x24
var_b0_16 = rax_49

if (rax_49 s> 0)
    sub_140594770(&var_b8)

int64_t* rbx_16 = var_b8
UnDecorator::getReferenceType(rbx_16, u"InvalidLightmapSettingsMaterialName", 0x48)
int64_t* rax_50 = sub_140d30800(rdi + 0x550, &var_a8)

if (*(rdi + 0x548) == 0)
    int16_t* r14_16
    
    if (rax_50[1].d == 0)
        r14_16 = &data_142d40450
    else
        r14_16 = *rax_50
    
    var_e8 = 0
    *(rdi + 0x548) = sub_140d2f6f0(sub_1425312f0(), 0, r14_16, 0, 0, 0, 1, 0)

void* (* rcx_87)(int64_t* arg1) = var_a8

if (rcx_87 != 0)
    sub_140a74f90(rcx_87)

if (rbx_16 != 0)
    sub_140a74f90(rbx_16)

var_b8 = nullptr
int32_t var_b0_17 = 0
sub_1405947f0(&var_b8, 0x12)
int32_t rax_53 = var_b0_17 + 0x12
var_b0_17 = rax_53

if (rax_53 s> 0)
    sub_140594770(&var_b8)

int64_t* rbx_17 = var_b8
UnDecorator::getReferenceType(rbx_17, u"ArrowMaterialName", 0x24)
int64_t* rax_54 = sub_140d30800(rdi + 0x598, &var_a8)

if (*(rdi + 0x588) == 0)
    int16_t* r14_17
    
    if (rax_54[1].d == 0)
        r14_17 = &data_142d40450
    else
        r14_17 = *rax_54
    
    var_e8 = 0
    *(rdi + 0x588) = sub_140d2f6f0(sub_1425312f0(), 0, r14_17, 0, 0, 0, 1, 0)

void* (* rcx_94)(int64_t* arg1) = var_a8

if (rcx_94 != 0)
    sub_140a74f90(rcx_94)

if (rbx_17 != 0)
    sub_140a74f90(rbx_17)

int16_t** rax_57 = sub_140d30800(rdi + 0x2b8, &var_a8)
int16_t* rdx_24

if (rax_57[1].d == 0)
    rdx_24 = &data_142d40450
else
    rdx_24 = *rax_57

sub_1423ce370(rdi + 0x2b0, rdx_24)
void* (* rcx_98)(int64_t* arg1) = var_a8

if (rcx_98 != 0)
    sub_140a74f90(rcx_98)

int16_t** rax_58 = sub_140d30800(rdi + 0x2d8, &var_a8)
int16_t* rdx_26

if (rax_58[1].d == 0)
    rdx_26 = &data_142d40450
else
    rdx_26 = *rax_58

sub_1423ce410(rdi + 0x2d0, rdx_26)
void* (* rcx_101)(int64_t* arg1) = var_a8

if (rcx_101 != 0)
    sub_140a74f90(rcx_101)

int16_t** rax_59 = sub_140d30800(rdi + 0x318, &var_a8)
int16_t* rdx_28

if (rax_59[1].d == 0)
    rdx_28 = &data_142d40450
else
    rdx_28 = *rax_59

sub_1423ce370(rdi + 0x310, rdx_28)
void* (* rcx_104)(int64_t* arg1) = var_a8

if (rcx_104 != 0)
    sub_140a74f90(rcx_104)

int16_t** rax_60 = sub_140d30800(rdi + 0x338, &var_a8)
int16_t* rdx_30

if (rax_60[1].d == 0)
    rdx_30 = &data_142d40450
else
    rdx_30 = *rax_60

sub_1423ce370(rdi + 0x330, rdx_30)
void* (* rcx_107)(int64_t* arg1) = var_a8

if (rcx_107 != 0)
    sub_140a74f90(rcx_107)

int16_t** rax_61 = sub_140d30800(rdi + 0x358, &var_a8)
int16_t* rdx_32

if (rax_61[1].d == 0)
    rdx_32 = &data_142d40450
else
    rdx_32 = *rax_61

sub_1423ce370(rdi + 0x350, rdx_32)
void* (* rcx_110)(int64_t* arg1) = var_a8

if (rcx_110 != 0)
    sub_140a74f90(rcx_110)

int16_t** rax_62 = sub_140d30800(rdi + 0x6e8, &var_a8)
int16_t* rdx_34

if (rax_62[1].d == 0)
    rdx_34 = &data_142d40450
else
    rdx_34 = *rax_62

sub_1423ce370(rdi + 0x6e0, rdx_34)
void* (* rcx_113)(int64_t* arg1) = var_a8

if (rcx_113 != 0)
    sub_140a74f90(rcx_113)

int16_t** rax_63 = sub_140d30800(rdi + 0x728, &var_a8)
int16_t* rdx_36

if (rax_63[1].d == 0)
    rdx_36 = &data_142d40450
else
    rdx_36 = *rax_63

sub_1423ce370(rdi + 0x720, rdx_36)
void* (* rcx_116)(int64_t* arg1) = var_a8

if (rcx_116 != 0)
    sub_140a74f90(rcx_116)

int16_t** rax_64 = sub_140d30800(rdi + 0x748, &var_a8)
int16_t* rdx_38

if (rax_64[1].d == 0)
    rdx_38 = &data_142d40450
else
    rdx_38 = *rax_64

sub_1423ce410(rdi + 0x740, rdx_38)
void* (* rcx_119)(int64_t* arg1) = var_a8

if (rcx_119 != 0)
    sub_140a74f90(rcx_119)

int16_t** rax_65 = sub_140d30800(rdi + 0x768, &var_a8)
int16_t* rdx_40

if (rax_65[1].d == 0)
    rdx_40 = &data_142d40450
else
    rdx_40 = *rax_65

sub_1423ce370(rdi + 0x760, rdx_40)
void* (* rcx_122)(int64_t* arg1) = var_a8

if (rcx_122 != 0)
    sub_140a74f90(rcx_122)

int16_t** rax_66 = sub_140d30800(rdi + 0x708, &var_a8)
int16_t* rdx_42

if (rax_66[1].d == 0)
    rdx_42 = &data_142d40450
else
    rdx_42 = *rax_66

sub_1423ce370(rdi + 0x700, rdx_42)
void* (* rcx_125)(int64_t* arg1) = var_a8

if (rcx_125 != 0)
    sub_140a74f90(rcx_125)

int64_t arg_10

if (*(rdi + 0x680) == 0)
    int64_t* rax_67 = sub_140d30800(rdi + 0x688, &var_a8)
    int16_t* rbx_18
    
    if (rax_67[1].d == 0)
        rbx_18 = &data_142d40450
    else
        rbx_18 = *rax_67
    
    var_e8 = 0
    void* rax_69 = sub_140d2f6f0(sub_1425612b0(), 0, rbx_18, 0, 0, 0, 1, 0)
    void* (* rcx_128)(int64_t* arg1) = var_a8
    *(rdi + 0x680) = rax_69
    
    if (rcx_128 != 0)
        sub_140a74f90(rcx_128)
    
    if (*(rdi + 0x680) == 0)
        void* rax_70 = sub_140cde0b0()
        sub_140d19010(rax_70, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        arg_10 = 0
        var_e8 = 0
        *(rdi + 0x680) = sub_140d2dfc0(sub_1425612b0(), rax_70, 0, 0, 0, 0, 0, 0, 0)

sub_1423cd8f0(rdi + 0x100, rdi + 0xf8)
sub_1423cdbf0(rdi + 0x120, rdi + 0x118)
sub_1423cdd70(rdi + 0x140, rdi + 0x138)
sub_1423cd5f0(rdi + 0x160, rdi + 0x158)
sub_1423cdef0(rdi + 0x178, rdi + 0x190)
sub_1423ce070(rdi + 0x198, rdi + 0x1b0)
sub_1423cd770(rdi + 0x1b8, rdi + 0x1d0)
sub_1423ce1f0(rdi + 0x1e0, rdi + 0x1d8)
sub_1423cda70(rdi + 0x1f8, rdi + 0x210)
sub_1423cd470(rdi + 0x240, rdi + 0x238)
var_b8 = nullptr
int64_t* var_70 = &var_b8
int64_t* var_78 = nullptr
void arg_18
void* var_68 = &arg_18
int64_t* var_88 = &var_78
void* var_80 = &arg_18
int64_t** var_a0 = &var_70
var_a8 = j_sub_1423d0700
int64_t var_98
sub_1423d0d80(&arg_10, rdi + 0x30, sub_140d30800(rdi + 0x38, &var_98), &var_a8)
int64_t rcx_143 = var_98

if (rcx_143 != 0)
    sub_140a74f90(rcx_143)

int64_t** var_a0_1 = &var_88
var_a8 = j_sub_1423d0820
sub_1423d0d80(&arg_10, rdi + 0x50, sub_140d30800(rdi + 0x58, &var_98), &var_a8)
int64_t rcx_146 = var_98

if (rcx_146 != 0)
    sub_140a74f90(rcx_146)

var_a8 = j_sub_1423d0820
int64_t** var_a0_2 = &var_88
sub_1423d0d80(&arg_10, rdi + 0x70, sub_140d30800(rdi + 0x78, &var_98), &var_a8)
int64_t rcx_149 = var_98

if (rcx_149 != 0)
    sub_140a74f90(rcx_149)

var_a8 = j_sub_1423d0820
int64_t** var_a0_3 = &var_88
sub_1423d0d80(&arg_10, rdi + 0x90, sub_140d30800(rdi + 0x98, &var_98), &var_a8)
int64_t rcx_152 = var_98

if (rcx_152 != 0)
    sub_140a74f90(rcx_152)

var_a8 = j_sub_1423d0820
int64_t** var_a0_4 = &var_88
sub_1423d0d80(&arg_10, rdi + 0xb0, sub_140d30800(rdi + 0xb8, &var_98), &var_a8)
int64_t rcx_155 = var_98

if (rcx_155 != 0)
    sub_140a74f90(rcx_155)

int32_t rdx_65 = *(rdi + 0xf0)
*(rdi + 0xd8) = 0

if (*(rdi + 0xdc) != rdx_65)
    sub_1405c5570(rdi + 0xd0, rdx_65)

int16_t** r14_18 = *(rdi + 0xe8)
void* r13_2 = &r14_18[sx.q(*(rdi + 0xf0)) * 2]

if (r14_18 != r13_2)
    do
        int32_t rcx_157 = r14_18[1].d
        int32_t rax_78 = rcx_157 - 1
        
        if (rcx_157 == 0)
            rax_78 = 0
        
        void* rax_79
        void* r12_1
        
        if (rax_78 s> 0)
            int16_t* rdx_66
            
            if (rcx_157 == 0)
                rdx_66 = &data_142d40450
            else
                rdx_66 = *r14_18
            
            var_e8.q = 0
            rax_79 = sub_1423ce4b0(0, rdx_66, 0, 0, 0)
            r12_1 = rax_79
        
        if (rax_78 s<= 0 || rax_79 == 0)
            r12_1 = j_sub_1423d0820(&var_88)
        
        int64_t r15_1 = sx.q(*(rdi + 0xd8))
        int32_t rax_81 = (r15_1 + 1).d
        *(rdi + 0xd8) = rax_81
        
        if (rax_81 s> *(rdi + 0xdc))
            sub_1405a4d70(rdi + 0xd0)
        
        r14_18 = &r14_18[2]
        *(*(rdi + 0xd0) + (r15_1 << 3)) = r12_1
    while (r14_18 != r13_2)
    
    rdi = arg1
    r15 = arg_20

int64_t* rcx_160 = var_78

if (rcx_160 != 0)
    (**rcx_160)(rcx_160, 1)

int64_t* rcx_161 = var_b8

if (rcx_161 != 0)
    (**rcx_161)(rcx_161, 1)

void* rax_87
int16_t* rbx_20

if (*(rdi + 0x7f8) != 0)
    int16_t** rax_85 = sub_140d30800(rdi + 0x7f8, &var_98)
    
    if (rax_85[1].d == 0)
        rbx_20 = &data_142d40450
    else
        rbx_20 = *rax_85
    
    rax_87 = sub_140d2f240(sub_1424a93a0(), 0, rbx_20, 0, 0, 0)
    int64_t rcx_164 = var_98
    
    if (rcx_164 != 0)
        sub_140a74f90(rcx_164)

void* rdx_70

if (*(rdi + 0x7f8) == 0 || rax_87 == 0)
    rdx_70 = nullptr
else
    if ((1 & sub_140b5b8a0(0, 0)) != 0)
        sub_140d19010(rdi, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
    
    rdx_70 = sub_140d2dfc0(rax_87, rdi, 0, 0, 0, 0, 0, 0, 0)

sub_1423efb40(rdi, rdx_70)
sub_1423e9360(rdi)
int32_t rax_91

if (*(rdi + 0x288) == 0)
    r15 = 1
    int32_t rcx_170 = sub_140d30800(rdi + 0x270, &var_98)[1].d
    rax_91 = rcx_170 - 1
    
    if (rcx_170 == 0)
        rax_91 = 0

if (*(rdi + 0x288) != 0 || rax_91 s<= 0)
    rbx_20.b = 0
else
    rbx_20 = 1

if ((r15.b & 1) != 0)
    int64_t rcx_171 = var_98
    r15 &= 0xfffffffe
    
    if (rcx_171 != 0)
        sub_140a74f90(rcx_171)

if (rbx_20.b != 0)
    int16_t** rax_92 = sub_140d30800(rdi + 0x270, &var_98)
    
    if (rax_92[1].d == 0)
        rbx_20 = &data_142d40450
    else
        rbx_20 = *rax_92
    
    int64_t* rax_94 = sub_140d2f240(sub_140d41340(), 0, rbx_20, 0, 0, 0)
    int64_t rcx_174 = var_98
    
    if (rcx_174 != 0)
        sub_140a74f90(rcx_174)
    
    if (rax_94 != 0)
        if ((1 & sub_140b5b8a0(0, 0)) != 0)
            sub_140d19010(rdi, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        *(rdi + 0x288) = sub_140d2dfc0(rax_94, rdi, 0, 0, 0, 0, 0, 0, 0)

int32_t rax_98

if (*(rdi + 0x2a8) == 0)
    r15 |= 2
    int32_t rcx_178 = sub_140d30800(rdi + 0x290, &var_98)[1].d
    rax_98 = rcx_178 - 1
    
    if (rcx_178 == 0)
        rax_98 = 0

if (*(rdi + 0x2a8) != 0 || rax_98 s<= 0)
    rbx_20.b = 0
else
    rbx_20.b = 1

if ((r15.b & 2) != 0)
    int64_t rcx_179 = var_98
    
    if (rcx_179 != 0)
        sub_140a74f90(rcx_179)

if (rbx_20.b != 0)
    int64_t* rax_99 = sub_140d30800(rdi + 0x290, &var_98)
    
    if (rax_99[1].d != 0)
        rsi = *rax_99
    
    void* rax_101 = sub_140d2f240(sub_140d41340(), 0, rsi, 0, 0, 0)
    int64_t rcx_182 = var_98
    
    if (rcx_182 != 0)
        sub_140a74f90(rcx_182)
    
    if (rax_101 != 0)
        if ((1 & sub_140b5b8a0(0, 0)) != 0)
            sub_140d19010(rdi, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* rax_103 = sub_140d2dfc0(rax_101, rdi, 0, 0, 0, 0, 0, 0, 0)
        *(rdi + 0x2a8) = rax_103
        
        if (rax_103 != 0)
            int64_t rdx_77 = *rax_103
            (*(rdx_77 + 0x408))(rax_103, rdx_77)

int64_t* rax_104 = sub_1425b9240()
void* rcx_186 = rax_104[0x23]

if (rcx_186 == 0)
    (*(*rax_104 + 0x390))(rax_104)
    rcx_186 = rax_104[0x23]

sub_14240ea50(rcx_186, 0)
return pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_60)
