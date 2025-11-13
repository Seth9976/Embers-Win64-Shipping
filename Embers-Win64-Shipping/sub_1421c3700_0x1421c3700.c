// 函数: sub_1421c3700
// 地址: 0x1421c3700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1130)
void var_1138
int64_t rax_1 = __security_cookie ^ &var_1138
void* rdi = arg2
void* r14 = arg1
char var_10e8
char* var_e60 = &var_10e8
void*** (* var_e68)() = j_sub_140597fc0
var_10e8 = 0
int64_t* rax_4 = sub_140a756e0(&var_e68, &data_143958018) + 0x10
int64_t* var_1038 = rax_4
int64_t rcx_1 = *rax_4
int64_t rcx_2 = rax_4[2]
char var_1020 = 0
int64_t result_1 = rax_4[3]
rax_4[3] = &var_1038
int64_t* rax_5 = var_1038
rax_5[4].d += 1
void* rcx_3 = *(r14 + 0x80)
int128_t zmm8 = *(data_143f4dd68 + 4)
int64_t rax_7 = sx.q(*(rcx_3 + 0xb0))
int32_t var_10dc = zmm8.d
void* rdx_1 = rax_7 * 0x38 + rcx_3
int64_t rsi = *(rdx_1 + 0x10)
int64_t var_10a0 = rsi
void* r15_1 = (rax_7 ^ 1) * 0x38 + rcx_3
int64_t rax_9 = *(rdx_1 + 0x20)
int64_t* r12 = *(r15_1 + 0x10)
int64_t* r13 = *(r15_1 + 0x20)
int64_t* var_ec8 = r12
int64_t* var_ec0 = r13
int128_t zmm1_1
uint128_t zmm6

