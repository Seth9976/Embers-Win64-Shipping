// 函数: sub_141269520
// 地址: 0x141269520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_928
int64_t rax_1 = __security_cookie ^ &var_928
int64_t rbx = sx.q(arg2)
uint64_t rflags
int32_t temp0
temp0, rflags = _bit_scan_reverse(arg3)
int64_t* var_880 = arg4
int32_t var_848 = temp0
int32_t var_890 = rbx.d
int32_t rcx

if (rax_1 == 0)
    rcx = 0x20
else
    rcx = 0x1f - temp0

int32_t rcx_2 = rcx << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_1
temp0_1, rflags_1 = _bit_scan_reverse(arg3 - 1)
int32_t var_840 = temp0_1
int32_t r8

if (rcx_2 == 0)
    r8 = 0x20
else
    r8 = 0x1f - temp0_1

void* rax_4 = data_143e8ed68
int32_t var_8b0 = ((0x20 - r8) & not.d(rcx_2)) + 1
int32_t result_1 = *(rax_4 + 4)
uint128_t zmm7 = zx.o(0)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(arg3))
int64_t* rax_6 = data_143ec4d80 + 8
int64_t* var_850 = rax_6
int32_t var_8a8
int128_t zmm1
int512_t zmm3

for (int32_t i = 0; i u< 6; i += 1)
    void* rax_7 = *rax_6
    zmm1 = data_142d3f5a0
    int32_t var_2a0_1 = 0
    int32_t var_29c
    __builtin_memset(&var_29c, 0xff, 0x14)
    int128_t var_288_1 = zmm1
    int64_t var_278
    __builtin_memset(&var_278, 0, 0x1a)
    void* var_378 = rax_7
    int64_t var_370_1 = 0
    int32_t var_368_1 = 0xffffffff
    int16_t var_364_1 = 0x500
    int64_t var_2b8
    __builtin_memset(&var_2b8, 0, 0x11)
    int32_t var_2a4_1 = 0
    int16_t var_260_1
    var_260_1:1.b = *(rax_7 + 0x38) u> 1
    void var_360
    memset(&var_360, 0, 0xa8)
    int32_t j_10 = 0
    int32_t i_8 = i
    int64_t rcx_6 = 0
    var_364_1.b = 0
    void** rax_8 = &var_378
    uint64_t r14_1 = 0
    
    while (*rax_8 != 0)
        j_10 += 1
        rcx_6 += 1
        rax_8 = &rax_8[3]
        
        if (rcx_6 s>= 8)
            break
    
    void var_138
    
    if (j_10 != 0)
        void* rdx_3 = &var_138
        uint64_t j_8 = zx.q(j_10)
        void** rax_9 = &var_378
        uint64_t j
        
        do
            void* rcx_7 = *rax_9
            
            if (rcx_7 != 0)
                r14_1 = zx.q(r14_1.d + 1)
                *rdx_3 = rcx_7
                rdx_3 += 8
            
            rax_9 = &rax_9[3]
            j = j_8
            j_8 -= 1
        while (j != 1)
    
    int64_t r15_1 = var_2b8
    
    if (r15_1 != 0 && ((var_2a4_1.b & 0xf) == 2 || (var_2a4_1.b & 0xf0) == 0x20))
        void*** rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_12 = &rcx_10[4]
        
        if (rax_12 u> *(arg1 + 0x38))
            zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x28)
            rcx_10 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_12 = &rcx_10[4]
        
        *(arg1 + 0x30) = rax_12
        int64_t* rax_13 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_13 = rcx_10
        *(arg1 + 8) = &rcx_10[1]
        rcx_10[1] = 0
        *rcx_10 = &data_142f115e8
        rcx_10[2].d = var_2a4_1
        rcx_10[3] = r15_1
    
    uint32_t rdx_4 = (r14_1 << 3).d
    int64_t r15_2 = sx.q(rdx_4)
    int64_t* rbx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = rbx_4 + r15_2
    
    if (rax_15 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, rdx_4 + 8)
        rbx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = rbx_4 + r15_2
    
    *(arg1 + 0x30) = rax_15
    int64_t j_6 = sx.q(r14_1.d)
    
    if (r14_1.d s> 0)
        int64_t* rcx_15 = rbx_4
        int64_t j_1
        
        do
            *rcx_15 = *(&var_138 - rbx_4 + rcx_15)
            rcx_15 = &rcx_15[1]
            j_1 = j_6
            j_6 -= 1
        while (j_1 != 1)
    
    void*** rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_17 = &rcx_18[5]
    
    if (rax_17 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_18[5]
    
    *(arg1 + 0x30) = rax_17
    void**** rax_18 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_18 = rcx_18
    *(arg1 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    rcx_18[3] = rbx_4
    *rcx_18 = &data_142d549c8
    rcx_18[2].d = r14_1.d
    rcx_18[4].d = 1
    int64_t rbx_9 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_20 = rbx_9 + 0x38
    
    if (rax_20 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x3a)
        rbx_9 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_20 = rbx_9 + 0x38
    
    *(arg1 + 0x30) = rax_20
    wchar16 const* const rcx_23 = u"FilterReflectionEnvironment"
    wchar16 const j_2
    
    do
        j_2 = *rcx_23
        *(rcx_23 + rbx_9 - u"FilterReflectionEnvironment") = j_2
        rcx_23 = &rcx_23[1]
    while (j_2 != 0)
    void*** rcx_26 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_21 = &rcx_26[0x27]
    
    if (rax_21 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x140)
        rcx_26 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_21 = &rcx_26[0x27]
    
    *(arg1 + 0x30) = rax_21
    void**** rax_22 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_22 = rcx_26
    *(arg1 + 8) = &rcx_26[1]
    sub_1405d11b0(rcx_26, &var_378, rbx_9)
    *(arg1 + 0x1c4) = 1
    sub_1405d19b0(arg1, &var_378)
    int64_t var_268
    *(arg1 + 0x178) = var_268:7.b
    uint64_t rax_25 = zx.q(*(arg1 + 0xa0))
    int32_t r14_2 = 0
    *(arg1 + 0x179) = 0
    *(arg1 + 0x1c4) = 1
    int64_t var_638
    __builtin_memset(&var_638, 0, 0x2c)
    int64_t var_608_1 = 0
    int32_t var_600_1 = 0
    int16_t var_5fc_1 = 0
    char var_5fa_1 = 0
    int16_t var_5f8_1 = 0
    int32_t var_63c_1 = rax_25.d
    int128_t var_698
    __builtin_memset(&var_698, 0, 0x30)
    int128_t var_650_1 = zx.o(0)
    
    if (rax_25.d != 0)
        do
            uint64_t rbx_12 = zx.q(r14_2)
            uint64_t r15_3 = rbx_12 * 3
            int64_t* rcx_31 = *(arg1 + (r15_3 << 3) + 0xa8)
            
            if (rcx_31 == 0)
                *(&var_638 + rbx_12) = 0
                rax_25.b = 0
            else
                *(&var_638 + rbx_12) = *(rcx_31 + 0x3c)
                int64_t var_630
                *(&var_630 + (rbx_12 << 2)) = rcx_31[8].d
                int64_t rax_29 = (*(*rcx_31 + 0x10))()
                
                if (rax_29 != 0)
                    var_5fc_1:1.b = 1
                
                if (rax_29 == 0 || *(rax_29 + 0x68) u<= 1)
                    var_5fc_1:1.b = 0
                
                rax_25 = zx.q(*(&var_638 + rbx_12))
            
            if (rax_25.b != 0)
                var_600_1.w = *(*(arg1 + (r15_3 << 3) + 0xa8) + 0x38)
            
            r14_2 += 1
        while (r14_2 u< var_63c_1)
    
    int64_t* rcx_33 = *(arg1 + 0x168)
    int32_t var_610_1
    
    if (rcx_33 == 0)
        var_610_1 = 0
    else
        var_610_1 = *(rcx_33 + 0x3c)
        var_610_1 = rcx_33[8].d
        void* rax_33 = (*(*rcx_33 + 0x10))()
        
        if (rax_33 == 0 || *(rax_33 + 0x68) u<= 1)
            var_5fc_1:1.b = 0
        else
            var_5fc_1:1.b = 1
    
    var_608_1.b = *(arg1 + 0x170)
    var_608_1:1.b = *(arg1 + 0x171)
    var_608_1:2.b = *(arg1 + 0x172)
    var_608_1:3.b = *(arg1 + 0x173)
    var_608_1:4.d = *(arg1 + 0x174)
    
    if (var_610_1 != 0)
        var_600_1.w = *(*(arg1 + 0x168) + 0x38)
    
    var_600_1:2.b = *(arg1 + 0x178)
    void*** rcx_37 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    var_600_1:3.b = *(arg1 + 0x179)
    char var_5fa_2 = *(arg1 + 0x17a)
    int64_t var_660_1 = data_14395da18
    int64_t var_658_1 = data_14395d9e8
    int64_t var_668_1 = data_1439b66e0
    void* rax_46 = &rcx_37[5]
    var_8a8 = arg3
    int32_t var_8a4_1 = arg3
    
    if (rax_46 u> *(arg1 + 0x38))
        zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_37 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_46 = &rcx_37[5]
    
    *(arg1 + 0x30) = rax_46
    int64_t* rax_47 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_47 = rcx_37
    *(arg1 + 8) = &rcx_37[1]
    rcx_37[1] = 0
    *rcx_37 = &data_142d54998
    *(rcx_37 + 0x1c) = zmm6.d
    rcx_37[4].d = zmm6.d
    rcx_37[2] = 0
    rcx_37[3].d = 0
    *(rcx_37 + 0x24) = 0x3f800000
    void* var_738
    sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[rbx]), &var_738, &data_143f55f90, 0)
    void* var_6e8
    sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[rbx]), &var_6e8, &data_143f12e80, 0)
    void* rcx_45 = var_738
    var_698.q = data_1439c9210
    int64_t rax_52 = 0
    
    if (rcx_45 != 0)
        int64_t rdx_12 = sx.q(*(rcx_45 + 0x10c))
        void* var_730
        int64_t* rbx_14 = *(var_730 + 0x10)
        int64_t rax_54 = rbx_14[3]
        
        if (*(rax_54 + (rdx_12 << 3)) == 0)
            sub_1419ccf30(rbx_14, rdx_12.d)
            rax_54 = rbx_14[3]
        
        rax_52 = *(rax_54 + (rdx_12 << 3))
    
    void* r14_4 = var_6e8
    var_698:8.q = rax_52
    int64_t rax_55 = 0
    
    if (r14_4 != 0)
        int64_t rdx_13 = sx.q(*(r14_4 + 0x10c))
        void* var_6e0
        int64_t* rbx_15 = *(var_6e0 + 0x10)
        int64_t rax_57 = rbx_15[3]
        
        if (*(rax_57 + (rdx_13 << 3)) == 0)
            sub_1419ccf30(rbx_15, rdx_13.d)
            rax_57 = rbx_15[3]
        
        rax_55 = *(rax_57 + (rdx_13 << 3))
    
    int128_t var_678_1
    var_678_1.q = rax_55
    int32_t var_640_1 = 0
    sub_1419870b0(arg1, &var_698, 2)
    int128_t var_6b8 = data_14399f5e0
    void* r9_1
    int128_t zmm6_1
    r9_1, zmm6_1 = sub_1419ab500(r14_4, arg1, &var_6b8, 1)
    int32_t var_8c0_1 = 1
    zmm3.o = zmm6_1
    int32_t var_8c8_1 = 0
    int512_t zmm2_1
    zmm2_1.o = zx.o(0)
    uint128_t var_6a8
    int128_t* var_8d0_1 = &var_6a8
    int64_t rax_58 = var_8a8.q
    var_6a8 = var_738.o
    int32_t var_884_1 = arg3
    int512_t zmm1_2
    zmm1_2, zmm3 = sub_1413993b0(arg1, zx.o(0), zmm2_1, r9_1, zmm3, zmm6_1.d, 0, 0, 
        _mm_cvtepi32_ps(zx.o(arg3)).d, _mm_cvtepi32_ps(zx.o(arg3)).d, arg3.q, rax_58, var_8d0_1, 
        var_8c8_1, var_8c0_1)
    void*** rcx_53 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_60 = &rcx_53[2]
    
    if (rax_60 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x18)
        rcx_53 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_60 = &rcx_53[2]
    
    *(arg1 + 0x30) = rax_60
    *(arg1 + 0x14) += 1
    int64_t* r14_5 = var_850
    zmm1_2.o = data_142d3f800
    int32_t var_75c_1 = 0
    **(arg1 + 8) = rcx_53
    *(arg1 + 8) = &rcx_53[1]
    rcx_53[1] = 0
    *rcx_53 = &data_142d549b8
    *(arg1 + 0x1c4) = 0
    *(arg1 + 0x178) = 0
    int64_t r15_5 = r14_5[1]
    int64_t* r14_6 = *r14_5
    void*** rbx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int128_t var_784
    __builtin_memset(&var_784, 0xff, 0x20)
    int64_t var_764_1 = 0
    void* rax_63 = &rbx_18[0xa]
    
    if (rax_63 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x58)
        rbx_18 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_63 = &rbx_18[0xa]
    
    *(arg1 + 0x30) = rax_63
    int64_t* rax_64 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_64 = rbx_18
    *(arg1 + 8) = &rbx_18[1]
    rbx_18[1] = 0
    *rbx_18 = &data_142d56628
    rbx_18[2].d = i
    *(rbx_18 + 0x14) = var_784.d
    rbx_18[3].d = var_784:4.d
    *(rbx_18 + 0x1c) = var_784:8.d
    rbx_18[4].d = var_784:0xc.d
    int128_t var_774
    *(rbx_18 + 0x24) = var_774.d
    rbx_18[5].d = var_774:4.d
    *(rbx_18 + 0x2c) = var_774:8.d
    rbx_18[6].d = var_774:0xc.d
    *(rbx_18 + 0x34) = var_764_1.d
    rbx_18[7].d = var_764_1:4.d
    *(rbx_18 + 0x3c) = var_75c_1
    rbx_18[8] = r14_6
    rbx_18[9] = r15_5
    
    if ((*(*r14_6 + 8))(r14_6) == 0)
        int64_t* rcx_59 = rbx_18[8]
        
        if ((*(*rcx_59 + 0x18))(rcx_59) == 0)
            int64_t* rcx_60 = rbx_18[8]
            
            if ((*(*rcx_60 + 0x20))(rcx_60) == 0)
                int64_t* rcx_61 = rbx_18[8]
                (*(*rcx_61 + 0x10))(rcx_61)
    
    int64_t* rcx_62 = rbx_18[9]
    
    if ((*(*rcx_62 + 8))(rcx_62) == 0)
        int64_t* rcx_63 = rbx_18[9]
        
        if ((*(*rcx_63 + 0x18))(rcx_63) == 0)
            int64_t* rcx_64 = rbx_18[9]
            
            if ((*(*rcx_64 + 0x20))(rcx_64) == 0)
                int64_t* rcx_65 = rbx_18[9]
                (*(*rcx_65 + 0x10))(rcx_65)
    
    int64_t var_270
    zmm6 = sub_1405d1550(&var_270)
    rax_6 = var_850

