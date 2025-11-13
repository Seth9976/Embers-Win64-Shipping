// 函数: sub_1423e0df0
// 地址: 0x1423e0df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xf0] = arg2
Concurrency::details::UMSThreadScheduler::OneShotStaticDestruction()
sub_140ccfc00(sub_1425b3af0())
sub_1423b1ee0(&arg1[0x18a], arg1)
(*(*arg1 + 0x3d0))(arg1)
int32_t rax_2 = *(arg1 + 0xc)
int32_t i = 0
void* const rax_9

if (rax_2 s>= data_143e1d9b4)
    rax_9 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_2)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_4 = temp1_1 + rdx_2
    rax_9 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18

*(rax_9 + 8) |= 0x40000000
sub_140d21fd0()
void*** rax_10 = sub_140a84c80(0, 0x20, 0)
void*** var_88 = rax_10

if (rax_10 != 0)
    *rax_10 = &data_142d40dc0
    rax_10[1] = sub_1423eb050
    rax_10[3] = sub_140a387b0()
    *rax_10 = &data_142d40e18

if (rax_10 != 0)
    sub_140599630(&data_1439aad30, 1)
    void var_3c0
    (*rax_10)[6](rax_10, &var_3c0)
    int64_t rsi_1 = sx.q(data_1439aad38)
    int32_t rax_13 = (rsi_1 + 1).d
    data_1439aad38 = rax_13
    
    if (rax_13 s> data_1439aad3c)
        sub_1405a4f90(&data_1439aad30)
    
    void**** rax_16 = (rsi_1 << 4) + data_1439aad30
    *rax_16 = rax_10
    rax_16[1].d = 2

if ((*u"Embers")[0] != 0)
    (*(*arg1 + 0x3a8))(arg1)
    (*(*arg1 + 0x3b0))(arg1)

if (data_143de5429 != 0 && data_143de5432 == 0)
    int64_t var_410
    sub_140b67e80(&var_410, u"UE-DisallowScreenSaverInhibitor")
    int64_t rdi_1 = var_410
    int64_t var_598 = 0
    int32_t var_408
    int32_t var_590_1 = var_408
    
    if (var_408 != 0)
        sub_1405a4c70(&var_598, var_408, 0)
        memcpy(var_598, rdi_1, var_408 * 2)
    else
        int32_t var_58c_1 = 0
    
    char rax_19 = sub_140a35630(&var_598)
    int64_t rcx_14 = var_598
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    if (rax_19 == 0 && sub_140a54810() != 0)
        int32_t rax_23
        
        if (arg1[0x17d] != 0)
            rax_23 = *(arg1 + 0x984)
        else
            void*** rax_21 = j_sub_140a82f30(0x10)
            
            if (rax_21 == 0)
                rax_21 = nullptr
            else
                rax_21[1].b = 1
                *rax_21 = &data_143340b30
            
            arg1[0x17e] = rax_21
            void*** rax_22
            int64_t rdx_9
            rax_22, rdx_9 = sub_140a6e140(rax_21, u"ScreenSaverInhibitor", 0x4000, 0, -1, 0)
            arg1[0x17d] = rax_22
            rdx_9.b = 1
            void** r8_3 = *rax_22
            r8_3[1](rax_22, rdx_9, r8_3)
            rax_23 = 0
        
        *(arg1 + 0x984) = rax_23 + 1
        
        if (rax_23 == 0)
            int64_t* rcx_17 = arg1[0x17d]
            (*(*rcx_17 + 8))(rcx_17, 0)
    
    int64_t rcx_18 = var_410
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)

if (data_143de5426 == 0)
    int64_t* rdi_2 = data_143e29f28
    void*** rax_26 = j_sub_140a82f30(8)
    void*** rbx_3 = rax_26
    
    if (rax_26 == 0)
        rbx_3 = nullptr
    else
        *rbx_3 = &data_1433409e0
    
    void*** rax_27 = j_sub_140a82f30(0x18)
    
    if (rax_27 == 0)
        rax_27 = nullptr
    else
        rax_27[1].d = 1
        *rax_27 = &data_142e1b260
        *(rax_27 + 0xc) = 1
        rax_27[2] = rbx_3
    
    uint128_t zmm0_1 = rbx_3.o
    uint128_t var_3e8 = zmm0_1
    void* rax_28 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rax_28 != 0)
        *(rax_28 + 8) += 1
    
    (*(*rdi_2 + 0x1a0))(rdi_2, &var_3e8, rbx_3)
    int64_t* rbx_4 = var_3e8:8.q
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp4_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    if (rax_27 != 0)
        rax_27[1].d -= 1
        
        if (rax_27[1].d == 1)
            (**rax_27)(rax_27)
            int32_t temp5_1 = *(rax_27 + 0xc)
            *(rax_27 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rax_27)[1](rax_27, 1)

