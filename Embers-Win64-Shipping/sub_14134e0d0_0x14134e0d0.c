// 函数: sub_14134e0d0
// 地址: 0x14134e0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg3
uint128_t var_48 = arg5
uint128_t zmm7
uint128_t var_58 = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
float zmm9
float var_78 = zmm9
int128_t zmm11
int128_t var_98 = zmm11
int128_t zmm12
int128_t var_a8 = zmm12
int128_t zmm13
int128_t var_b8 = zmm13
int128_t zmm14
int128_t var_c8 = zmm14
bool cond:3

if (arg3[0x2a9].d s< 3)
    cond:3 = *(arg4 + 0x68) != 0
else
    cond:3 = *(arg4 + 0x58) != 0

uint128_t zmm1 = arg4[2]
int64_t r12
r12.b = cond:3
uint64_t var_688 = arg4[3].q
void* rcx = zmm1.q
uint128_t var_698 = zmm1
uint128_t temp0 = _mm_bsrli_si128(zmm1, 8)
uint128_t temp0_1 = _mm_bsrli_si128(zmm1, 8)
int32_t var_6f0 = *(rcx + 0x44)
int32_t var_6ec = *(rcx + 0x48)
zmm1 = *arg4
uint32_t var_6e4 = (temp0.q u>> 0x20).d
void*** rsi = zmm1.q
int32_t var_6e8 = temp0_1.d
uint32_t var_6dc = (var_688 u>> 0x20).d
uint128_t var_798 = zmm1
var_798.q = rsi
int72_t var_788 = arg4[1].9
int64_t rdx
uint64_t r8
uint64_t r9

if (rsi == 0)
label_14134e214:
    void* rax_9 = arg4[2].q
    int32_t rcx_3 = 1
    int32_t rbx_1 = 2
    uint128_t var_618_1 = *(rax_9 + 0x40)
    uint128_t var_608_1 = *(rax_9 + 0x50)
    var_608_1:8.w = 1
    
    if (*(arg3 + 0x515a) != 0)
        rcx_3 = 0x10001
    
    uint128_t var_5e8_1 = *(rax_9 + 0x70)
    int64_t var_5f8_1
    var_5f8_1:8.w = 0
    
    if (*(arg4 + 0x63) != 0)
        rbx_1 = data_1439c7a4c
    
    var_5f8_1.d |= data_143ed33b4
    int128_t var_314_1 = zx.o(0)
    var_5f8_1:4.d = rcx_3 | ((*(rax_9 + 0x60)).q:4.d & 0xfffeffff)
    var_5e8_1:8.b = 1
    uint128_t temp0_4 = _mm_bsrli_si128(zx.o(0), 0xc)
    uint128_t var_628 = 1.o
    var_618_1.d = temp0_4.d
    int64_t var_298
    sub_14135ba90(&var_298, r13)
    int32_t var_28c
    
    if (var_28c != 7)
        if (var_28c - 8 u<= 1)
            rbx_1 = 0xa
        
        var_608_1:0xc.d = rbx_1
    else
        var_608_1:0xc.d = 1
    
    int512_t zmm6
    zmm6.o = *(arg4 + 0x28)
    char rax_15 = sub_14141f7a0(arg3)
    void*** rax_16
    rax_16, arg5 = sub_141188e50(arg2, &var_628, u"Tonemap", 0)
    r8 = arg5.q
    var_798.q = rax_16
    r9 = _mm_bsrli_si128(arg5, 8).q
    var_798:0xc.d = (r8 u>> 0x20).d
    rsi = rax_16
    var_798:8.d = r8.d
    var_788:4.d = (r9 u>> 0x20).d
    var_788.d = r9.d
    var_788:8.b = rax_15
    rdx = var_798:8.q
else
    r9 = zx.q(var_788.d)
    r8 = zx.q(_mm_bsrli_si128(zmm1, 8).d)
    var_798:8.d = r8.d
    
    if (r9.d != r8.d)
        rdx = var_798:8.q
    else
        rdx = _mm_bsrli_si128(zmm1, 8).q
        
        if ((var_788.q u>> 0x20).d == (rdx u>> 0x20).d)
            goto label_14134e214

