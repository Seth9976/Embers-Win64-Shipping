// 函数: sub_141b58000
// 地址: 0x141b58000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
int64_t rax_1 = __security_cookie ^ &var_4c8
void* r14 = *arg3
char var_478
char* var_370 = &var_478
var_478 = 0
void*** (* var_378)() = j_sub_140597fc0
int64_t* rax_3 = sub_140a756e0(&var_378, &data_143958018) + 0x10
int64_t* var_440 = rax_3
int64_t rcx_1 = *rax_3
int64_t rcx_2 = rax_3[2]
char var_428 = 0
int64_t result_1 = rax_3[3]
rax_3[3] = &var_440
int64_t* rax_4 = var_440
rax_4[4].d += 1
int64_t* rcx_3 = arg3[3]
void* rcx_4 = *(*(*rcx_3 + 8))(rcx_3)
void* var_468 = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

void* rdi = &arg2[6]
void* rax_7 = var_468
void** rbx_2 = (arg2[6] + 7) & 0xfffffffffffffff8
void* rcx_5 = &rbx_2[1]
int128_t zmm6

if (rcx_5 u> *(rdi + 8))
    zmm6 = sub_140b0e3d0(rdi, 0x10)
    rbx_2 = (*rdi + 7) & 0xfffffffffffffff8
    rcx_5 = &rbx_2[1]

