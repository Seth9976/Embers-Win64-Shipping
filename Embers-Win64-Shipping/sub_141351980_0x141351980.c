// 函数: sub_141351980
// 地址: 0x141351980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_9e8
int64_t rax_1 = __security_cookie ^ &var_9e8
void* r13 = arg2
int32_t rdx

if (sub_14135b9e0().d f<= 0f)
    rdx = 2
else
    rdx.b = *(data_143ebb208 + 4) != 0

int32_t rcx = *(data_143ebb758 + 4)
int32_t var_990
int32_t var_98c

if (rcx != 0)
    int32_t rcx_1
    
    if (rcx != 1 && rcx == 2)
        rcx_1 = *(arg4 + 0x5c)
    
    if (rcx != 1 && rcx == 2 && (rcx_1 == 1 || rcx_1 == 0xa))
        var_990 = 0
        var_98c = 0
    else
        var_990 = 2
        var_98c = 6
else
    var_990 = 0
    var_98c = 0

int32_t rdi
rdi.b = rdx == 1
char var_9b8_1
int32_t rax_5

if (*(data_143ebb868 + 4) != 0 && rdx != 1)
    rax_5 = sub_1422e5a30(r13)
    var_9b8_1 = 0

if (*(data_143ebb868 + 4) == 0 || rdx == 1 || rax_5 == 6)
    var_9b8_1 = 1

int64_t var_898 = data_143dbb180
int64_t rax_7 = arg3[1]
int64_t var_9b0 = rax_7
int32_t temp0 = divs.dp.d(sx.q(rax_7.d), rdi + 1)
int64_t* rbx_1 = *arg3
var_9b0.d = temp0
int32_t var_8fc = rdi + 1
int64_t r8 = (rdi + 1).q
int32_t var_890 = temp0
int64_t* rcx_6 = arg3[2]
var_9b0:4.d = divs.dp.d(sx.q(var_9b0:4.d), (r8 u>> 0x20).d)
uint32_t var_88c = (var_9b0 u>> 0x20).d
uint32_t r8_1 = (r8 u>> 0x20).d
int64_t* var_998 = rcx_6
int32_t r9_1 = divs.dp.d(sx.q((rcx_6 - 1).d + rdi + 1), rdi + 1)
int32_t rax_22 = divs.dp.d(sx.q(r8_1 - 1 + (rcx_6 u>> 0x20).d), r8_1)

if (r9_1 s<= 1)
    r9_1 = 1

var_998.d = r9_1

if (rax_22 s<= 1)
    rax_22 = 1

int32_t var_888 = r9_1
var_998:4.d = rax_22
uint32_t var_884 = (var_998 u>> 0x20).d
var_998 = rbx_1
int32_t r14_1 = divs.dp.d(sx.q((rbx_1 - 1).d + rdi + 1), rdi + 1)
int32_t rax_32 = divs.dp.d(sx.q(r8_1 - 1 + (rbx_1 u>> 0x20).d), r8_1)

if (r14_1 s<= 1)
    r14_1 = 1

var_998.d = r14_1

if (rax_32 s<= 1)
    rax_32 = 1

var_898.d = r14_1
var_998:4.d = rax_32
uint32_t r12_1 = (var_998 u>> 0x20).d
var_898:4.d = r12_1
int32_t temp39
int32_t temp40
temp39:temp40 = sx.q((var_898 u>> 0x20).d + 7)
int32_t temp41
int32_t temp42
temp41:temp42 = sx.q(r14_1 + 7)
uint64_t rdi_4 = zx.q((((temp39 & 7) + temp40) s>> 3) * ((temp42 + (temp41 & 7)) s>> 3))
uint64_t rdx_13 = *arg1
int32_t var_8f0 = 1
int128_t var_394 = zx.o(0)
int32_t var_1fc = 0
char var_1ce = 0
int32_t temp0_6 = _mm_bsrli_si128(zx.o(0), 0xc)
int128_t var_8ec = zx.o(0)
int16_t var_190 = 0
uint128_t var_218 = 1.o
int32_t var_1ac = 0
int32_t temp0_7 = _mm_bsrli_si128(zx.o(0), 0xc)
char var_17e = 0
uint128_t var_1c8 = var_8f0.o
int16_t var_1e0 = 0
int32_t var_204 = r14_1
uint32_t var_200 = r12_1
int32_t var_1f8 = 1
int32_t var_1f4 = 0x10000
int16_t var_1f0 = 1
int64_t var_1ec = 0xa
int32_t var_1e4 = 0x10009
wchar16 const* const var_1d8 = u"UnknownTexture2D"
int16_t var_1d0 = 1
int32_t var_1b4 = r14_1
uint32_t var_1b0 = r12_1
int32_t var_1a8 = 1
int32_t var_1a4 = 0x60000
int16_t var_1a0 = 1
int64_t var_19c = 0xa
int32_t var_194 = 0x10009
wchar16 const* const var_188 = u"UnknownTexture2D"
int16_t var_180 = 1
float var_778[0x4]
uint128_t zmm11
int128_t zmm12
float zmm13[0x4]
int128_t zmm14
uint128_t zmm15
zmm11, zmm12, zmm13, zmm14, zmm15 = sub_14135b870(&var_778, rdx_13, r13)
int32_t var_988
sub_141455b70(&var_988, &var_898)
int128_t var_828
uint128_t zmm9
uint128_t zmm10
zmm9, zmm10 = sub_141455b70(&var_828, arg3)
int64_t rax_41 = data_14395fa10
int64_t rax_42 = data_1439b5bb0
void* rax_43 = *(r13 + 8)
int64_t* var_8f8 = nullptr
int64_t* rcx_13 = rax_43 + 0xbd0