void*** rax_34 = j_sub_140a82f30(8)

if (rax_34 == 0)
    rax_34 = nullptr
else
    *rax_34 = &data_143340b20

data_143de5dd8 = rax_34
int64_t var_468 = *(sub_1424a3bf0() + 0x18)
int16_t* var_400
sub_140b63b70(&var_468, &var_400)
int16_t* const rsi_2 = &data_142d40450
int16_t* const rdi_3 = &data_142d40450
int32_t var_3f8

if (var_3f8 != 0)
    rdi_3 = var_400

uint64_t rbx_6 = *(sub_1424a3bf0() + 0x20)
int32_t var_5f8 = 0x2002
sub_140d2f6f0(sub_140bdf2e0(), rbx_6, rdi_3, 0, 0x2002, 0, 1, 0)
int16_t* rcx_27 = var_400

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

var_5f8.q = 0
sub_140ce1310(arg1, nullptr, nullptr, 0, 0)
void* rcx_29 = data_143ddb400
int32_t arg_18 = 0

if (rcx_29 != 0)
    var_5f8.q = &data_143de5780
    sub_140af3c10(rcx_29, u"ProcessLimits", u"VirtualMemoryLimitInKB", &arg_18, &data_143de5780)

sub_140af2b60()
sub_140b2ab20(&data_143dbb3f0, u"virtmemkb=", &arg_18)
int128_t zmm0_2 = *(arg1 + 0x924)
int64_t rax_38 = *arg1
*(arg1 + 0x974) = 0
*(arg1 + 0x934) = zmm0_2
*(arg1 + 0x944) = zmm0_2
(*(rax_38 + 0x3c0))(arg1)
void* rcx_31 = data_143ddb400

if (rcx_31 != 0)
    char arg_10 = 1
    var_5f8.q = &data_143de5780
    sub_140af2fd0(rcx_31, /Script/Engine.Engine", bEnableOnScreenDebugMessages", &arg_10, 
        &data_143de5780)
    int32_t rcx_32
    rcx_32.b = arg_10 != 0
    int32_t rcx_33 = rcx_32 | (arg1[0x12f].d & 0xfffffffe)
    arg1[0x12f].d = (((rcx_33 * 2) ^ rcx_33) & 2) ^ rcx_33

sub_140d2c910(*(data_143f5b298 + 0x7b4))
data_14399fa0c = (*(arg1 + 0x7ac)).d
sub_141f8d520()
sub_1422e9fc0(&data_143f552a0)
(*(*arg1 + 0x3a0))(arg1)
int64_t* rax_47 = sub_141521500()
void* rax_48 = rax_47[0x23]

if (rax_48 == 0)
    (*(*rax_47 + 0x390))(rax_47)
    rax_48 = rax_47[0x23]

if (*(rax_48 + 0xc0) != 0)
    rsi_2 = *(rax_48 + 0xb8)

sub_140b27e20(rsi_2)

if (sub_140b19710() != 0)
    int64_t* rax_51 = sub_140b19720()
    int64_t rdx_14 = *rax_51
    (*(rdx_14 + 0x58))(rax_51, rdx_14)

int32_t var_5b0 = 0
int64_t (* var_5b8)(int64_t* arg1) = sub_141e52c34
void*** rax_52 = sub_140a84c80(0, 0x30, 0)
void*** var_58 = rax_52

if (rax_52 != 0)
    *rax_52 = &data_1432a4e08
    sub_140d3a3a0(&rax_52[1], arg1)
    *(rax_52 + 0x10) = var_5b8.o
    rax_52[5] = sub_140a387b0()
    *rax_52 = &data_1432a4e60