int32_t var_768 = *(rsi + 0x44)
int32_t var_764 = rsi[9].d
int32_t var_760 = r8.d
int32_t var_758 = r9.d
int64_t rax_23 = *(*(*(data_143f5b298 + 0x310) + 0x78) + 0x10)
void* rax_25 = arg3[0x214]
int64_t var_6f8 = *(data_1439b70c8 + 8)

if (rax_25 != 0)
    void* rax_26 = *(rax_25 + 0x78)
    
    if (rax_26 != 0)
        var_6f8 = *(rax_26 + 0x10)

int64_t rax_28 = data_14395f4d0
arg5 = zx.o(0)
int64_t rax_29 = data_14395fa10
uint128_t zmm0

if (r12.b == 0)
    int512_t zmm10_1
    zmm0, arg5, zmm10_1 = sub_1413138a0(arg3)
    zmm10_1.o = zmm0

zmm7 = *(data_143ebc1f8 + 4)

if (zmm7.d f>= arg5.d)
    zmm7 = __minss_xmmss_memss(zmm7.d, 0x41200000)
else
    zmm7 = zx.o(0)

zmm0 = *(arg3 + 0xff4)
zmm1 = zx.o(0)
int32_t zmm3 = (zx.o(0)).d
zmm7.d = zmm7.d f* 0.166666672f
float zmm2 = 1f

if (not(zmm0.d f>= 0.999899983f))
    zmm3 = zmm0.d
    zmm1.d = arg3[0x1fe].d.d f* 0.00999999978f
    zmm0.d = 1f f- zmm3
    zmm2 = 1f f/ zmm0.d

int32_t var_7a0 = zmm3
zmm0.d = zmm1.d f* 1.02900004f
int32_t var_79c = 0
zmm1.d = zmm1.d f* 0.593599916f
zmm0.d = zmm0.d f* zmm2
zmm1.d = zmm1.d f* zmm2
int32_t var_7a8 = zmm0.d
int32_t var_7a4 = zmm1.d
int64_t* var_5b8
sub_141346890(&var_5b8)
int64_t* rax_31 = arg3[2]
int64_t* rbx_3 = var_5b8
var_5b8 = rax_31

if (rax_31 != 0)
    rax_31[1].d += 1
    rsi = var_798.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        char rax_33
        
        if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
            rax_33 = sub_1405949a0()
        
        if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_33 != 0))
            (**rbx_3)(rbx_3, 1)
        else
            bool z_1
            
            if (0 == *(rbx_3 + 0xc))
                *(rbx_3 + 0xc) = 1
                z_1 = true
            else
                *(rbx_3 + 0xc)
                z_1 = false
            
            if (z_1)
                sub_1405dcc10(&data_143f02390, rbx_3)
    
    rsi = var_798.q

int64_t* rcx_15
rcx_15.b = 0

if (arg3[1] != 0)
    rcx_15 = zx.q(*(arg3[0x2b5] + 0x4c8) u% 7)

