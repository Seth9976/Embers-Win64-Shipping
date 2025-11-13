// 函数: sub_1410afa70
// 地址: 0x1410afa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
int64_t* rdi = arg5
void* r15 = arg3
void* rsi = arg1
uint64_t rbx
rbx.b = 1
int64_t* var_3d8 = rdi

if (*(arg1 + 0xa8) s> 0)
    uint64_t i_10 = zx.q(*(arg1 + 0xa8))
    int64_t rdx_1 = *(arg1 + 0xa0) + 0x15a8
    uint64_t i
    
    do
        char rcx = 0
        bool cond:1_1 = *rdx_1 != 0
        rdx_1 += 0x5240
        
        if (cond:1_1)
            rcx = rbx.b
        
        rbx = zx.q(rcx)
        i = i_10
        i_10 -= 1
    while (i != 1)

int64_t rdx_2 = sx.q(*(rsi + 0x3b0))
int32_t rcx_1 = (*U"1111")[rdx_2]
int32_t var_3b0 = rcx_1
int64_t result

if (data_1439b5204 != 0 && data_1439b5200 != 0 && rdx_2.d s>= 3)
    result = sub_1410959f0(rcx_1)

if (data_1439b5204 == 0 || data_1439b5200 == 0 || rdx_2.d s< 3 || result.b == 0 || rdi[1].d s<= 0
        || (*(rsi + 0x38) & 0x1000000) == 0 || rbx.b == 0)
    result.b = 0
