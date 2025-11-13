// 函数: sub_141360db0
// 地址: 0x141360db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_498
int64_t rax_1 = __security_cookie ^ &var_498
int32_t var_3f8 = 0
void* rax_2 = sub_14139ce70(arg1)
int32_t rcx = arg1[0x3b].d
int32_t rax_3 = arg1[0x3c].d
int32_t r9 = *(arg1 + 0x1dc)
int32_t var_3ec = rax_3
int32_t var_3e8 = rcx
int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(rax_3 - rcx + 3)
int32_t var_3f0 = r9
int32_t rcx_2 = ((temp1 & 3) + temp2) s>> 2
int32_t temp3
int32_t temp4
temp3:temp4 = sx.q(*(arg1 + 0x1e4) - r9 + 3)
int32_t rdx_6 = ((temp3 & 3) + temp4) s>> 2
int32_t var_3e4 = rdx_6
int32_t var_3a4 = rdx_6
int32_t var_3c0

if (arg1[0x3d].b == 0)
    var_3c0 = rcx_2
    int32_t var_3bc_1 = rdx_6
    var_3e8 = 0
    var_3f0 = 0
    var_3ec = rcx_2
else
    rdx_6 = *(arg1 + 0x1e4)
    var_3c0 = *(rax_2 + 0x14)
    int32_t var_3bc = *(rax_2 + 0x18)

int64_t* rax_11 = sub_1413a8300(&arg1[6], arg2)
char r13 = *(arg1 + 0x1eb)
int64_t* rbx = nullptr
char r14 = *(arg1 + 0x1ea)
int64_t* r15 = nullptr
char rdi = *(arg1 + 0x1e9)
int64_t* var_3e0 = rax_11
char rax_12 = *(arg1 + 0x1ec)
int32_t rcx_7 = 1
int32_t rdx_9

if (sub_14135d3f0(rdi, r14, r13, rax_12) == 0 || rdi != 0)
    rdx_9 = 1
else
    rdx_9 = 0

if (r14 == 0 && r13 == 0)
    rcx_7 = 0

int32_t rax_14
rax_14.b = rax_12 != 0
uint64_t r13_2 = zx.q(rcx_7 + rax_14 + rdx_9)

if (r13_2.d u> 1)
    rbx = sub_1413a8300(&arg1[0x12], arg2)

if (r13_2.d u> 2)
    r15 = sub_1413a8300(&arg1[0x1e], arg2)

int64_t var_68 = *var_3e0
int64_t* var_3d8
int64_t* var_3b8
int64_t* rax_17
int64_t* rcx_13
int32_t rdi_1

if (rbx == 0)
    rax_17 = nullptr
    rcx_13 = nullptr
    var_3b8 = nullptr
    rdi_1 = 2
else
    int64_t* rcx_12 = *rbx
    var_3d8 = rcx_12
    
    if (rcx_12 != 0)
        rcx_12[1].d += 1
    
    rcx_13 = var_3d8
    rdi_1 = 1
    rax_17 = var_3b8

int64_t* var_60 = rcx_13

if ((rdi_1.b & 2) != 0)
    rdi_1 &= 0xfffffffd
    
    if (rax_17 != 0)
        rax_17[1].d -= 1
        
        if (rax_17[1].d == 1)
            if (var_3b8[2].b != 0)
                (**var_3b8)(var_3b8, 1)
            else
                char rax_18
                
                if (data_143f0f1d0 == 0)
                    rax_18 = sub_1405949a0()
                
                if (data_143f0f1d0 == 0 && rax_18 != 0)
                    (**var_3b8)(var_3b8, 1)
                else
                    bool z_1
                    
                    if (0 == *(var_3b8 + 0xc))
                        *(var_3b8 + 0xc) = 1
                        z_1 = true
                    else
                        *(var_3b8 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, var_3b8)

if ((rdi_1.b & 1) != 0)
    rdi_1 &= 0xfffffffe
    
    if (var_3d8 != 0)
        var_3d8[1].d -= 1
        
        if (var_3d8[1].d == 1)
            if (var_3d8[2].b != 0)
                (**var_3d8)(var_3d8, 1)
            else
                char rax_22
                
                if (data_143f0f1d0 == 0)
                    rax_22 = sub_1405949a0()
                
                if (data_143f0f1d0 == 0 && rax_22 != 0)
                    (**var_3d8)(var_3d8, 1)
                else
                    bool z_2
                    
                    if (0 == *(var_3d8 + 0xc))
                        *(var_3d8 + 0xc) = 1
                        z_2 = true
                    else
                        *(var_3d8 + 0xc)
                        z_2 = false
                    
                    if (z_2)
                        sub_1405dcc10(&data_143f02390, var_3d8)