if (rax_43 == 0)
    rcx_13 = nullptr

int64_t* rdx_16

if (rcx_13 == 0)
    rdx_16 = &data_1439b70c8
else
    int64_t* rcx_14 = *rcx_13
    
    if (rcx_14 == 0)
        rdx_16 = &data_1439b70c8
    else
        void* rax_45 = (*(*rcx_14 + 0x10))(rcx_14)
        
        if (rbx_1.d != *(rax_45 + 0x14))
            rdx_16 = &data_1439b70c8
        else
            rdx_16 = rcx_13
            
            if ((rbx_1 u>> 0x20).d != *(rax_45 + 0x18))
                rdx_16 = &data_1439b70c8

void*** rax_46 = sub_1410fccd0(arg1, rdx_16, u"QualityHistoryTexture", 0)
int32_t r15_2 = rdx
int32_t var_900
var_900.q = 0
int32_t var_984
int64_t var_980
int128_t var_978
float var_968
float var_964
float var_960
float var_95c
uint128_t var_958
uint128_t var_948
uint128_t var_938
uint128_t var_928
uint128_t* var_8c8
int128_t var_818
float var_808
float var_804
float var_800
float var_7fc
int128_t var_7f8
int128_t var_7e8
int128_t var_7d8
int128_t var_7c8
void* var_768
void* var_760
int64_t var_758
int64_t var_750
int64_t i_2
uint128_t var_3f8
uint128_t var_3e8
uint128_t var_3c8
uint128_t var_3b8
uint128_t zmm7_1
uint128_t zmm8

if (r15_2 == 2)
    zmm8 = var_778
