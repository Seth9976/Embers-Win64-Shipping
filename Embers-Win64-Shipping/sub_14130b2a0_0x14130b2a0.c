// 函数: sub_14130b2a0
// 地址: 0x14130b2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_768
int64_t rax_1 = __security_cookie ^ &var_768
sub_140b33630("RenderPostProcessing")
int64_t* rax_2 = *arg2
int128_t* r8 = *arg3
*(arg2 + 0x1598)
bool cond:0 = rax_2[8].b != 0
char rcx

if (not(cond:0))
    rcx = 2

if (cond:0 || **rax_2 != arg2)
    rcx = 1

bool cond:2 = *(arg2 + 0x1524) != 2
int128_t* rax_4 = 0x1598
void* r13 = arg3[4]
void*** var_5a0 = arg3[1]

if (cond:2)
    rax_4 = 0x258

char var_588 = rcx
int64_t rax_5 = *(r8 + 8)
void* rax_6 = arg3[3]
int64_t rax_7 = arg3[5]
int128_t var_598 = *(rax_4 + arg2)
int128_t zmm0 = *(arg2 + 0x1598)
int64_t var_668 = rax_7
int64_t rax_8 = r8[1].q
void*** rax_9
double zmm6_1[0x2]
rax_9, zmm6_1 = sub_1414cb880(&data_1439b70b0, arg1)
char rbx = 0
int32_t var_680 = 0
int32_t var_670 = 0

if (rax_9 != 0)
    int32_t rcx_1 = *(rax_9 + 0x44)
    var_670 = rax_9[9].d
    var_680 = rcx_1

void*** var_718 = arg3[2]
int128_t zmm0_1 = var_718.o
int64_t var_460 = (_mm_unpackhi_pd(zmm6_1, zmm6_1[0])).q
void var_438
sub_1413138f0(&var_438, arg2, 3)
void*** rax_11
uint128_t zmm6_2
rax_11, zmm6_2 = sub_14141f4d0(arg1, arg2)
void* r14 = *arg2
void*** var_610 = rax_11
char rax_12

if (data_143f0f227 != 0)
    rax_12 = sub_1419a4730()

int64_t r15

if (data_143f0f227 == 0 || rax_12 == 0)
    r15.b = 0
else
    r15.b = 1

