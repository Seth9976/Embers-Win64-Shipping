// 函数: sub_141393b50
// 地址: 0x141393b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_498
int64_t rax_1 = __security_cookie ^ &var_498
char r13 = arg3
sub_141391390(arg1, arg2)
int64_t* rax_2 = sub_14139d690(arg1)
char var_458 = 0

if (r13 == 2)
    void* rax_3 = *rax_2
    
    if (*(rax_3 + 0x20) == 0 || *(rax_3 + 0x24) != *arg6 || *(rax_3 + 0x28) f!= arg6[1]
            || *(rax_3 + 0x2c) f!= arg6[2] || *(rax_3 + 0x30) f!= arg6[3])
        r13 = 0
        var_458 = 1
    else
        *(arg1 + 0x3da) = 1

int128_t var_428
memset(&var_428, 0, 0x120)
void var_438
void var_434
int64_t* var_108[0x8]
int32_t rax_4 = sub_14139cd20(arg1, &var_108, &var_434, &var_438)
int64_t r14 = sx.q(rax_4)

if (rax_4 s> 0)
    int128_t* rdx_1 = &var_428
    int64_t r8_1 = 0
    
    do
        int64_t* rax_5 = var_108[r8_1]
        r8_1 += 1
        *(rdx_1 + 0x15) = r13 << 2 | 1
        *rdx_1 = *(*rax_5 + 8)
        rdx_1[1].d = 0xffffffff
        *(rdx_1 + 0x14) = 0
        rdx_1 += 0x18
    while (r8_1 s< r14)

if (arg4 == 2)
    *(arg1 + 0x3db) = 1

char rcx_4 = 0

if ((arg5 & 0xf) == 2)
    rcx_4 = 4

char var_358 = (rcx_4 | arg4 << 4 | arg4) << 2 | 1
int64_t rax_9 = *(*(arg1 + 0x40) + 8)
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t var_368 = rax_9
int32_t var_354 = arg5
void* rax_10 = &rcx_7[4]

