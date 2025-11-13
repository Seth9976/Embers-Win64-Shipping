// 函数: sub_141b58e10
// 地址: 0x141b58e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ab8
int64_t rax_1 = __security_cookie ^ &var_ab8
int32_t r12 = 0
void* r13 = arg4
uint32_t var_9e8 = 0
char var_a40
char* var_758 = &var_a40
void*** (* var_760)() = j_sub_140597fc0
var_a40 = 0
int64_t* rax_4 = sub_140a756e0(&var_760, &data_143958018) + 0x10
int64_t* var_958 = rax_4
int64_t rcx_1 = *rax_4
int64_t rcx_2 = rax_4[2]
char var_940 = 0
uint64_t result_1 = rax_4[3]
rax_4[3] = &var_958
int64_t* rax_5 = var_958
rax_5[4].d += 1
TEB* gsbase
void* const rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f2f0b4 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f2f0b4)
    
    if (data_143f2f0b4 == 0xffffffff)
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        data_143f2f0b0 = performanceCount_2.d
        _Init_thread_footer(&data_143f2f0b4)

int128_t zmm3
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
zmm3, zmm7, zmm8, zmm9, zmm10 = sub_142134440()
int64_t* rax_9
int128_t zmm2
rax_9, zmm2 = sub_142006940()
int64_t r8 = *rax_9
(*(r8 + 0x98))(rax_9, arg2, r8)