*rdi = rcx_5
*rbx_2 = rax_7
void*** rcx_9 = (*rdi + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_9[5]

if (rax_8 u> *(rdi + 8))
    zmm6 = sub_140b0e3d0(rdi, 0x30)
    rcx_9 = (*rdi + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_9[5]

*rdi = rax_8
void**** rax_9 = arg2[1]
*(arg2 + 0x14) += 1
int128_t zmm1 = data_142d3f5a0
*rax_9 = rcx_9
arg2[1] = &rcx_9[1]
rcx_9[1] = 0
rcx_9[3] = rbx_2
void* rbx_5 = var_468
*rcx_9 = &data_142d549c8
rcx_9[2].d = 1
rcx_9[4].d = 1
int32_t var_130 = 0
int32_t var_12c
__builtin_memset(&var_12c, 0xff, 0x14)
int128_t var_118 = zmm1
int64_t var_108
__builtin_memset(&var_108, 0, 0x19)
void* var_208 = rbx_5
int64_t var_200 = 0
int32_t var_1f8 = 0xffffffff
int16_t var_1f4 = 0x500
int64_t var_148
__builtin_memset(&var_148, 0, 0x11)
int32_t var_134 = 0
bool var_ef = *(rbx_5 + 0x38) u> 1
void var_1f0
memset(&var_1f0, 0, 0xa8)
char rax_11 = var_1f4:1.b

if (arg3[5].b != 0)
    rax_11 = 9

int64_t rbx_8 = (*rdi + 1) & 0xfffffffffffffffe
var_1f4:1.b = rax_11
int64_t rax_12 = rbx_8 + 0x10

if (rax_12 u> *(rdi + 8))
    zmm6 = sub_140b0e3d0(rdi, 0x12)
    rbx_8 = (*rdi + 1) & 0xfffffffffffffffe
    rax_12 = rbx_8 + 0x10

wchar16 const* const rcx_15 = u"Slate3D"
*rdi = rax_12
wchar16 const i

do
    i = *rcx_15
    *(rcx_15 + rbx_8 - u"Slate3D") = i
    rcx_15 = &rcx_15[1]
while (i != 0)
void*** rcx_18 = (*rdi + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_18[0x27]

if (rax_13 u> *(rdi + 8))
    zmm6 = sub_140b0e3d0(rdi, 0x140)
    rcx_18 = (*rdi + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_18[0x27]

*rdi = rax_13
void**** rax_14 = arg2[1]
*(arg2 + 0x14) += 1
*rax_14 = rcx_18
arg2[1] = &rcx_18[1]
sub_1405d11b0(rcx_18, &var_208, rbx_8)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_208)
int32_t i_1 = 0
int64_t var_f8
arg2[0x2f].b = var_f8:7.b
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
int32_t i_2 = 0

if (*(r14 + 0x18) s> 0)
    int128_t zmm15 = 0x3f800000
    int64_t* rcx_23 = nullptr
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    int128_t zmm8
    int128_t var_68_1 = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    int128_t zmm11
    int128_t var_98_1 = zmm11
    int128_t zmm12
    int128_t var_a8_1 = zmm12
    int128_t zmm13
    int128_t var_b8_1 = zmm13
    int128_t zmm14
    int128_t var_c8_1 = zmm14
    int64_t* var_458_1 = nullptr
    
    do
        int64_t* r14_2 = *(rcx_23 + *(r14 + 0x10)) + 0x48
        
        if (r14_2[1].d s> 0)
            sub_141b4f3e0(*(arg1 + 0x140), arg2, r14_2)
            void* rax_18 = *arg3
            void* rbx_11 = var_468
            int64_t var_3b4_1 = 0
            int64_t var_3ac_1 = 0
            *(rax_18 + 0x38)
            *(rax_18 + 0x3c)
            int64_t var_3a0_1 = 0
            int32_t var_380_1 = 0x3f000000
            int32_t var_37c_1 = 0x3f800000
            int128_t zmm3
            zmm3.d = float.s(zx.q(*(rbx_11 + 0x60)))
            float zmm2 = float.s(zx.q(*(rbx_11 + 0x64)))
            float zmm1_1 = zmm15.d f/ zmm3.d
            int128_t zmm0_1
            zmm0_1.d = zmm15.d f/ zmm2
            zmm3.d = zmm3.d f* zmm1_1
            zmm2 = zmm2 f* zmm0_1.d
            zmm0_1.d = zmm0_1.d f* -2f
            zmm3 ^= data_142d3f780
            float var_3b8 = zmm1_1 + zmm1_1
            int32_t var_3a4_1 = zmm0_1.d
            int128_t var_398_1 = data_14306d0d0
            int32_t var_388_1 = zmm3.d
            float var_384_1 = zmm2
            float var_288[0x4]
            int32_t zmm13_1
            int32_t zmm14_1
            zmm13_1, zmm14_1 = sub_141b4d3f0(&var_288, &var_3b8)
            float zmm2_1[0x4] = data_142d4cc00
            float zmm3_1[0x4] = data_142d4cc20
            float zmm7_1[0x4] = var_288
            float zmm4_1[0x4] = data_142d4cc30
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
            float temp0_4[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
            float temp0_5[0x4] = _mm_mul_ps(temp0_2, zmm7_1)
            int32_t var_2d0_1 = 0
            float var_268[0x4]
            float temp0_6[0x4] = _mm_mul_ps(temp0_3, var_268)
            int32_t var_2cc_1 = 0x3f800000
            float var_278[0x4]
            float temp0_7[0x4] = _mm_mul_ps(temp0_1, var_278)
            float temp0_8[0x4] = _mm_mul_ps(temp0_4, var_278)
            int128_t var_308
            __builtin_memcpy(&var_308, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00", 
                0x30)
            float temp0_9[0x4] = _mm_add_ps(temp0_7, temp0_5)
            float temp0_10[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
            float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0), zmm7_1)
            float temp0_13[0x4] = _mm_add_ps(temp0_9, temp0_6)
            float var_258[0x4]
            float temp0_14[0x4] = _mm_mul_ps(temp0_10, var_258)
            float temp0_15[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
            float temp0_16[0x4] = _mm_add_ps(temp0_8, temp0_12)
            float temp0_17[0x4] = _mm_mul_ps(temp0_15, var_268)
            float temp0_18[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
            float zmm9_1[0x4] = _mm_add_ps(temp0_13, temp0_14)
            float temp0_20[0x4] = _mm_mul_ps(temp0_18, var_258)
            float temp0_21[0x4] = _mm_add_ps(temp0_16, temp0_17)
            float temp0_22[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            float zmm10_1[0x4] = _mm_add_ps(temp0_21, temp0_20)
            int32_t rax_21 = *(rbx_11 + 0x60)
            int64_t* rcx_26 = arg3[3]
            float var_2d8[0x4]
            var_2d8[0] = zmm13_1
            float temp0_24[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
            float temp0_25[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
            float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm7_1)
            int32_t rax_22 = *(rbx_11 + 0x64)
            float temp0_27[0x4] = _mm_shuffle_ps(var_2d8, var_2d8, 0xe1)
            float temp0_28[0x4] = _mm_mul_ps(temp0_25, var_268)
            temp0_27[0] = zmm14_1
            int32_t var_45c_1 = rax_22
            int64_t rax_23 = *rcx_26
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xe1)
            float temp0_30[0x4] = _mm_mul_ps(temp0_22, var_278)
            float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0x55), var_278)
            float temp0_33[0x4] = _mm_add_ps(temp0_30, temp0_26)
            var_2d8 = temp0_29
            float temp0_34[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
            float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0), zmm7_1)
            float temp0_37[0x4] = _mm_add_ps(temp0_33, temp0_28)
            float temp0_38[0x4] = _mm_mul_ps(temp0_34, var_258)
            float temp0_39[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)
            float temp0_40[0x4] = _mm_add_ps(temp0_32, temp0_36)
            float temp0_41[0x4] = _mm_mul_ps(temp0_39, var_268)
            float temp0_42[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xff)
            float zmm11_1[0x4] = _mm_add_ps(temp0_37, temp0_38)
            float temp0_44[0x4] = _mm_mul_ps(temp0_42, var_258)
            float zmm12_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_40, temp0_41), temp0_44)
            void* rdx_6 = *(*(rax_23 + 8))(rcx_26)
            void* var_418 = rdx_6
            
            if (rdx_6 != 0)
                *(rdx_6 + 8) += 1
                rdx_6 = var_418
            
            int64_t var_3d8 = 0
            void** const var_3e0 = &data_14306c500
            int64_t var_3d0_1 = rax_21.q
            sub_1405d16e0(&var_3d8, rdx_6)
            sub_1405d1550(&var_418)
            int64_t* rcx_29 = arg3[3]
            int32_t var_320_1 = arg3[1].d
            int32_t var_318_1 = arg3[2].d
            int32_t var_31c_1 = *(arg3 + 0xc)
            int32_t var_328_1 = zmm13_1
            int32_t var_324_1 = zmm14_1
            uint128_t var_368 = zmm9_1
            float var_358_1[0x4] = zmm10_1
            float var_348_1[0x4] = zmm11_1
            float var_338_1[0x4] = zmm12_1
            int16_t var_313_1 = 0
            char var_314_1 = 0
            int64_t* rcx_30 = *(*(*rcx_29 + 8))(rcx_29)
            int64_t* var_470 = rcx_30
            
            if (rcx_30 != 0)
                rcx_30[1].d += 1
            
            if (sub_140e1ab80(r14_2) != 0)
                void* rcx_32 = *(arg1 + 0x160)
                int64_t* rax_29
                
                if (rcx_32 != 0)
                    rax_29 = var_470
                
                if (rcx_32 == 0 || rax_29[0xc].d != *(rcx_32 + 0x60)
                        || *(rax_29 + 0x64) != *(rcx_32 + 0x64))
                    sub_1405d16e0(arg1 + 0x160, nullptr)
                    int128_t var_248
                    int128_t* var_480_1 = &var_248
                    uint128_t* var_488
                    var_488.d = 0xc
                    int64_t* rcx_36 = data_143f0f180
                    int32_t var_224_1 = (1 << (data_1439c7a34).b) - 1
                    var_248 = zx.o(0)
                    int64_t var_218_1 = 0
                    int32_t var_210_1 = 0
                    int32_t var_228_1 = data_1439c7b60
                    int64_t* rax_33 = var_470
                    int64_t* var_490
                    var_490.d = 1
                    char var_220_1 = 0
                    int128_t var_238_1 = data_1439c7b50
                    int64_t* var_4a0
                    var_4a0.b = 0xb
                    int64_t* var_4a8
                    var_4a8.d = *(rax_33 + 0x64)
                    void* const var_448
                    (*(*rcx_36 + 0x560))(rcx_36, &var_448, &data_143f02b98, zx.q(rax_33[0xc].d), 
                        var_4a8, var_4a0, 1, var_490, var_488, var_480_1)
                    void* const rdx_10 = var_448
                    void* const var_3c0 = rdx_10
                    var_448 = nullptr
                    sub_1405d16e0(arg1 + 0x160, rdx_10)
                    sub_1405d1550(&var_448)
                    sub_1405d1550(&var_3c0)
            
            zmm15 = sub_141b55710(*(arg1 + 0x140), arg2, &var_3e0, &var_470, &var_470, 
                arg1 + 0x160, r14_2[0xa].d, r14_2, &var_368)
            int64_t* rbx_12 = var_470
            
            if (rbx_12 != 0)
                rbx_12[1].d -= 1
                
                if (rbx_12[1].d == 1)
                    char rax_36
                    
                    if (rbx_12[2].b == 0 && data_143f0f1d0 == 0)
                        rax_36 = sub_1405949a0()
                    
                    if (rbx_12[2].b != 0 || (data_143f0f1d0 == 0 && rax_36 != 0))
                        (**rbx_12)(rbx_12, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_12 + 0xc))
                            *(rbx_12 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_12 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_38 = sub_140a20af0()
                            uint64_t rdx_12 = zx.q(rax_38)
                            void* const rax_39
                            
                            if (rax_38 != 0)
                                rax_39 = *(&data_143cf0bf8 + (rdx_12 u>> 0xe << 3))
                                    + (zx.q(rdx_12.d) & 0x3fff) * 0x18
                            else
                                rax_39 = nullptr
                            
                            *(rax_39 + 8) = rbx_12
                            sub_1405a42f0(&data_143f02390, rdx_12.d)
            
            var_3e0 = &data_142f18c08
            sub_1405d1550(&var_3d8)
            rcx_23 = var_458_1
            i_1 = i_2
        
        i_1 += 1
        rcx_23 = &rcx_23[2]
        i_2 = i_1
        var_458_1 = rcx_23
    while (i_1 s< *(r14 + 0x18))
    
    rdi = &arg2[6]

if (*(r14 + 0x18) s<= 0 || *(arg2 + 0x1c4) != 0)
    sub_141096650(arg2)

sub_141b5cea0(arg2, *arg3, *(arg1 + 0x140))
int64_t* rcx_49 = arg3[3]
void* rax_44 = var_468
int128_t var_410 = data_142d57d10
int128_t zmm0_5 = data_142d57920
int128_t var_400 = data_142d3f800
int64_t* rax_46 = (*(*rcx_49 + 8))(rcx_49)
void*** rbx_15 = (*rdi + 7) & 0xfffffffffffffff8
int64_t* r14_3 = *rax_46
void* rax_47 = &rbx_15[0xa]

if (rax_47 u> *(rdi + 8))
    sub_140b0e3d0(rdi, 0x58)
    rbx_15 = (*rdi + 7) & 0xfffffffffffffff8
    rax_47 = &rbx_15[0xa]

*rdi = rax_47
void**** rax_48 = arg2[1]
*(arg2 + 0x14) += 1
*rax_48 = rbx_15
arg2[1] = &rbx_15[1]
rbx_15[1] = 0
*rbx_15 = &data_142d56628
rbx_15[2].d = var_410.d
__builtin_memset(rbx_15 + 0x14, 0xff, 0x20)
*(rbx_15 + 0x34) = zmm0_5:4.d
rbx_15[7].d = zmm0_5:8.d
*(rbx_15 + 0x3c) = zmm0_5:0xc.d
rbx_15[9] = rax_44
rbx_15[8] = r14_3

if ((*(*r14_3 + 8))(r14_3) == 0)
    int64_t* rcx_52 = rbx_15[8]
    
    if ((*(*rcx_52 + 0x18))(rcx_52) == 0)
        int64_t* rcx_53 = rbx_15[8]
        
        if ((*(*rcx_53 + 0x20))(rcx_53) == 0)
            int64_t* rcx_54 = rbx_15[8]
            (*(*rcx_54 + 0x10))(rcx_54)

int64_t* rcx_55 = rbx_15[9]

if ((*(*rcx_55 + 8))(rcx_55) == 0)
    int64_t* rcx_56 = rbx_15[9]
    
    if ((*(*rcx_56 + 0x18))(rcx_56) == 0)
        int64_t* rcx_57 = rbx_15[9]
        
        if ((*(*rcx_57 + 0x20))(rcx_57) == 0)
            int64_t* rcx_58 = rbx_15[9]
            (*(*rcx_58 + 0x10))(rcx_58)

int64_t* rbx_18 = *(arg1 + 0x10)
int64_t r14_4 = 0

if (rbx_18 != 0)
    int32_t rax_69 = 0
    bool z_2
    
    if (0 == rbx_18[1].d)
        rbx_18[1].d = 0
        z_2 = true
    else
        rax_69 = rbx_18[1].d
        z_2 = false
    
    if (z_2)
    label_141b58aea:
        rbx_18 = nullptr
    else
        while (true)
            bool z_3
            
            if (rax_69 == rbx_18[1].d)
                rbx_18[1].d = rax_69 + 1
                z_3 = true
            else
                rbx_18[1].d
                z_3 = false
            
            if (z_3)
                if (rbx_18 != 0)
                    r14_4 = *(arg1 + 8)
                    rbx_18[1].d += 1
                    rbx_18[1].d -= 1
                    
                    if (rbx_18[1].d == 1)
                        (**rbx_18)(rbx_18)
                        int32_t rax_73 = *(rbx_18 + 0xc)
                        *(rbx_18 + 0xc) -= 1
                        
                        if (rax_73 == 1)
                            (*(*rbx_18 + 8))(rbx_18, 1)
                    
                    rbx_18[1].d += 1
                    rbx_18[1].d -= 1
                    
                    if (rbx_18[1].d == 1)
                        (**rbx_18)(rbx_18)
                        int32_t rax_77 = *(rbx_18 + 0xc)
                        *(rbx_18 + 0xc) -= 1
                        
                        if (rax_77 == 1)
                            (*(*rbx_18 + 8))(rbx_18, 1)
                
                break
            
            rax_69 = 0
            bool z_4
            
            if (0 == rbx_18[1].d)
                rbx_18[1].d = 0
                z_4 = true
            else
                rax_69 = rbx_18[1].d
                z_4 = false
            
            if (z_4)
                goto label_141b58aea

void*** rcx_66 = (*rdi + 7) & 0xfffffffffffffff8
void* rax_79 = &rcx_66[4]

if (rax_79 u> *(rdi + 8))
    sub_140b0e3d0(rdi, 0x28)
    rcx_66 = (*rdi + 7) & 0xfffffffffffffff8
    rax_79 = &rcx_66[4]

*rdi = rax_79
void** rax_80 = arg2[1]
*(arg2 + 0x14) += 1
*rax_80 = rcx_66
arg2[1] = &rcx_66[1]

if (rbx_18 != 0)
    rbx_18[1].d += 1

rcx_66[1] = 0
*rcx_66 = &data_14306c708
rcx_66[2] = r14_4
rcx_66[3] = rbx_18

if (rbx_18 != 0)
    rbx_18[1].d += 1
    rbx_18[1].d -= 1
    
    if (rbx_18[1].d == 1)
        (**rbx_18)(rbx_18)
        int32_t rax_84 = *(rbx_18 + 0xc)
        *(rbx_18 + 0xc) -= 1
        
        if (rax_84 == 1)
            (*(*rbx_18 + 8))(rbx_18, 1)
    
    rbx_18[1].d -= 1
    
    if (rbx_18[1].d == 1)
        (**rbx_18)(rbx_18)
        int32_t r12_1 = *(rbx_18 + 0xc)
        *(rbx_18 + 0xc) -= 1
        
        if (r12_1 == 1)
            (*(*rbx_18 + 8))(rbx_18, 1)

int64_t var_100
sub_1405d1550(&var_100)
int64_t result = sub_1405d1550(&var_468)

if (var_428 == 0)
    int64_t* rax_89 = var_440
    char var_428_1 = 1
    rax_89[4].d -= 1
    int64_t* rcx_76 = var_440
    
    if (rcx_2 != rcx_76[2])
        sub_140b16b40(rcx_76, rcx_2)
        rcx_76 = var_440
    
    *rcx_76 = rcx_1
    result = result_1
    var_440[3] = result

__security_check_cookie(rax_1 ^ &var_4c8)
return result