int64_t var_730
sub_14135bd40(&var_730, zx.d(rcx_15.b))
uint128_t zmm2_1 = arg3[0x23c].d
uint128_t zmm0_1
zmm0_1.d = zmm2_1.d f* 0.5f
int32_t var_728
var_698:8.d = var_728
int128_t zmm1_1
zmm1_1.d = 1f f- zmm0_1.d
int32_t var_680 = *(arg3 + 0x11dc)
zmm0_1.q = var_730
uint128_t var_5a8 = zmm0_1
zmm1_1.q = (_mm_unpacklo_ps(zmm2_1, zmm1_1.q)).q
int128_t var_598 = zmm1_1
int64_t var_658
int64_t* rax_45 = sub_14135ba90(&var_658, r13)
int128_t zmm0_2 = *rax_45
int128_t var_578 = *(rax_45 + 0x10)
int32_t var_1a8[0x1c]
int32_t* rax_46 = sub_141455b70(&var_1a8, &var_6f0)
zmm11 = rax_46[0x10]
zmm12 = rax_46[0x11]
zmm13 = rax_46[0x14]
zmm14 = rax_46[0x15]
uint128_t var_568 = *rax_46
int32_t var_548 = rax_46[8]
uint128_t var_558 = *(rax_46 + 0x10)
int32_t var_544 = rax_46[9]
uint128_t var_538 = *(rax_46 + 0x30)
int32_t var_520 = rax_46[0x12].d
int32_t var_540 = rax_46[0xa]
uint128_t var_510 = *(rax_46 + 0x58)
int32_t var_53c = rax_46[0xb]
int32_t var_51c = rax_46[0x13].d
int32_t var_500 = rax_46[0x1a].d
int32_t var_528 = zmm11.d
int32_t var_524 = zmm12.d
int32_t var_518 = zmm13.d
int32_t var_514 = zmm14.d
int32_t var_4fc = rax_46[0x1b].d

if (*(arg4 + 0x38) != 0)
    uint128_t zmm1_3 = *(arg4 + 0x38)
    uint128_t zmm0_3 = zx.o(*(arg4 + 0x48))
    int64_t var_6d8 = data_143dbb180
    void* rcx_22 = zmm1_3.q
    uint64_t var_2d8_1 = zmm0_3.q
    int128_t var_6d0_1 = zx.o(0)
    int32_t rax_52 = *(rcx_22 + 0x44)
    uint128_t temp0_9 = _mm_bsrli_si128(zmm1_3, 8)
    var_6d8.d = rax_52
    var_6d8:4.d = *(rcx_22 + 0x48)
    var_6d0_1:4.d = (temp0_9.q u>> 0x20).d
    var_6d0_1:8.d = var_2d8_1.d
    var_6d0_1:0xc.d = (var_2d8_1 u>> 0x20).d
    var_6d0_1.d = _mm_bsrli_si128(zmm1_3, 8).d
    int32_t var_138[0x1c]
    int32_t* rax_59 = sub_141455b70(&var_138, &var_6d8)
    float zmm3_2[0x4] = rax_59[0x14]
    float zmm2_2[0x4] = rax_59[0x15]
    float zmm5_1 = rax_59[0x11]
    float zmm4_1 = rax_59[0x10]
    int32_t zmm1_4 = rax_59[0x13]
    float var_4f8_1[0x4] = *rax_59
    float zmm0_4[0x4] = *(rax_59 + 0x10)
    int32_t rax_60 = rax_59[8]
    float var_4a8_1 = zmm3_2[0]
    zmm3_2[0] = zmm3_2[0] f/ zmm13.d
    int32_t var_4d8_1 = rax_60
    int32_t var_4d4_1 = rax_59[9]
    int32_t var_4d0_1 = rax_59[0xa]
    int32_t var_4cc_1 = rax_59[0xb]
    float var_4e8_1[0x4] = zmm0_4
    float var_4a4_1 = zmm2_2[0]
    float var_4c8_1[0x4] = *(rax_59 + 0x30)
    float var_4b0_1 = rax_59[0x12][0]
    zmm0_4 = *(rax_59 + 0x58)
    zmm2_2[0] = zmm2_2[0] f/ zmm14.d
    float var_4a0_1[0x4] = zmm0_4
    float var_490_1 = rax_59[0x1a][0]
    zmm2_2[0] = zmm2_2[0] f* zmm12.d
    float var_4b4_1 = zmm5_1
    float var_4b8_1 = zmm4_1
    zmm5_1 = zmm5_1 - zmm2_2[0]
    int32_t var_4ac_1 = zmm1_4
    zmm1_4 = rax_59[0x1b]
    float temp0_11[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xe1)
    temp0_11[0] = zmm2_2[0]
    zmm3_2[0] = zmm3_2[0] f* zmm11.d
    float temp0_12[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc6)
    int32_t var_48c_1 = zmm1_4
    temp0_12[0] = zmm4_1 - zmm3_2[0]
    float temp0_13[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x27)
    temp0_13[0] = zmm5_1
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x39)
    float var_7b8_1[0x4] = temp0_14
    float var_418_1[0x4] = temp0_14