if (rax_52 != 0)
    sub_140599630(&arg1[0x13b], 1)
    void var_3b0
    (*rax_52)[6](rax_52, &var_3b0)
    int64_t rsi_3 = sx.q(arg1[0x13c].d)
    int32_t rax_55 = (rsi_3 + 1).d
    arg1[0x13c].d = rax_55
    
    if (rax_55 s> *(arg1 + 0x9e4))
        sub_1405a4f90(&arg1[0x13b])
    
    void** rax_58 = (rsi_3 << 4) + arg1[0x13b]
    *rax_58 = rax_52
    rax_58[1].d = 3

int32_t var_5b0_1 = 0
var_5b8 = sub_1423d0e10
void*** rax_59 = sub_140a84c80(0, 0x30, 0)
void*** var_78 = rax_59

if (rax_59 != 0)
    *rax_59 = &data_142e345f8
    sub_140d3a3a0(&rax_59[1], arg1)
    *(rax_59 + 0x10) = var_5b8.o
    rax_59[5] = sub_140a387b0()
    *rax_59 = &data_142e34650

if (rax_59 != 0)
    sub_140599630(&arg1[0x13e], 1)
    void var_338
    (*rax_59)[6](rax_59, &var_338)
    int64_t rsi_4 = sx.q(arg1[0x13f].d)
    int32_t rax_62 = (rsi_4 + 1).d
    arg1[0x13f].d = rax_62
    
    if (rax_62 s> *(arg1 + 0x9fc))
        sub_1405a4f90(&arg1[0x13e])
    
    void** rax_65 = (rsi_4 << 4) + arg1[0x13e]
    *rax_65 = rax_59
    rax_65[1].d = 3

int32_t var_5b0_2 = 0
var_5b8 = sub_1423d0e1c
void*** rax_66 = sub_140a84c80(0, 0x30, 0)
void*** var_68 = rax_66

if (rax_66 != 0)
    *rax_66 = &data_14322e7a8
    sub_140d3a3a0(&rax_66[1], arg1)
    *(rax_66 + 0x10) = var_5b8.o
    rax_66[5] = sub_140a387b0()
    *rax_66 = &data_14322e800

if (rax_66 != 0)
    sub_140599630(&arg1[0x141], 1)
    void var_330
    (*rax_66)[6](rax_66, &var_330)
    int64_t rsi_5 = sx.q(arg1[0x142].d)
    int32_t rax_69 = (rsi_5 + 1).d
    arg1[0x142].d = rax_69
    
    if (rax_69 s> *(arg1 + 0xa14))
        sub_1405a4f90(&arg1[0x141])
    
    void** rax_72 = (rsi_5 << 4) + arg1[0x141]
    *rax_72 = rax_66
    rax_72[1].d = 3

int64_t* var_5a8 = nullptr
int32_t var_5a0 = 0
var_5b8 = sub_1423e9db0
int32_t var_5b0_3 = 0
void*** rax_73 = sub_140a84c80(0, 0x30, 0)
void*** var_3a8 = rax_73

if (rax_73 != 0)
    *rax_73 = &data_143083c50
    sub_140d3a3a0(&rax_73[1], arg1)
    *(rax_73 + 0x10) = var_5b8.o
    rax_73[5] = sub_140a387b0()
    *rax_73 = &data_143083ca8
    sub_141ba0480(rax_73, &var_5a8)
else if (var_5a0 != 0)
    int64_t* rcx_53 = var_5a8
    
    if (rcx_53 != 0)
        (*(*rcx_53 + 0x38))(rcx_53, 0)
        int64_t* rcx_54 = var_5a8
        
        if (rcx_54 != 0)
            var_5a8 = sub_140a84c80(rcx_54, 0, 0)

if (rax_73 != 0)
    (*rax_73)[7](rax_73, 0)
    int64_t rax_78 = sub_140a84c80(rax_73, 0, 0)
    int64_t var_3a8_1 = rax_78
    
    if (rax_78 != 0)
        sub_140a74f90(rax_78)

int64_t* rax_79 = sub_142168400()
int64_t r8_7 = *rax_79
(*(r8_7 + 0x368))(rax_79, &var_5a8, r8_7)
sub_141ea17d0()
sub_141ea5790(&data_143a2d550)

if (data_143de5426 == 0)
    (*(*arg1 + 0x3c8))(arg1)

