// 函数: sub_14142a220
// 地址: 0x14142a220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
void* const r12 = nullptr
int32_t var_238 = 0
int64_t* rax_7

if (*(arg1 + 0xd7c) == 0)
    int128_t var_1a0
    rax_7 = &var_1a0
    var_1a0 = *(arg1 + 0x1598)
else
    int32_t var_1bc_1 = arg1[0x2b4].d - arg1[0x2b3].d
    int32_t var_1b8_1 = *(arg1 + 0x15a4) - *(arg1 + 0x159c)
    int64_t var_1c4
    rax_7 = &var_1c4
    var_1c4 = 0

int64_t rcx = *(arg2 + 0x37c)
int128_t zmm0 = *rax_7
int64_t var_230 = rcx
int32_t rax_8 = 1
int32_t r9 = *(arg2 + 0x3c4)

if (rcx.d s>= 1)
    rax_8 = rcx.d

int32_t rcx_1 = 1
var_230.d = rax_8
int128_t var_190
int32_t* var_2c8 = &var_190

if (var_230:4.d s>= 1)
    rcx_1 = var_230:4.d

var_230:4.d = rcx_1
var_190 = zmm0
int512_t zmm9
uint128_t zmm11
zmm9, zmm11 = sub_1422f3670(arg1, arg7, &var_230, r9, var_2c8, arg3, arg4)
zmm9.o = zx.o(0)
float zmm0_1[0x4]

if (sub_14135d320(sub_14139d630(arg2)) == 0)
    zmm0_1 = zx.o(0)
else
    zmm0_1 = 0x3f800000

*(arg7 + 0xc88) = zmm0_1[0]
int64_t* r15 = nullptr
zmm0_1 = zx.o(0)
zmm0_1[0] = float.s(zx.q(*(*arg1 + 0x28) u>> 0x1a) & 1)
arg7[0xd0].d = zmm0_1[0]
int64_t* rcx_5 = *(*arg1 + 0x20)

if (rcx_5 != 0)
    r15 = (*(*rcx_5 + 0x248))(rcx_5)

float var_2a8[0x4]
int64_t var_2a4
float var_288[0x4]
char rdi
float zmm1_1[0x4]
uint128_t zmm2_1
float zmm3_1[0x4]
uint128_t zmm6_1

if (r15 == 0)
    __builtin_memset(arg7 + 0x9cc, 0, 0x20)
    rdi = 0
    *(arg7 + 0x9ec) = 0x7f7fffff
    *(arg7 + 0x9f4) = 0x3f800000
    *(arg7 + 0xb04) = 0