int64_t* var_248
int32_t* rax_64
int128_t zmm6_1
uint128_t zmm7_1
float zmm8_1[0x4]
float zmm9_1
int32_t zmm10_2
rax_64, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_2 = sub_141455b70(&var_248, &var_768)
float zmm4_2[0x4] = arg3[0x1ff].d
float zmm1_5 = zmm4_2[0]
zmm4_2[0] = zmm4_2[0] f* data_14399f5c0.d
float zmm0_5[0x4] = *rax_64
zmm4_2[0] = zmm4_2[0] f* data_14399f5c0:0xc.d
zmm1_5 = zmm1_5 f* data_14399f5c0:8.d
float var_488[0x4] = zmm0_5
int32_t var_468 = rax_64[8]
float var_478[0x4] = *(rax_64 + 0x10)
int32_t var_464 = rax_64[9]
float var_458[0x4] = *(rax_64 + 0x30)
zmm0_5 = *(rax_64 + 0x40)
int32_t var_460 = rax_64[0xa]
int32_t rax_68 = rax_64[0xb]
float temp0_15[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
float var_448[0x4] = zmm0_5
int32_t var_45c = rax_68
float var_438[0x4] = *(rax_64 + 0x50)
int64_t var_408 = arg4[2].q
float var_428[0x4] = *(rax_64 + 0x60)
zmm0_5 = *(arg3 + 0xfe0)
int64_t var_400 = *(arg4 + 0x38)
int64_t rax_71 = *(arg4 + 0x58)
float var_7b8_2[0x4] = zmm0_5
float var_3a8[0x4] = zmm0_5
zmm4_2[0] = zmm4_2[0] f* data_14399f5c0:4.d
int64_t var_3f8 = rax_71
int64_t var_3f0 = arg4[5].q
temp0_15[0] = zmm4_2[0]
float temp0_16[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc6)
temp0_16[0] = zmm1_5
int64_t var_3e8 = rax_23
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x27)
temp0_17[0] = zmm4_2[0]
int64_t var_3e0 = var_6f8
float zmm3_3[0x4] = arg3[0x215].d
zmm1_5 = zmm3_3[0] f* *(arg3 + 0x10b4)
int64_t var_3d8 = rax_28
zmm3_3[0] = zmm3_3[0] f* arg3[0x216].d
int64_t var_3d0 = rax_28
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x39)
float var_7b8_3[0x4] = temp0_18
float var_398[0x4] = temp0_18
zmm3_3[0] = zmm3_3[0] f* *(arg3 + 0x10ac)
int64_t var_3c8 = rax_29
zmm3_3[0] = zmm3_3[0] f* arg3[0x217].d
int64_t var_3c0 = rax_28
float temp0_19[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
temp0_19[0] = zmm3_3[0]
int64_t var_3b8 = rax_28
float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
temp0_20[0] = zmm1_5
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x27)
temp0_21[0] = zmm3_3[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x39)
float var_388[0x4] = temp0_22
bool cond:6 = *(arg4 + 0x62) != 0
zmm8_1[0] = zmm8_1[0] f/ arg3[0x1bb].d
uint32_t rcx_28 = zx.d(arg4[6].b)
char rdx_11 = *(arg4 + 0x64)
var_7a0.q = 0
uint32_t var_32c = zx.d(*(r13 + 0x51))
int64_t var_328 = *(arg4 + 0x68)
void* rax_78 = *arg3
char var_6b4 = 0
bool var_6b0 = false
int64_t var_7c8 = 0
zmm8_1[0] = zmm8_1[0] f/ *(arg3 + 0xddc)
zmm3_3 = arg3[0x23b].d
float var_378[0x4] = var_7a8.o
zmm0_5 = var_7a8.o
zmm0_5[0] = zmm3_3[0]
int32_t var_334 = zmm10_2
float temp0_23[0x4] = _mm_shuffle_ps(zmm0_5, zmm0_5, 0xe1)
temp0_23[0] = zmm7_1.d
int32_t var_330 = 0x43200000
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xe1)
var_7a8.o = temp0_24
float var_368[0x4] = temp0_24
float temp0_25[0x4] = _mm_cvtepi32_ps(zx.o(rcx_28))
float var_340 = zmm8_1[0]
float var_338 = temp0_25[0]
float var_33c = zmm8_1[0]
float var_358[0x4] = *(arg3 + 0xdd0)
zmm8_1[0] = zmm8_1[0] f* arg3[0x1ba].d
float var_348 = (zmm8_1 ^ data_142d3f780)[0]
zmm8_1[0] = zmm8_1[0] f* *(arg3 + 0xdd4)
float var_344 = (zmm8_1 ^ data_142d3f780)[0]