int64_t* var_3d0
int64_t* var_3b0
int64_t* rax_26
int64_t* rcx_18
int32_t r15_1

if (r15 == 0)
    rax_26 = nullptr
    r15_1 = 8
    var_3b0 = nullptr
    rcx_18 = nullptr
else
    int64_t* rax_25 = *r15
    var_3d0 = rax_25
    
    if (rax_25 != 0)
        rax_25[1].d += 1
    
    rcx_18 = var_3d0
    r15_1 = 4
    rax_26 = var_3b0

int32_t r15_2 = r15_1 | rdi_1
int64_t* var_58 = rcx_18

if ((r15_2.b & 8) != 0)
    r15_2 &= 0xfffffff7
    
    if (rax_26 != 0)
        rax_26[1].d -= 1
        
        if (rax_26[1].d == 1)
            if (var_3b0[2].b != 0)
                (**var_3b0)(var_3b0, 1)
            else
                char rax_27
                
                if (data_143f0f1d0 == 0)
                    rax_27 = sub_1405949a0()
                
                if (data_143f0f1d0 == 0 && rax_27 != 0)
                    (**var_3b0)(var_3b0, 1)
                else
                    bool z_3
                    
                    if (0 == *(var_3b0 + 0xc))
                        *(var_3b0 + 0xc) = 1
                        z_3 = true
                    else
                        *(var_3b0 + 0xc)
                        z_3 = false
                    
                    if (z_3)
                        sub_1405dcc10(&data_143f02390, var_3b0)

if ((r15_2.b & 4) != 0)
    r15_2 &= 0xfffffffb
    
    if (var_3d0 != 0)
        var_3d0[1].d -= 1
        
        if (var_3d0[1].d == 1)
            if (var_3d0[2].b != 0)
                (**var_3d0)(var_3d0, 1)
            else
                char rax_31
                
                if (data_143f0f1d0 == 0)
                    rax_31 = sub_1405949a0()
                
                if (data_143f0f1d0 == 0 && rax_31 != 0)
                    (**var_3d0)(var_3d0, 1)
                else
                    bool z_4
                    
                    if (0 == *(var_3d0 + 0xc))
                        *(var_3d0 + 0xc) = 1
                        z_4 = true
                    else
                        *(var_3d0 + 0xc)
                        z_4 = false
                    
                    if (z_4)
                        sub_1405dcc10(&data_143f02390, var_3d0)

int128_t zmm1 = data_142d3f5a0
int32_t var_b0 = 0
int32_t var_ac
__builtin_memset(&var_ac, 0xff, 0x14)
int128_t var_98 = zmm1
int64_t var_88
__builtin_memset(&var_88, 0, 0x1a)

if (r13_2 != 0)
    int64_t rdx_16 = 0
    void var_180
    void* rcx_23 = &var_180
    
    do
        int64_t rax_34 = (&var_68)[rdx_16]
        rdx_16 += 1
        *(rcx_23 - 8) = rax_34
        *rcx_23 = 0
        *(rcx_23 + 8) = 0xffffffff
        *(rcx_23 + 0xc) = 0x100
        rcx_23 += 0x18
    while (rdx_16 s< r13_2)

int64_t var_c8
__builtin_memset(&var_c8, 0, 0x11)
int32_t var_b4 = 0
void var_188
memset(&var_188 + r13_2 * 0x18, 0, 0xc0 - r13_2 * 0x18)
char var_173
char rcx_26 = var_173

if (sub_14135d3f0(*(arg1 + 0x1e9), *(arg1 + 0x1ea), *(arg1 + 0x1eb), *(arg1 + 0x1ec)) == 0)
    rcx_26 = 0

char var_173_1 = rcx_26
int64_t rax_42 = *(*(sub_14139d290((*(*arg1 + 0x10))(arg1, 0)) + 0x50) + 0x10)
int64_t* var_3c8
int64_t* rax_49
int32_t rdx_18
int64_t* rdi_2