else
    void* rbx_1 = r15[0x1f3]
    float rax_20
    
    if (rbx_1 == 0)
        zmm0_1 = data_14399f5e0
        arg7[0x91] = zmm0_1
        zmm1_1 = zx.o(data_143dbb1f8.q)
        arg7[0x92].q = zmm1_1.q
        rax_20 = data_143dbb200
    else
        int64_t* rbx_2 = *(rbx_1 + 0x20)
        int64_t r8_1 = *rbx_2
        void var_144
        int32_t* rax_18 = (*(r8_1 + 0x110))(rbx_2, &var_144, r8_1)
        float zmm4_1[0x4] = rbx_2[6].d
        zmm1_1 = *(rbx_2 + 0x34)
        zmm4_1[0] = zmm4_1[0] f* *rax_18
        zmm1_1[0] = zmm1_1[0] f* rax_18[1]
        zmm2_1.d = rbx_2[7].d.d f* rax_18[2]
        zmm3_1 = *(rbx_2 + 0x3c)
        zmm3_1[0] = zmm3_1[0] f* rax_18[3]
        zmm4_1[0] = zmm4_1[0] * 0.318309873f
        zmm1_1[0] = zmm1_1[0] * 0.318309873f
        float temp0_1[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
        zmm2_1.d = zmm2_1.d f* 0.318309873f
        temp0_1[0] = zmm1_1[0]
        zmm3_1[0] = zmm3_1[0] * 0.318309873f
        float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
        temp0_2[0] = zmm2_1.d
        float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
        temp0_3[0] = zmm3_1[0]
        float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
        arg7[0x91] = temp0_4
        void* rax_19 = r15[0x1f3]
        var_288 = temp0_4
        void* rcx_7 = *(rax_19 + 0x20)
        zmm0_1 = *(rcx_7 + 0x60) ^ 0x80000000
        zmm1_1 = _mm_unpacklo_ps(*(rcx_7 + 0x40) ^ 0x80000000, (*(rcx_7 + 0x50) ^ 0x80000000).q)
        rax_20 = zmm0_1[0]
        arg7[0x92].q = zmm1_1.q
    
    *(arg7 + 0x928) = rax_20
    void* rbx_3 = r15[0x1f7]
    
    if (rbx_3 == 0)
        zmm6_1 = 0x3b9bd869
    else
        int64_t* rcx_8 = *(rbx_3 + 0x20)
        (*(*rcx_8 + 0x118))(rcx_8, zmm1_1)
        zmm6_1 = zmm0_1
    
    char rax_22 = sub_1410c2200(*arg1)
    void* rax_23
    
    if (rax_22 != 0)
        rax_23 = r15[0x385]
    
    if (rax_22 == 0 || rax_23 == 0)
        __builtin_memset(arg7 + 0x9cc, 0, 0x20)
        *(arg7 + 0x9ec) = 0x7f7fffff
        *(arg7 + 0x9f4) = 0x3f800000
        *(arg7 + 0xb04) = 0
        zmm0_1 = cosf(zmm6_1.d)
        var_2a4 = 0
        int32_t var_29c_2 = 0x3f800000
        zmm1_1 = var_2a8
        zmm1_1[0] = zmm0_1[0]
        var_2a8 = zmm1_1
        arg7[0xa8] = zmm1_1
        float (* rax_46)[0x4]
        
        if (rbx_3 == 0)
            float var_170[0x4]
            rax_46 = &var_170
            var_170 = data_14399f5e0
        else
            int64_t* rcx_24 = *(rbx_3 + 0x20)
            void var_124
            rax_46 = (*(*rcx_24 + 0x108))(rcx_24, &var_124)
        
        arg7[0xa6] = *rax_46
        float (* rax_48)[0x4]
        
        if (rbx_3 == 0)
            rax_48 = &data_14399f5e0
        else
            rax_48 = *(rbx_3 + 0x20) + 0x30
        
        arg7[0xa2] = *rax_48
        *(arg7 + 0xa2c) = 0x3f800000
        arg7[0xa4] = data_14399f5e0
        *(arg7 + 0xa4c) = 0
        
        if (rbx_3 == 0)
            zmm1_1 = zx.o(0)
            zmm2_1 = zx.o(0)
            zmm3_1 = 0x3f800000
        else
            void* rax_49 = *(rbx_3 + 0x20)
            zmm2_1 = *(rax_49 + 0x50) ^ 0x80000000
            zmm3_1 = *(rax_49 + 0x60) ^ 0x80000000
            zmm1_1 = *(rax_49 + 0x40) ^ 0x80000000
    else
        *(arg7 + 0x9cc) = *(rax_23 + 0x18)
        arg7[0x9d].d = *(r15[0x385] + 0x1c)
        *(arg7 + 0x9d4) = *(r15[0x385] + 0x20)
        *(arg7 + 0x9d8) = *(r15[0x385] + 0x24)
        *(arg7 + 0x9dc) = *(r15[0x385] + 0x28)
        arg7[0x9e].d = *(r15[0x385] + 0x2c)
        *(arg7 + 0x9e4) = *(r15[0x385] + 0x30)
        *(arg7 + 0x9e8) = *(r15[0x385] + 0x34)
        *(arg7 + 0x9ec) = *(r15[0x385] + 0x38)
        arg7[0x9f].d = *(r15[0x385] + 0x3c)
        *(arg7 + 0x9f4) = *(r15[0x385] + 0x40)
        *(arg7 + 0xb04) = *(r15[0x385] + 0x60) & 3
        *(arg7 + 0xb08) = *(r15[0x385] + 0x64)
        zmm6_1.d = zmm6_1.d f* *(r15[0x385] + 0x40)
        zmm0_1 = cosf(zmm6_1.d)
        var_2a4 = 0
        int32_t var_29c_1 = 0x3f800000
        zmm1_1 = var_2a8
        zmm1_1[0] = zmm0_1[0]
        var_2a8 = zmm1_1
        arg7[0xa8] = zmm1_1
        float (* rax_39)[0x4]
        
        if (rbx_3 == 0)
            float var_180[0x4]
            rax_39 = &var_180
            var_180 = data_14399f5c0
        else
            int64_t* rcx_23 = *(rbx_3 + 0x20)
            void var_134
            rax_39 = (*(*rcx_23 + 0x108))(rcx_23, &var_134)
        
        arg7[0xa6] = *rax_39
        float (* rax_41)[0x4]
        
        if (rbx_3 == 0)
            rax_41 = r15[0x385] + 0x44
        else
            rax_41 = *(rbx_3 + 0x20) + 0x30
        
        arg7[0xa2] = *rax_41
        *(arg7 + 0xa2c) = 0x3f800000
        arg7[0xa4] = data_14399f5e0
        *(arg7 + 0xa4c) = 0
        
        if (rbx_3 == 0)
            void* rax_44 = r15[0x385]
            zmm1_1 = *(rax_44 + 0x54) ^ 0x80000000
            zmm2_1 = *(rax_44 + 0x58) ^ 0x80000000
            zmm3_1 = *(rax_44 + 0x5c) ^ 0x80000000
        else
            void* rax_43 = *(rbx_3 + 0x20)
            zmm1_1 = *(rax_43 + 0x40) ^ 0x80000000
            zmm2_1 = *(rax_43 + 0x50) ^ 0x80000000
            zmm3_1 = *(rax_43 + 0x60) ^ 0x80000000
    
    int32_t var_29c_3 = 0x3f800000
    rdi = 1
    zmm0_1 = var_2a8
    zmm0_1[0] = zmm1_1[0]
    float temp0_6[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
    temp0_6[0] = zmm2_1.d
    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
    temp0_7[0] = zmm3_1[0]
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
    arg7[0xa0] = temp0_8
    var_2a8 = temp0_8

void* rbx_4 = nullptr
void* rdx_5 = *arg1 + 0x28
uint128_t var_a8 = zmm11
void* const r13 = nullptr
int64_t var_228 = 0
void* var_268
__builtin_memset(&var_268, 0, 0x18)
float var_298[0x4]
void* const var_260
void* const var_258
void* var_250

if (sub_1414e0700(r15, rdx_5) == 0)
    int32_t rax_78 = *(arg7 + 0x438)
    arg7[0xaa] = data_142d3f670
    arg7[0xae].d = 0
    *(arg7 + 0xae4) = 0x3f800000
    *(arg7 + 0xae8) = 0x3f800000
    zmm0_1 = data_14399f5c0
    *(arg7 + 0xaec) = 0x3f800000
    arg7[0xaf].d = 0x3f800000
    arg7[0xad] = zmm0_1
    *(arg7 + 0xaf4) = 0x3f800000
    arg7[0xab].q = arg7[0x43].q
    arg7[0xac] = zx.o(0)
    *(arg7 + 0xaf8) = 0x3f800000
    *(arg7 + 0xafc) = 0x3f800000
    arg7[0xb0].d = 0x3f800000
    *(arg7 + 0xab8) = rax_78
else
    int64_t* rcx_26 = r15[0x386]
    void* rax_51 = rcx_26[0x19]
    void* rbx_5 = *rcx_26
    var_238.q = rbx_5
    
    if (rax_51 != 0)
        var_260 = *(rax_51 + 0x10)
    
    void* rax_54 = *sub_1414cb8a0(rcx_26)
    
    if (rax_54 != 0)
        var_268 = *(rax_54 + 0x10)
    
    void* rax_56 = arg1[0xa0b]
    
    if (rax_56 != 0)
        var_258 = *(rax_56 + 0x10)
    
    int64_t* rcx_27 = arg1[0xa0c]
    zmm6_1 = 0x3f800000
    zmm2_1 = 0x3f800000
    
    if (rcx_27 != 0)
        var_228 = rcx_27[2]
        void* rax_60 = (*(*rcx_27 + 0x10))()
        int64_t* rcx_28 = arg1[0xa0c]
        int64_t rax_61 = *rcx_28
        zmm6_1 = _mm_cvtepi32_ps(zx.o(*(rax_60 + 0x14)))
        zmm2_1 = _mm_cvtepi32_ps(zx.o(*((*(rax_61 + 0x10))(rcx_28) + 0x18)))
    
    zmm0_1 = 0x3f800000
    zmm0_1[0] = 1f f/ zmm6_1.d
    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xe1)
    zmm1_1 = 0x3f800000
    zmm6_1.d = zmm2_1.d
    _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc6)
    zmm6_1.d = zmm0_1[0]
    zmm1_1[0] = 1f f/ zmm2_1.d
    _mm_shuffle_ps(zmm6_1, zmm6_1, 0x27)
    zmm6_1.d = zmm1_1[0]
    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x39)
    arg7[0xaa] = zmm6_1
    *(arg7 + 0xae4) = *(rbx_5 + 0x1c)
    *(arg7 + 0xae8) = *(rbx_5 + 0x20)
    var_288 = zmm6_1
    float var_c8[0x4]
    sub_1414dfa80(arg1, &var_c8)
    void* rdi_1 = &arg7[0xa6]
    *(arg7 + 0xaec) = var_c8
    int32_t var_b8
    *(arg7 + 0xafc) = var_b8[0]
    int32_t var_b4
    arg7[0xb0].d = var_b4[0]
    zmm0_1 = *(rbx_5 + 0xbc)
    arg7[0xad] = zmm0_1
    arg7[0xae].d = *(rbx_5 + 0xd0)
    void* rax_66 = &r15[0x1f7]
    var_250 = rax_66
    
    do
        void* r13_1 = *rax_66
        
        if (r13_1 == 0)
            *(rdi_1 + 0x20) = data_142d8c9b0
            *rdi_1 = data_14399f5e0
            *(rdi_1 - 0x40) = data_14399f5e0
            *(rdi_1 - 0x34) = 0
            zmm0_1 = data_14399f5e0
            zmm1_1 = data_142d5beb0
            *(rdi_1 - 0x20) = zmm0_1
            *(rdi_1 - 0x14) = 0
            *(rdi_1 - 0x60) = zmm1_1
        else
            int64_t* rcx_30 = *(r13_1 + 0x20)
            (*(*rcx_30 + 0x118))(rcx_30)
            int128_t zmm0_3 = cosf(zmm0_1[0])
            var_2a4 = 0
            int32_t var_29c_4 = 0x3f800000
            zmm1_1 = var_2a8
            zmm1_1[0] = zmm0_3.d
            *(rdi_1 + 0x20) = zmm1_1
            int64_t* rcx_31 = *(r13_1 + 0x20)
            var_2a8 = zmm1_1
            void var_114
            *rdi_1 = *(*(*rcx_31 + 0x108))(rcx_31, &var_114)
            *(rdi_1 - 0x40) = *(*(r13_1 + 0x20) + 0x30)
            *(rdi_1 - 0x34) = 0x3f800000
            int64_t* rbx_6 = *(r13_1 + 0x20)
            void var_104
            int32_t* rax_72 = (*(*rbx_6 + 0x110))(rbx_6, &var_104)
            zmm3_1 = rbx_6[6].d
            zmm3_1[0] = zmm3_1[0] f* *rax_72
            zmm0_3.d = rax_72[1].d f* *(rbx_6 + 0x34)
            zmm1_1 = rax_72[2]
            zmm1_1[0] = zmm1_1[0] f* rbx_6[7].d
            zmm2_1.d = rax_72[3].d f* *(rbx_6 + 0x3c)
            rbx_5 = var_238.q
            float temp0_15[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
            temp0_15[0] = zmm0_3.d
            float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
            temp0_16[0] = zmm1_1[0]
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x27)
            temp0_17[0] = zmm2_1.d
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x39)
            *(rdi_1 - 0x20) = temp0_18
            *(rdi_1 - 0x14) = 0x3f800000
            void* rax_73 = *(r13_1 + 0x20)
            var_288 = temp0_18
            zmm2_1 = *(rax_73 + 0x60) ^ 0x80000000
            float var_1d8_1 = (*(rax_73 + 0x50) ^ 0x80000000)[0]
            int32_t var_1dc = (*(rax_73 + 0x40) ^ 0x80000000).d
            int32_t var_1d4_1 = zmm2_1.d
            void var_150
            int64_t* rax_74 = sub_141f5e050(rbx_5, &var_150, zx.d(r12.b), &var_1dc)
            int32_t var_28c_1 = 0x3f800000
            zmm3_1 = var_298
            zmm0_1 = *rax_74
            zmm1_1 = *(rax_74 + 4)
            zmm3_1[0] = zmm0_1[0]
            zmm2_1 = rax_74[1].d
            rax_66 = var_250
            float temp0_19[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
            temp0_19[0] = zmm1_1[0]
            float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
            temp0_20[0] = zmm2_1.d
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
            var_298 = temp0_21
            *(rdi_1 - 0x60) = temp0_21
        
        rax_66 += 8
        r12.b += 1
        rdi_1 += 0x10
        var_250 = rax_66
    while (r12.b u< 2)
    
    float zmm5_1[0x4] = arg7[0x43].d
    float zmm4_2[0x4] = 0x47c35000
    zmm6_1 = *(arg7 + 0x434)
    float zmm7_1[0x4] = *(arg7 + 0x438)
    zmm4_2[0] = 100000f f* *(rbx_5 + 0x10)
    rdi = 2
    float zmm10_1 = 100000f f* *(rbx_5 + 0x14)
    zmm11.d = 100000f f* *(rbx_5 + 0x18)
    zmm5_1[0] = zmm5_1[0] - zmm4_2[0]
    zmm6_1.d = zmm6_1.d f- zmm10_1
    zmm7_1[0] = zmm7_1[0] f- zmm11.d
    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
    zmm2_1.d = zmm6_1.d f* zmm6_1.d
    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
    zmm2_1.d = zmm2_1.d f+ zmm5_1[0]
    zmm2_1.d = zmm2_1.d f+ zmm7_1[0]
    zmm1_1 = *(rbx_5 + 0x1c)
    zmm1_1[0] = zmm1_1[0] + 0.00999999978f
    zmm2_1 = _mm_sqrt_ss(zmm2_1.d, zmm2_1.d)
    zmm1_1[0] = zmm1_1[0] * 100000f
    int64_t* rax_75
    
    if (zmm2_1.d f>= zmm1_1[0])
        int32_t var_218_2 = *(arg7 + 0x438)
        int64_t var_220
        rax_75 = &var_220
        var_220 = arg7[0x43].q
    else
        zmm0_1 = 0x3f800000
        float var_1d0
        rax_75 = &var_1d0
        zmm0_1[0] = 1f f/ zmm2_1.d
        zmm5_1[0] = zmm5_1[0] * zmm0_1[0]
        zmm6_1.d = zmm6_1.d f* zmm0_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm0_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm1_1[0]
        zmm6_1.d = zmm6_1.d f* zmm1_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm1_1[0]
        zmm5_1[0] = zmm5_1[0] + zmm4_2[0]
        zmm6_1.d = zmm6_1.d f+ zmm10_1
        zmm7_1[0] = zmm7_1[0] f+ zmm11.d
        var_1d0 = zmm5_1[0]
        int32_t var_1cc_1 = zmm6_1.d
        float var_1c8_1 = zmm7_1[0]
    
    r12 = var_258
    r13 = var_260
    rbx_4 = var_268
    arg7[0xab].q = *rax_75
    *(arg7 + 0xab8) = rax_75[1].d
    zmm1_1 = arg7[0xab].d
    zmm2_1 = *(arg7 + 0xab4)
    zmm1_1[0] = zmm1_1[0] - zmm4_2[0]
    zmm0_1 = *(arg7 + 0xab8)
    zmm2_1.d = zmm2_1.d f- zmm10_1
    float temp0_23[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
    zmm0_1[0] = zmm0_1[0] f- zmm11.d
    temp0_23[0] = zmm10_1
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xc6)
    zmm1_1[0] = zmm1_1[0] * zmm1_1[0]
    temp0_24[0] = zmm11.d
    zmm2_1.d = zmm2_1.d f* zmm2_1.d
    zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
    zmm2_1.d = zmm2_1.d f+ zmm1_1[0]
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x27)
    zmm2_1.d = zmm2_1.d f+ zmm0_1[0]
    temp0_25[0] = _mm_sqrt_ss(0, zmm2_1.d)[0]
    float temp0_27[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x39)
    var_288 = temp0_27
    arg7[0xac] = temp0_27

