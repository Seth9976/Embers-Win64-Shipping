// 函数: sub_1413d4f70
// 地址: 0x1413d4f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_58 = arg5
void var_448
int64_t rax_1 = __security_cookie ^ &var_448
int64_t rax_3 = sx.q(arg2)
int64_t* rax_4 = std::_Get_future_error_what((*U"1111")[rax_3])
int64_t* rcx_2 = &data_143ec4c60
int64_t* var_370 = &data_143ec4c60
int64_t var_238 = data_14395da18
int64_t var_230 = data_14395d9e8
int64_t var_240 = data_14395da00
int128_t var_270
__builtin_memset(&var_270, 0, 0x30)
int64_t var_214
__builtin_memset(&var_214, 0, 0x30)
int128_t var_228 = zx.o(0)
int64_t var_1e0 = 0
int32_t var_1d8 = 0
int16_t var_1d4 = 0
char var_1d2 = 0
int16_t var_1d0 = 0
int32_t i_2 = 0
int64_t* var_418_1
int128_t var_3b8
void* var_358
void* var_350
void* var_2e8
int64_t i_3
int64_t r13_3
int128_t zmm1
int32_t i

do
    int64_t* r14_2 = rcx_2[0x26] + 8
    int32_t r15_1 = data_1439b6b9c
    int64_t* rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    int32_t var_3d8_1 = r15_1
    int64_t* var_3c8 = r14_2
    int64_t rax_8 = *r14_2
    void* rcx_3 = &rbx_3[1]
    
    if (rcx_3 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rbx_3 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_3 = &rbx_3[1]
    
    *(arg1 + 0x30) = rcx_3
    *rbx_3 = rax_8
    void*** rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_7[5]
    
    if (rax_9 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_7 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_7[5]
    
    *(arg1 + 0x30) = rax_9
    void**** rax_10 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    arg5 = _mm_cvtepi32_ps(zx.o(r15_1))
    *rax_10 = rcx_7
    *(arg1 + 8) = &rcx_7[1]
    *rcx_7 = &data_142d549c8
    int32_t j = 0
    rcx_7[1] = 0
    rcx_7[2].d = 1
    rcx_7[3] = rbx_3
    rcx_7[4].d = 1
    int128_t var_250_1
    int64_t var_208
    int32_t var_1e8_1
    void* var_1c8
    int16_t var_1b4_1
    void var_1b0
    int64_t var_c0
    int512_t zmm3
    
    do
        void* rax_12 = *r14_2
        zmm1 = data_142d3f5a0
        int32_t var_f0_1 = 0
        int32_t var_ec
        __builtin_memset(&var_ec, 0xff, 0x14)
        int128_t var_d8_1 = zmm1
        int64_t var_c8
        __builtin_memset(&var_c8, 0, 0x1a)
        var_1c8 = rax_12
        int64_t var_1c0_1 = 0
        int32_t j_4 = j
        var_1b4_1 = 0x100
        int64_t var_108
        __builtin_memset(&var_108, 0, 0x11)
        int32_t var_f4_1 = 0
        int16_t var_b0_1
        var_b0_1:1.b = *(rax_12 + 0x38) u> 1
        memset(&var_1b0, 0, 0xa8)
        int64_t rbx_8 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        int64_t rax_13 = rbx_8 + 0x30
        
        if (rax_13 u> *(arg1 + 0x38))
            arg5 = sub_140b0e3d0(arg1 + 0x30, 0x32)
            rbx_8 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
            rax_13 = rbx_8 + 0x30
        
        *(arg1 + 0x30) = rax_13
        wchar16 const* const rcx_13 = u"CopyDiffuseIrradianceRP"
        wchar16 const k
        
        do
            k = *rcx_13
            *(rbx_8 - u"CopyDiffuseIrradianceRP" + rcx_13) = k
            rcx_13 = &rcx_13[1]
        while (k != 0)
        void*** rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_14 = &rcx_16[0x27]
        
        if (rax_14 u> *(arg1 + 0x38))
            arg5 = sub_140b0e3d0(arg1 + 0x30, 0x140)
            rcx_16 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_14 = &rcx_16[0x27]
        
        *(arg1 + 0x30) = rax_14
        void**** rax_15 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_15 = rcx_16
        *(arg1 + 8) = &rcx_16[1]
        sub_1405d11b0(rcx_16, &var_1c8, rbx_8)
        *(arg1 + 0x1c4) = 1
        sub_1405d19b0(arg1, &var_1c8)
        int32_t k_1 = 0
        int64_t var_b8
        *(arg1 + 0x178) = var_b8:7.b
        uint64_t rax_18 = zx.q(*(arg1 + 0xa0))
        *(arg1 + 0x179) = 0
        *(arg1 + 0x1c4) = 1
        var_214.d = rax_18.d
        
        if (rax_18.d != 0)
            do
                uint64_t k_4 = zx.q(k_1)
                uint64_t r15_2 = k_4 * 3
                int64_t* rcx_21 = *(arg1 + (r15_2 << 3) + 0xa8)
                
                if (rcx_21 == 0)
                    *(&var_214:4 + k_4) = 0
                    rax_18.b = 0
                else
                    *(&var_214:4 + k_4) = *(rcx_21 + 0x3c)
                    *(&var_208 + (k_4 << 2)) = rcx_21[8].d
                    int64_t rax_22 = (*(*rcx_21 + 0x10))()
                    
                    if (rax_22 != 0)
                        var_1d4:1.b = 1
                    
                    if (rax_22 == 0 || *(rax_22 + 0x68) u<= 1)
                        var_1d4:1.b = 0
                    
                    rax_18 = zx.q(*(&var_214:4 + k_4))
                
                if (rax_18.b != 0)
                    var_1d8.w = *(*(arg1 + (r15_2 << 3) + 0xa8) + 0x38)
                
                k_1 += 1
            while (k_1 u< var_214.d)
            
            r15_1 = var_3d8_1
        
        int64_t* rcx_23 = *(arg1 + 0x168)
        
        if (rcx_23 == 0)
            var_1e8_1 = 0
        else
            var_1e8_1 = *(rcx_23 + 0x3c)
            var_1e8_1 = rcx_23[8].d
            void* rax_26 = (*(*rcx_23 + 0x10))()
            
            if (rax_26 == 0 || *(rax_26 + 0x68) u<= 1)
                var_1d4:1.b = 0
            else
                var_1d4:1.b = 1
        
        var_1e0.b = *(arg1 + 0x170)
        var_1e0:1.b = *(arg1 + 0x171)
        var_1e0:2.b = *(arg1 + 0x172)
        var_1e0:3.b = *(arg1 + 0x173)
        var_1e0:4.d = *(arg1 + 0x174)
        
        if (var_1e8_1 != 0)
            var_1d8.w = *(*(arg1 + 0x168) + 0x38)
        
        var_1d8:2.b = *(arg1 + 0x178)
        void*** rcx_27 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        var_1d8:3.b = *(arg1 + 0x179)
        char var_1d2_1 = *(arg1 + 0x17a)
        void* rax_36 = &rcx_27[5]
        
        if (rax_36 u> *(arg1 + 0x38))
            arg5 = sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_27 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_36 = &rcx_27[5]
        
        *(arg1 + 0x30) = rax_36
        void**** rax_37 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_37 = rcx_27
        *(arg1 + 8) = &rcx_27[1]
        rcx_27[1] = 0
        *rcx_27 = &data_142d54998
        *(rcx_27 + 0x1c) = arg5.d
        rcx_27[4].d = arg5.d
        rcx_27[2] = 0
        rcx_27[3].d = 0
        *(rcx_27 + 0x24) = 0x3f800000
        void* var_2d0
        sub_1419a2ec0(rax_4, &var_2d0, &data_143ec9d50, 0)
        sub_1419a2ec0(std::_Get_future_error_what((*U"1111")[rax_3]), &var_358, &data_143f55f90, 0)
        void* rcx_34 = var_358
        var_270.q = data_1439c9210
        int64_t rax_42 = 0
        
        if (rcx_34 != 0)
            int64_t rdx_6 = sx.q(*(rcx_34 + 0x10c))
            int64_t* rbx_11 = *(var_350 + 0x10)
            int64_t rax_44 = rbx_11[3]
            
            if (*(rax_44 + (rdx_6 << 3)) == 0)
                sub_1419ccf30(rbx_11, rdx_6.d)
                rax_44 = rbx_11[3]
            
            rax_42 = *(rax_44 + (rdx_6 << 3))
        
        void* r14_4 = var_2d0
        var_270:8.q = rax_42
        int64_t rax_45 = 0
        
        if (r14_4 != 0)
            int64_t rdx_7 = sx.q(*(r14_4 + 0x10c))
            void* var_2c8
            int64_t* rbx_12 = *(var_2c8 + 0x10)
            int64_t rax_47 = rbx_12[3]
            
            if (*(rax_47 + (rdx_7 << 3)) == 0)
                sub_1419ccf30(rbx_12, rdx_7.d)
                rax_47 = rbx_12[3]
            
            rax_45 = *(rax_47 + (rdx_7 << 3))
            r15_1 = var_3d8_1
        
        var_250_1.q = rax_45
        int32_t var_218_1 = 0
        sub_1419870b0(arg1, &var_270, 2)
        var_418_1 = arg3
        int32_t var_420_1 = r15_1
        void* r9_1
        int128_t zmm6
        r9_1, zmm6 = sub_1413f7810(r14_4, arg1, j, arg4, i_2)
        int32_t var_3e0_1 = 1
        zmm3.o = zmm6
        int32_t var_3e8_1 = 0
        int512_t zmm2_1
        zmm2_1.o = zx.o(0)
        int128_t* var_3f0_1 = &var_3b8
        int32_t var_32c_1 = r15_1
        int32_t var_324_1 = r15_1
        int32_t var_408_1 = zmm6.d
        int32_t var_410_1 = zmm6.d
        var_418_1.d = 0
        int32_t var_420_2 = 0
        int32_t var_428_2 = zmm6.d
        var_3b8 = var_358.o
        sub_1413993b0(arg1, zx.o(0), zmm2_1, r9_1, zmm3, var_428_2, var_420_2, var_418_1.d, 
            var_410_1, var_408_1, r15_1.q, r15_1.q, var_3f0_1, var_3e8_1, var_3e0_1)
        void*** rcx_42 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_52 = &rcx_42[2]
        
        if (rax_52 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x18)
            rcx_42 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_52 = &rcx_42[2]
        
        *(arg1 + 0x30) = rax_52
        int64_t* rax_53 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_53 = rcx_42
        *(arg1 + 8) = &rcx_42[1]
        rcx_42[1] = 0
        *rcx_42 = &data_142d549b8
        *(arg1 + 0x1c4) = 0
        *(arg1 + 0x178) = 0
        arg5 = sub_1405d1550(&var_c0)
        r14_2 = var_3c8
        j += 1
    while (j s< 6)
    
    int64_t rax_55 = *r14_2
    int64_t* rbx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_47 = &rbx_15[1]
    
    if (rcx_47 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rbx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_47 = &rbx_15[1]
    
    *(arg1 + 0x30) = rcx_47
    *rbx_15 = rax_55
    void*** rcx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_56 = &rcx_51[5]
    
    if (rax_56 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_51 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_56 = &rcx_51[5]
    
    *(arg1 + 0x30) = rax_56
    void**** rax_57 = *(arg1 + 8)
    int32_t temp0_2 = *(arg1 + 0x14)
    *(arg1 + 0x14) += 1
    *rax_57 = rcx_51
    *(arg1 + 8) = &rcx_51[1]
    rcx_51[1] = 0
    *rcx_51 = &data_142d549c8
    rcx_51[2].d = 1
    rcx_51[3] = rbx_15
    rcx_51[4].d = 0
    int32_t rax_59 = data_1439b6b9c
    uint64_t rflags_1
    int32_t temp0_3
    temp0_3, rflags_1 = _bit_scan_reverse(rax_59)
    int32_t rcx_55
    
    if (temp0_2 == 0xffffffff)
        rcx_55 = 0x20
    else
        rcx_55 = 0x1f - temp0_3
    
    uint64_t rflags_2
    int32_t temp0_4
    temp0_4, rflags_2 = _bit_scan_reverse(rax_59 - 1)
    int32_t rax_61
    
    if (rax_59 == 1)
        rax_61 = 0x20
    else
        rax_61 = 0x1f - temp0_4
    
    int32_t r15_4 = 1
    int32_t var_3d8_2 = 1
    int32_t r12_3 = ((0x20 - rax_61) & not.d(rcx_55 << 0x1a s>> 0x1f)) + 1
    int32_t var_384_1 = r12_3
    void** var_3d0
    
    if (r12_3 s> 1)
        int32_t rdx_12 = r12_3 - 2
        int32_t var_388_1 = rdx_12
        
        do
            int32_t rcx_59 = 0
            
            if (r15_4 - 1 s>= 0)
                rcx_59 = r15_4 - 1
            
            int32_t rax_63 = 1 << rdx_12.b
            int32_t rcx_62 = r15_4 & 0x80000001
            
            if (rcx_62 s< 0)
                rcx_62 = ((rcx_62 - 1) | 0xfffffffe) + 1
            
            void** rbx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void** r14_6 = var_370[sx.q(rcx_62) + 0x26] + 8
            void* rcx_65 = &rbx_20[1]
            void** var_3a0_3 = r14_6
            void* rax_67 = var_370[sx.q(1 - rcx_62) + 0x26]
            int64_t* rax_68 = *r14_6
            var_3c8 = rax_68
            
            if (rcx_65 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x10)
                rax_68 = var_3c8
                rbx_20 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_65 = &rbx_20[1]
            
            *(arg1 + 0x30) = rcx_65
            *rbx_20 = rax_68
            void*** rcx_69 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_69 = &rcx_69[5]
            
            if (rax_69 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_69 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_69 = &rcx_69[5]
            
            int32_t j_1 = 0
            *(arg1 + 0x30) = rax_69
            void**** rax_70 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            int32_t j_3 = 0
            arg5 = _mm_cvtepi32_ps(zx.o(rax_63))
            *rax_70 = rcx_69
            *(arg1 + 8) = &rcx_69[1]
            rcx_69[1] = 0
            *rcx_69 = &data_142d549c8
            rcx_69[2].d = 1
            rcx_69[3] = rbx_20
            rcx_69[4].d = 1
            
            do
                void* rax_72 = *r14_6
                zmm1 = data_142d3f5a0
                int32_t var_f0_2 = 0
                int32_t var_ec_1
                __builtin_memset(&var_ec_1, 0xff, 0x14)
                int128_t var_d8_2 = zmm1
                int64_t var_c8_1
                __builtin_memset(&var_c8_1, 0, 0x1a)
                var_1c8 = rax_72
                int64_t var_1c0_2 = 0
                int32_t j_5 = j_1
                var_1b4_1.b = r15_4.b
                var_1b4_1:1.b = 5
                int64_t var_108_1
                __builtin_memset(&var_108_1, 0, 0x11)
                int32_t var_f4_2 = 0
                int16_t var_b0_2
                var_b0_2:1.b = *(rax_72 + 0x38) u> 1
                memset(&var_1b0, 0, 0xa8)
                int64_t rbx_25 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                int64_t rax_73 = rbx_25 + 0x3c
                
                if (rax_73 u> *(arg1 + 0x38))
                    arg5 = sub_140b0e3d0(arg1 + 0x30, 0x3e)
                    rbx_25 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
                    rax_73 = rbx_25 + 0x3c
                
                *(arg1 + 0x30) = rax_73
                wchar16 const* const rcx_75 = u"AccumulateDiffuseIrradianceRP"
                wchar16 const k_2
                
                do
                    k_2 = *rcx_75
                    *(rcx_75 + rbx_25 - u"AccumulateDiffuseIrradianceRP") = k_2
                    rcx_75 = &rcx_75[1]
                while (k_2 != 0)
                void*** rcx_78 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_74 = &rcx_78[0x27]
                
                if (rax_74 u> *(arg1 + 0x38))
                    arg5 = sub_140b0e3d0(arg1 + 0x30, 0x140)
                    rcx_78 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_74 = &rcx_78[0x27]
                
                *(arg1 + 0x30) = rax_74
                void**** rax_75 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_75 = rcx_78
                *(arg1 + 8) = &rcx_78[1]
                sub_1405d11b0(rcx_78, &var_1c8, rbx_25)
                *(arg1 + 0x1c4) = 1
                sub_1405d19b0(arg1, &var_1c8)
                int32_t k_3 = 0
                int64_t var_b8_1
                *(arg1 + 0x178) = var_b8_1:7.b
                uint64_t rax_78 = zx.q(*(arg1 + 0xa0))
                *(arg1 + 0x179) = 0
                *(arg1 + 0x1c4) = 1
                var_214.d = rax_78.d
                
                if (rax_78.d != 0)
                    do
                        uint64_t k_5 = zx.q(k_3)
                        uint64_t r15_5 = k_5 * 3
                        int64_t* rcx_83 = *(arg1 + (r15_5 << 3) + 0xa8)
                        
                        if (rcx_83 == 0)
                            *(&var_214:4 + k_5) = 0
                            rax_78.b = 0
                        else
                            *(&var_214:4 + k_5) = *(rcx_83 + 0x3c)
                            *(&var_208 + (k_5 << 2)) = rcx_83[8].d
                            int64_t rax_82 = (*(*rcx_83 + 0x10))()
                            
                            if (rax_82 != 0)
                                var_1d4:1.b = 1
                            
                            if (rax_82 == 0 || *(rax_82 + 0x68) u<= 1)
                                var_1d4:1.b = 0
                            
                            rax_78 = zx.q(*(&var_214:4 + k_5))
                        
                        if (rax_78.b != 0)
                            var_1d8.w = *(*(arg1 + (r15_5 << 3) + 0xa8) + 0x38)
                        
                        k_3 += 1
                    while (k_3 u< var_214.d)
                
                int64_t* rcx_85 = *(arg1 + 0x168)
                
                if (rcx_85 == 0)
                    var_1e8_1 = 0
                else
                    var_1e8_1 = *(rcx_85 + 0x3c)
                    var_1e8_1 = rcx_85[8].d
                    void* rax_86 = (*(*rcx_85 + 0x10))()
                    
                    if (rax_86 == 0 || *(rax_86 + 0x68) u<= 1)
                        var_1d4:1.b = 0
                    else
                        var_1d4:1.b = 1
                
                var_1e0.b = *(arg1 + 0x170)
                var_1e0:1.b = *(arg1 + 0x171)
                var_1e0:2.b = *(arg1 + 0x172)
                var_1e0:3.b = *(arg1 + 0x173)
                var_1e0:4.d = *(arg1 + 0x174)
                
                if (var_1e8_1 != 0)
                    var_1d8.w = *(*(arg1 + 0x168) + 0x38)
                
                var_1d8:2.b = *(arg1 + 0x178)
                void*** rcx_89 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                var_1d8:3.b = *(arg1 + 0x179)
                char var_1d2_2 = *(arg1 + 0x17a)
                void* rax_96 = &rcx_89[5]
                
                if (rax_96 u> *(arg1 + 0x38))
                    arg5 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                    rcx_89 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_96 = &rcx_89[5]
                
                *(arg1 + 0x30) = rax_96
                void**** rax_97 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_97 = rcx_89
                *(arg1 + 8) = &rcx_89[1]
                rcx_89[1] = 0
                *rcx_89 = &data_142d54998
                *(rcx_89 + 0x1c) = arg5.d
                rcx_89[4].d = arg5.d
                rcx_89[2] = 0
                rcx_89[3].d = 0
                *(rcx_89 + 0x24) = 0x3f800000
                void* var_2b0
                sub_1419a2ec0(rax_4, &var_2b0, &data_143ec9e60, 0)
                void* var_2c0
                sub_1419a2ec0(std::_Get_future_error_what((*1111")[rax_3]), &var_2c0, 
                    &data_143f55f90, 0)
                void* rcx_96 = var_2c0
                var_270.q = data_1439c9210
                int64_t rax_102 = 0
                void* var_2b8
                var_3b8.q = var_2b8
                
                if (rcx_96 != 0)
                    int64_t rdx_20 = sx.q(*(rcx_96 + 0x10c))
                    int64_t* rbx_28 = *(var_2b8 + 0x10)
                    int64_t rax_103 = rbx_28[3]
                    
                    if (*(rax_103 + (rdx_20 << 3)) == 0)
                        sub_1419ccf30(rbx_28, rdx_20.d)
                        rax_103 = rbx_28[3]
                    
                    rax_102 = *(rax_103 + (rdx_20 << 3))
                
                void* rbx_29 = var_2b0
                var_270:8.q = rax_102
                int64_t rax_104 = 0
                
                if (rbx_29 != 0)
                    int64_t rdx_21 = sx.q(*(rbx_29 + 0x10c))
                    void* var_2a8
                    int64_t* r14_8 = *(var_2a8 + 0x10)
                    int64_t rax_106 = r14_8[3]
                    
                    if (*(rax_106 + (rdx_21 << 3)) == 0)
                        sub_1419ccf30(r14_8, rdx_21.d)
                        rax_106 = r14_8[3]
                    
                    rax_104 = *(rax_106 + (rdx_21 << 3))
                
                var_250_1.q = rax_104
                int32_t var_218_2 = 0
                sub_1419870b0(arg1, &var_270, 2)
                int32_t var_398 = rcx_59
                var_3d0 = *(arg1 + 0x1a0)
                var_3c8.d = j_1
                sub_1405eb490(arg1, &var_3d0, rbx_29 + 0x118, &var_3c8, 0)
                var_3d0 = *(arg1 + 0x1a0)
                sub_1405eb490(arg1, &var_3d0, rbx_29 + 0x11e, &var_398, 0)
                int64_t* r15_7 = data_14395fa10
                int64_t r13_1 = *(arg1 + 0x1a0)
                int64_t r12_4 = *(rax_67 + 0x10)
                
                if (*(rbx_29 + 0x126) u> 0)
                    uint32_t r14_9 = zx.d(*(rbx_29 + 0x124))
                    void*** rcx_104 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_111 = &rcx_104[5]
                    
                    if (rax_111 u> *(arg1 + 0x38))
                        sub_140b0e3d0(arg1 + 0x30, 0x30)
                        rcx_104 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_111 = &rcx_104[5]
                    
                    *(arg1 + 0x30) = rax_111
                    void**** rax_112 = *(arg1 + 8)
                    *(arg1 + 0x14) += 1
                    *rax_112 = rcx_104
                    *(arg1 + 8) = &rcx_104[1]
                    rcx_104[1] = 0
                    *rcx_104 = &data_142d5a070
                    rcx_104[2] = r13_1
                    rcx_104[3].d = r14_9
                    rcx_104[4] = r12_4
                
                if (*(rbx_29 + 0x12a) u> 0)
                    uint32_t r14_10 = zx.d(*(rbx_29 + 0x128))
                    
                    if ((*(*r15_7 + 8))(r15_7) == 0)
                        void*** rcx_111 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                        void* rax_116 = &rcx_111[5]
                        
                        if (rax_116 u> *(arg1 + 0x38))
                            sub_140b0e3d0(arg1 + 0x30, 0x30)
                            rcx_111 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                            rax_116 = &rcx_111[5]
                        
                        *(arg1 + 0x30) = rax_116
                        void**** rax_117 = *(arg1 + 8)
                        *(arg1 + 0x14) += 1
                        *rax_117 = rcx_111
                        *(arg1 + 8) = &rcx_111[1]
                        rcx_111[1] = 0
                        *rcx_111 = &data_142d5a080
                        rcx_111[2] = r13_1
                        rcx_111[3].d = r14_10
                        rcx_111[4] = r15_7
                
                int512_t zmm2_2
                zmm2_2.o = 0x3f000000
                int32_t var_428_5 = 0
                void** rax_120 = *(arg1 + 0x1a0)
                uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(1 << (var_384_1.b - var_398.b - 1)))
                var_3d0 = rax_120
                zmm2_2.d = 0.5f f/ zmm0_2.d
                int32_t var_300_1 = zmm2_2.d
                int128_t zmm1_2 = zmm2_2.o ^ 0x80000000
                int32_t var_2f4_1 = zmm2_2.d
                int32_t var_308 = zmm1_2.d
                int32_t var_304_1 = zmm1_2.d
                int32_t var_2fc_1 = zmm1_2.d
                int32_t var_2f8 = zmm1_2.d
                int32_t var_2f0_1 = zmm2_2.d
                int32_t var_2ec_1 = zmm2_2.d
                sub_1405d0e10(arg1, &var_3d0, rbx_29 + 0x12c, &var_308, var_428_5)
                var_3d0 = *(arg1 + 0x1a0)
                void* r9_6
                int128_t zmm6_1
                r9_6, zmm6_1 = sub_1405d0e10(arg1, &var_3d0, rbx_29 + 0x132, &var_2f8, 0)
                zmm3.o = zmm6_1
                int32_t var_3e0_2 = 1
                zmm2_2.o = zx.o(0)
                int32_t var_3e8_2 = 0
                void* var_2a0 = rcx_96
                int64_t var_298_1 = var_3b8.q
                int32_t var_314_1 = rax_63
                int32_t var_30c_1 = rax_63
                var_418_1.d = 0
                sub_1413993b0(arg1, zx.o(0), zmm2_2, r9_6, zmm3, zmm6_1.d, 0, var_418_1.d, 
                    zmm6_1.d, zmm6_1.d, rax_63.q, rax_63.q, &var_2a0, var_3e8_2, var_3e0_2)
                void*** rcx_123 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_127 = &rcx_123[2]
                
                if (rax_127 u> *(arg1 + 0x38))
                    sub_140b0e3d0(arg1 + 0x30, 0x18)
                    rcx_123 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_127 = &rcx_123[2]
                
                *(arg1 + 0x30) = rax_127
                int64_t* rax_128 = *(arg1 + 8)
                *(arg1 + 0x14) += 1
                *rax_128 = rcx_123
                *(arg1 + 8) = &rcx_123[1]
                rcx_123[1] = 0
                *rcx_123 = &data_142d549b8
                *(arg1 + 0x1c4) = 0
                *(arg1 + 0x178) = 0
                arg5 = sub_1405d1550(&var_c0)
                r14_6 = var_3a0_3
                j_1 = j_3 + 1
                r15_4 = var_3d8_2
                j_3 = j_1
            while (j_1 s< 6)
            
            void* rax_130 = *r14_6
            void** rbx_32 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            var_3b8.q = rax_130
            void* rcx_128 = &rbx_32[1]
            
            if (rcx_128 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x10)
                rax_130 = var_3b8.q
                rbx_32 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_128 = &rbx_32[1]
            
            *(arg1 + 0x30) = rcx_128
            *rbx_32 = rax_130
            void*** rcx_132 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_131 = &rcx_132[5]
            
            if (rax_131 u> *(arg1 + 0x38))
                sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_132 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_131 = &rcx_132[5]
            
            r15_4 = var_3d8_2 + 1
            r12_3 = var_384_1
            rdx_12 = var_388_1 - 1
            *(arg1 + 0x30) = rax_131
            void**** rax_132 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            var_3d8_2 = r15_4
            var_388_1 = rdx_12
            *rax_132 = rcx_132
            *(arg1 + 8) = &rcx_132[1]
            rcx_132[1] = 0
            *rcx_132 = &data_142d549c8
            rcx_132[2].d = 1
            rcx_132[3] = rbx_32
            rcx_132[4].d = 0
        while (r15_4 s< r12_3)
    
    int64_t* rbx_37 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* r14_11 = data_143ec4da0
    int64_t rax_134 = *(r14_11 + 8)
    var_3b8.q = rax_134
    void* rcx_137 = &rbx_37[1]
    var_3d0 = r14_11 + 8
    
    if (rcx_137 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rax_134 = var_3b8.q
        rbx_37 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_137 = &rbx_37[1]
    
    *(arg1 + 0x30) = rcx_137
    *rbx_37 = rax_134
    void*** rcx_141 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_135 = &rcx_141[5]
    
    if (rax_135 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_141 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_135 = &rcx_141[5]
    
    *(arg1 + 0x30) = rax_135
    void**** rax_136 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    zmm1 = data_142d3f5a0
    *rax_136 = rcx_141
    *(arg1 + 8) = &rcx_141[1]
    rcx_141[1] = 0
    *rcx_141 = &data_142d549c8
    rcx_141[2].d = 1
    rcx_141[3] = rbx_37
    rcx_141[4].d = 1
    void* rax_138 = *(r14_11 + 8)
    int32_t var_f0_3 = 0
    int32_t var_ec_2
    __builtin_memset(&var_ec_2, 0xff, 0x14)
    int128_t var_d8_3 = zmm1
    int64_t var_c8_2
    __builtin_memset(&var_c8_2, 0, 0x1a)
    var_1c8 = rax_138
    int64_t var_1c0_3 = 0
    int32_t var_1b8_1 = 0xffffffff
    int16_t var_1b4_2 = 0x500
    int64_t var_108_2
    __builtin_memset(&var_108_2, 0, 0x11)
    int32_t var_f4_3 = 0
    int16_t var_b0_3
    var_b0_3:1.b = *(rax_138 + 0x38) u> 1
    memset(&var_1b0, 0, 0xa8)
    int64_t rbx_42 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
    int64_t rax_139 = rbx_42 + 0x1c
    
    if (rax_139 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x1e)
        rbx_42 = (*(arg1 + 0x30) + 1) & 0xfffffffffffffffe
        rax_139 = rbx_42 + 0x1c
    
    *(arg1 + 0x30) = rax_139
    wchar16 const* const rcx_147 = u"GatherCoeffRP"
    wchar16 const j_2
    
    do
        j_2 = *rcx_147
        *(rcx_147 + rbx_42 - u"GatherCoeffRP") = j_2
        rcx_147 = &rcx_147[1]
    while (j_2 != 0)
    void*** rcx_150 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_140 = &rcx_150[0x27]
    
    if (rax_140 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x140)
        rcx_150 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_140 = &rcx_150[0x27]
    
    *(arg1 + 0x30) = rax_140
    void**** rax_141 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_141 = rcx_150
    *(arg1 + 8) = &rcx_150[1]
    sub_1405d11b0(rcx_150, &var_1c8, rbx_42)
    *(arg1 + 0x1c4) = 1
    sub_1405d19b0(arg1, &var_1c8)
    int64_t var_b8_2
    *(arg1 + 0x178) = var_b8_2:7.b
    *(arg1 + 0x179) = 0
    *(arg1 + 0x1c4) = 1
    sub_140fdc870(arg1, &var_270)
    i = i_2 + 1
    void*** rcx_158 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_145 = &rcx_158[5]
    
    if (rax_145 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_158 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_145 = &rcx_158[5]
    
    *(arg1 + 0x30) = rax_145
    int64_t* rax_146 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_146 = rcx_158
    *(arg1 + 8) = &rcx_158[1]
    rcx_158[1] = 0
    *rcx_158 = &data_142d54998
    rcx_158[2] = 0
    rcx_158[3].d = 0
    *(rcx_158 + 0x1c) = 0x41100000
    rcx_158[4].d = 0x3f800000
    *(rcx_158 + 0x24) = 0x3f800000
    void* var_290
    sub_1419a2ec0(rax_4, &var_290, &data_143f55f90, 0)
    void* rbx_45 = var_290
    void* var_280
    sub_1419a2ec0(rax_4, &var_280, &data_143ec9f70, 0)
    var_270.q = data_1439c9210
    int64_t rax_149 = 0
    void* var_288
    
    if (rbx_45 != 0)
        int64_t rdx_35 = sx.q(*(rbx_45 + 0x10c))
        int64_t* rbx_46 = *(var_288 + 0x10)
        int64_t rax_150 = rbx_46[3]
        
        if (*(rax_150 + (rdx_35 << 3)) == 0)
            sub_1419ccf30(rbx_46, rdx_35.d)
            rax_150 = rbx_46[3]
        
        rax_149 = *(rax_150 + (rdx_35 << 3))
    
    void* r14_15 = var_280
    var_270:8.q = rax_149
    int64_t rax_151 = 0
    
    if (r14_15 != 0)
        int64_t rdx_36 = sx.q(*(r14_15 + 0x10c))
        void* var_278
        int64_t* rbx_47 = *(var_278 + 0x10)
        int64_t rax_153 = rbx_47[3]
        
        if (*(rax_153 + (rdx_36 << 3)) == 0)
            sub_1419ccf30(rbx_47, rdx_36.d)
            rax_153 = rbx_47[3]
        
        rax_151 = *(rax_153 + (rdx_36 << 3))
    
    var_250_1.q = rax_151
    int32_t var_218_3 = 0
    sub_1419870b0(arg1, &var_270, 2)
    int32_t rax_155 = (r12_3 - 1) & 0x80000001
    
    if (rax_155 s< 0)
        rax_155 = ((rax_155 - 1) | 0xfffffffe) + 1
    
    var_3c8.d = r12_3 - 1
    void* rbx_49 = var_370[sx.q(rax_155) + 0x26]
    var_3b8.q = *(arg1 + 0x1a0)
    void* r9_8 = sub_1405eb490(arg1, &var_3b8, r14_15 + 0x118, &var_3c8, 0)
    int64_t r12_6 = *(rbx_49 + 0x10)
    int64_t* rbx_50 = data_14395fa10
    int64_t r13_2 = *(arg1 + 0x1a0)
    
    if (*(r14_15 + 0x120) u> 0)
        uint32_t r15_10 = zx.d(*(r14_15 + 0x11e))
        void*** rcx_171 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_160 = &rcx_171[5]
        
        if (rax_160 u> *(arg1 + 0x38))
            r9_8 = sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_171 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_160 = &rcx_171[5]
        
        *(arg1 + 0x30) = rax_160
        void**** rax_161 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_161 = rcx_171
        *(arg1 + 8) = &rcx_171[1]
        rcx_171[1] = 0
        *rcx_171 = &data_142d5a070
        rcx_171[2] = r13_2
        rcx_171[3].d = r15_10
        rcx_171[4] = r12_6
    
    if (*(r14_15 + 0x124) u> 0)
        uint32_t r14_16 = zx.d(*(r14_15 + 0x122))
        char rax_164
        rax_164, r9_8 = (*(*rbx_50 + 8))(rbx_50)
        
        if (rax_164 == 0)
            void*** rcx_178 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_165 = &rcx_178[5]
            
            if (rax_165 u> *(arg1 + 0x38))
                r9_8 = sub_140b0e3d0(arg1 + 0x30, 0x30)
                rcx_178 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_165 = &rcx_178[5]
            
            *(arg1 + 0x30) = rax_165
            void**** rax_166 = *(arg1 + 8)
            *(arg1 + 0x14) += 1
            *rax_166 = rcx_178
            *(arg1 + 8) = &rcx_178[1]
            rcx_178[1] = 0
            *rcx_178 = &data_142d5a080
            rcx_178[2] = r13_2
            rcx_178[3].d = r14_16
            rcx_178[4] = rbx_50
    
    r13_3 = 0
    i_3 = 9
    int32_t var_3e0_3 = 1
    zmm3.o = 0x3f800000
    int32_t var_3e8_3 = 0
    int512_t zmm2_3
    zmm2_3.o = zx.o(0)
    var_2e8 = rbx_45
    void* var_2e0_1 = var_288
    int32_t var_344_1 = 1
    int32_t var_33c_1 = 1
    var_418_1.d = 0
    sub_1413993b0(arg1, _mm_cvtepi32_ps(zx.o(i_2)), zmm2_3, r9_8, zmm3, 0x3f800000, 0, var_418_1.d, 
        0x3f800000, 0x3f800000, 9.q, 1.q, &var_2e8, var_3e8_3, var_3e0_3)
    void*** rcx_185 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_172 = &rcx_185[2]
    
    if (rax_172 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x18)
        rcx_185 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_172 = &rcx_185[2]
    
    *(arg1 + 0x30) = rax_172
    *(arg1 + 0x14) += 1
    **(arg1 + 8) = rcx_185
    *(arg1 + 8) = &rcx_185[1]
    rcx_185[1] = 0
    *rcx_185 = &data_142d549b8
    void** rax_175 = var_3d0
    *(arg1 + 0x1c4) = 0
    *(arg1 + 0x178) = 0
    void* rax_176 = *rax_175
    void** rbx_53 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    var_3b8.q = rax_176
    void* rcx_189 = &rbx_53[1]
    
    if (rcx_189 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x10)
        rax_176 = var_3b8.q
        rbx_53 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_189 = &rbx_53[1]
    
    *(arg1 + 0x30) = rcx_189
    *rbx_53 = rax_176
    void*** rcx_193 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_177 = &rcx_193[5]
    
    if (rax_177 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_193 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_177 = &rcx_193[5]
    
    *(arg1 + 0x30) = rax_177
    void**** rax_178 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_178 = rcx_193
    *(arg1 + 8) = &rcx_193[1]
    rcx_193[1] = 0
    *rcx_193 = &data_142d549c8
    rcx_193[2].d = 1
    rcx_193[3] = rbx_53
    rcx_193[4].d = 0
    sub_1405d1550(&var_c0)
    rcx_2 = var_370
    i_2 = i
while (i s< 9)
int128_t zmm0 = data_142f794c0
var_3b8.q = 0
var_3b8:8.q = 0
var_418_1.d = 0
int32_t var_428_9
var_428_9.q = &var_3b8
var_2e8.o = zmm0
(*(*data_143f0f180 + 0x650))(zmm0, arg1, *(data_143ec4da0 + 0x10), &var_2e8, var_428_9, 0, 
    var_418_1, 0)
void* rbx_57 = arg6 + 0x60
int64_t i_1

do
    sub_140acc9b0(&var_358, var_3b8.q + r13_3)
    r13_3 += 8
    zmm1 = var_358:4.d
    *(rbx_57 - 0x60) = var_358.d
    *rbx_57 = var_350.d
    *(rbx_57 - 0x30) = zmm1.d
    rbx_57 += 4
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
int64_t rcx_201 = var_3b8.q

if (rcx_201 != 0)
    sub_140a74f90(rcx_201)

int64_t result
int512_t zmm6_2
result, zmm6_2 = sub_1405d1550(arg3)
__security_check_cookie(rax_1 ^ &var_448)
zmm6_2.o = var_58
return result