if (*(*(*arg1 + 0x10))(arg1, 1) == 0)
    rax_49 = nullptr
    var_3e0 = nullptr
    rdi_2 = nullptr
    rdx_18 = 0x20
else
    int64_t* rcx_32 = *(*(sub_14139d290((*(*arg1 + 0x10))(arg1, 1)) + 0x50) + 0x10)
    var_3c8 = rcx_32
    
    if (rcx_32 != 0)
        rcx_32[1].d += 1
    
    rdi_2 = var_3c8
    rdx_18 = 0x10
    rax_49 = var_3e0

int32_t rdx_19 = rdx_18 | r15_2
int32_t var_400 = rdx_19

if ((rdx_19.b & 0x20) != 0)
    var_400 = rdx_19 & 0xffffffdf
    
    if (rax_49 != 0)
        rax_49[1].d -= 1
        
        if (rax_49[1].d == 1)
            if (var_3e0[2].b != 0)
                (**var_3e0)(var_3e0, 1)
            else
                char rax_50
                
                if (data_143f0f1d0 == 0)
                    rax_50 = sub_1405949a0()
                
                if (data_143f0f1d0 == 0 && rax_50 != 0)
                    (**var_3e0)(var_3e0, 1)
                else
                    bool z_5
                    
                    if (0 == *(var_3e0 + 0xc))
                        *(var_3e0 + 0xc) = 1
                        z_5 = true
                    else
                        *(var_3e0 + 0xc)
                        z_5 = false
                    
                    if (z_5)
                        sub_1405dcc10(&data_143f02390, var_3e0)

if ((var_400.b & 0x10) != 0 && var_3c8 != 0)
    var_3c8[1].d -= 1
    
    if (var_3c8[1].d == 1)
        if (var_3c8[2].b != 0)
            (**var_3c8)(var_3c8, 1)
        else
            char rax_54
            
            if (data_143f0f1d0 == 0)
                rax_54 = sub_1405949a0()
            
            if (data_143f0f1d0 == 0 && rax_54 != 0)
                (**var_3c8)(var_3c8, 1)
            else
                bool z_6
                
                if (0 == *(var_3c8 + 0xc))
                    *(var_3c8 + 0xc) = 1
                    z_6 = true
                else
                    *(var_3c8 + 0xc)
                    z_6 = false
                
                if (z_6)
                    sub_1405dcc10(&data_143f02390, var_3c8)

void* r15_3 = arg2[8]
int64_t rbx_9 = (*(r15_3 + 0x30) + 1) & 0xfffffffffffffffe
int64_t rax_57 = rbx_9 + 0x32

if (rax_57 u> *(r15_3 + 0x38))
    sub_140b0e3d0(r15_3 + 0x30, 0x34)
    rbx_9 = (*(r15_3 + 0x30) + 1) & 0xfffffffffffffffe
    rax_57 = rbx_9 + 0x32

wchar16 const* const rcx_38 = u"PostProcessBloomSetupES2"
*(r15_3 + 0x30) = rax_57
wchar16 const i

do
    i = *rcx_38
    *(rbx_9 - u"PostProcessBloomSetupES2" + rcx_38) = i
    rcx_38 = &rcx_38[1]