if (cond:6 || (*(rax_78 + 0x28) & 1) == 0)
    var_7c8:1.b = 1
    rax_78.b = 1
else
    float temp3_1 = arg3[0x23c].d
    zmm6_1.d f- temp3_1
    var_7c8:6.b = rcx_28.b
    var_7c8:7.b = rdx_11
    var_7c8:2.b = zmm6_1.d f< temp3_1
    var_7c8:3.b = zmm3_3[0] f> zmm6_1.d
    var_7c8.b = zmm4_2[0] f> zmm6_1.d
    float temp4_1 = *(arg3 + 0x11dc)
    zmm6_1.d f- temp4_1
    var_7c8:5.b = zmm6_1.d f< temp4_1
    var_7c8:4.b = (*(data_143ebc1f8 + 4))[0] f> zmm6_1.d
    rax_78.b = 0

uint64_t var_6c0 = 0
char var_7c0
char var_6b8 = var_7c0

if (rax_78.b == 0)
    TEB* gsbase
    
    if (data_143ec2630
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ec2630)
        
        if (data_143ec2630 == 0xffffffff)
            int64_t* rcx_70 = data_143db18d0
            
            if (rcx_70 == 0)
                sub_140a53c40()
                rcx_70 = data_143db18d0
            
            int64_t r8_5
            r8_5.b = 1
            int64_t* rax_123 = (*(*rcx_70 + 0xb0))(rcx_70, u"r.Tonemapper.GrainQuantization", r8_5)
            
            if (rax_123 != 0)
                int64_t rdx_41 = *rax_123
                rax_123 = (*(rdx_41 + 0x58))(rax_123, rdx_41)
            
            data_143ec2628 = rax_123
            _Init_thread_footer(&data_143ec2630)
    
    var_6b0 = *(data_143ec2628 + 4) s> 0
    float temp5_1 = arg3[0x1fe].d
    zmm9_1 - temp5_1
    bool var_6b4_1 = zmm9_1 < temp5_1

int32_t var_6ac = zmm0_2:0xc.d
int128_t var_718 = var_6c0.o
int64_t var_708
var_708.b = (var_6b0.q u>> 0x20).d - 8 u> 1
uint32_t rax_83

if (arg3[0x2a9].d s<= 1)
    rax_83 = var_708:4.d
    
    if (rax_83 != 8)
        rax_83 = 0
    
    var_708:4.d = rax_83

zmm7_1 = zx.o(var_708)
var_718:8.b = var_7c0
zmm6_1.q = 1
int64_t var_740 = zmm7_1.q
int104_t var_750 = zmm6_1.13

if ((*(rsi + 0x64) & 0x10000) == 0)
    rax_83.b = 0
else
    rax_83 = zx.d(*(arg3 + 0x515a))

int64_t* rdx_12 = *(arg2 + 8)
void*** rdi_1

