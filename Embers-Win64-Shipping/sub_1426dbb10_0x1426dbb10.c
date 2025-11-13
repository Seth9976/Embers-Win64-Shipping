// 函数: sub_1426dbb10
// 地址: 0x1426dbb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_508
int64_t rax_1 = __security_cookie ^ &var_508
int32_t var_2ac = 0x80
int64_t var_2d8
__builtin_memset(&var_2d8, 0, 0x2c)
int32_t var_2a8 = 0xffffffff
int32_t var_2a4 = 0
int64_t var_298 = 0
int32_t var_290 = 0
int64_t var_440
void var_3b8
int64_t* rax_3 = sub_140aae2f0(&var_3b8, sub_1426ed850(arg1 + 0x80, &var_440, arg3))
int32_t var_1e8 = 4
int64_t var_1d8 = *rax_3
int64_t* rax_5 = rax_3[1]

if (rax_5 != 0)
    rax_5[1].d += 1

int32_t var_1c8 = rax_3[2].d
char var_1c0 = 1
int64_t var_4e8 = 0
int32_t var_4e0 = 0
sub_1405947f0(&var_4e8, 0xc)
int32_t rax_7 = var_4e0 + 0xc
var_4e0 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_4e8)

UnDecorator::getReferenceType(var_4e8, u"InnerRadius", 0x18)
int512_t zmm0 = sub_140acb5e0(&var_2d8, &var_4e8, &var_1e8)
int64_t rcx_7 = var_4e8

if (rcx_7 != 0)
    zmm0 = sub_140a74f90(rcx_7)

if (var_1c0 != 0 && rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t rax_10 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*rax_5 + 8))(rax_5, 1)

int64_t* var_3b0

if (var_3b0 != 0)
    var_3b0[1].d -= 1
    
    if (var_3b0[1].d == 1)
        (**var_3b0)(var_3b0)
        int32_t rax_14 = *(var_3b0 + 0xc)
        *(var_3b0 + 0xc) -= 1
        
        if (rax_14 == 1)
            (*(*var_3b0 + 8))(var_3b0, 1)

int64_t rcx_13 = var_440

if (rcx_13 != 0)
    zmm0 = sub_140a74f90(rcx_13)

int64_t var_430
void var_3a0
int64_t* rax_17 = sub_140aae2f0(&var_3a0, sub_1426ed850(arg1 + 0xb8, &var_430, zmm0))
int32_t var_1b8 = 4
int64_t var_1a8 = *rax_17
int64_t* rax_19 = rax_17[1]

if (rax_19 != 0)
    rax_19[1].d += 1

int32_t var_198 = rax_17[2].d
char var_190 = 1
int64_t var_4d8 = 0
int32_t var_4d0 = 0
sub_1405947f0(&var_4d8, 0xc)
int32_t rax_21 = var_4d0 + 0xc
var_4d0 = rax_21

if (rax_21 s> 0)
    sub_140594770(&var_4d8)

UnDecorator::getReferenceType(var_4d8, u"OuterRadius", 0x18)
int512_t zmm0_1 = sub_140acb5e0(&var_2d8, &var_4d8, &var_1b8)
int64_t rcx_21 = var_4d8

if (rcx_21 != 0)
    zmm0_1 = sub_140a74f90(rcx_21)

if (var_190 != 0 && rax_19 != 0)
    rax_19[1].d -= 1
    
    if (rax_19[1].d == 1)
        (**rax_19)(rax_19)
        int32_t rax_24 = *(rax_19 + 0xc)
        *(rax_19 + 0xc) -= 1
        
        if (rax_24 == 1)
            (*(*rax_19 + 8))(rax_19, 1)

int64_t* var_398

if (var_398 != 0)
    var_398[1].d -= 1
    
    if (var_398[1].d == 1)
        (**var_398)(var_398)
        int32_t rax_28 = *(var_398 + 0xc)
        *(var_398 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*var_398 + 8))(var_398, 1)

int64_t rcx_27 = var_430

if (rcx_27 != 0)
    zmm0_1 = sub_140a74f90(rcx_27)

int64_t var_420
void var_388
int64_t* rax_31 = sub_140aae2f0(&var_388, sub_1426ed850(arg1 + 0xf0, &var_420, zmm0_1))
int32_t var_188 = 4
int64_t var_178 = *rax_31
int64_t* rax_33 = rax_31[1]

if (rax_33 != 0)
    rax_33[1].d += 1