void var_3d8
int64_t* rax_81 = sub_140b58170(&var_3d8, "ImageWriteQueue", 1)
j_sub_140b3db50()
sub_140b407e0(&data_143de7d78, *rax_81)
void var_3c8
int64_t* rax_82 = sub_140b58170(&var_3c8, "StreamingPauseRendering", 1)
j_sub_140b3db50()
j_sub_140b407e0(&data_143de7d78, *rax_82)
void var_3d0
int64_t* rax_83 = sub_140b58170(&var_3d0, "MovieScene", 1)
j_sub_140b3db50()
j_sub_140b407e0(&data_143de7d78, *rax_83)
void var_3b8
int64_t* rax_84 = sub_140b58170(&var_3b8, "MovieSceneTracks", 1)
j_sub_140b3db50()
j_sub_140b407e0(&data_143de7d78, *rax_84)
int64_t* rax_85 = sub_140b58170(&var_5b8, "LevelSequence", 1)
j_sub_140b3db50()
sub_140b407e0(&data_143de7d78, *rax_85)
int64_t* rcx_65 = arg1[0x55]

if (rcx_65 != 0)
    (*(*rcx_65 + 0x410))(rcx_65)

void* rcx_66 = data_143ddb400
char arg_8 = 1

if (rcx_66 != 0)
    var_5f8.q = &data_143de5780
    sub_140af2fd0(rcx_66, u"DevOptions.Debug", u"bEngineStatsOnRHS", &arg_8, &data_143de5780)

int32_t var_5c0 = 0
int32_t var_5d0 = 0
int64_t var_460
sub_140b58260(&var_460, u"STATCAT_Engine", 1)
int64_t arg_20
sub_140b58260(&arg_20, u"STAT_NamedEvents", 1)
char rdi_7 = arg_8
sub_1405d9400()
int64_t var_528 = arg_20
int64_t var_520
sub_140b63b70(&arg_20, &var_520)
int64_t rcx_71 = var_460
int64_t rcx_72 = data_143cd6fd8
void* rcx_73 = data_143cd6fe0

if (rcx_73 != 0)
    *(rcx_73 + 8) += 1

int32_t rax_87 = data_143cd6fe8
sub_140a2fcd0(&var_520, u"STAT_", 1)
int64_t rbx_17 = sx.q(arg1[0x1a4].d)
int32_t rax_88 = (rbx_17 + 1).d
arg1[0x1a4].d = rax_88

if (rax_88 s> *(arg1 + 0xd24))
    sub_14090a6a0(&arg1[0x1a3])

int64_t* rcx_78 = rbx_17 * 0x60 + arg1[0x1a3]
*rcx_78 = var_528
rcx_78[1] = 0
rcx_78[1] = var_520
var_520 = 0
int32_t var_518
rcx_78[2].d = var_518
int32_t var_514
*(rcx_78 + 0x14) = var_514
var_518.q = 0
rcx_78[3] = rcx_71
rcx_78[4] = rcx_72
rcx_78[5] = rcx_73

if (rcx_73 != 0)
    *(rcx_73 + 8) += 1

rcx_78[6].d = rax_87
*(rcx_78 + 0x38) = sub_1423ed380.o
*(rcx_78 + 0x48) = sub_1423f45d0.o
rcx_78[0xb].b = rdi_7
sub_1423cfe90(&var_528)
int32_t var_5d0_1 = 0
int32_t var_5c0_1 = 0
int64_t var_458
sub_140b58260(&var_458, u"STATCAT_Engine", 1)
int64_t var_588
sub_140b58260(&var_588, u"STAT_FPS", 1)
char rdi_8 = arg_8
sub_1405d9400()
int64_t var_4c8 = var_588
int64_t var_4c0
sub_140b63b70(&var_588, &var_4c0)
int64_t rcx_84 = var_458
int64_t rcx_85 = data_143cd6fd8
void* rcx_86 = data_143cd6fe0

if (rcx_86 != 0)
    *(rcx_86 + 8) += 1

int32_t rax_98 = data_143cd6fe8
sub_140a2fcd0(&var_4c0, u"STAT_", 1)
int64_t rbx_18 = sx.q(arg1[0x1a4].d)
int32_t rax_99 = (rbx_18 + 1).d
arg1[0x1a4].d = rax_99

if (rax_99 s> *(arg1 + 0xd24))
    sub_14090a6a0(&arg1[0x1a3])