if (rax_83.b == 0)
    int64_t* rax_102 = sub_14081d830(0x330, rdx_12, 1, 0)
    int64_t* rbx_6 = rax_102
    
    if (rax_102 == 0)
        rbx_6 = rax_102
    else
        sub_141346890(rax_102)
        sub_14117af20(&rbx_6[0x54])
    
    memset(rbx_6, 0, 0x330)
    sub_141346db0(rbx_6, &var_5b8)
    int32_t var_7b0
    var_7b0.b = var_788:8.b
    temp0_22[0].q = rsi
    var_7b0:1.w = 0
    int32_t var_7ac_1 = 0xffffffff
    *(rbx_6 + 0x2a0) = temp0_22
    int32_t rax_104
    rax_104.b = arg4[6].b != 0
    uint128_t var_2c8
    int32_t rcx_49
    int32_t rdx_25
    rcx_49, rdx_25 =
        sub_1419a2ec0(arg3[0xa2a], &var_2c8, &data_143ebd910, rax_104 + (zx.d(r12.b) << 1))
    uint128_t zmm6_4 = var_2c8
    int32_t rcx_51 = sbb.d(rcx_49, rcx_49, var_750:0xc.b != 0) & 0x80
    int32_t rax_107
    rax_107.b = var_750:1.b != 0
    int32_t rcx_53 = sbb.d(rcx_51, rcx_51, var_750:2.b != 0) & 2
    int32_t rcx_55 = sbb.d(rcx_53, rcx_53, var_750:3.b != 0) & 4
    int32_t rcx_57 = sbb.d(rcx_55, rcx_55, var_750:7.b != 0) & 0x40
    int32_t rcx_59 = sbb.d(rcx_57, rcx_57, var_750:4.b != 0) & 8
    int32_t rcx_61 = sbb.d(rcx_59, rcx_59, var_750:5.b != 0) & 0x10
    int32_t rdx_35 = (sbb.d(rdx_25, rdx_25, var_740.b != 0) & 0x100) + rcx_51 + rax_107 + rcx_53
        + rcx_55 + rcx_57 + rcx_59 + rcx_61 + (sbb.d(rcx_61, rcx_61, var_750:6.b != 0) & 0x20)
    int32_t rax_116
    rax_116.b = var_750.b != 0
    uint128_t var_2f8
    sub_1419a2ec0(arg3[0xa2a], &var_2f8, &data_143ebda10, 
        rax_116 + ((rdx_35 + (var_740:4.d << 9)) << 1))
    zmm7_1 = var_2f8
    char rax_117 = sub_142391f10(arg3)
    int64_t rax_118
    
    if (*(arg4 + 0x61) == 0)
        rax_118 = data_1439b69d0
    
    if (*(arg4 + 0x61) != 0 || rax_117 != 0)
        rax_118 = data_14395da00
    
    int64_t* rdx_38 = *(arg2 + 8)
    uint128_t var_240_1 = var_768.o
    int64_t var_270_1 = data_14395d9e8
    int64_t rax_120 = data_1439c9210
    uint128_t var_228_1 = var_6f0.o
    int64_t var_230_1 = var_758.q
    uint128_t var_1f0_1 = rax_118.o
    var_248 = arg3
    int64_t var_218_1 = var_688.d.q
    uint64_t var_1b8_1 = rbx_6
    char var_1b0_1 = 2
    int64_t var_1e0_1 = rax_120
    void*** rax_121
    char rcx_66
    rax_121, rcx_66 = sub_14081d830(0xd8, rdx_38, 1, 0)
    rdi_1 = rax_121
    
    if (rax_121 == 0)
        rdi_1 = nullptr
    else
        var_7a8.q = rbx_6
        sub_14135afd0(rcx_66)
        var_7a0.q = &data_143ec2440
        int128_t var_258 = var_7a8.o
        void arg_20
        sub_141992bd0(rdi_1, &arg_20, &var_258, 1)
        *rdi_1 = &data_142f64d70
        *(rdi_1 + 0x38) = var_248.o
        *(rdi_1 + 0x48) = var_240_1
        *(rdi_1 + 0x58) = var_228_1
        *(rdi_1 + 0x68) = var_218_1.o
        *(rdi_1 + 0x78) = zmm6_4
        *(rdi_1 + 0x88) = zmm7_1
        *(rdi_1 + 0x98) = var_1f0_1
        *(rdi_1 + 0xa8) = zmm6_4
        *(rdi_1 + 0xb8) = zmm7_1
        *(rdi_1 + 0xc8) = var_1b8_1.o
