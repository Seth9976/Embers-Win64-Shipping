// 函数: sub_1422c2170
// 地址: 0x1422c2170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8a8
int64_t rax_1 = __security_cookie ^ &var_8a8
int32_t rsi = *(arg1 + 0x18)
int32_t var_738 = data_143f02318
char var_870 = 0
int32_t rdx = 0x40
char var_878 = 1
char var_880 = 1
int16_t var_710 = 0

if (rsi u>= 0x40)
    rdx = rsi

wchar16 const* const var_708 = u"UnknownTexture2D"
int32_t var_730 = rdx
int128_t var_748 = data_143f02308
int32_t var_734 = 0x62
int32_t var_72c = 0
int32_t var_728 = 1
int32_t var_724 = 0x10000
int16_t var_720 = 1
int32_t var_718 = 0
int32_t var_714 = 8
int16_t var_700 = 1
char var_6fe = 0
int32_t var_71c = 0x13
uint128_t zmm6 = sub_1419a0ce0(&data_1439c9260, arg2, &var_748, &data_143f53cc8, SSProfiles", 
    var_880, var_878, var_870)
int64_t* rcx = data_143f0f180
char var_870_1 = 1
char var_878_1 = 0
int32_t var_820
var_880.q = &var_820
wchar16 const* const var_888
var_888.d = 1
int64_t rax_4 = (*(*rcx + 0x510))(rcx, arg2, *(data_143f53cc8 + 0x10), 0, var_888, var_880, 
    var_878_1, var_870_1)
uint128_t var_6f8
memset(&var_6f8, 0, 0x620)
int32_t rcx_2
rcx_2.b = data_143f0f1a0 != 0x30
int32_t rbx = 0
int32_t var_858_1 = _mm_cvtepi32_ps(zx.o(rcx_2 + 0xffff)).d - 1
uint128_t* var_868