else
    uint128_t var_88_1 = zmm9
    int128_t* rdx_17 = &var_218
    uint128_t var_98_1 = zmm10
    uint128_t var_a8_1 = zmm11
    int128_t var_b8_1 = zmm12
    
    if (var_9b8_1 == 0)
        rdx_17 = &var_1c8
    
    float var_c8_1[0x4] = zmm13
    int128_t var_d8_1 = zmm14
    uint128_t var_e8_1 = zmm15
    void*** rax_47 = sub_141188e50(arg1, rdx_17, u"SubsurfaceSetupTexture", 0)
    *arg1
    int64_t* rbx_2 = &data_143ec4cb0
    int64_t* rcx_18 = data_143ec4cb0
    void* rax_48
    
    if (rcx_18 != 0)
        int64_t rdx_18 = *rcx_18
        rax_48 = (*(rdx_18 + 0x10))(rcx_18, rdx_18)
    
    if (rcx_18 == 0 || r14_1 != *(rax_48 + 0x14) || r12_1 != *(rax_48 + 0x18))
        rbx_2 = &data_1439b70c8
    
    void*** rax_49 = sub_1410fccd0(arg1, rbx_2, u"Velocity", 0)
    int64_t* rcx_20 = data_143f0f180
    int32_t var_738 = rdi_4.d
    (*(*rcx_20 + 0xf8))(rcx_20, &var_8f8, &var_738, &data_143ebd0a0, 1, 1, var_9b8_1, var_9b0)
    int64_t* rbx_3 = var_8f8
    var_998 = rbx_3
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
        int64_t* rbx_4 = var_8f8
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                char rax_51
                
                if (rbx_4[2].b == 0 && data_143f0f1d0 == 0)
                    rax_51 = sub_1405949a0()
                
                if (rbx_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_51 != 0))
                    (**rbx_4)(rbx_4, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_4 + 0xc))
                        *(rbx_4 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_4 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, rbx_4)
        
        rbx_3 = var_998
    
    zmm10 = var_1c8
    zmm9 = temp0_7.o
    zmm8 = var_1a8.o
    zmm7_1 = var_19c:4.o
    uint128_t var_2b8 = zmm10
    uint128_t var_2a8_1 = zmm9
    uint128_t var_298_1 = zmm8
    uint128_t var_288_1 = zmm7_1
    int128_t var_278_1 = var_188.o
    int32_t var_9c8_1
    var_9c8_1.q = &var_898
    void*** rax_54
    int128_t zmm6_2
    rax_54, zmm6_2 = sub_1413553f0(arg1, &var_2b8, u"SubsurfaceSubpassOneTex", r13, var_9c8_1)
    var_738.q = rax_54
    uint128_t var_268 = zmm10
    var_9c8_1.q = &var_898
    uint128_t var_258_1 = zmm9
    uint128_t var_248_1 = zmm8
    uint128_t var_238_1 = zmm7_1
    int128_t var_228_1 = zmm6_2
    var_8f8 = sub_1413553f0(arg1, &var_268, u"SubsurfaceSubpassTwoTex", r13, var_9c8_1)
    
    if (var_9b8_1 == 0)
        var_3f8 = var_218
        uint128_t var_3d8_1 = var_1f8.o
        var_3e8 = temp0_6.o
        var_3b8 = var_1d8.o
        var_3c8 = var_1ec:4.o
        var_9c8_1.q = &var_898
        var_900.q = sub_1413553f0(arg1, &var_3f8, u"SubsurfaceQualityHistoryState", r13, var_9c8_1)
    
    int32_t rdi_5 = ((rdi_4 << 1) + 2).d
    int64_t var_9a8_1 = 0x209
    var_9b0:4.d = rdi_5
    i_2 = 4
    var_9b0.d = 4
    void*** rax_57 = sub_14081d830(0x48, arg1[1], 1, 0)
    void*** r15_4 = rax_57
    
    if (rax_57 == 0)
        r15_4 = nullptr
    else
        r15_4[2] = 0
        r15_4[1] = u"SeparableGroupBuffer"
        r15_4[3].b = 0
        *(r15_4 + 0x1c) = 0
        r15_4[4] = 0
        r15_4[5].w = 0x200
        *r15_4 = &data_142f285d0
        *(r15_4 + 0x30) = var_9b0.o
        r15_4[8] = 0
    
    int64_t var_9a8_2 = 0x209
    var_9b0.d = 4
    var_9b0:4.d = rdi_5
    void*** rax_58 = sub_14081d830(0x48, arg1[1], 1, 0)
    void*** r14_2 = rax_58
    
    if (rax_58 == 0)
        r14_2 = nullptr
    else
        r14_2[2] = 0
        r14_2[1] = u"BurleyGroupBuffer"
        r14_2[3].b = 0
        *(r14_2 + 0x1c) = 0
        r14_2[4] = 0
        r14_2[5].w = 0x200
        *r14_2 = &data_142f285d0
        *(r14_2 + 0x30) = var_9b0.o
        r14_2[8] = 0
    
    int64_t var_9a8_3 = 0x309
    var_9b0.d = 4
    var_9b0:4.d = 4
    void*** rax_59 = sub_14081d830(0x48, arg1[1], 1, 0)
    void*** r13_1 = rax_59
    
    if (rax_59 == 0)
        r13_1 = nullptr
    else
        r13_1[2] = 0
        r13_1[1] = u"SeprableIndirectDispatchArgs"
        r13_1[3].b = 0
        *(r13_1 + 0x1c) = 0
        r13_1[4] = 0
        r13_1[5].w = 0x200
        *r13_1 = &data_142f285d0
        *(r13_1 + 0x30) = var_9b0.o
        r13_1[8] = 0
    
    int64_t var_9a8_4 = 0x309
    var_9b0.d = 4
    var_9b0:4.d = 4
    void*** rax_60 = sub_14081d830(0x48, arg1[1], 1, 0)
    void*** r12_2 = rax_60
    
    if (rax_60 == 0)
        r12_2 = nullptr
    else
        r12_2[2] = 0
        r12_2[1] = u"BurleyIndirectDispatchArgs"
        r12_2[3].b = 0
        *(r12_2 + 0x1c) = 0
        r12_2[4] = 0
        r12_2[5].w = 0x200
        *r12_2 = &data_142f285d0
        *(r12_2 + 0x30) = var_9b0.o
        r12_2[8] = 0
    
    uint128_t var_918
    sub_1419a2ec0(*(arg2 + 0x5150), &var_918, &data_143ebd110, 0)
    zmm7_1 = var_918
    int64_t* rax_61 = sub_14081d830(0x10, arg1[1], 1, 0)
    int64_t* rdi_6 = rax_61
    
    if (rax_61 == 0)
        rdi_6 = nullptr
    else
        *rdi_6 = 0
        rdi_6[1] = 0
    
    *rdi_6 = 0
    rdi_6[1] = 0
    var_9a8_4.d = 0x1c
    var_9a8_4:4.w = 0
    void*** rax_62 = sub_14081d830(0x28, arg1[1], 1, 0)
    
    if (rax_62 != 0)
        rax_62[1] = r14_2[1]
        rax_62[2] = 0
        *(rax_62 + 0x18) = r14_2.o
        *rax_62 = &data_142f285c0
    
    rdi_6[1] = rax_62
    var_9a8_4.d = 0x1c
    var_9a8_4:4.w = 0
    void*** rax_63
    int64_t rcx_28
    int512_t zmm6_3
    rax_63, rcx_28, zmm6_3 = sub_14081d830(0x28, arg1[1], 1, 0)
    
    if (rax_63 != 0)
        rcx_28 = r15_4[1]
        rax_63[1] = rcx_28
        *rax_63 = &data_142f285c0
        rax_63[2] = 0
        *(rax_63 + 0x18) = r15_4.o
    
    *rdi_6 = rax_63
    zmm6_3.o = zx.o(0)
    void*** var_9b0_2
    var_9b0_2.d = 1
    var_9b0_2:4.d = 1
    int64_t var_7b8_1 = sub_14135a450(rcx_28.b)
    sub_141998c50(var_918.q, &data_143ec19b0, rdi_6)
    var_8f0.q = rdi_6
    int32_t var_8d0_1 = 1
    void*** var_8d8_1 = var_9b0_2
    void*** rax_64
    char rcx_30
    rax_64, rcx_30 = sub_14081d830(0x60, arg1[1], 1, 0)
    void*** rdi_7
    
    if (rax_64 == 0)
        rdi_7 = nullptr
    else
        var_918.q = rdi_6
        sub_14135a450(rcx_30)
        rdi_7 = rax_64
        var_918:8.q = &data_143ec19e0
        uint128_t var_2c8 = var_918
        void var_908
        sub_141992bd0(rdi_7, &var_908, &var_2c8, 2)
        *rdi_7 = &data_142f64ce0
        *(rdi_7 + 0x38) = var_8f0.o
        *(rdi_7 + 0x48) = zmm7_1
        rdi_7[0xb] = var_8d0_1.q
    
    sub_1419968d0(arg1, rdi_7)
    var_918.q = rax_47
    var_918:8.w = 0
    float (* rax_66)[0x4] = sub_14081d830(0x150, arg1[1], 1, 0)
    float (* rdi_8)[0x4] = rax_66
    
    if (rax_66 == 0)
        rdi_8 = nullptr
    else
        __builtin_memset(&rdi_8[1], 0, 0x20)
        rdi_8[0x11][0].q = 0.0
        __builtin_memset(&rdi_8[0x12], 0, 0x28)
    
    memset(&rdi_8[1], 0, 0x140)
    void* rdx_37 = var_768
    *rdi_8 = var_778
    sub_1405d16e0(&rdi_8[1], rdx_37)
    sub_1405d16e0(&(*rdi_8)[6], var_760)
    rdi_8[2][0].q = var_758
    *(rdi_8 + 0x28) = var_750
    rdi_8[3][0].q = var_988.q
    *(rdi_8 + 0x38) = var_980
    rdi_8[4][0].q = var_978.q
    *(rdi_8 + 0x48) = var_978:8.q
    rdi_8[5][0] = var_968
    (*rdi_8)[0x15] = var_964
    (*rdi_8)[0x16] = var_960
    (*rdi_8)[0x17] = var_95c
    rdi_8[6][0].q = var_958.q
    *(rdi_8 + 0x68) = var_958:8.q
    rdi_8[7][0].q = var_948.q
    *(rdi_8 + 0x78) = var_948:8.q
    rdi_8[8][0].q = var_938.q
    *(rdi_8 + 0x88) = var_938:8.q
    rdi_8[9][0].q = var_928.q
    *(rdi_8 + 0x98) = var_928:8.q
    float zmm2_1[0x4] = var_828:4.d
    uint128_t zmm1_3 = var_828:8.d
    int64_t zmm3_1 = var_828:0xc.d
    int32_t var_848_1 = var_7d8:4.d.d
    int32_t var_880_1 = var_7d8:8.d.d
    int32_t var_878_1 = var_7d8:0xc.d.d
    int32_t var_868_1 = var_7c8.d.d
    int32_t var_8a0 = var_7c8:4.d.d
    var_7b8_1.d = var_7c8:8.d.d
    void*** var_9b0_3
    var_9b0_3.d = var_7c8:0xc.d.d
    rdi_8[0xa][0].q = (_mm_unpacklo_ps(var_828.d, zmm2_1[0].q)).q
    *(rdi_8 + 0xa8) = (_mm_unpacklo_ps(zmm1_3, zmm3_1)).q
    rdi_8[0xb][0].q = (_mm_unpacklo_ps(var_818.d, var_818:4.d)).q
    *(rdi_8 + 0xb8) = (_mm_unpacklo_ps(var_818:8.d, var_818:0xc.d.q)).q
    rdi_8[0xc][0] = var_808
    (*rdi_8)[0x31] = var_804
    (*rdi_8)[0x33] = var_7fc
    (*rdi_8)[0x32] = var_800
    rdi_8[0xd][0].q = var_7f8.q
    zmm1_3 = _mm_unpacklo_ps(var_7e8.d, var_7e8:4.d.q)
    zmm2_1 = _mm_unpacklo_ps(var_7e8:8.d, var_7e8:0xc.d.q)
    *(rdi_8 + 0xd8) = (_mm_unpacklo_ps(var_7f8:8.d, var_7f8:0xc.d.q)).q
    rdi_8[0xe][0].q = zmm1_3.q
    *(rdi_8 + 0xe8) = zmm2_1.q
    rdi_8[0xf][0].q = (_mm_unpacklo_ps(var_7d8.d, var_848_1[0].q)).q
    *(rdi_8 + 0xf8) = (_mm_unpacklo_ps(var_880_1, var_878_1.q)).q
    rdi_8[0x10][0].q = (_mm_unpacklo_ps(var_868_1, var_8a0[0].q)).q
    *(rdi_8 + 0x108) = (_mm_unpacklo_ps(var_7b8_1.d, var_9b0_3.d.q)).q
    rdi_8[0x11][0].q = arg4
    rdi_8[0x12][0].q = rax_41
    void*** rax_76 = sub_14081d830(0x28, arg1[1], 1, 0)
    
    if (rax_76 != 0)
        uint128_t zmm0_13 = var_918
        rax_76[1] = rax_47[1]
        rax_76[2] = 0
        *rax_76 = &data_142f285c0
        *(rax_76 + 0x18) = zmm0_13
    
    *(rdi_8 + 0x128) = rax_76
    var_9a8_4.d = 0x1c
    var_9a8_4:4.w = 0
    void*** rax_77 = sub_14081d830(0x28, arg1[1], 1, 0)
    
    if (rax_77 != 0)
        rax_77[1] = r14_2[1]
        *rax_77 = &data_142f285c0
        rax_77[2] = 0
        *(rax_77 + 0x18) = r14_2.o
    
    *(rdi_8 + 0x138) = rax_77
    var_9a8_4.d = 0x1c
    var_9a8_4:4.w = 0
    void*** rax_78 = sub_14081d830(0x28, arg1[1], 1, 0)
    
    if (rax_78 != 0)
        rax_78[1] = r15_4[1]
        *rax_78 = &data_142f285c0
        rax_78[2] = 0
        *(rax_78 + 0x18) = r15_4.o
    
    rdi_8[0x13][0].q = rax_78
    sub_1405d16e0(&rdi_8[0x14], rbx_3)
    int32_t rax_79
    rax_79.b = rdx == 1
    uint128_t var_378
    char rcx_43 = sub_1419a2ec0(*(arg2 + 0x5150), &var_378, &data_143ebd310, 
        rax_79 + var_990 + (zx.d(var_9b8_1) << 2))
    int512_t zmm6_6
    zmm6_6.o = zx.o(0)
    zmm7_1 = var_378
    int32_t temp44_1
    int32_t temp45_1
    temp44_1:temp45_1 = sx.q(var_898.d + 7)
    void*** var_9b0_5
    var_9b0_5.d = (temp45_1 + (temp44_1 & 7)) s>> 3
    int32_t temp46_1
    int32_t temp47_1
    temp46_1:temp47_1 = sx.q((var_898 u>> 0x20).d + 7)
    var_9b0_5:4.d = (temp47_1 + (temp46_1 & 7)) s>> 3
    int128_t var_368_1 = sub_14135a2e0(rcx_43)
    sub_141998c50(zmm7_1.q, &data_143ec1bd0, rdi_8)
    var_8f0.q = rdi_8
    int32_t var_8d0_2 = 1
    void*** var_8d8_2 = var_9b0_5
    void*** rax_93
    char rcx_45
    rax_93, rcx_45 = sub_14081d830(0x60, arg1[1], 1, 0)
    void*** rdi_9
    
    if (rax_93 == 0)
        rdi_9 = nullptr
    else
        var_918.q = rdi_8
        sub_14135a2e0(rcx_45)
        rdi_9 = rax_93
        var_918:8.q = &data_143ec1c00
        uint128_t var_358 = var_918
        void var_907
        sub_141992bd0(rdi_9, &var_907, &var_358, 2)
        *rdi_9 = &data_142f64cf0
        *(rdi_9 + 0x38) = var_8f0.o
        *(rdi_9 + 0x48) = zmm7_1
        rdi_9[0xb] = var_8d0_2.q
    
    sub_1419968d0(arg1, rdi_9)
    
    if (var_9b8_1 == 0)
        sub_14199eba0(arg1, rax_47, rax_42)
    
    int64_t rax_95
    
    if (*(data_143ebb428 + 4) == 0)
        rax_95 = data_1439b69b8
    else
        rax_95 = data_1439b69a0
        
        if (rdx == 1)
            rax_95 = data_1439b5bb0
    
    void*** var_700_1 = r13_1
    var_8c8 = u"BuildBurleyIndirectDispatchArgs"
    void*** var_708 = r12_2
    void*** var_720_1 = r15_4
    int64_t i = 0
    wchar16 const* const var_8c0_1 = u"BuildSeparableIndirectDispatchArgs"
    void*** var_728 = r14_2
    int32_t var_834_1 = 0x1c
    int32_t var_838_1
    
    do
        int64_t* rax_96 = sub_14081d830(0x20, arg1[1], 1, 0)
        int64_t* rdi_10 = rax_96
        
        if (rax_96 == 0)
            rdi_10 = nullptr
        else
            __builtin_memset(rax_96, 0, 0x18)
        
        __builtin_memset(rdi_10, 0, 0x20)
        sub_1405d16e0(rdi_10, rbx_3)
        void* r14_3 = *(&var_708 + i)
        var_9a8_4.d = 0x1c
        var_9a8_4:4.w = 0
        void*** rax_97 = sub_14081d830(0x28, arg1[1], 1, 0)
        
        if (rax_97 == 0)
            rax_97 = nullptr
        else
            rax_97[1] = *(r14_3 + 8)
            *rax_97 = &data_142f285c0
            rax_97[2] = 0
            *(rax_97 + 0x18) = r14_3.o
        
        void* r14_4 = *(&var_728 + i)
        rdi_10[1] = rax_97
        var_838_1 = data_1439c8a54
        void*** rax_99
        int512_t zmm6_8
        rax_99, zmm6_8 = sub_14081d830(0x28, arg1[1], 1, 0)
        
        if (rax_99 == 0)
            rax_99 = nullptr
        else
            rax_99[1] = *(r14_4 + 8)
            *rax_99 = &data_142f285c0
            rax_99[2] = 0
            *(rax_99 + 0x18) = r14_4.o
        
        rdi_10[2] = rax_99
        int128_t var_348
        char rcx_53 = sub_1419a2ec0(*(arg2 + 0x5150), &var_348, &data_143ebd210, 0)
        zmm6_8.o = var_348
        int128_t zmm6_9 = sub_14135a000(rcx_53)
        uint128_t var_338_1 = zx.o(0)
        sub_141998c50(zmm6_9.q, &data_143ec1ac0, rdi_10)
        var_8f0.q = rdi_10
        int32_t var_8d0_3 = 1
        uint64_t var_8d8_3 = 1
        void*** rax_101
        char rcx_55
        rax_101, rcx_55 = sub_14081d830(0x60, arg1[1], 1, 0)
        void*** r14_5 = rax_101
        
        if (rax_101 == 0)
            r14_5 = nullptr
        else
            var_918.q = rdi_10
            sub_14135a000(rcx_55)
            *(&var_8c8 + i)
            var_918:8.q = &data_143ec1af0
            uint128_t var_328 = var_918
            void var_906
            sub_141992bd0(r14_5, sub_141346880(&var_906), &var_328, 2)
            *r14_5 = &data_142f64d00
            *(r14_5 + 0x38) = var_8f0.o
            *(r14_5 + 0x48) = zmm6_9
            r14_5[0xb] = var_8d0_3.q
        
        sub_1419968d0(arg1, r14_5)
        i += 8
    while (i s< 0x10)
    
    int64_t rcx_59 = var_738.q
    int64_t var_160
    void* r14_6 = &var_160:4
    zmm8 = var_778
    wchar16 const* const var_178_1 = u"SubsurfacePassOne_Burley"
    void*** var_170_1 = rax_47
    void*** var_150_1 = rax_47
    wchar16 const* const var_138_1 = u"SubsurfacePassThree_SepVer"
    int64_t* rax_104 = var_8f8
    int64_t* var_128_1 = rax_104
    int64_t* var_108_1 = rax_104
    int32_t rax_105 = 0
    int64_t var_168_1 = rcx_59
    int64_t var_148_1 = rcx_59
    int64_t var_130_1 = rcx_59
    int64_t var_110_1 = rcx_59
    
    if (rdx == 1)
        rax_105 = 2
    
    wchar16 const* const var_158_1 = u"SubsurfacePassTwo_SepHon"
    var_160 = 0
    var_8c8 = &var_8a0
    int64_t var_140_1 = 1
    int32_t var_120_1 = 1
    void* var_9b0_7
    var_9b0_7.d = rax_105 + (zx.d(var_9b8_1) << 2)
    int64_t* var_8c0_2 = &var_898
    zmm7_1 = var_8c8.o
    int32_t var_11c_1 = 1
    wchar16 const* const var_118_1 = u"SubsurfacePassFour_BVar"
    int32_t var_100_1 = 0
    int32_t var_fc_1 = 1
    int32_t var_70c_1 = 0x1c
    int64_t i_1
    
    do
        void* rbx_5 = *(r14_6 - 0xc)
        int64_t r15_5 = sx.q(*(r14_6 - 4))
        int32_t r13_2 = *r14_6
        int64_t r12_3 = *(r14_6 - 0x14)
        var_838_1.w = 0
        uint128_t* rax_107 = sub_14081d830(0x270, arg1[1], 1, 0)
        uint128_t* rdi_11 = rax_107
        
        if (rax_107 == 0)
            rdi_11 = nullptr
        else
            __builtin_memset(&rdi_11[1], 0, 0x20)
            __builtin_memset(&rdi_11[0xa], 0, 0x20)
            rdi_11[0x13].q = 0
            rdi_11[0x14].q = 0
            rdi_11[0x1c].q = 0
            rdi_11[0x1d].q = 0
            rdi_11[0x25].q = 0
            rdi_11[0x26].q = 0
        
        memset(&rdi_11[1], 0, 0x260)
        void* rdx_63 = var_768
        *rdi_11 = zmm8
        sub_1405d16e0(&rdi_11[1], rdx_63)
        sub_1405d16e0(rdi_11 + 0x18, var_760)
        rdi_11[2].q = var_758
        *(rdi_11 + 0x28) = var_750
        rdi_11[3].q = var_988.q
        *(rdi_11 + 0x38) = var_980
        rdi_11[4].q = var_978.q
        *(rdi_11 + 0x48) = var_978:8.q
        rdi_11[5].d = var_968
        *(rdi_11 + 0x54) = var_964
        *(rdi_11 + 0x58) = var_960
        *(rdi_11 + 0x5c) = var_95c
        rdi_11[6].q = var_958.q
        *(rdi_11 + 0x68) = var_958:8.q
        rdi_11[7].q = var_948.q
        *(rdi_11 + 0x78) = var_948:8.q
        rdi_11[8].q = var_938.q
        *(rdi_11 + 0x88) = var_938:8.q
        rdi_11[9].q = var_928.q
        *(rdi_11 + 0x98) = var_928:8.q
        void*** rax_114 = sub_14081d830(0x28, arg1[1], 1, 0)
        
        if (rax_114 != 0)
            rax_114[1] = *(rbx_5 + 8)
            *rax_114 = &data_142f285c0
            rax_114[2] = 0
            *(rax_114 + 0x18) = rbx_5.o
        
        rdi_11[0xa].q = rax_114
        int32_t var_6f8 = var_988.d
        uint64_t var_6f0_1 = var_980
        uint128_t var_6c8_1 = var_958
        float var_6d8_1 = var_968
        uint128_t var_6b8_1 = var_948
        float var_6d4_1 = var_964
        uint128_t var_6a8_1 = var_938
        int32_t var_6f4_1 = var_984.d
        float var_6d0_1 = var_960
        uint128_t var_698_1 = var_928
        int128_t var_6e8_1 = var_978
        float var_6cc_1 = var_95c
        sub_141346c70(&rdi_11[0xc], &var_6f8)
        void* rbx_6 = (&var_728)[r15_5]
        rdi_11[0x13].q = r12_3
        rdi_11[0x14].q = rax_95
        int32_t var_710_1 = data_1439c8a54
        void*** rax_122
        int512_t zmm6_10
        rax_122, zmm6_10 = sub_14081d830(0x28, arg1[1], 1, 0)
        
        if (rax_122 != 0)
            rax_122[1] = *(rbx_6 + 8)
            *rax_122 = &data_142f285c0
            rax_122[2] = 0
            *(rax_122 + 0x18) = rbx_6.o
        
        int64_t r12_4 = (&var_708)[r15_5]
        *(rdi_11 + 0xb8) = r12_4
        rdi_11[0xb].q = rax_122
        
        if (r13_2 != 0)
            if (r13_2 == 1 && r15_5.d == 0)
                if (var_9b8_1 == r15_5.b)
                    void* rbx_7 = var_900.q
                    var_918.q = rbx_7
                    var_918:8.w = r15_5.w
                    void*** rax_130
                    rax_130, zmm6_10 = sub_14081d830(r13_2 + 0x27, arg1[1], r13_2, 0)
                    
                    if (rax_130 != 0)
                        uint128_t zmm0_25 = var_918
                        rax_130[1] = *(rbx_7 + 8)
                        *rax_130 = &data_142f285c0
                        rax_130[2] = 0
                        *(rax_130 + 0x18) = zmm0_25
                    
                    *(rdi_11 + 0xa8) = rax_130
                
                int32_t var_5f8 = var_988.d
                uint64_t var_5f0_1 = var_980
                uint128_t var_5c8_1 = var_958
                float var_5d8_1 = var_968
                uint128_t var_5b8_1 = var_948
                float var_5d4_1 = var_964
                uint128_t var_5a8_1 = var_938
                int32_t var_5f4_1 = var_984.d
                float var_5d0_1 = var_960
                uint128_t var_598_1 = var_928
                int128_t var_5e8_1 = var_978
                float var_5cc_1 = var_95c
                sub_141346c70(&rdi_11[0x15], &var_5f8)
                rdi_11[0x1c].q = rax_46
                rdi_11[0x1d].q = rax_41
                int32_t var_578 = var_988.d
                uint64_t var_570_1 = var_980
                uint128_t var_548_1 = var_958
                float var_558_1 = var_968
                uint128_t var_538_1 = var_948
                float var_554_1 = var_964
                uint128_t var_528_1 = var_938
                int32_t var_574_1 = var_984.d
                float var_550_1 = var_960
                uint128_t var_518_1 = var_928
                int128_t var_568_1 = var_978
                float var_54c_1 = var_95c
                sub_141346c70(&rdi_11[0x1e], &var_578)
                rdi_11[0x25].q = rax_49
                rdi_11[0x26].q = rax_41
        else if (r15_5.d == 0)
            int32_t var_678 = var_988.d
            uint64_t var_670_1 = var_980
            uint128_t var_648_1 = var_958
            float var_658_1 = var_968
            uint128_t var_638_1 = var_948
            float var_654_1 = var_964
            uint128_t var_628_1 = var_938
            int32_t var_674_1 = var_984.d
            float var_650_1 = var_960
            uint128_t var_618_1 = var_928
            int128_t var_668_1 = var_978
            float var_64c_1 = var_95c
            sub_141346c70(&rdi_11[0x15], &var_678)
            rdi_11[0x1c].q = rax_46
            rdi_11[0x1d].q = rax_41
        
        int32_t rax_145 = sub_141357ed0()
        void* rcx_71 = data_143ebb428
        r13 = arg2
        int128_t var_318
        char rcx_77 = sub_1419a2ec0(*(r13 + 0x5150), &var_318, &data_143ebd410, 
            ((rax_145 + (sbb.d(rcx_71.d, rcx_71.d, *(rcx_71 + 4) != 0) & 3)
                + (var_9b0_7.d + r15_5.d) * 6) << 1) + r13_2)
        zmm6_10.o = var_318
        var_8a0.q = r12_4
        int128_t zmm6_11 = sub_14135a170(rcx_77)
        uint128_t var_308_1 = zmm7_1
        sub_141998c50(zmm6_11.q, &data_143ec1ce0, rdi_11)
        int64_t var_8d8_4 = r12_4
        var_8f0.q = rdi_11
        int32_t var_8d0_4 = 0
        void*** rax_148
        char rcx_79
        rax_148, rcx_79 = sub_14081d830(0x60, arg1[1], 1, 0)
        void*** rbx_8 = rax_148
        
        if (rax_148 == 0)
            rbx_8 = nullptr
        else
            var_8c8 = rdi_11
            sub_14135a170(rcx_79)
            *(r14_6 - 0x1c)
            void* var_8c0_3 = &data_143ec1d10
            int128_t var_2f8 = var_8c8.o
            void var_905
            sub_141992bd0(rbx_8, sub_141346880(&var_905), &var_2f8, 2)
            *rbx_8 = &data_142f64d10
            *(rbx_8 + 0x38) = var_8f0.o
            *(rbx_8 + 0x48) = zmm6_11
            rbx_8[0xb] = var_8d0_4.q
        
        sub_1419968d0(arg1, rbx_8)
        r14_6 += 0x20
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    sub_1405d1550(&var_998)
    r15_2 = rdx

