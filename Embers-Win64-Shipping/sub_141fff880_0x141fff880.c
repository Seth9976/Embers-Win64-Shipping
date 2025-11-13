// 函数: sub_141fff880
// 地址: 0x141fff880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_cf8
int64_t rax_1 = __security_cookie ^ &var_cf8
int32_t var_cb0 = 0
int32_t var_cbc = data_143a30330
int32_t var_cb8 = data_143a30334
int32_t var_cc0 = data_143a30338
sub_140af2b60()
char rax_5 = sub_140b21a10(&data_143dbb3f0, u"Windowed")
int32_t rsi = 2
char rax_6

if (rax_5 == 0)
    sub_140af2b60()
    rax_6 = sub_140b21a10(&data_143dbb3f0, u"SimMobile")

TEB* gsbase

if (rax_5 != 0 || rax_6 != 0)
    var_cc0 = 2
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"FullScreen") != 0)
        void* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        
        if (data_143f3f410 s> *(rdi_1 + 0x14))
            _Init_thread_header(&data_143f3f410)
            
            if (data_143f3f410 == 0xffffffff)
                int64_t* rcx_200 = data_143db18d0
                
                if (rcx_200 == 0)
                    sub_140a53c40()
                    rcx_200 = data_143db18d0
                
                int64_t r8_26
                r8_26.b = 1
                int64_t* rax_174 = (*(*rcx_200 + 0xb0))(rcx_200, u"r.FullScreenMode", r8_26)
                int64_t rax_176
                
                if (rax_174 == 0)
                    rax_176 = 0
                else
                    rax_176 = (*(*rax_174 + 0x58))(rax_174)
                
                data_143f3f408 = rax_176
                _Init_thread_footer(&data_143f3f410)
        
        int32_t rcx_1 = *data_143f3f408
        int32_t rax_11
        rax_11.b = rcx_1 != 0
        var_cc0 = rax_11
        
        if (rcx_1 == 0)
            if (data_143f3f418 s> *(rdi_1 + 0x14))
                _Init_thread_header(&data_143f3f418)
                
                if (data_143f3f418 == 0xffffffff)
                    sub_140af2b60()
                    char rax_177
                    
                    if (sub_140b21a10(&data_143dbb3f0, u"d3d12") != 0)
                        rax_177 = 1
                    else
                        sub_140af2b60()
                        rax_177 = sub_140b21a10(&data_143dbb3f0, u"dx12")
                        
                        if (rax_177 != 0)
                            rax_177 = 1
                    
                    data_143f3f414 = rax_177
                    _Init_thread_footer(&data_143f3f418)
            
            if (data_143f3f414 != 0)
                var_cc0 = 1

sub_1420019f0(&var_cbc, &var_cb8, &var_cc0, 0)
int32_t rcx_3 = var_cbc
int32_t rdx_1 = var_cb8
int32_t r8_2 = var_cc0

if (rcx_3 != data_143a30330 || rdx_1 != data_143a30334 || r8_2 != data_143a30338)
    sub_1423ee5e0(rcx_3, rdx_1, r8_2)
    int64_t* rcx_4 = data_143db18d0
    
    if (rcx_4 == 0)
        sub_140a53c40()
        rcx_4 = data_143db18d0
    
    (*(*rcx_4 + 0x50))(rcx_4)

int64_t var_b70
sub_140a96170(&var_b70)
sub_140af5fd0(data_143ddb400, /Script/EngineSettings.GeneralProjectSettings", ProjectDisplayedTitle"
    , &var_b70, &data_143de5830)
int64_t* var_b50
int64_t* rcx_9

if (sub_140ab3dc0(&var_b70) == 0)
    int64_t var_b58 = var_b70
    int64_t* var_b68
    var_b50 = var_b68
    
    if (var_b68 != 0)
        var_b68[1].d += 1
    
    rcx_9 = &var_b58
    int32_t var_b60
    int32_t var_b48_1 = var_b60
else
    void var_938
    rcx_9 = _vfprintf_p_l(&var_938, u"{GameName}", u"UnrealEd")
    rsi = 1

int64_t var_b98 = *rcx_9
int64_t* rax_20 = rcx_9[1]

if (rax_20 != 0)
    rax_20[1].d += 1

int32_t rax_21 = rcx_9[2].d

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (var_b50 != 0)
        var_b50[1].d -= 1
        
        if (var_b50[1].d == 1)
            (**var_b50)(var_b50)
            int32_t rax_24 = *(var_b50 + 0xc)
            *(var_b50 + 0xc) -= 1
            
            if (rax_24 == 1)
                (*(*var_b50 + 8))(var_b50, 1)

int64_t* var_930