if (rdi u< 2)
    zmm2_1 = data_142d8c9b0
    zmm3_1 = data_142d5beb0
    void* rcx_37 = &arg7[zx.q(rdi) + 0xa6]
    uint64_t i_4 = zx.q(2 - rdi)
    uint64_t i
    
    do
        *(rcx_37 + 0x20) = zmm2_1
        rcx_37 += 0x10
        *(rcx_37 - 0x10) = data_14399f5e0
        *(rcx_37 - 0x50) = data_14399f5e0
        *(rcx_37 - 0x44) = 0
        zmm0_1 = data_14399f5e0
        *(rcx_37 - 0x70) = zmm3_1
        *(rcx_37 - 0x30) = zmm0_1
        *(rcx_37 - 0x24) = 0
        i = i_4
        i_4 -= 1
    while (i != 1)

if (r13 == 0)
    r13 = *(data_143f10dc8 + 0x10)

arg7[0xf7].q = r13
*(arg7 + 0xf78) = data_14395f4d0

if (rbx_4 == 0)
    rbx_4 = *(data_143f10e68 + 0x10)

arg7[0xf9].q = rbx_4
*(arg7 + 0xf98) = data_1439b6d40
int64_t rax_84 = var_228

if (rax_84 == 0)
    rax_84 = *(data_143f10e68 + 0x10)