uint128_t* rax_150 = sub_14081d830(0x1d0, arg1[1], 1, 0)
uint128_t* rbx_9 = rax_150

if (rax_150 == 0)
    rbx_9 = nullptr
else
    __builtin_memset(&rax_150[1], 0, 0x20)
    rax_150[0xa].q = 0
    rax_150[0x12].q = 0
    rax_150[0x13].q = 0
    *(rax_150 + 0x138) = 0
    sub_14117af20(&rax_150[0x14])

memset(&rbx_9[1], 0, 0x1c0)
void* rdx_80 = var_768
*rbx_9 = zmm8
sub_1405d16e0(&rbx_9[1], rdx_80)
sub_1405d16e0(rbx_9 + 0x18, var_760)
rbx_9[2].q = var_758
*(rbx_9 + 0x28) = var_750
char var_850 = arg6
void* var_488 = arg4
int16_t var_84f = 0
int32_t var_84c = 0xffffffff
rbx_9[0x14] = arg5.o
int128_t var_4c8 = var_7f8
float var_4d8 = var_808
int128_t var_4b8 = var_7e8
float var_4d4 = var_804
int128_t var_4a8 = var_7d8
int128_t var_4f8 = var_828
float var_4d0 = var_800
int128_t var_498 = var_7c8
int128_t var_4e8 = var_818
float var_4cc = var_7fc
sub_141346d10(&rbx_9[3], &var_4f8)
rbx_9[0x13].q = rax_42