else
    bool c_1 = data_143e2d2e4 != 0
    int64_t* var_410 = nullptr
    char var_4a0_1 = 0
    char var_4a8_1 = 1
    int64_t rcx_2 = data_143ec4fdc
    char var_4b0_1 = 1
    int16_t var_240_1 = 0
    int128_t var_278 = data_143f02308
    int32_t var_264_1 = divs.dp.d(sx.q(rcx_2.d), sbb.d(rbx.d, rbx.d, c_1) + 2)
    int32_t var_268_1 = data_143f02318
    int32_t var_25c_1 = 0
    int32_t var_260_1 = divs.dp.d(sx.q((rcx_2 u>> 0x20).d), sbb.d(rbx.d, rbx.d, c_1) + 2)
    int32_t var_254_1 = 0x10000
    int32_t var_258_1 = 1
    int16_t var_250_1 = 1
    wchar16 const* const var_238_1 = u"UnknownTexture2D"
    int64_t var_24c_1 = 0xf
    int32_t var_244_1 = 0x10001
    int16_t var_230_1 = 1
    char var_22e_1 = 0
    int128_t zmm6_1
    result, zmm6_1 = sub_1419a0ce0(&data_1439c9260, arg2, &var_278, &var_410, RayTracedShadows", 
        var_4b0_1, var_4a8_1, var_4a0_1)
    int32_t var_428_1 = 0
    
    if (*(rsi + 0xa8) s> 0)
        int64_t rdx_6 = 0
        int128_t var_48_1 = zmm6_1
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        TEB* gsbase
        void* r8_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        void* var_390_1 = r8_2
        int64_t var_3f0_1 = 0
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        bool cond:4_1
        
        do
            void* r13_2 = rdx_6 * 0x5240 + *(rsi + 0xa0)
            void* var_440_1 = r13_2
            
            if (data_143e3a840 s> *(r8_2 + 0x14))
                _Init_thread_header(&data_143e3a840)
                
                if (data_143e3a840 == 0xffffffff)
                    atexit(sub_142ccfba0)
                    _Init_thread_footer(&data_143e3a840)
            
            bool cond:2_1 = data_143e3a83c s>= 0
            int32_t j = 0
            data_143e3a838 = 0
            
            if (not(cond:2_1))
                sub_1405a51b0(&data_143e3a830, 0)
                j = data_143e3a838
            
            int32_t i_1 = 0
            
            if (rdi[1].d s> 0)
                int64_t* r15_1 = nullptr
                
                do
                    int64_t j_1 = sx.q(j)
                    void* r14_1 = *(r15_1 + *var_3d8)
                    int64_t var_3e8 = 0
                    int32_t var_3e0_1 = 0
                    sub_14139bda0(*(r14_1 + 0x600), &var_3e8)
                    int32_t rdx_8 = var_3e0_1
                    int32_t rsi_1 = 0
                    
                    if (rdx_8 s> 0)
                        int64_t* rbx_3 = nullptr
                        
                        do
                            int64_t* rcx_8 = *(*(rbx_3 + var_3e8) + 8)
                            
                            if ((*(rcx_8 + 0x39) & 2) != 0)
                                (*(*rcx_8 + 0x30))(rcx_8, &data_143e3a830)
                                rdx_8 = var_3e0_1
                            
                            rsi_1 += 1
                            rbx_3 = &rbx_3[1]
                        while (rsi_1 s< rdx_8)
                    
                    j = data_143e3a838
                    void* rcx_9 = r14_1 + 0x558
                    void* rax_16 = *(rcx_9 + 8)
                    
                    if (rax_16 != 0)
                        rcx_9 = rax_16
                    
                    float zmm1_1 = *(rcx_9 + (var_3f0_1 << 2))
                    
                    if (j_1.d s< j)
                        int64_t rcx_11 = j_1 << 5
                        
                        do
                            result = data_143e3a830
                            rcx_11 += 0x20
                            j_1 = zx.q(j_1.d + 1)
                            *(rcx_11 + result - 0x14) = zmm1_1 f* *(rcx_11 + result - 0x14)
                            j = data_143e3a838
                        while (j_1.d s< j)
                    
                    i_1 += 1
                    r15_1 = &r15_1[1]
                while (i_1 s< var_3d8[1].d)
                
                r13_2 = var_440_1
                rsi = arg1
                r15 = arg3
            
            if (j s> 0)
                void* rax_17 = *(r15 + 0x50)
                int32_t count = j << 5
                wchar16 const* const var_4b8_1
                uint64_t var_498
                int32_t var_490
                int128_t* var_488
                int32_t var_480
                int32_t var_478
                int64_t var_470
                int32_t var_468
                int64_t var_460
                int64_t var_458
                int64_t var_450
                
                if (rax_17 == 0 || *(rax_17 + 0x18) s< count)
                    sub_1405d16e0(r15 + 0x50, nullptr)
                    sub_1405d16e0(r15 + 0x58, nullptr)
                    int128_t zmm1_2 = data_143dbb1e0
                    int128_t var_228
                    var_4b0_1.q = &var_228
                    int32_t var_218_1 = 1
                    int64_t* rcx_15 = data_143f0f180
                    int512_t zmm0_2
                    zmm0_2.o = zx.o(0)
                    int32_t var_204_1 = (1 << (data_1439c7a34).b) - 1
                    var_228 = zx.o(0)
                    int128_t var_214_1 = zmm1_2
                    char var_200_1 = 0
                    int64_t var_1f8_1 = 0
                    int32_t var_1f0_1 = 0
                    var_4b8_1.d = 0x204
                    int64_t* var_408
                    (*(*rcx_15 + 0x498))(zmm0_2, &var_408, &data_143f02b98, zx.q(count), var_4b8_1, 
                        var_4b0_1, var_4a8_1, var_4a0_1, var_498, var_490, var_488, var_480, 
                        var_478, var_470, var_468, var_460, var_458, var_450, arg6, var_440_1)
                    
                    if (r15 + 0x50 == &var_408)
                    label_1410aff79:
                        int64_t* rdi_2 = var_408
                        
                        if (rdi_2 != 0)
                            rdi_2[1].d -= 1
                            
                            if (rdi_2[1].d == 1)
                                char rax_32
                                
                                if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_32 = sub_1405949a0()
                                
                                if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_32 != 0))
                                    (**rdi_2)(rdi_2, 1)
                                else
                                    bool z_2
                                    
                                    if (0 == *(rdi_2 + 0xc))
                                        *(rdi_2 + 0xc) = 1
                                        z_2 = true
                                    else
                                        *(rdi_2 + 0xc)
                                        z_2 = false
                                    
                                    if (z_2)
                                        int32_t rax_34 = sub_140a20af0()
                                        uint64_t rdx_11 = zx.q(rax_34)
                                        void* const rax_35
                                        
                                        if (rax_34 != 0)
                                            rax_35 = *((rdx_11 u>> 0xe << 3) + &data_143cf0bf8)
                                                + (zx.q(rdx_11.d) & 0x3fff) * 0x18
                                        else
                                            rax_35 = nullptr
                                        
                                        *(rax_35 + 8) = rdi_2
                                        sub_1405a42f0(&data_143f02390, rdx_11.d)
                    else
                        int64_t* rdi_1 = *(r15 + 0x50)
                        *(r15 + 0x50) = var_408
                        var_408 = nullptr
                        
                        if (rdi_1 != 0)
                            rdi_1[1].d -= 1
                            
                            if (rdi_1[1].d == 1)
                                char rax_23
                                
                                if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_23 = sub_1405949a0()
                                
                                if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_23 != 0))
                                    (**rdi_1)(rdi_1, 1)
                                else
                                    bool z_1
                                    
                                    if (0 == *(rdi_1 + 0xc))
                                        *(rdi_1 + 0xc) = 1
                                        z_1 = true
                                    else
                                        *(rdi_1 + 0xc)
                                        z_1 = false
                                    
                                    if (z_1)
                                        int32_t rax_25 = sub_140a20af0()
                                        uint64_t rdx_10 = zx.q(rax_25)
                                        void* const rax_26
                                        
                                        if (rax_25 != 0)
                                            rax_26 = *((rdx_10 u>> 0xe << 3) + &data_143cf0bf8)
                                                + (zx.q(rdx_10.d) & 0x3fff) * 0x18
                                        else
                                            rax_26 = nullptr
                                        
                                        *(rax_26 + 8) = rdi_1
                                        sub_1405a42f0(&data_143f02390, rdx_10.d)
                            
                            goto label_1410aff79
                    
                    int64_t* rcx_24 = data_143f0f180
                    var_4b8_1.d = 0x10
                    int64_t* var_400
                    (*(*rcx_24 + 0x4b8))(rcx_24, &var_400, &data_143f02b98, *(r15 + 0x50), 
                        var_4b8_1, 1)
                    
                    if (r15 + 0x58 == &var_400)
                    label_1410b00f8:
                        int64_t* rdi_4 = var_400
                        
                        if (rdi_4 != 0)
                            rdi_4[1].d -= 1
                            
                            if (rdi_4[1].d == 1)
                                char rax_52
                                
                                if (rdi_4[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_52 = sub_1405949a0()
                                
                                if (rdi_4[2].b != 0 || (data_143f0f1d0 == 0 && rax_52 != 0))
                                    (**rdi_4)(rdi_4, 1)
                                else
                                    bool z_4
                                    
                                    if (0 == *(rdi_4 + 0xc))
                                        *(rdi_4 + 0xc) = 1
                                        z_4 = true
                                    else
                                        *(rdi_4 + 0xc)
                                        z_4 = false
                                    
                                    if (z_4)
                                        int32_t rax_54 = sub_140a20af0()
                                        uint64_t rdx_14 = zx.q(rax_54)
                                        void* const rax_55
                                        
                                        if (rax_54 != 0)
                                            rax_55 = *((rdx_14 u>> 0xe << 3) + &data_143cf0bf8)
                                                + (zx.q(rdx_14.d) & 0x3fff) * 0x18
                                        else
                                            rax_55 = nullptr
                                        
                                        *(rax_55 + 8) = rdi_4
                                        sub_1405a42f0(&data_143f02390, rdx_14.d)
                    else
                        int64_t* rdi_3 = *(r15 + 0x58)
                        *(r15 + 0x58) = var_400
                        var_400 = nullptr
                        
                        if (rdi_3 != 0)
                            rdi_3[1].d -= 1
                            
                            if (rdi_3[1].d == 1)
                                char rax_43
                                
                                if (rdi_3[2].b == 0 && data_143f0f1d0 == 0)
                                    rax_43 = sub_1405949a0()
                                
                                if (rdi_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_43 != 0))
                                    (**rdi_3)(rdi_3, 1)
                                else
                                    bool z_3
                                    
                                    if (0 == *(rdi_3 + 0xc))
                                        *(rdi_3 + 0xc) = 1
                                        z_3 = true
                                    else
                                        *(rdi_3 + 0xc)
                                        z_3 = false
                                    
                                    if (z_3)
                                        int32_t rax_45 = sub_140a20af0()
                                        uint64_t rdx_13 = zx.q(rax_45)
                                        void* const rax_46
                                        
                                        if (rax_45 != 0)
                                            rax_46 = *((rdx_13 u>> 0xe << 3) + &data_143cf0bf8)
                                                + (zx.q(rdx_13.d) & 0x3fff) * 0x18
                                        else
                                            rax_46 = nullptr
                                        
                                        *(rax_46 + 8) = rdi_3
                                        sub_1405a42f0(&data_143f02390, rdx_13.d)
                            
                            goto label_1410b00f8
                
                int64_t* rcx_33 = data_143f0f180
                var_4b0_1.d = 1
                var_4b8_1.d = count
                memcpy(
                    (*(*rcx_33 + 0x130))(rcx_33, &data_143f02b98, *(r15 + 0x50), 0, var_4b8_1, 
                        var_4b0_1, var_4a8_1, var_4a0_1, var_498, var_490, var_488, var_480, 
                        var_478, var_470, var_468, var_460, var_458, var_450, arg6, var_440_1), 
                    data_143e3a830, count)
                int64_t* rcx_35 = data_143f0f180
                (*(*rcx_35 + 0x138))(rcx_35, &data_143f02b98, *(r15 + 0x50))
                sub_1410e0370(arg2)
                int64_t* rcx_37 = *(r15 + 0x20)
                char r14_3 = *(rcx_37 + 0x13c)
                int128_t var_438 = zx.o(0)
                char rax_64
                int32_t r8_7
                rax_64, r8_7 = (*(*rcx_37 + 0xd0))(zx.o(0), &var_438, r13_2, r13_2 + 0x1598)
                int32_t rax_65
                int32_t rdx_17
                int32_t r9_4
                int32_t r10_1
                
                if (rax_64 != 0)
                    r9_4 = var_438:0xc.d
                    rax_65 = var_438:8.d
                    r10_1 = var_438:4.d
                    rdx_17 = var_438.d
                else
                    rdx_17 = *(r13_2 + 0x1598)
                    r10_1 = *(r13_2 + 0x159c)
                    rax_65 = *(r13_2 + 0x15a0)
                    r9_4 = *(r13_2 + 0x15a4)
                    var_438.d = rdx_17
                    var_438:4.d = r10_1
                    var_438:8.d = rax_65
                    var_438:0xc.d = r9_4
                
                int32_t rcx_39 = data_1439b520c
                int32_t r8_9 = sbb.d(r8_7, r8_7, data_143e2d2e4 != 0) + 2
                int32_t temp0_8 =
                    divs.dp.d(sx.q(divs.dp.d(sx.q(rax_65 - rdx_17), r8_9) - 1 + rcx_39), rcx_39)
                int32_t temp0_10 =
                    divs.dp.d(sx.q(divs.dp.d(sx.q(r9_4 - r10_1), r8_9) - 1 + rcx_39), rcx_39)
                int32_t var_41c_1 = temp0_10
                int64_t rdi_5 = temp0_8.q
                void* rax_80 = *(r13_2 + 0x15a8)
                
                if (*(rax_80 + 0xf30) == 0
                        || *(rax_80 + 0xf48) s< (rdi_5 u>> 0x20).d * temp0_8 * data_1439c8a54)
                    sub_1408081b0(rax_80 + 0xf30)
                    var_4a8_1.q = 0
                    var_4b0_1.q = 0
                    var_4b8_1.d = 0
                    sub_1407b4d10(rax_80 + 0xf30, data_1439c8a54, temp0_8 * temp0_10, 0x1c, 
                        var_4b8_1.d, var_4b0_1, var_4a8_1)
                    rax_80 = *(r13_2 + 0x15a8)
                
                int64_t rax_81 = *(rax_80 + 0xf38)
                int64_t* rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rcx_42 = &rbx_7[1]
                
                if (rcx_42 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x10)
                    rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rcx_42 = &rbx_7[1]
                
                *(arg2 + 0x30) = rcx_42
                *rbx_7 = rax_81
                void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_82 = &rcx_46[6]
                
                if (rax_82 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_82 = &rcx_46[6]
                
                *(arg2 + 0x30) = rax_82
                *(arg2 + 0x14) += 1
                int64_t var_3d0_1 = 0
                int64_t var_3c8_1 = 0
                **(arg2 + 8) = rcx_46
                *(arg2 + 8) = &rcx_46[1]
                rcx_46[1] = 0
                *rcx_46 = &data_142da7798
                rcx_46[2].d = 1
                rcx_46[3] = rbx_7
                rcx_46[4] = 2
                rcx_46[5] = 0
                void*** rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                int64_t rbx_10 = *(*(r13_2 + 0x15a8) + 0xf38)
                void* rax_86 = &rcx_52[5]
                
                if (rax_86 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_52 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_86 = &rcx_52[5]
                
                *(arg2 + 0x30) = rax_86
                int64_t* rax_87 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_87 = rcx_52
                *(arg2 + 8) = &rcx_52[1]
                rcx_52[1] = 0
                rcx_52[2] = rbx_10
                *rcx_52 = &data_142f115d8
                *(rcx_52 + 0x18) = var_3d0_1.o
                int64_t* rcx_56 = *(var_440_1 + 0x5150)
                void* r13_5 = &var_410[1]
                void* var_4b8_2
                int64_t* rbx_20
                uint64_t r14_7
                
                if (r14_3 != 0)
                    void* var_368
                    sub_1419a2ec0(rcx_56, &var_368, &data_143e38e40, 0)
                    void* r15_5 = var_368
                    void* rbx_23 = nullptr
                    
                    if (r15_5 != 0)
                        int64_t rdx_40 = sx.q(*(r15_5 + 0x10c))
                        void* var_360
                        int64_t* rbx_24 = *(var_360 + 0x10)
                        int64_t rax_102 = rbx_24[3]
                        
                        if (*(rax_102 + (rdx_40 << 3)) == 0)
                            sub_1419ccf30(rbx_24, rdx_40.d)
                            rax_102 = rbx_24[3]
                        
                        rbx_23 = *(rax_102 + (rdx_40 << 3))
                    
                    *(arg2 + 0x1b0) = rbx_23
                    sub_14198aa60(rbx_23)
                    void*** rcx_78 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_103 = &rcx_78[3]
                    
                    if (rax_103 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rcx_78 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_103 = &rcx_78[3]
                    
                    *(arg2 + 0x30) = rax_103
                    *(arg2 + 0x14) += 1
                    **(arg2 + 8) = rcx_78
                    __builtin_memset(&var_460, 0, 0x18)
                    *(arg2 + 8) = &rcx_78[1]
                    var_468 = 0
                    rcx_78[1] = 0
                    *rcx_78 = &data_142dd5b40
                    rcx_78[2] = rbx_23
                    var_470 = *(arg3 + 0x58)
                    int64_t rdx_42 = *(var_440_1 + 0x15a8) + 0xf30
                    var_478 = data_143e3a838
                    var_480 = sbb.d(rcx_78.d, rcx_78.d, data_143e2d2e4 != 0) + 2
                    var_488 = &var_438
                    var_490 = data_1439b5210
                    var_498 = (_mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(temp0_8)), 
                        _mm_cvtepi32_ps(zx.o(temp0_10)).q)).q
                    var_4a0_1.q = rdx_42
                    var_4a8_1.q = rdi_5
                    var_4b0_1.q = r13_5
                    sub_1410b4da0(r15_5, arg2, *(arg1 + 8), var_440_1, arg3, var_4b0_1, var_4a8_1, 
                        var_4a0_1, var_498, var_490)
                    var_4b8_2.d = 1
                    sub_1419cd1c0(arg2, r15_5, temp0_8, temp0_10, var_4b8_2.d)
                    void* rbx_27 = *(var_440_1 + 0x15a8)
                    sub_14077cfd0(r15_5 + 0x118, arg2, *(arg2 + 0x1b0))
                    sub_14077cfd0(r15_5 + 0x12e, arg2, *(arg2 + 0x1b0))
                    sub_14077cfd0(r15_5 + 0x120, arg2, *(arg2 + 0x1b0))
                    int64_t var_358 = *(r13_5 + 0x10)
                    
                    if (rbx_27 != -0xf30)
                        int64_t var_350_1 = *(rbx_27 + 0xf38)
                    
                    int32_t r14_10
                    r14_10.b = rbx_27 != -0xf30
                    r14_7 = zx.q(r14_10 + 1)
                    rbx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    uint64_t rdx_48 = zx.q((r14_7 << 3).d)
                    void* rax_111 = rdx_48 + rbx_20
                    
                    if (rax_111 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, rdx_48.d + 8)
                        rbx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_111 = zx.q(rdx_48.d) + rbx_20
                    
                    *(arg2 + 0x30) = rax_111
                    uint64_t i_8 = zx.q(r14_7.d)
                    int64_t* rcx_90 = rbx_20
                    uint64_t i_2
                    
                    do
                        *rcx_90 = *(&var_358 - rbx_20 + rcx_90)
                        rcx_90 = &rcx_90[1]
                        i_2 = i_8
                        i_8 -= 1
                    while (i_2 != 1)
                else
                    void* var_388
                    sub_1419a2ec0(rcx_56, &var_388, &data_143e38ce0, 0)
                    void* r15_3 = var_388
                    void* rbx_12 = nullptr
                    
                    if (r15_3 != 0)
                        int64_t rdx_29 = sx.q(*(r15_3 + 0x10c))
                        void* var_380
                        int64_t* rbx_13 = *(var_380 + 0x10)
                        int64_t rax_90 = rbx_13[3]
                        
                        if (*(rax_90 + (rdx_29 << 3)) == 0)
                            sub_1419ccf30(rbx_13, rdx_29.d)
                            rax_90 = rbx_13[3]
                        
                        rbx_12 = *(rax_90 + (rdx_29 << 3))
                    
                    *(arg2 + 0x1b0) = rbx_12
                    sub_14198aa60(rbx_12)
                    void*** rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_91 = &rcx_61[3]
                    
                    if (rax_91 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                        rcx_61 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_91 = &rcx_61[3]
                    
                    *(arg2 + 0x30) = rax_91
                    *(arg2 + 0x14) += 1
                    **(arg2 + 8) = rcx_61
                    __builtin_memset(&var_460, 0, 0x18)
                    *(arg2 + 8) = &rcx_61[1]
                    var_468 = 0
                    rcx_61[1] = 0
                    *rcx_61 = &data_142dd5b40
                    rcx_61[2] = rbx_12
                    var_470 = *(arg3 + 0x58)
                    int64_t rdx_31 = *(var_440_1 + 0x15a8) + 0xf30
                    var_478 = data_143e3a838
                    var_480 = sbb.d(rcx_61.d, rcx_61.d, data_143e2d2e4 != 0) + 2
                    var_488 = &var_438
                    var_490 = data_1439b5210
                    var_498 = (_mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(temp0_8)), 
                        _mm_cvtepi32_ps(zx.o(temp0_10)).q)).q
                    var_4a0_1.q = rdx_31
                    var_4a8_1.q = rdi_5
                    var_4b0_1.q = r13_5
                    sub_1410b4da0(r15_3, arg2, *(arg1 + 8), var_440_1, arg3, var_4b0_1, var_4a8_1, 
                        var_4a0_1, var_498, var_490)
                    var_4b8_2.d = 1
                    sub_1419cd1c0(arg2, r15_3, temp0_8, temp0_10, var_4b8_2.d)
                    void* rbx_16 = *(var_440_1 + 0x15a8)
                    sub_14077cfd0(r15_3 + 0x118, arg2, *(arg2 + 0x1b0))
                    sub_14077cfd0(r15_3 + 0x12e, arg2, *(arg2 + 0x1b0))
                    sub_14077cfd0(r15_3 + 0x120, arg2, *(arg2 + 0x1b0))
                    int64_t var_378 = *(r13_5 + 0x10)
                    
                    if (rbx_16 != -0xf30)
                        int64_t var_370_1 = *(rbx_16 + 0xf38)
                    
                    int32_t r14_6
                    r14_6.b = rbx_16 != -0xf30
                    r14_7 = zx.q(r14_6 + 1)
                    rbx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    uint64_t rdx_37 = zx.q((r14_7 << 3).d)
                    void* rax_99 = rdx_37 + rbx_20
                    
                    if (rax_99 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, rdx_37.d + 8)
                        rbx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_99 = zx.q(rdx_37.d) + rbx_20
                    
                    *(arg2 + 0x30) = rax_99
                    uint64_t i_7 = zx.q(r14_7.d)
                    int64_t* rcx_73 = rbx_20
                    uint64_t i_3
                    
                    do
                        *rcx_73 = *(&var_378 - rbx_20 + rcx_73)
                        rcx_73 = &rcx_73[1]
                        i_3 = i_7
                        i_7 -= 1
                    while (i_3 != 1)
                
                void*** rcx_93 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_113 = &rcx_93[6]
                
                if (rax_113 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rcx_93 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_113 = &rcx_93[6]
                
                *(arg2 + 0x30) = rax_113
                void**** rax_114 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_114 = rcx_93
                *(arg2 + 8) = &rcx_93[1]
                rcx_93[1] = 0
                rcx_93[5] = 0
                *(rcx_93 + 0x24) = 3
                rcx_93[4].d = 0
                rcx_93[3] = rbx_20
                rcx_93[2].d = r14_7.d
                *rcx_93 = &data_142da7798
                int128_t zmm1_4 = data_142d3f5a0
                int64_t rdx_50 = *(data_143ec4ca0 + 8)
                int64_t rax_117 = *(arg4 + 8)
                int32_t var_114_1 = 0
                int32_t var_10c
                __builtin_memset(&var_10c, 0xff, 0x14)
                int128_t var_f8_1 = zmm1_4
                int64_t var_e8
                __builtin_memset(&var_e8, 0, 0x1a)
                int64_t var_1e8 = rax_117
                int64_t var_1e0_1 = 0
                int32_t var_1d8_1 = 0xffffffff
                int16_t var_1d4_1 = 0x500
                int16_t var_d0_1
                var_d0_1:1.b = *(rax_117 + 0x38) u> 1
                int64_t var_120_1 = 0
                char var_118_1 = 0x45
                var_114_1 = 0x21
                void var_1d0
                memset(&var_1d0, 0, 0xa8)
                int32_t i_12 = 0
                int64_t* rax_118 = &var_1e8
                int64_t rcx_100 = 0
                uint64_t r15_7 = 0
                
                while (*rax_118 != 0)
                    i_12 += 1
                    rcx_100 += 1
                    rax_118 = &rax_118[3]
                    
                    if (rcx_100 s>= 8)
                        break
                
                void var_c8
                
                if (i_12 != 0)
                    void* rdx_51 = &var_c8
                    uint64_t i_11 = zx.q(i_12)
                    int64_t* rax_119 = &var_1e8
                    uint64_t i_4
                    
                    do
                        int64_t rcx_101 = *rax_119
                        
                        if (rcx_101 != 0)
                            r15_7 = zx.q(r15_7.d + 1)
                            *rdx_51 = rcx_101
                            rdx_51 += 8
                        
                        rax_119 = &rax_119[3]
                        i_4 = i_11
                        i_11 -= 1
                    while (i_4 != 1)
                
                if (rdx_50 != 0 && ((var_114_1.b & 0xf) == 2 || (var_114_1.b & 0xf0) == 0x20))
                    void*** rcx_104 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_122 = &rcx_104[4]
                    
                    if (rax_122 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x28)
                        rcx_104 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_122 = &rcx_104[4]
                    
                    *(arg2 + 0x30) = rax_122
                    int64_t* rax_123 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_123 = rcx_104
                    *(arg2 + 8) = &rcx_104[1]
                    rcx_104[1] = 0
                    *rcx_104 = &data_142f115e8
                    rcx_104[2].d = var_114_1
                    rcx_104[3] = rdx_50
                
                uint32_t rdx_52 = (r15_7 << 3).d
                int64_t r14_12 = sx.q(rdx_52)
                int64_t* rbx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_125 = r14_12 + rbx_36
                
                if (rax_125 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, rdx_52 + 8)
                    rbx_36 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_125 = r14_12 + rbx_36
                
                *(arg2 + 0x30) = rax_125
                int64_t i_9 = sx.q(r15_7.d)
                
                if (r15_7.d s> 0)
                    int64_t* rcx_109 = rbx_36
                    int64_t i_5
                    
                    do
                        *rcx_109 = *(&var_c8 - rbx_36 + rcx_109)
                        rcx_109 = &rcx_109[1]
                        i_5 = i_9
                        i_9 -= 1
                    while (i_5 != 1)
                
                void*** rcx_112 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_127 = &rcx_112[5]
                
                if (rax_127 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_112 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_127 = &rcx_112[5]
                
                *(arg2 + 0x30) = rax_127
                void**** rax_128 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_128 = rcx_112
                *(arg2 + 8) = &rcx_112[1]
                rcx_112[1] = 0
                *rcx_112 = &data_142d549c8
                rcx_112[3] = rbx_36
                rcx_112[4].d = 1
                rcx_112[2].d = r15_7.d
                int64_t rbx_41 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                int64_t rax_130 = rbx_41 + 0x2c
                
                if (rax_130 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x2e)
                    rbx_41 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                    rax_130 = rbx_41 + 0x2c
                
                *(arg2 + 0x30) = rax_130
                wchar16 const* const rcx_117 = u"UpsampleCapsuleShadow"
                wchar16 const i_6
                
                do
                    i_6 = *rcx_117
                    *(rbx_41 - u"UpsampleCapsuleShadow" + rcx_117) = i_6
                    rcx_117 = &rcx_117[1]
                while (i_6 != 0)
                void*** rcx_120 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_131 = &rcx_120[0x27]
                
                if (rax_131 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x140)
                    rcx_120 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_131 = &rcx_120[0x27]
                
                *(arg2 + 0x30) = rax_131
                void**** rax_132 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_132 = rcx_120
                *(arg2 + 8) = &rcx_120[1]
                sub_1405d11b0(rcx_120, &var_1e8, rbx_41)
                *(arg2 + 0x1c4) = 1
                sub_1405d19b0(arg2, &var_1e8)
                int64_t var_d8
                *(arg2 + 0x178) = var_d8:7.b
                uint64_t rax_135 = zx.q(*(arg2 + 0xa0))
                int32_t r14_13 = 0
                *(arg2 + 0x179) = 0
                *(arg2 + 0x1c4) = 1
                int64_t var_2c8
                __builtin_memset(&var_2c8, 0, 0x2c)
                int64_t var_298_1 = 0
                int32_t var_290_1 = 0
                int16_t var_28c_1 = 0
                char var_28a_1 = 0
                int16_t var_288_1 = 0
                int32_t var_2cc_1 = rax_135.d
                int128_t var_328
                __builtin_memset(&var_328, 0, 0x30)
                int128_t var_2e0_1 = zx.o(0)
                
                if (rax_135.d != 0)
                    do
                        uint64_t rbx_44 = zx.q(r14_13)
                        uint64_t r15_8 = rbx_44 * 3
                        int64_t* rcx_125 = *(arg2 + (r15_8 << 3) + 0xa8)
                        
                        if (rcx_125 == 0)
                            *(&var_2c8 + rbx_44) = 0
                            rax_135.b = 0
                        else
                            *(&var_2c8 + rbx_44) = *(rcx_125 + 0x3c)
                            int64_t var_2c0
                            *(&var_2c0 + (rbx_44 << 2)) = rcx_125[8].d
                            int64_t rax_139 = (*(*rcx_125 + 0x10))()
                            
                            if (rax_139 != 0)
                                var_28c_1:1.b = 1
                            
                            if (rax_139 == 0 || *(rax_139 + 0x68) u<= 1)
                                var_28c_1:1.b = 0
                            
                            rax_135 = zx.q(*(&var_2c8 + rbx_44))
                        
                        if (rax_135.b != 0)
                            var_290_1.w = *(*(arg2 + (r15_8 << 3) + 0xa8) + 0x38)
                        
                        r14_13 += 1
                    while (r14_13 u< var_2cc_1)
                
                int64_t* rcx_127 = *(arg2 + 0x168)
                int32_t var_2a0_1
                
                if (rcx_127 == 0)
                    var_2a0_1 = 0
                else
                    var_2a0_1 = *(rcx_127 + 0x3c)
                    var_2a0_1 = rcx_127[8].d
                    void* rax_143 = (*(*rcx_127 + 0x10))()
                    
                    if (rax_143 == 0 || *(rax_143 + 0x68) u<= 1)
                        var_28c_1:1.b = 0
                    else
                        var_28c_1:1.b = 1
                
                var_298_1.b = *(arg2 + 0x170)
                var_298_1:1.b = *(arg2 + 0x171)
                var_298_1:2.b = *(arg2 + 0x172)
                var_298_1:3.b = *(arg2 + 0x173)
                var_298_1:4.d = *(arg2 + 0x174)
                
                if (var_2a0_1 != 0)
                    var_290_1.w = *(*(arg2 + 0x168) + 0x38)
                
                void* r15_9 = var_440_1
                var_290_1:2.b = *(arg2 + 0x178)
                void*** rcx_131 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                zmm7 = zx.o(*(r15_9 + 0x15a0))
                zmm8 = zx.o(*(r15_9 + 0x159c))
                zmm9 = zx.o(*(r15_9 + 0x1598))
                var_290_1:3.b = *(arg2 + 0x179)
                char var_28a_2 = *(arg2 + 0x17a)
                void* rax_153 = &rcx_131[5]
                uint128_t zmm6_2 = _mm_cvtepi32_ps(zx.o(*(r15_9 + 0x15a4)))
                zmm7 = _mm_cvtepi32_ps(zmm7)
                zmm8 = _mm_cvtepi32_ps(zmm8)
                zmm9 = _mm_cvtepi32_ps(zmm9)
                
                if (rax_153 u> *(arg2 + 0x38))
                    zmm6_2 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_131 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_153 = &rcx_131[5]
                
                *(arg2 + 0x30) = rax_153
                *(arg2 + 0x14) += 1
                **(arg2 + 8) = rcx_131
                *(arg2 + 8) = &rcx_131[1]
                rcx_131[1] = 0
                *rcx_131 = &data_142d54998
                rcx_131[2].d = zmm9.d
                *(rcx_131 + 0x14) = zmm8.d
                *(rcx_131 + 0x1c) = zmm7.d
                rcx_131[4].d = zmm6_2.d
                rcx_131[3].d = 0
                *(rcx_131 + 0x24) = 0x3f800000
                int64_t var_2f0_1 = data_14395da18
                int64_t var_2e8_1 = data_14395d9e8
                var_4b8_2.b = 0
                int64_t var_2f8_1 = sub_14148bb80(sub_141096cf0(arg3), 0, 0, arg6, var_4b8_2.b)
                void* var_3c0
                sub_1419a2ec0(*(r15_9 + 0x5150), &var_3c0, &data_143e2dbf0, 0)
                int64_t* rcx_138 = *(r15_9 + 0x5150)
                int32_t var_2d0_1 = 0
                int64_t r9_15
                void* var_3b8
                int128_t var_308_1
                
                if (data_143e2d2e4 == 0)
                    void* var_338
                    sub_1419a2ec0(rcx_138, &var_338, &data_143e3a410, 0)
                    var_328.q = data_1439c9198
                    int64_t rax_170 = 0
                    void* r13_7 = var_3c0
                    
                    if (r13_7 != 0)
                        int64_t rdx_66 = sx.q(*(r13_7 + 0x10c))
                        int64_t* rbx_47 = *(var_3b8 + 0x10)
                        int64_t rax_172 = rbx_47[3]
                        
                        if (*(rax_172 + (rdx_66 << 3)) == 0)
                            sub_1419ccf30(rbx_47, rdx_66.d)
                            rax_172 = rbx_47[3]
                        
                        rax_170 = *(rax_172 + (rdx_66 << 3))
                    
                    var_328:8.q = rax_170
                    int64_t rax_173 = 0
                    void* r14_17 = var_338
                    
                    if (r14_17 != 0)
                        int64_t rdx_67 = sx.q(*(r14_17 + 0x10c))
                        void* var_330
                        int64_t* rbx_48 = *(var_330 + 0x10)
                        int64_t rax_175 = rbx_48[3]
                        
                        if (*(rax_175 + (rdx_67 << 3)) == 0)
                            sub_1419ccf30(rbx_48, rdx_67.d)
                            rax_175 = rbx_48[3]
                        
                        rax_173 = *(rax_175 + (rdx_67 << 3))
                        r15_9 = var_440_1
                    
                    var_308_1.q = rax_173
                    sub_1419870b0(arg2, &var_328, 2)
                    var_4b0_1.q = *(r15_9 + 0x15a8) + 0xf30
                    sub_1410b6400(r13_7, arg2, r15_9, rdi_5, &var_438, var_4b0_1)
                    var_4b0_1 = 1
                    r9_15 = sub_1410b5c60(r14_17, arg2, r15_9, &var_438, &var_410)
                else
                    void* var_348
                    sub_1419a2ec0(rcx_138, &var_348, &data_143e3a6d0, 0)
                    var_328.q = data_1439c9198
                    int64_t rax_161 = 0
                    void* r13_6 = var_3c0
                    
                    if (r13_6 != 0)
                        int64_t rdx_60 = sx.q(*(r13_6 + 0x10c))
                        int64_t* rbx_45 = *(var_3b8 + 0x10)
                        int64_t rax_163 = rbx_45[3]
                        
                        if (*(rax_163 + (rdx_60 << 3)) == 0)
                            sub_1419ccf30(rbx_45, rdx_60.d)
                            rax_163 = rbx_45[3]
                        
                        rax_161 = *(rax_163 + (rdx_60 << 3))
                    
                    var_328:8.q = rax_161
                    int64_t rax_164 = 0
                    void* r14_15 = var_348
                    
                    if (r14_15 != 0)
                        int64_t rdx_61 = sx.q(*(r14_15 + 0x10c))
                        void* var_340
                        int64_t* rbx_46 = *(var_340 + 0x10)
                        int64_t rax_166 = rbx_46[3]
                        
                        if (*(rax_166 + (rdx_61 << 3)) == 0)
                            sub_1419ccf30(rbx_46, rdx_61.d)
                            rax_166 = rbx_46[3]
                        
                        rax_164 = *(rax_166 + (rdx_61 << 3))
                        r15_9 = var_440_1
                    
                    var_308_1.q = rax_164
                    sub_1419870b0(arg2, &var_328, 2)
                    var_4b0_1.q = *(r15_9 + 0x15a8) + 0xf30
                    sub_1410b6400(r13_6, arg2, r15_9, rdi_5, &var_438, var_4b0_1)
                    var_4b0_1 = 1
                    r9_15 = sub_1410b5c60(r14_15, arg2, r15_9, &var_438, &var_410)
                int64_t rbx_49 = data_1439b5440
                void*** rcx_151 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_178 = &rcx_151[5]
                
                if (rax_178 u> *(arg2 + 0x38))
                    r9_15 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_151 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_178 = &rcx_151[5]
                
                *(arg2 + 0x30) = rax_178
                int64_t* rax_179 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_179 = rcx_151
                *(arg2 + 8) = &rcx_151[1]
                rcx_151[1] = 0
                *rcx_151 = &data_142d56618
                rcx_151[2].d = 0
                rcx_151[3] = rbx_49
                rcx_151[4].d = 0
                int64_t rbx_50 = data_1439b5458
                
                if (rbx_50 == 0)
                    sub_140af98a0("Unknown", 0xbc8, 
                        Tried to call DrawIndexedPrimitive with null IndexBuffer!", r9_15)
                    sub_140afbb40()
                
                void*** rcx_157 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_181 = &rcx_157[6]
                
                if (rax_181 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x38)
                    rcx_157 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_181 = &rcx_157[6]
                
                *(arg2 + 0x30) = rax_181
                int64_t* rax_182 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_182 = rcx_157
                *(arg2 + 8) = &rcx_157[1]
                rcx_157[1] = 0
                *rcx_157 = &data_142f11598
                rcx_157[2] = rbx_50
                rcx_157[3] = 0
                rcx_157[4] = 4
                rcx_157[5].d = 2
                *(rcx_157 + 0x2c) = temp0_8 * temp0_10
                void*** rcx_163 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_184 = &rcx_163[2]
                
                if (rax_184 u> *(arg2 + 0x38))
                    sub_140b0e3d0(arg2 + 0x30, 0x18)
                    rcx_163 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_184 = &rcx_163[2]
                
                *(arg2 + 0x30) = rax_184
                int64_t* rax_185 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_185 = rcx_163
                *(arg2 + 8) = &rcx_163[1]
                rcx_163[1] = 0
                *rcx_163 = &data_142d549b8
                *(arg2 + 0x1c4) = 0
                *(arg2 + 0x178) = 0
                int64_t var_e0
                sub_1405d1550(&var_e0)
                rsi = arg1
            
            rdi = var_3d8
            rdx_6 = var_3f0_1 + 1
            cond:4_1 = var_428_1 + 1 s< *(rsi + 0xa8)
            r15 = arg3
            var_428_1 += 1
            r8_2 = var_390_1
            var_3f0_1 = rdx_6
        while (cond:4_1)
    
    int64_t* rcx_168 = var_410
    
    if (rcx_168 != 0)
        (*(*rcx_168 + 0x38))(rcx_168)
    
    result.b = 1

__security_check_cookie(rax_1 ^ &var_4d8)
return result
