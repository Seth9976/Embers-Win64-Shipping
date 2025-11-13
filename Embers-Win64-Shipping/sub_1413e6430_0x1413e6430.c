// 函数: sub_1413e6430
// 地址: 0x1413e6430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_58 = zmm6
void var_508
int64_t rax_1 = __security_cookie ^ &var_508
int64_t r15 = sx.q(arg2)
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg3)
int32_t var_470 = temp0
int32_t i_2 = r15.d
int32_t rcx

if (rax_1 == 0)
    rcx = 0x20
else
    rcx = 0x1f - temp0

int32_t rcx_2 = rcx << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg3 - 1)
int32_t var_410 = temp0_1
int32_t rdx

if (rcx_2 == 0)
    rdx = 0x20
else
    rdx = 0x1f - temp0_1

int32_t var_498 = ((0x20 - rdx) & not.d(rcx_2)) + 1
int32_t i = 0
int64_t* rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t* r14_1 = data_143ec4d80 + 8
int64_t var_330 = data_14395da18
void* rcx_5 = &rdi_2[1]
int64_t var_328 = data_14395d9e8
int64_t var_338 = data_1439b66e0
int128_t var_368
__builtin_memset(&var_368, 0, 0x30)
int64_t var_30c
__builtin_memset(&var_30c, 0, 0x30)
int128_t var_320 = zx.o(0)
int64_t var_2d8 = 0
int32_t var_2d0 = 0
int16_t var_2cc = 0
char var_2ca = 0
int16_t var_2c8 = 0
int64_t rax_10 = *r14_1
int64_t* var_488 = r14_1