if (r15_2 != 2)
    int64_t* rax_160 = var_8f8
    int32_t var_478 = var_988.d
    uint64_t var_470_1 = var_980
    int64_t* var_408_1 = rax_160
    uint128_t var_448_1 = var_958
    float var_458_1 = var_968
    uint128_t var_438_1 = var_948
    float var_454_1 = var_964
    uint128_t var_428_1 = var_938
    int32_t var_474_1 = var_984.d
    float var_450_1 = var_960
    uint128_t var_418_1 = var_928
    int128_t var_468_1 = var_978
    float var_44c_1 = var_95c
    sub_141346d10(&rbx_9[0xb], &var_478)
    *(rbx_9 + 0x138) = rax_42

int32_t rcx_90 = *(data_143ebb318 + 4)
int32_t r8_17

if (rcx_90 != 0xffffffff)
    if (rcx_90 == 1)
        r8_17 = 3
    else
        r8_17 = 0
else if (*(r13 + 0x1520) == 2)
    r8_17 = 0
else
    r8_17 = 3

uint64_t r14_7 = zx.q(var_9b8_1)
int32_t rdx_84 = 0

if (r15_2 == 1)
    rdx_84 = 0xc

uint128_t var_2e8
char rcx_93 = sub_1419a2ec0(*(r13 + 0x5150), &var_2e8, &data_143ebd610, 
    r8_17 + rdx_84 + ((r14_7 * 3).d << 3) + var_98c + r15_2)