arg7[0xf8].q = rax_84
*(arg7 + 0xf88) = data_14395f4d0

if (r12 == 0)
    r12 = *(data_143f112a8 + 0x10)
    
    if (r12 == 0)
        r12 = *(data_143f10e68 + 0x10)

arg7[0xfa].q = r12
*(arg7 + 0xfa8) = data_14395f4d0
int64_t rax_90 = arg1[0x2a5]

if (rax_90 == 0)
    rax_90 = *(data_143f10e68 + 0x10)

arg7[0xec].q = rax_90
int64_t rax_92 = arg1[0x2a6]

if (rax_92 == 0)
    rax_92 = *(data_143f10e68 + 0x10)

arg7[0xed].q = rax_92
int64_t rax_94 = arg1[0x2a7]

if (rax_94 == 0)
    rax_94 = *(data_143f111a8 + 0x10)
    
    if (rax_94 == 0)
        rax_94 = *(data_143f10e68 + 0x10)

arg7[0xee].q = rax_94
*(arg7 + 0xec8) = data_14395f4d0
*(arg7 + 0xed8) = data_14395f4d0
*(arg7 + 0xee8) = data_14395f4d0
void* rax_100 = data_1439b70d8

if (rax_100 != 0)
    int64_t rax_101 = *(rax_100 + 0x10)
    arg7[0xef].q = rax_101
    
    if (rax_101 == 0)
        arg7[0xef].q = *(data_143f10e68 + 0x10)

*(arg7 + 0xef8) = data_1439b54b8
void* rax_104 = data_1439b70e0

if (rax_104 != 0)
    int64_t rax_105 = *(rax_104 + 0x10)
    arg7[0xf0].q = rax_105
    
    if (rax_105 == 0)
        int64_t rcx_39 = *(data_143f111a8 + 0x10)
        arg7[0xf0].q = rcx_39
        
        if (rcx_39 == 0)
            arg7[0xf0].q = *(data_143f10e68 + 0x10)

*(arg7 + 0xf08) = data_14396ee58
void* rax_109 = data_1439b70e8

if (rax_109 != 0)
    int64_t rax_110 = *(rax_109 + 0x10)
    arg7[0xf1].q = rax_110
    
    if (rax_110 == 0)
        arg7[0xf1].q = *(data_143f10e68 + 0x10)

sub_141145f50(arg1, arg7)
sub_1414e0130(arg1, arg7)
sub_141429b60(r15, (*(*arg1 + 0x28)).d, arg7)
uint32_t zmm0_4[0x4] = sub_1423c1900()
uint32_t zmm10_2 = zmm0_4[0]
uint32_t zmm6_2[0x4] = zmm0_4

if (*(arg1 + 0x523c) != 0)
    zmm0_4 = arg1[0x167].d
    
    if (not(_mm_and_ps(zmm0_4, 0x7fffffff)[0] f<= 9.99999994e-09f))
        *(arg7 + 0x8e4) = zmm0_4[0]
        *(arg7 + 0x8e8) = powf(0x40000000[0], arg1[0x167].d[0])[0]
        zmm6_2[0] = zmm6_2[0] f+ arg1[0x167].d

var_260 = nullptr
zmm6_2[0] = zmm6_2[0] f- zmm10_2
var_268 = nullptr
zmm0_4 = _mm_and_ps(zmm6_2, 0x7fffffff)
void* const rbx_7
void* rdi_2
int32_t zmm6_3
void* rdx_17

if (zmm0_4[0] f>= 9.99999975e-05f)
    void* rdx_18 = arg1[0x2b5]
    
    if (rdx_18 != 0)
        zmm0_4 = *(rdx_18 + 0xc08)
        zmm0_4[0] = zmm0_4[0] f- zmm6_2[0]
        zmm0_4 = _mm_and_ps(zmm0_4, 0x7fffffff)
    
    if (rdx_18 != 0 && not(zmm0_4[0] f>= 9.99999975e-05f))
        sub_1405d16e0(&var_260, *(rdx_18 + 0xc10))
        rdx_17 = *(arg1[0x2b5] + 0xc18)
        goto label_14142b0d7
    
    int64_t* rcx_48 = data_143f0f180
    uint32_t var_1f4_1 = zmm6_2[0]
    char var_1f8 = arg1[0xa47].b
    int16_t var_1f7_1 = 0
    char var_1f5_1 = 0
    int32_t var_1f0_1 = 0
    int64_t var_1ec_1 = 0x7f7fffff
    int32_t var_1e4_1 = 0
    char var_1e0_1 = 0
    (*(*rcx_48 + 0x28))(zmm0_4, &var_258, &var_1f8)
    rbx_7 = var_258
    var_260 = rbx_7
    var_258 = nullptr
    int32_t zmm6_4 = sub_1405d1550(&var_258)
    int64_t* rcx_50 = data_143f0f180
    int32_t var_210_1 = zmm6_4
    char var_214 = arg1[0xa47].b
    int16_t var_213_1 = 0x101
    char var_211_1 = 1
    int32_t var_20c_1 = 0
    int64_t var_208_1 = 0x7f7fffff
    int32_t var_200_1 = 0
    char var_1fc_1 = 0
    (*(*rcx_50 + 0x28))(rcx_50, &var_250, &var_214)
    rdi_2 = var_250
    var_268 = rdi_2
    var_250 = nullptr
    zmm6_3 = sub_1405d1550(&var_250)
else
    sub_1405d16e0(&var_260, *(data_143f56328 + 0x10))
    rdx_17 = *(data_143f56330 + 0x10)
label_14142b0d7:
    zmm6_3 = sub_1405d16e0(&var_268, rdx_17)
    rbx_7 = var_260
    rdi_2 = var_268
*(arg7 + 0xdd8) = rbx_7
arg7[0xde].q = rdi_2
void* rax_116 = arg1[0x2b5]

if (rax_116 != 0 && *(rax_116 + 0xc10) != rbx_7)
    *(rax_116 + 0xc08) = zmm6_3
    sub_1405d16e0(arg1[0x2b5] + 0xc10, rbx_7)
    sub_1405d16e0(arg1[0x2b5] + 0xc18, rdi_2)

sub_1405d1550(&var_268)
sub_1405d1550(&var_260)
int32_t rcx_58 = 0
uint128_t zmm0_5 = zx.o(*(arg1 + 0x496c))
int32_t zmm1_3 = *(arg1 + 0x4974)
int32_t zmm2_2 = arg1[0x92f].d
uint128_t zmm3_2 = _mm_cvtepi32_ps(zx.o(arg1[0x92e].d))
zmm0_5 = _mm_cvtepi32_ps(zmm0_5)
_mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
zmm3_2.d = zmm0_5.d
_mm_shuffle_ps(zmm3_2, zmm3_2, 0xc6)
zmm3_2.d = zmm1_3
_mm_shuffle_ps(zmm3_2, zmm3_2, 0x27)
zmm3_2.d = zmm2_2
zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x39)
arg7[0x97] = zmm3_2
void* rax_117 = arg1[0x2b5]
var_288 = zmm3_2