int64_t* rcx_91 = rbx_18 * 0x60 + arg1[0x1a3]
*rcx_91 = var_4c8
rcx_91[1] = 0
rcx_91[1] = var_4c0
var_4c0 = 0
int32_t var_4b8
rcx_91[2].d = var_4b8
int32_t var_4b4
*(rcx_91 + 0x14) = var_4b4
var_4b8.q = 0
rcx_91[3] = rcx_84
rcx_91[4] = rcx_85
rcx_91[5] = rcx_86

if (rcx_86 != 0)
    *(rcx_86 + 8) += 1

rcx_91[6].d = rax_98
*(rcx_91 + 0x38) = sub_1423ec890.o
*(rcx_91 + 0x48) = set_variable_in_other_environment<char>.o
rcx_91[0xb].b = rdi_8
sub_1423cfe90(&var_4c8)
int32_t var_5d0_2 = 0
int32_t var_5c0_2 = 0
int64_t var_450
sub_140b58260(&var_450, u"STATCAT_Engine", 1)
int64_t var_580
sub_140b58260(&var_580, u"STAT_Summary", 1)
char rdi_9 = arg_8
sub_1405d9400()
int64_t var_328 = var_580
void var_320
sub_140b63b70(&var_580, &var_320)
int64_t var_310 = var_450
int64_t var_308 = data_143cd6fd8
void* rcx_99 = data_143cd6fe0
void* var_300 = rcx_99

if (rcx_99 != 0)
    *(rcx_99 + 8) += 1

int32_t var_2f8 = data_143cd6fe8
int128_t var_2f0 = sub_1423ed5c0.o
char var_2d0 = rdi_9
int128_t var_2e0 = 0.o
sub_140a2fcd0(&var_320, u"STAT_", 1)
int64_t rbx_19 = sx.q(arg1[0x1a4].d)
int32_t rax_110 = (rbx_19 + 1).d
arg1[0x1a4].d = rax_110

if (rax_110 s> *(arg1 + 0xd24))
    sub_14090a6a0(&arg1[0x1a3])

sub_1423ced80(rbx_19 * 0x60 + arg1[0x1a3], &var_328)
sub_1423cfe90(&var_328)
int32_t var_5d0_3 = 0
int32_t var_5c0_3 = 0
int64_t var_448
sub_140b58260(&var_448, u"STATCAT_Engine", 1)
int64_t var_578
sub_140b58260(&var_578, u"STAT_Unit", 1)
char rdi_10 = arg_8
sub_1405d9400()
int64_t var_398 = var_578
void var_390
sub_140b63b70(&var_578, &var_390)
int64_t var_380 = var_448
int64_t var_378 = data_143cd6fd8
void* rcx_112 = data_143cd6fe0
void* var_370 = rcx_112

if (rcx_112 != 0)
    *(rcx_112 + 8) += 1

int32_t var_368 = data_143cd6fe8
int128_t var_360 = sub_1423ed9d0.o
char var_340 = rdi_10
int128_t var_350 = sub_1423f4690.o
sub_140a2fcd0(&var_390, u"STAT_", 1)
int64_t rbx_20 = sx.q(arg1[0x1a4].d)
int32_t rax_112 = (rbx_20 + 1).d
arg1[0x1a4].d = rax_112

if (rax_112 s> *(arg1 + 0xd24))
    sub_14090a6a0(&arg1[0x1a3])

sub_1423ced80(rbx_20 * 0x60 + arg1[0x1a3], &var_398)
sub_1423cfe90(&var_398)
int32_t var_5d0_4 = 0
int32_t var_5c0_4 = 0
int64_t var_440
sub_140b58260(&var_440, u"STATCAT_Engine", 1)
int64_t var_570
sub_140b58260(&var_570, u"STAT_Hitches", 1)
char rdi_11 = arg_8
sub_1405d9400()
int64_t var_268 = var_570
void var_260
sub_140b63b70(&var_570, &var_260)
int64_t var_250 = var_440
int64_t var_248 = data_143cd6fd8
void* rcx_125 = data_143cd6fe0
void* var_240 = rcx_125

if (rcx_125 != 0)
    *(rcx_125 + 8) += 1

int32_t var_238 = data_143cd6fe8
int128_t var_230 = sub_1423ecca0.o
char var_210 = rdi_11
int128_t var_220 = sub_1423f45b0.o
sub_140a2fcd0(&var_260, u"STAT_", 1)
int64_t rbx_21 = sx.q(arg1[0x1a4].d)
int32_t rax_114 = (rbx_21 + 1).d
arg1[0x1a4].d = rax_114