if (rax_10 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_7[4]

*(arg2 + 0x30) = rax_10
int64_t* rax_11 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_11 = rcx_7
*(arg2 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142f115e8
rcx_7[3] = rax_9
rcx_7[2].d = arg5
int32_t rcx_11 = *(arg1 + 0x3d0)
int64_t var_440
var_440.d = rcx_11
sub_1419ba670(rcx_11)
int64_t rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_14 = rbx_3 + 0x10

if (rax_14 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x12)
    rbx_3 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    rax_14 = rbx_3 + 0x10

wchar16 const* const rcx_13 = u"GBuffer"
*(arg2 + 0x30) = rax_14
wchar16 const i

do
    i = *rcx_13
    *(rcx_13 + rbx_3 - u"GBuffer") = i
    rcx_13 = &rcx_13[1]
while (i != 0)
void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_15 = &rcx_16[0x27]

if (rax_15 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x140)
    rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_15 = &rcx_16[0x27]

*(arg2 + 0x30) = rax_15
void**** rax_16 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_16 = rcx_16
*(arg2 + 8) = &rcx_16[1]
sub_1405d11b0(rcx_16, &var_428, rbx_3)
*(arg2 + 0x1c4) = 1
sub_1405d19b0(arg2, &var_428)
char var_311
*(arg2 + 0x178) = var_311
*(arg2 + 0x179) = 0
*(arg2 + 0x1c4) = 1
int128_t var_3f8

if (var_458 != 0)
    int128_t var_c8 = *arg6
    int128_t* rdx_8
    
    if (r14 s> 1)
        int64_t i_1 = 1
        void var_148
        int128_t zmm0_2
        
        if (r14 s>= 5)
            void var_a8
            void* r8_3 = &var_a8
            rdx_8 = &var_3f8
            
            do
                void* rax_19 = *(rdx_8 - 0x18)
                r8_3 += 0x40
                *(&var_148 + (i_1 << 3)) = rax_19
                rdx_8 = &rdx_8[6]
                zmm0_2 = *(rax_19 + 0x24)
                void* rax_20 = rdx_8[-6].q
                void var_140
                *(&var_140 + (i_1 << 3)) = rax_20
                int128_t var_454_1 = zmm0_2
                *(r8_3 - 0x50) = zmm0_2
                zmm0_2 = *(rax_20 + 0x24)
                void* rax_21 = *(rdx_8 - 0x48)
                void var_138
                *(&var_138 + (i_1 << 3)) = rax_21
                int128_t var_454_2 = zmm0_2
                *(r8_3 - 0x40) = zmm0_2
                zmm0_2 = *(rax_21 + 0x24)
                void* rax_22 = rdx_8[-3].q
                int64_t var_130[0x5]
                var_130[i_1] = rax_22
                i_1 += 4
                int128_t var_454_3 = zmm0_2
                *(r8_3 - 0x30) = zmm0_2
                zmm0_2 = *(rax_22 + 0x24)
                *(r8_3 - 0x20) = zmm0_2
                int128_t var_454_4 = zmm0_2
            while (i_1 s< r14 - 3)
        
        if (i_1 s< r14)
            void* r8_4 = &(&var_c8)[i_1]
            rdx_8 = &var_428 + i_1 * 0x18
            
            do
                void* rax_26 = *rdx_8
                r8_4 += 0x10
                *(&var_148 + (i_1 << 3)) = rax_26
                rdx_8 += 0x18
                i_1 += 1
                zmm0_2 = *(rax_26 + 0x24)
                *(r8_4 - 0x10) = zmm0_2
                int128_t var_454_5 = zmm0_2
            while (i_1 s< r14)
    
    rdx_8.b = 1
    sub_14199cb60(arg2, rdx_8.b, rax_4, &var_c8, 0, zx.o(0).d, 0, 0)

if (arg3 == 2 || *(arg1 + 0x3da) == 0)
    r14.b = 0
else
    r14.b = 1

if (arg4 == 2 || *(arg1 + 0x3db) == 0)
    rbx_3.b = 0
else
    rbx_3.b = 1

void*** rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_27 = &rcx_24[3]

if (rax_27 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_24 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_27 = &rcx_24[3]

*(arg2 + 0x30) = rax_27
void**** rax_28 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_28 = rcx_24
*(arg2 + 8) = &rcx_24[1]
rcx_24[1] = 0
*rcx_24 = &data_142f6bbc8
rcx_24[2].b = r14.b
*(rcx_24 + 0x11) = rbx_3.b
*(rcx_24 + 0x12) = rbx_3.b
int64_t* var_320

if (arg7 != 0)
    sub_141096650(arg2)
    int64_t* rax_30 = *(arg2 + 0x98)
    int64_t* r14_1 = &data_143ec4c60
    
    if (rax_30 != 0)
        r14_1 = rax_30
    
    int128_t var_268
    memset(&var_268, 0, 0x120)
    int64_t* rbx_6 = var_320
    int64_t* var_160
    int64_t* rax_31 = var_160
    var_428 = var_268
    int64_t var_258
    uint64_t var_418_1 = var_258
    int64_t var_240
    uint64_t var_400_1 = var_240
    int64_t var_228
    uint64_t var_3e8_1 = var_228
    int64_t var_210
    uint64_t var_3d0_1 = var_210
    int64_t var_1f8
    uint64_t var_3b8_1 = var_1f8
    int64_t var_1e0
    uint64_t var_3a0_1 = var_1e0
    int64_t var_1c8
    uint64_t var_388_1 = var_1c8
    int64_t var_1b0
    uint64_t var_370_1 = var_1b0
    int64_t var_198
    var_358.q = var_198
    var_320 = rax_31
    int128_t var_250
    int128_t var_410_1 = var_250
    int128_t var_238
    var_3f8 = var_238
    uint128_t var_180
    uint128_t var_340_1 = var_180
    int128_t var_220
    int128_t var_3e0_1 = var_220
    int128_t var_208
    int128_t var_3c8_1 = var_208
    int128_t var_1f0
    int128_t var_3b0_1 = var_1f0
    int128_t var_1d8
    int128_t var_398_1 = var_1d8
    int128_t var_1c0
    int128_t var_380_1 = var_1c0
    int128_t var_1a8
    var_368.o = var_1a8
    int128_t var_190
    int128_t var_350_1 = var_190
    int128_t var_170
    int128_t var_330_1 = var_170
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            char rax_33
            
            if (rbx_6[2].b == 0 && data_143f0f1d0 == 0)
                rax_33 = sub_1405949a0()
            
            if (rbx_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_33 != 0))
                (**rbx_6)(rbx_6, 1)
            else
                bool z_1
                
                if (0 == *(rbx_6 + 0xc))
                    *(rbx_6 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_6 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_35 = sub_140a20af0()
                    uint64_t rdx_9 = zx.q(rax_35)
                    void* const rax_36
                    
                    if (rax_35 != 0)
                        rax_36 = *(&data_143cf0bf8 + (rdx_9 u>> 0xe << 3))
                            + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                    else
                        rax_36 = nullptr
                    
                    *(rax_36 + 8) = rbx_6
                    sub_1405a42f0(&data_143f02390, rdx_9.d)
    
    int32_t var_158
    int32_t var_318_1 = var_158
    char var_154
    char var_314_1 = var_154
    char var_153
    char var_313_1 = var_153
    char var_152
    char var_312_1 = var_152
    char var_150
    char var_310_1 = var_150
    char var_14f
    char var_30f_1 = var_14f
    sub_1405d1550(&var_160)
    var_418_1:5.b = r13 << 2 | 1
    int64_t* rcx_35 = r14_1[0x35]
    int32_t rax_50
    uint32_t rbx_7
    
    if (rcx_35 != 0)
        rbx_7 = zx.d(*((*(*rcx_35 + 0x10))(rcx_35) + 0x28))
        rax_50 = sub_14139c8b0(r14_1)
    
    char var_478
    int32_t var_470
    int32_t var_460
    
    if (rcx_35 == 0 || rbx_7 != rax_50)
        int64_t rax_51 = *(r14_1 + 0x37c)
        int32_t var_2f4_1 = rax_51.d
        uint32_t var_2f0_1 = (rax_51 u>> 0x20).d
        int32_t var_2ec_1 = 0
        int32_t var_2f8_1 = data_1439c7b30
        wchar16 const* const var_2c8_1 = u"UnknownTexture2D"
        int128_t var_308 = data_1439c7b20
        int32_t var_2e8_1 = 1
        int32_t var_2e4_1 = 0x10000
        int16_t var_2e0_1 = 1
        int64_t var_2dc_1 = 2
        int32_t var_2d4_1 = 9
        int16_t var_2d0_1 = 0x100
        int16_t var_2c0_1 = 1
        char var_2be_1 = 0
        var_460.b = 0
        int16_t var_2e0_2 = sub_14139c8b0(r14_1)
        var_470.b = 1
        var_478.q = u"EditorPrimitivesColor"
        sub_1419a0ce0(&data_1439c9260, arg2, &var_308, &r14_1[0x35], var_478, var_470.b, 1, 
            var_460.b)
    
    var_428.q = *(r14_1[0x35] + 8)
    var_418_1.d = 0xffffffff
    char var_358_1 = (arg4 << 4 | arg4) << 2 | 0x11
    var_418_1:4.b = 0
    int64_t* rcx_40 = r14_1[0x36]
    
    if (rcx_40 == 0)
    label_1413943b1:
        int64_t rax_59 = *(r14_1 + 0x37c)
        int32_t var_2a4_1 = rax_59.d
        uint32_t var_2a0_1 = (rax_59 u>> 0x20).d
        int32_t var_29c_1 = 0
        int32_t var_2a8_1 = data_1439c7b78
        wchar16 const* const var_278_1 = u"UnknownTexture2D"
        int128_t var_2b8 = data_1439c7b68
        int32_t var_298_1 = 1
        int32_t var_294_1 = 0x10000
        int16_t var_290_1 = 1
        int64_t var_28c_1 = 0xb
        int32_t var_284_1 = 0xc
        int16_t var_280_1 = 0x100
        int16_t var_270_1 = 1
        char var_26e_1 = 0
        var_460.b = 0
        int16_t var_290_2 = sub_14139c8b0(r14_1)
        var_470.b = 1
        var_478.q = u"EditorPrimitivesDepth"
        sub_1419a0ce0(&data_1439c9260, arg2, &var_2b8, &r14_1[0x36], var_478, var_470.b, 1, 
            var_460.b)
    else if (r14_1[0x7a].d s>= 3
            && zx.d(*((*(*rcx_40 + 0x10))(rcx_40) + 0x28)) != sub_14139c8b0(r14_1))
        goto label_1413943b1
    
    int64_t rbx_11 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t var_368_1 = *(r14_1[0x36] + 8)
    int32_t var_354_1 = 0x22
    int64_t rax_63 = rbx_11 + 0x14
    
    if (rax_63 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x16)
        rbx_11 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
        rax_63 = rbx_11 + 0x14
    
    wchar16 const* const rcx_46 = u"Wireframe"
    *(arg2 + 0x30) = rax_63
    wchar16 const i_2
    
    do
        i_2 = *rcx_46
        *(rcx_46 + rbx_11 - u"Wireframe") = i_2
        rcx_46 = &rcx_46[1]
    while (i_2 != 0)
    void*** rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_64 = &rcx_49[0x27]
    
    if (rax_64 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x140)
        rcx_49 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_64 = &rcx_49[0x27]
    
    *(arg2 + 0x30) = rax_64
    void**** rax_65 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_65 = rcx_49
    *(arg2 + 8) = &rcx_49[1]
    sub_1405d11b0(rcx_49, &var_428, rbx_11)
    *(arg2 + 0x1c4) = 1
    sub_1405d19b0(arg2, &var_428)
    char var_151
    *(arg2 + 0x178) = var_151
    *(arg2 + 0x179) = 0
    *(arg2 + 0x1c4) = 1

int64_t result = sub_1405d1550(&var_320)
__security_check_cookie(rax_1 ^ &var_498)
return result