if ((rsi.b & 1) != 0 && var_930 != 0)
    var_930[1].d -= 1
    
    if (var_930[1].d == 1)
        (**var_930)(var_930)
        int32_t rax_28 = *(var_930 + 0xc)
        *(var_930 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*var_930 + 8))(var_930, 1)

int64_t var_a78
sub_140a96170(&var_a78)
int64_t i_1 = 3
int64_t var_c58 = 0
int32_t var_c50 = 0
sub_1405947f0(&var_c58, 3)
int32_t rax_30 = var_c50 + 3
var_c50 = rax_30

if (rax_30 s> 0)
    sub_140594770(&var_c58)

UnDecorator::getReferenceType(var_c58, &data_142fca564, 6)
int64_t var_a90
sub_140aae2f0(&var_a90, &var_c58)
int64_t rcx_20 = var_c58

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int32_t rdx_4 = 0
int32_t rcx_21 = 0
int32_t var_c30 = 0
int32_t var_c2c = 0
int64_t var_4c8
__builtin_memset(&var_4c8, 0, 0x2c)
int32_t var_49c = 0x80
int32_t var_498 = 0xffffffff
int32_t var_494 = 0
int64_t var_488 = 0
int32_t var_480 = 0
int64_t var_c38 = 0

if ((*u"Embers")[0] != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while ((*u"Embers")[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_c38, rbx_3.d + 1)
        rcx_21 = var_c2c
        rdx_4 = var_c30
    
    int32_t rax_31 = rdx_4 + rbx_3.d + 1
    int32_t var_c30_1 = rax_31
    
    if (rax_31 s> rcx_21)
        sub_140594770(&var_c38)
    
    UnDecorator::getReferenceType(var_c38, u"Embers", (rbx_3.d + 1) * 2)

void var_920
int64_t* rax_32 = sub_140aae2f0(&var_920, &var_c38)
int32_t var_478 = 4
int64_t var_468 = *rax_32
int64_t* rcx_26 = rax_32[1]

if (rcx_26 != 0)
    rcx_26[1].d += 1

int32_t var_458 = rax_32[2].d
char var_450 = 1
int64_t var_c48 = 0
int32_t var_c40 = 0
sub_1405947f0(&var_c48, 9)
int32_t rax_35 = var_c40 + 9
var_c40 = rax_35

if (rax_35 s> 0)
    sub_140594770(&var_c48)

UnDecorator::getReferenceType(var_c48, u"GameName", 0x12)
int64_t* var_a60 = &var_c48
int32_t* var_a58 = &var_478
void var_b20
sub_140b91dc0(&var_4c8, &var_b20, &var_a60, nullptr)
int64_t rcx_31 = var_c48

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

if (var_450 != 0)
    char var_450_1 = 0
    
    if (rcx_26 != 0)
        rcx_26[1].d -= 1
        
        if (rcx_26[1].d == 1)
            (**rcx_26)(rcx_26)
            int32_t rax_38 = *(rcx_26 + 0xc)
            *(rcx_26 + 0xc) -= 1
            
            if (rax_38 == 1)
                (*(*rcx_26 + 8))(rcx_26, 1)

int64_t* var_918

if (var_918 != 0)
    var_918[1].d -= 1
    
    if (var_918[1].d == 1)
        (**var_918)(var_918)
        int32_t rax_42 = *(var_918 + 0xc)
        *(var_918 + 0xc) -= 1
        
        if (rax_42 == 1)
            (*(*var_918 + 8))(var_918, 1)

int64_t rcx_36 = var_c38

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

int64_t var_438 = var_a90
int32_t var_448 = 4
int64_t* var_a88

if (var_a88 != 0)
    var_a88[1].d += 1

int32_t var_a80
int32_t var_428 = var_a80
char var_420 = 1
int64_t var_c28 = 0
int32_t var_c20 = 0
sub_1405947f0(&var_c28, 0x15)
int32_t rax_47 = var_c20 + 0x15
var_c20 = rax_47

if (rax_47 s> 0)
    sub_140594770(&var_c28)

UnDecorator::getReferenceType(var_c28, u"PlatformArchitecture", 0x2a)
int64_t* var_a50 = &var_c28
int32_t* var_a48 = &var_448
void var_b40
sub_140b91dc0(&var_4c8, &var_b40, &var_a50, nullptr)
int64_t rcx_41 = var_c28

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

if (var_420 != 0)
    char var_420_1 = 0
    
    if (var_a88 != 0)
        var_a88[1].d -= 1
        
        if (var_a88[1].d == 1)
            (**var_a88)(var_a88)
            int32_t rax_50 = *(var_a88 + 0xc)
            *(var_a88 + 0xc) -= 1
            
            if (rax_50 == 1)
                (*(*var_a88 + 8))(var_a88, 1)

void var_9c0
void var_908
int64_t* rax_53 = sub_140aae2b0(&var_908, sub_141976940(&var_9c0, data_143f0f1a0))
int32_t var_3e8 = 4
int64_t var_3d8 = *rax_53
int64_t* rcx_46 = rax_53[1]

if (rcx_46 != 0)
    rcx_46[1].d += 1

int32_t var_3c8 = rax_53[2].d
char var_3c0 = 1
int64_t var_c98 = 0
int32_t var_c90 = 0
sub_1405947f0(&var_c98, 8)
int32_t rax_56 = var_c90 + 8
var_c90 = rax_56

if (rax_56 s> 0)
    sub_140594770(&var_c98)

UnDecorator::getReferenceType(var_c98, u"RHIName", 0x10)
int64_t* var_a40 = &var_c98
int32_t* var_a38 = &var_3e8
void var_b3c
sub_140b91dc0(&var_4c8, &var_b3c, &var_a40, nullptr)
int64_t rcx_51 = var_c98

if (rcx_51 != 0)
    sub_140a74f90(rcx_51)

if (var_3c0 != 0)
    char var_3c0_1 = 0
    
    if (rcx_46 != 0)
        rcx_46[1].d -= 1
        
        if (rcx_46[1].d == 1)
            (**rcx_46)(rcx_46)
            int32_t rax_59 = *(rcx_46 + 0xc)
            *(rcx_46 + 0xc) -= 1
            
            if (rax_59 == 1)
                (*(*rcx_46 + 8))(rcx_46, 1)

int64_t* var_900

if (var_900 != 0)
    var_900[1].d -= 1
    
    if (var_900[1].d == 1)
        (**var_900)(var_900)
        int32_t rax_63 = *(var_900 + 0xc)
        *(var_900 + 0xc) -= 1
        
        if (rax_63 == 1)
            (*(*var_900 + 8))(var_900, 1)

int16_t* rax_66 = sub_140a4af10(sub_140ab2200())
int64_t var_c78 = 0
int32_t rdx_17 = 0
int32_t var_c70 = 0
int32_t rcx_57 = 0
int32_t var_c6c = 0

if (rax_66 != 0 && *rax_66 != 0)
    int64_t rbx_10 = -1
    
    do
        rbx_10 += 1
    while (rax_66[rbx_10] != 0)
    
    if (rbx_10.d + 1 s> 0)
        sub_1405947f0(&var_c78, rbx_10.d + 1)
        rcx_57 = var_c6c
        rdx_17 = var_c70
    
    int32_t rax_67 = rbx_10.d + 1 + rdx_17
    int32_t var_c70_1 = rax_67
    
    if (rax_67 s> rcx_57)
        sub_140594770(&var_c78)
    
    UnDecorator::getReferenceType(var_c78, rax_66, (rbx_10.d + 1) * 2)

void var_8f0
int64_t* rax_68 = sub_140aae2f0(&var_8f0, &var_c78)
int32_t var_418 = 4
int64_t var_408 = *rax_68
int64_t* rcx_62 = rax_68[1]

if (rcx_62 != 0)
    rcx_62[1].d += 1

int32_t var_3f8 = rax_68[2].d
char var_3f0 = 1
int64_t var_c88 = 0
int32_t var_c80 = 0
sub_1405947f0(&var_c88, 0x13)
int32_t rax_71 = var_c80 + 0x13
var_c80 = rax_71

if (rax_71 s> 0)
    sub_140594770(&var_c88)

UnDecorator::getReferenceType(var_c88, u"BuildConfiguration", 0x26)
int64_t* var_a30 = &var_c88
int32_t* var_a28 = &var_418
int32_t var_ca0
sub_140b91dc0(&var_4c8, &var_ca0, &var_a30, nullptr)
int64_t rcx_67 = var_c88

if (rcx_67 != 0)
    sub_140a74f90(rcx_67)

if (var_3f0 != 0)
    char var_3f0_1 = 0
    
    if (rcx_62 != 0)
        rcx_62[1].d -= 1
        
        if (rcx_62[1].d == 1)
            (**rcx_62)(rcx_62)
            int32_t rax_74 = *(rcx_62 + 0xc)
            *(rcx_62 + 0xc) -= 1
            
            if (rax_74 == 1)
                (*(*rcx_62 + 8))(rcx_62, 1)

int64_t* var_8e8

if (var_8e8 != 0)
    var_8e8[1].d -= 1
    
    if (var_8e8[1].d == 1)
        (**var_8e8)(var_8e8)
        int32_t rax_78 = *(var_8e8 + 0xc)
        *(var_8e8 + 0xc) -= 1
        
        if (rax_78 == 1)
            (*(*var_8e8 + 8))(var_8e8, 1)

int64_t rcx_72 = var_c78

if (rcx_72 != 0)
    sub_140a74f90(rcx_72)

int64_t var_c68 = 0
int32_t var_c60 = 0
sub_1405947f0(&var_c68, 0xc)
int32_t rax_80 = var_c60 + 0xc
var_c60 = rax_80

if (rax_80 s> 0)
    sub_140594770(&var_c68)

UnDecorator::getReferenceType(var_c68, u"{0} {1} {2}", 0x18)
sub_140ebd660()
int64_t* rax_81 = sub_140ebdb80(data_143e2a070)
int64_t* r14 = rax_81[1]
int64_t rcx_77 = *rax_81

if (r14 != 0)
    r14[1].d += 1

int32_t r13 = rax_81[2].d
int64_t rsi_2 = var_a78
int64_t* var_a70

if (var_a70 != 0)
    var_a70[1].d += 1

if (rax_20 != 0)
    rax_20[1].d += 1

void var_8c0
char* var_8a8
char** rax_84 = sub_140a96390(&var_8a8, sub_140aae2f0(&var_8c0, &var_c68))
int64_t var_3a8 = var_b98
int32_t var_3b8 = 4
int64_t* var_3a0 = rax_20

if (rax_20 != 0)
    rax_20[1].d += 1

int32_t var_398 = rax_21
char var_390 = 1
int32_t var_388 = 4
int64_t var_378 = rsi_2
int64_t* var_370 = var_a70

if (var_a70 != 0)
    var_a70[1].d += 1

int64_t var_348 = rcx_77
int32_t var_a68
int32_t var_368 = var_a68
char var_360 = 1
int32_t var_358 = 4
int64_t* var_340 = r14

if (r14 != 0)
    r14[1].d += 1

int32_t var_338 = r13
void* var_b80 = nullptr
char var_330 = 1
int32_t var_b78 = 3
sub_1405a4b40(&var_b80, 3, 0)
void var_3b0
void* rdx_27 = &var_3b0
int64_t* rcx_82 = var_b80 + 8
int32_t i_2 = 3
int32_t i

do
    rcx_82[-1].d = *(rdx_27 - 8)
    *rcx_82 = *rdx_27
    *rcx_82 = *rdx_27
    *rcx_82 = *rdx_27
    *rcx_82 = *rdx_27
    rcx_82[4].b = 0
    
    if (*(rdx_27 + 0x20) != 0)
        rcx_82[1] = *(rdx_27 + 8)
        void* rax_95 = *(rdx_27 + 0x10)
        rcx_82[2] = rax_95
        
        if (rax_95 != 0)
            *(rax_95 + 8) += 1
        
        rcx_82[3].d = *(rdx_27 + 0x18)
        rcx_82[4].b = 1
    
    rcx_82 = &rcx_82[6]
    rdx_27 += 0x30
    i = i_2
    i_2 -= 1
while (i != 1)
char* var_a20 = *rax_84
void* rax_98 = rax_84[1]
void* var_a18 = rax_98

if (rax_98 != 0)
    *(rax_98 + 8) += 1

void var_8d8
int64_t* rax_99 = sub_140aac870(&var_8d8, &var_a20, &var_b80)
int64_t var_aa8 = *rax_99
void* rcx_84 = rax_99[1]
void* var_aa0 = rcx_84

if (rcx_84 != 0)
    *(rcx_84 + 8) += 1

int32_t var_a98 = rax_99[2].d
int64_t* var_8d0

if (var_8d0 != 0)
    var_8d0[1].d -= 1
    
    if (var_8d0[1].d == 1)
        (**var_8d0)(var_8d0)
        int32_t rax_104 = *(var_8d0 + 0xc)
        *(var_8d0 + 0xc) -= 1
        
        if (rax_104 == 1)
            (*(*var_8d0 + 8))(var_8d0, 1)

sub_140596f50(&var_b80)
void var_300
void* rsi_3 = &var_300

do
    i_1 -= 1
    rsi_3 -= 0x30
    
    if (*rsi_3 != 0)
        *rsi_3 = 0
        int64_t* rbx_16 = *(rsi_3 - 0x10)
        
        if (rbx_16 != 0)
            rbx_16[1].d -= 1
            
            if (rbx_16[1].d == 1)
                (**rbx_16)(rbx_16)
                int32_t rax_108 = *(rbx_16 + 0xc)
                *(rbx_16 + 0xc) -= 1
                
                if (rax_108 == 1)
                    (*(*rbx_16 + 8))(rbx_16, 1)
while (i_1 != 0)

int64_t* rbx_17 = rax_84[1]

if (rbx_17 != 0)
    rbx_17[1].d -= 1
    
    if (rbx_17[1].d == 1)
        (**rbx_17)(rbx_17)
        int32_t rax_112 = *(rbx_17 + 0xc)
        *(rbx_17 + 0xc) -= 1
        
        if (rax_112 == 1)
            (*(*rbx_17 + 8))(rbx_17, zx.q((i_1 + 1).d))

if (rax_20 != 0)
    rax_20[1].d -= 1
    
    if (rax_20[1].d == 1)
        (**rax_20)(rax_20)
        int32_t rax_116 = *(rax_20 + 0xc)
        *(rax_20 + 0xc) -= 1
        
        if (rax_116 == 1)
            (*(*rax_20 + 8))(rax_20, 1)

if (var_a70 != 0)
    var_a70[1].d -= 1
    
    if (var_a70[1].d == 1)
        (**var_a70)(var_a70)
        int32_t rax_120 = *(var_a70 + 0xc)
        *(var_a70 + 0xc) -= 1
        
        if (rax_120 == 1)
            (*(*var_a70 + 8))(var_a70, 1)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t rax_124 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (rax_124 == 1)
            (*(*r14 + 8))(r14, 1)

int64_t* var_8b8

if (var_8b8 != 0)
    var_8b8[1].d -= 1
    
    if (var_8b8[1].d == 1)
        (**var_8b8)(var_8b8)
        int32_t rdi_2 = *(var_8b8 + 0xc)
        *(var_8b8 + 0xc) -= 1
        
        if (rdi_2 == 1)
            (*(*var_8b8 + 8))(var_8b8, zx.q(rdi_2))

int64_t rcx_101 = var_c68

if (rcx_101 != 0)
    sub_140a74f90(rcx_101)

int64_t var_ac0
char* var_898
sub_140aaca20(&var_ac0, sub_140a96390(&var_898, &var_aa8), &var_4c8)
char r12 = 0
int16_t* var_bd8 = nullptr
int32_t var_bd0 = 0
sub_1405947f0(&var_bd8, 0x21)
int32_t rdi_3 = var_bd0 + 0x21

if (rdi_3 s> 0)
    sub_140594770(&var_bd8)

int16_t* rsi_4 = var_bd8
UnDecorator::getReferenceType(rsi_4, u"bShouldWindowPreserveAspectRatio", 0x42)
void* rcx_107 = data_143ddb400
int16_t* const rbx_20 = &data_142d40450
char var_cc7 = 1
int16_t* const r8_13 = &data_142d40450

if (rdi_3 != 0)
    r8_13 = rsi_4

sub_140af2fd0(rcx_107, /Script/EngineSettings.GeneralProjectSettings", r8_13, &var_cc7, 
    &data_143de5830)

if (rsi_4 != 0)
    sub_140a74f90(rsi_4)

int16_t* var_bc8 = nullptr
int32_t var_bc0 = 0
sub_1405947f0(&var_bc8, 0x15)
int32_t rdi_4 = var_bc0 + 0x15

if (rdi_4 s> 0)
    sub_140594770(&var_bc8)

int16_t* rsi_5 = var_bc8
UnDecorator::getReferenceType(rsi_5, u"bUseBorderlessWindow", 0x2a)
void* rcx_112 = data_143ddb400
char var_cc8 = 0
int16_t* r8_14 = &data_142d40450

if (rdi_4 != 0)
    r8_14 = rsi_5

sub_140af2fd0(rcx_112, /Script/EngineSettings.GeneralProjectSettings", r8_14, &var_cc8, 
    &data_143de5830)
int64_t* r15
r15.b = var_cc8 != 0
char var_cc2 = r15.b

if (rsi_5 != 0)
    sub_140a74f90(rsi_5)

int16_t* var_bb8 = nullptr
int32_t var_bb0 = 0
sub_1405947f0(&var_bb8, 0x13)
int32_t rdi_5 = var_bb0 + 0x13

if (rdi_5 s> 0)
    sub_140594770(&var_bb8)

int16_t* rsi_6 = var_bb8
UnDecorator::getReferenceType(rsi_6, u"bAllowWindowResize", 0x26)
void* rcx_117 = data_143ddb400
char var_cc6 = 1
int16_t* r8_15 = &data_142d40450

if (rdi_5 != 0)
    r8_15 = rsi_6

sub_140af2fd0(rcx_117, /Script/EngineSettings.GeneralProjectSettings", r8_15, &var_cc6, 
    &data_143de5830)

if (rsi_6 != 0)
    sub_140a74f90(rsi_6)

int16_t* var_ba8 = nullptr
int32_t var_ba0 = 0
sub_1405947f0(&var_ba8, 0xc)
int32_t rdi_6 = var_ba0 + 0xc

if (rdi_6 s> 0)
    sub_140594770(&var_ba8)

int16_t* rsi_7 = var_ba8
UnDecorator::getReferenceType(rsi_7, u"bAllowClose", 0x18)
void* rcx_122 = data_143ddb400
char var_cc5 = 1
int16_t* r8_16 = &data_142d40450

if (rdi_6 != 0)
    r8_16 = rsi_7

sub_140af2fd0(rcx_122, /Script/EngineSettings.GeneralProjectSettings", r8_16, &var_cc5, 
    &data_143de5830)

if (rsi_7 != 0)
    sub_140a74f90(rsi_7)

int16_t* var_c18 = nullptr
int32_t var_c10 = 0
sub_1405947f0(&var_c18, 0xf)
int32_t rdi_7 = var_c10 + 0xf

if (rdi_7 s> 0)
    sub_140594770(&var_c18)

int16_t* rsi_8 = var_c18
UnDecorator::getReferenceType(rsi_8, u"bAllowMaximize", 0x1e)
void* rcx_127 = data_143ddb400
char var_cc3 = 1
int16_t* r8_17 = &data_142d40450

if (rdi_7 != 0)
    r8_17 = rsi_8

sub_140af2fd0(rcx_127, /Script/EngineSettings.GeneralProjectSettings", r8_17, &var_cc3, 
    &data_143de5830)

if (rsi_8 != 0)
    sub_140a74f90(rsi_8)

int16_t* var_c08 = nullptr
int32_t var_c00 = 0
sub_1405947f0(&var_c08, 0xf)
int32_t rdi_8 = var_c00 + 0xf

if (rdi_8 s> 0)
    sub_140594770(&var_c08)

int16_t* rsi_9 = var_c08
UnDecorator::getReferenceType(rsi_9, u"bAllowMinimize", 0x1e)
void* rcx_132 = data_143ddb400
char var_cc4 = 1
int16_t* r8_18 = &data_142d40450

if (rdi_8 != 0)
    r8_18 = rsi_9

sub_140af2fd0(rcx_132, /Script/EngineSettings.GeneralProjectSettings", r8_18, &var_cc4, 
    &data_143de5830)

if (rsi_9 != 0)
    sub_140a74f90(rsi_9)

int16_t* var_bf8 = nullptr
int32_t var_bf0 = 0
sub_1405947f0(&var_bf8, 0xf)
int32_t rdi_9 = var_bf0 + 0xf

if (rdi_9 s> 0)
    sub_140594770(&var_bf8)

int16_t* rsi_10 = var_bf8
UnDecorator::getReferenceType(rsi_10, u"MinWindowWidth", 0x1e)
void* rcx_137 = data_143ddb400
int32_t var_ca8 = 0x280
int16_t* r8_19 = &data_142d40450

if (rdi_9 != 0)
    r8_19 = rsi_10

sub_140af3c10(rcx_137, /Script/EngineSettings.GeneralProjectSettings", r8_19, &var_ca8, 
    &data_143de5830)

if (rsi_10 != 0)
    sub_140a74f90(rsi_10)

int16_t* var_be8 = nullptr
int32_t var_be0 = 0
sub_1405947f0(&var_be8, 0x10)
int32_t rdi_10 = var_be0 + 0x10

if (rdi_10 s> 0)
    sub_140594770(&var_be8)

int16_t* rsi_11 = var_be8
UnDecorator::getReferenceType(rsi_11, u"MinWindowHeight", 0x20)
void* rcx_142 = data_143ddb400
int32_t var_cac = 0x1e0

if (rdi_10 != 0)
    rbx_20 = rsi_11

sub_140af3c10(rcx_142, /Script/EngineSettings.GeneralProjectSettings", rbx_20, &var_cac, 
    &data_143de5830)

if (rsi_11 != 0)
    sub_140a74f90(rsi_11)

rsi_11.b = 1
int32_t var_ca4 = 0
var_cb0 = 0
sub_140af2b60()

if (sub_140b2ab20(&data_143dbb3f0, u"WinX=", &var_ca4) != 0)
    sub_140af2b60()
    rsi_11 = 1
    
    if (sub_140b2ab20(&data_143dbb3f0, u"WinY=", &var_cb0) != 0)
        rsi_11 = nullptr

int32_t r14_1 = var_cc0
rdi_10.b = 0
uint128_t zmm10
uint128_t zmm11

if (r14_1 != 2)
    zmm11 = var_ca0
    zmm10 = var_ca0
else
    int64_t* rcx_144 = data_143e29f28
    int64_t var_990 = 0
    int64_t var_988_1 = 0
    int128_t var_958
    __builtin_memset(&var_958, 0, 0x20)
    int32_t var_998
    
    if (rcx_144 == 0)
        sub_140d84bf0(&var_998)
    else
        (*(*rcx_144 + 0x1b0))(rcx_144, &var_998)
    rdi_10.b = 1
    int32_t var_970
    int32_t var_968
    int32_t rcx_147 = var_968 - var_970
    int32_t rax_133 = var_cbc
    
    if (rcx_147 s>= rax_133)
        rax_133 = rcx_147
    
    int32_t var_96c
    int32_t var_964
    int32_t rcx_149 = var_964 - var_96c
    int32_t rax_134 = var_cb8
    zmm10 = _mm_cvtepi32_ps(zx.o(rax_133))
    
    if (rcx_149 s>= rax_134)
        rax_134 = rcx_149
    
    zmm11 = _mm_cvtepi32_ps(zx.o(rax_134))
    sub_140d72800(&var_990)

void* rbx_21 = &data_143f3f420

if (data_143f40478 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f40478)
    
    if (data_143f40478 == 0xffffffff)
        sub_140e13ae0()
        sub_141ff4960(&data_143f3f420, &data_143e280b0)
        atexit(sub_142cff8b0)
        _Init_thread_footer(&data_143f40478)

void** var_800
sub_140693270(&data_143f40070, sub_140ddaa70(&var_800, &data_143dbb1f0))
void** var_778
sub_140693270(&data_143f400f8, sub_140ddaa70(&var_778, &data_143dbb1f0))
void** var_888
sub_140693270(&data_143f40180, sub_140ddaa70(&var_888, &data_143dbb1f0))
void** var_6f0
sub_140693270(&data_143f40230, sub_140ddaa70(&var_6f0, &data_143dbb1f0))
void** var_668
sub_140693270(&data_143f402e0, sub_140ddaa70(&var_668, &data_143dbb1f0))
void** var_5e0
sub_140693270(&data_143f40368, sub_140ddaa70(&var_5e0, &data_143dbb1f0))
void** var_558
sub_140693270(&data_143f403f0, sub_140ddaa70(&var_558, &data_143dbb1f0))
sub_140691a20(&var_800)
sub_140691a20(&var_778)
sub_140691a20(&var_888)
sub_140691a20(&var_6f0)
sub_140691a20(&var_668)
sub_140691a20(&var_5e0)
sub_140691a20(&var_558)
int128_t* r13_2

if (r15.b == 0)
    int128_t var_9d0
    r13_2 = &var_9d0
    var_9d0 = data_142edf360
else
    int128_t var_9f0
    r13_2 = &var_9f0
    var_9f0 = zx.o(0)

uint128_t zmm13 = zx.o(var_cac)
uint128_t zmm12 = zx.o(var_ca8)
int64_t var_af0 = var_ac0
void* var_ab8
void* var_ae8 = var_ab8
zmm13 = _mm_cvtepi32_ps(zmm13)
zmm12 = _mm_cvtepi32_ps(zmm12)

if (var_ab8 != 0)
    *(var_ab8 + 8) += 1
    r14_1 = var_cc0

int32_t var_ab0
int32_t var_ae0 = var_ab0
char var_ad8 = 1
int64_t var_ad0 = 0
int32_t var_ac8 = 0
void var_9b8

if (r15.b == 0)
    rbx_21 = sub_140dd3450(data_143e243c8, *sub_140b58170(&var_9b8, "Window", 1), nullptr)
int32_t var_af8

if (rdi_10.b == 0)
    zmm11 = var_af8
else
    r12 = 1

r15.b = 0
int32_t var_b28

if (rdi_10.b == 0)
    zmm10 = var_b28
else
    r15.b = 1

uint128_t zmm9 = zx.o(var_cb0)
uint128_t zmm6 = zx.o(var_cbc)
uint128_t zmm7 = zx.o(var_cb8)
uint128_t zmm8 = _mm_cvtepi32_ps(zx.o(var_ca4))
zmm9 = _mm_cvtepi32_ps(zmm9)
_mm_cvtepi32_ps(zmm6)
zmm7 = _mm_cvtepi32_ps(zmm7)
void var_328
int64_t* rax_149
int32_t zmm6_1
rax_149, zmm6_1 = sub_140dd5ed0(&var_328)
*(rax_149 + 0x1ec) = zmm6_1
rax_149[0x3e].d = zmm7.d
rax_149[0x34].d = 5
rax_149[0x35] = rbx_21
*(rax_149 + 0x1f4) = 0
sub_14065da90(&rax_149[0x36], &var_af0)
rax_149[0x39].b = var_ad8
sub_140692f90(&rax_149[0x3a], &var_ad0)
*(rax_149 + 0x1e4) = zmm8.d
rax_149[0x3d].d = zmm9.d
*(rax_149 + 0x1e1) = rsi_11.b
void var_9b0

if (&var_9b0 != rax_149 + 0x214)
    *(rax_149 + 0x214) = zmm12.d
    rax_149[0x43].b = 1

void var_9a8

if (&var_9a8 != rax_149 + 0x21c)
    *(rax_149 + 0x21c) = zmm13.d
    rax_149[0x44].b = 1

if (&var_b28 != rax_149 + 0x224)
    if (rax_149[0x45].b != 0)
        rax_149[0x45].b = 0
    
    if (r15.b != 0)
        *(rax_149 + 0x224) = zmm10.d
        rax_149[0x45].b = 1

if (&var_af8 != rax_149 + 0x22c)
    if (rax_149[0x46].b != 0)
        rax_149[0x46].b = 0
    
    if (r12 != 0)
        *(rax_149 + 0x22c) = zmm11.d
        rax_149[0x46].b = 1

rsi_11.b ^= 1
int128_t zmm0_2 = *r13_2
char rax_155 = var_cc2 ^ 1
*(rax_149 + 0x205) = 1
*(rax_149 + 0x20c) = rax_155
*(rax_149 + 0x234) = rax_155
rax_149[0x42].b = var_cc7
bool c = var_cc6 != 0
*(rax_149 + 0x235) = rsi_11.b
*(rax_149 + 0x20d) = var_cc5
*(rax_149 + 0x20f) = var_cc4
*(rax_149 + 0x20e) = var_cc3
*(rax_149 + 0x238) = zmm0_2
*(rax_149 + 0x202) = sbb.b(&var_af8, &var_af8, c) & 2
void*** rax_161 = sub_141ff2420()
void*** var_b08 = rax_161
int64_t* var_b10 = &rax_161[2]
sub_140918950(&var_b10, &rax_161[2])
int64_t var_cd8_9 = 0xa78
void var_cb4
void* var_b00 = &var_cb4
sub_140de51f0(&var_b10, arg1, rax_149, sub_140e23ed0(&rax_161[2], "SWindow"))
sub_140597060(&var_b10)
void var_c8
sub_140597060(&var_c8)
char var_f8 = 0
char var_100 = 0
char var_108 = 0
char var_110 = 0
void var_178
sub_1406601b0(&var_178)
sub_140ddea30(&var_328)
sub_140745b20(&var_ad0)
sub_1405970a0(&var_af0)
sub_140e23790(*arg1, 1)
int64_t* rcx_183 = data_143e29f28
int64_t* var_a10 = *arg1
void* rax_163 = arg1[1]
void* var_a08 = rax_163

if (rax_163 != 0)
    *(rax_163 + 8) += 1

void var_9e0
(*(*rcx_183 + 0x10))(rcx_183, &var_9e0, &var_a10, 0, var_cd8_9)
int64_t* var_9d8

if (var_9d8 != 0)
    var_9d8[1].d -= 1
    
    if (var_9d8[1].d == 1)
        (**var_9d8)(var_9d8)
        int32_t temp4_1 = *(var_9d8 + 0xc)
        *(var_9d8 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_9d8 + 8))(var_9d8, 1)

int32_t rdx_57 = 1

if (r14_1 != 0)
    rdx_57 = r14_1

int512_t zmm0_3 = sub_140e25450(*arg1, rdx_57)

if (*(data_143e29f28 + 0x172) == 0)
    sub_140e25670(*arg1, zmm0_3)
else
    int64_t* rcx_187 = *(data_143e20d08 + 0x20)
    int64_t* var_a00 = *arg1
    void* rax_170 = arg1[1]
    void* var_9f8_1 = rax_170
    
    if (rax_170 != 0)
        *(rax_170 + 8) += 1
    
    (*(*rcx_187 + 0x20))(rcx_187, &var_a00)

sub_140e8c780(data_143e29f28, 1)
sub_1405970a0(&var_ac0)
sub_1405970a0(&var_aa8)
int32_t var_480_1 = 0

if (var_488 != 0)
    sub_140a74f90(var_488)

sub_140acd610(&var_4c8)
sub_1405970a0(&var_a90)
sub_1405970a0(&var_a78)
sub_1405970a0(&var_b98)
sub_1405970a0(&var_b70)
__security_check_cookie(rax_1 ^ &var_cf8)
return arg1