if (rcx_5 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_5 = &rdi_2[1]

*(arg1 + 0x30) = rcx_5
*rdi_2 = rax_10
void*** rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_11 = &rcx_9[5]

if (rax_11 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_9 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rcx_9[5]

*(arg1 + 0x30) = rax_11
void**** rax_12 = *(arg1 + 8)
*(arg1 + 0x14) += 1
int64_t var_460 = r15
*rax_12 = rcx_9
*(arg1 + 8) = &rcx_9[1]
rcx_9[1] = 0
rcx_9[3] = rdi_2
*rcx_9 = &data_142d549c8
rcx_9[2].d = 1
rcx_9[4].d = 1
zmm6 = _mm_cvtepi32_ps(zx.o(arg3))
int32_t var_480
int128_t var_348_1
int64_t var_300
int32_t var_2e0_1

do
    void* rax_14 = *r14_1
    int128_t zmm1 = data_142d3f5a0
    int32_t var_1e0_1 = 0
    int32_t var_1dc
    __builtin_memset(&var_1dc, 0xff, 0x14)
    int128_t var_1c8_1 = zmm1
    int64_t var_1b8
    __builtin_memset(&var_1b8, 0, 0x1a)
    void* var_2b8 = rax_14
    int64_t var_2b0_1 = 0
    int32_t i_3 = i
    int16_t var_2a4_1 = 0x500
    int64_t var_1f8
    __builtin_memset(&var_1f8, 0, 0x11)
    int32_t var_1e4_1 = 0
    int16_t var_1a0_1
    var_1a0_1:1.b = *(rax_14 + 0x38) u> 1
    void var_2a0
    memset(&var_2a0, 0, 0xa8)
    int64_t rdi_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_15 = rdi_7 + 0x3c
    
    if (rax_15 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x3e)
        rdi_7 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_15 = rdi_7 + 0x3c
    
    *(arg1 + 0x30) = rax_15
    wchar16 const* const rcx_15 = u"FilterReflectionEnvironmentRP"
    wchar16 const j
    
    do
        j = *rcx_15
        *(rdi_7 - u"FilterReflectionEnvironmentRP" + rcx_15) = j
        rcx_15 = &rcx_15[1]
    while (j != 0)
    void*** rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_16 = &rcx_18[0x27]
    
    if (rax_16 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x140)
        rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_16 = &rcx_18[0x27]
    
    *(arg1 + 0x30) = rax_16
    void**** rax_17 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_17 = rcx_18
    *(arg1 + 8) = &rcx_18[1]
    sub_1405d11b0(rcx_18, &var_2b8, rdi_7)
    *(arg1 + 0x1c4) = 1
    sub_1405d19b0(arg1, &var_2b8)
    int64_t var_1a8
    *(arg1 + 0x178) = var_1a8:7.b
    int32_t j_1 = 0
    uint64_t rax_20 = zx.q(*(arg1 + 0xa0))
    *(arg1 + 0x179) = 0
    *(arg1 + 0x1c4) = 1
    var_30c.d = rax_20.d
    
    if (rax_20.d != 0)
        do
            uint64_t j_4 = zx.q(j_1)
            uint64_t r15_1 = j_4 * 3
            int64_t* rcx_23 = *(arg1 + (r15_1 << 3) + 0xa8)
            
            if (rcx_23 == 0)
                *(&var_30c:4 + j_4) = 0
                rax_20.b = 0
            else
                *(&var_30c:4 + j_4) = *(rcx_23 + 0x3c)
                *(&var_300 + (j_4 << 2)) = rcx_23[8].d
                int64_t rax_24 = (*(*rcx_23 + 0x10))()
                
                if (rax_24 != 0)
                    var_2cc:1.b = 1
                
                if (rax_24 == 0 || *(rax_24 + 0x68) u<= 1)
                    var_2cc:1.b = 0
                
                rax_20 = zx.q(*(&var_30c:4 + j_4))
            
            if (rax_20.b != 0)
                var_2d0.w = *(*(arg1 + (r15_1 << 3) + 0xa8) + 0x38)
            
            j_1 += 1
        while (j_1 u< var_30c.d)
        
        r15 = var_460
    
    int64_t* rcx_25 = *(arg1 + 0x168)
    
    if (rcx_25 == 0)
        var_2e0_1 = 0
    else
        var_2e0_1 = *(rcx_25 + 0x3c)
        var_2e0_1 = rcx_25[8].d
        void* rax_28 = (*(*rcx_25 + 0x10))()
        
        if (rax_28 == 0 || *(rax_28 + 0x68) u<= 1)
            var_2cc:1.b = 0
        else
            var_2cc:1.b = 1
    
    var_2d8.b = *(arg1 + 0x170)
    var_2d8:1.b = *(arg1 + 0x171)
    var_2d8:2.b = *(arg1 + 0x172)
    var_2d8:3.b = *(arg1 + 0x173)
    var_2d8:4.d = *(arg1 + 0x174)
    
    if (var_2e0_1 != 0)
        var_2d0.w = *(*(arg1 + 0x168) + 0x38)
    
    var_2d0:2.b = *(arg1 + 0x178)
    void*** rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    var_2d0:3.b = *(arg1 + 0x179)
    char var_2ca_1 = *(arg1 + 0x17a)
    void* rax_38 = &rcx_29[5]
    int32_t var_474_1 = arg3
    
    if (rax_38 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_29 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_38 = &rcx_29[5]
    
    *(arg1 + 0x30) = rax_38
    void**** rax_39 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_39 = rcx_29
    *(arg1 + 8) = &rcx_29[1]
    rcx_29[1] = 0
    *rcx_29 = &data_142d54998
    *(rcx_29 + 0x1c) = zmm6.d
    rcx_29[4].d = zmm6.d
    rcx_29[2] = 0
    rcx_29[3].d = 0
    *(rcx_29 + 0x24) = 0x3f800000
    void* var_3e8
    sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[r15]), &var_3e8, &data_143f55f90, 0)
    void* var_3d8
    sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[r15]), &var_3d8, &data_143f12e80, 0)
    void* rcx_37 = var_3e8
    var_368.q = data_1439c9210
    int64_t rax_44 = 0
    
    if (rcx_37 != 0)
        int64_t rdx_7 = sx.q(*(rcx_37 + 0x10c))
        void* var_3e0
        int64_t* rdi_10 = *(var_3e0 + 0x10)
        int64_t rax_46 = rdi_10[3]
        
        if (*(rax_46 + (rdx_7 << 3)) == 0)
            sub_1419ccf30(rdi_10, rdx_7.d)
            rax_46 = rdi_10[3]
        
        rax_44 = *(rax_46 + (rdx_7 << 3))
    
    void* r14_3 = var_3d8
    var_368:8.q = rax_44
    int64_t rax_47 = 0
    
    if (r14_3 != 0)
        int64_t rdx_8 = sx.q(*(r14_3 + 0x10c))
        void* var_3d0
        int64_t* rdi_11 = *(var_3d0 + 0x10)
        int64_t rax_49 = rdi_11[3]
        
        if (*(rax_49 + (rdx_8 << 3)) == 0)
            sub_1419ccf30(rdi_11, rdx_8.d)
            rax_49 = rdi_11[3]
        
        rax_47 = *(rax_49 + (rdx_8 << 3))
        r15 = var_460
    
    var_348_1.q = rax_47
    int32_t var_310_1 = 0
    sub_1419870b0(arg1, &var_368, 2)
    int128_t var_398 = data_14399f5e0
    void* r9
    int128_t zmm6_1
    r9, zmm6_1 = sub_1419ab500(r14_3, arg1, &var_398, 1)
    int32_t var_4a0_1 = 1
    int512_t zmm3
    zmm3.o = zmm6_1
    int32_t var_4a8_1 = 0
    int512_t zmm2_1
    zmm2_1.o = zx.o(0)
    uint128_t var_388
    int128_t* var_4b0_1 = &var_388
    var_388 = var_3e8.o
    uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(arg3))
    var_480 = arg3
    int32_t var_47c_1 = arg3
    sub_1413993b0(arg1, zx.o(0), zmm2_1, r9, zmm3, zmm6_1.d, 0, 0, zmm1_1.d, 
        _mm_cvtepi32_ps(zx.o(arg3)).d, var_480.q, arg3.q, var_4b0_1, var_4a8_1, var_4a0_1)
    void*** rcx_45 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_52 = &rcx_45[2]
    
    if (rax_52 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x18)
        rcx_45 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_52 = &rcx_45[2]
    
    *(arg1 + 0x30) = rax_52
    int64_t* rax_53 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_53 = rcx_45
    *(arg1 + 8) = &rcx_45[1]
    rcx_45[1] = 0
    *rcx_45 = &data_142d549b8
    *(arg1 + 0x1c4) = 0
    *(arg1 + 0x178) = 0
    int64_t var_1b0
    zmm6 = sub_1405d1550(&var_1b0)
    r14_1 = var_488
    i += 1