int32_t r14_7 = -1
void* rbx_21 = nullptr
int32_t var_878 = 0xffffffff
void* var_860 = nullptr
int64_t* rax_93 = std::_Get_future_error_what((*U"1111")[rbx])
int32_t rcx_69 = var_8b0
int32_t r13_1 = 1
int32_t var_888_1
var_888_1.q = &data_143ec4c60
int64_t* r15_6 = &data_143ec4c60
int32_t var_8a0 = 1
int32_t var_8b8
int32_t i_6
int32_t i_11
int64_t* var_858
void* var_828
int64_t* var_758

if (rcx_69 s> 1)
    do
        int32_t i_18 = 0
        
        if (r13_1 - 1 s>= 0)
            i_18 = r13_1 - 1
        
        i_11 = i_18
        int32_t rdx_16 = 1 << (rcx_69.b - r13_1.b - 1)
        var_8b8 = rdx_16
        int32_t rcx_73 = r13_1 & 0x80000001
        
        if (rcx_73 s< 0)
            rcx_73 = ((rcx_73 - 1) | 0xfffffffe) + 1
        
        int32_t i_14 = 0
        i_6 = 0
        zmm6 = _mm_cvtepi32_ps(zx.o(rdx_16))
        int64_t* r8_5 = r15_6[sx.q(rcx_73) + 0x24] + 8
        var_8a8.q = r8_5
        var_758 = r15_6[sx.q(1 - rcx_73) + 0x24] + 0x10
        
        while (true)
            void* rax_100 = *r8_5
            zmm1 = data_142d3f5a0
            int32_t var_180_1 = 0
            int32_t var_17c
            __builtin_memset(&var_17c, 0xff, 0x14)
            int128_t var_168_1 = zmm1
            int64_t var_158
            __builtin_memset(&var_158, 0, 0x1a)
            void* var_258 = rax_100
            int64_t var_250_1 = 0
            int32_t var_248_1 = 0xffffffff
            int16_t var_244_1 = 0x500
            int64_t var_198
            __builtin_memset(&var_198, 0, 0x11)
            int32_t var_184_1 = 0
            int16_t var_140_1
            var_140_1:1.b = *(rax_100 + 0x38) u> 1
            void var_240
            memset(&var_240, 0, 0xa8)
            var_244_1.b = r13_1.b
            void** rax_101 = &var_258
            int32_t i_17 = i_14
            uint64_t r15_7 = 0
            int32_t i_13 = 0
            int64_t rcx_77 = 0
            
            while (*rax_101 != 0)
                i_13 += 1
                rcx_77 += 1
                rax_101 = &rax_101[3]
                
                if (rcx_77 s>= 8)
                    break
            
            void var_f8
            
            if (i_13 != 0)
                void* rdx_17 = &var_f8
                uint64_t i_10 = zx.q(i_13)
                void** rcx_78 = &var_258
                uint64_t i_1
                
                do
                    void* rax_102 = *rcx_78
                    
                    if (rax_102 != 0)
                        r15_7 = zx.q(r15_7.d + 1)
                        *rdx_17 = rax_102
                        rdx_17 += 8
                    
                    rcx_78 = &rcx_78[3]
                    i_1 = i_10
                    i_10 -= 1
                while (i_1 != 1)
            
            int64_t r14_8 = var_198
            
            if (r14_8 != 0 && ((var_184_1.b & 0xf) == 2 || (var_184_1.b & 0xf0) == 0x20))
                void*** rcx_81 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_105 = &rcx_81[4]
                
                if (rax_105 u> *(arg1 + 0x38))
                    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x28)
                    rcx_81 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_105 = &rcx_81[4]
                
                *(arg1 + 0x30) = rax_105
                int64_t* rax_106 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_106 = rcx_81
                *(arg1 + 8) = &rcx_81[1]
                rcx_81[1] = 0
                *rcx_81 = &data_142f115e8
                rcx_81[2].d = var_184_1
                rcx_81[3] = r14_8
            
            uint32_t rdx_18 = (r15_7 << 3).d
            int64_t r14_9 = sx.q(rdx_18)
            int64_t* rbx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_108 = r14_9 + rbx_25
            
            if (rax_108 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, rdx_18 + 8)
                rbx_25 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_108 = r14_9 + rbx_25
            
            *(arg1 + 0x30) = rax_108
            int64_t i_9 = sx.q(r15_7.d)
            
            if (r15_7.d s> 0)
                int64_t* rcx_86 = rbx_25
                int64_t i_2
                
                do
                    *rcx_86 = *(rcx_86 + &var_f8 - rbx_25)
                    rcx_86 = &rcx_86[1]
                    i_2 = i_9
                    i_9 -= 1
                while (i_2 != 1)
            
            void*** rcx_89 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_110 = &rcx_89[5]
            
            if (rax_110 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_89 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_110 = &rcx_89[5]
            
            *(arg1 + 0x30) = rax_110
            void**** rax_111 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_111 = rcx_89
            *(arg1 + 8) = &rcx_89[1]
            rcx_89[1] = 0
            rcx_89[3] = rbx_25
            *rcx_89 = &data_142d549c8
            rcx_89[2].d = r15_7.d
            rcx_89[4].d = 1
            int64_t rbx_30 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_113 = rbx_30 + 0x24
            
            if (rax_113 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x26)
                rbx_30 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                rax_113 = rbx_30 + 0x24
            
            *(arg1 + 0x30) = rax_113
            wchar16 const* const rcx_94 = u"DownsampleCubemap"
            wchar16 const i_3
            
            do
                i_3 = *rcx_94
                *(rbx_30 - u"DownsampleCubemap" + rcx_94) = i_3
                rcx_94 = &rcx_94[1]
            while (i_3 != 0)
            void*** rcx_97 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_114 = &rcx_97[0x27]
            
            if (rax_114 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x140)
                rcx_97 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_114 = &rcx_97[0x27]
            
            *(arg1 + 0x30) = rax_114
            void**** rax_115 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_115 = rcx_97
            *(arg1 + 8) = &rcx_97[1]
            sub_1405d11b0(rcx_97, &var_258, rbx_30)
            *(arg1 + 0x1c4) = 1
            sub_1405d19b0(arg1, &var_258)
            int64_t var_148
            *(arg1 + 0x178) = var_148:7.b
            uint64_t rax_118 = zx.q(*(arg1 + 0xa0))
            int32_t r14_10 = 0
            *(arg1 + 0x179) = 0
            *(arg1 + 0x1c4) = 1
            int64_t var_590
            __builtin_memset(&var_590, 0, 0x2c)
            int64_t var_560_1 = 0
            int32_t var_558_1 = 0
            int16_t var_554_1 = 0
            char var_552_1 = 0
            int16_t var_550_1 = 0
            int32_t var_594_1 = rax_118.d
            int128_t var_5f0
            __builtin_memset(&var_5f0, 0, 0x30)
            int128_t var_5a8_1 = zx.o(0)
            
            if (rax_118.d != 0)
                do
                    uint64_t rbx_33 = zx.q(r14_10)
                    uint64_t r15_8 = rbx_33 * 3
                    int64_t* rcx_102 = *(arg1 + (r15_8 << 3) + 0xa8)
                    
                    if (rcx_102 == 0)
                        *(&var_590 + rbx_33) = 0
                        rax_118.b = 0
                    else
                        *(&var_590 + rbx_33) = *(rcx_102 + 0x3c)
                        int64_t var_588
                        *(&var_588 + (rbx_33 << 2)) = rcx_102[8].d
                        int64_t rax_122 = (*(*rcx_102 + 0x10))()
                        
                        if (rax_122 != 0)
                            var_554_1:1.b = 1
                        
                        if (rax_122 == 0 || *(rax_122 + 0x68) u<= 1)
                            var_554_1:1.b = 0
                        
                        rax_118 = zx.q(*(&var_590 + rbx_33))
                    
                    if (rax_118.b != 0)
                        var_558_1.w = *(*(arg1 + (r15_8 << 3) + 0xa8) + 0x38)
                    
                    r14_10 += 1
                while (r14_10 u< var_594_1)
            
            int64_t* rcx_104 = *(arg1 + 0x168)
            int32_t var_568_1
            
            if (rcx_104 == 0)
                var_568_1 = 0
            else
                var_568_1 = *(rcx_104 + 0x3c)
                var_568_1 = rcx_104[8].d
                void* rax_126 = (*(*rcx_104 + 0x10))()
                
                if (rax_126 == 0 || *(rax_126 + 0x68) u<= 1)
                    var_554_1:1.b = 0
                else
                    var_554_1:1.b = 1
            
            var_560_1.b = *(arg1 + 0x170)
            var_560_1:1.b = *(arg1 + 0x171)
            var_560_1:2.b = *(arg1 + 0x172)
            var_560_1:3.b = *(arg1 + 0x173)
            var_560_1:4.d = *(arg1 + 0x174)
            
            if (var_568_1 != 0)
                var_558_1.w = *(*(arg1 + 0x168) + 0x38)
            
            var_558_1:2.b = *(arg1 + 0x178)
            void*** rcx_108 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            var_558_1:3.b = *(arg1 + 0x179)
            char var_552_2 = *(arg1 + 0x17a)
            int64_t var_5b8_1 = data_14395da18
            int64_t var_5b0_1 = data_14395d9e8
            int64_t var_5c0_1 = data_14395da00
            void* rax_139 = &rcx_108[5]
            
            if (rax_139 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_108 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_139 = &rcx_108[5]
            
            *(arg1 + 0x30) = rax_139
            int64_t* rax_140 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_140 = rcx_108
            *(arg1 + 8) = &rcx_108[1]
            rcx_108[1] = 0
            *rcx_108 = &data_142d54998
            *(rcx_108 + 0x1c) = zmm6.d
            rcx_108[4].d = zmm6.d
            rcx_108[2] = 0
            rcx_108[3].d = 0
            *(rcx_108 + 0x24) = 0x3f800000
            void* var_6d8
            sub_1419a2ec0(rax_93, &var_6d8, &data_143f55f90, 0)
            void* rbx_34 = var_6d8
            var_828 = rbx_34
            int64_t* var_6d0
            var_858 = var_6d0
            void* var_6c8
            sub_1419a2ec0(rax_93, &var_6c8, &data_143e8ed70, 0)
            var_5f0.q = data_1439c9210
            int64_t rax_143 = 0
            
            if (rbx_34 != 0)
                int64_t rdx_26 = sx.q(*(rbx_34 + 0x10c))
                int64_t* rbx_35 = var_6d0[2]
                int64_t rax_144 = rbx_35[3]
                
                if (*(rax_144 + (rdx_26 << 3)) == 0)
                    sub_1419ccf30(rbx_35, rdx_26.d)
                    rax_144 = rbx_35[3]
                
                rax_143 = *(rax_144 + (rdx_26 << 3))
            
            void* rbx_36 = var_6c8
            var_5f0:8.q = rax_143
            int64_t rax_145 = 0
            
            if (rbx_36 != 0)
                int64_t rdx_27 = sx.q(*(rbx_36 + 0x10c))
                void* var_6c0
                int64_t* r14_13 = *(var_6c0 + 0x10)
                int64_t rax_147 = r14_13[3]
                
                if (*(rax_147 + (rdx_27 << 3)) == 0)
                    sub_1419ccf30(r14_13, rdx_27.d)
                    rax_147 = r14_13[3]
                
                rax_145 = *(rax_147 + (rdx_27 << 3))
            
            int128_t var_5d0_1
            var_5d0_1.q = rax_145
            int32_t var_598_1 = 0
            sub_1419870b0(arg1, &var_5f0, 2)
            var_850.d = i_11
            int64_t var_748 = *(arg1 + 0x1a0)
            int32_t i_16 = i_14
            sub_1405eb490(arg1, &var_748, rbx_36 + 0x118, &i_16, 0)
            int64_t var_740 = *(arg1 + 0x1a0)
            void* r9_4
            int128_t zmm6_2
            r9_4, zmm6_2 = sub_1405eb490(arg1, &var_740, rbx_36 + 0x11e, &var_850, 0)
            int64_t* r15_10 = data_14395f4d0
            int64_t r13_2 = *(arg1 + 0x1a0)
            int64_t r12 = *var_758
            
            if (*(rbx_36 + 0x126) u> 0)
                uint32_t r14_14 = zx.d(*(rbx_36 + 0x124))
                void*** rcx_121 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_152 = &rcx_121[5]
                
                if (rax_152 u> *(arg1 + 0x38))
                    r9_4, zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rcx_121 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_152 = &rcx_121[5]
                
                *(arg1 + 0x30) = rax_152
                void**** rax_153 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_153 = rcx_121
                *(arg1 + 8) = &rcx_121[1]
                rcx_121[1] = 0
                *rcx_121 = &data_142d5a070
                rcx_121[2] = r13_2
                rcx_121[3].d = r14_14
                rcx_121[4] = r12
            
            if (*(rbx_36 + 0x12a) u> 0)
                uint32_t rbx_37 = zx.d(*(rbx_36 + 0x128))
                char rax_156
                rax_156, r9_4 = (*(*r15_10 + 8))(r15_10)
                
                if (rax_156 == 0)
                    void*** rcx_128 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_157 = &rcx_128[5]
                    
                    if (rax_157 u> *(arg1 + 0x38))
                        r9_4, zmm6_2 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                        rcx_128 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_157 = &rcx_128[5]
                    
                    *(arg1 + 0x30) = rax_157
                    void**** rax_158 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_158 = rcx_128
                    *(arg1 + 8) = &rcx_128[1]
                    rcx_128[1] = 0
                    *rcx_128 = &data_142d5a080
                    rcx_128[2] = r13_2
                    rcx_128[3].d = rbx_37
                    rcx_128[4] = r15_10
            
            int32_t var_8c0_2 = 1
            zmm3.o = zmm6_2
            int32_t var_8c8_2 = 0
            int512_t zmm2_2
            zmm2_2.o = zx.o(0)
            void* var_728 = var_828
            int64_t* var_720_1 = var_858
            int32_t rax_162 = var_8b8
            int32_t var_870_1 = rax_162
            int32_t var_868_1 = rax_162
            int512_t zmm1_4
            zmm1_4, zmm3 = sub_1413993b0(arg1, zx.o(0), zmm2_2, r9_4, zmm3, zmm6_2.d, 0, 0, 
                zmm6_2.d, zmm6_2.d, rax_162.q, rax_162.q, &var_728, var_8c8_2, var_8c0_2)
            void*** rcx_135 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_165 = &rcx_135[2]
            
            if (rax_165 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x18)
                rcx_135 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_165 = &rcx_135[2]
            
            *(arg1 + 0x30) = rax_165
            *(arg1 + 0x14) += 1
            int32_t i_15 = i_6
            zmm1_4.o = data_142d3f800
            r13_1 = var_8a0
            **(arg1 + 8) = rcx_135
            *(arg1 + 8) = &rcx_135[1]
            rcx_135[1] = 0
            *rcx_135 = &data_142d549b8
            int64_t* rax_168 = var_8a8.q
            *(arg1 + 0x1c4) = 0
            *(arg1 + 0x178) = 0
            int64_t var_7f8_1 = 0
            int64_t r15_11 = rax_168[1]
            int64_t* r14_15 = *rax_168
            void*** rbx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int128_t var_81c
            __builtin_memset(&var_81c, 0xff, 0x20)
            void* rax_169 = &rbx_40[0xa]
            
            if (rax_169 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x58)
                rbx_40 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_169 = &rbx_40[0xa]
            
            *(arg1 + 0x30) = rax_169
            void** rax_170 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_170 = rbx_40
            *(arg1 + 8) = &rbx_40[1]
            rbx_40[1] = 0
            *rbx_40 = &data_142d56628
            rbx_40[2].d = i_15
            *(rbx_40 + 0x14) = var_81c.d
            rbx_40[3].d = var_81c:4.d
            *(rbx_40 + 0x1c) = var_81c:8.d
            rbx_40[4].d = var_81c:0xc.d
            int128_t var_80c
            *(rbx_40 + 0x24) = var_80c.d
            rbx_40[5].d = var_80c:4.d
            *(rbx_40 + 0x2c) = var_80c:8.d
            rbx_40[6].d = var_80c:0xc.d
            *(rbx_40 + 0x34) = r13_1
            rbx_40[7].d = var_7f8_1.d
            *(rbx_40 + 0x3c) = var_7f8_1:4.d
            rbx_40[8] = r14_15
            rbx_40[9] = r15_11
            
            if ((*(*r14_15 + 8))(r14_15) == 0)
                int64_t* rcx_141 = rbx_40[8]
                
                if ((*(*rcx_141 + 0x18))(rcx_141) == 0)
                    int64_t* rcx_142 = rbx_40[8]
                    
                    if ((*(*rcx_142 + 0x20))(rcx_142) == 0)
                        int64_t* rcx_143 = rbx_40[8]
                        (*(*rcx_143 + 0x10))(rcx_143)
            
            int64_t* rcx_144 = rbx_40[9]
            
            if ((*(*rcx_144 + 8))(rcx_144) == 0)
                int64_t* rcx_145 = rbx_40[9]
                
                if ((*(*rcx_145 + 0x18))(rcx_145) == 0)
                    int64_t* rcx_146 = rbx_40[9]
                    
                    if ((*(*rcx_146 + 0x20))(rcx_146) == 0)
                        int64_t* rcx_147 = rbx_40[9]
                        (*(*rcx_147 + 0x10))(rcx_147)
            
            int64_t var_150
            zmm6 = sub_1405d1550(&var_150)
            i_14 = i_15 + 1
            i_6 = i_14
            
            if (i_14 s>= 6)
                break
            
            r8_5 = var_8a8.q
        
        if (var_8b8 != data_1439b6b9c)
            rbx_21 = var_860
            r14_7 = var_878
        else
            rbx_21 = var_8a8.q
            r14_7 = r13_1
            var_860 = rbx_21
            var_878 = r13_1
        
        rcx_69 = var_8b0
        r13_1 += 1
        r15_6 = var_888_1.q
        var_8a0 = r13_1
    while (r13_1 s< rcx_69)

int64_t* r8_10 = var_880

if (r8_10 != 0)
    int64_t* rax_198 = *(rbx_21 + 8)
    var_880 = rax_198
    
    if (rax_198 != 0)
        rax_198[1].d += 1
    
    int32_t var_908_1
    var_908_1.q = r8_10
    zmm3, zmm7 = sub_1413d4f70(arg1, var_890, &var_880, r14_7, zmm6, var_908_1)
    rcx_69 = var_8b0

int32_t result = result_1

if (result == 1)
    int32_t result_2 = result
    
    if (rcx_69 s> result)
        do
            int32_t rcx_151 = result_2 & 0x80000001
            
            if (rcx_151 s< 0)
                rcx_151 = ((rcx_151 - 1) | 0xfffffffe) + 1
            
            int32_t i_4 = 0
            int64_t* rdx_34 = r15_6[sx.q(1 - rcx_151) + 0x24] + 0x10
            var_880 = rdx_34
            int64_t* rax_203 = r15_6[sx.q(rcx_151) + 0x24] + 0x10
            var_858 = rax_203
            
            do
                int64_t* r15_12 = *rax_203
                int64_t r12_1 = *rdx_34
                void*** rbx_45 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                int128_t var_7ec
                __builtin_memset(&var_7ec, 0xff, 0x20)
                void* rax_204 = &rbx_45[0xa]
                int64_t var_7c8_1 = 0
                
                if (rax_204 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x58)
                    rbx_45 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_204 = &rbx_45[0xa]
                
                *(arg1 + 0x30) = rax_204
                int64_t* rax_205 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_205 = rbx_45
                *(arg1 + 8) = &rbx_45[1]
                rbx_45[1] = 0
                *rbx_45 = &data_142d56628
                rbx_45[2].d = i_4
                *(rbx_45 + 0x14) = var_7ec.d
                rbx_45[3].d = var_7ec:4.d
                *(rbx_45 + 0x1c) = var_7ec:8.d
                rbx_45[4].d = var_7ec:0xc.d
                int128_t var_7dc
                *(rbx_45 + 0x24) = var_7dc.d
                rbx_45[5].d = var_7dc:4.d
                *(rbx_45 + 0x2c) = var_7dc:8.d
                rbx_45[6].d = var_7dc:0xc.d
                *(rbx_45 + 0x34) = result_2
                rbx_45[7].d = var_7c8_1.d
                *(rbx_45 + 0x3c) = var_7c8_1:4.d
                rbx_45[8] = r15_12
                rbx_45[9] = r12_1
                
                if ((*(*r15_12 + 8))(r15_12) == 0)
                    int64_t* rcx_156 = rbx_45[8]
                    
                    if ((*(*rcx_156 + 0x18))(rcx_156) == 0)
                        int64_t* rcx_157 = rbx_45[8]
                        
                        if ((*(*rcx_157 + 0x20))(rcx_157) == 0)
                            int64_t* rcx_158 = rbx_45[8]
                            (*(*rcx_158 + 0x10))(rcx_158)
                
                int64_t* rcx_159 = rbx_45[9]
                
                if ((*(*rcx_159 + 8))(rcx_159) == 0)
                    int64_t* rcx_160 = rbx_45[9]
                    
                    if ((*(*rcx_160 + 0x18))(rcx_160) == 0)
                        int64_t* rcx_161 = rbx_45[9]
                        
                        if ((*(*rcx_161 + 0x20))(rcx_161) == 0)
                            int64_t* rcx_162 = rbx_45[9]
                            (*(*rcx_162 + 0x10))(rcx_162)
                
                rdx_34 = var_880
                i_4 += 1
                rax_203 = var_858
            while (i_4 s< 6)
            
            rcx_69 = var_8b0
            result_2 += 2
            r15_6 = var_888_1.q
        while (result_2 s< rcx_69)
        
        result = result_1

var_8b8 = 0
int32_t r14_16 = 0

if (rcx_69 s> 0)
    do
        int32_t rdx_35 = r14_16
        
        if (result == 1)
            rdx_35 = 0
        
        int32_t rdx_38 = rdx_35 & 0x80000001
        
        if (rdx_38 s< 0)
            rdx_38 = ((rdx_38 - 1) | 0xfffffffe) + 1
        
        int64_t r8_12 = var_888_1.q
        int32_t i_5 = 0
        i_6 = 0
        int64_t* r12_3 = *(r8_12 + (sx.q(1 - rdx_38) << 3) + 0x120) + 8
        var_880 = r12_3
        void* rax_236 = *(r8_12 + (sx.q(rdx_38) << 3) + 0x120)
        int32_t rax_237 = 1 << (rcx_69.b - r14_16.b - 1)
        zmm6 = _mm_cvtepi32_ps(zx.o(rax_237))
        
        do
            void* rax_238 = *r12_3
            zmm1 = data_142d3f5a0
            int32_t var_3c0_1 = 0
            int32_t var_3bc
            __builtin_memset(&var_3bc, 0xff, 0x14)
            int128_t var_3a8_1 = zmm1
            int64_t var_398
            __builtin_memset(&var_398, 0, 0x1a)
            void* var_498 = rax_238
            int64_t var_490_1 = 0
            int32_t var_488_1 = 0xffffffff
            int16_t var_484_1 = 0x500
            int64_t var_3d8
            __builtin_memset(&var_3d8, 0, 0x11)
            int32_t var_3c4_1 = 0
            int16_t var_380_1
            var_380_1:1.b = *(rax_238 + 0x38) u> 1
            void var_480
            memset(&var_480, 0, 0xa8)
            var_484_1.b = r14_16.b
            void** rax_239 = &var_498
            uint64_t r14_17 = 0
            int32_t i_7 = i_5
            int32_t j_11 = 0
            int64_t rcx_166 = 0
            
            while (*rax_239 != 0)
                j_11 += 1
                rcx_166 += 1
                rax_239 = &rax_239[3]
                
                if (rcx_166 s>= 8)
                    break
            
            void var_b8
            
            if (j_11 != 0)
                void* rdx_39 = &var_b8
                uint64_t j_9 = zx.q(j_11)
                void** rax_240 = &var_498
                uint64_t j_3
                
                do
                    void* rcx_167 = *rax_240
                    
                    if (rcx_167 != 0)
                        r14_17 = zx.q(r14_17.d + 1)
                        *rdx_39 = rcx_167
                        rdx_39 += 8
                    
                    rax_240 = &rax_240[3]
                    j_3 = j_9
                    j_9 -= 1
                while (j_3 != 1)
            
            int64_t r15_13 = var_3d8
            
            if (r15_13 != 0 && ((var_3c4_1.b & 0xf) == 2 || (var_3c4_1.b & 0xf0) == 0x20))
                void*** rcx_170 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_243 = &rcx_170[4]
                
                if (rax_243 u> *(arg1 + 0x38))
                    zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x28)
                    rcx_170 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_243 = &rcx_170[4]
                
                *(arg1 + 0x30) = rax_243
                int64_t* rax_244 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_244 = rcx_170
                *(arg1 + 8) = &rcx_170[1]
                rcx_170[1] = 0
                *rcx_170 = &data_142f115e8
                rcx_170[2].d = var_3c4_1
                rcx_170[3] = r15_13
            
            uint32_t rdx_40 = (r14_17 << 3).d
            int64_t r15_14 = sx.q(rdx_40)
            int64_t* rbx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_246 = rbx_51 + r15_14
            
            if (rax_246 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, rdx_40 + 8)
                rbx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_246 = rbx_51 + r15_14
            
            *(arg1 + 0x30) = rax_246
            int64_t j_7 = sx.q(r14_17.d)
            
            if (r14_17.d s> 0)
                int64_t* rcx_175 = rbx_51
                int64_t j_4
                
                do
                    *rcx_175 = *(&var_b8 - rbx_51 + rcx_175)
                    rcx_175 = &rcx_175[1]
                    j_4 = j_7
                    j_7 -= 1
                while (j_4 != 1)
            
            void*** rcx_178 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_248 = &rcx_178[5]
            
            if (rax_248 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_178 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_248 = &rcx_178[5]
            
            *(arg1 + 0x30) = rax_248
            void**** rax_249 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_249 = rcx_178
            *(arg1 + 8) = &rcx_178[1]
            rcx_178[1] = 0
            rcx_178[3] = rbx_51
            *rcx_178 = &data_142d549c8
            rcx_178[2].d = r14_17.d
            rcx_178[4].d = 1
            int64_t rbx_56 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_251 = rbx_56 + 0x1c
            
            if (rax_251 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x1e)
                rbx_56 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                rax_251 = rbx_56 + 0x1c
            
            *(arg1 + 0x30) = rax_251
            wchar16 const* const rcx_183 = u"FilterCubeMip"
            wchar16 const j_5
            
            do
                j_5 = *rcx_183
                *(rbx_56 - u"FilterCubeMip" + rcx_183) = j_5
                rcx_183 = &rcx_183[1]
            while (j_5 != 0)
            void*** rcx_186 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_252 = &rcx_186[0x27]
            
            if (rax_252 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x140)
                rcx_186 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_252 = &rcx_186[0x27]
            
            *(arg1 + 0x30) = rax_252
            void**** rax_253 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_253 = rcx_186
            *(arg1 + 8) = &rcx_186[1]
            sub_1405d11b0(rcx_186, &var_498, rbx_56)
            *(arg1 + 0x1c4) = 1
            sub_1405d19b0(arg1, &var_498)
            int64_t var_388
            *(arg1 + 0x178) = var_388:7.b
            uint64_t rax_256 = zx.q(*(arg1 + 0xa0))
            int32_t r14_18 = 0
            *(arg1 + 0x179) = 0
            *(arg1 + 0x1c4) = 1
            int64_t var_4e8
            __builtin_memset(&var_4e8, 0, 0x2c)
            int64_t var_4b8_1 = 0
            int32_t var_4b0_1 = 0
            int16_t var_4ac_1 = 0
            char var_4aa_1 = 0
            int16_t var_4a8_1 = 0
            int32_t var_4ec_1 = rax_256.d
            int128_t var_548
            __builtin_memset(&var_548, 0, 0x30)
            int128_t var_500_1 = zx.o(0)
            
            if (rax_256.d != 0)
                do
                    uint64_t rbx_59 = zx.q(r14_18)
                    uint64_t r15_15 = rbx_59 * 3
                    int64_t* rcx_191 = *(arg1 + (r15_15 << 3) + 0xa8)
                    
                    if (rcx_191 == 0)
                        *(&var_4e8 + rbx_59) = 0
                        rax_256.b = 0
                    else
                        *(&var_4e8 + rbx_59) = *(rcx_191 + 0x3c)
                        int64_t var_4e0
                        *(&var_4e0 + (rbx_59 << 2)) = rcx_191[8].d
                        int64_t rax_260 = (*(*rcx_191 + 0x10))()
                        
                        if (rax_260 != 0)
                            var_4ac_1:1.b = 1
                        
                        if (rax_260 == 0 || *(rax_260 + 0x68) u<= 1)
                            var_4ac_1:1.b = 0
                        
                        rax_256 = zx.q(*(&var_4e8 + rbx_59))
                    
                    if (rax_256.b != 0)
                        var_4b0_1.w = *(*(arg1 + (r15_15 << 3) + 0xa8) + 0x38)
                    
                    r14_18 += 1
                while (r14_18 u< var_4ec_1)
            
            int64_t* rcx_193 = *(arg1 + 0x168)
            int32_t var_4c0_1
            
            if (rcx_193 == 0)
                var_4c0_1 = 0
            else
                var_4c0_1 = *(rcx_193 + 0x3c)
                var_4c0_1 = rcx_193[8].d
                void* rax_264 = (*(*rcx_193 + 0x10))()
                
                if (rax_264 == 0 || *(rax_264 + 0x68) u<= 1)
                    var_4ac_1:1.b = 0
                else
                    var_4ac_1:1.b = 1
            
            var_4b8_1.b = *(arg1 + 0x170)
            var_4b8_1:1.b = *(arg1 + 0x171)
            var_4b8_1:2.b = *(arg1 + 0x172)
            var_4b8_1:3.b = *(arg1 + 0x173)
            var_4b8_1:4.d = *(arg1 + 0x174)
            
            if (var_4c0_1 != 0)
                var_4b0_1.w = *(*(arg1 + 0x168) + 0x38)
            
            var_4b0_1:2.b = *(arg1 + 0x178)
            void*** rcx_197 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            var_4b0_1:3.b = *(arg1 + 0x179)
            char var_4aa_2 = *(arg1 + 0x17a)
            int64_t var_510_1 = data_14395da18
            int64_t var_508_1 = data_14395d9e8
            int64_t var_518_1 = data_14395da00
            void* rax_277 = &rcx_197[5]
            
            if (rax_277 u> *(arg1 + 0x38))
                zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_197 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_277 = &rcx_197[5]
            
            *(arg1 + 0x30) = rax_277
            void**** rax_278 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_278 = rcx_197
            *(arg1 + 8) = &rcx_197[1]
            rcx_197[1] = 0
            *rcx_197 = &data_142d54998
            *(rcx_197 + 0x1c) = zmm6.d
            rcx_197[4].d = zmm6.d
            rcx_197[2] = 0
            rcx_197[3].d = 0
            *(rcx_197 + 0x24) = 0x3f800000
            sub_1419a2ec0(std::_Get_future_error_what((*1111")[rbx]), &var_758, &data_143f55f90, 0)
            int64_t* r15_16 = var_758
            void* var_750
            void* r12_4 = var_750
            var_840.q = r15_16
            var_848.q = r12_4
            void* var_718
            sub_1419a2ec0(rax_93, &var_718, &data_143ecd2c0, 0)
            void* var_708
            sub_1419a2ec0(rax_93, &var_708, &data_143e8ed70, 0)
            void* r13_3 = var_708
            int64_t rbx_60 = 0
            void* r14_19 = var_718
            void* rax_282
            int64_t rdx_49
            
            if (result_1 != 1)
                if (r13_3 != 0)
                    rdx_49 = sx.q(*(r13_3 + 0x10c))
                    void* var_700
                    rax_282 = var_700
                label_14126b474:
                    int64_t* r15_17 = *(rax_282 + 0x10)
                    int64_t rbx_61 = r15_17[3]
                    
                    if (*(rbx_61 + (rdx_49 << 3)) == 0)
                        sub_1419ccf30(r15_17, rdx_49.d)
                        rbx_61 = r15_17[3]
                    
                    rbx_60 = *(rbx_61 + (rdx_49 << 3))
                    r12_4 = var_848.q
                    r15_16 = var_840.q
            else if (r14_19 != 0)
                rdx_49 = sx.q(*(r14_19 + 0x10c))
                void* var_710
                rax_282 = var_710
                goto label_14126b474
            var_548.q = data_1439c9210
            int64_t rax_284 = 0
            var_8a8.q = rbx_60
            
            if (r15_16 != 0)
                rax_284 = sub_1410970c0(*(r12_4 + 0x10), *(r15_16 + 0x10c))
            
            var_548:8.q = rax_284
            int128_t var_528_1
            var_528_1.q = rbx_60
            int32_t var_4f0_1 = 0
            sub_1419870b0(arg1, &var_548, 2)
            int32_t var_908_4 = 0
            void* r9_9
            int128_t zmm6_3
            
            if (result_1 != 1)
                var_8a0 = var_8b8
                i_11 = i_6
                var_858 = *(arg1 + 0x1a0)
                sub_1405eb490(arg1, &var_858, r13_3 + 0x118, &i_11, var_908_4)
                var_828 = *(arg1 + 0x1a0)
                r9_9, zmm6_3 = sub_1405eb490(arg1, &var_828, r13_3 + 0x11e, &var_8a0, 0)
                int64_t* rbx_62 = data_14395f4d0
                int64_t r12_7 = *(arg1 + 0x1a0)
                int64_t r15_19 = *(rax_236 + 0x10)
                
                if (*(r13_3 + 0x126) u> 0)
                    uint32_t r14_21 = zx.d(*(r13_3 + 0x124))
                    void*** rcx_227 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_299 = &rcx_227[5]
                    
                    if (rax_299 u> *(arg1 + 0x38))
                        r9_9, zmm6_3 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                        rcx_227 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_299 = &rcx_227[5]
                    
                    *(arg1 + 0x30) = rax_299
                    void**** rax_300 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_300 = rcx_227
                    *(arg1 + 8) = &rcx_227[1]
                    rcx_227[1] = 0
                    *rcx_227 = &data_142d5a070
                    rcx_227[2] = r12_7
                    rcx_227[3].d = r14_21
                    rcx_227[4] = r15_19
                
                if (*(r13_3 + 0x12a) u> 0)
                    uint32_t r14_22 = zx.d(*(r13_3 + 0x128))
                    char rax_303
                    rax_303, r9_9 = (*(*rbx_62 + 8))(rbx_62)
                    
                    if (rax_303 == 0)
                        void*** rcx_234 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_304 = &rcx_234[5]
                        
                        if (rax_304 u> *(arg1 + 0x38))
                            r9_9, zmm6_3 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                            rcx_234 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_304 = &rcx_234[5]
                        
                        *(arg1 + 0x30) = rax_304
                        void**** rax_305 = *(arg1 + 8)
                        *(arg1 + 0x14) += 1
                        *rax_305 = rcx_234
                        *(arg1 + 8) = &rcx_234[1]
                        rcx_234[1] = 0
                        *rcx_234 = &data_142d5a080
                        rcx_234[2] = r12_7
                        rcx_234[3].d = r14_22
                        rcx_234[4] = rbx_62
            else
                sub_1405eb490(arg1, &var_8a8, r14_19 + 0x118, &i_6, var_908_4)
                sub_1405eb490(arg1, &var_8a8, r14_19 + 0x11e, &var_8b8, 0)
                r9_9, zmm6_3 = sub_1405eb490(arg1, &var_8a8, r14_19 + 0x124, &var_8b0, 0)
                int64_t* r15_18 = data_1439b5ec0
                int64_t r13_4 = *(rax_236 + 0x10)
                
                if (*(r14_19 + 0x12c) u> 0)
                    uint32_t r12_6 = zx.d(*(r14_19 + 0x12a))
                    void*** rcx_213 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_286 = &rcx_213[5]
                    
                    if (rax_286 u> *(arg1 + 0x38))
                        r9_9, zmm6_3 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                        rcx_213 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_286 = &rcx_213[5]
                    
                    *(arg1 + 0x30) = rax_286
                    void**** rax_287 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_287 = rcx_213
                    *(arg1 + 8) = &rcx_213[1]
                    rcx_213[1] = 0
                    *rcx_213 = &data_142d5a070
                    rcx_213[2] = rbx_60
                    rcx_213[3].d = r12_6
                    rcx_213[4] = r13_4
                
                if (*(r14_19 + 0x130) u> 0)
                    uint32_t r14_20 = zx.d(*(r14_19 + 0x12e))
                    char rax_290
                    rax_290, r9_9 = (*(*r15_18 + 8))(r15_18)
                    
                    if (rax_290 == 0)
                        void*** rcx_220 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_291 = &rcx_220[5]
                        
                        if (rax_291 u> *(arg1 + 0x38))
                            r9_9, zmm6_3 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                            rcx_220 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_291 = &rcx_220[5]
                        
                        *(arg1 + 0x30) = rax_291
                        void**** rax_292 = *(arg1 + 8)
                        *(arg1 + 0x14) += 1
                        *rax_292 = rcx_220
                        *(arg1 + 8) = &rcx_220[1]
                        rcx_220[1] = 0
                        *rcx_220 = &data_142d5a080
                        rcx_220[2] = rbx_60
                        rcx_220[3].d = r14_20
                        rcx_220[4] = r15_18
            
            zmm3.o = zmm6_3
            int512_t zmm2_3
            zmm2_3.o = zmm7
            int32_t var_8c0_3 = 1
            int32_t var_8c8_3 = 0
            int64_t var_6f8 = var_840.q
            int64_t var_6f0_1 = var_848.q
            int32_t var_868_2 = rax_237
            int32_t var_870_2 = rax_237
            int512_t zmm1_6
            zmm1_6, zmm3 = sub_1413993b0(arg1, zmm7, zmm2_3, r9_9, zmm3, zmm6_3.d, zmm7.d, zmm7.d, 
                zmm6_3.d, zmm6_3.d, rax_237.q, rax_237.q, &var_6f8, var_8c8_3, var_8c0_3)
            void*** rcx_241 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_311 = &rcx_241[2]
            
            if (rax_311 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x18)
                rcx_241 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_311 = &rcx_241[2]
            
            *(arg1 + 0x30) = rax_311
            *(arg1 + 0x14) += 1
            int64_t* rax_312 = *(arg1 + 8)
            r12_3 = var_880
            zmm1_6.o = data_142d3f800
            int128_t var_7bc
            __builtin_memset(&var_7bc, 0xff, 0x20)
            *rax_312 = rcx_241
            *(arg1 + 8) = &rcx_241[1]
            rcx_241[1] = 0
            *rcx_241 = &data_142d549b8
            int32_t i_12 = i_6
            *(arg1 + 0x1c4) = 0
            *(arg1 + 0x178) = 0
            int64_t r15_20 = r12_3[1]
            int64_t* r14_23 = *r12_3
            void*** rbx_65 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            int32_t rax_314 = var_8b8
            void* rax_315 = &rbx_65[0xa]
            int64_t var_798_1 = 0
            
            if (rax_315 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x58)
                rbx_65 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_315 = &rbx_65[0xa]
            
            *(arg1 + 0x30) = rax_315
            void**** rax_316 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_316 = rbx_65
            *(arg1 + 8) = &rbx_65[1]
            rbx_65[1] = 0
            *rbx_65 = &data_142d56628
            rbx_65[2].d = i_12
            *(rbx_65 + 0x14) = var_7bc.d
            rbx_65[3].d = var_7bc:4.d
            *(rbx_65 + 0x1c) = var_7bc:8.d
            rbx_65[4].d = var_7bc:0xc.d
            int128_t var_7ac
            *(rbx_65 + 0x24) = var_7ac.d
            rbx_65[5].d = var_7ac:4.d
            *(rbx_65 + 0x2c) = var_7ac:8.d
            rbx_65[6].d = var_7ac:0xc.d
            *(rbx_65 + 0x34) = rax_314
            rbx_65[7].d = var_798_1.d
            *(rbx_65 + 0x3c) = var_798_1:4.d
            rbx_65[8] = r14_23
            rbx_65[9] = r15_20
            
            if ((*(*r14_23 + 8))(r14_23) == 0)
                int64_t* rcx_247 = rbx_65[8]
                
                if ((*(*rcx_247 + 0x18))(rcx_247) == 0)
                    int64_t* rcx_248 = rbx_65[8]
                    
                    if ((*(*rcx_248 + 0x20))(rcx_248) == 0)
                        int64_t* rcx_249 = rbx_65[8]
                        (*(*rcx_249 + 0x10))(rcx_249)
            
            int64_t* rcx_250 = rbx_65[9]
            
            if ((*(*rcx_250 + 8))(rcx_250) == 0)
                int64_t* rcx_251 = rbx_65[9]
                
                if ((*(*rcx_251 + 0x18))(rcx_251) == 0)
                    int64_t* rcx_252 = rbx_65[9]
                    
                    if ((*(*rcx_252 + 0x20))(rcx_252) == 0)
                        int64_t* rcx_253 = rbx_65[9]
                        (*(*rcx_253 + 0x10))(rcx_253)
            
            int64_t var_390
            zmm6 = sub_1405d1550(&var_390)
            r14_16 = var_8b8
            i_5 = i_6 + 1
            i_6 = i_5
        while (i_5 s< 6)
        
        rcx_69 = var_8b0
        r14_16 += 1
        result = result_1
        var_8b8 = r14_16
    while (r14_16 s< rcx_69)

__security_check_cookie(rax_1 ^ &var_928)
return result