if (rax_114 s> *(arg1 + 0xd24))
    sub_14090a6a0(&arg1[0x1a3])

sub_1423ced80(rbx_21 * 0x60 + arg1[0x1a3], &var_268)
sub_1423cfe90(&var_268)
int32_t var_5d0_5 = 0
int32_t var_5c0_5 = 0
int64_t var_438
sub_140b58260(&var_438, u"STATCAT_Engine", 1)
int64_t var_568
sub_140b58260(&var_568, u"STAT_AI", 1)
char rdi_12 = arg_8
sub_1405d9400()
int64_t var_208 = var_568
void var_200
sub_140b63b70(&var_568, &var_200)
int64_t var_1f0 = var_438
int64_t var_1e8 = data_143cd6fd8
void* rcx_138 = data_143cd6fe0
void* var_1e0 = rcx_138

if (rcx_138 != 0)
    *(rcx_138 + 8) += 1

int32_t var_1d8 = data_143cd6fe8
int128_t var_1d0 = sub_1423ec2b0.o
char var_1b0 = rdi_12
int128_t var_1c0 = 0.o
sub_140a2fcd0(&var_200, u"STAT_", 1)
int64_t rbx_22 = sx.q(arg1[0x1a4].d)
int32_t rax_116 = (rbx_22 + 1).d
arg1[0x1a4].d = rax_116

if (rax_116 s> *(arg1 + 0xd24))
    sub_14090a6a0(&arg1[0x1a3])

sub_1423ced80(rbx_22 * 0x60 + arg1[0x1a3], &var_208)
sub_1423cfe90(&var_208)
int32_t var_5d0_6 = 0
int32_t var_5c0_6 = 0
int64_t var_430
sub_140b58260(&var_430, u"STATCAT_Engine", 1)
int64_t var_560
sub_140b58260(&var_560, u"STAT_Timecode", 1)
char rdi_13 = arg_8
sub_1405d9400()
int64_t var_1a8 = var_560
void var_1a0
sub_140b63b70(&var_560, &var_1a0)
int64_t var_190 = var_430
int64_t var_188 = data_143cd6fd8
void* rcx_151 = data_143cd6fe0
void* var_180 = rcx_151

if (rcx_151 != 0)
    *(rcx_151 + 8) += 1

int32_t var_178 = data_143cd6fe8
int128_t var_170 = sub_1423ed6e0.o
char var_150 = rdi_13
int128_t var_160 = 0.o
sub_140a2fcd0(&var_1a0, u"STAT_", 1)
int64_t rbx_23 = sx.q(arg1[0x1a4].d)
int32_t rax_118 = (rbx_23 + 1).d
arg1[0x1a4].d = rax_118

if (rax_118 s> *(arg1 + 0xd24))
    sub_14090a6a0(&arg1[0x1a3])

sub_1423ced80(rbx_23 * 0x60 + arg1[0x1a3], &var_1a8)
sub_1423cfe90(&var_1a8)
int32_t var_5d0_7 = 0
int32_t var_5c0_7 = 0
int64_t var_428
sub_140b58260(&var_428, u"STATCAT_Engine", 1)
int64_t var_558
sub_140b58260(&var_558, u"STAT_ColorList", 1)
sub_1405d9400()
int64_t var_148 = var_558
void var_140
sub_140b63b70(&var_558, &var_140)
int64_t var_130 = var_428
int64_t var_128 = data_143cd6fd8
void* rcx_164 = data_143cd6fe0
void* var_120 = rcx_164

if (rcx_164 != 0)
    *(rcx_164 + 8) += 1

int32_t var_118 = data_143cd6fe8
int128_t var_110 = sub_1423ec520.o
char var_f0 = 0
int128_t var_100 = 0.o
sub_140a2fcd0(&var_140, u"STAT_", 1)
int64_t rbx_24 = sx.q(arg1[0x1a4].d)
int32_t rax_120 = (rbx_24 + 1).d
arg1[0x1a4].d = rax_120

if (rax_120 s> *(arg1 + 0xd24))
    sub_14090a6a0(&arg1[0x1a3])

