// 函数: sub_14121d400
// 地址: 0x14121d400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
int64_t* rbx = arg5
int64_t* var_300 = rbx
void* var_2c8
sub_1419a2ec0(arg2[0xa2a], &var_2c8, &data_143f55f90, 0)
void* rax_3 = var_2c8
int32_t rcx_2 = data_1439b6364
int64_t rax_5 = data_143ec4fdc
int32_t r8

if (rcx_2 s>= 1)
    r8 = 8
    
    if (rcx_2 s< 8)
        r8 = rcx_2
else
    r8 = 1

int64_t rcx_3 = arg2[0x2b3]
int64_t var_338 = rax_5
int32_t var_330 = 0
var_338.d = divs.dp.d(sx.q(rax_5.d), r8)
var_338:4.d = divs.dp.d(sx.q(var_338:4.d), r8)
int64_t var_338_1 = rcx_3
var_338_1.d = divs.dp.d(sx.q(rcx_3.d), r8)
var_338_1:4.d = divs.dp.d(sx.q(var_338_1:4.d), r8)
int64_t rsi = var_338_1
uint64_t r9_1 = zx.q(divu.dp.d(0:(arg2[0x2b4].d - rcx_3.d), r8))
int32_t rax_21 = *(arg2 + 0x15a4) - (rcx_3 u>> 0x20).d
int64_t var_320 = rsi
int32_t rcx_5 = data_1439b6368
uint64_t result = zx.q(divu.dp.d(0:rax_21, r8))
int32_t rdx_5 = 0

if (rcx_5 s>= 0)
    rdx_5 = rcx_5

var_338_1.d = rdx_5