if (*(rdx_1 + 0x30) == 0)
    void*** rcx_6 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_6[3]
    
    if (rax_10 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_6 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_6[3]
    
    *(rdi + 0x30) = rax_10
    int64_t* rax_11 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_11 = rcx_6
    *(rdi + 8) = &rcx_6[1]
    rcx_6[1] = 0
    *rcx_6 = &data_143009ba0
    rcx_6[2] = rsi
    void*** rcx_12 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_13 = &rcx_12[3]
    
    if (rax_13 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_12 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_13 = &rcx_12[3]
    
    *(rdi + 0x30) = rax_13
    int64_t* rax_14 = *(rdi + 8)
    *(rdi + 0x14) += 1
    zmm1_1 = data_142d3f5a0
    *rax_14 = rcx_12
    *(rdi + 8) = &rcx_12[1]
    rcx_12[1] = 0
    *rcx_12 = &data_143009ba0
    rcx_12[2] = rax_9
    int64_t var_978 = var_10a0
    int32_t var_8a0_1 = 0
    int64_t var_970_1 = 0
    int64_t var_958_1 = 0
    int64_t var_8b8
    __builtin_memset(&var_8b8, 0, 0x11)
    int32_t var_8a4_1 = 0
    int64_t var_960_1 = rax_9
    int32_t var_89c
    __builtin_memset(&var_89c, 0xff, 0x14)
    int128_t var_888_1 = zmm1_1
    int64_t var_878
    __builtin_memset(&var_878, 0, 0x1a)
    int32_t var_968_1 = 0xffffffff
    int16_t var_964_1 = 0x900
    int32_t var_950_1 = 0xffffffff
    int16_t var_94c_1 = 0x900
    void var_948
    memset(&var_948, 0, 0x90)
    int64_t rsi_4 = (*(rdi + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_18 = rsi_4 + 0x3e
    
    if (rax_18 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x40)
        rsi_4 = (*(rdi + 0x30) + 1) & 0xfffffffffffffffe
        rax_18 = rsi_4 + 0x3e
    
    wchar16 const* const rcx_18 = u"GPUParticlesClearStateTextures"
    *(rdi + 0x30) = rax_18
    wchar16 const i
    
    do
        i = *rcx_18
        *(rcx_18 + rsi_4 - u"GPUParticlesClearStateTextures") = i
        rcx_18 = &rcx_18[1]
    while (i != 0)
    void*** rcx_21 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_19 = &rcx_21[0x27]
    
    if (rax_19 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x140)
        rcx_21 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_19 = &rcx_21[0x27]
    
    *(rdi + 0x30) = rax_19
    void**** rax_20 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_20 = rcx_21
    *(rdi + 8) = &rcx_21[1]
    sub_1405d11b0(rcx_21, &var_978, rsi_4)
    *(rdi + 0x1c4) = 1
    sub_1405d19b0(rdi, &var_978)
    int64_t var_868
    *(rdi + 0x178) = var_868:7.b
    *(rdi + 0x179) = 0
    *(rdi + 0x1c4) = 1
    sub_141096650(rdi)
    int64_t var_870
    zmm6 = sub_1405d1550(&var_870)
    *(rdx_1 + 0x30) = 1
    int64_t rsi_7 = var_10a0
    void*** rcx_30 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_24 = &rcx_30[3]
    
    if (rax_24 u> *(rdi + 0x38))
        zmm6 = sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_30 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_24 = &rcx_30[3]
    
    *(rdi + 0x30) = rax_24
    int64_t* rax_25 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_25 = rcx_30
    *(rdi + 8) = &rcx_30[1]
    rcx_30[1] = 0
    *rcx_30 = &data_143009bb0
    rcx_30[2] = rsi_7
    void*** rcx_36 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_27 = &rcx_36[3]
    
    if (rax_27 u> *(rdi + 0x38))
        zmm6 = sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_36 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_27 = &rcx_36[3]
    
    *(rdi + 0x30) = rax_27
    int64_t* rax_28 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_28 = rcx_36
    *(rdi + 8) = &rcx_36[1]
    rcx_36[1] = 0
    *rcx_36 = &data_143009bb0
    rcx_36[2] = rax_9

if (*(r15_1 + 0x30) == 0)
    void*** rcx_42 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_30 = &rcx_42[3]
    
    if (rax_30 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_42 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_30 = &rcx_42[3]
    
    *(rdi + 0x30) = rax_30
    int64_t* rax_31 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_31 = rcx_42
    *(rdi + 8) = &rcx_42[1]
    *rcx_42 = &data_143009ba0
    rcx_42[2] = r12
    rcx_42[1] = 0
    void*** rcx_48 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_33 = &rcx_48[3]
    
    if (rax_33 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_48 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_33 = &rcx_48[3]
    
    *(rdi + 0x30) = rax_33
    int64_t* rax_34 = *(rdi + 8)
    *(rdi + 0x14) += 1
    zmm1_1 = data_142d3f5a0
    *rax_34 = rcx_48
    *(rdi + 8) = &rcx_48[1]
    *rcx_48 = &data_143009ba0
    rcx_48[2] = r13
    rcx_48[1] = 0
    int32_t var_780_1 = 0
    int32_t var_77c
    __builtin_memset(&var_77c, 0xff, 0x14)
    int128_t var_768_1 = zmm1_1
    int64_t var_758
    __builtin_memset(&var_758, 0, 0x1a)
    int64_t* var_858 = r12
    int64_t var_850_1 = 0
    int32_t var_848_1 = 0xffffffff
    int16_t var_844_1 = 0x900
    int64_t* var_840_1 = r13
    int64_t var_838_1 = 0
    int32_t var_830_1 = 0xffffffff
    int16_t var_82c_1 = 0x900
    int64_t var_798
    __builtin_memset(&var_798, 0, 0x11)
    int32_t var_784_1 = 0
    void var_828
    memset(&var_828, 0, 0x90)
    int64_t rsi_11 = (*(rdi + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_36 = rsi_11 + 0x4e
    
    if (rax_36 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x50)
        rsi_11 = (*(rdi + 0x30) + 1) & 0xfffffffffffffffe
        rax_36 = rsi_11 + 0x4e
    
    wchar16 const* const rcx_54 = u"GPUParticlesClearPreviousStateTextures"
    *(rdi + 0x30) = rax_36
    wchar16 const i_1
    
    do
        i_1 = *rcx_54
        *(rsi_11 - u"GPUParticlesClearPreviousStateTextures" + rcx_54) = i_1
        rcx_54 = &rcx_54[1]
    while (i_1 != 0)
    void*** rcx_57 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_37 = &rcx_57[0x27]
    
    if (rax_37 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x140)
        rcx_57 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_37 = &rcx_57[0x27]
    
    *(rdi + 0x30) = rax_37
    void**** rax_38 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_38 = rcx_57
    *(rdi + 8) = &rcx_57[1]
    sub_1405d11b0(rcx_57, &var_858, rsi_11)
    *(rdi + 0x1c4) = 1
    sub_1405d19b0(rdi, &var_858)
    int64_t var_748
    *(rdi + 0x178) = var_748:7.b
    *(rdi + 0x179) = 0
    *(rdi + 0x1c4) = 1
    sub_141096650(rdi)
    int64_t r14_1 = *(r15_1 + 0x10)
    void*** rsi_16 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    int128_t var_fc0_1 = data_142d57d10
    int128_t zmm0_2 = data_142d57920
    void* rax_41 = &rsi_16[0xa]
    int128_t var_fb0_1 = data_142d3f800
    
    if (rax_41 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x58)
        rsi_16 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_41 = &rsi_16[0xa]
    
    *(rdi + 0x30) = rax_41
    int64_t* rax_42 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_42 = rsi_16
    *(rdi + 8) = &rsi_16[1]
    rsi_16[1] = 0
    *rsi_16 = &data_142d56628
    rsi_16[2].d = var_fc0_1.d
    __builtin_memset(rsi_16 + 0x14, 0xff, 0x20)
    *(rsi_16 + 0x34) = zmm0_2:4.d
    rsi_16[7].d = zmm0_2:8.d
    *(rsi_16 + 0x3c) = zmm0_2:0xc.d
    rsi_16[8] = r12
    rsi_16[9] = r14_1
    
    if ((*(*r12 + 8))(r12) == 0)
        int64_t* rcx_65 = rsi_16[8]
        
        if ((*(*rcx_65 + 0x18))(rcx_65) == 0)
            int64_t* rcx_66 = rsi_16[8]
            
            if ((*(*rcx_66 + 0x20))(rcx_66) == 0)
                int64_t* rcx_67 = rsi_16[8]
                (*(*rcx_67 + 0x10))(rcx_67)
    
    int64_t* rcx_68 = rsi_16[9]
    
    if ((*(*rcx_68 + 8))(rcx_68) == 0)
        int64_t* rcx_69 = rsi_16[9]
        
        if ((*(*rcx_69 + 0x18))(rcx_69) == 0)
            int64_t* rcx_70 = rsi_16[9]
            
            if ((*(*rcx_70 + 0x20))(rcx_70) == 0)
                int64_t* rcx_71 = rsi_16[9]
                (*(*rcx_71 + 0x10))(rcx_71)
    
    int64_t r14_2 = *(r15_1 + 0x20)
    void*** rsi_21 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    int128_t var_f90_1 = data_142d57d10
    zmm0_2 = data_142d57920
    void* rax_62 = &rsi_21[0xa]
    int128_t var_f80_1 = data_142d3f800
    
    if (rax_62 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x58)
        rsi_21 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_62 = &rsi_21[0xa]
    
    *(rdi + 0x30) = rax_62
    int64_t* rax_63 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_63 = rsi_21
    *(rdi + 8) = &rsi_21[1]
    rsi_21[1] = 0
    *rsi_21 = &data_142d56628
    rsi_21[2].d = var_f90_1.d
    __builtin_memset(rsi_21 + 0x14, 0xff, 0x20)
    *(rsi_21 + 0x34) = zmm0_2:4.d
    rsi_21[7].d = zmm0_2:8.d
    *(rsi_21 + 0x3c) = zmm0_2:0xc.d
    rsi_21[8] = r13
    rsi_21[9] = r14_2
    
    if ((*(*r13 + 8))(r13) == 0)
        int64_t* rcx_74 = rsi_21[8]
        
        if ((*(*rcx_74 + 0x18))(rcx_74) == 0)
            int64_t* rcx_75 = rsi_21[8]
            
            if ((*(*rcx_75 + 0x20))(rcx_75) == 0)
                int64_t* rcx_76 = rsi_21[8]
                (*(*rcx_76 + 0x10))(rcx_76)
    
    int64_t* rcx_77 = rsi_21[9]
    
    if ((*(*rcx_77 + 8))(rcx_77) == 0)
        int64_t* rcx_78 = rsi_21[9]
        
        if ((*(*rcx_78 + 0x18))(rcx_78) == 0)
            int64_t* rcx_79 = rsi_21[9]
            
            if ((*(*rcx_79 + 0x20))(rcx_79) == 0)
                int64_t* rcx_80 = rsi_21[9]
                (*(*rcx_80 + 0x10))(rcx_80)
    
    int64_t var_750
    zmm6 = sub_1405d1550(&var_750)
    *(r15_1 + 0x30) = 1
    void*** rcx_84 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_83 = &rcx_84[3]
    
    if (rax_83 u> *(rdi + 0x38))
        zmm6 = sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_84 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_83 = &rcx_84[3]
    
    *(rdi + 0x30) = rax_83
    void**** rax_84 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_84 = rcx_84
    *(rdi + 8) = &rcx_84[1]
    *rcx_84 = &data_143009bb0
    rcx_84[2] = r12
    rcx_84[1] = 0
    void*** rcx_90 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_86 = &rcx_90[3]
    
    if (rax_86 u> *(rdi + 0x38))
        zmm6 = sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_90 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_86 = &rcx_90[3]
    
    r14 = arg1
    *(rdi + 0x30) = rax_86
    void**** rax_87 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_87 = rcx_90
    *(rdi + 8) = &rcx_90[1]
    rcx_90[1] = 0
    *rcx_90 = &data_143009bb0
    rcx_90[2] = r13

int32_t rax_90 = *(r14 + 0x50) - *(r14 + 0x7c)
void* const rbx = nullptr
void* const var_1068 = nullptr
uint128_t zmm2
uint128_t zmm3

if (rax_90 s> 0)
    int32_t var_738
    sub_1421a9730(&var_738)
    zmm3 = data_14399f6e0
    zmm2 = data_14399f6f0
    zmm1_1 = data_14399f700
    int128_t zmm0_1 = data_14399f710
    int64_t* rcx_95 = data_143f0f180
    uint128_t var_728_1 = zmm3
    uint128_t var_718_1 = zmm2
    int128_t var_708_1 = zmm1_1
    int128_t var_6f8_1 = zmm0_1
    uint128_t var_628_1 = zmm3
    uint128_t var_618_1 = zmm2
    int128_t var_608_1 = zmm1_1
    int128_t var_5f8_1 = zmm0_1
    int128_t var_528
    __builtin_memcpy(&var_528, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
    "3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00"
    "00\x00\x00\x00\x00\x00\x00\x80\x3f", 
        0x80)
    uint128_t var_6e8_1 = zmm3
    uint128_t var_6d8_1 = zmm2
    int128_t var_6c8_1 = zmm1_1
    int128_t var_6b8_1 = zmm0_1
    uint128_t var_5e8_1 = zmm3
    uint128_t var_5d8_1 = zmm2
    int128_t var_5c8_1 = zmm1_1
    int128_t var_5b8_1 = zmm0_1
    uint128_t var_6a8_1 = zmm3
    uint128_t var_698_1 = zmm2
    int128_t var_688_1 = zmm1_1
    int128_t var_678_1 = zmm0_1
    uint128_t var_5a8_1 = zmm3
    uint128_t var_598_1 = zmm2
    int128_t var_588_1 = zmm1_1
    int128_t var_578_1 = zmm0_1
    uint128_t var_668_1 = zmm3
    uint128_t var_658_1 = zmm2
    int128_t var_648_1 = zmm1_1
    int128_t var_638_1 = zmm0_1
    uint128_t var_568_1 = zmm3
    uint128_t var_558_1 = zmm2
    int128_t var_548_1 = zmm1_1
    int128_t var_538_1 = zmm0_1
    var_738 = 0
    void* var_1010
    (*(*rcx_95 + 0xf8))(rcx_95, &var_1010, &var_738, &data_143f4e2c0, 1, 1)
    rbx = var_1010
    void* const var_1060 = rbx
    
    if (rbx != 0)
        *(rbx + 8) += 1
        rbx = var_1060
    
    sub_1405d1550(&var_1010)
    var_1068 = rbx
    var_1060 = nullptr
    zmm6 = sub_1405d1550(&var_1060)

void* const var_10d0 = nullptr
int32_t var_10c4 = 0
int64_t var_1080 = 0
int32_t rsi_24 = 0
int32_t var_1074 = 0
int32_t r14_3 = 0
int64_t var_1090 = 0
int32_t r15_2 = 0
int32_t var_1084 = 0
int64_t* var_eb8
sub_1407453e0(&var_eb8, r14 + 0x48)
int32_t i_9
int32_t i_2 = i_9
void* var_ea8

if (i_2 s< *(var_ea8 + 0x18))
    do
        void* rdx_12 = *(*var_eb8 + (sx.q(i_2) << 3))
        
        if (*(rdx_12 + 0x204) == arg3 && *(rdx_12 + 0x20) s> 0 && *(rdx_12 + 0x213) != 0)
            r14_3 += *(rdx_12 + 0xb8)
            rsi_24 += 1
            r15_2 += *(rdx_12 + 0xa8)
        
        int32_t var_eac
        int32_t var_ea0 = var_ea0 & not.d(var_eac)
        void var_eb0
        sub_14059bdd0(&var_eb0)
        i_2 = i_9
    while (i_2 s< *(var_ea8 + 0x18))
    
    rdi = arg2

int32_t r13_1 = 0
int32_t i_13 = 0

if (rsi_24 != 0)
    sub_1407c4520(&var_10d0, rsi_24)

int32_t var_10e4 = 0
int32_t var_1078 = 0

if (r14_3 != 0)
    sub_1405dadb0(&var_1080, r14_3)
    r13_1 = var_1078
    var_10e4 = r13_1

void* var_10b0
var_10b0.d = 0
int32_t var_1088 = 0

if (r15_2 != 0)
    sub_140775c70(&var_1090, r15_2)
    var_10b0.d = var_1088

uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
int64_t* var_e90
sub_1407453e0(&var_e90, r14 + 0x48)
int32_t i_10
int32_t i_3 = i_10
void* var_e80

if (i_3 s< *(var_e80 + 0x18))
    zmm6 = 0xbf800000
    zmm7 = 0x3f800000
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    uint32_t zmm12[0x4]
    uint32_t var_a8_1[0x4] = zmm12
    uint128_t zmm13
    uint128_t var_b8_1 = zmm13
    
    do
        void* r14_4 = *(*var_e90 + (sx.q(i_3) << 3))
        
        if (*(r14_4 + 0x204) == arg3 && *(r14_4 + 0x20) s> 0 && *(r14_4 + 0x213) != 0)
            int64_t i_15 = sx.q(i_13)
            int32_t i_14 = (i_15 + 1).d
            i_13 = i_14
            
            if (i_14 s> var_10c4)
                sub_140775640(&var_10d0)
            
            int64_t rsi_26 = i_15 * 0xa0
            void* rsi_27 = rsi_26 + var_10d0
            
            if (rsi_26 == neg.q(var_10d0))
                rsi_27 = nullptr
            else
                int64_t rcx_107 = *(r14_4 + 0x10)
                int32_t r8_3 = *(r14_4 + 0x20)
                int64_t rdx_18 = **(r14_4 + 0x30)
                *rsi_27 = *(r14_4 + 0x18)
                *(rsi_27 + 8) = rcx_107
                *(rsi_27 + 0x10) = rdx_18
                *(rsi_27 + 0x20) = *(r14_4 + 0x40)
                *(rsi_27 + 0x30) = *(r14_4 + 0x50)
                *(rsi_27 + 0x40) = *(r14_4 + 0x60)
                *(rsi_27 + 0x50) = *(r14_4 + 0x70)
                *(rsi_27 + 0x60) = rbx
                
                if (rbx != 0)
                    *(rbx + 8) += 1
                    rbx = var_1068
                    r13_1 = var_1078
                    var_10b0.d = var_1088
                
                *(rsi_27 + 0x68) = 0
                *(rsi_27 + 0x70) = 0
                *(rsi_27 + 0x98) = r8_3
                int64_t rcx_108 = *(data_143f111a8 + 0x10)
                *(rsi_27 + 0x78) = rcx_108
                *(rsi_27 + 0x80) = rcx_108
                *(rsi_27 + 0x88) = rcx_108
                *(rsi_27 + 0x90) = rcx_108
            
            int32_t j = 0
            int64_t* rcx_109 = *(r14_4 + 0xc0)
            uint128_t zmm1_3 = zx.o(*(r14_4 + 0x90))
            int32_t rax_106 = *(r14_4 + 0x98)
            int128_t var_a38
            __builtin_memcpy(&var_a38, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
            "
                0xc0)
            uint64_t var_fe0_1 = zmm1_3.q
            int32_t var_fd8_1 = rax_106
            int32_t j_1 = 0
            uint32_t var_ff0_1[0x4] = *(r14_4 + 0x80)
            uint32_t zmm0_3[0x4]
            
            if (rcx_109 != 0)
                zmm0_3 = *(r14_4 + 0x1b4)
                zmm0_3[0] = zmm0_3[0] f* *(rcx_109 + 0x24)
                zmm0_3 = _mm_and_ps(zmm0_3, 0x7fffffff)
                
                if (not(zmm0_3[0] f<= 0f))
                    (*(*rcx_109 + 0x40))(zmm0_3, rdi, *(r14_4 + 0x78))
                    int32_t j_3 = j_1
                    *(rsi_27 + 0x78) = *(*(r14_4 + 0xc0) + 0x10)
                    zmm6, zmm7 = sub_1421c28d0(&j_1, r14_4 + 0xc0, zmm7, zmm6, j_3)
                    j = j_1 + 1
                    j_1 = j
            
            void* rax_109 = *(r14_4 + 0x30)
            zmm12 = *(rax_109 + 8)
            zmm13 = *(rax_109 + 0xc)
            
            if (not(_mm_and_ps(zmm12, 0x7fffffff)[0] f<= 0f))
                int32_t rcx_112 = 0
                void* r11_2 = arg1 + 0x10
                int32_t var_1058_1 = 0
                int32_t r15_4 = *(r11_2 + 0x28)
                void* r10_1 = r11_2 + 0x10
                int32_t var_1054_1 = 1
                int32_t r9 = 0
                void* var_1050_1 = r10_1
                int32_t var_1048_1 = 0xffffffff
                int64_t var_1044_1 = 0
                
                if (r15_4 != 0)
                    void* rax_110 = *(r10_1 + 0x10)
                    
                    if (rax_110 != 0)
                        r10_1 = rax_110
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r15_4 - 1)
                    int32_t rdx_23 = *r10_1
                    
                    if (rdx_23 != 0)
                    label_1421c47f9:
                        int32_t rax_117 = ((rdx_23 - 1) & rdx_23) ^ rdx_23
                        uint64_t rflags_1
                        int32_t temp0_4
                        temp0_4, rflags_1 = _bit_scan_reverse(rax_117)
                        int32_t var_1054_2 = rax_117
                        int32_t var_ed8_1 = temp0_4
                        int32_t rax_118
                        
                        if (rax_117 == 0)
                            rax_118 = 0x20
                        else
                            rax_118 = 0x1f - temp0_4
                        
                        var_1044_1.d = r9 - rax_118 + 0x1f
                        
                        if (r9 - rax_118 + 0x1f s> r15_4)
                            var_1044_1.d = r15_4
                    else
                        while (true)
                            int64_t rdx_24 = sx.q(rcx_112)
                            r9 += 0x20
                            rcx_112 += 1
                            var_1044_1:4.d = r9
                            var_1058_1 = rcx_112
                            
                            if (rdx_24.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_23 = *(r10_1 + (rdx_24 << 2) + 4)
                            int32_t var_1048_2 = 0xffffffff
                            
                            if (rdx_23 != 0)
                                goto label_1421c47f9
                        
                        var_1044_1.d = r15_4
                
                void* var_f00_1 = r11_2
                uint32_t var_ef8[0x4] = var_1058_1.o
                int64_t var_ee8_1 = 0xffffffff
                
                if (0 s< r15_4)
                    zmm6 = var_fe0_1:4.d
                    zmm7 = var_fe0_1.d
                    zmm8 = var_ff0_1[3]
                    zmm9 = var_ff0_1[2]
                    zmm10 = var_ff0_1[1]
                    zmm11 = var_ff0_1[0]
                    int32_t rdx_25 = 0
                    
                    while (j s< 4)
                        int64_t* rdx_26 = *(*r11_2 + (sx.q(rdx_25) << 3))
                        bool cond:4_1 = zmm11.d f> *(rdx_26 + 0x14)
                        void* rcx_115 = *rdx_26
                        zmm0_3 = *(rcx_115 + 0x24)
                        zmm0_3[0] = zmm0_3[0] f* *(rdx_26 + 0xf4)
                        
                        if (not(cond:4_1) && not(zmm8.d f< rdx_26[1].d)
                                && not(zmm10.d f> rdx_26[3].d) && not(zmm7.d f< *(rdx_26 + 0xc))
                                && not(zmm9.d f> *(rdx_26 + 0x1c)) && not(zmm6.d f< rdx_26[2].d)
                                && not(_mm_and_ps(zmm0_3, 0x7fffffff)[0] f<= 0f))
                            *(rsi_27 + (sx.q(j) << 3) + 0x78) = *(rcx_115 + 0x10)
                            zmm6, zmm7 = sub_1421c28d0(&j_1, rdx_26, zmm12, zmm13, j_1)
                            j_1 += 1
                        
                        var_ee8_1.d &= not.d(var_ef8[1])
                        sub_14059bdd0(&var_ef8)
                        rdx_25 = var_ee8_1:4.d
                        j = j_1
                        
                        if (rdx_25 s>= *(var_ef8[2].q + 0x18))
                            break
                        
                        r11_2 = var_f00_1
                    
                    zmm7 = 0x3f800000
                    zmm6 = 0xbf800000
            
            if (j s> 0)
                if (j s< 4)
                    zmm0_3 = data_14399f710
                    zmm1_3 = data_14399f700
                    zmm2 = data_14399f6f0
                    zmm3 = data_14399f6e0
                    
                    do
                        uint64_t j_2 = zx.q(j)
                        j += 1
                        uint64_t rax_126 = j_2 << 6
                        uint64_t rcx_120 = zx.q(j_2.d) * 2
                        int128_t var_c38[0x10]
                        var_c38[j_2 * 4] = zmm3
                        var_c28
                        *(&var_c28 + rax_126) = zmm2
                        var_c18
                        *(&var_c18 + rax_126) = zmm1_3
                        var_c08
                        *(&var_c08 + rax_126) = zmm0_3
                        int128_t var_b38[0x10]
                        var_b38[j_2 * 4] = zmm3
                        var_b28
                        *(&var_b28 + rax_126) = zmm2
                        var_b18
                        *(&var_b18 + rax_126) = zmm1_3
                        var_b08
                        *(&var_b08 + rax_126) = zmm0_3
                        int128_t var_9f8
                        __builtin_memcpy(&var_9f8 + (rcx_120 << 3), 
                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                            0x10)
                        __builtin_memcpy(&var_a38 + (rcx_120 << 3), 
                            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                            0x10)
                    while (j s< 4)
                
                int64_t* rcx_121 = data_143f0f180
                void* var_1008
                (*(*rcx_121 + 0xf8))(rcx_121, &var_1008, &j_1, &data_143f4e2c0, 1, 1)
                void* rax_128 = var_1008
                void* var_1000 = rax_128
                
                if (rax_128 != 0)
                    *(rax_128 + 8) += 1
                    rbx = var_1068
                    r13_1 = var_1078
                    var_10b0.d = var_1088
                
                sub_1405d1550(&var_1008)
                sub_1405d1600(rsi_27 + 0x60, &var_1000)
                zmm6 = sub_1405d1550(&var_1000)
            
            int64_t r15_5 = sx.q(*(r14_4 + 0xb8))
            
            if (r15_5.d != 0)
                int32_t rdx_29 = r15_5.d + r13_1
                
                if (rdx_29 s> var_1074)
                    sub_1405dadb0(&var_1080, rdx_29)
                    r13_1 = var_1078
                
                memcpy(var_1080 + (sx.q(r13_1) << 2), *(r14_4 + 0xb0), (r15_5 << 2).d)
                r13_1 += r15_5.d
                var_1078 = r13_1
            
            *(r14_4 + 0xb8) = 0
            
            if (*(r14_4 + 0xbc) s<= 0xffffffff)
                sub_1405dadb0(r14_4 + 0xb0, 0)
            
            int64_t r15_6 = sx.q(*(r14_4 + 0xa8))
            
            if (r15_6.d != 0)
                int32_t r12_2 = var_10b0.d
                int32_t rdx_31 = r15_6.d + r12_2
                
                if (rdx_31 s> var_1084)
                    sub_140775c70(&var_1090, rdx_31)
                    r12_2 = var_1088
                
                memcpy(var_1090 + sx.q(r12_2) * 0x48, *(r14_4 + 0xa0), (r15_6 * 0x48).d)
                int32_t r12_3 = r12_2 + r15_6.d
                var_10b0.d = r12_3
                var_1088 = r12_3
            
            int32_t rax_133 = *(r14_4 + 0xac)
            *(r14_4 + 0xa8) = 0
            
            if (rax_133 s< 0 && rax_133 != 0)
                sub_140775c70(r14_4 + 0xa0, 0)
            
            __builtin_memset(r14_4 + 0x68, 0, 0x14)
        
        int32_t var_e84
        int32_t var_e78 = var_e78 & not.d(var_e84)
        void var_e88
        sub_14059bdd0(&var_e88)
        i_3 = i_10
    while (i_3 s< *(var_e80 + 0x18))
    
    zmm8 = var_10dc
    var_10e4 = r13_1

TEB* gsbase

if (data_143f4fa30 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f4fa30)
    
    if (data_143f4fa30 == 0xffffffff)
        sub_140b58170(&data_143f4fa28, "SimulateGPUParticles", 1)
        _Init_thread_footer(&data_143f4fa30)

if (arg3 == *(arg1 + 0xb8))
    void*** rcx_139 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_140 = &rcx_139[3]
    
    if (rax_140 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_139 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_140 = &rcx_139[3]
    
    *(rdi + 0x30) = rax_140
    int64_t* rax_141 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_141 = rcx_139
    *(rdi + 8) = &rcx_139[1]
    rcx_139[1] = 0
    *rcx_139 = &data_142f21860
    rcx_139[2] = data_143f4fa28

int64_t* var_10c0 = nullptr
int64_t var_10b8 = 1
sub_14083a440(&var_10c0, 0)
int64_t rbx_1 = sx.q(var_10b8.d)
int32_t rdx_33 = var_10b8:4.d
int64_t* r13_2 = var_10c0
uint64_t r14_5 = zx.q((rbx_1 + 1).d)
int32_t var_10dc_1 = rdx_33
var_10b8.d = r14_5.d
*r13_2 = var_10a0

if (r14_5.d s> rdx_33)
    sub_14083a440(&var_10c0, rbx_1.d)
    r14_5 = zx.q(var_10b8.d)
    r13_2 = var_10c0
    var_10dc_1 = var_10b8:4.d

r13_2[rbx_1] = rax_9
int64_t rsi_28 = var_10a0
void*** rcx_147 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_147 = &rcx_147[3]

if (rax_147 u> *(rdi + 0x38))
    sub_140b0e3d0(rdi + 0x30, 0x20)
    rcx_147 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    rax_147 = &rcx_147[3]

*(rdi + 0x30) = rax_147
int64_t* rax_148 = *(rdi + 8)
*(rdi + 0x14) += 1
*rax_148 = rcx_147
*(rdi + 8) = &rcx_147[1]
*rcx_147 = &data_143009ba0
rcx_147[2] = rsi_28
rcx_147[1] = 0
void*** rcx_153 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_150 = &rcx_153[3]

if (rax_150 u> *(rdi + 0x38))
    sub_140b0e3d0(rdi + 0x30, 0x20)
    rcx_153 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    rax_150 = &rcx_153[3]

*(rdi + 0x30) = rax_150
int64_t* rax_151 = *(rdi + 8)
*(rdi + 0x14) += 1
*rax_151 = rcx_153
*(rdi + 8) = &rcx_153[1]
rcx_153[1] = 0
*rcx_153 = &data_143009ba0
int64_t r12_4 = arg7
rcx_153[2] = rax_9
int32_t var_1118
int32_t var_1110

if (i_13 != 0 || var_10e4 != 0)
    void var_228
    sub_14108c030(&var_228, 2, &var_10a0, 5)
    int64_t rsi_32 = (*(rdi + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_153 = rsi_32 + 0x3c
    
    if (rax_153 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x3e)
        rsi_32 = (*(rdi + 0x30) + 1) & 0xfffffffffffffffe
        rax_153 = rsi_32 + 0x3c
    
    wchar16 const* const rcx_159 = u"GPUParticles_SimulateAndClear"
    *(rdi + 0x30) = rax_153
    wchar16 const i_4
    
    do
        i_4 = *rcx_159
        *(rcx_159 + rsi_32 - u"GPUParticles_SimulateAndClear") = i_4
        rcx_159 = &rcx_159[1]
    while (i_4 != 0)
    void*** rcx_162 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_154 = &rcx_162[0x27]
    
    if (rax_154 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x140)
        rcx_162 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_154 = &rcx_162[0x27]
    
    *(rdi + 0x30) = rax_154
    void**** rax_155 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_155 = rcx_162
    *(rdi + 8) = &rcx_162[1]
    sub_1405d11b0(rcx_162, &var_228, rsi_32)
    *(rdi + 0x1c4) = 1
    sub_1405d19b0(rdi, &var_228)
    char var_111
    *(rdi + 0x178) = var_111
    *(rdi + 0x179) = 0
    *(rdi + 0x1c4) = 1
    int64_t var_dec
    __builtin_memset(&var_dec, 0, 0x43)
    int128_t var_e48
    __builtin_memset(&var_e48, 0, 0x30)
    int128_t var_e00_1 = zx.o(0)
    int16_t var_da8_1 = 0
    sub_140fdc870(rdi, &var_e48)
    zmm7 = zx.o(data_143a2ee34)
    void*** rcx_170 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o(data_143a2ee38))
    void* rax_158 = &rcx_170[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    
    if (rax_158 u> *(rdi + 0x38))
        zmm6_1 = sub_140b0e3d0(rdi + 0x30, 0x30)
        rcx_170 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_158 = &rcx_170[5]
    
    *(rdi + 0x30) = rax_158
    *(rdi + 0x14) += 1
    **(rdi + 8) = rcx_170
    *(rdi + 8) = &rcx_170[1]
    rcx_170[1] = 0
    rcx_170[2] = 0
    rcx_170[3].d = 0
    *rcx_170 = &data_142d54998
    *(rcx_170 + 0x1c) = zmm7.d
    rcx_170[4].d = zmm6_1.d
    *(rcx_170 + 0x24) = 0x3f800000
    int64_t var_e08_1 = data_14395d9e8
    int64_t var_e10_1 = data_14395da18
    int64_t var_e18_1 = data_14395da00
    
    if (i_13 != 0)
        int64_t rcx_174 = *(arg1 + 0x80)
        int32_t r8_12 = *(arg1 + 0x88)
        int64_t rax_163
        rax_163.b = zmm8.d f> 0f
        
        if (arg3 == 2)
            if (arg4 == 0)
                goto label_1421c50cd
            
            var_1110.q = arg4
            var_1118.q = rcx_174
            sub_1421a5e40(rdi, &var_e48, r8_12, &var_10d0, var_1118, var_1110, arg5, arg6, r12_4, 
                rax_163.b)
        else if (arg3 != 1 || arg5 == 0)
        label_1421c50cd:
            var_1110.q = 0
            var_1118.q = rcx_174
            sub_1421a6a60(rdi, &var_e48, r8_12, &var_10d0, var_1118, var_1110, arg5, arg6, r12_4, 
                rax_163.b)
        else
            var_1110.q = arg4
            var_1118.q = rcx_174
            sub_1421a6450(rdi, &var_e48, r8_12, &var_10d0, var_1118, var_1110, arg5, arg6, r12_4, 
                rax_163.b)
    
    if (var_10e4 != 0)
        sub_1421af7f0(rdi, &var_e48, *(arg1 + 0x88), &var_1080)
    
    sub_141096650(rdi)
    void var_120
    sub_1405d1550(&var_120)

void* r15_8 = arg1

if (var_10b0.d != 0)
    int64_t var_108 = *(rdx_1 + 0x10)
    int64_t var_100_1 = *(rdx_1 + 0x20)
    void* rax_169 = *(r15_8 + 0x80)
    void*** rcx_184 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rsi_36 = *(rax_169 + 0x80)
    int64_t var_f0_1 = *(rax_169 + 0xa0)
    void* rax_171 = &rcx_184[3]
    int64_t var_f8_1 = rsi_36
    
    if (rax_171 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_184 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_171 = &rcx_184[3]
    
    *(rdi + 0x30) = rax_171
    *(rdi + 0x14) += 1
    **(rdi + 8) = rcx_184
    *(rdi + 8) = &rcx_184[1]
    rcx_184[1] = 0
    *rcx_184 = &data_143009ba0
    rcx_184[2] = rsi_36
    void*** rcx_190 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rsi_37 = *(*(r15_8 + 0x80) + 0xa0)
    void* rax_175 = &rcx_190[3]
    
    if (rax_175 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_190 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_175 = &rcx_190[3]
    
    *(rdi + 0x30) = rax_175
    int64_t* rax_176 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_176 = rcx_190
    *(rdi + 8) = &rcx_190[1]
    rcx_190[1] = 0
    *rcx_190 = &data_143009ba0
    rcx_190[2] = rsi_37
    void var_468
    sub_14108c030(&var_468, 4, &var_108, 5)
    sub_1410e0180(rdi, &var_468)
    int64_t rsi_40 = (*(rdi + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_178 = rsi_40 + 0x24
    
    if (rax_178 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x26)
        rsi_40 = (*(rdi + 0x30) + 1) & 0xfffffffffffffffe
        rax_178 = rsi_40 + 0x24
    
    wchar16 const* const rcx_197 = u"ParticleInjection"
    *(rdi + 0x30) = rax_178
    wchar16 const i_5
    
    do
        i_5 = *rcx_197
        *(rcx_197 + rsi_40 - u"ParticleInjection") = i_5
        rcx_197 = &rcx_197[1]
    while (i_5 != 0)
    void*** rcx_200 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_179 = &rcx_200[0x27]
    
    if (rax_179 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x140)
        rcx_200 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_179 = &rcx_200[0x27]
    
    *(rdi + 0x30) = rax_179
    void**** rax_180 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_180 = rcx_200
    *(rdi + 8) = &rcx_200[1]
    sub_1405d11b0(rcx_200, &var_468, rsi_40)
    *(rdi + 0x1c4) = 1
    sub_1405d19b0(rdi, &var_468)
    char var_351
    *(rdi + 0x178) = var_351
    *(rdi + 0x179) = 0
    *(rdi + 0x1c4) = 1
    int128_t var_cf8
    __builtin_memset(&var_cf8, 0, 0x30)
    int64_t var_c9c
    __builtin_memset(&var_c9c, 0, 0x43)
    int128_t var_cb0_1 = zx.o(0)
    int16_t var_c58_1 = 0
    sub_140fdc870(rdi, &var_cf8)
    zmm7 = zx.o(data_143a2ee34)
    void*** rcx_208 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    uint128_t zmm6_2 = _mm_cvtepi32_ps(zx.o(data_143a2ee38))
    void* rax_183 = &rcx_208[5]
    zmm7 = _mm_cvtepi32_ps(zmm7)
    
    if (rax_183 u> *(rdi + 0x38))
        zmm6_2 = sub_140b0e3d0(rdi + 0x30, 0x30)
        rcx_208 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_183 = &rcx_208[5]
    
    *(rdi + 0x30) = rax_183
    *(rdi + 0x14) += 1
    **(rdi + 8) = rcx_208
    *(rdi + 8) = &rcx_208[1]
    rcx_208[1] = 0
    *rcx_208 = &data_142d54998
    *(rcx_208 + 0x1c) = zmm7.d
    rcx_208[4].d = zmm6_2.d
    rcx_208[2] = 0
    rcx_208[3].d = 0
    *(rcx_208 + 0x24) = 0x3f800000
    int64_t var_cb8_1 = data_14395d9e8
    int64_t var_cc0_1 = data_14395da18
    int64_t var_cc8_1 = data_14395da00
    sub_1421a79e0(rdi, &var_cf8, *(r15_8 + 0x88), &var_1090)
    sub_141096650(rdi)
    void* rax_189 = *(r15_8 + 0x80)
    int128_t var_f60_1 = data_142d57d10
    void*** rsi_45 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    int128_t zmm0_5 = data_142d57920
    int128_t var_f50_1 = data_142d3f800
    int64_t r12_5 = *(rax_189 + 0x88)
    int64_t* r15_9 = *(rax_189 + 0x80)
    void* rax_190 = &rsi_45[0xa]
    
    if (rax_190 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x58)
        rsi_45 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_190 = &rsi_45[0xa]
    
    *(rdi + 0x30) = rax_190
    int64_t* rax_191 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_191 = rsi_45
    *(rdi + 8) = &rsi_45[1]
    rsi_45[1] = 0
    *rsi_45 = &data_142d56628
    rsi_45[2].d = var_f60_1.d
    __builtin_memset(rsi_45 + 0x14, 0xff, 0x20)
    *(rsi_45 + 0x34) = zmm0_5:4.d
    rsi_45[7].d = zmm0_5:8.d
    *(rsi_45 + 0x3c) = zmm0_5:0xc.d
    rsi_45[8] = r15_9
    rsi_45[9] = r12_5
    
    if ((*(*r15_9 + 8))(r15_9) == 0)
        int64_t* rcx_216 = rsi_45[8]
        
        if ((*(*rcx_216 + 0x18))(rcx_216) == 0)
            int64_t* rcx_217 = rsi_45[8]
            
            if ((*(*rcx_217 + 0x20))(rcx_217) == 0)
                int64_t* rcx_218 = rsi_45[8]
                (*(*rcx_218 + 0x10))(rcx_218)
    
    int64_t* rcx_219 = rsi_45[9]
    
    if ((*(*rcx_219 + 8))(rcx_219) == 0)
        int64_t* rcx_220 = rsi_45[9]
        
        if ((*(*rcx_220 + 0x18))(rcx_220) == 0)
            int64_t* rcx_221 = rsi_45[9]
            
            if ((*(*rcx_221 + 0x20))(rcx_221) == 0)
                int64_t* rcx_222 = rsi_45[9]
                (*(*rcx_222 + 0x10))(rcx_222)
    
    int128_t var_f30_1 = data_142d57d10
    void* rax_212 = *(arg1 + 0x80)
    void*** rsi_50 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    zmm0_5 = data_142d57920
    int128_t var_f20_1 = data_142d3f800
    int64_t r12_6 = *(rax_212 + 0xa8)
    int64_t* r15_10 = *(rax_212 + 0xa0)
    void* rax_213 = &rsi_50[0xa]
    
    if (rax_213 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x58)
        rsi_50 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_213 = &rsi_50[0xa]
    
    *(rdi + 0x30) = rax_213
    int64_t* rax_214 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_214 = rsi_50
    *(rdi + 8) = &rsi_50[1]
    rsi_50[1] = 0
    *rsi_50 = &data_142d56628
    rsi_50[2].d = var_f30_1.d
    __builtin_memset(rsi_50 + 0x14, 0xff, 0x20)
    *(rsi_50 + 0x34) = zmm0_5:4.d
    rsi_50[7].d = zmm0_5:8.d
    *(rsi_50 + 0x3c) = zmm0_5:0xc.d
    rsi_50[8] = r15_10
    rsi_50[9] = r12_6
    
    if ((*(*r15_10 + 8))(r15_10) == 0)
        int64_t* rcx_225 = rsi_50[8]
        
        if ((*(*rcx_225 + 0x18))(rcx_225) == 0)
            int64_t* rcx_226 = rsi_50[8]
            
            if ((*(*rcx_226 + 0x20))(rcx_226) == 0)
                int64_t* rcx_227 = rsi_50[8]
                (*(*rcx_227 + 0x10))(rcx_227)
    
    int64_t* rcx_228 = rsi_50[9]
    
    if ((*(*rcx_228 + 8))(rcx_228) == 0)
        int64_t* rcx_229 = rsi_50[9]
        
        if ((*(*rcx_229 + 0x18))(rcx_229) == 0)
            int64_t* rcx_230 = rsi_50[9]
            
            if ((*(*rcx_230 + 0x20))(rcx_230) == 0)
                int64_t* rcx_231 = rsi_50[9]
                (*(*rcx_231 + 0x10))(rcx_231)
    
    if (data_1439c7a38 u<= 1)
        r15_8 = arg1
    else if (*(data_143f4dfa0 + 4) != 1)
        int32_t rsi_53 = (r14_5 + 1).d
        int32_t rcx_233 = var_10dc_1
        var_10b8.d = rsi_53
        int64_t r15_11 = *(*(arg1 + 0x80) + 0x80)
        
        if (rsi_53 s> rcx_233)
            sub_14083a440(&var_10c0, r14_5.d)
            int32_t rax_236 = var_10b8:4.d
            rcx_233 = rax_236
            rsi_53 = var_10b8.d
            r13_2 = var_10c0
            int32_t var_10dc_2 = rax_236
        
        int64_t rax_237 = sx.q(r14_5.d)
        r14_5 = zx.q(rsi_53 + 1)
        var_10b8.d = r14_5.d
        r13_2[rax_237] = r15_11
        int64_t r15_12 = *(*(arg1 + 0x80) + 0xa0)
        
        if (r14_5.d s> rcx_233)
            sub_14083a440(&var_10c0, rsi_53)
            r14_5 = zx.q(var_10b8.d)
            r13_2 = var_10c0
        
        r13_2[sx.q(rsi_53)] = r15_12
        r15_8 = arg1
    else
        r15_8 = arg1
        sub_1421a5c40(r15_8 + 0xa8, &var_1090)
    
    void*** rcx_238 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rsi_54 = *(*(r15_8 + 0x80) + 0x80)
    void* rax_241 = &rcx_238[3]
    
    if (rax_241 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_238 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_241 = &rcx_238[3]
    
    *(rdi + 0x30) = rax_241
    *(rdi + 0x14) += 1
    **(rdi + 8) = rcx_238
    *(rdi + 8) = &rcx_238[1]
    rcx_238[1] = 0
    *rcx_238 = &data_143009bb0
    rcx_238[2] = rsi_54
    void*** rcx_244 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    int64_t rsi_55 = *(*(r15_8 + 0x80) + 0xa0)
    void* rax_245 = &rcx_244[3]
    
    if (rax_245 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x20)
        rcx_244 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_245 = &rcx_244[3]
    
    *(rdi + 0x30) = rax_245
    int64_t* rax_246 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_246 = rcx_244
    *(rdi + 8) = &rcx_244[1]
    rcx_244[1] = 0
    *rcx_244 = &data_143009bb0
    rcx_244[2] = rsi_55
    void var_360
    sub_1405d1550(&var_360)
    r12_4 = arg7

int64_t* rsi_58 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_248 = &rsi_58[2]

if (rax_248 u> *(rdi + 0x38))
    sub_140b0e3d0(rdi + 0x30, 0x18)
    rsi_58 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    rax_248 = &rsi_58[2]

*(rdi + 0x30) = rax_248
*rsi_58 = var_10a0
rsi_58[1] = rax_9
void*** rcx_252 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_251 = &rcx_252[5]

if (rax_251 u> *(rdi + 0x38))
    sub_140b0e3d0(rdi + 0x30, 0x30)
    rcx_252 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    rax_251 = &rcx_252[5]

*(rdi + 0x30) = rax_251
void**** rax_252 = *(rdi + 8)
*(rdi + 0x14) += 1
*rax_252 = rcx_252
*(rdi + 8) = &rcx_252[1]
rcx_252[1] = 0
*rcx_252 = &data_142d549c8
rcx_252[2].d = 2
rcx_252[3] = rsi_58
rcx_252[4].d = 0
int64_t rsi_61 = var_10a0
void*** rcx_258 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_254 = &rcx_258[3]

if (rax_254 u> *(rdi + 0x38))
    sub_140b0e3d0(rdi + 0x30, 0x20)
    rcx_258 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    rax_254 = &rcx_258[3]

*(rdi + 0x30) = rax_254
int64_t* rax_255 = *(rdi + 8)
*(rdi + 0x14) += 1
*rax_255 = rcx_258
*(rdi + 8) = &rcx_258[1]
rcx_258[1] = 0
*rcx_258 = &data_143009bb0
rcx_258[2] = rsi_61
void*** rcx_264 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
void* rax_257 = &rcx_264[3]

if (rax_257 u> *(rdi + 0x38))
    sub_140b0e3d0(rdi + 0x30, 0x20)
    rcx_264 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    rax_257 = &rcx_264[3]

*(rdi + 0x30) = rax_257
int64_t* rax_258 = *(rdi + 8)
*(rdi + 0x14) += 1
*rax_258 = rcx_264
*(rdi + 8) = &rcx_264[1]
rcx_264[1] = 0
*rcx_264 = &data_143009bb0
rcx_264[2] = rax_9

if (arg3 == *(r15_8 + 0xbc))
    uint32_t rdx_57 = (r14_5 << 3).d
    int64_t r15_13 = sx.q(rdx_57)
    int64_t* rsi_65 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    int32_t var_e50_1 = r14_5.d
    var_ec8.o = r13_2.o
    void* rax_261 = rsi_65 + r15_13
    
    if (rax_261 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, rdx_57 + 8)
        rsi_65 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_261 = rsi_65 + r15_13
    
    *(rdi + 0x30) = rax_261
    int64_t i_11 = sx.q(r14_5.d)
    
    if (r14_5.d s> 0)
        int64_t* rcx_269 = rsi_65
        int64_t i_6
        
        do
            *rcx_269 = *(var_ec8 - rsi_65 + rcx_269)
            rcx_269 = &rcx_269[1]
            i_6 = i_11
            i_11 -= 1
        while (i_6 != 1)
    
    void*** rcx_272 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_263 = &rcx_272[5]
    
    if (rax_263 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x30)
        rcx_272 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_263 = &rcx_272[5]
    
    r15_8 = arg1
    *(rdi + 0x30) = rax_263
    void**** rax_264 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_264 = rcx_272
    *(rdi + 8) = &rcx_272[1]
    rcx_272[1] = 0
    *rcx_272 = &data_142f21870
    rcx_272[2] = data_143f4fa28
    rcx_272[3] = rsi_65
    rcx_272[4].d = r14_5.d

if (i_13 != 0 && not(zmm8.d f<= 0f))
    void* rcx_276 = *(r15_8 + 0x80)
    int64_t rdx_59 = (sx.q(*(rcx_276 + 0xb0)) ^ 1) * 0x38
    int64_t var_fd0 = *(rdx_59 + rcx_276 + 0x10)
    int64_t rax_270 = *(rdx_59 + rcx_276 + 0x20)
    void var_348
    sub_14108c030(&var_348, 2, &var_fd0, 5)
    sub_1410e0180(rdi, &var_348)
    int64_t rsi_70 = (*(rdi + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_271 = rsi_70 + 0x34
    
    if (rax_271 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x36)
        rsi_70 = (*(rdi + 0x30) + 1) & 0xfffffffffffffffe
        rax_271 = rsi_70 + 0x34
    
    wchar16 const* const rcx_280 = u"ExecuteSimulationCommands"
    *(rdi + 0x30) = rax_271
    wchar16 const i_7
    
    do
        i_7 = *rcx_280
        *(rcx_280 + rsi_70 - u"ExecuteSimulationCommands") = i_7
        rcx_280 = &rcx_280[1]
    while (i_7 != 0)
    void*** rcx_283 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_272 = &rcx_283[0x27]
    
    if (rax_272 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x140)
        rcx_283 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_272 = &rcx_283[0x27]
    
    *(rdi + 0x30) = rax_272
    void**** rax_273 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_273 = rcx_283
    *(rdi + 8) = &rcx_283[1]
    sub_1405d11b0(rcx_283, &var_348, rsi_70)
    *(rdi + 0x1c4) = 1
    sub_1405d19b0(rdi, &var_348)
    char var_231
    *(rdi + 0x178) = var_231
    *(rdi + 0x179) = 0
    *(rdi + 0x1c4) = 1
    int128_t var_da0
    __builtin_memset(&var_da0, 0, 0x30)
    int64_t var_d44
    __builtin_memset(&var_d44, 0, 0x43)
    int128_t var_d58_1 = zx.o(0)
    int16_t var_d00_1 = 0
    sub_140fdc870(rdi, &var_da0)
    int32_t r8_21 = *(r15_8 + 0x88)
    int64_t var_d60_1 = data_14395d9e8
    int64_t var_d68_1 = data_14395da18
    int64_t var_d70_1 = data_14395da00
    int64_t rax_279 = *(r15_8 + 0x80)
    
    if (arg3 == 2)
        if (arg4 == 0)
            goto label_1421c5ee1
        
        var_1110.q = arg4
        var_1118.q = rax_279
        sub_1421a5e40(rdi, &var_da0, r8_21, &var_10d0, var_1118, var_1110, arg5, arg6, r12_4, 0)
    else if (arg3 != 1 || arg5 == 0)
    label_1421c5ee1:
        var_1110.q = 0
        var_1118.q = rax_279
        sub_1421a6a60(rdi, &var_da0, r8_21, &var_10d0, var_1118, var_1110, arg5, arg6, r12_4, 0)
    else
        var_1110.q = arg4
        var_1118.q = rax_279
        sub_1421a6450(rdi, &var_da0, r8_21, &var_10d0, var_1118, var_1110, arg5, arg6, r12_4, 0)
    
    sub_141096650(rdi)
    int64_t* rsi_75 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_280 = &rsi_75[2]
    
    if (rax_280 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x18)
        rsi_75 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_280 = &rsi_75[2]
    
    *(rdi + 0x30) = rax_280
    *rsi_75 = var_fd0
    rsi_75[1] = rax_270
    void*** rcx_301 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_283 = &rcx_301[5]
    
    if (rax_283 u> *(rdi + 0x38))
        sub_140b0e3d0(rdi + 0x30, 0x30)
        rcx_301 = (*(rdi + 0x30) + 7) & 0xfffffffffffffff8
        rax_283 = &rcx_301[5]
    
    *(rdi + 0x30) = rax_283
    void**** rax_284 = *(rdi + 8)
    *(rdi + 0x14) += 1
    *rax_284 = rcx_301
    *(rdi + 8) = &rcx_301[1]
    rcx_301[1] = 0
    *rcx_301 = &data_142d549c8
    rcx_301[2].d = 2
    rcx_301[3] = rsi_75
    rcx_301[4].d = 0
    void var_240
    sub_1405d1550(&var_240)

sub_1410e0370(rdi)
int32_t rbx_2 = *(r15_8 + 0x8c)

if (sub_1405fba70(rbx_2, 3) != 0)
    sub_1419a4830(rbx_2)

int64_t rcx_309 = var_1090

if (rcx_309 != 0)
    sub_140a74f90(rcx_309)

int64_t rcx_310 = var_1080

if (rcx_310 != 0)
    sub_140a74f90(rcx_310)

int32_t i_12 = i_13

if (i_12 != 0)
    void* rbx_4 = var_10d0 + 0x60
    int32_t i_8
    
    do
        sub_1405d1550(rbx_4 + 0x10)
        sub_1405d1550(rbx_4)
        rbx_4 += 0xa0
        i_8 = i_12
        i_12 -= 1
    while (i_8 != 1)

void* const rcx_313 = var_10d0

if (rcx_313 != 0)
    sub_140a74f90(rcx_313)

int64_t result = sub_1405d1550(&var_1068)

if (var_1020 == 0)
    int64_t* rax_287 = var_1038
    char var_1020_1 = 1
    rax_287[4].d -= 1
    int64_t* rcx_315 = var_1038
    
    if (rcx_2 != rcx_315[2])
        sub_140b16b40(rcx_315, rcx_2)
        rcx_315 = var_1038
    
    *rcx_315 = rcx_1
    result = result_1
    var_1038[3] = result

__security_check_cookie(rax_1 ^ &var_1138)
return result