int32_t var_168 = rax_31[2].d
char var_160 = 1
int64_t var_4c8 = 0
int32_t var_4c0 = 0
sub_1405947f0(&var_4c8, 9)
int32_t rax_35 = var_4c0 + 9
var_4c0 = rax_35

if (rax_35 s> 0)
    sub_140594770(&var_4c8)

UnDecorator::getReferenceType(var_4c8, u"NumRings", 0x12)
int512_t zmm0_2 = sub_140acb5e0(&var_2d8, &var_4c8, &var_188)
int64_t rcx_35 = var_4c8

if (rcx_35 != 0)
    zmm0_2 = sub_140a74f90(rcx_35)

if (var_160 != 0 && rax_33 != 0)
    rax_33[1].d -= 1
    
    if (rax_33[1].d == 1)
        (**rax_33)(rax_33)
        int32_t rax_38 = *(rax_33 + 0xc)
        *(rax_33 + 0xc) -= 1
        
        if (rax_38 == 1)
            (*(*rax_33 + 8))(rax_33, 1)

int64_t* var_380

if (var_380 != 0)
    var_380[1].d -= 1
    
    if (var_380[1].d == 1)
        (**var_380)(var_380)
        int32_t rax_42 = *(var_380 + 0xc)
        *(var_380 + 0xc) -= 1
        
        if (rax_42 == 1)
            (*(*var_380 + 8))(var_380, 1)

int64_t rcx_41 = var_420

if (rcx_41 != 0)
    zmm0_2 = sub_140a74f90(rcx_41)

int64_t var_410
void var_370
int64_t* rax_45 = sub_140aae2f0(&var_370, sub_1426ed850(arg1 + 0x128, &var_410, zmm0_2))
int32_t var_158 = 4
int64_t var_148 = *rax_45
int64_t* rax_47 = rax_45[1]

if (rax_47 != 0)
    rax_47[1].d += 1

int32_t var_138 = rax_45[2].d
char var_130 = 1
int64_t var_4b8 = 0
int32_t var_4b0 = 0
sub_1405947f0(&var_4b8, 0xb)
int32_t rax_49 = var_4b0 + 0xb
var_4b0 = rax_49

if (rax_49 s> 0)
    sub_140594770(&var_4b8)

UnDecorator::getReferenceType(var_4b8, u"NumPerRing", 0x16)
sub_140acb5e0(&var_2d8, &var_4b8, &var_158)
int64_t rcx_49 = var_4b8

if (rcx_49 != 0)
    sub_140a74f90(rcx_49)

if (var_130 != 0 && rax_47 != 0)
    rax_47[1].d -= 1
    
    if (rax_47[1].d == 1)
        (**rax_47)(rax_47)
        int32_t rax_52 = *(rax_47 + 0xc)
        *(rax_47 + 0xc) -= 1
        
        if (rax_52 == 1)
            (*(*rax_47 + 8))(rax_47, 1)

int64_t* var_368

if (var_368 != 0)
    var_368[1].d -= 1
    
    if (var_368[1].d == 1)
        (**var_368)(var_368)
        int32_t rax_56 = *(var_368 + 0xc)
        *(var_368 + 0xc) -= 1
        
        if (rax_56 == 1)
            (*(*var_368 + 8))(var_368, 1)

int64_t rcx_55 = var_410

if (rcx_55 != 0)
    sub_140a74f90(rcx_55)