if (rdx_5 != 0)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    int128_t zmm8
    zmm8.d = float.s(result)
    int64_t var_328
    var_328.d = var_320:4.d
    int128_t zmm9
    zmm9.d = float.s(r9_1)
    bool cond:4_1
    
    do
        int128_t zmm1 = data_142d3f5a0
        int64_t rcx_6 = *(*rbx + 8)
        int64_t var_1e8 = rcx_6
        int32_t var_110_1 = 0
        int32_t var_10c
        __builtin_memset(&var_10c, 0xff, 0x14)
        int128_t var_f8_1 = zmm1
        int64_t var_e8
        __builtin_memset(&var_e8, 0, 0x1a)
        int64_t var_1e0_1 = 0
        int32_t var_1d8_1 = 0xffffffff
        int16_t var_1d4_1 = 0x500
        int64_t var_128
        __builtin_memset(&var_128, 0, 0x11)
        int32_t var_114_1 = 0
        int16_t var_d0_1
        var_d0_1:1.b = *(rcx_6 + 0x38) u> 1
        void var_1d0
        memset(&var_1d0, 0, 0xa8)
        int32_t i_5 = 0
        int64_t* rax_25 = &var_1e8
        int64_t rcx_8 = 0
        uint64_t r15_1 = 0
        
        while (*rax_25 != 0)
            i_5 += 1
            rcx_8 += 1
            rax_25 = &rax_25[3]
            
            if (rcx_8 s>= 8)
                break
        
        uint128_t var_c8
        
        if (i_5 != 0)
            int128_t* rdx_6 = &var_c8
            uint64_t i_4 = zx.q(i_5)
            int64_t* rax_26 = &var_1e8
            uint64_t i
            
            do
                int64_t rcx_9 = *rax_26
                
                if (rcx_9 != 0)
                    r15_1 = zx.q(r15_1.d + 1)
                    *rdx_6 = rcx_9
                    rdx_6 += 8
                
                rax_26 = &rax_26[3]
                i = i_4
                i_4 -= 1
            while (i != 1)
        
        int64_t r13_1 = var_128
        
        if (r13_1 != 0 && ((var_114_1.b & 0xf) == 2 || (var_114_1.b & 0xf0) == 0x20))
            void*** rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_29 = &rcx_12[4]
            
            if (rax_29 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x28)
                rcx_12 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_29 = &rcx_12[4]
            
            *(arg1 + 0x30) = rax_29
            int64_t* rax_30 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_30 = rcx_12
            *(arg1 + 8) = &rcx_12[1]
            rcx_12[1] = 0
            *rcx_12 = &data_142f115e8
            rcx_12[2].d = var_114_1
            rcx_12[3] = r13_1
        
        uint32_t rdx_7 = (r15_1 << 3).d
        int64_t r13_2 = sx.q(rdx_7)
        int64_t* rbx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_32 = rbx_4 + r13_2
        
        if (rax_32 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, rdx_7 + 8)
            rbx_4 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_32 = rbx_4 + r13_2
        
        *(arg1 + 0x30) = rax_32
        int64_t i_3 = sx.q(r15_1.d)
        
        if (r15_1.d s> 0)
            int64_t* rcx_17 = rbx_4
            int64_t i_1
            
            do
                *rcx_17 = *(rcx_17 + &var_c8 - rbx_4)
                rcx_17 = &rcx_17[1]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        void*** rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_34 = &rcx_20[5]
        
        if (rax_34 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_34 = &rcx_20[5]
        
        *(arg1 + 0x30) = rax_34
        void**** rax_35 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_35 = rcx_20
        *(arg1 + 8) = &rcx_20[1]
        rcx_20[1] = 0
        rcx_20[3] = rbx_4
        *rcx_20 = &data_142d549c8
        rcx_20[2].d = r15_1.d
        rcx_20[4].d = 1
        int64_t rbx_9 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_37 = rbx_9 + 0x1e
        
        if (rax_37 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x20)
            rbx_9 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
            rax_37 = rbx_9 + 0x1e
        
        *(arg1 + 0x30) = rax_37
        wchar16 const* const rcx_25 = u"LightShaftPass"
        wchar16 const i_2
        
        do
            i_2 = *rcx_25
            *(rbx_9 - u"LightShaftPass" + rcx_25) = i_2
            rcx_25 = &rcx_25[1]
        while (i_2 != 0)
        void*** rcx_28 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_38 = &rcx_28[0x27]
        
        if (rax_38 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x140)
            rcx_28 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_38 = &rcx_28[0x27]
        
        *(arg1 + 0x30) = rax_38
        void**** rax_39 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_39 = rcx_28
        *(arg1 + 8) = &rcx_28[1]
        sub_1405d11b0(rcx_28, &var_1e8, rbx_9)
        *(arg1 + 0x1c4) = 1
        sub_1405d19b0(arg1, &var_1e8)
        int64_t var_d8
        *(arg1 + 0x178) = var_d8:7.b
        *(arg1 + 0x179) = 0
        *(arg1 + 0x1c4) = 1
        void*** rcx_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        zmm6 = _mm_cvtepi32_ps(zx.o(var_338:4.d))
        void* rax_42 = &rcx_35[5]
        zmm7 = _mm_cvtepi32_ps(zx.o(var_338.d))
        
        if (rax_42 u> *(arg1 + 0x38))
            zmm6 = sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_35 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_42 = &rcx_35[5]
        
        *(arg1 + 0x30) = rax_42
        void**** rax_43 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        int32_t r15_2 = 0
        *rax_43 = rcx_35
        *(arg1 + 8) = &rcx_35[1]
        rcx_35[1] = 0
        *rcx_35 = &data_142d54998
        *(rcx_35 + 0x1c) = zmm7.d
        rcx_35[4].d = zmm6.d
        rcx_35[2] = 0
        rcx_35[3].d = 0
        *(rcx_35 + 0x24) = 0x3f800000
        uint64_t rax_45 = zx.q(*(arg1 + 0xa0))
        int64_t var_238
        __builtin_memset(&var_238, 0, 0x2c)
        int64_t var_208_1 = 0
        int32_t var_200_1 = 0
        int16_t var_1fc_1 = 0
        char var_1fa_1 = 0
        int16_t var_1f8_1 = 0
        int32_t var_23c_1 = rax_45.d
        int128_t var_298
        __builtin_memset(&var_298, 0, 0x30)
        int128_t var_250_1 = zx.o(0)
        
        if (rax_45.d != 0)
            do
                uint64_t rbx_12 = zx.q(r15_2)
                uint64_t r13_3 = rbx_12 * 3
                int64_t* rcx_39 = *(arg1 + (r13_3 << 3) + 0xa8)
                
                if (rcx_39 == 0)
                    *(&var_238 + rbx_12) = 0
                    rax_45.b = 0
                else
                    *(&var_238 + rbx_12) = *(rcx_39 + 0x3c)
                    int64_t var_230
                    *(&var_230 + (rbx_12 << 2)) = rcx_39[8].d
                    int64_t rax_49 = (*(*rcx_39 + 0x10))()
                    
                    if (rax_49 != 0)
                        var_1fc_1:1.b = 1
                    
                    if (rax_49 == 0 || *(rax_49 + 0x68) u<= 1)
                        var_1fc_1:1.b = 0
                    
                    rax_45 = zx.q(*(&var_238 + rbx_12))
                
                if (rax_45.b != 0)
                    var_200_1.w = *(*(arg1 + (r13_3 << 3) + 0xa8) + 0x38)
                
                r15_2 += 1
            while (r15_2 u< var_23c_1)
        
        int64_t* rcx_41 = *(arg1 + 0x168)
        int32_t var_210_1
        
        if (rcx_41 == 0)
            var_210_1 = 0
        else
            var_210_1 = *(rcx_41 + 0x3c)
            var_210_1 = rcx_41[8].d
            void* rax_53 = (*(*rcx_41 + 0x10))()
            
            if (rax_53 == 0 || *(rax_53 + 0x68) u<= 1)
                var_1fc_1:1.b = 0
            else
                var_1fc_1:1.b = 1
        
        var_208_1.b = *(arg1 + 0x170)
        var_208_1:1.b = *(arg1 + 0x171)
        var_208_1:2.b = *(arg1 + 0x172)
        var_208_1:3.b = *(arg1 + 0x173)
        var_208_1:4.d = *(arg1 + 0x174)
        
        if (var_210_1 != 0)
            var_200_1.w = *(*(arg1 + 0x168) + 0x38)
        
        int64_t* r13_4 = arg2
        var_200_1:2.b = *(arg1 + 0x178)
        var_200_1:3.b = *(arg1 + 0x179)
        char var_1fa_2 = *(arg1 + 0x17a)
        int64_t var_268_1 = data_14395da00
        int64_t var_260_1 = data_14395da18
        int64_t var_258_1 = data_14395d9e8
        void* var_2b8
        sub_1419a2ec0(r13_4[0xa2a], &var_2b8, &data_143e83510, 0)
        var_298.q = data_1439c9210
        int64_t rax_67 = 0
        void* var_2c0
        
        if (rax_3 != 0)
            int64_t rdx_14 = sx.q(*(rax_3 + 0x10c))
            int64_t* rbx_14 = *(var_2c0 + 0x10)
            int64_t rax_68 = rbx_14[3]
            
            if (*(rax_68 + (rdx_14 << 3)) == 0)
                sub_1419ccf30(rbx_14, rdx_14.d)
                rax_68 = rbx_14[3]
            
            rax_67 = *(rax_68 + (rdx_14 << 3))
        
        void* r15_4 = var_2b8
        var_298:8.q = rax_67
        int64_t rax_69 = 0
        
        if (r15_4 != 0)
            int64_t rdx_15 = sx.q(*(r15_4 + 0x10c))
            void* var_2b0
            int64_t* rbx_15 = *(var_2b0 + 0x10)
            int64_t rax_71 = rbx_15[3]
            
            if (*(rax_71 + (rdx_15 << 3)) == 0)
                sub_1419ccf30(rbx_15, rdx_15.d)
                rax_71 = rbx_15[3]
            
            rax_69 = *(rax_71 + (rdx_15 << 3))
            r13_4 = arg2
        
        int128_t var_278_1
        var_278_1.q = rax_69
        int32_t var_240_1 = 0
        sub_1419870b0(arg1, &var_298, 2)
        sub_141080ac0(r15_4, arg1, *(arg1 + 0x1a0), r13_4[2])
        int32_t rax_72 = arg4.d
        int32_t r9
        
        if (var_330 == 0)
            rax_72 = r9
        int32_t var_380_1 = rax_72
        int512_t zmm2_1
        int512_t zmm3_1
        int32_t zmm8_1
        int128_t zmm9_1
        zmm2_1, zmm3_1, zmm8_1, zmm9_1 =
            sub_141215990(r15_4 + 0x11e, arg1, *(arg1 + 0x1a0), arg3, r13_4)
        int32_t zmm1_2 = data_1439b636c
        int64_t rax_73 = *(arg1 + 0x1a0)
        uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(data_1439b6370))
        int32_t var_2dc_1 = 0x3f800000
        var_320 = rax_73
        int32_t var_2e4_1 = zmm1_2
        int32_t var_2e8 = zmm0_1.d
        int64_t* var_388_1
        var_388_1.d = 0
        int32_t var_2e0_1 = _mm_cvtepi32_ps(zx.o(var_330)).d
        void* r9_5 = sub_1405d0e10(arg1, &var_320, r15_4 + 0x118, &var_2e8, var_388_1.d)
        zmm3_1.o = zmm9_1
        zmm2_1.o = zx.o(var_328.d)
        int32_t var_340_1 = 1
        int32_t var_348_1 = 1
        void* var_2a8 = rax_3
        void* var_2a0_1 = var_2c0
        void** var_350_1 = &var_2a8
        int32_t var_370_1 = zmm9_1.d
        zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
        uint128_t zmm1_3 = _mm_cvtepi32_ps(zx.o(rsi.d))
        var_388_1.d = zmm8_1
        sub_1413993b0(arg1, zmm1_3, zmm2_1, r9_5, zmm3_1, var_388_1.d, zmm1_3.d, zmm2_1.d, 
            var_370_1, zmm8_1, var_338, var_338, var_350_1, var_348_1, var_340_1)
        void*** rcx_54 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_76 = &rcx_54[2]
        
        if (rax_76 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x18)
            rcx_54 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_76 = &rcx_54[2]
        
        *(arg1 + 0x30) = rax_76
        *(arg1 + 0x14) += 1
        int64_t* rax_77 = *(arg1 + 8)
        uint128_t zmm1_4 = data_142d3f800
        var_c8 = data_142d57d10
        *rax_77 = rcx_54
        uint128_t zmm0_2 = data_142d57920
        *(arg1 + 8) = &rcx_54[1]
        rcx_54[1] = 0
        *rcx_54 = &data_142d549b8
        *(arg1 + 0x1c4) = 0
        *(arg1 + 0x178) = 0
        void* rax_80 = *var_300
        void*** rbx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        uint128_t var_b8_1 = zmm1_4
        int64_t r13_6 = *(rax_80 + 0x10)
        int64_t* r15_5 = *(rax_80 + 8)
        void* rax_81 = &rbx_19[0xa]
        
        if (rax_81 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x58)
            rbx_19 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_81 = &rbx_19[0xa]
        
        *(arg1 + 0x30) = rax_81
        int64_t* rax_82 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_82 = rbx_19
        *(arg1 + 8) = &rbx_19[1]
        rbx_19[1] = 0
        *rbx_19 = &data_142d56628
        rbx_19[2].d = var_c8.d
        *(rbx_19 + 0x14) = var_c8:4.d
        rbx_19[3].d = var_c8:8.d
        *(rbx_19 + 0x1c) = var_c8:0xc.d
        __builtin_memset(&rbx_19[4], 0xff, 0x14)
        *(rbx_19 + 0x34) = zmm0_2:4.d
        rbx_19[7].d = zmm0_2:8.d
        *(rbx_19 + 0x3c) = zmm0_2:0xc.d
        rbx_19[8] = r15_5
        rbx_19[9] = r13_6
        
        if ((*(*r15_5 + 8))(r15_5) == 0)
            int64_t* rcx_60 = rbx_19[8]
            
            if ((*(*rcx_60 + 0x18))(rcx_60) == 0)
                int64_t* rcx_61 = rbx_19[8]
                
                if ((*(*rcx_61 + 0x20))(rcx_61) == 0)
                    int64_t* rcx_62 = rbx_19[8]
                    (*(*rcx_62 + 0x10))(rcx_62)
        
        int64_t* rcx_63 = rbx_19[9]
        
        if ((*(*rcx_63 + 8))(rcx_63) == 0)
            int64_t* rcx_64 = rbx_19[9]
            
            if ((*(*rcx_64 + 0x18))(rcx_64) == 0)
                int64_t* rcx_65 = rbx_19[9]
                
                if ((*(*rcx_65 + 0x20))(rcx_65) == 0)
                    int64_t* rcx_66 = rbx_19[9]
                    (*(*rcx_66 + 0x10))(rcx_66)
        
        rbx = var_300
        
        if (arg4 != rbx)
            zmm1_4 = zx.o(*arg4)
            *arg4 = *rbx
            *rbx = zmm1_4.q
        
        int64_t var_e0
        result = sub_1405d1550(&var_e0)
        cond:4_1 = var_330 + 1 u< var_338_1.d
        var_330 += 1
    while (cond:4_1)

__security_check_cookie(rax_1 ^ &var_3a8)
return result