sub_1423ced80(rbx_24 * 0x60 + arg1[0x1a3], &var_148)
sub_1423cfe90(&var_148)
int32_t var_5d0_8 = 0
int32_t var_5c0_8 = 0
int64_t var_420
sub_140b58260(&var_420, u"STATCAT_Engine", 1)
int64_t var_550
sub_140b58260(&var_550, u"STAT_Levels", 1)
sub_1405d9400()
int64_t var_e8 = var_550
void var_e0
sub_140b63b70(&var_550, &var_e0)
int64_t var_d0 = var_420
int64_t var_c8 = data_143cd6fd8
void* rcx_177 = data_143cd6fe0
void* var_c0 = rcx_177

if (rcx_177 != 0)
    *(rcx_177 + 8) += 1

int32_t var_b8 = data_143cd6fe8
int128_t var_b0 = sub_1423ecd00.o
char var_90 = 0
int128_t var_a0 = 0.o
sub_140a2fcd0(&var_e0, u"STAT_", 1)
int64_t rbx_25 = sx.q(arg1[0x1a4].d)
int32_t rax_122 = (rbx_25 + 1).d
arg1[0x1a4].d = rax_122

if (rax_122 s> *(arg1 + 0xd24))
    sub_14090a6a0(&arg1[0x1a3])

sub_1423ced80(rbx_25 * 0x60 + arg1[0x1a3], &var_e8)
sub_1423cfe90(&var_e8)
int32_t var_5d0_9 = 0
int32_t var_5c0_9 = 0
int64_t var_418
sub_140b58260(&var_418, u"STATCAT_Engine", 1)
int64_t var_548
sub_140b58260(&var_548, u"STAT_Detailed", 1)
sub_1405d9400()
int64_t var_2c8 = var_548
void var_2c0
sub_140b63b70(&var_548, &var_2c0)
int64_t var_2b0 = var_418
int64_t var_2a8 = data_143cd6fd8
void* rcx_190 = data_143cd6fe0
void* var_2a0 = rcx_190

if (rcx_190 != 0)
    *(rcx_190 + 8) += 1

int32_t var_298 = data_143cd6fe8
int128_t var_290 = 0.o
char var_270 = 0
int128_t var_280 = sub_1423f3ee0.o
sub_140a2fcd0(&var_2c0, u"STAT_", 1)
int64_t rbx_26 = sx.q(arg1[0x1a4].d)
int32_t rax_124 = (rbx_26 + 1).d
arg1[0x1a4].d = rax_124

if (rax_124 s> *(arg1 + 0xd24))
    sub_14090a6a0(&arg1[0x1a3])

sub_1423ced80(rbx_26 * 0x60 + arg1[0x1a3], &var_2c8)
sub_1423cfe90(&var_2c8)

if (arg1[0x1a4].d s> 0)
    do
        char r13_1 = 0
        int32_t rax_126 = data_143a30320
        int64_t rsi_8 = sx.q(i) * 0x60 + arg1[0x1a3]
        data_143a3032c += 1
        int64_t rdi_14 = sx.q(rax_126 - 1)
        
        if (rax_126 - 1 s>= 0)
            int64_t rbx_28 = rdi_14 << 4
            int64_t temp7_1
            
            do
                int64_t* rcx_197 = data_143a30318
                
                if (*(rcx_197 + rbx_28 + 8) == 0)
                    r13_1 = 1
                else
                    int64_t* rcx_198 = *(rcx_197 + rbx_28)
                    
                    if (rcx_198 == 0)
                        r13_1 = 1
                    else if ((*(*rcx_198 + 0x50))(rcx_198, rsi_8, rsi_8 + 0x18, rsi_8 + 0x20, 
                            var_5f8) == 0)
                        r13_1 = 1
                
                rbx_28 -= 0x10
                temp7_1 = rdi_14
                rdi_14 -= 1
            while (temp7_1 - 1 s>= 0)
        
        data_143a3032c -= 1
        
        if (r13_1 != 0)
            sub_140599630(&data_143a30318, 0)
        
        i += 1
    while (i s< arg1[0x1a4].d)

sub_140af2b60()
char rax_130 = sub_140b21a10(&data_143dbb3f0, u"statnamedevents")
int32_t rcx_199 = data_143de5488

if (rax_130 != 0)
    rcx_199 = 1

data_143de5488 = rcx_199
(*(*arg1 + 0x3b8))(arg1)
return sub_140745b20(&var_5a8)