zmm7_1 = var_2e8
int512_t zmm6_12
zmm6_12.o = zx.o(0)
i_2.o = sub_14135a5c0(rcx_93)
sub_141998c50(zmm7_1.q, &data_143ec1f00, rbx_9)
int64_t* rdx_86 = arg1[1]
var_3f8.q = r13
var_3c8 = zmm7_1
var_3b8:8.q = rbx_9
char var_3a8 = 2
int64_t zmm1_13 = arg3[2]
var_3f8 = *arg3
var_3e8:8.q = zmm1_13
var_3c8.q = zmm1_13
void*** rax_168
char rcx_95
rax_168, rcx_95 = sub_14081d830(0x90, rdx_86, 1, 0)
void*** rdi_13 = rax_168

if (rax_168 == 0)
    rdi_13 = nullptr
else
    var_8c8 = rbx_9
    int128_t zmm6_14 = sub_14135a5c0(rcx_95)
    void* var_8c0_4 = &data_143ec1f30
    int128_t var_2d8 = var_8c8.o
    void var_904
    sub_141992bd0(rdi_13, &var_904, &var_2d8, 1)
    uint128_t zmm0_33 = var_3f8
    *rdi_13 = &data_142f64d20
    *(rdi_13 + 0x38) = zmm0_33
    *(rdi_13 + 0x48) = var_3e8
    *(rdi_13 + 0x58) = zmm6_14
    *(rdi_13 + 0x68) = var_3c8
    *(rdi_13 + 0x78) = var_3b8
    rdi_13[0x11] = var_3a8.q

sub_1419968d0(arg1, rdi_13)

if (r15_2 != 2 && rcx_13 != 0 && r14_7.b == 0)
    sub_14131f2d0(arg1, var_900.q, rcx_13, 1)

sub_1405d1550(&var_760)
int64_t result = sub_1405d1550(&var_768)
__security_check_cookie(rax_1 ^ &var_9e8)
return result