else
    int64_t* rax_86 = sub_14081d830(0x2b0, rdx_12, 1, 0)
    int64_t* rbx_5 = rax_86
    
    if (rax_86 == 0)
        rbx_5 = nullptr
    else
        sub_141346890(rax_86)
        rbx_5[0x54] = 0
    
    memset(rbx_5, 0, 0x2b0)
    sub_141346db0(rbx_5, &var_5b8)
    var_7a8.q = rsi
    var_7a0.w = 0
    void*** rax_87
    int128_t zmm6_2
    rax_87, zmm6_2 = sub_14081d830(0x28, *(arg2 + 8), 1, 0)
    
    if (rax_87 == 0)
        rax_87 = nullptr
    else
        rax_87[1] = rsi[1]
        *rax_87 = &data_142f285c0
        rax_87[2] = 0
        *(rax_87 + 0x18) = var_7a8.o
    
    rbx_5[0x54] = rax_87
    int128_t var_5d8
    int64_t rdx_15
    int32_t r8_1
    rdx_15, r8_1 = sub_141345d00(&var_5d8, 0)
    uint64_t var_5c8_1 = zmm7_1.q
    var_5d8 = zmm6_2
    int32_t var_6a8
    int32_t var_5c0_1 = var_6a8
    char var_5bc_1 = r12.b
    int32_t rax_88 = sub_141370e60(&var_5d8, rdx_15, r8_1)
    uint128_t var_2a8
    char rcx_39 =
        sub_1419a2ec0(arg3[0xa2a], &var_2a8, &data_143ebdb10, ((zx.q(r12.b) * 5).d << 0xb) + rax_88)
    zmm7_1 = var_2a8
    int32_t temp14_1
    int32_t temp15_1
    temp14_1:temp15_1 = sx.q(var_758 - var_760 + 7)
    var_730.d = (temp15_1 + (temp14_1 & 7)) s>> 3
    int32_t temp16_1
    int32_t temp17_1
    temp16_1:temp17_1 = sx.q((var_788.q u>> 0x20).d - (rdx u>> 0x20).d + 7)
    var_730:4.d = (temp17_1 + (temp16_1 & 7)) s>> 3
    int128_t var_7b8_5 = sub_14135ae60(rcx_39)
    sub_141998c50(zmm7_1.q, &data_143ec2520, rbx_5)
    int64_t zmm0_7 = var_730
    int64_t* rdx_21 = *(arg2 + 8)
    var_658 = rbx_5
    int64_t var_638
    var_638.d = 1
    int64_t var_640_1 = zmm0_7
    void*** rax_101
    char rcx_41
    rax_101, rcx_41 = sub_14081d830(0x60, rdx_21, 1, 0)
    rdi_1 = rax_101
    
    if (rax_101 == 0)
        rdi_1 = nullptr
    else
        var_7a8.q = rbx_5
        sub_14135ae60(rcx_41)
        var_7a0.q = &data_143ec2550
        int128_t var_2b8 = var_7a8.o
        void arg_18
        sub_141992bd0(rdi_1, &arg_18, &var_2b8, 2)
        uint128_t zmm0_9 = var_658.o
        *rdi_1 = &data_142f64d60
        *(rdi_1 + 0x38) = zmm0_9
        *(rdi_1 + 0x48) = zmm7_1
        rdi_1[0xb] = var_638

sub_1419968d0(arg2, rdi_1)
int64_t zmm1_9 = var_788.q
*arg1 = var_798
arg1[1].q = zmm1_9
sub_1405d1550(&var_5b8, zmm1_9)
int512_t zmm6_5
zmm6_5.o = var_48
return arg1