while (i u< 6)

int64_t rax_55 = *r14_1
int64_t* rdi_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_50 = &rdi_14[1]

if (rcx_50 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_14 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_50 = &rdi_14[1]

*(arg1 + 0x30) = rcx_50
*rdi_14 = rax_55
void*** rcx_54 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_56 = &rcx_54[5]

if (rax_56 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_54 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_56 = &rcx_54[5]

*(arg1 + 0x30) = rax_56
void**** rax_57 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_57 = rcx_54
*(arg1 + 8) = &rcx_54[1]
rcx_54[1] = 0
*rcx_54 = &data_142d549c8
rcx_54[2].d = 1
rcx_54[3] = rdi_14
rcx_54[4].d = 0
int64_t* rax_59 = std::_Get_future_error_what((*U"1111")[r15])
int64_t* r13_1 = rax_59
int64_t* r15_4 = data_143ec4d80 + 8
int32_t i_5 = i_2
int64_t* r14_5 = data_143ec4d88 + 8
int32_t var_478_1
var_478_1.q = r14_5
int512_t zmm3_1
uint128_t zmm6_2
uint128_t zmm7
zmm3_1, zmm6_2, zmm7 = sub_1413d8670(arg1, i_5, var_498, r15_4)
int64_t var_468

if (arg4 != 0)
    int32_t rdx_12 = data_1439b6b9c
    uint64_t rflags_2
    int32_t temp0_6
    temp0_6, rflags_2 = _bit_scan_reverse(rdx_12)
    var_468.d = temp0_6
    int32_t rcx_63
    
    if (arg4 == 0)
        rcx_63 = 0x20
    else
        rcx_63 = 0x1f - temp0_6
    
    int32_t rcx_65 = rcx_63 << 0x1a s>> 0x1f
    uint64_t rflags_3
    int32_t temp0_7
    temp0_7, rflags_3 = _bit_scan_reverse(rdx_12 - 1)
    var_488.d = temp0_7
    int32_t r9_2
    
    if (rcx_65 == 0)
        r9_2 = 0x20
    else
        r9_2 = 0x1f - temp0_7
    
    void* rax_62 = r15_4[1]
    int32_t r9_3 = var_498
    void* var_3f8 = rax_62
    
    if (rax_62 != 0)
        *(rax_62 + 8) += 1
    
    int32_t var_4e8_1
    var_4e8_1.q = arg4
    zmm3_1, zmm7 = sub_1413d4f70(arg1, i_5, &var_3f8, r9_3 - ((0x20 - r9_2) & not.d(rcx_65)) - 1, 
        zmm6_2, var_4e8_1)

int64_t var_330_1 = data_14395da18
int64_t* rdi_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t var_328_1 = data_14395d9e8
int64_t var_338_1 = data_14395da00
int64_t rax_66 = *r14_5
void* rcx_68 = &rdi_19[1]

if (rcx_68 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x10)
    rdi_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_68 = &rdi_19[1]

*(arg1 + 0x30) = rcx_68
*rdi_19 = rax_66
void*** rcx_72 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_67 = &rcx_72[5]

if (rax_67 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x30)
    rcx_72 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_67 = &rcx_72[5]

*(arg1 + 0x30) = rax_67
void**** rax_68 = *(arg1 + 8)
int32_t rdx_15 = 0
*(arg1 + 0x14) += 1
int32_t var_490 = 0
*rax_68 = rcx_72
*(arg1 + 8) = &rcx_72[1]
rcx_72[1] = 0
*rcx_72 = &data_142d549c8
rcx_72[2].d = 1
rcx_72[3] = rdi_19
rcx_72[4].d = 1
int32_t rax_70 = var_498

if (rax_70 s> 0)
    char rcx_76 = 0
    
    do
        i_2 = 0
        int32_t i_1 = 0
        int32_t r8_7 = 1 << (rax_70.b - rcx_76 - 1)
        zmm6_2 = _mm_cvtepi32_ps(zx.o(r8_7))
        
        do
            void* r14_6 = *r14_5
            int128_t zmm1_2 = data_142d3f5a0
            char var_184_1 = rdx_15.b
            int32_t var_c0_1 = 0
            int32_t var_bc
            __builtin_memset(&var_bc, 0xff, 0x14)
            int128_t var_a8_1 = zmm1_2
            int64_t var_98
            __builtin_memset(&var_98, 0, 0x1a)
            void* var_198 = r14_6
            int64_t var_190_1 = 0
            int32_t i_4 = i_1
            char var_183_1 = 1
            int64_t var_d8
            __builtin_memset(&var_d8, 0, 0x11)
            int32_t var_c4_1 = 0
            int16_t var_80_1
            var_80_1:1.b = *(r14_6 + 0x38) u> 1
            void var_180
            memset(&var_180, 0, 0xa8)
            void** rdi_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_72 = &rdi_24[1]
            
            if (rax_72 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x10)
                rdi_24 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_72 = &rdi_24[1]
            
            *(arg1 + 0x30) = rax_72
            *rdi_24 = r14_6
            void*** rcx_82 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_73 = &rcx_82[5]
            
            if (rax_73 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_82 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_73 = &rcx_82[5]
            
            *(arg1 + 0x30) = rax_73
            void**** rax_74 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_74 = rcx_82
            *(arg1 + 8) = &rcx_82[1]
            rcx_82[1] = 0
            rcx_82[3] = rdi_24
            *rcx_82 = &data_142d549c8
            rcx_82[2].d = 1
            rcx_82[4].d = 1
            int64_t rdi_29 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_76 = rdi_29 + 0x16
            
            if (rax_76 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x18)
                rdi_29 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                rax_76 = rdi_29 + 0x16
            
            *(arg1 + 0x30) = rax_76
            wchar16 const* const rcx_87 = u"FilterMips"
            wchar16 const j_2
            
            do
                j_2 = *rcx_87
                *(rcx_87 + rdi_29 - u"FilterMips") = j_2
                rcx_87 = &rcx_87[1]
            while (j_2 != 0)
            void*** rcx_90 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_77 = &rcx_90[0x27]
            
            if (rax_77 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x140)
                rcx_90 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_77 = &rcx_90[0x27]
            
            *(arg1 + 0x30) = rax_77
            void**** rax_78 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_78 = rcx_90
            *(arg1 + 8) = &rcx_90[1]
            sub_1405d11b0(rcx_90, &var_198, rdi_29)
            *(arg1 + 0x1c4) = 1
            sub_1405d19b0(arg1, &var_198)
            int32_t j_3 = 0
            int64_t var_88
            *(arg1 + 0x178) = var_88:7.b
            uint64_t rax_81 = zx.q(*(arg1 + 0xa0))
            *(arg1 + 0x179) = 0
            *(arg1 + 0x1c4) = 1
            var_30c.d = rax_81.d
            
            if (rax_81.d != 0)
                do
                    uint64_t j_5 = zx.q(j_3)
                    uint64_t r15_5 = j_5 * 3
                    int64_t* rcx_95 = *(arg1 + (r15_5 << 3) + 0xa8)
                    
                    if (rcx_95 == 0)
                        *(&var_30c:4 + j_5) = 0
                        rax_81.b = 0
                    else
                        *(&var_30c:4 + j_5) = *(rcx_95 + 0x3c)
                        *(&var_300 + (j_5 << 2)) = rcx_95[8].d
                        int64_t rax_85 = (*(*rcx_95 + 0x10))()
                        
                        if (rax_85 != 0)
                            var_2cc:1.b = 1
                        
                        if (rax_85 == 0 || *(rax_85 + 0x68) u<= 1)
                            var_2cc:1.b = 0
                        
                        rax_81 = zx.q(*(&var_30c:4 + j_5))
                    
                    if (rax_81.b != 0)
                        var_2d0.w = *(*(arg1 + (r15_5 << 3) + 0xa8) + 0x38)
                    
                    j_3 += 1
                while (j_3 u< var_30c.d)
            
            int64_t* rcx_97 = *(arg1 + 0x168)
            
            if (rcx_97 == 0)
                var_2e0_1 = 0
            else
                var_2e0_1 = *(rcx_97 + 0x3c)
                var_2e0_1 = rcx_97[8].d
                void* rax_89 = (*(*rcx_97 + 0x10))()
                
                if (rax_89 == 0 || *(rax_89 + 0x68) u<= 1)
                    var_2cc:1.b = 0
                else
                    var_2cc:1.b = 1
            
            var_2d8.b = *(arg1 + 0x170)
            var_2d8:1.b = *(arg1 + 0x171)
            var_2d8:2.b = *(arg1 + 0x172)
            var_2d8:3.b = *(arg1 + 0x173)
            var_2d8:4.d = *(arg1 + 0x174)
            
            if (var_2e0_1 != 0)
                var_2d0.w = *(*(arg1 + 0x168) + 0x38)
            
            var_2d0:2.b = *(arg1 + 0x178)
            void*** rcx_101 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            var_2d0:3.b = *(arg1 + 0x179)
            char var_2ca_2 = *(arg1 + 0x17a)
            void* rax_99 = &rcx_101[5]
            
            if (rax_99 u> *(arg1 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_101 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_99 = &rcx_101[5]
            
            *(arg1 + 0x30) = rax_99
            void**** rax_100 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_100 = rcx_101
            *(arg1 + 8) = &rcx_101[1]
            rcx_101[1] = 0
            *rcx_101 = &data_142d54998
            *(rcx_101 + 0x1c) = zmm6_2.d
            rcx_101[4].d = zmm6_2.d
            rcx_101[2] = 0
            rcx_101[3].d = 0
            *(rcx_101 + 0x24) = 0x3f800000
            void* var_3c8
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[var_460]), &var_3c8, 
                &data_143f55f90, 0)
            void* r12 = var_3c8
            void var_378
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[var_460]), &var_378, 
                &data_143ecd420, 0)
            void* var_3b8
            sub_1419a2ec0(r13_1, &var_3b8, &data_143ecd2c0, 0)
            var_368.q = data_1439c9210
            int64_t rax_105 = 0
            void* var_3c0
            
            if (r12 != 0)
                int64_t rdx_23 = sx.q(*(r12 + 0x10c))
                int64_t* rdi_33 = *(var_3c0 + 0x10)
                int64_t rax_106 = rdi_33[3]
                
                if (*(rax_106 + (rdx_23 << 3)) == 0)
                    sub_1419ccf30(rdi_33, rdx_23.d)
                    rax_106 = rdi_33[3]
                
                rax_105 = *(rax_106 + (rdx_23 << 3))
            
            void* rdi_34 = var_3b8
            var_368:8.q = rax_105
            int64_t rax_107 = 0
            void* var_3b0
            
            if (rdi_34 != 0)
                int64_t rdx_24 = sx.q(*(rdi_34 + 0x10c))
                int64_t* r14_9 = *(var_3b0 + 0x10)
                int64_t rax_108 = r14_9[3]
                
                if (*(rax_108 + (rdx_24 << 3)) == 0)
                    sub_1419ccf30(r14_9, rdx_24.d)
                    rax_108 = r14_9[3]
                
                rax_107 = *(rax_108 + (rdx_24 << 3))
            
            var_348_1.q = rax_107
            int32_t var_310_2 = 0
            sub_1419870b0(arg1, &var_368, 2)
            int64_t r14_10 = 0
            
            if (rdi_34 != 0)
                int64_t rdx_26 = sx.q(*(rdi_34 + 0x10c))
                int64_t* r14_11 = *(var_3b0 + 0x10)
                int64_t rax_109 = r14_11[3]
                
                if (*(rax_109 + (rdx_26 << 3)) == 0)
                    sub_1419ccf30(r14_11, rdx_26.d)
                    rax_109 = r14_11[3]
                
                r14_10 = *(rax_109 + (rdx_26 << 3))
            
            var_480.q = r14_10
            sub_1405eb490(arg1, &var_480, rdi_34 + 0x118, &i_2, 0)
            sub_1405eb490(arg1, &var_480, rdi_34 + 0x11e, &var_490, 0)
            void* r9_9
            int128_t zmm6_3
            r9_9, zmm6_3 = sub_1405eb490(arg1, &var_480, rdi_34 + 0x124, &var_498, 0)
            int64_t* r15_8 = data_1439b5ec0
            int64_t r13_3 = r15_4[1]
            
            if (*(rdi_34 + 0x12c) u> 0)
                uint32_t r12_1 = zx.d(*(rdi_34 + 0x12a))
                void*** rcx_119 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_111 = &rcx_119[5]
                
                if (rax_111 u> *(arg1 + 0x38))
                    r9_9, zmm6_3 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rcx_119 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_111 = &rcx_119[5]
                
                *(arg1 + 0x30) = rax_111
                void**** rax_112 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_112 = rcx_119
                *(arg1 + 8) = &rcx_119[1]
                rcx_119[1] = 0
                rcx_119[3].d = r12_1
                *rcx_119 = &data_142d5a070
                rcx_119[2] = r14_10
                rcx_119[4] = r13_3
            
            if (*(rdi_34 + 0x130) u> 0)
                uint32_t rdi_35 = zx.d(*(rdi_34 + 0x12e))
                char rax_115
                rax_115, r9_9 = (*(*r15_8 + 8))(r15_8)
                
                if (rax_115 == 0)
                    void*** rcx_126 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_116 = &rcx_126[5]
                    
                    if (rax_116 u> *(arg1 + 0x38))
                        r9_9, zmm6_3 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                        rcx_126 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_116 = &rcx_126[5]
                    
                    *(arg1 + 0x30) = rax_116
                    void**** rax_117 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_117 = rcx_126
                    *(arg1 + 8) = &rcx_126[1]
                    rcx_126[1] = 0
                    *rcx_126 = &data_142d5a080
                    rcx_126[2] = r14_10
                    rcx_126[3].d = rdi_35
                    rcx_126[4] = r15_8
            
            zmm3_1.o = zmm6_3
            int512_t zmm2_2
            zmm2_2.o = zmm7
            int32_t var_4a0_2 = 1
            void* var_3a0_1 = var_3c0
            var_488.d = r8_7
            var_488:4.d = r8_7
            var_468.d = r8_7
            var_468:4.d = r8_7
            int32_t var_4a8_2 = 0
            void* var_3a8
            void** var_4b0_2 = &var_3a8
            int32_t var_4c8_2 = zmm6_3.d
            int32_t var_4d0_2 = zmm6_3.d
            int32_t var_4d8_2 = zmm7.d
            int32_t var_4e0_2 = zmm7.d
            int32_t var_4e8_5 = zmm6_3.d
            var_3a8 = r12
            sub_1413993b0(arg1, zmm7, zmm2_2, r9_9, zmm3_1, var_4e8_5, var_4e0_2, var_4d8_2, 
                var_4d0_2, var_4c8_2, var_468, var_488, var_4b0_2, var_4a8_2, var_4a0_2)
            void*** rcx_133 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_122 = &rcx_133[2]
            
            if (rax_122 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x18)
                rcx_133 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_122 = &rcx_133[2]
            
            *(arg1 + 0x30) = rax_122
            int64_t* rax_123 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_123 = rcx_133
            *(arg1 + 8) = &rcx_133[1]
            rcx_133[1] = 0
            *rcx_133 = &data_142d549b8
            *(arg1 + 0x1c4) = 0
            *(arg1 + 0x178) = 0
            int64_t var_90
            zmm6_2 = sub_1405d1550(&var_90)
            rdx_15 = var_490
            i_1 = i_2 + 1
            r14_5 = var_478_1.q
            r13_1 = rax_59
            i_2 = i_1
        while (i_1 s< 6)
        
        rax_70 = var_498
        rdx_15 += 1
        var_490 = rdx_15
        rcx_76 = rdx_15.b
    while (rdx_15 s< rax_70)

int64_t r15_10 = r14_5[1]
void*** rdi_38 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
int64_t* r14_12 = *r14_5
int128_t var_440 = data_142d57d10
int128_t zmm0_3 = data_142d57920
void* rax_126 = &rdi_38[0xa]
int128_t var_430 = data_142d3f800

if (rax_126 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x58)
    rdi_38 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_126 = &rdi_38[0xa]

*(arg1 + 0x30) = rax_126
int64_t* rax_127 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_127 = rdi_38
*(arg1 + 8) = &rdi_38[1]
rdi_38[1] = 0
*rdi_38 = &data_142d56628
rdi_38[2].d = var_440.d
__builtin_memset(rdi_38 + 0x14, 0xff, 0x20)
*(rdi_38 + 0x34) = zmm0_3:4.d
rdi_38[7].d = zmm0_3:8.d
*(rdi_38 + 0x3c) = zmm0_3:0xc.d
rdi_38[8] = r14_12
rdi_38[9] = r15_10

if ((*(*r14_12 + 8))(r14_12) == 0)
    int64_t* rcx_140 = rdi_38[8]
    
    if ((*(*rcx_140 + 0x18))(rcx_140) == 0)
        int64_t* rcx_141 = rdi_38[8]
        
        if ((*(*rcx_141 + 0x20))(rcx_141) == 0)
            int64_t* rcx_142 = rdi_38[8]
            (*(*rcx_142 + 0x10))(rcx_142)

int64_t* rcx_143 = rdi_38[9]
int64_t result = (*(*rcx_143 + 8))(rcx_143)

if (result == 0)
    int64_t* rcx_144 = rdi_38[9]
    result = (*(*rcx_144 + 0x18))(rcx_144)
    
    if (result == 0)
        int64_t* rcx_145 = rdi_38[9]
        result = (*(*rcx_145 + 0x20))(rcx_145)
        
        if (result == 0)
            int64_t* rcx_146 = rdi_38[9]
            result = (*(*rcx_146 + 0x10))(rcx_146)

__security_check_cookie(rax_1 ^ &var_508)
return result