void var_358
char* var_310
sub_140aaca20(arg2, 
    sub_140a96390(&var_310, 
        _vfprintf_p_l(&var_358, 
            radius: {InnerRadius} to {OuterRadius}\nrings: {NumRings}, points per ring: {NumPerRing}", 
        EnvQueryGenerator")), &var_2d8)
int64_t* var_350

if (var_350 != 0)
    var_350[1].d -= 1
    
    if (var_350[1].d == 1)
        (**var_350)(var_350)
        int32_t rax_62 = *(var_350 + 0xc)
        *(var_350 + 0xc) -= 1
        
        if (rax_62 == 1)
            (*(*var_350 + 8))(var_350, 1)

if ((*(arg1 + 0x1c8) & 1) != 0)
    int64_t var_118_1 = *arg2
    int64_t* rax_65 = arg2[1]
    int64_t var_288
    __builtin_memset(&var_288, 0, 0x2c)
    int32_t var_25c_1 = 0x80
    int32_t var_258_1 = 0xffffffff
    int32_t var_254_1 = 0
    int64_t var_248_1 = 0
    int32_t var_240_1 = 0
    int32_t var_128 = 4
    
    if (rax_65 != 0)
        rax_65[1].d += 1
    
    int32_t var_108_1 = arg2[2].d
    char var_100_1 = 1
    int64_t var_4a8 = 0
    int32_t var_4a0_1 = 0
    sub_1405947f0(&var_4a8, 0xc)
    int32_t rax_67 = var_4a0_1 + 0xc
    var_4a0_1 = rax_67
    
    if (rax_67 s> 0)
        sub_140594770(&var_4a8)
    
    UnDecorator::getReferenceType(var_4a8, u"Description", 0x18)
    sub_140acb5e0(&var_288, &var_4a8, &var_128)
    int64_t rcx_65 = var_4a8
    
    if (rcx_65 != 0)
        sub_140a74f90(rcx_65)
    
    if (var_100_1 != 0 && rax_65 != 0)
        rax_65[1].d -= 1
        
        if (rax_65[1].d == 1)
            (**rax_65)(rax_65)
            int32_t rax_70 = *(rax_65 + 0xc)
            *(rax_65 + 0xc) -= 1
            
            if (rax_70 == 1)
                (*(*rax_65 + 8))(rax_65, 1)
    
    int32_t var_90_1 = *(arg1 + 0x1b0)
    int32_t var_98 = 2
    char var_70_1 = 0
    int64_t var_498 = 0
    int32_t var_490_1 = 0
    sub_1405947f0(&var_498, 0xb)
    int32_t rax_72 = var_490_1 + 0xb
    var_490_1 = rax_72
    
    if (rax_72 s> 0)
        sub_140594770(&var_498)
    
    UnDecorator::getReferenceType(var_498, u"AngleValue", 0x16)
    sub_140acb5e0(&var_288, &var_498, &var_98)
    int64_t rcx_73 = var_498
    
    if (rcx_73 != 0)
        sub_140a74f90(rcx_73)
    
    int64_t* var_80
    
    if (var_70_1 != 0 && var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t rax_75 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (rax_75 == 1)
                (*(*var_80 + 8))(var_80, 1)
    
    void var_340
    int64_t* rax_77 = sub_1426edb40(arg1 + 0x160, &var_340)
    int32_t var_f8 = 4
    int64_t var_e8_1 = *rax_77
    int64_t* rax_79 = rax_77[1]
    
    if (rax_79 != 0)
        rax_79[1].d += 1
    
    int32_t var_d8_1 = rax_77[2].d
    char var_d0_1 = 1
    int64_t var_488 = 0
    int32_t var_480_1 = 0
    sub_1405947f0(&var_488, 0xd)
    int32_t rax_81 = var_480_1 + 0xd
    var_480_1 = rax_81
    
    if (rax_81 s> 0)
        sub_140594770(&var_488)
    
    UnDecorator::getReferenceType(var_488, u"ArcDirection", 0x1a)
    sub_140acb5e0(&var_288, &var_488, &var_f8)
    int64_t rcx_83 = var_488
    
    if (rcx_83 != 0)
        sub_140a74f90(rcx_83)
    
    if (var_d0_1 != 0 && rax_79 != 0)
        rax_79[1].d -= 1
        
        if (rax_79[1].d == 1)
            (**rax_79)(rax_79)
            int32_t rax_84 = *(rax_79 + 0xc)
            *(rax_79 + 0xc) -= 1
            
            if (rax_84 == 1)
                (*(*rax_79 + 8))(rax_79, 1)
    
    int64_t* var_338
    
    if (var_338 != 0)
        var_338[1].d -= 1
        
        if (var_338[1].d == 1)
            (**var_338)(var_338)
            int32_t rax_88 = *(var_338 + 0xc)
            *(var_338 + 0xc) -= 1
            
            if (rax_88 == 1)
                (*(*var_338 + 8))(var_338, 1)
    
    void var_400
    void var_328
    char* var_300
    int64_t* rax_92 = sub_140aaca20(&var_328, 
        sub_140a96390(&var_300, 
            _vfprintf_p_l(&var_400, 
                {Description}\nLimit to {AngleValue} angle both sides on {ArcDirection}", 
            EnvQueryGenerator")), &var_288)
    int64_t rcx_92 = *arg2
    *arg2 = *rax_92
    *rax_92 = rcx_92
    int64_t rcx_93 = arg2[1]
    arg2[1] = rax_92[1]
    rax_92[1] = rcx_93
    arg2[2].d = rax_92[2].d
    int64_t* var_320
    
    if (var_320 != 0)
        var_320[1].d -= 1
        
        if (var_320[1].d == 1)
            (**var_320)(var_320)
            int32_t rax_98 = *(var_320 + 0xc)
            *(var_320 + 0xc) -= 1
            
            if (rax_98 == 1)
                (*(*var_320 + 8))(var_320, 1)
    
    int64_t* var_3f8
    
    if (var_3f8 != 0)
        var_3f8[1].d -= 1
        
        if (var_3f8[1].d == 1)
            (**var_3f8)(var_3f8)
            int32_t rax_102 = *(var_3f8 + 0xc)
            *(var_3f8 + 0xc) -= 1
            
            if (rax_102 == 1)
                (*(*var_3f8 + 8))(var_3f8, 1)
    
    int32_t var_240_2 = 0
    
    if (var_248_1 != 0)
        sub_140a74f90(var_248_1)
    
    sub_140acd610(&var_288)

int64_t var_458
sub_1426ee160(arg1 + 0x50, &var_458, 0)

if (sub_140ab3dc0(&var_458) == 0)
    int64_t var_b8_1 = *arg2
    int64_t* rax_106 = arg2[1]
    int64_t var_238
    __builtin_memset(&var_238, 0, 0x2c)
    int32_t var_20c_1 = 0x80
    int32_t var_208_1 = 0xffffffff
    int32_t var_204_1 = 0
    int64_t var_1f8_1 = 0
    int32_t var_1f0_1 = 0
    int32_t var_c8 = 4
    
    if (rax_106 != 0)
        rax_106[1].d += 1
    
    int32_t var_a8_1 = arg2[2].d
    char var_a0_1 = 1
    int64_t var_478 = 0
    int32_t var_470_1 = 0
    sub_1405947f0(&var_478, 0xc)
    int32_t rax_108 = var_470_1 + 0xc
    var_470_1 = rax_108
    
    if (rax_108 s> 0)
        sub_140594770(&var_478)
    
    UnDecorator::getReferenceType(var_478, u"Description", 0x18)
    sub_140acb5e0(&var_238, &var_478, &var_c8)
    int64_t rcx_106 = var_478
    
    if (rcx_106 != 0)
        sub_140a74f90(rcx_106)
    
    if (var_a0_1 != 0 && rax_106 != 0)
        rax_106[1].d -= 1
        
        if (rax_106[1].d == 1)
            (**rax_106)(rax_106)
            int32_t rdi_1 = *(rax_106 + 0xc)
            *(rax_106 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rax_106 + 8))(rax_106, zx.q(rdi_1))
    
    int64_t var_58 = var_458
    int32_t var_68 = 4
    void* var_450
    void* var_50_1 = var_450
    
    if (var_450 != 0)
        *(var_450 + 8) += 1
    
    int32_t var_448
    int32_t var_48_1 = var_448
    char var_40_1 = 1
    int64_t var_468 = 0
    int32_t var_460_1 = 0
    sub_1405947f0(&var_468, 0x16)
    int32_t rax_115 = var_460_1 + 0x16
    var_460_1 = rax_115
    
    if (rax_115 s> 0)
        sub_140594770(&var_468)
    
    UnDecorator::getReferenceType(var_468, u"ProjectionDescription", 0x2c)
    sub_140acb5e0(&var_238, &var_468, &var_68)
    int64_t rcx_114 = var_468
    
    if (rcx_114 != 0)
        sub_140a74f90(rcx_114)
    
    sub_1405d57e0(&var_58)
    void var_3e8
    void var_3d0
    char* var_2f0
    int64_t* rax_118 = sub_140aaca20(&var_3e8, 
        sub_140a96390(&var_2f0, _vfprintf_p_l(&var_3d0, {Description}, {ProjectionDescription}", 
            EnvQueryGenerator")), &var_238)
    int64_t rcx_119 = *arg2
    *arg2 = *rax_118
    *rax_118 = rcx_119
    int64_t rcx_120 = arg2[1]
    arg2[1] = rax_118[1]
    rax_118[1] = rcx_120
    arg2[2].d = rax_118[2].d
    sub_1405970a0(&var_3e8)
    sub_1405970a0(&var_3d0)
    int32_t var_1f0_2 = 0
    
    if (var_1f8_1 != 0)
        sub_140a74f90(var_1f8_1)
    
    sub_140acd610(&var_238)

sub_1405970a0(&var_458)
int32_t var_290_1 = 0

if (var_298 != 0)
    sub_140a74f90(var_298)

sub_140acd610(&var_2d8)
__security_check_cookie(rax_1 ^ &var_508)
return arg2