if (rax_117 != 0)
    rcx_58 = *(rax_117 + 0x4c8)

*(arg7 + 0x8f8) = rcx_58
*(arg7 + 0x8f4) = rcx_58 & 7
int64_t* rbx_8 = arg1

if (sub_142391cc0(arg1) != 0)
    int64_t* rax_121 = *arg1
    
    if (rax_121[1].d s> 0)
        int64_t* rdi_3 = **rax_121
        
        if (*(rdi_3 + 0xd71) != 0 && sub_142391c60(rdi_3) != 0)
            rbx_8 = rdi_3

int64_t rdi_4 = sx.q(arg6)
float zmm8[0x4]
float zmm9_1[0x4]
zmm8, zmm9_1 = sub_1414c3d80(rbx_8, arg5, rdi_4.d)
int32_t rcx_62 = data_1439b70ac
int32_t rax_124

if (rcx_62 s>= 4)
    rax_124 = 0x800
    
    if (rcx_62 s< 0x800)
        rax_124 = rcx_62
else
    rax_124 = 4

float var_278[0x4]
int64_t r9_2
float zmm0_6[0x4]
float zmm1_4[0x4]
float zmm2_3[0x4]
float zmm3_3
float zmm4_3
float zmm5_2[0x4]
float zmm7_2[0x4]

if (rdi_4 s< 4)
    r9_2 = 0
else
    uint128_t zmm11_1 = _mm_cvtepi32_ps(zx.o(rax_124))
    void* r10_1 = &arg7[0x95]
    float (* rdx_26)[0x4] = arg5 + 0x40
    int64_t i_3 = ((rdi_4 - 4) u>> 2) + 1
    zmm8[0] = zmm8[0] f/ zmm11_1.d
    r9_2 = i_3 << 2
    float var_26c_1 = zmm8[0]
    int64_t i_1
    
    do
        zmm0_6 = rdx_26[-4][0]
        zmm1_4 = (*rdx_26)[-0xf]
        zmm2_3 = (*rdx_26)[-0xe]
        float zmm6_5[0x4] = (*rdx_26)[-0xd]
        zmm3_3 = rdx_26[-3][0]
        zmm6_5[0] = zmm6_5[0] - zmm0_6[0]
        zmm3_3 = zmm3_3 - zmm1_4[0]
        zmm7_2 = var_278
        zmm4_3 = (*rdx_26)[-0xb] - zmm2_3[0]
        zmm7_2[0] = zmm0_6[0]
        float temp0_38[0x4] = _mm_shuffle_ps(zmm7_2, zmm7_2, 0xe1)
        zmm8[0] = zmm8[0] / zmm6_5[0]
        temp0_38[0] = zmm1_4[0]
        float temp0_39[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
        float temp0_40[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc6)
        temp0_40[0] = zmm2_3[0]
        float temp0_41[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0xc9)
        *(r10_1 - 0x20) = temp0_41
        zmm8[0] = zmm8[0] / zmm3_3
        zmm8[0] = zmm8[0] / zmm4_3
        temp0_39[0] = zmm8[0]
        zmm8[0] = zmm8[0] * zmm6_5[0]
        float temp0_42[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc6)
        temp0_42[0] = zmm8[0]
        float temp0_43[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x27)
        temp0_43[0] = zmm8[0]
        *r10_1 = _mm_shuffle_ps(temp0_43, temp0_43, 0x39)
        zmm0_6 = (*rdx_26)[-9]
        zmm1_4 = rdx_26[-2][0]
        temp0_41[0] = zmm0_6[0]
        zmm2_3 = (*rdx_26)[-7]
        zmm6_5 = (*rdx_26)[-6]
        zmm3_3 = (*rdx_26)[-5]
        zmm6_5[0] = zmm6_5[0] - zmm0_6[0]
        zmm4_3 = rdx_26[-1][0]
        zmm3_3 = zmm3_3 - zmm1_4[0]
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xe1)
        zmm4_3 = zmm4_3 - zmm2_3[0]
        temp0_45[0] = zmm1_4[0]
        float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc6)
        zmm8[0] = zmm8[0] / zmm6_5[0]
        temp0_46[0] = zmm2_3[0]
        float temp0_47[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
        float temp0_48[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xc9)
        *(r10_1 - 0x10) = temp0_48
        zmm8[0] = zmm8[0] / zmm3_3
        zmm8[0] = zmm8[0] / zmm4_3
        temp0_47[0] = zmm8[0]
        zmm8[0] = zmm8[0] * zmm6_5[0]
        float temp0_49[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xc6)
        temp0_49[0] = zmm8[0]
        float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0x27)
        temp0_50[0] = zmm8[0]
        *(r10_1 + 0x10) = _mm_shuffle_ps(temp0_50, temp0_50, 0x39)
        zmm0_6 = (*rdx_26)[-2]
        zmm1_4 = *rdx_26
        temp0_48[0] = zmm0_6[0]
        zmm2_3 = (*rdx_26)[-1]
        zmm6_5 = (*rdx_26)[1]
        zmm3_3 = (*rdx_26)[3]
        zmm6_5[0] = zmm6_5[0] - zmm0_6[0]
        zmm4_3 = (*rdx_26)[2]
        zmm3_3 = zmm3_3 - zmm1_4[0]
        float temp0_52[0x4] = _mm_shuffle_ps(temp0_48, temp0_48, 0xe1)
        temp0_52[0] = zmm2_3[0]
        float temp0_53[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xc6)
        temp0_53[0] = zmm1_4[0]
        float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xc9)
        *r10_1 = temp0_54
        zmm4_3 = zmm4_3 - zmm2_3[0]
        zmm8[0] = zmm8[0] / zmm6_5[0]
        zmm8[0] = zmm8[0] * zmm6_5[0]
        float temp0_55[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
        zmm8[0] = zmm8[0] / zmm4_3
        zmm8[0] = zmm8[0] / zmm3_3
        temp0_55[0] = zmm8[0]
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xc6)
        temp0_56[0] = zmm8[0]
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x27)
        temp0_57[0] = zmm8[0]
        *(r10_1 + 0x20) = _mm_shuffle_ps(temp0_57, temp0_57, 0x39)
        zmm2_3 = (*rdx_26)[5]
        zmm0_6 = (*rdx_26)[6]
        temp0_54[0] = zmm2_3[0]
        zmm1_4 = (*rdx_26)[7]
        zmm5_2 = rdx_26[2][0]
        zmm4_3 = (*rdx_26)[9]
        zmm5_2[0] = zmm5_2[0] - zmm2_3[0]
        zmm3_3 = (*rdx_26)[0xa]
        zmm4_3 = zmm4_3 - zmm0_6[0]
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xe1)
        zmm3_3 = zmm3_3 - zmm1_4[0]
        temp0_59[0] = zmm0_6[0]
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xc6)
        zmm8[0] = zmm8[0] / zmm5_2[0]
        rdx_26 = &rdx_26[7]
        temp0_60[0] = zmm1_4[0]
        float temp0_61[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
        zmm8[0] = zmm8[0] / zmm4_3
        zmm8[0] = zmm8[0] / zmm3_3
        temp0_61[0] = zmm8[0]
        float temp0_62[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc9)
        float temp0_63[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xc6)
        temp0_63[0] = zmm8[0]
        *(r10_1 + 0x10) = temp0_62
        zmm5_2[0] = zmm5_2[0] f/ zmm11_1.d
        float temp0_64[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x27)
        temp0_64[0] = zmm5_2[0]
        var_278 = temp0_62
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x39)
        *(r10_1 + 0x30) = temp0_65
        r10_1 += 0x40
        var_298 = temp0_65
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