if (data_143f2f0c0 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f2f0c0)
    
    if (data_143f2f0c0 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_12 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.HDR.UI.CompositeMode", r8_1)
        int64_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0
        else
            int64_t rdx_1 = *rax_12
            rax_13 = (*(rdx_1 + 0x58))(rax_12, rdx_1)
        
        data_143f2f0b8 = rax_13
        _Init_thread_footer(&data_143f2f0c0)

char var_a47_1

if (data_143f0f227 == 0 || data_1439c7a15 == 0)
    var_a47_1 = 0
else if (sub_141b6a5f0((*U"1111")[sx.q(data_1439c7a08)]) == 0)
    var_a47_1 = 0
else
    void* rax_16 = data_143f2f0b8
    
    if (rax_16 == 0 || *(rax_16 + 4) == 0)
        var_a47_1 = 0
    else
        var_a47_1 = 1
        
        if (sub_1419a4730() == 0)
            var_a47_1 = 0

if (data_143f2f0d0 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f2f0d0)
    
    if (data_143f2f0d0 == 0xffffffff)
        int64_t* rcx_9 = data_143db18d0
        
        if (rcx_9 == 0)
            sub_140a53c40()
            rcx_9 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_20 = (*(*rcx_9 + 0xb0))(rcx_9, u"r.HDR.Display.OutputDevice", r8_2)
        int64_t rax_21
        
        if (rax_20 == 0)
            rax_21 = 0
        else
            int64_t rdx_2 = *rax_20
            rax_21 = (*(rdx_2 + 0x58))(rax_20, rdx_2)
        
        data_143f2f0c8 = rax_21
        _Init_thread_footer(&data_143f2f0d0)

if (data_143f2f0e0 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f2f0e0)
    
    if (data_143f2f0e0 == 0xffffffff)
        int64_t* rcx_11 = data_143db18d0
        
        if (rcx_11 == 0)
            sub_140a53c40()
            rcx_11 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_24 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.HDR.Display.ColorGamut", r8_3)
        int64_t rax_25
        
        if (rax_24 == 0)
            rax_25 = 0
        else
            int64_t rdx_3 = *rax_24
            rax_25 = (*(rdx_3 + 0x58))(rax_24, rdx_3)
        
        data_143f2f0d8 = rax_25
        _Init_thread_footer(&data_143f2f0e0)

void* rax_26 = data_143f2f0c8
int32_t rcx_13

if (rax_26 == 0)
    rcx_13 = 0
else
    rcx_13 = *(rax_26 + 4)

void* rax_27 = data_143f2f0d8
int32_t rax_28

if (rax_27 == 0)
    rax_28 = 0
else
    rax_28 = *(rax_27 + 4)

char var_a46_1

if (*(arg3 + 0x88) == rcx_13)
    var_a46_1 = 0

if (*(arg3 + 0x88) != rcx_13 || *(arg3 + 0x8c) != rax_28)
    var_a46_1 = 1

*(arg3 + 0x88) = rcx_13
*(arg3 + 0x8c) = rax_28
int64_t* rcx_14 = data_143f2d3f0
char var_a48 = 0
int32_t rax_30 = (*(*rcx_14 + 0x90))(rcx_14)
void* const var_918
void* const rax_33

if (rax_30 == 0 && data_143f5b298 != 0)
    int64_t* rcx_15 = *(arg3 + 0xc0)
    void* rax_32
    
    if (rcx_15 != 0)
        rax_32 = (**rcx_15)(rcx_15)
    
    if (rcx_15 == 0 || rax_32 == 0)
        var_918 = nullptr
        rax_33 = nullptr
    else
        rax_33 = *(rax_32 + 8)
        var_918 = rax_33
        
        if (rax_33 != 0)
            *(rax_33 + 8) += 1
    
    r12 = 1

if (rax_30 != 0 || data_143f5b298 == 0 || rax_33 == 0 || *(data_143f5b298 + 0xaf8) == 0)
    rbx.b = 0
else
    rbx = 1

if ((r12.b & 1) != 0)
    r12 &= 0xfffffffe
    sub_1405d1550(&var_918)

int32_t var_a30

if (rbx.b != 0)
    int64_t* rcx_17 = *(arg3 + 0xc0)
    var_a30 = (*(r13 + 0x7a0)).d
    int32_t var_a2c_1 = *(r13 + 0x7a4)
    int64_t* r13_1 = *(data_143f5b298 + 0xaf8)
    void* rax_37
    
    if (rcx_17 != 0)
        rax_37 = (**rcx_17)(rcx_17)
    
    void* const var_998
    void* const rbx_1
    
    if (rcx_17 == 0 || rax_37 == 0)
        rbx_1 = nullptr
        var_998 = nullptr
    else
        rbx_1 = *(rax_37 + 8)
        var_998 = rbx_1
        
        if (rbx_1 != 0)
            *(rbx_1 + 8) += 1
            rbx_1 = var_998
    
    int64_t* rcx_18 = data_143f0f180
    int64_t var_910
    (*(*rcx_18 + 0x338))(rcx_18, &var_910, *(arg3 + 0x50))
    (*(*r13_1 + 0xb0))(r13_1, arg2, var_910, rbx_1, var_a30.q)
    sub_1405d1550(&var_910)
    sub_1405d1550(&var_998)
    r13 = arg4
    var_a48 = 1

sub_140b33630("Slate")
sub_141b4f3e0(*(arg1 + 0x238), arg2, r13 + 0x48)
int32_t r13_2 = *(arg3 + 0xa4)
int32_t rsi_1 = *(arg3 + 0xa0)
char rax_40 = sub_140e1ab80(r13 + 0x48)
char rdx_7 = rax_40
void* rcx_24

if (rax_40 != 0 && *(arg3 + 0xa8) != 0)
    rcx_24 = *(arg3 + 0x58)

if (rax_40 == 0 || (*(arg3 + 0xa8) != 0
        && (rcx_24 == 0 || (*(rcx_24 + 0x60) == rsi_1 && *(rcx_24 + 0x64) == r13_2))))
    rax_40 = 0
else
    rax_40 = 1

*(arg3 + 0xa8) = rdx_7

if (rax_40 != 0)
    sub_141b63220(arg3)

void* const var_9c0
int64_t var_8e8
int64_t* rax_41
int32_t r12_1

if (var_a48 == 0)
    int64_t* rcx_26 = *(arg3 + 0xc0)
    r12_1 = r12 | 4
    void* rax_43
    
    if (rcx_26 != 0)
        rax_43 = (**rcx_26)(rcx_26)
    
    if (rcx_26 == 0 || rax_43 == 0)
        var_9c0 = nullptr
    else
        void* rax_44 = *(rax_43 + 8)
        var_9c0 = rax_44
        
        if (rax_44 != 0)
            *(rax_44 + 8) += 1
    
    rax_41 = &var_9c0
else
    r12_1 = r12 | 2
    var_8e8 = 0
    rax_41 = &var_8e8

void* rsi_2 = *rax_41
*rax_41 = 0
void* rbx_3 = rsi_2
void* var_9a8 = rbx_3

if ((r12_1.b & 4) != 0)
    r12_1 &= 0xfffffffb
    sub_1405d1550(&var_9c0)

if ((r12_1.b & 2) != 0)
    r12_1 &= 0xfffffffd
    sub_1405d1550(&var_8e8)

void var_8e0
void* var_8d8
int64_t* rax_45
int32_t rcx_29

if (rsi_2 == 0)
    int64_t* rcx_30 = data_143f0f180
    (*(*rcx_30 + 0x338))(rcx_30, &var_8e0, *(arg3 + 0x50))
    rax_45 = &var_8e0
    rcx_29 = 0x10
else
    var_8d8 = rbx_3
    *(rsi_2 + 8) += 1
    rbx_3 = var_9a8
    rax_45 = &var_8d8
    rcx_29 = 8

int64_t* r13_3 = *rax_45
int32_t r12_2 = r12_1 | rcx_29
int64_t* var_a38 = r13_3
*rax_45 = 0

if ((r12_2.b & 0x10) != 0)
    r12_2 &= 0xffffffef
    sub_1405d1550(&var_8e0)
    r13_3 = var_a38

if ((r12_2.b & 8) != 0)
    r12_2 &= 0xfffffff7
    sub_1405d1550(&var_8d8)
    r13_3 = var_a38

int64_t* var_8f8 = r13_3

if (r13_3 != 0)
    r13_3[1].d += 1
    rbx_3 = var_9a8
    r13_3 = var_a38

int32_t rax_47

if (rsi_2 == 0)
    rax_47 = *(arg3 + 0x98)
else
    rax_47 = *(rbx_3 + 0x60)

int32_t rsi_3

if (rsi_2 == 0)
    rsi_3 = *(arg3 + 0x9c)
else
    rsi_3 = *(rbx_3 + 0x64)

char rcx_33 = var_a47_1
int64_t* var_a98
char var_a90
char var_a88
char var_a80
int32_t var_a78
int128_t* var_a70

if (rcx_33 != 0)
    void* rcx_34 = *(arg3 + 0x60)
    int32_t rdx_9
    
    if (rcx_34 == 0)
        rdx_9 = rax_47
    label_141b59500:
        int64_t rax_55 = sx.q(data_143f0f1a0)
        int32_t rcx_39
        
        if (((rax_55 - 2).d & 0xfffffffd) != 0)
            rcx_39 = 0
        
        if (((rax_55 - 2).d & 0xfffffffd) == 0
                || ((*(rax_55 * 0x14 + &data_143f025fc) u>> 0x12).b & 1) != 0)
            rcx_39 = 0x10000000
        
        int32_t var_398_1 = data_1439c7b30
        char var_a80_1 = 0
        wchar16 const* const var_368_1 = u"UnknownTexture2D"
        int32_t var_394_1 = rdx_9
        int32_t var_378_1 = rcx_39
        int32_t var_374_1 = 9
        char var_a88_1 = 1
        char var_a90_1 = 1
        wchar16 const* const var_a98_1 = u"UITargetRT"
        int16_t var_370_1 = 0
        int128_t var_3a8 = data_1439c7b20
        int32_t var_390_1 = rsi_3
        int32_t var_38c_1 = 0
        int32_t var_388_1 = 1
        int32_t var_384_1 = 0x10000
        int16_t var_380_1 = 1
        int32_t var_37c_1 = 2
        int16_t var_360_1 = 0x101
        char var_35e_1 = 0
        sub_1419a0ce0(&data_1439c9260, arg2, &var_3a8, arg3 + 0x60, var_a98_1, var_a90_1, 
            var_a88_1, var_a80_1)
        int32_t var_37c_2 = *(var_a38 + 0x3c)
        sub_1419a0ce0(&data_1439c9260, arg2, &var_3a8, arg3 + 0x70, u"HDRSourceRT", 1, 1, 0)
        sub_1405d16e0(arg3 + 0x78, nullptr)
        sub_1405d16e0(arg3 + 0x80, nullptr)
        int128_t zmm1_3 = data_143dbb1e0
        int128_t var_358
        var_a70 = &var_358
        var_a78 = 9
        var_a80.d = 1
        int32_t var_348_1 = 1
        int512_t zmm0_3
        zmm0_3.o = zx.o(0)
        int64_t* rcx_43 = data_143f0f180
        int32_t rax_62 = (1 << (data_1439c7a34).b) - 1
        var_358 = zx.o(0)
        int128_t var_344_1 = zmm1_3
        int32_t var_334_1 = rax_62
        char var_330_1 = 0
        int64_t var_328_1 = 0
        int32_t var_320_1 = 0
        var_a88 = 0x12
        var_a90.d = 0x20
        var_a98.d = 0x20
        void var_930
        (*(*rcx_43 + 0x580))(zmm0_3, &var_930, &data_143f02b98, 0x20, var_a98, var_a90, var_a88, 
            var_a80, var_a78, var_a70)
        sub_1405d16e0(arg3 + 0x78, *sub_1405d1600(arg3 + 0x80, &var_930))
        sub_14081c9d0(&var_930)
        var_a46_1 = 1
        r13_3 = var_a38
    else
        int64_t* rcx_35 = *(rcx_34 + 8)
        rdx_9 = rax_47
        
        if (*((*(*rcx_35 + 8))(rcx_35) + 0x60) != rdx_9)
            goto label_141b59500
        
        int64_t* rcx_36 = *(*(arg3 + 0x60) + 8)
        
        if (*((*(*rcx_36 + 8))(rcx_36, rdx_9) + 0x64) != rsi_3)
        label_141b594f6:
            rdx_9 = rax_47
            goto label_141b59500
        
        void* rax_53 = *(arg3 + 0x70)
        
        if (rax_53 == 0)
            goto label_141b594f6
        
        r13_3 = var_a38
        
        if (*(*(rax_53 + 8) + 0x3c) != *(r13_3 + 0x3c))
            goto label_141b594f6
    rcx_33 = var_a47_1

int64_t* var_9b0 = r13_3

if (r13_3 != 0)
    r13_3[1].d += 1
    r13_3 = var_9b0

char rax_66 = *(arg5 + 0x25)

if (rcx_33 != 0)
    void*** rbx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int128_t var_868_1 = data_142d57d10
    char var_a3f_1 = 1
    int128_t zmm0_2 = data_142d57920
    int128_t var_858_1 = data_142d3f800
    void* rax_68 = *(*(arg3 + 0x70) + 8)
    void* rax_69 = &rbx_6[0xa]
    
    if (rax_69 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x58)
        rbx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_69 = &rbx_6[0xa]
    
    *(arg2 + 0x30) = rax_69
    int64_t* rax_70 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_70 = rbx_6
    *(arg2 + 8) = &rbx_6[1]
    rbx_6[1] = 0
    *rbx_6 = &data_142d56628
    rbx_6[2].d = var_868_1.d
    __builtin_memset(rbx_6 + 0x14, 0xff, 0x20)
    *(rbx_6 + 0x34) = zmm0_2:4.d
    rbx_6[7].d = zmm0_2:8.d
    *(rbx_6 + 0x3c) = zmm0_2:0xc.d
    rbx_6[9] = rax_68
    rbx_6[8] = r13_3
    
    if ((*(*r13_3 + 8))(r13_3, &data_142d56628) == 0)
        int64_t* rcx_49 = rbx_6[8]
        
        if ((*(*rcx_49 + 0x18))(rcx_49) == 0)
            int64_t* rcx_50 = rbx_6[8]
            
            if ((*(*rcx_50 + 0x20))(rcx_50) == 0)
                int64_t* rcx_51 = rbx_6[8]
                (*(*rcx_51 + 0x10))(rcx_51)
    
    int64_t* rcx_52 = rbx_6[9]
    
    if ((*(*rcx_52 + 8))(rcx_52) == 0)
        int64_t* rcx_53 = rbx_6[9]
        
        if ((*(*rcx_53 + 0x18))(rcx_53) == 0)
            int64_t* rcx_54 = rbx_6[9]
            
            if ((*(*rcx_54 + 0x20))(rcx_54) == 0)
                int64_t* rcx_55 = rbx_6[9]
                (*(*rcx_55 + 0x10))(rcx_55)
    
    int64_t* rcx_56 = *(*(arg3 + 0x60) + 8)
    sub_1405d16e0(&var_a38, (*(*rcx_56 + 8))(rcx_56))
    rax_66 = var_a3f_1

int64_t rdx_17 = *(arg3 + 0x50)
uint32_t rax_94 = zx.d(rax_66)

if (data_143f2d364 != 0)
    rax_94 = 1

int64_t var_780 = 0
float zmm2_1[0x4]
float zmm3_1[0x4]
zmm2_1, zmm3_1 = sub_1419667a0(arg2, rdx_17, 0, zmm3, zmm2)
int128_t zmm6 = sub_1405d1550(&var_780)
void*** rcx_62 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
float zmm12 = float.s(zx.q(rsi_3))
int32_t zmm13 = float.s(zx.q(rax_47))
void* rax_97 = &rcx_62[5]

if (rax_97 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_62 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_97 = &rcx_62[5]

*(arg2 + 0x30) = rax_97
void** rax_98 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_98 = rcx_62
*(arg2 + 8) = &rcx_62[1]
rcx_62[1] = 0
*rcx_62 = &data_142d54998
*(rcx_62 + 0x1c) = zmm13
rcx_62[4].d = zmm12
rcx_62[2] = 0
rcx_62[3].d = 0
*(rcx_62 + 0x24) = 0
int64_t* rax_100 = var_a38
void** rbx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_66 = &rbx_11[1]

if (rcx_66 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_66 = &rbx_11[1]

*(arg2 + 0x30) = rcx_66
*rbx_11 = rax_100
void*** rcx_70 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_101 = &rcx_70[5]

if (rax_101 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_70 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_101 = &rcx_70[5]

*(arg2 + 0x30) = rax_101
int64_t* rax_102 = *(arg2 + 8)
*(arg2 + 0x14) += 1
int128_t zmm1_4 = data_142d3f5a0
*rax_102 = rcx_70
*(arg2 + 8) = &rcx_70[1]
rcx_70[1] = 0
*rcx_70 = &data_142d549c8
rcx_70[2].d = 1
rcx_70[4].d = 1
rcx_70[3] = rbx_11
int64_t* rax_104 = var_a38
int32_t var_3f0 = 0
int32_t var_3ec
__builtin_memset(&var_3ec, 0xff, 0x14)
int128_t var_3d8 = zmm1_4
int64_t var_3c8
__builtin_memset(&var_3c8, 0, 0x19)
int64_t* var_4c8 = rax_104
int64_t var_4c0 = 0
int32_t var_4b8 = 0xffffffff
int16_t var_4b4 = 0x500
int64_t var_408_1
__builtin_memset(&var_408_1, 0, 0x11)
int32_t var_3f4 = 0
bool var_3af = rax_104[7].d u> 1
void var_4b0
memset(&var_4b0, 0, 0xa8)
char rax_105 = var_4b4:1.b

if (rax_94.b != 0)
    rax_105 = 9

var_4b4:1.b = rax_105

if (*(arg3 + 0xa8) != 0)
    int64_t var_408_2 = *(arg3 + 0x58)
    char var_3f8_1 = 1
    int32_t var_3f4_1 = 0x20

float zmm11[0x4] = zx.o(0)
int128_t var_58 = zmm6

if (*(arg4 + 0x50) s> 0)
    float var_68_1[0x4] = zmm7
    rbx_11 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    float var_78_1[0x4] = zmm8
    float var_88_1[0x4] = zmm9
    float var_98_1[0x4] = zmm10
    void* rax_108 = rbx_11 + 0x1a
    
    if (rax_108 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x1c)
        rbx_11 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_108 = rbx_11 + 0x1a
    
    int16_t* rcx_76 = u"SlateBatches"
    *(arg2 + 0x30) = rax_108
    int16_t i
    
    do
        i = *rcx_76
        *(rcx_76 + rbx_11 - u"SlateBatches") = i
        rcx_76 = &rcx_76[1]
    while (i != 0)
    void*** rcx_79 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_109 = &rcx_79[0x27]
    
    if (rax_109 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_79 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_109 = &rcx_79[0x27]
    
    *(arg2 + 0x30) = rax_109
    void**** rax_110 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_110 = rcx_79
    *(arg2 + 8) = &rcx_79[1]
    sub_1405d11b0(rcx_79, &var_4c8, rbx_11)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_4c8)
    int64_t* rdx_22 = var_a38
    int64_t var_3b8
    *(arg2 + 0x178) = var_3b8:7.b
    int32_t var_a2c_2 = rsi_3
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    int64_t* var_928 = rdx_22
    
    if (rdx_22 != 0)
        rdx_22[1].d += 1
        r13_3 = var_9b0
        rdx_22 = var_928
    
    int64_t var_800 = 0
    void** const var_808 = &data_14306c500
    int64_t var_7f8_1 = rax_47.q
    sub_1405d16e0(&var_800, rdx_22)
    sub_1405d1550(&var_928)
    zmm8 = *(arg3 + 0x20)
    float zmm6_1[0x4] = *(arg3 + 0x10)
    zmm7 = *(arg3 + 0x30)
    zmm3_1 = *(arg1 + 0x110)
    zmm10 = *(arg3 + 0x40)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
    float temp0_3[0x4] = _mm_mul_ps(zmm8, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55))
    float temp0_5[0x4] = _mm_mul_ps(zmm7, _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa))
    float temp0_7[0x4] = _mm_mul_ps(zmm10, _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff))
    zmm3_1 = *(arg1 + 0x120)
    float temp0_8[0x4] = _mm_mul_ps(zmm6_1, temp0_1)
    float temp0_10[0x4] = _mm_mul_ps(zmm6_1, _mm_shuffle_ps(zmm3_1, zmm3_1, 0))
    float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_8, temp0_3), temp0_5), temp0_7)
    float temp0_15[0x4] = _mm_mul_ps(zmm8, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55))
    float temp0_17[0x4] = _mm_mul_ps(zmm7, _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa))
    float temp0_18[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
    float temp0_19[0x4] = _mm_add_ps(temp0_10, temp0_15)
    float temp0_20[0x4] = _mm_mul_ps(zmm10, temp0_18)
    zmm3_1 = *(arg1 + 0x130)
    float temp0_21[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
    float temp0_23[0x4] = _mm_add_ps(_mm_add_ps(temp0_19, temp0_17), temp0_20)
    float temp0_25[0x4] = _mm_mul_ps(zmm8, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55))
    float temp0_27[0x4] = _mm_mul_ps(zmm7, _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa))
    float temp0_29[0x4] = _mm_mul_ps(zmm10, _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff))
    float temp0_31[0x4] = _mm_add_ps(_mm_mul_ps(zmm6_1, temp0_21), temp0_25)
    zmm2_1 = *(arg1 + 0x140)
    float temp0_32[0x4] = _mm_add_ps(temp0_31, temp0_27)
    float temp0_34[0x4] = _mm_mul_ps(zmm6_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0))
    float temp0_35[0x4] = _mm_add_ps(temp0_32, temp0_29)
    float temp0_37[0x4] = _mm_mul_ps(zmm8, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
    float temp0_39[0x4] = _mm_mul_ps(zmm7, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
    float temp0_40[0x4] = _mm_add_ps(temp0_34, temp0_37)
    bool cond:4_1 = data_143f2d364 != 0
    void* r8_11 = arg3 + 0x58
    float temp0_41[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
    bool var_6a3_1 = cond:4_1
    float zmm1_5[0x4] = *(arg5 + 0x1c)
    float temp0_42[0x4] = _mm_add_ps(temp0_40, temp0_39)
    float zmm0_4[0x4] = *(arg5 + 0x18)
    float temp0_43[0x4] = _mm_mul_ps(zmm10, temp0_41)
    int64_t var_6b8_1 = 0
    zmm2_1 = *(arg5 + 0x20)
    char rax_117 = *(arg3 + 0xc8)
    float var_658_1[0x4] = temp0_13
    float temp0_44[0x4] = _mm_add_ps(temp0_43, temp0_42)
    float var_6f8[0x4] = temp0_13
    float var_6b0_1 = zmm0_4[0]
    float var_6ac_1 = zmm1_5[0]
    float var_6a8_1 = zmm2_1[0]
    float var_628_1[0x4] = temp0_44
    float var_6c8_1[0x4] = temp0_44
    float var_648_1[0x4] = temp0_23
    float var_638_1[0x4] = temp0_35
    float var_6e8_1[0x4] = temp0_23
    float var_6d8_1[0x4] = temp0_35
    char var_6a4_1 = 1
    char var_6a2_1 = rax_117
    int64_t var_920 = 0
    
    if (*(arg3 + 0xa8) == 0)
        r8_11 = &var_920
    
    var_a78.q = &var_6f8
    var_a80.q = arg4 + 0x48
    var_a88.d = *(arg4 + 0x98)
    var_a90.q = r8_11
    zmm2_1, zmm3_1, zmm11, zmm12, zmm13 = sub_141b55710(*(arg1 + 0x238), arg2, &var_808, &var_a38, 
        &var_8f8, var_a90, var_a88, var_a80, var_a78)
    sub_1405d1550(&var_920)
    var_808 = &data_142f18c08
    sub_1405d1550(&var_800)

if (*(arg2 + 0x1c4) != 0)
    sub_141096650(arg2)

int64_t var_3c0
sub_1405d1550(&var_3c0)
int64_t var_a68
void* var_a60
int128_t* var_a58
int32_t var_a50
void* var_a28

if (var_a47_1 != 0)
    if (data_143f2f0f0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2f0f0)
        
        if (data_143f2f0f0 == 0xffffffff)
            sub_140b58170(&data_143f2f0e8, "Renderer", 1)
            _Init_thread_footer(&data_143f2f0f0)
    
    int64_t rbx_18 = data_143f2f0e8
    j_sub_140b3db50()
    int64_t* rax_121 = sub_140b3da90(&data_143de7d78, rbx_18)
    var_a30.q = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
    
    if (var_a46_1 != 0)
        int64_t rcx_96 = *(arg3 + 0x78)
        int128_t zmm1_6 = data_142d3f5a0
        int64_t var_318 = rcx_96
        int32_t var_240_1 = 0
        int32_t var_23c
        __builtin_memset(&var_23c, 0xff, 0x14)
        int128_t var_228_1 = zmm1_6
        int64_t var_218
        __builtin_memset(&var_218, 0, 0x19)
        int64_t var_310_1 = 0
        int32_t var_308_1 = 0xffffffff
        int16_t var_304_1 = 0x500
        int64_t var_258
        __builtin_memset(&var_258, 0, 0x11)
        int32_t var_244_1 = 0
        bool var_1ff_1 = *(rcx_96 + 0x38) u> 1
        void var_300
        memset(&var_300, 0, 0xa8)
        int64_t rbx_21 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_123 = rbx_21 + 0x18
        
        if (rax_123 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x1a)
            rbx_21 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            rax_123 = rbx_21 + 0x18
        
        wchar16 const* const rcx_99 = u"GenerateLUT"
        *(arg2 + 0x30) = rax_123
        wchar16 const i_1
        
        do
            i_1 = *rcx_99
            *(rcx_99 + rbx_21 - u"GenerateLUT") = i_1
            rcx_99 = &rcx_99[1]
        while (i_1 != 0)
        void*** rcx_102 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_124 = &rcx_102[0x27]
        
        if (rax_124 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x140)
            rcx_102 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_124 = &rcx_102[0x27]
        
        *(arg2 + 0x30) = rax_124
        void**** rax_125 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_125 = rcx_102
        *(arg2 + 8) = &rcx_102[1]
        sub_1405d11b0(rcx_102, &var_318, rbx_21)
        *(arg2 + 0x1c4) = 1
        sub_1405d19b0(arg2, &var_318)
        int64_t var_208
        *(arg2 + 0x178) = var_208:7.b
        *(arg2 + 0x179) = 0
        *(arg2 + 0x1c4) = 1
        int128_t var_570
        __builtin_memset(&var_570, 0, 0x30)
        int64_t var_514
        __builtin_memset(&var_514, 0, 0x43)
        int128_t var_528_1 = zx.o(0)
        int16_t var_4d0_1 = 0
        sub_140fdc870(arg2, &var_570)
        int64_t var_540_1 = data_14395da00
        int64_t var_538_1 = data_14395da18
        int64_t var_530_1 = data_14395d9e8
        void* var_7c0
        sub_1419a2ec0(var_a30.q, &var_7c0, &data_143f5e630, 0)
        void var_668
        int128_t* rax_131 = sub_1419a2ec0(var_a30.q, &var_668, &data_143f5e530, 0)
        void* rbx_24 = *rax_131
        uint32_t var_a00
        var_a00.q = *(rax_131 + 8)
        void* var_750
        sub_1419a2ec0(var_a30.q, &var_750, &data_143f2d400, 0)
        void* rax_133 = var_750
        int64_t rcx_111 = 0
        var_570.q = data_143a2fe60
        void* rax_135 = var_7c0
        int128_t var_8d0
        __builtin_memcpy(&var_8d0, 
            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x20\x00\x00\x00\x20\x00\x"
        "00\x00", 
            0x18)
        
        if (rax_135 != 0)
            int64_t rdx_35 = sx.q(*(rax_135 + 0x10c))
            int64_t r8_14 = rdx_35
            void* var_7b8
            int64_t* rcx_112 = *(var_7b8 + 0x10)
            var_9e8.q = rcx_112
            int64_t rax_137 = rcx_112[3]
            
            if (*(rax_137 + (rdx_35 << 3)) == 0)
                sub_1419ccf30(rcx_112, rdx_35.d)
                r8_14 = rdx_35
                rax_137 = *(var_9e8.q + 0x18)
            
            rcx_111 = *(rax_137 + (r8_14 << 3))
        
        var_570:8.q = rcx_111
        int64_t rax_138 = 0
        
        if (rbx_24 != 0)
            int64_t rdx_36 = sx.q(*(rbx_24 + 0x10c))
            int64_t r8_15 = rdx_36
            int64_t* rcx_115 = *(var_a00.q + 0x10)
            var_9e8.q = rcx_115
            int64_t rax_139 = rcx_115[3]
            
            if (*(rax_139 + (rdx_36 << 3)) == 0)
                sub_1419ccf30(rcx_115, rdx_36.d)
                r8_15 = rdx_36
                rax_139 = *(var_9e8.q + 0x18)
            
            rax_138 = *(rax_139 + (r8_15 << 3))
        
        int128_t var_550
        var_550:8.q = rax_138
        int64_t rax_140 = 0
        
        if (rax_133 != 0)
            int64_t rdx_37 = sx.q(*(rax_133 + 0x10c))
            int64_t r8_16 = rdx_37
            void* var_748
            int64_t* rcx_118 = *(var_748 + 0x10)
            var_9e8.q = rcx_118
            int64_t rax_142 = rcx_118[3]
            
            if (*(rax_142 + (rdx_37 << 3)) == 0)
                sub_1419ccf30(rcx_118, rdx_37.d)
                r8_16 = rdx_37
                rax_142 = *(var_9e8.q + 0x18)
            
            rax_140 = *(rax_142 + (r8_16 << 3))
        
        var_550.q = rax_140
        int32_t var_518_1 = 1
        sub_1419870b0(arg2, &var_570, 2)
        int32_t rax_144 = var_8d0:0xc.d - var_8d0.d
        void* rcx_121 = var_7c0
        int64_t var_a10
        var_a10.d = rax_144
        var_a10:4.d = rax_144
        int64_t var_7d8 = var_a10
        int32_t var_7d0_1 = rax_144
        sub_1412f1e20(rcx_121, arg2, &var_8d0, &var_7d8)
        
        if (rbx_24 != 0)
            int32_t var_9a0 = var_8d0:8.d
            uint32_t count = zx.d(*(rbx_24 + 0x11c))
            
            if (count u>= 4)
                count = 4
            
            uint32_t count_1 = count
            
            if (count != 0)
                var_9e8 = zx.d(*(rbx_24 + 0x11a))
                int64_t var_a18
                var_a18.d = zx.d(*(rbx_24 + 0x118))
                int64_t rcx_124 = *(arg2 + 0x1a8)
                int64_t rbx_27 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                uint64_t count_2 = zx.q(count)
                int64_t rcx_125 = count_2 + rbx_27
                
                if (rcx_125 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, count + 0x10)
                    count = count_1
                    rbx_27 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
                    rcx_125 = count_2 + rbx_27
                
                *(arg2 + 0x30) = rcx_125
                memcpy(rbx_27, &var_9a0, count)
                void*** rcx_131 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_146 = &rcx_131[6]
                
                if (rax_146 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rcx_131 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_146 = &rcx_131[6]
                
                *(arg2 + 0x30) = rax_146
                void** rax_147 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_147 = rcx_131
                *(arg2 + 8) = &rcx_131[1]
                rcx_131[1] = 0
                *rcx_131 = &data_142d549d8
                rcx_131[2] = rcx_124
                rcx_131[4].d = var_a18.d
                *(rcx_131 + 0x24) = var_9e8
                rcx_131[5].d = count_1
                rcx_131[3] = rbx_27
        
        sub_141b66560(rax_133, arg2)
        int128_t var_688 = var_8d0
        int32_t var_8c0
        int64_t var_678_1 = var_8c0.q
        sub_14243f510(arg2, &var_688)
        sub_141096650(arg2)
        int64_t rax_153 = *(arg3 + 0x80)
        int64_t* rcx_138 = *(arg3 + 0x78)
        void*** rbx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        int128_t var_838_1 = data_142d57d10
        int128_t zmm0_9 = data_142d57920
        void* rax_154 = &rbx_32[0xa]
        int128_t var_828_1 = data_142d3f800
        
        if (rax_154 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x58)
            rbx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_154 = &rbx_32[0xa]
        
        *(arg2 + 0x30) = rax_154
        int64_t* rax_155 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_155 = rbx_32
        *(arg2 + 8) = &rbx_32[1]
        rbx_32[1] = 0
        *rbx_32 = &data_142d56628
        rbx_32[2].d = var_838_1.d
        __builtin_memset(rbx_32 + 0x14, 0xff, 0x20)
        *(rbx_32 + 0x34) = zmm0_9:4.d
        rbx_32[7].d = zmm0_9:8.d
        *(rbx_32 + 0x3c) = zmm0_9:0xc.d
        rbx_32[9] = rax_153
        rbx_32[8] = rcx_138
        
        if ((*(*rcx_138 + 8))() == 0)
            int64_t* rcx_140 = rbx_32[8]
            
            if ((*(*rcx_140 + 0x18))(rcx_140) == 0)
                int64_t* rcx_141 = rbx_32[8]
                
                if ((*(*rcx_141 + 0x20))(rcx_141) == 0)
                    int64_t* rcx_142 = rbx_32[8]
                    (*(*rcx_142 + 0x10))(rcx_142)
        
        int64_t* rcx_143 = rbx_32[9]
        
        if ((*(*rcx_143 + 8))(rcx_143) == 0)
            int64_t* rcx_144 = rbx_32[9]
            
            if ((*(*rcx_144 + 0x18))(rcx_144) == 0)
                int64_t* rcx_145 = rbx_32[9]
                
                if ((*(*rcx_145 + 0x20))(rcx_145) == 0)
                    int64_t* rcx_146 = rbx_32[9]
                    (*(*rcx_146 + 0x10))(rcx_146)
        
        int64_t var_210
        sub_1405d1550(&var_210)
    
    void*** rbx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int128_t var_898_1 = data_142d57d10
    int128_t zmm0_6 = data_142d57920
    int128_t var_888_1 = data_142d3f800
    int64_t* rcx_148 = *(*(arg3 + 0x60) + 8)
    void* rax_177 = &rbx_37[0xa]
    
    if (rax_177 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x58)
        rbx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_177 = &rbx_37[0xa]
    
    *(arg2 + 0x30) = rax_177
    int64_t* rax_178 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_178 = rbx_37
    *(arg2 + 8) = &rbx_37[1]
    rbx_37[1] = 0
    *rbx_37 = &data_142d56628
    rbx_37[2].d = var_898_1.d
    __builtin_memset(rbx_37 + 0x14, 0xff, 0x20)
    *(rbx_37 + 0x34) = zmm0_6:4.d
    rbx_37[7].d = zmm0_6:8.d
    *(rbx_37 + 0x3c) = zmm0_6:0xc.d
    rbx_37[8] = rcx_148
    rbx_37[9] = rcx_148
    
    if ((*(*rcx_148 + 8))() == 0)
        int64_t* rcx_150 = rbx_37[8]
        
        if ((*(*rcx_150 + 0x18))(rcx_150) == 0)
            int64_t* rcx_151 = rbx_37[8]
            
            if ((*(*rcx_151 + 0x20))(rcx_151) == 0)
                int64_t* rcx_152 = rbx_37[8]
                (*(*rcx_152 + 0x10))(rcx_152)
    
    int64_t* rcx_153 = rbx_37[9]
    
    if ((*(*rcx_153 + 8))(rcx_153) == 0)
        int64_t* rcx_154 = rbx_37[9]
        
        if ((*(*rcx_154 + 0x18))(rcx_154) == 0)
            int64_t* rcx_155 = rbx_37[9]
            
            if ((*(*rcx_155 + 0x20))(rcx_155) == 0)
                int64_t* rcx_156 = rbx_37[9]
                (*(*rcx_156 + 0x10))(rcx_156)
    
    int64_t rax_198 = sx.q(data_143f0f1a0)
    
    if (((rax_198 - 2).d & 0xfffffffd) == 0
            || ((*(rax_198 * 0x14 + &data_143f025fc) u>> 0x12).b & 1) != 0)
        int64_t var_790 = *(arg3 + 0x60)
        var_a90.q = u"UIRTWriteMask"
        var_a98.d = 0
        sub_14140e510(arg2, var_a30.q, &var_790, arg3 + 0x68, var_a98.d, var_a90)
    
    int64_t** rbx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_159 = &rbx_42[1]
    
    if (rcx_159 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_42 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_159 = &rbx_42[1]
    
    *(arg2 + 0x30) = rcx_159
    *rbx_42 = r13_3
    void*** rcx_163 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_204 = &rcx_163[5]
    
    if (rax_204 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_163 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_204 = &rcx_163[5]
    
    *(arg2 + 0x30) = rax_204
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rcx_163
    *(arg2 + 8) = &rcx_163[1]
    rcx_163[1] = 0
    *rcx_163 = &data_142d549c8
    rcx_163[3] = rbx_42
    rcx_163[2].d = 1
    rcx_163[4].d = 1
    int64_t* rbx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rcx_167 = *(*(arg3 + 0x70) + 8)
    void* rax_208 = &rbx_47[1]
    
    if (rax_208 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rbx_47 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_208 = &rbx_47[1]
    
    *(arg2 + 0x30) = rax_208
    *rbx_47 = rcx_167
    void*** rcx_171 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_209 = &rcx_171[5]
    
    if (rax_209 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_171 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_209 = &rcx_171[5]
    
    *(arg2 + 0x30) = rax_209
    void**** rax_210 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    var_a90.d = 0xffffffff
    var_a98.d = 0
    *rax_210 = rcx_171
    *(arg2 + 8) = &rcx_171[1]
    rcx_171[1] = 0
    *rcx_171 = &data_142d549c8
    rcx_171[2].d = 1
    rcx_171[3] = rbx_47
    rcx_171[4].d = 0
    void var_1f8
    sub_1414bfe70(&var_1f8, r13_3, 5, 0, var_a98.b, var_a90)
    int64_t rbx_52 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_212 = rbx_52 + 0x1e
    
    if (rax_212 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x20)
        rbx_52 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_212 = rbx_52 + 0x1e
    
    wchar16 const* const rcx_177 = u"SlateComposite"
    *(arg2 + 0x30) = rax_212
    wchar16 const i_2
    
    do
        i_2 = *rcx_177
        *(rcx_177 + rbx_52 - u"SlateComposite") = i_2
        rcx_177 = &rcx_177[1]
    while (i_2 != 0)
    void*** rcx_180 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_213 = &rcx_180[0x27]
    
    if (rax_213 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_180 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_213 = &rcx_180[0x27]
    
    *(arg2 + 0x30) = rax_213
    void**** rax_214 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_214 = rcx_180
    *(arg2 + 8) = &rcx_180[1]
    sub_1405d11b0(rcx_180, &var_1f8, rbx_52)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_1f8)
    char var_e1
    *(arg2 + 0x178) = var_e1
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1
    int128_t var_618
    __builtin_memset(&var_618, 0, 0x30)
    int64_t var_5bc
    __builtin_memset(&var_5bc, 0, 0x43)
    int128_t var_5d0_1 = zx.o(0)
    int16_t var_578_1 = 0
    sub_140fdc870(arg2, &var_618)
    int64_t var_5e8_1 = data_14395da00
    int64_t var_5e0_1 = data_14395da18
    int64_t var_5d8_1 = data_14395d9e8
    int128_t var_738
    sub_1419a2ec0(var_a30.q, &var_738, &data_143f55f90, 0)
    int64_t rax_220 = sx.q(data_143f0f1a0)
    var_9e8.o = var_738
    void** var_8b8
    int64_t var_788
    int32_t rax_224
    
    if (((rax_220 - 2).d & 0xfffffffd) == 0
            || ((*(rax_220 * 0x14 + &data_143f025fc) u>> 0x12).b & 1) != 0)
        rbx_11 = *(*(arg3 + 0x68) + 8)
        var_8b8 = rbx_11
        
        if (rbx_11 != 0)
            rbx_11[1].d += 1
            r13_3 = var_9b0
            rbx_11 = var_8b8
        
        rax_224 = 0x20
    else
        var_788 = 0
        rbx_11 = nullptr
        rax_224 = 0x40
    
    r12_2 |= rax_224
    
    if ((r12_2.b & 0x40) != 0)
        r12_2 &= 0xffffffbf
        sub_1405d1550(&var_788)
    
    if ((r12_2.b & 0x20) != 0)
        r12_2 &= 0xffffffdf
        sub_1405d1550(&var_8b8)
    
    int64_t* rcx_190 = var_a30.q
    int128_t zmm6_3
    int128_t var_5f8
    
    if (rcx_13 - 5 u<= 1)
        void* var_7a0
        sub_1419a2ec0(rcx_190, &var_7a0, &data_143f2ef50, 0)
        var_618.q = data_1439c9210
        void* rax_234 = sub_140790e00(&var_9e8)
        void* rcx_197 = var_7a0
        var_618:8.q = rax_234
        int64_t rax_235 = 0
        void* var_798
        
        if (rcx_197 != 0)
            rax_235 = sub_1410970c0(*(var_798 + 0x10), *(rcx_197 + 0x10c))
        var_5f8.q = rax_235
        int32_t var_5c0_2 = 0
        sub_1419870b0(arg2, &var_618, 2)
        var_a90.q = *(arg3 + 0x80)
        zmm6_3 = sub_141b65b20(var_7a0, arg2, *(*(arg3 + 0x60) + 8), rbx_11, *(*(arg3 + 0x70) + 8), 
            var_a90)
    else
        void* var_7b0
        sub_1419a2ec0(rcx_190, &var_7b0, &data_143f2edf0, 0)
        var_618.q = data_1439c9210
        void* rax_228 = sub_140790e00(&var_9e8)
        void* rcx_192 = var_7b0
        var_618:8.q = rax_228
        int64_t rax_229 = 0
        void* var_7a8
        
        if (rcx_192 != 0)
            rax_229 = sub_1410970c0(*(var_7a8 + 0x10), *(rcx_192 + 0x10c))
        var_5f8.q = rax_229
        int32_t var_5c0_1 = 0
        sub_1419870b0(arg2, &var_618, 2)
        var_a90.q = *(arg3 + 0x80)
        zmm6_3 = sub_141b66040(var_7b0, arg2, *(*(arg3 + 0x60) + 8), rbx_11, *(*(arg3 + 0x70) + 8), 
            var_a90)
    zmm3_1 = zmm11
    zmm2_1 = zmm11
    var_a28:4.d = rsi_3
    int32_t var_a2c_3 = rsi_3
    var_a50 = 1
    int128_t var_698
    var_a58 = &var_698
    var_a28.d = rax_47
    var_a60 = var_a28
    var_a68 = rax_47.q
    var_a70.d = zmm12
    int64_t r8_26 = *rax_121
    var_a78 = zmm13
    var_a80.d = zmm11[0]
    var_a88.d = zmm11[0]
    var_a90.d = zmm12
    int64_t var_a98_2
    var_a98_2.d = zmm13
    var_698 = zmm6_3
    (*(r8_26 + 0xd0))(rax_121, arg2, r8_26, zmm3_1, var_a98_2, var_a90, var_a88, var_a80, var_a78, 
        var_a70, var_a68, var_a60, var_a58, var_a50, var_a48)
    sub_141096650(arg2)
    void var_f0
    sub_1405d1550(&var_f0)
    sub_1405d16e0(&var_a38, r13_3)

void* const var_908

if (var_a48 != 0 || data_143f5b298 == 0)
    rbx_11.b = 0
else
    int64_t* rcx_206 = *(arg3 + 0xc0)
    r12_2 |= 0x80
    void* rax_243
    
    if (rcx_206 != 0)
        rax_243 = (**rcx_206)(rcx_206)
    
    if (rcx_206 == 0 || rax_243 == 0)
        var_908 = nullptr
        rbx_11.b = 0
    else
        void* rax_244 = *(rax_243 + 8)
        var_908 = rax_244
        
        if (rax_244 == 0)
            rbx_11.b = 0
        else
            *(rax_244 + 8) += 1
            
            if (rax_244 == 0 || *(data_143f5b298 + 0xaf8) == 0)
                rbx_11.b = 0
            else
                rbx_11.b = 1

if (r12_2.b s< 0)
    sub_1405d1550(&var_908)

if (rbx_11.b != 0)
    int64_t* rcx_208 = *(arg3 + 0xc0)
    var_a28.d = (*(arg4 + 0x7a0)).d
    var_a28:4.d = (*(arg4 + 0x7a4)).d
    int64_t* r12_3 = *(data_143f5b298 + 0xaf8)
    void* rax_249
    
    if (rcx_208 != 0)
        rax_249 = (**rcx_208)(rcx_208)
    
    void* const var_990
    void* const rbx_56
    
    if (rcx_208 == 0 || rax_249 == 0)
        rbx_56 = nullptr
        var_990 = nullptr
    else
        rbx_56 = *(rax_249 + 8)
        var_990 = rbx_56
        
        if (rbx_56 != 0)
            *(rbx_56 + 8) += 1
            rbx_56 = var_990
    
    int64_t* rcx_209 = data_143f0f180
    int64_t var_900
    (*(*rcx_209 + 0x338))(rcx_209, &var_900, *(arg3 + 0x50))
    (*(*r12_3 + 0xb0))(r12_3, arg2, var_900, rbx_56, var_a28, var_a90, var_a88, var_a80, var_a78, 
        var_a70, var_a68, var_a60, var_a58, var_a50, var_a48)
    sub_1405d1550(&var_900)
    sub_1405d1550(&var_990)

int64_t* rax_252 = var_a38
void** rbx_59 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_213 = &rbx_59[1]

if (rcx_213 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_59 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_213 = &rbx_59[1]

*(arg2 + 0x30) = rcx_213
*rbx_59 = rax_252
int64_t* rcx_217 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_253 = &rcx_217[5]

if (rax_253 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_217 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_253 = &rcx_217[5]

*(arg2 + 0x30) = rax_253
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_217
*(arg2 + 8) = &rcx_217[1]
rcx_217[1] = 0
*rcx_217 = &data_142d549c8
rcx_217[2].d = 1
rcx_217[3] = rbx_59
void* rbx_62 = arg1
rcx_217[4].d = 0
rcx_217.b = 0
int64_t rax_257 = *(arg5 + 0x10)
void* r13_4 = rbx_62 + 0x78
char var_a48_1 = 0
*(r13_4 + 0x14) += 1
int32_t rax_258 = *(r13_4 + 8)
int32_t rdx_66 = *(r13_4 + 0x14)
int64_t r12_4 = sx.q(rax_258 - 1)

if (rax_258 - 1 s>= 0)
    int64_t** rbx_64 = r12_4 << 4
    int64_t temp2_1
    
    do
        rcx_217 = *r13_4
        
        if (*(rbx_64 + rcx_217 + 8) == 0)
            rcx_217.b = 1
            var_a48_1 = 1
        else
            rcx_217 = *(rbx_64 + rcx_217)
            
            if (rcx_217 == 0)
                rcx_217.b = 1
                var_a48_1 = 1
            else
                char rax_261
                rax_261, rcx_217 = (*(*rcx_217 + 0x50))(rcx_217, rax_257, &var_a38)
                
                if (rax_261 != 0)
                    rcx_217 = zx.q(var_a48_1)
                else
                    rcx_217.b = 1
                    var_a48_1 = 1
        
        rbx_64 -= 0x10
        temp2_1 = r12_4
        r12_4 -= 1
    while (temp2_1 - 1 s>= 0)
    rdx_66 = *(r13_4 + 0x14)
    rbx_62 = arg1

*(r13_4 + 0x14) = rdx_66 - 1

if (rcx_217.b != 0)
    sub_140599630(r13_4, 0)

sub_1405d1550(&var_9b0)
sub_1405d1550(&var_8f8)
sub_1405d1550(&var_a38)
sub_1405d1550(&var_9a8)
sub_140b37f60("Slate")

if (*(rbx_62 + 0x2f0) != 0)
    int64_t* rcx_226 = data_143f0f180
    void* var_8f0
    (*(*rcx_226 + 0x338))(rcx_226, &var_8f0, *(arg3 + 0x50))
    int32_t r8_31 = *(rbx_62 + 0x2f4)
    int32_t r10_1 = *(rbx_62 + 0x2f8)
    void* r13_5 = var_8f0
    int32_t rax_264 = *(rbx_62 + 0x300)
    int32_t rcx_227 = *(rbx_62 + 0x2fc)
    int32_t r9_9 = *(r13_5 + 0x64)
    int32_t rdx_69 = *(r13_5 + 0x60)
    
    if (rax_264 s<= r9_9)
        r9_9 = rax_264
    
    int32_t var_8a4_1 = r10_1
    
    if (rcx_227 s<= rdx_69)
        rdx_69 = rcx_227
    
    if (r8_31 s>= rdx_69)
        rdx_69 = r8_31
    
    int32_t var_8a0_1 = rdx_69
    
    if (r10_1 s>= r9_9)
        r9_9 = r10_1
    
    int32_t var_89c_1 = r9_9
    
    if (rdx_69 != r8_31 || r9_9 != r10_1)
        int64_t rax_265 = *(rbx_62 + 0x308)
        int32_t r12_5 = data_143f029c8
        int32_t var_96c_1 = 0x467a0000
        int64_t var_978 = 6
        char var_970_1 = 1
        int16_t var_968_1 = 0
        sub_140b34200("FlushRHIThreadTotal", r12_5)
        
        if (*(arg2 + 0x14) u> 0)
            zmm2_1, zmm3_1 = j_sub_14196ef60(&data_143f02b88, arg2, zmm2_1, zmm3_1)
        
        sub_14198b230()
        
        if (data_143f01c92 != 0)
            sub_14198b3f0()
        
        int64_t rdx_72
        rdx_72.b = 1
        sub_14198b7d0()
        sub_140b38680("FlushRHIThreadTotal", r12_5)
        int64_t* rcx_231 = data_143f0f180
        int32_t var_708_1 = var_968_1.d
        int128_t var_718 = var_978.o
        int128_t zmm0_10 = r8_31.o
        var_978.o = zmm0_10
        (*(*rcx_231 + 0x2f8))(zmm0_10, r13_5, &var_978, rax_265, &var_718, var_a90, var_a88, 
            var_a80, var_a78, var_a70, var_a68, var_a60, var_a58, var_a50, var_a48_1)
    
    *(rbx_62 + 0x2f0) = 0
    *(rbx_62 + 0x308) = 0
    sub_1405d1550(&var_8f0)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t r8_33
r8_33.b = 1
sub_14196d110(arg2, *(arg3 + 0x50), r8_33, zx.q(*(arg5 + 0x24)), zmm2_1, zmm3_1, var_a88, var_a80, 
    var_a78, var_a70, var_a68, var_a60, var_a58, var_a50, var_a48_1)
int64_t performanceCount_3
QueryPerformanceCounter(&performanceCount_3)
int32_t performanceCount_4 = performanceCount_3.d
char var_a3e = 0
int32_t rcx_237 = performanceCount_4 - performanceCount.d
int32_t result_2 = performanceCount_4 - data_143f2f0b0
data_143f2f0b0 = performanceCount_4
char* var_720 = &var_a3e
data_143f138f0 = rcx_237
void*** (* var_728)() = sub_140a3f720
void* rax_269 = sub_140a756e0(&var_728, &data_14399e8cc)
data_143f138c8 = *(rax_269 + 0x10)
data_143f138d0 += data_143f138f0
*(rax_269 + 0x10) = 0
int32_t rdx_78 = data_143f138c8 + data_143f138cc + data_143f138d0
uint64_t result = zx.q(result_2 - rdx_78)
data_143f138c8 = 0
data_143f138d8 = 0
data_143f138cc = 0

if (result_2 u<= rdx_78)
    result = zx.q(result_2)

data_143f138d0 = 0
bool cond:7 = data_143f01c92 == 0
data_143f138e4 = result.d
data_143f138e0 = 0

if (not(cond:7))
    if (*(arg2 + 0x10) == 0)
        void*** rcx_246 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_271 = &rcx_246[3]
        
        if (rax_271 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x20)
            rcx_246 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_271 = &rcx_246[3]
        
        *(arg2 + 0x30) = rax_271
        int64_t* rax_272 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_272 = rcx_246
        *(arg2 + 8) = &rcx_246[1]
        rcx_246[1] = 0
        result = &data_14306cf50
        *rcx_246 = &data_14306cf50
    else
        int64_t performanceCount_1[0x2]
        QueryPerformanceCounter(&performanceCount_1)
        result = performanceCount_1[0]
        int32_t rdx_80 = data_143f01c98 + result.d - data_143f01ca0
        data_143f01ca0 = result.d
        data_143f01c98 = rdx_80
        data_143f138e8
        data_143f138e8 = rdx_80 - data_143f01c9c
        data_143f01c98 = 0
        data_143f01c9c = 0

if (var_940 == 0)
    int64_t* rax_274 = var_958
    char var_940_1 = 1
    rax_274[4].d -= 1
    int64_t* rcx_250 = var_958
    
    if (rcx_2 != rcx_250[2])
        sub_140b16b40(rcx_250, rcx_2)
        rcx_250 = var_958
    
    *rcx_250 = rcx_1
    result = result_1
    var_958[3] = result

__security_check_cookie(rax_1 ^ &var_ab8)
return result