if (rsi != 0)
    uint128_t var_38_1 = zmm6
    zmm6 = 0x3c1374bc
    uint128_t zmm7 = 0x3f800000
    uint128_t zmm8
    uint128_t var_58_1 = zmm8
    uint128_t zmm10
    uint128_t var_78_1 = zmm10
    uint128_t zmm11 = zx.o(0)
    uint128_t zmm12
    uint128_t var_98_1 = zmm12
    double zmm13[0x2]
    double var_a8_1[0x2] = zmm13
    uint128_t zmm14
    uint128_t var_b8_1 = zmm14
    int128_t zmm15
    int128_t var_c8_1 = zmm15
    
    do
        uint128_t* rcx_4 = sx.q(rbx) * 0x98
        int64_t rax_6 = *(arg1 + 0x10)
        uint128_t zmm3 = *(rcx_4 + rax_6 + 0x30)
        zmm15 = *(rcx_4 + rax_6 + 0x50)
        uint128_t var_808_1 = *(rcx_4 + rax_6)
        uint128_t var_7f8_1 = *(rcx_4 + rax_6 + 0x10)
        uint128_t var_7e8_1 = *(rcx_4 + rax_6 + 0x20)
        uint128_t var_7d8_1 = zmm3
        uint128_t var_7c8_1 = *(rcx_4 + rax_6 + 0x40)
        uint128_t var_798_1 = *(rcx_4 + rax_6 + 0x70)
        uint128_t var_7a8_1 = *(rcx_4 + rax_6 + 0x60)
        int32_t rax_7 = *(rcx_4 + rax_6 + 0x88)
        uint64_t var_788_1 = *(rcx_4 + rax_6 + 0x80)
        
        if (zmm3.d f>= zmm11.d)
            zmm3 = _mm_min_ss(zmm3.d, zmm7.d)
        else
            zmm3 = zmm11
        
        float zmm2 = var_7d8_1:4.d
        
        if (zmm2 f>= zmm11.d)
            zmm2 = _mm_min_ss(zmm2, zmm7.d)
        else
            zmm2 = zmm11.d
        
        uint128_t zmm1_1 = var_7d8_1:8.d
        
        if (zmm1_1.d f>= zmm11.d)
            zmm1_1 = _mm_min_ss(zmm1_1.d, zmm7.d)
        else
            zmm1_1 = zmm11
        
        uint128_t zmm0_1 = var_7d8_1:0xc.d
        
        if (zmm0_1.d f>= zmm11.d)
            zmm0_1 = _mm_min_ss(zmm0_1.d, zmm7.d)
        else
            zmm0_1 = zmm11
        
        var_7d8_1.d = zmm3.d
        zmm3 = var_7c8_1.d
        var_7d8_1:4.d = zmm2
        var_7d8_1:8.d = zmm1_1.d
        var_7d8_1:0xc.d = zmm0_1.d
        
        if (zmm3.d f>= zmm6.d)
            zmm3 = _mm_min_ss(zmm3.d, zmm7.d)
        else
            zmm3 = zmm6
        
        zmm2 = var_7c8_1:4.d
        
        if (zmm2 f>= zmm6.d)
            zmm2 = _mm_min_ss(zmm2, zmm7.d)
        else
            zmm2 = zmm6.d
        
        zmm1_1 = var_7c8_1:8.d
        
        if (zmm1_1.d f>= zmm6.d)
            zmm1_1 = _mm_min_ss(zmm1_1.d, zmm7.d)
        else
            zmm1_1 = zmm6
        
        zmm0_1 = var_7c8_1:0xc.d
        
        if (zmm0_1.d f>= zmm6.d)
            zmm0_1 = _mm_min_ss(zmm0_1.d, zmm7.d)
        else
            zmm0_1 = zmm6
        
        zmm10 = var_7f8_1.d
        var_7c8_1.d = zmm3.d
        var_7c8_1:4.d = zmm2
        var_7c8_1:8.d = zmm1_1.d
        var_7c8_1:0xc.d = zmm0_1.d
        
        if (zmm10.d f>= zmm6.d)
            zmm10 = _mm_min_ss(zmm10.d, zmm7.d)
        else
            zmm10 = zmm6
        
        zmm8 = var_7f8_1:4.d
        int32_t var_828_1 = zmm10.d
        
        if (zmm8.d f>= zmm6.d)
            zmm8 = _mm_min_ss(zmm8.d, zmm7.d)
        else
            zmm8 = zmm6
        
        uint128_t zmm5_1 = var_7f8_1:8.d
        
        if (zmm5_1.d f>= zmm6.d)
            zmm5_1 = _mm_min_ss(zmm5_1.d, zmm7.d)
        else
            zmm5_1 = zmm6
        
        zmm0_1 = var_7f8_1:0xc.d
        int32_t var_824_1 = zmm5_1.d
        int32_t var_858_2
        
        if (zmm0_1.d f>= zmm6.d)
            var_858_2 = _mm_min_ss(zmm0_1.d, zmm7.d).d
        else
            var_858_2 = zmm6.d
        
        zmm3 = var_798_1:0xc.d
        
        if (zmm3.d f>= zmm6.d)
            zmm3 = _mm_min_ss(zmm3.d, zmm7.d)
        else
            zmm3 = zmm6
        
        zmm2 = var_788_1.d
        
        if (zmm2 f>= zmm6.d)
            zmm2 = _mm_min_ss(zmm2, zmm7.d)
        else
            zmm2 = zmm6.d
        
        zmm1_1 = var_788_1:4.d
        
        if (zmm1_1.d f>= zmm6.d)
            zmm1_1 = _mm_min_ss(zmm1_1.d, zmm7.d)
        else
            zmm1_1 = zmm6
        
        zmm0_1 = rax_7
        
        if (zmm0_1.d f>= zmm6.d)
            zmm0_1 = _mm_min_ss(zmm0_1.d, zmm7.d)
        else
            zmm0_1 = zmm6
        
        var_788_1.d = zmm2
        zmm2 = var_808_1.d
        var_798_1:0xc.d = zmm3.d
        var_788_1:4.d = zmm1_1.d
        int32_t var_780_2 = zmm0_1.d
        
        if (zmm2 f>= zmm6.d)
            zmm2 = _mm_min_ss(zmm2, zmm7.d)
        else
            zmm2 = zmm6.d
        
        uint128_t zmm4_1 = var_808_1:4.d
        
        if (zmm4_1.d f>= zmm6.d)
            zmm4_1 = _mm_min_ss(zmm4_1.d, zmm7.d)
        else
            zmm4_1 = zmm6
        
        zmm3 = var_808_1:8.d
        
        if (zmm3.d f>= zmm6.d)
            zmm3 = _mm_min_ss(zmm3.d, zmm7.d)
        else
            zmm3 = zmm6
        
        zmm13 = var_7e8_1.d
        zmm1_1 = zmm10
        zmm14 = var_7e8_1:4.d
        zmm0_1.d = zmm14.d f* 0.0199999996f
        zmm10.d = zmm8.d f* zmm13[0].d
        zmm1_1.d = zmm1_1.d f* zmm13[0].d
        zmm10.d = zmm10.d f* 10f
        zmm1_1.d = zmm1_1.d f* 10f
        var_6f8 = var_7d8_1
        var_6f8:0xc.d = zmm0_1.d
        zmm0_1.d = zmm5_1.d f* zmm13[0].d
        var_808_1.d = zmm2
        var_808_1:4.d = zmm4_1.d
        zmm0_1.d = zmm0_1.d f* 10f
        var_808_1:8.d = zmm3.d
        int32_t var_778_1 = zmm1_1.d
        zmm5_1 = _mm_max_ss(_mm_max_ss(zmm10.d, zmm1_1.d).d, zmm0_1.d)
        int32_t var_774_1 = zmm10.d
        int32_t var_770_1 = zmm0_1.d
        
        if (not(zmm1_1.d f== zmm5_1.d))
            if (zmm0_1.d f!= zmm5_1.d)
                zmm2 = zmm3.d
            else
                zmm2 = zmm4_1.d
        
        char rcx_5 = var_7e8_1:8.b
        _mm_shuffle_ps(var_808_1, var_808_1, 0x93)
        zmm3.d = zmm2
        int32_t var_76c_1 = zmm5_1.d
        int32_t rax_8
        rax_8.b = rcx_5 == 0
        zmm1_1.d = zmm1_1.d f* 0.00200000009f
        zmm0_1.d = zmm0_1.d f* 0.00200000009f
        _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
        double var_818[0x2] = zmm3
        uint128_t var_808_2 = zmm3
        uint128_t var_6e8_1 = zmm3
        zmm5_1.d = zmm5_1.d f* 0.00200000009f
        zmm10.d = zmm10.d f* 0.00200000009f
        int128_t var_6b8_1 = zmm15
        zmm1_1.d = zmm10.d
        _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc6)
        zmm1_1.d = zmm0_1.d
        zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_8))
        _mm_shuffle_ps(zmm1_1, zmm1_1, 0x27)
        zmm1_1.d = zmm5_1.d
        var_6b8_1:0xc.d = zmm0_1.d
        zmm5_1 = var_798_1:8.d
        zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x39)
        zmm3.d = zmm7.d f- zmm5_1.d
        double var_848[0x2] = zmm1_1
        uint128_t var_6d8_1 = zmm1_1
        zmm1_1 = var_798_1:4.d
        zmm3.d = zmm3.d f* var_798_1.d
        zmm0_1.d = zmm1_1.d f* zmm5_1.d
        zmm3.d = zmm3.d f+ zmm0_1.d
        zmm4_1.d = zmm7.d f/ zmm3.d
        zmm0_1 = zmm4_1
        zmm4_1.d = zmm4_1.d f* var_798_1.d
        zmm0_1.d = zmm0_1.d f* zmm1_1.d
        zmm4_1.d = zmm4_1.d f* 0.5f
        
        if (zmm4_1.d f>= zmm11.d)
            zmm4_1 = _mm_min_ss(zmm4_1.d, zmm7.d)
        else
            zmm4_1 = zmm11
        
        zmm0_1.d = zmm0_1.d f* 0.5f
        int32_t var_6a8_1 = zmm4_1.d
        
        if (zmm0_1.d f>= zmm11.d)
            zmm0_1 = _mm_min_ss(zmm0_1.d, zmm7.d)
        else
            zmm0_1 = zmm11
        
        zmm3.d = zmm3.d f* 0.5f
        int32_t var_6a4_1 = zmm0_1.d
        int32_t var_6a0_1 = zmm5_1.d
        
        if (zmm3.d f>= zmm11.d)
            zmm3 = _mm_min_ss(zmm3.d, zmm7.d)
        else
            zmm3 = zmm11
        
        zmm15 = var_7a8_1.d
        void var_698
        double (* rcx_6)[0x2] = &var_698
        int32_t var_6c4_1 = var_7a8_1:4.d.d
        zmm0_1.d = zmm7.d f/ var_7a8_1:0xc.d
        int32_t var_69c_1 = zmm3.d
        int32_t var_6bc_1 = zmm0_1.d
        int32_t var_6c8_1 = zmm15.d
        int32_t var_6c0_1 = var_7a8_1:8.d.d
        uint128_t var_838
        uint128_t zmm10_1
        double zmm12_1[0x2]
        void var_5c8
        void var_538
        
        if (rcx_5 == 0)
            var_838 = var_7c8_1
            var_848 = var_7d8_1
            uint128_t zmm10_2
            double zmm12_2[0x2]
            zmm10_2, zmm12_2 = sub_142294ca0(rcx_6, 0xd, &var_848, &var_838)
            var_838 = zmm10_2
            var_848 = zmm12_2
            uint128_t zmm10_3
            double zmm12_3[0x2]
            zmm10_3, zmm12_3 = sub_142294ca0(&var_5c8, 9, &var_848, &var_838)
            var_838 = zmm10_3
            var_848 = zmm12_3
            int512_t zmm8_3
            zmm8_3, zmm10_1, zmm12_1 = sub_142294ca0(&var_538, 6, &var_848, &var_838)
            zmm8_3.o = var_7e8_1:0xc.d
        else
            zmm8 = __maxss_xmmss_memss(zmm8.d, var_828_1)
            zmm0_1 = var_818
            var_848 = var_778_1.o
            var_838 = zmm0_1
            zmm8.d = __maxss_xmmss_memss(__maxss_xmmss_memss(zmm8.d, var_824_1).d, var_858_2).d
                f* var_7e8_1.d
            zmm8.d = zmm8.d f* 0.448631644f
            var_880.d = __maxss_xmmss_memss(zmm8.d, 0x3dcccccd).d
            var_888.d = zmm14.d
            int32_t zmm8_1
            uint128_t zmm13_1
            int32_t zmm14_1
            zmm8_1, zmm13_1, zmm14_1 =
                sub_142294090(rcx_6, 0xd, &var_838, &var_848, var_888.d, var_880)
            var_880.d = zmm8_1
            var_848 = var_818
            var_888.d = zmm14_1
            var_838 = zmm13_1
            int32_t zmm8_2
            uint128_t zmm13_2
            int32_t zmm14_2
            zmm8_2, zmm13_2, zmm14_2 =
                sub_142294090(&var_5c8, 9, &var_848, &var_838, var_888.d, var_880)
            var_880.d = zmm8_2
            var_848 = var_818
            var_888.d = zmm14_2
            var_838 = zmm13_2
            zmm10_1, zmm12_1, zmm14, zmm15 =
                sub_142294090(&var_538, 6, &var_848, &var_838, var_888.d, var_880)
            var_6f8.d = 0x3f800000
            var_6f8:4.d = 0x3f800000
            var_6f8:8.d = 0x3f800000
        var_888.d = zmm15.d
        var_838 = zmm10_1
        var_848 = zmm12_1
        float var_4d8[0x20][0x4]
        int32_t r8_9
        int128_t* r9_8
        int128_t zmm10_4
        int128_t zmm12_4
        double zmm13_3[0x2]
        r8_9, r9_8, zmm10_4, zmm12_4, zmm13_3 =
            sub_142295580(&var_4d8, 0x20, &var_848, &var_838, var_888.d)
        zmm14.d = zmm14.d f* 10f
        var_868 = &var_838
        var_838 = var_798_1
        var_870_1.d = zmm14.d
        var_878_1.q = &var_848
        var_880.q = &var_818
        var_888.d = zmm15.d
        var_818 = var_818
        var_848 = zmm13_3
        int128_t var_768_1 = zmm10_4
        int128_t var_758_1 = zmm12_4
        float var_2d8[0x20][0x4]
        float zmm9_1
        zmm6, zmm7, zmm8, zmm9_1, zmm11 =
            sub_1422956b0(&var_2d8, 0x20, r8_9, r9_8, var_888, var_880, var_878_1)
        int16_t* r8_10 = nullptr
        void* rdx_3 = &var_6f8:8
        int32_t r10_1 = 1
        int64_t r9_9 = -6
        int64_t i_1 = 0x31
        int64_t i
        
        do
            zmm1_1 = *(rdx_3 + 4)
            
            if (r9_9 u<= 0x1b)
                zmm1_1.d = zmm1_1.d f* 0.333333343f
                zmm0_1.d = zmm8.d f* 0.0009765625f
                zmm1_1.d = zmm1_1.d f* zmm0_1.d
            
            zmm3.d = (*(rdx_3 - 4)).d f* zmm9_1
            int64_t rcx_15 = zx.q(rbx * var_820) + rax_4
            zmm4_1.d = (*rdx_3).d f* zmm9_1
            *(r8_10 + rcx_15) = (int.d(*(rdx_3 - 8) * zmm9_1)).w
            zmm1_1.d = zmm1_1.d f* zmm9_1
            *(r8_10 + rcx_15 + 2) = (int.d(zmm3.d)).w
            *(r8_10 + rcx_15 + 4) = (int.d(zmm4_1.d)).w
            *(r8_10 + rcx_15 + 6) = (int.d(zmm1_1.d)).w
            zmm3 = *(rdx_3 + 0xc)
            zmm4_1 = *(rdx_3 + 0x10)
            zmm1_1 = *(rdx_3 + 0x14)
            
            if (r10_1 - 6 u<= 0x1b)
                zmm1_1.d = zmm1_1.d f* 0.333333343f
                zmm0_1.d = zmm8.d f* 0.0009765625f
                zmm1_1.d = zmm1_1.d f* zmm0_1.d
            
            zmm2 = *(rdx_3 + 8) * zmm9_1
            r10_1 += 2
            r9_9 += 2
            rdx_3 += 0x20
            zmm3.d = zmm3.d f* zmm9_1
            int64_t rcx_18 = zx.q(rbx * var_820) + rax_4
            zmm4_1.d = zmm4_1.d f* zmm9_1
            *(r8_10 + rcx_18 + 8) = (int.d(zmm2)).w
            zmm1_1.d = zmm1_1.d f* zmm9_1
            *(r8_10 + rcx_18 + 0xa) = (int.d(zmm3.d)).w
            *(r8_10 + rcx_18 + 0xc) = (int.d(zmm4_1.d)).w
            *(r8_10 + rcx_18 + 0xe) = (int.d(zmm1_1.d)).w
            r8_10 = &r8_10[8]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx += 1
    while (rbx u< rsi)

int64_t* rcx_19 = data_143f0f180
var_888.b = 0
int64_t result = (*(*rcx_19 + 0x518))(rcx_19, arg2, *(data_143f53cc8 + 0x10), 0, var_888, 1, 
    var_878_1, var_870_1, var_868)
__security_check_cookie(rax_1 ^ &var_8a8)
return result