char var_700 = r15.b
char rax_13 = sub_1405949a0()
char rax_14 = sub_14139fcc0(arg2)
char rax_15 = sub_14139fdb0(arg2)
TEB* gsbase
void* rax_16 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143eb9128 s> *(rax_16 + 0x14))
    _Init_thread_header(&data_143eb9128)
    
    if (data_143eb9128 == 0xffffffff)
        int64_t* rcx_129 = data_143db18d0
        
        if (rcx_129 == 0)
            sub_140a53c40()
            rcx_129 = data_143db18d0
        
        int64_t r8_49
        r8_49.b = 1
        int64_t* rax_325 =
            (*(*rcx_129 + 0xb0))(rcx_129, r.BufferVisualizationDumpFramesAsHDR", r8_49)
        int64_t rax_326
        
        if (rax_325 == 0)
            rax_326 = 0
        else
            int64_t rdx_72 = *rax_325
            rax_326 = (*(rdx_72 + 0x58))(rax_325, rdx_72)
        
        data_143eb9120 = rax_326
        _Init_thread_footer(&data_143eb9128)

char var_6ff_1

if (*(data_143eb9120 + 4) == 0)
    sub_142090dd0()
    var_6ff_1 = 0

if (*(data_143eb9120 + 4) != 0 || data_143a2e371.b != 0)
    var_6ff_1 = 1

int32_t var_480
sub_141384e00(&var_480, arg2)
int32_t var_2f4 = 0x13
int16_t var_303 = 0
uint128_t var_328 = var_5a0.o
int16_t var_2ff = 0
int72_t var_318 = var_598.9
char var_2fd = 0
char rax_18

if (rax_13 != 0 || rax_14 != 0 || rax_15 != 0)
    rax_18 = 1
else
    rax_18 = 0

char var_2fb = 0
bool var_2f9 = (*(r14 + 0x2c) & 0x30000) == 0x30000
char var_2f8 = sub_14135d1d0(arg2).b
void*** var_5c0
int32_t* rax_21

if (var_480.d f> 0.00999999978f)
    rax_21.b = 1
else
    int32_t rdx_8
    int32_t rsi_3
    
    if (*(arg2 + 0x1524) == 0)
        rsi_3 = _mm_bsrli_si128(zmm6_2, 0xc).d - _mm_bsrli_si128(zmm6_2, 4).d
        rax_21 = sub_14141fde0(arg2, &var_5c0)
        rdx_8 = _mm_bsrli_si128(zmm6_2, 8).d - zmm6_2.d
    
    if (*(arg2 + 0x1524) == 0 && (rdx_8 != *rax_21 || rsi_3 != rax_21[1]))
        rax_21.b = 1
    else
        rax_21.b = 0

char var_2f7 = rax_21.b
char rax_23 = sub_14131f3a0(arg2)
char rcx_15 = (*(*arg2 + 0x28)).b
bool cond:3

if (arg2[0x2a9].d s< 3)
    cond:3 = (rcx_15 & 1) == 0
else
    cond:3 = (rcx_15 & 1) == 0

int32_t var_6f8_1
int128_t var_6e8
int128_t var_6d0
int64_t var_6c0
int128_t var_6b8
int64_t var_6a8
int32_t var_6a0
int32_t var_684_1
int32_t var_680_1
int32_t var_67c_1
int32_t var_648
int32_t var_644
int32_t var_618_1
void*** var_5f0_1
void*** var_5e8_1
int64_t var_5d8
void var_5b8
void*** var_3d8
int64_t var_3d0
int64_t var_3c8
int64_t var_2e8
int64_t var_248
int32_t rcx_56
int32_t rdx_22
int32_t r8_10
int32_t r9_7
void*** r10
int64_t var_558

if (cond:3)
    int16_t var_308_1 = 0x100
    char var_304_1 = 0
    sub_141312550(&var_328)
    void* var_748_8 = r13
    void*** rax_189
    uint128_t zmm6_5
    rax_189, zmm6_5 = sub_14130d980(arg1, arg2, var_718, rax_6)
    r10 = rax_189
    rcx_56 = zmm6_1[0].d
    rdx_22 = zmm6_1[0]:4.d
    r8_10 = zmm6_1[1].d
    r9_7 = zmm6_1[1]:4.d
    var_644 = rcx_56
    var_680_1 = rdx_22
    var_6f8_1 = r8_10
    var_67c_1 = r9_7
    var_618_1 = rcx_56
    var_684_1 = rdx_22
    var_648 = r8_10
    var_670 = r9_7
    var_718 = rax_189
    var_5c0 = rax_189
    
    if (var_308_1:1.b != 0)
        __builtin_memset(&var_558, 0, 0x19)
        int64_t var_520_2
        __builtin_memset(&var_520_2, 0, 0x2a)
        char var_4f4_1 = 0
        int64_t var_4f0_1 = 0
        
        if (var_2f4 == 1)
            var_558 = var_328.q
            int64_t var_550_1
            var_550_1.d = var_328:8.d
            var_550_1:4.d = var_328:0xc.d
            int64_t var_548_1
            var_548_1.d = var_318.d
            var_548_1:4.d = var_318:4.d
            char var_540_2 = var_318:8.b
        
        int32_t var_530_2 = rcx_56
        int32_t var_52c_2 = rdx_22
        int32_t var_528_2 = r8_10
        int32_t var_524_2 = r9_7
        void*** var_538_2 = r10
        char var_4f5_1 = r15.b
        char var_4f6_1 = 1
        void**** rax_196 = sub_14134e0d0(&var_5b8, arg1, arg2, &var_558, zmm6_5)
        r10 = *rax_196
        var_718 = r10
        rcx_56 = rax_196[1].d
        zmm6_1[0].d = rcx_56
        rdx_22 = *(rax_196 + 0xc)
        zmm6_1[0]:4.d = rdx_22
        r8_10 = rax_196[2].d
        zmm6_1[1].d = r8_10
        r9_7 = *(rax_196 + 0x14)
        zmm6_1[1]:4.d = r9_7
        var_670 = r9_7
        var_618_1 = rcx_56
        var_684_1 = rdx_22
        var_648 = r8_10
    
    var_5e8_1 = rax_9
    var_5f0_1 = r10
else
    var_6e8 = var_668.o
    int64_t var_6d8_1 = zmm0:8.q
    var_6d0 = rax_6.o
    var_6c0 = zmm0:8.q
    int64_t zmm1_2 = zmm0:8.q
    var_6b8 = rax_8.o
    var_6a8 = zmm1_2
    char rax_25 = sub_142391c60(arg2, zmm1_2)
    int64_t r13_1 = arg2[0x2b5]
    
    if (data_143eb62f8 s> *(rax_16 + 0x14))
        _Init_thread_header(&data_143eb62f8)
        
        if (data_143eb62f8 == 0xffffffff)
            int64_t* rcx_131 = data_143db18d0
            
            if (rcx_131 == 0)
                sub_140a53c40()
                rcx_131 = data_143db18d0
            
            int64_t r8_50
            r8_50.b = 1
            int64_t* rax_328 = (*(*rcx_131 + 0xb0))(rcx_131, u"r.DepthOfFieldQuality", r8_50)
            int64_t rax_329
            
            if (rax_328 == 0)
                rax_329 = 0
            else
                int64_t rdx_73 = *rax_328
                rax_329 = (*(rdx_73 + 0x58))(rax_328, rdx_73)
            
            data_143eb62f0 = rax_329
            _Init_thread_footer(&data_143eb62f8)
    
    if (sub_1413198a0(sub_1422e5a30(arg2)) == 0 || (*(*arg2 + 0x28) & 0x4000) == 0
            || *(data_143eb62f0 + 4) s<= 0 || 0f f>= arg2[0x21c].d || 0f f>= *(arg2 + 0x1254))
        r15.b = 0
    else
        r15.b = 1
    
    bool rax_31 = sub_1405949a0()
    int32_t rax_32 = sub_141312a10(arg2)
    int32_t rax_33 = arg2[0x2a4].d
    int32_t rdx_9 = *(data_143eb3d88 + 4)
    char var_6f8
    
    if (rdx_9 s>= 0)
        char rcx_23 = 1
        
        if (rdx_9 s< 1)
            rcx_23 = rdx_9.b
        
        var_6f8 = rcx_23
    else
        var_6f8 = 0
    
    char rax_34
    
    if (rax_31 == 0)
        rax_34 = sub_14135d270(arg2)
    
    if (rax_31 != 0 || rax_34 == 0)
        r14.b = 0
    else
        r14.b = 1
    
    char var_6fc_1
    
    if (*(*arg2 + 0x48) - 8 u> 1 && var_6ff_1 == 0)
        var_6fc_1 = 0
    
    if (*(*arg2 + 0x48) - 8 u<= 1 || var_6ff_1 != 0 || var_700 != 0)
        var_6fc_1 = 1
    
    char var_700_1
    char var_6fe_1
    
    if (r13_1 == 0 || rax_25 == 0)
        var_6fe_1 = 0
        var_700_1 = 0
    else
        var_6fe_1 = 1
        
        if (rax_32 != 0 || *(arg2 + 0x111c) f<= arg2[0x223].d)
            var_700_1 = 0
        else
            var_700_1 = 1
    
    float temp0_4 = arg2[0x1ff].d
    0f - temp0_4
    sub_141357940(&var_248, arg2, 0)
    char rax_36
    
    if (rax_31 != 0 || r14.b != 0)
        rax_36 = 1
    else
        rax_36 = 0
    
    int32_t var_308
    var_308:1.b = rax_31 == 0
    var_308.b = rax_36
    var_308:2.b = rax_33 == 1
    char var_304 = 0
    int32_t var_1f0
    var_308:3.b = var_1f0 != 0
    sub_141312550(&var_328)
    void var_128
    sub_141357940(&var_128, arg2, 2)
    int128_t var_660
    void*** var_578
    int64_t var_1d8
    int32_t var_d0
    void*** r8_3
    
    if (var_d0 == 0)
        r8_3 = var_718
    else
        var_668.o = var_718.o
        var_660:8.q = zmm6_1[1]
        uint128_t* rax_38 = sub_14134b800(&var_578, arg1, arg2, 
            sub_141301d30(&var_6e8, &var_1d8, &var_668), &var_128)
        r8_3 = *rax_38
        var_718 = r8_3
        zmm6_1[0].d = *(rax_38 + 8)
        zmm6_1[0]:4.d = *(rax_38 + 0xc)
        zmm6_1[1].d = rax_38[1].d
        zmm6_1[1]:4.d = *(rax_38 + 0x14)
    
    int64_t** var_d8
    
    if (var_d8 != 0)
        sub_140a74f90(var_d8)
        r8_3 = var_718
    
    void*** rax_40 = r8_3
    
    if (r15.b != 0)
        rax_40 = sub_141307ee0(arg1, r8, arg2, r8_3, rax_6)
        r8_3 = var_718
    
    void* var_748
    
    if ((r15.b == 0 || rax_40 == r8_3) && rax_6 != 0 && r13 != 0)
        var_748 = r13
        rax_40 = sub_14130d980(arg1, arg2, r8_3, rax_6)
    
    var_718 = rax_40
    int128_t zmm6_3 = sub_141357940(&var_128, arg2, 1)
    
    if (var_d0 != 0)
        var_668.o = var_718.o
        var_660:8.q = zmm6_1[1]
        uint128_t* rax_43
        rax_43, zmm6_3 = sub_14134b800(&var_578, arg1, arg2, 
            sub_141301d30(&var_6e8, &var_1d8, &var_668), &var_128)
        var_718 = *rax_43
        zmm6_1[0].d = *(rax_43 + 8)
        zmm6_1[0]:4.d = *(rax_43 + 0xc)
        zmm6_1[1].d = rax_43[1].d
        zmm6_1[1]:4.d = *(rax_43 + 0x14)
    
    if (var_d8 != 0)
        sub_140a74f90(var_d8)
    
    uint64_t var_608 = 0
    var_5d8.o = zmm6_3
    int128_t var_600 = zx.o(0)
    
    if (rax_33 != 2)
        if (sub_141461ee0(arg2) != 0 && (*(arg2 + 0x497c) & 1) == 0)
            sub_14131f2d0(arg1, var_718, arg2[0x2b5] + 0x8d0, 1)
    else
        char rax_45 = sub_14135d3e0()
        char rax_47
        
        if (rax_45 != 0 && r14.b == 0 && rax_31 == 0)
            int32_t rcx_48 = *(data_143eb3d88 + 4)
            
            if (rcx_48 s>= 0)
                rax_47 = 1
                
                if (rcx_48 s< 1)
                    rax_47 = rcx_48.b
            else
                rax_47 = 0
        
        char r9_4
        
        if (rax_45 == 0 || r14.b != 0 || rax_31 != 0 || rax_47 != 0)
            r9_4 = 0
        else
            r9_4 = 1
        
        var_748.d = 9
        sub_14134dd40(arg1, r8, arg2, r9_4, var_748.d, var_718.d, &var_718, &var_5d8, &var_608, 
            &var_600)
    
    rcx_56 = var_5d8.d
    rdx_22 = var_5d8:4.d
    int32_t var_5d0
    r8_10 = var_5d0
    int32_t var_5cc
    r9_7 = var_5cc
    zmm6_1[0].d = rcx_56
    zmm6_1[0]:4.d = rdx_22
    zmm6_1[1].d = r8_10
    zmm6_1[1]:4.d = r9_7
    
    if (arg2[0x2b5] != 0 && (*(arg2 + 0x497c) & 1) == 0)
        void var_c8
        sub_141357940(&var_c8, arg2, 4)
        int32_t var_70
        
        if (var_70 != 0)
            var_668.o = var_718.o
            var_660:8.q = zmm6_1[1]
            sub_14134b800(&var_578, arg1, arg2, sub_141301d30(&var_6e8, &var_1d8, &var_668), 
                &var_c8)
            sub_14131f2d0(arg1, var_578, arg2[0x2b5] + 0x950, 1)
        
        int64_t var_78
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        rcx_56 = zmm6_1[0].d
        rdx_22 = zmm6_1[0]:4.d
        r8_10 = zmm6_1[1].d
        r9_7 = zmm6_1[1]:4.d
    
    if (var_308.b == 0)
        r10 = var_718
    else
        __builtin_memset(&var_558, 0, 0x19)
        
        if (var_2f4 == 0)
            var_558 = var_328.q
            int64_t var_550
            var_550.d = var_328:8.d
            var_550:4.d = var_328:0xc.d
            int64_t var_548
            var_548.d = var_318.d
            var_548:4.d = var_318:4.d
            char var_540_1 = var_318:8.b
        
        void*** var_538_1 = var_718
        int64_t var_520_1 = rax_5
        int128_t var_518
        var_518.d = zmm0.d
        var_518:4.d = zmm0:4.d
        var_518:8.d = zmm0:8.d
        var_518:0xc.d = zmm0:0xc.d
        int128_t var_508
        var_508.q = rax_8
        var_508:8.d = zmm0.d
        var_508:0xc.d = zmm0:4.d
        int16_t var_4f8
        var_4f8.d = zmm0:8.d
        char var_4f4
        var_4f4.d = zmm0:0xc.d
        int32_t var_530_1 = rcx_56
        int32_t var_52c_1 = rdx_22
        int32_t var_528_1 = r8_10
        int32_t var_524_1 = r9_7
        int64_t var_4f0
        var_4f0.d = sub_141357850()
        var_4f0:4.d = sub_141357840()
        int64_t* r9_10 = &var_558
        void var_458
        int128_t* rcx_57 = &var_458
        int128_t* rax_70
        
        if (rax_31 == 0)
            rax_70 = sub_14134a860(rcx_57, arg1, arg2, r9_10)
        else
            rax_70 = sub_14134f290(rcx_57, arg1, arg2, r9_10)
        
        r10 = *rax_70
        var_718 = r10
        rcx_56 = *(rax_70 + 8)
        zmm6_1[0].d = rcx_56
        rdx_22 = *(rax_70 + 0xc)
        zmm6_1[0]:4.d = rdx_22
        r8_10 = rax_70[1].d
        zmm6_1[1].d = r8_10
        r9_7 = *(rax_70 + 0x14)
        zmm6_1[1]:4.d = r9_7
    
    if (var_608 == 0)
        var_598:8.d = rcx_56
        var_598:0xc.d = rdx_22
        var_588.d = r8_10
        int32_t var_584_1 = r9_7
        var_5a0 = u"HalfResolutionSceneColor"
        char var_57f_1 = 0
        var_598.q = r10
        char var_580_1 = var_6f8
        int32_t var_57c_1 = 9
        int128_t* rax_71 = sub_1413060b0(&var_5b8, arg1, arg2, &var_5a0)
        r9_7 = zmm6_1[1]:4.d
        r8_10 = zmm6_1[1].d
        rdx_22 = zmm6_1[0]:4.d
        r10 = var_718
        var_608 = *rax_71
        var_600.d = *(rax_71 + 8)
        var_600:4.d = *(rax_71 + 0xc)
        var_600:8.d = rax_71[1].d
        rcx_56 = zmm6_1[0].d
        var_600:0xc.d = *(rax_71 + 0x14)
    
    void*** rax_73 = rax_9
    var_5e8_1 = rax_73
    __builtin_memset(&var_2e8, 0, 0x91)
    
    if (var_700_1 != 0)
        var_668.o = var_608.o
        var_660:8.q = var_600:8.q
        rax_73 = sub_141307730(arg1, arg2, &var_438, &var_668, var_610)
        r9_7 = zmm6_1[1]:4.d
        r8_10 = zmm6_1[1].d
        rdx_22 = zmm6_1[0]:4.d
        rcx_56 = zmm6_1[0].d
        r10 = var_718
        var_5e8_1 = rax_73
    
    int32_t var_740
    void*** r11_1
    
    if (var_6fe_1 == 0)
        r11_1 = var_610
    else
        if (rax_32 != 1)
            rax_73 = sub_141307190(arg1, arg2, &var_438, rax_73)
        else
            void**** var_738
            var_738.b = 1
            var_740.b = var_6f8
            var_668.o = var_608.o
            var_660:8.q = var_600:8.q
            sub_141318f20(&var_2e8, arg1, arg2, &var_438, &var_668, var_740.b, var_738.b)
            int32_t var_270
            var_668.o = var_270.o
            int32_t var_260
            var_660:8.q = var_260.q
            rax_73 = sub_141303e20(arg1, arg2, &var_438, &var_668, var_610)
        
        r9_7 = zmm6_1[1]:4.d
        r11_1 = rax_73
        r8_10 = zmm6_1[1].d
        rdx_22 = zmm6_1[0]:4.d
        rcx_56 = zmm6_1[0].d
        r10 = var_718
        var_610 = rax_73
    
    if (0f < temp0_4 == 0)
        goto label_14130c286
    
    float zmm2_1 = *(arg2 + 0xffc)
    __builtin_memset(&var_1d8, 0, 0x91)
    var_5a0 = r10
    var_598.d = rcx_56
    rax_73.b = zmm2_1 > -1f
    var_598:4.d = rdx_22
    var_598:8.d = r8_10
    var_598:0xc.d = r9_7
    uint128_t var_640
    int64_t var_638
    char var_3c0
    int64_t var_3b8
    char var_258
    int128_t var_1d0
    int64_t* rax_74
    
    if (var_258 == 0 || rax_73.b != 0)
        int32_t var_630
        var_630.q = var_600:8.q
        var_640 = var_608.o
        int32_t rcx_69
        int32_t rdx_34
        int64_t r8_22
        
        if (rax_73.b == 0)
            rcx_69 = var_630
            rdx_34 = var_638.d
            r8_22 = var_640.q
        else
            var_3d8 = var_608
            var_3d0.d = var_600.d
            var_3d0:4.d = (var_600.q u>> 0x20).d
            var_3c8.d = var_600:8.d
            var_3c8:4.d = (var_600:8.q u>> 0x20).d
            var_3b8.d = zmm2_1
            var_3c0.q = r11_1
            int128_t* rax_82 = sub_141304eb0(&var_668, arg1, arg2, &var_3d8)
            rdx_34 = *(rax_82 + 8)
            r8_22 = *rax_82
            var_638:4.d = *(rax_82 + 0xc)
            rcx_69 = rax_82[1].d
            int32_t var_62c_1 = *(rax_82 + 0x14)
            var_638.d = rdx_34
            var_630 = rcx_69
        
        wchar16 const (** r15_2)[0xb] = &data_1439b6798
        int128_t var_1b8
        void* rsi_8 = &var_1b8:4
        var_1d0:4.d = (var_638 u>> 0x20).d
        int32_t i = 1
        var_1d0:0xc.d = (var_630.q u>> 0x20).d
        var_1d8 = r8_22
        var_1d0.d = rdx_34
        var_1d0:8.d = rcx_69
        
        do
            uint64_t rcx_71 = zx.q(i - 1) * 3
            var_640.q = *r15_2
            var_638 = (&var_1d8)[rcx_71]
            int32_t var_630_1 = *(&var_1d0 + (rcx_71 << 3))
            int32_t var_62c_2 = *(&var_1d0:4 + (rcx_71 << 3))
            int32_t var_628_1 = *(&var_1d0:8 + (rcx_71 << 3))
            char var_61f_1 = 0
            int32_t var_61c_1 = 0
            int32_t var_624_1 = *(&var_1d0:0xc + (rcx_71 << 3))
            char var_620_1 = var_6f8
            int128_t* rax_94 = sub_1413060b0(&var_668, arg1, arg2, &var_640)
            i += 1
            rsi_8 += 0x18
            r15_2 = &r15_2[1]
            *(rsi_8 - 0x24) = *rax_94
            *(rsi_8 - 0x1c) = *(rax_94 + 8)
            *(rsi_8 - 0x18) = *(rax_94 + 0xc)
            *(rsi_8 - 0x14) = rax_94[1].d
            *(rsi_8 - 0x10) = *(rax_94 + 0x14)
        while (i u< 6)
        
        char var_148_1 = 1
        rax_74 = &var_1d8
    else
        rax_74 = &var_2e8
    
    var_588.q = rax_74
    sub_141304770(&var_3d8, arg1, arg2, &var_5a0)
    void*** rsi_9 = var_3c0.q
    int32_t r12_1 = var_3b8.d
    int32_t r14_1 = var_3b8:4.d
    int32_t var_3b0
    int32_t r13_4 = var_3b0
    int32_t var_3ac
    int32_t r15_3 = var_3ac
    var_718 = var_3d8
    zmm6_1[0].d = var_3d0.d
    zmm6_1[0]:4.d = var_3d0:4.d
    zmm6_1[1].d = var_3c8.d
    zmm6_1[1]:4.d = var_3c8:4.d
    var_640.q = rsi_9
    var_638.d = r12_1
    var_638:4.d = r14_1
    int32_t var_630_2 = r13_4
    int32_t var_62c_3 = r15_3
    int32_t var_618
    var_618.q = rsi_9
    var_668.o = var_640
    var_660:8.q = var_630_2.q
    sub_141349e20(&var_578, arg1, arg2, &var_668, var_588.q)
    void*** r10_1 = var_578
    
    if (r10_1 != 0)
        int64_t var_568
        int32_t r8_26 = var_568.d
        int32_t rcx_79 = var_568:4.d
        int32_t var_570
        int32_t var_56c
        
        if (r8_26 != var_570 || rcx_79 != var_56c)
            rsi_9 = r10_1
            var_618.q = r10_1
            r12_1 = var_570
            var_638.d = var_570
            r14_1 = var_56c
            var_638:4.d = var_56c
            r13_4 = r8_26
            var_630_2 = r8_26
            r15_3 = rcx_79
            int32_t var_62c_4 = rcx_79
    
    if (rsi_9 == 0 || (r13_4 == r12_1 && r15_3 == r14_1))
        r9_7 = zmm6_1[1]:4.d
        r8_10 = zmm6_1[1].d
        rdx_22 = zmm6_1[0]:4.d
        rcx_56 = zmm6_1[0].d
        r10 = var_718
    label_14130c286:
        rsi_9 = rax_9
        r12_1 = 0
        r13_4 = var_680
        r14_1 = 0
        r15_3 = var_670
        var_618.q = rsi_9
        var_638 = 0
        var_630_2 = r13_4
        int32_t var_62c_5 = r15_3
    else
        r9_7 = zmm6_1[1]:4.d
        r8_10 = zmm6_1[1].d
        rdx_22 = zmm6_1[0]:4.d
        rcx_56 = zmm6_1[0].d
        r10 = var_718
    
    var_5c0 = r10
    var_6f8_1 = r8_10
    var_660:8.d = r8_10
    var_67c_1 = r9_7
    var_660:0xc.d = r9_7
    var_644 = rcx_56
    var_660.d = rcx_56
    var_680_1 = rdx_22
    var_660:4.d = rdx_22
    void* var_3a0
    
    if (var_308:1.b != 0)
        uint128_t zmm6_4 = sub_141357940(&var_128, arg2, 3)
        uint128_t* rax_128
        
        if (var_d0 == 0)
            void*** rsi_10
            
            if (rax_25 == 0)
                int64_t* rax_130 = sub_141420590(arg2)
                var_670.q = rax_130
                
                if (rax_130 == 0)
                    rsi_10 = nullptr
                else
                    int64_t rdx_43 = *rax_130
                    (*(rdx_43 + 0x30))(rax_130, rdx_43)
                    rax_130 = var_670.q
                    
                    if (rax_130 == 0)
                        rsi_10 = nullptr
                    else
                        void*** rax_131
                        rax_131, zmm6_4 = sub_1410fccd0(arg1, &var_670, u"External", 0)
                        rsi_10 = rax_131
                        rax_130 = var_670.q
                
                if (rax_130 != 0)
                    int64_t rdx_45 = *rax_130
                    (*(rdx_45 + 0x38))(rax_130, rdx_45)
            else
                void*** rax_129
                rax_129, zmm6_4 = sub_141305650(arg1, arg2)
                rsi_10 = rax_129
            
            __builtin_memset(&var_3d8, 0, 0x19)
            char var_378_1 = 0
            char var_376_1 = 0
            char var_374_1 = 0
            int64_t var_370_2 = 0
            
            if (var_2f4 == 1)
                var_3d8 = var_328.q
                var_3d0.d = var_328:8.d
                var_3d0:4.d = var_328:0xc.d
                var_3c8.d = var_318.d
                var_3c8:4.d = var_318:4.d
                char var_3c0_2 = var_318:8.b
            
            void*** var_3b8_2 = var_718
            int32_t var_3b0_2 = zmm6_1[0].d
            int32_t var_3ac_2 = zmm6_1[0]:4.d
            int32_t var_3a8_2 = zmm6_1[1].d
            int32_t var_3a4_2 = zmm6_1[1]:4.d
            var_3a0 = var_618.q
            int32_t var_380
            var_380.q = var_610
            int32_t var_398_2 = r12_1
            int32_t var_394_2 = r14_1
            int32_t var_390_2 = r13_4
            int32_t var_38c_2 = r15_3
            void*** var_388_2 = rsi_10
            char rax_145
            
            if (rax_33 != 1)
                rax_145 = sub_1413197f0()
                char var_377_1 = 0
            
            if (rax_33 == 1 || rax_145 != 0)
                char var_377_2 = 1
            
            char var_375_1 = var_6fc_1
            rax_128 = sub_14134e0d0(&var_640, arg1, arg2, &var_3d8, zmm6_4)
        else
            int64_t** rcx_81 = &var_128
            
            if (var_d8 != 0)
                rcx_81 = var_d8
            
            int64_t* rdx_40 = *rcx_81
            __builtin_memset(&var_3d8, 0, 0x19)
            int64_t var_370_1
            __builtin_memset(&var_370_1, 0, 0x34)
            int16_t var_330_1 = 0x100
            
            if (var_2f4 == 1)
                var_3d8 = var_328.q
                var_3d0.d = var_328:8.d
                var_3d0:4.d = var_328:0xc.d
                var_3c8.d = var_318.d
                var_3c8:4.d = var_318:4.d
                char var_3c0_1 = var_318:8.b
            
            void*** var_3b8_1 = var_718
            int32_t var_3b0_1 = zmm6_1[0].d
            uint32_t var_3ac_1 = (zmm6_1[0] u>> 0x20).d
            int32_t var_3a8_1 = zmm6_1[1].d
            uint32_t var_3a4_1 = (zmm6_1[1] u>> 0x20).d
            var_3a0 = rax_6
            int64_t rax_119 = zmm0.q
            int32_t var_398_1 = rax_119.d
            uint32_t var_394_1 = (rax_119 u>> 0x20).d
            int64_t rax_121 = zmm0:8.q
            int32_t var_390_1 = rax_121.d
            uint32_t var_38c_1 = (rax_121 u>> 0x20).d
            uint32_t var_37c_1 = (var_638 u>> 0x20).d
            char var_374
            var_374.d = (var_630_2.q u>> 0x20).d
            var_740.b = 0
            int64_t var_338_1 = rax_7
            void*** var_388_1 = rsi_9
            int32_t var_380_1 = r12_1
            char var_378
            var_378.d = r13_4
            rax_128 = sub_14134ba20(&var_640, arg1, arg2, &var_3d8, rdx_40, var_740.b)
        
        r10 = *rax_128
        var_718 = r10
        rcx_56 = *(rax_128 + 8)
        zmm6_1[0].d = rcx_56
        rdx_22 = *(rax_128 + 0xc)
        zmm6_1[0]:4.d = rdx_22
        r8_10 = rax_128[1].d
        zmm6_1[1].d = r8_10
        r9_7 = *(rax_128 + 0x14)
        zmm6_1[1]:4.d = r9_7
        
        if (var_d8 != 0)
            sub_140a74f90(var_d8)
            r9_7 = zmm6_1[1]:4.d
            r8_10 = zmm6_1[1].d
            rdx_22 = zmm6_1[0]:4.d
            rcx_56 = zmm6_1[0].d
            r10 = var_718
    
    int32_t r13_5 = rcx_56
    var_648 = r8_10
    int32_t r11_2 = rdx_22
    int32_t var_630_3 = r8_10
    var_5f0_1 = r10
    int32_t rsi_11 = r8_10
    var_670 = r9_7
    int32_t r14_2 = r9_7
    int32_t var_62c_6 = r9_7
    int32_t rax_150 = rcx_56
    var_618_1 = rcx_56
    var_638.d = rcx_56
    var_684_1 = rdx_22
    var_638:4.d = rdx_22
    int64_t* r12_2
    
    if (var_308:2.b == 0)
        r12_2 = arg1
    else
        __builtin_memset(&var_3d8, 0, 0x19)
        
        if (var_2f4 == 2)
            var_3d8 = var_328.q
            var_3d0.d = var_328:8.d
            var_3d0:4.d = var_328:0xc.d
            var_3c8.d = var_318.d
            var_3c8:4.d = var_318:4.d
            char var_3c0_3 = var_318:8.b
        
        int32_t var_3b0_3 = rcx_56
        void*** var_3b8_3 = r10
        int32_t var_3ac_3 = rdx_22
        int32_t var_3a8_3 = r8_10
        int32_t var_3a4_3 = r9_7
        
        if (data_143eb9138 s> *(rax_16 + 0x14))
            _Init_thread_header(&data_143eb9138)
            
            if (data_143eb9138 == 0xffffffff)
                int64_t* rcx_133 = data_143db18d0
                
                if (rcx_133 == 0)
                    sub_140a53c40()
                    rcx_133 = data_143db18d0
                
                int64_t r8_51
                r8_51.b = 1
                int64_t* rax_331 = (*(*rcx_133 + 0xb0))(rcx_133, u"r.PostProcessAAQuality", r8_51)
                int64_t rax_323
                
                if (rax_331 == 0)
                    rax_323 = 0
                else
                    int64_t rdx_74 = *rax_331
                    rax_323 = (*(rdx_74 + 0x58))(rax_331, rdx_74)
                
                data_143eb9130 = rax_323
                _Init_thread_footer(&data_143eb9138)
        
        int64_t rsi_12 = data_143eb9130
        int64_t rcx_90
        
        if (data_143de5480 == 0)
            rcx_90 = 0
        else
            rcx_90.b = GetCurrentThreadId() != data_143de5470
        
        int32_t rdx_47 = *(rsi_12 + (rcx_90 << 2))
        int32_t rax_160
        
        if (rdx_47 s>= 0)
            rax_160 = 5
            
            if (rdx_47 s< 5)
                rax_160 = rdx_47
        else
            rax_160 = 0
        
        r12_2 = arg1
        var_3a0.d = rax_160
        uint128_t* rax_161 = sub_141306710(&var_5b8, r12_2, arg2, &var_3d8)
        r10 = *rax_161
        var_718 = r10
        rcx_56 = *(rax_161 + 8)
        zmm6_1[0].d = rcx_56
        rdx_22 = *(rax_161 + 0xc)
        r11_2 = rdx_22
        zmm6_1[0]:4.d = rdx_22
        r8_10 = rax_161[1].d
        rsi_11 = r8_10
        zmm6_1[1].d = r8_10
        r9_7 = *(rax_161 + 0x14)
        rax_150 = rcx_56
        zmm6_1[1]:4.d = r9_7
        r14_2 = r9_7
    
    if (var_308:3.b != 0)
        var_578.o = var_718.o
        uint64_t var_568_1 = zmm6_1[1]
        sub_141301d30(&var_6e8, &var_1d8, &var_578)
        
        if (var_2f4 == 3)
            var_1d8 = var_328.q
            var_1d0.d = var_328:8.d
            var_1d0:4.d = var_328:0xc.d
            var_1d0:8.d = var_318.d
            var_1d0:0xc.d = var_318:4.d
            int64_t var_1c0
            var_1c0.b = var_318:8.b
        
        int128_t var_188
        var_188.q = var_5c0
        var_188:8.d = var_644
        var_188:0xc.d = (var_660.q u>> 0x20).d
        int64_t var_178
        var_178.d = var_6f8_1
        var_178:4.d = (var_660:8.q u>> 0x20).d
        int128_t var_170
        var_170.q = var_5f0_1
        var_170:0xc.d = (var_638 u>> 0x20).d
        int64_t var_160
        var_160.d = var_648
        var_160:4.d = (var_630_3.q u>> 0x20).d
        var_170:8.d = r13_5
        uint128_t* rax_181 = sub_14134b800(&var_5b8, r12_2, arg2, &var_1d8, &var_248)
        r10 = *rax_181
        var_718 = r10
        rcx_56 = *(rax_181 + 8)
        zmm6_1[0].d = rcx_56
        rdx_22 = *(rax_181 + 0xc)
        r11_2 = rdx_22
        zmm6_1[0]:4.d = rdx_22
        r8_10 = rax_181[1].d
        rsi_11 = r8_10
        zmm6_1[1].d = r8_10
        r9_7 = *(rax_181 + 0x14)
        rax_150 = rcx_56
        zmm6_1[1]:4.d = r9_7
        r14_2 = r9_7
    
    if (var_304 != 0)
        __builtin_memset(&var_6e8, 0, 0x19)
        
        if (var_2f4 == 4)
            var_6e8.q = var_328.q
            var_6e8:8.d = var_328:8.d
            var_6e8:0xc.d = var_328:0xc.d
            int64_t var_6d8_2
            var_6d8_2.d = var_318.d
            var_6d8_2:4.d = var_318:4.d
            var_6d0.b = var_318:8.b
        
        var_6c0.d = rax_150
        var_6b8:8.q = rax_5
        var_6a8.d = zmm0.d
        var_6a8:4.d = zmm0:4.d
        var_6a0 = zmm0:8.d
        int32_t var_69c_1 = zmm0:0xc.d
        var_6d0:8.q = r10
        var_6c0:4.d = r11_2
        var_6b8.d = rsi_11
        var_6b8:4.d = r14_2
        int128_t* rax_187 = sub_14130dbe0(&var_5b8, r12_2, arg2, &var_6e8)
        r10 = *rax_187
        var_718 = r10
        rcx_56 = *(rax_187 + 8)
        zmm6_1[0].d = rcx_56
        rdx_22 = *(rax_187 + 0xc)
        zmm6_1[0]:4.d = rdx_22
        r8_10 = rax_187[1].d
        zmm6_1[1].d = r8_10
        r9_7 = *(rax_187 + 0x14)
        zmm6_1[1]:4.d = r9_7
    
    int64_t var_1f8
    
    if (var_1f8 != 0)
        sub_140a74f90(var_1f8)
        r9_7 = zmm6_1[1]:4.d
        r8_10 = zmm6_1[1].d
        rdx_22 = zmm6_1[0]:4.d
        rcx_56 = zmm6_1[0].d
        r10 = var_718
int32_t rsi_13 = var_460:4.d
int32_t r14_3 = var_460.d
int32_t r15_5 = zmm0_1:0xc.d
int32_t r12_3 = zmm0_1:8.d
int64_t r13_6 = zmm0_1.q
char var_698

if (var_303.b != 0)
    __builtin_memset(&var_6e8, 0, 0x19)
    var_6b8:8.q = 0
    var_6a8.d = 0
    var_6a0 = 0
    int32_t var_69c_2 = 0x3f800000
    var_698 = 0
    
    if (var_2f4 == 5)
        var_6e8.q = var_328.q
        var_6e8:8.d = var_328:8.d
        var_6e8:0xc.d = var_328:0xc.d
        int64_t var_6d8_3
        var_6d8_3.d = var_318.d
        var_6d8_3:4.d = var_318:4.d
        var_6d0.b = var_318:8.b
    
    void* rcx_105 = data_143f5b298
    var_6d0:8.q = r13_6
    var_6c0.d = r12_3
    var_6c0:4.d = r15_5
    var_6b8.d = r14_3
    var_6b8:4.d = rsi_13
    var_5d8 = *(rcx_105 + 0x5f0)
    int32_t var_5d0_1 = *(rcx_105 + 0x5f8)
    var_6b8 = var_5d8.o
    void**** rax_206 = sub_14138e9d0(&var_5b8, arg1, arg2, &var_6e8)
    r10 = *rax_206
    var_718 = r10
    rcx_56 = rax_206[1].d
    zmm6_1[0].d = rcx_56
    rdx_22 = *(rax_206 + 0xc)
    zmm6_1[0]:4.d = rdx_22
    r8_10 = rax_206[2].d
    zmm6_1[1].d = r8_10
    r9_7 = *(rax_206 + 0x14)
    zmm6_1[1]:4.d = r9_7

if (var_303:1.b != 0)
    void* rcx_107 = data_143f5b298
    int32_t rax_208 = *(rcx_107 + 0x5e8) - 1
    __builtin_memset(&var_6e8, 0, 0x19)
    var_6b8:8.q = 0
    var_6a8.d = 0
    int32_t var_6a0_1 = 0
    int32_t var_69c_3 = 0x3f800000
    uint128_t zmm1_4
    zmm1_4.d = 10f f/ _mm_cvtepi32_ps(zx.o(rax_208)).d
    var_698 = 0
    
    if (var_2f4 == 6)
        var_6e8.q = var_328.q
        var_6e8:8.d = var_328:8.d
        var_6e8:0xc.d = var_328:0xc.d
        int64_t var_6d8_4
        var_6d8_4.d = var_318.d
        var_6d8_4:4.d = var_318:4.d
        var_6d0.b = var_318:8.b
    
    var_6d0:8.q = r13_6
    var_6c0.d = r12_3
    var_6c0:4.d = r15_5
    var_6b8.d = r14_3
    var_6b8:4.d = rsi_13
    var_5d8 = *(rcx_107 + 0x5e0)
    int32_t var_5d0_2 = *(rcx_107 + 0x5e8)
    var_6a0 = 1
    int32_t var_69c_4 = zmm1_4.d
    var_6b8 = var_5d8.o
    void**** rax_217 = sub_14138e9d0(&var_5b8, arg1, arg2, &var_6e8)
    r10 = *rax_217
    var_718 = r10
    rcx_56 = rax_217[1].d
    zmm6_1[0].d = rcx_56
    rdx_22 = *(rax_217 + 0xc)
    zmm6_1[0]:4.d = rdx_22
    r8_10 = rax_217[2].d
    zmm6_1[1].d = r8_10
    r9_7 = *(rax_217 + 0x14)
    zmm6_1[1]:4.d = r9_7

if (var_2ff.b != 0)
    __builtin_memset(&var_3d8, 0, 0x19)
    
    if (var_2f4 == 9)
        var_3d8 = var_328.q
        var_3d0.d = var_328:8.d
        var_3d0:4.d = var_328:0xc.d
        var_3c8.d = var_318.d
        var_3c8:4.d = var_318:4.d
        char var_3c0_4 = var_318:8.b
    
    int32_t var_3b0_4 = rcx_56
    int32_t var_3ac_4 = rdx_22
    int32_t var_3a8_4 = r8_10
    int32_t var_3a4_4 = r9_7
    int128_t* var_3a0_1 = r8
    void*** var_3b8_4 = r10
    uint128_t* rax_225 = sub_141390670(&var_5b8, arg1, arg2, &var_3d8)
    r10 = *rax_225
    var_718 = r10
    rcx_56 = *(rax_225 + 8)
    zmm6_1[0].d = rcx_56
    rdx_22 = *(rax_225 + 0xc)
    zmm6_1[0]:4.d = rdx_22
    r8_10 = rax_225[1].d
    zmm6_1[1].d = r8_10
    r9_7 = *(rax_225 + 0x14)
    zmm6_1[1]:4.d = r9_7

int128_t* rsi_14
int64_t* r15_6

if (var_2ff:1.b == 0)
    r15_6 = arg1
    rsi_14 = r8
else
    __builtin_memset(&var_6e8, 0, 0x19)
    
    if (var_2f4 == 0xa)
        var_6e8.q = var_328.q
        var_6e8:8.d = var_328:8.d
        var_6e8:0xc.d = var_328:0xc.d
        int64_t var_6d8_5
        var_6d8_5.d = var_318.d
        var_6d8_5:4.d = var_318:4.d
        var_6d0.b = var_318:8.b
    
    var_6a8:4.d = r15_5
    r15_6 = arg1
    int32_t var_69c_5 = rsi_13
    rsi_14 = r8
    var_6c0.d = rcx_56
    var_6c0:4.d = rdx_22
    var_6b8.d = r8_10
    var_6b8:4.d = r9_7
    var_6d0:8.q = r10
    var_6b8:8.q = r13_6
    var_6a8.d = r12_3
    var_6a0 = r14_3
    var_698.q = rsi_14
    int128_t* rax_232 = sub_14130e280(&var_5b8, r15_6, arg2, &var_6e8)
    r10 = *rax_232
    var_718 = r10
    rcx_56 = *(rax_232 + 8)
    zmm6_1[0].d = rcx_56
    rdx_22 = *(rax_232 + 0xc)
    zmm6_1[0]:4.d = rdx_22
    r8_10 = rax_232[1].d
    zmm6_1[1].d = r8_10
    r9_7 = *(rax_232 + 0x14)
    zmm6_1[1]:4.d = r9_7

if (var_2fd != 0)
    __builtin_memset(&var_3d8, 0, 0x19)
    
    if (var_2f4 == 0xb)
        var_3d8 = var_328.q
        var_3d0.d = var_328:8.d
        var_3d0:4.d = var_328:0xc.d
        var_3c8.d = var_318.d
        var_3c8:4.d = var_318:4.d
        char var_3c0_5 = var_318:8.b
    
    int32_t var_3b0_5 = rcx_56
    int32_t var_3ac_5 = rdx_22
    int32_t var_3a8_5 = r8_10
    int32_t var_3a4_5 = r9_7
    void*** var_3b8_5 = r10
    int128_t* var_3a0_2 = rsi_14
    int128_t* rax_239 = sub_14134fa00(&var_5b8, r15_6, arg2, &var_3d8)
    r10 = *rax_239
    var_718 = r10
    rcx_56 = *(rax_239 + 8)
    zmm6_1[0].d = rcx_56
    rdx_22 = *(rax_239 + 0xc)
    zmm6_1[0]:4.d = rdx_22
    r8_10 = rax_239[1].d
    zmm6_1[1].d = r8_10
    r9_7 = *(rax_239 + 0x14)
    zmm6_1[1]:4.d = r9_7

int32_t rsi_15
int32_t r12_4
int32_t r13_7

if (rax_18 == 0)
    rsi_15 = var_644
    r12_4 = var_6f8_1
    r13_7 = var_680_1
else
    __builtin_memset(&var_2e8, 0, 0x19)
    
    if (var_2f4 == 0xc)
        var_2e8 = var_328.q
        int64_t var_2e0
        var_2e0.d = var_328:8.d
        var_2e0:4.d = var_328:0xc.d
        int64_t var_2d8
        var_2d8.d = var_318.d
        var_2d8:4.d = var_318:4.d
        char var_2d0_1 = var_318:8.b
    
    rsi_15 = var_644
    r13_7 = var_680_1
    r12_4 = var_6f8_1
    void*** var_2b0_1 = var_5c0
    int32_t var_29c_1 = var_67c_1
    void*** var_298_1 = var_5f0_1
    int32_t var_290_1 = var_618_1
    int32_t var_28c_1 = var_684_1
    int32_t var_288_1 = var_648
    int32_t var_284_1 = var_670
    void* var_280_1 = rax_6
    int32_t var_278_1 = zmm0.d
    int32_t var_274_1 = zmm0:4.d
    int32_t var_270_1 = zmm0:8.d
    int32_t var_26c_1 = zmm0:0xc.d
    int64_t var_268_1 = rax_8
    int32_t var_260_1 = zmm0.d
    int32_t var_25c_1 = zmm0:4.d
    int32_t var_258_1 = zmm0:8.d
    int32_t var_254_1 = zmm0:0xc.d
    char var_24f_1 = rax_13
    char var_250_1 = rax_14
    int32_t var_2c0_1 = rcx_56
    int32_t var_2bc_1 = rdx_22
    int32_t var_2b8_1 = r8_10
    int32_t var_2b4_1 = r9_7
    char var_24e_1 = var_6ff_1
    void*** var_2c8_1 = r10
    int32_t var_2a8_1 = rsi_15
    int32_t var_2a4_1 = r13_7
    int32_t var_2a0_1 = r12_4
    uint128_t* rax_266 = sub_14138f0c0(&var_5b8, r15_6, arg2, &var_2e8, arg2)
    r10 = *rax_266
    var_718 = r10
    rcx_56 = *(rax_266 + 8)
    zmm6_1[0].d = rcx_56
    rdx_22 = *(rax_266 + 0xc)
    zmm6_1[0]:4.d = rdx_22
    r8_10 = rax_266[1].d
    zmm6_1[1].d = r8_10
    r9_7 = *(rax_266 + 0x14)
    zmm6_1[1]:4.d = r9_7

if (var_2fb != 0)
    __builtin_memset(&var_248, 0, 0x19)
    
    if (var_2f4 == 0xd)
        var_248 = var_328.q
        int64_t var_240
        var_240.d = var_328:8.d
        var_240:4.d = var_328:0xc.d
        int64_t var_238
        var_238.d = var_318.d
        var_238:4.d = var_318:4.d
        char var_230_1 = var_318:8.b
    
    void*** var_210_1 = var_5c0
    int32_t var_1fc_1 = var_67c_1
    void*** var_1f8_1 = var_5e8_1
    void*** var_1f0_1 = var_610
    int32_t var_220_1 = rcx_56
    int32_t var_21c_1 = rdx_22
    int32_t var_218_1 = r8_10
    int32_t var_214_1 = r9_7
    void* var_1e8_1 = &var_438
    void*** var_228_1 = r10
    int32_t var_208_1 = rsi_15
    int32_t var_204_1 = r13_7
    int32_t var_200_1 = r12_4
    int128_t* rax_277 = sub_14138fdf0(&var_5b8, r15_6, arg2, &var_248)
    r10 = *rax_277
    var_718 = r10
    rcx_56 = *(rax_277 + 8)
    zmm6_1[0].d = rcx_56
    rdx_22 = *(rax_277 + 0xc)
    zmm6_1[0]:4.d = rdx_22
    r8_10 = rax_277[1].d
    zmm6_1[1].d = r8_10
    r9_7 = *(rax_277 + 0x14)
    zmm6_1[1]:4.d = r9_7

if (var_2f9 != 0)
    __builtin_memset(&var_3d8, 0, 0x19)
    
    if (var_2f4 == 0xf)
        var_3d8 = var_328.q
        var_3d0.d = var_328:8.d
        var_3d0:4.d = var_328:0xc.d
        var_3c8.d = var_318.d
        var_3c8:4.d = var_318:4.d
        char var_3c0_6 = var_318:8.b
    
    int32_t var_3b0_6 = rcx_56
    int32_t var_3ac_6 = rdx_22
    int32_t var_3a8_6 = r8_10
    int32_t var_3a4_6 = r9_7
    void*** var_3b8_6 = r10
    int64_t* rax_284 = sub_1413070d0(&var_5b8, r15_6, arg2, &var_3d8)
    var_718 = *rax_284
    zmm6_1[0].d = rax_284[1].d
    zmm6_1[0]:4.d = *(rax_284 + 0xc)
    zmm6_1[1].d = rax_284[2].d
    zmm6_1[1]:4.d = *(rax_284 + 0x14)

sub_1405949a0()

if (sub_141459200() != 0 && __scrt_wide_argv_policy::configure_argv(arg2) != 0)
    sub_141451b50(r15_6, arg2, var_718)

void*** rcx_124
int32_t rdx_65
int32_t r8_46
int32_t r9_38
int32_t r10_2

if (var_2f8 == 0)
    r10_2 = zmm6_1[1]:4.d
    r9_38 = zmm6_1[1].d
    r8_46 = zmm6_1[0]:4.d
    rdx_65 = zmm6_1[0].d
    rcx_124 = var_718
else
    __builtin_memset(&var_6e8, 0, 0x19)
    
    if (var_2f4 == 0x10)
        var_6e8.q = var_328.q
        var_6e8:8.d = var_328:8.d
        var_6e8:0xc.d = var_328:0xc.d
        int64_t var_6d8_6
        var_6d8_6.d = var_318.d
        var_6d8_6:4.d = var_318:4.d
        var_6d0.b = var_318:8.b
    
    var_6d0:8.q = var_718
    var_6c0.d = zmm6_1[0].d
    var_6c0:4.d = zmm6_1[0]:4.d
    var_6b8.d = zmm6_1[1].d
    var_6b8:4.d = zmm6_1[1]:4.d
    var_6b8:8.q = arg2[0x292]
    var_6a8 = arg2[0x293]
    var_6a0.q = arg2[0x294]
    uint128_t* rax_303 = sub_141349180(&var_5b8, r15_6, arg2, &var_6e8)
    rcx_124 = *rax_303
    var_718 = rcx_124
    rdx_65 = *(rax_303 + 8)
    zmm6_1[0].d = rdx_65
    r8_46 = *(rax_303 + 0xc)
    zmm6_1[0]:4.d = r8_46
    r9_38 = rax_303[1].d
    zmm6_1[1].d = r9_38
    r10_2 = *(rax_303 + 0x14)
    zmm6_1[1]:4.d = r10_2

if (var_2f7 != 0)
    __builtin_memset(&var_6e8, 0, 0x19)
    var_6b8:8.b = 7
    var_6b8:0xc.q = 0
    var_6a8:4.d = 0x3f800000
    int32_t var_6a0_2 = 3
    
    if (var_2f4 == 0x11)
        var_6e8.q = var_328.q
        var_6e8:8.d = var_328:8.d
        var_6e8:0xc.d = var_328:0xc.d
        int64_t var_6d8_7
        var_6d8_7.d = var_318.d
        var_6d8_7:4.d = var_318:4.d
        var_6d0.b = var_318:8.b
    
    var_6d0:8.q = rcx_124
    var_6c0.d = rdx_65
    var_6c0:4.d = r8_46
    var_6b8.d = r9_38
    var_6b8:4.d = r10_2
    var_6b8:8.b = sub_14139f660()
    var_6b8:0xc.q = var_480.q
    int32_t rax_311
    rax_311.b = rax_23 == 0
    int32_t var_6a0_3 = rax_311
    int32_t var_478
    var_6a8:4.d = var_478
    int128_t* rax_313 = sub_14138dbd0(&var_5b8, r15_6, arg2, &var_6e8)
    rcx_124 = *rax_313
    var_718 = rcx_124
    rdx_65 = *(rax_313 + 8)
    zmm6_1[0].d = rdx_65
    r8_46 = *(rax_313 + 0xc)
    zmm6_1[0]:4.d = r8_46
    r9_38 = rax_313[1].d
    zmm6_1[1].d = r9_38
    r10_2 = *(rax_313 + 0x14)
    zmm6_1[1]:4.d = r10_2

if (rax_23 != 0)
    __builtin_memset(&var_6e8, 0, 0x19)
    var_6b8:8.b = 7
    var_6b8:0xc.q = 0
    var_6a8:4.d = 0x3f800000
    int32_t var_6a0_4 = 3
    
    if (var_2f4 == 0x12)
        var_6e8.q = var_328.q
        var_6e8:8.d = var_328:8.d
        var_6e8:0xc.d = var_328:0xc.d
        int64_t var_6d8_8
        var_6d8_8.d = var_318.d
        var_6d8_8:4.d = var_318:4.d
        var_6d0.b = var_318:8.b
    
    var_6d0:8.q = rcx_124
    var_6c0.d = rdx_65
    var_6c0:4.d = r8_46
    var_6b8.d = r9_38
    var_6b8:4.d = r10_2
    int32_t var_6a0_5 = 2
    
    if (*(*arg2 + 0x80) == 1)
        rbx = 6
    
    var_6b8:8.b = rbx
    int128_t* rax_321 = sub_14138dbd0(&var_5b8, r15_6, arg2, &var_6e8)
    var_718 = *rax_321
    zmm6_1[0].d = *(rax_321 + 8)
    zmm6_1[0]:4.d = *(rax_321 + 0xc)
    zmm6_1[1].d = rax_321[1].d
    zmm6_1[1]:4.d = *(rax_321 + 0x14)

int64_t result = sub_140b37f60("RenderPostProcessing")
__security_check_cookie(rax_1 ^ &var_768)
return result