while (i != 0)
void*** rcx_41 = (*(r15_3 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_58 = &rcx_41[0x27]

if (rax_58 u> *(r15_3 + 0x38))
    sub_140b0e3d0(r15_3 + 0x30, 0x140)
    rcx_41 = (*(r15_3 + 0x30) + 7) & 0xfffffffffffffff8
    rax_58 = &rcx_41[0x27]

*(r15_3 + 0x30) = rax_58
void**** rax_59 = *(r15_3 + 8)
*(r15_3 + 0x14) += 1
*rax_59 = rcx_41
*(r15_3 + 8) = &rcx_41[1]
sub_1405d11b0(rcx_41, &var_188, rbx_9)
*(r15_3 + 0x1c4) = 1
sub_1405d19b0(r15_3, &var_188)
int64_t var_78
*(r15_3 + 0x178) = var_78:7.b
int32_t var_390 = rcx_2
int32_t var_38c = var_3e4
int128_t var_348 = 0.o
*(r15_3 + 0x179) = 0
*(r15_3 + 0x1c4) = 1
sub_1410b7780(arg2, &var_348, zx.o(0), 0x3f800000)
void* rcx_47 = arg2[8]
int64_t var_1dc
__builtin_memset(&var_1dc, 0, 0x43)
int128_t var_238
__builtin_memset(&var_238, 0, 0x30)
int128_t var_1f0 = zx.o(0)
int16_t var_198 = 0
sub_140fdc870(rcx_47, &var_238)
int64_t var_208 = data_14395da00
int64_t var_200 = data_14395da18
int64_t var_1f8 = data_14395d9e8
void* var_368
sub_1419a2ec0(arg2[0xc], &var_368, &data_143ebaaa0, 0)
char rax_67 = *(arg1 + 0x1ed)
char r9_3 = *(arg1 + 0x1ec)
char r8_6 = *(arg1 + 0x1eb)
char rdx_30 = *(arg1 + 0x1ea)
char rcx_49 = *(arg1 + 0x1e9)
void* r15_4 = var_368
char var_407 = rdx_30
char var_406 = r8_6
char var_405 = r9_3
int32_t rax_68 = rcx_49.d
void* var_360
var_400.q = var_360
char rax_70
int32_t rcx_50
int32_t r9_4
rax_70, rcx_50, r9_4 = sub_14135d3f0(rcx_49, rdx_30, r8_6, r9_3)
char rdx_31 = rax_68.b

if (rax_70 == 0)
    rdx_31 = 1

int32_t rcx_52 = sbb.d(rcx_50, rcx_50, rax_68:2.b != 0) & 4
int32_t rcx_54 = sbb.d(rcx_52, rcx_52, rax_68:3.b != 0) & 8
int32_t rax_75
rax_75.b = rdx_31 != 0
int128_t var_378
sub_1419a2ec0(arg2[0xc], &var_378, &data_143ebabb0, 
    (sbb.d(r9_4, r9_4, rax_68:1.b != 0) & 2) + rcx_52 + rcx_54
        + (sbb.d(rcx_54, rcx_54, rax_67 != 0) & 0x10) + rax_75)
var_238.q = data_1439c9210
int64_t rax_77 = 0
int128_t var_338 = var_378

if (r15_4 != 0)
    int64_t rdx_33 = sx.q(*(r15_4 + 0x10c))
    int64_t* rbx_13 = *(var_360 + 0x10)
    int64_t rax_78 = rbx_13[3]
    
    if (*(rax_78 + (rdx_33 << 3)) == 0)
        sub_1419ccf30(rbx_13, rdx_33.d)
        rax_78 = rbx_13[3]
    
    rax_77 = *(rax_78 + (rdx_33 << 3))

var_238:8.q = rax_77
int64_t rcx_59 = 0
void* rax_79 = var_378.q

if (rax_79 != 0)
    int64_t rdx_34 = sx.q(*(rax_79 + 0x10c))
    int64_t* rbx_14 = *(var_378:8.q + 0x10)
    int64_t rax_81 = rbx_14[3]
    
    if (*(rax_81 + (rdx_34 << 3)) == 0)
        sub_1419ccf30(rbx_14, rdx_34.d)
        rax_81 = rbx_14[3]
    
    rcx_59 = *(rax_81 + (rdx_34 << 3))

int128_t var_218
var_218.q = rcx_59
int32_t var_1e0 = 0
sub_1419870b0(arg2[8], &var_238, 2)
void* rdx_36 = arg2[8]
int64_t rbx_15 = *(rdx_36 + 0x188)
sub_141080be0(r15_4, rdx_36, rbx_15, *(*arg2 + 0x10))
sub_1413aa060(r15_4 + 0x118, rbx_15, arg2, data_14395f4d0, 0, nullptr)
int64_t* rbx_16 = *arg2
int64_t rsi_3 = *(arg2[8] + 0x1a0)
int64_t* var_320 = nullptr
int32_t var_298[0x18]
int32_t* rax_83 = sub_1413138f0(&var_298, rbx_16, 1)
int128_t var_318 = *rax_83
int128_t var_308 = *(rax_83 + 0x10)
int128_t var_2f8 = *(rax_83 + 0x20)
int128_t var_2e8 = *(rax_83 + 0x30)
int128_t var_2d8 = *(rax_83 + 0x40)
void* rax_84 = *arg2
int128_t var_2c8 = *(rax_83 + 0x50)
int64_t* rbx_17 = var_320
int32_t var_328 = (*(rbx_16 + 0xffc)).d
int64_t* rcx_65 = *(rax_84 + 0x10)
var_320 = rcx_65

if (rcx_65 != 0)
    rcx_65[1].d += 1

if (rbx_17 != 0)
    rbx_17[1].d -= 1
    
    if (rbx_17[1].d == 1)
        char rax_85
        
        if (rbx_17[2].b == 0 && data_143f0f1d0 == 0)
            rax_85 = sub_1405949a0()
        
        if (rbx_17[2].b != 0 || (data_143f0f1d0 == 0 && rax_85 != 0))
            (**rbx_17)(rbx_17, 1)
        else
            bool z_7
            
            if (0 == *(rbx_17 + 0xc))
                *(rbx_17 + 0xc) = 1
                z_7 = true
            else
                *(rbx_17 + 0xc)
                z_7 = false
            
            if (z_7)
                sub_1405dcc10(&data_143f02390, rbx_17)

int64_t var_2b8 = rax_42
int64_t rax_89 = data_14395f4d0
int64_t var_2b0 = rax_89
int64_t var_2a0 = rax_89
int64_t* var_2a8 = rdi_2
int512_t zmm2_1
int512_t zmm3_1
zmm2_1, zmm3_1 = sub_141342850(arg2[8], &var_338, rsi_3, &var_328)
void* r9_15 = sub_1405d1550(&var_320)
zmm3_1.o = zx.o(0)
int64_t var_350 = var_400.q
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(var_3f0))
void* var_358 = r15_4
void* rcx_70 = arg2[8]
uint128_t zmm5 = _mm_cvtepi32_ps(zx.o(var_3e8))
zmm2_1.o = zx.o(var_3ec - var_3e8)
zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
zmm3_1.d = float.s(zx.q(rcx_2))
int32_t var_460 = zmm2_1.d
zmm2_1.o = zx.o(0)
int64_t* var_470
var_470.d = zmm5.d
sub_1413993b0(rcx_70, zx.o(0), zmm2_1, r9_15, zmm3_1, float.s(zx.q(var_3e4)), var_470.d, zmm4.d, 
    var_460, _mm_cvtepi32_ps(zx.o(rdx_6 - var_3f0)).d, rcx_2.q, var_3c0.q, &var_358, 1, 1)
sub_141096650(arg2[8])

if (r13_2 != 0)
    int64_t r14_2 = 0
    
    do
        int64_t rax_99 = (&var_68)[r14_2]
        
        if (rax_99 != 0)
            void* rsi_4 = arg2[8]
            int64_t* rbx_20 = (*(rsi_4 + 0x30) + 7) & 0xfffffffffffffff8
            void* rcx_72 = &rbx_20[1]
            
            if (rcx_72 u> *(rsi_4 + 0x38))
                sub_140b0e3d0(rsi_4 + 0x30, 0x10)
                rbx_20 = (*(rsi_4 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_72 = &rbx_20[1]
            
            *(rsi_4 + 0x30) = rcx_72
            *rbx_20 = rax_99
            void*** rcx_76 = (*(rsi_4 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_100 = &rcx_76[5]
            
            if (rax_100 u> *(rsi_4 + 0x38))
                sub_140b0e3d0(rsi_4 + 0x30, 0x30)
                rcx_76 = (*(rsi_4 + 0x30) + 7) & 0xfffffffffffffff8
                rax_100 = &rcx_76[5]
            
            *(rsi_4 + 0x30) = rax_100
            void**** rax_101 = *(rsi_4 + 8)
            *(rsi_4 + 0x14) += 1
            *rax_101 = rcx_76
            *(rsi_4 + 8) = &rcx_76[1]
            rcx_76[1] = 0
            *rcx_76 = &data_142d549c8
            rcx_76[2].d = 1
            rcx_76[3] = rbx_20
            rcx_76[4].d = 0
        
        r14_2 += 1
    while (r14_2 s< r13_2)

int64_t var_80
int64_t result = sub_1405d1550(&var_80)
__security_check_cookie(rax_1 ^ &var_498)
return result