if (r9_2 s< rdi_4)
    float temp0_66[0x4] = _mm_cvtepi32_ps(zx.o(rax_124))
    float (* rdx_29)[0x4] = &arg7[r9_2 + 0x95]
    zmm8[0] = zmm8[0] / temp0_66[0]
    void* rcx_66 = arg5 + 0x10 + r9_2 * 0x1c
    int64_t i_5 = rdi_4 - r9_2
    float var_26c_2 = zmm8[0]
    int64_t i_2
    
    do
        zmm0_6 = *(rcx_66 - 0x10)
        zmm2_3 = *(rcx_66 - 0xc)
        zmm3_3 = *(rcx_66 - 8)
        zmm7_2 = *(rcx_66 - 4)
        zmm4_3 = *rcx_66
        zmm7_2[0] = zmm7_2[0] - zmm0_6[0]
        zmm5_2 = *(rcx_66 + 4)
        zmm4_3 = zmm4_3 - zmm2_3[0]
        zmm1_4 = var_278
        zmm5_2[0] = zmm5_2[0] - zmm3_3
        zmm1_4[0] = zmm0_6[0]
        rcx_66 += 0x1c
        float temp0_67[0x4] = _mm_shuffle_ps(zmm1_4, zmm1_4, 0xe1)
        zmm8[0] = zmm8[0] / zmm7_2[0]
        temp0_67[0] = zmm2_3[0]
        zmm7_2[0] = zmm7_2[0] * zmm8[0]
        float temp0_68[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
        float temp0_69[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xc6)
        temp0_69[0] = zmm3_3
        float temp0_70[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xc9)
        rdx_29[-2] = temp0_70
        var_278 = temp0_70
        zmm8[0] = zmm8[0] / zmm4_3
        zmm8[0] = zmm8[0] / zmm5_2[0]
        temp0_68[0] = zmm8[0]
        float temp0_71[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xc6)
        temp0_71[0] = zmm8[0]
        float temp0_72[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x27)
        temp0_72[0] = zmm7_2[0]
        float temp0_73[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x39)
        *rdx_29 = temp0_73
        rdx_29 = &rdx_29[1]
        var_298 = temp0_73
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

*(arg7 + 0x864) = *(arg1 + 0x4fd4)
zmm8[0] = zmm8[0] f/ *(arg1 + 0x4fd4)
*(arg7 + 0x868) = zmm8[0]
*(arg7 + 0x994) = *(arg1 + 0x1254)
arg7[0x99].d = arg1[0x24a].d
arg7[0x9a].d = arg1[0x24c].d
*(arg7 + 0x9a4) = __maxss_xmmss_memss((*(arg1 + 0x1264))[0], 0x3c23d70a)[0]
*(arg7 + 0x9a8) = __maxss_xmmss_memss(arg1[0x24d].d[0], 0x3c23d70a)[0]
*(arg7 + 0x998) = *(arg1 + 0x126c)
*(arg7 + 0x99c) = 0x42480000
float zmm0_7[0x4]

if (sub_14135d350() == 0)
    zmm0_7 = zmm9_1
else
    zmm0_7 = zmm8

arg7[0x9b].d = zmm0_7[0]
*(arg7 + 0x9b4) = 0x3f800000
*(arg7 + 0x9b8) = *(data_143ecf148 + 4)
zmm0_7 = arg1[0x246].d
zmm0_7[0] = zmm0_7[0] f* arg1[0x245].d
zmm0_7[0] = zmm0_7[0] f* arg1[0x244].d
zmm0_7[0] = zmm0_7[0] f* *(arg1 + 0x1224)
var_278[2] = zmm0_7[0]
float rax_133 = var_278[2]
arg7[0x9c].q = (_mm_unpacklo_ps(zmm0_7, zmm0_7[0].q)).q
*(arg7 + 0x9c8) = rax_133
int64_t rbx_9 = data_143ed2d70
int64_t rcx_68

if (data_143de5480 == 0)
    rcx_68 = 0
else
    rcx_68.b = GetCurrentThreadId() != data_143de5470

zmm0_7 = *(rbx_9 + (rcx_68 << 2))

if (zmm0_7[0] >= zmm9_1[0])
    zmm0_7 = __minss_xmmss_memss(zmm0_7[0], 0x40000000)
else
    zmm0_7 = zmm9_1

arg7[0xb1].d = zmm0_7[0]
int64_t rbx_10 = data_143ed2d40
int64_t rcx_69

if (data_143de5480 == 0)
    rcx_69 = 0
else
    rcx_69.b = GetCurrentThreadId() != data_143de5470

zmm0_7 = *(rbx_10 + (rcx_69 << 2))
zmm1_4 = 0xbf800000

if (not(zmm0_7[0] < -1f))
    zmm1_4 = _mm_min_ss(zmm0_7[0], zmm8[0])

*(arg7 + 0xb14) = zmm1_4[0]
int64_t rbx_11 = data_143ed2d58
int64_t rcx_70

if (data_143de5480 == 0)
    rcx_70 = 0
else
    rcx_70.b = GetCurrentThreadId() != data_143de5470

zmm0_7 = *(rbx_11 + (rcx_70 << 2))
zmm1_4 = 0x3d4ccccd

if (not(zmm0_7[0] < 0.0500000007f))
    zmm1_4 = __minss_xmmss_memss(zmm0_7[0], 0x41a00000)

*(arg7 + 0xb18) = zmm1_4[0]

if (*(arg1 + 0xd74) == 0)
    zmm0_7 = zmm9_1
else
    zmm0_7 = zmm8

*(arg7 + 0xb1c) = zmm0_7[0]
arg7[0xb2] = *(arg1 + 0x10bc)
arg7[0xb3].d = *(arg1 + 0x10cc)
void var_e8
arg7[0x98] = *sub_14130ee90(&var_e8, arg1)
int32_t var_238_1
float zmm0_8[0x4]

if (r15 != 0)
    void* rbx_13 = r15[0x1f0]
    var_238_1 = r15[1].d
    
    if (rbx_13 == 0)
        goto label_14142b8ba
    
    float var_d8[0x4]
    arg7[0xb4] = *sub_141f624b0(rbx_13, &var_d8)
    
    if ((*(rbx_13 + 0x20) & 3) != 3)
        zmm0_8 = zmm9_1
    else
        zmm0_8 = zmm8
    
    *(arg7 + 0xb34) = zmm0_8[0]
    
    if ((*(rbx_13 + 0x20) & 0x20) == 0)
        zmm0_8 = zmm9_1
    else
        zmm0_8 = zmm8
    
    *(arg7 + 0xb38) = zmm0_8[0]
    
    if ((*(rbx_13 + 0x20) & 0x40) == 0)
        zmm0_8 = zmm9_1
    else
        zmm0_8 = zmm8
else
    var_238_1 = data_1439c7a08
label_14142b8ba:
    zmm0_8 = data_14399f5e0
    *(arg7 + 0xb34) = 0
    arg7[0xb4] = zmm0_8
    zmm0_8 = zmm9_1

*(arg7 + 0xb3c) = zmm0_8[0]
int64_t* rcx_72 = *(*arg1 + 0x20)
uint128_t zmm1_5
float zmm2_4

if (rcx_72 == 0)
    memset(&arg7[0xb5], 0, 0x70)
else
    void* rax_142 = (*(*rcx_72 + 0x248))(rcx_72)
    
    if (rax_142 == 0)
        memset(&arg7[0xb5], 0, 0x70)
    else
        void* rax_143 = *(rax_142 + 0xf80)
        
        if (rax_143 == 0 || (*(rax_143 + 0x20) & 4) != 0 || (*(*arg1 + 0x2c) & 0x80000) == 0)
            memset(&arg7[0xb5], 0, 0x70)
        else
            zmm0_8 = *(rax_143 + 0x3c)
            zmm0_8[0] = zmm0_8[0] * -0.325735003f
            arg7[0xb5].d = zmm0_8[0]
            zmm0_8 = *(rax_143 + 0x34)
            zmm0_8[0] = zmm0_8[0] * -0.325735003f
            *(arg7 + 0xb54) = zmm0_8[0]
            zmm1_5.d = (*(rax_143 + 0x38)).d f* 0.325735003f
            *(arg7 + 0xb58) = zmm1_5.d
            zmm2_4 = *(rax_143 + 0x30)
            zmm0_8 = *(rax_143 + 0x48)
            zmm0_8[0] = zmm0_8[0] * 0.0788478926f
            *(arg7 + 0xb5c) = zmm2_4 * 0.282094777f - zmm0_8[0]
            zmm0_8 = *(rax_143 + 0x6c)
            zmm0_8[0] = zmm0_8[0] * -0.325735003f
            arg7[0xb6].d = zmm0_8[0]
            zmm1_5.d = (*(rax_143 + 0x64)).d f* -0.325735003f
            *(arg7 + 0xb64) = zmm1_5.d
            zmm0_8 = *(rax_143 + 0x68)
            zmm0_8[0] = zmm0_8[0] * 0.325735003f
            *(arg7 + 0xb68) = zmm0_8[0]
            zmm1_5 = *(rax_143 + 0x60)
            zmm0_8 = *(rax_143 + 0x78)
            zmm0_8[0] = zmm0_8[0] * 0.0788478926f
            zmm1_5.d = zmm1_5.d f* 0.282094777f
            zmm1_5.d = zmm1_5.d f- zmm0_8[0]
            *(arg7 + 0xb6c) = zmm1_5.d
            zmm0_8 = *(rax_143 + 0x9c)
            zmm0_8[0] = zmm0_8[0] * -0.325735003f
            arg7[0xb7].d = zmm0_8[0]
            zmm1_5.d = (*(rax_143 + 0x94)).d f* -0.325735003f
            *(arg7 + 0xb74) = zmm1_5.d
            zmm0_8 = *(rax_143 + 0x98)
            zmm0_8[0] = zmm0_8[0] * 0.325735003f
            *(arg7 + 0xb78) = zmm0_8[0]
            zmm0_8 = *(rax_143 + 0xa8)
            zmm1_5.d = (*(rax_143 + 0x90)).d f* 0.282094777f
            zmm0_8[0] = zmm0_8[0] * 0.0788478926f
            zmm1_5.d = zmm1_5.d f- zmm0_8[0]
            *(arg7 + 0xb7c) = zmm1_5.d
            zmm1_5.d = (*(rax_143 + 0x40)).d f* 0.273137093f
            arg7[0xb8].d = zmm1_5.d
            zmm0_8 = *(rax_143 + 0x44)
            zmm0_8[0] = zmm0_8[0] * -0.273137093f
            *(arg7 + 0xb84) = zmm0_8[0]
            zmm1_5.d = (*(rax_143 + 0x48)).d f* 0.23654367f
            *(arg7 + 0xb88) = zmm1_5.d
            zmm0_8 = *(rax_143 + 0x4c)
            zmm0_8[0] = zmm0_8[0] * -0.273137093f
            *(arg7 + 0xb8c) = zmm0_8[0]
            zmm1_5.d = (*(rax_143 + 0x70)).d f* 0.273137093f
            arg7[0xb9].d = zmm1_5.d
            zmm0_8 = *(rax_143 + 0x74)
            zmm0_8[0] = zmm0_8[0] * -0.273137093f
            *(arg7 + 0xb94) = zmm0_8[0]
            zmm1_5.d = (*(rax_143 + 0x78)).d f* 0.23654367f
            *(arg7 + 0xb98) = zmm1_5.d
            zmm0_8 = *(rax_143 + 0x7c)
            zmm0_8[0] = zmm0_8[0] * -0.273137093f
            *(arg7 + 0xb9c) = zmm0_8[0]
            zmm1_5.d = (*(rax_143 + 0xa0)).d f* 0.273137093f
            arg7[0xba].d = zmm1_5.d
            zmm0_8 = *(rax_143 + 0xa4)
            zmm0_8[0] = zmm0_8[0] * -0.273137093f
            *(arg7 + 0xba4) = zmm0_8[0]
            zmm1_5.d = (*(rax_143 + 0xa8)).d f* 0.23654367f
            *(arg7 + 0xba8) = zmm1_5.d
            zmm0_8 = *(rax_143 + 0xac)
            zmm0_8[0] = zmm0_8[0] * -0.273137093f
            *(arg7 + 0xbac) = zmm0_8[0]
            zmm1_5.d = (*(rax_143 + 0x50)).d f* 0.136568546f
            arg7[0xbb].d = zmm1_5.d
            zmm0_8 = *(rax_143 + 0x80)
            zmm0_8[0] = zmm0_8[0] * 0.136568546f
            *(arg7 + 0xbb4) = zmm0_8[0]
            zmm1_5.d = (*(rax_143 + 0xb0)).d f* 0.136568546f
            *(arg7 + 0xbbc) = 0x3f800000
            *(arg7 + 0xbb8) = zmm1_5.d

arg7[0xbc].d = 0
char rax_147 = sub_142391ee0(zx.q(arg1[0x15a].d))
bool cond:9 = rax_147 != 0
int64_t* rax_148
int32_t temp5_1

if (rax_147 != 0)
    rax_148 = *arg1
    temp5_1 = rax_148[1].d
    cond:9 = temp5_1 != 1

if (rax_147 == 0 || temp5_1 s<= 1)
    zmm2_4 = zmm8[0]
else
    int64_t* rax_149 = *rax_148
    void* rdx_32 = rax_149[1]
    void* rcx_77 = *rax_149
    int32_t rax_152 = *(rdx_32 + 0x1598)
    int32_t rax_153 = rax_152 - *(rcx_77 + 0x15a0)
    cond:9 = rax_152 != *(rcx_77 + 0x15a0)
    zmm1_5 = _mm_cvtepi32_ps(zx.o(*(rdx_32 + 0x15a0) - *(rcx_77 + 0x1598)))
    zmm2_4 = (zmm1_5.d f- _mm_cvtepi32_ps(zx.o(rax_153)).d) f/ zmm1_5.d

*(arg7 + 0xbc4) = zmm2_4
uint64_t rflags
int32_t temp0_82
temp0_82, rflags = _bit_scan_reverse(sub_141f3cd00())
uint64_t rax_155 = 0
var_228.d = temp0_82

if (cond:9)
    rax_155 = zx.q(temp0_82)

uint128_t zmm0_9
zmm0_9.d = float.s(rax_155)
*(arg7 + 0xbc8) = zmm0_9.d

if ((*(*arg1 + 0x28) & 0x200) != 0)
    zmm9_1 = zmm8

*(arg7 + 0xbcc) = zmm9_1[0]
arg7[0xbd].d = data_1439b55a4

if (r15 != 0)
    zmm8 = r15[0xc64].d

*(arg7 + 0xbd4) = zmm8[0]
float* rax_158 = sub_1413e9a00(&var_298)
arg7[0xbe].q = *rax_158
*(arg7 + 0xbe8) = rax_158[2]
int64_t* rcx_80 = *(data_143f5b298 + 0xaf8)
int32_t rax_162

if (rcx_80 == 0)
    rax_162 = 0
else
    rax_162 = (*(*rcx_80 + 0x30))(rcx_80, zx.q(arg1[0x15a].d))

*(arg7 + 0xbec) = rax_162
*(arg7 + 0xcfc) = *(arg1 + 0xad4)
int64_t* rcx_81 = *(data_143f5b298 + 0xb08)
float (* rax_166)[0x4]
int32_t rdx_35
int64_t* r13_3

if (rcx_81 == 0)
    rax_166 = &var_288
    var_288 = zx.o(0)
    r13_3 = nullptr
    rdx_35 = 2
else
    void var_160
    rax_166 = (*(*rcx_81 + 0xf8))(rcx_81, &var_160, 0)
    rdx_35 = 1
    r13_3 = *rax_166

int64_t* rdi_5 = *(rax_166 + 8)
*(rax_166 + 8) = 0.0
*rax_166 = 0

if ((rdx_35.b & 2) != 0)
    void* rcx_82 = var_288[2].q
    rdx_35 &= 0xfffffffd
    void* var_248
    var_248.d = rdx_35
    
    if (rcx_82 != 0)
        int32_t rax_167 = *(rcx_82 + 8)
        *(rcx_82 + 8) -= 1
        
        if (rax_167 == 1)
            int64_t* rbx_14 = var_288[2].q
            (**rbx_14)(rbx_14)
            int32_t rax_169 = *(rbx_14 + 0xc)
            *(rbx_14 + 0xc) -= 1
            
            if (rax_169 == 1)
                int64_t* rcx_84 = var_288[2].q
                (*(*rcx_84 + 8))(rcx_84, 1)
            
            rdx_35 = var_248.d

int64_t* var_158

if ((rdx_35.b & 1) != 0 && var_158 != 0)
    var_158[1].d -= 1
    
    if (var_158[1].d == 1)
        (**var_158)(var_158)
        int32_t rax_173 = *(var_158 + 0xc)
        *(var_158 + 0xc) -= 1
        
        if (rax_173 == 1)
            (*(*var_158 + 8))(var_158, 1)

var_2a8[0].q = 0
int128_t* rcx_87 = nullptr

if (r13_3 == 0)
    __builtin_memcpy(&arg7[0xd5], 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x"
    "00\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x20)
else if ((*(*r13_3 + 0x48))(r13_3, &var_2a8) == 0 || 0:4.d != 4)
    rcx_87 = var_2a8[0].q
    __builtin_memcpy(&arg7[0xd5], 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x00\x"
    "00\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x20)
else
    rcx_87 = var_2a8[0].q
    uint128_t zmm0_10 = *(rcx_87 + 4)
    int128_t zmm1_6 = *(rcx_87 + 8)
    int32_t zmm2_5 = *(rcx_87 + 0xc)
    float zmm3_4[0x4] = *rcx_87
    float temp0_87[0x4] = _mm_shuffle_ps(zmm3_4, zmm3_4, 0xe1)
    temp0_87[0] = zmm0_10.d
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0xc6)
    temp0_88[0] = zmm1_6.d
    float temp0_89[0x4] = _mm_shuffle_ps(temp0_88, temp0_88, 0x27)
    temp0_89[0] = zmm2_5
    arg7[0xd5] = _mm_shuffle_ps(temp0_89, temp0_89, 0x39)
    zmm3_4 = rcx_87[1].d
    zmm0_10 = *(rcx_87 + 0x14)
    zmm1_6 = *(rcx_87 + 0x18)
    zmm2_5 = *(rcx_87 + 0x1c)
    float temp0_91[0x4] = _mm_shuffle_ps(zmm3_4, zmm3_4, 0xe1)
    temp0_91[0] = zmm0_10.d
    float temp0_92[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xc6)
    temp0_92[0] = zmm1_6.d
    float temp0_93[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0x27)
    temp0_93[0] = zmm2_5
    arg7[0xd6] = _mm_shuffle_ps(temp0_93, temp0_93, 0x39)

if (rcx_87 != 0)
    sub_140a74f90(rcx_87)

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t r12_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (r12_1 == 1)
            (*(*rdi_5 + 8))(rdi_5, zx.q(r12_1))

int32_t rax_180 = 0

if ((arg1[0x15d].b & 2) != 0)
    rax_180 = data_143f3ad88

arg7[0xdb].d = rax_180
*(arg7 + 0xf48) = *(*(*(data_143f5b298 + 0x6e0) + 0x78) + 0x10)
arg7[0xd7].d = *(arg2 + 0x338)
__builtin_memset(&arg7[0xd8], 0, 0x18)
arg7[0xda] = zx.o(0)

if (sub_1411a4ac0(data_143f0f1a0, var_238_1) != 0)
    int64_t rax_185 = arg1[0xa2f]
    
    if (rax_185 != 0)
        *(arg7 + 0xf58) = rax_185
    else
        void* rdx_39 = arg1[0x2b5]
        void* rcx_94 = rdx_39 + 0xf50
        
        if (rdx_39 == 0)
            rcx_94 = &arg1[0x4e0]
        
        rax_185 = *(rcx_94 + 0x10)
        
        if (rax_185 != 0)
            *(arg7 + 0xf58) = rax_185
    
    int64_t rax_188 = arg1[0xa30]
    
    if (rax_188 == 0)
        void* rdx_40 = arg1[0x2b5]
        void* rcx_95 = rdx_40 + 0xf70
        
        if (rdx_40 == 0)
            rcx_95 = &arg1[0x4e4]
        
        rax_188 = *rcx_95
        
        if (rax_188 == 0)
            rax_188 = *(data_143f10e68 + 0x10)
    
    arg7[0xf6].q = rax_188
    int64_t rax_190 = arg1[0xa31]
    
    if (rax_190 != 0)
        *(arg7 + 0xf68) = rax_190
    else if (r15 != 0)
        rax_190 = r15[0x309]
        
        if (rax_190 != 0)
            *(arg7 + 0xf68) = rax_190

sub_1411f3270(arg1, &arg7[0xdc], &arg7[0xdd])
void var_1a8
int64_t rdx_43 = *sub_14139f680(arg2, &var_1a8)
arg7[0xfb].q = rdx_43
sub_1405d1550(&var_1a8, rdx_43)
*(arg7 + 0xfb8) = *sub_14139d420(arg2, &var_278)
int64_t result = sub_1405d1550(&var_278)
__security_check_cookie(rax_1 ^ &var_2e8)
return result
