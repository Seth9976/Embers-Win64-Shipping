// 函数: sub_1405d7500
// 地址: 0x1405d7500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4e8
int64_t rax_1 = __security_cookie ^ &var_4e8
int32_t rbx = arg8.d
int32_t r13 = arg8:4.d
int64_t* r14 = nullptr
int64_t* var_468 = nullptr
char var_4c0
char var_4b8
char var_4b0
uint64_t var_4a8
void* rcx_2
int64_t* r12_1
uint128_t zmm6_1

if (arg6 == 0)
    if (arg7 != 0)
        if ((*(*arg7 + 0x60))(arg7) == 0)
            r12_1 = arg4
            goto label_1405d76b1
        
        void* rcx_5 = *((*(*arg7 + 0x60))(arg7) + 0x88)
        void* var_418 = rcx_5
        
        if (rcx_5 != 0)
            *(rcx_5 + 8) += 1
        
        sub_1405d1600(&var_468, &var_418)
        rcx_2 = &var_418
        goto label_1405d7610
    
label_1405d76a9:
    r12_1 = arg4
label_1405d76b1:
    zmm6_1 = sub_1405daf00(arg3, 0)
label_1405d76b6:
    
    if (r12_1 != 0 && (*(*arg3 + 0x260))(arg3) != 0)
        int64_t* rax_16 = *(arg3 + 0xc4)
        wchar16 const* const r12_2 = u"MediaCapture"
        int32_t rcx_11 = data_143f02318
        int128_t zmm0_1 = data_143f02308
        int64_t* var_460 = rax_16
        int32_t var_234_1 = rax_16.d
        int32_t var_238_1 = rcx_11
        int32_t var_230_1 = var_460:4.d
        var_4b0 = 0
        var_4b8 = 1
        uint128_t var_58_1 = zmm6_1
        var_4c0 = 1
        int32_t var_21c_1 = *(arg3 + 0xcc)
        int32_t var_228_1 = 1
        int16_t var_220_1 = 1
        int32_t var_214_1 = 1
        int16_t var_200_1 = 1
        wchar16 const* const var_208_1 = u"UnknownTexture2D"
        int16_t var_210_1 = 0
        int128_t var_248 = zmm0_1
        int32_t var_22c_1 = 0
        int32_t var_224_1 = 0x10000
        int32_t var_218_1 = 0
        char var_1fe_1 = 0
        var_460 = nullptr
        wchar16 const* const var_4c8_1 = u"MediaCapture"
        sub_1419a0ce0(&data_1439c9260, arg2, &var_248, &var_460, var_4c8_1, var_4c0, var_4b8, 
            var_4b0)
        uint128_t zmm6_2 = zx.o(0)
        char rax_19 = arg3[0x1a].b
        int128_t zmm8 = zx.o(0)
        int64_t* rdx_4 = var_460
        uint128_t zmm7 = 0x3f800000
        uint128_t zmm1_1 = data_142d3f800
        int128_t zmm9 = 0x3f800000
        uint128_t var_458 = data_142d57d10
        uint128_t var_438_1 = data_142d57920
        uint128_t var_448_1 = zmm1_1
        uint32_t var_490
        uint128_t zmm0_2
        
        if (rax_19 != 0)
            uint32_t rcx_12 = zx.d(rax_19)
            uint32_t rax_20
            uint32_t rcx_15
            
            if (rcx_12 == 1)
                rcx_15 = (r14[0xc].d - rbx) u>> 1
                rax_20 = (*(r14 + 0x64) - r13) u>> 1
            label_1405d785d:
                uint32_t var_48c_1 = rax_20
                int64_t var_488_1 = 0
                var_458 = rcx_15.o
                var_458:0xc.d = rcx_15 + rbx
                var_448_1.d = (var_458:4.q u>> 0x20).d + r13
            else if (rcx_12 == 2)
                var_490.q = 0
                int64_t var_488
                var_488.d = rbx
                var_488:4.d = r13
                var_458 = var_490.o
            else if (rcx_12 == 3)
                rcx_15 = *(arg3 + 0xd4)
                rax_20 = arg3[0x1b].d
                goto label_1405d785d
            var_448_1:4.q = 0
            var_448_1:0xc.d = rbx
            zmm6_2.d = float.s(var_458:4.d)
            var_438_1.d = r13
            zmm7.d = float.s(var_458:0xc.d)
            zmm9.d = float.s(var_448_1.d)
            zmm0_2.d = float.s(zx.q(r14[0xc].d))
            zmm6_2.d = zmm6_2.d f/ zmm0_2.d
            zmm7.d = zmm7.d f/ zmm0_2.d
            zmm0_2.d = float.s(zx.q(*(r14 + 0x64)))
            zmm8.d = float.s((var_458:4.q u>> 0x20).d)
            zmm9.d = zmm9.d f/ zmm0_2.d
            zmm8.d = zmm8.d f/ zmm0_2.d
        
        char rax_31 = arg3[0x1c].b
        void* r13_1 = rdx_4[1]
        int64_t* r13_2
        int64_t* r14_1
        
        if (rax_31 == 0)
            void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_32 = &rbx_3[0xa]
            
            if (rax_32 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x58)
                rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_32 = &rbx_3[0xa]
            
            *(arg2 + 0x30) = rax_32
            int64_t* rax_33 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_33 = rbx_3
            *(arg2 + 8) = &rbx_3[1]
            *rbx_3 = &data_142d56628
            rbx_3[1] = 0
            rbx_3[2].d = var_458.d
            *(rbx_3 + 0x14) = var_458:4.d
            rbx_3[3].d = var_458:8.d
            *(rbx_3 + 0x1c) = var_458:0xc.d
            rbx_3[4].d = var_448_1.d
            *(rbx_3 + 0x24) = var_448_1:4.d
            rbx_3[5].d = var_448_1:8.d
            *(rbx_3 + 0x2c) = var_448_1:0xc.d
            rbx_3[6].d = var_438_1.d
            *(rbx_3 + 0x34) = var_438_1:4.d
            rbx_3[7].d = var_438_1:8.d
            *(rbx_3 + 0x3c) = var_438_1:0xc.d
            rbx_3[8] = r14
            rbx_3[9] = r13_1
            
            if ((*(*r14 + 8))(r14) == 0)
                int64_t* rcx_20 = rbx_3[8]
                
                if ((*(*rcx_20 + 0x18))(rcx_20) == 0)
                    int64_t* rcx_21 = rbx_3[8]
                    
                    if ((*(*rcx_21 + 0x20))(rcx_21) == 0)
                        int64_t* rcx_22 = rbx_3[8]
                        (*(*rcx_22 + 0x10))(rcx_22)
            
            int64_t* rcx_23 = rbx_3[9]
            
            if ((*(*rcx_23 + 8))(rcx_23) != 0)
                r14_1 = arg4
                r13_2 = rdx_4
            else
                int64_t* rcx_24 = rbx_3[9]
                
                if ((*(*rcx_24 + 0x18))(rcx_24) != 0)
                    r13_2 = rdx_4
                    r14_1 = arg4
                else
                    int64_t* rcx_25 = rbx_3[9]
                    
                    if ((*(*rcx_25 + 0x20))(rcx_25) == 0)
                        int64_t* rcx_26 = rbx_3[9]
                        (*(*rcx_26 + 0x10))(rcx_26)
                    
                    r14_1 = arg4
                    r13_2 = rdx_4
        else if (rax_31 != 5)
            int32_t var_e0_1 = 0
            int32_t var_dc
            __builtin_memset(&var_dc, 0xff, 0x14)
            int128_t var_2f0
            __builtin_memset(&var_2f0, 0, 0x30)
            int64_t var_b8
            __builtin_memset(&var_b8, 0, 0x19)
            int128_t var_2a8_1 = zx.o(0)
            uint128_t var_c8_1 = data_142d3f5a0
            void* var_1b8 = r13_1
            int64_t var_1b0_1 = 0
            int32_t var_1a8_1 = 0xffffffff
            int16_t var_1a4_1 = 0x100
            int64_t var_f8
            __builtin_memset(&var_f8, 0, 0x11)
            int32_t var_e4_1 = 0
            int64_t var_294
            __builtin_memset(&var_294, 0, 0x30)
            int64_t var_260_1 = 0
            int32_t var_258_1 = 0
            int16_t var_254_1 = 0
            char var_252_1 = 0
            int16_t var_250_1 = 0
            bool var_9f_1 = *(r13_1 + 0x38) u> 1
            void var_1a0
            memset(&var_1a0, 0, 0xa8)
            int64_t r13_5 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_70 = r13_5 + 0x1a
            
            if (rax_70 u> *(arg2 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg2 + 0x30, 0x1c)
                r13_5 = (*(arg2 + 0x30) + 1) & 0xfffffffffffffffe
                rax_70 = r13_5 + 0x1a
            
            *(arg2 + 0x30) = rax_70
            wchar16 const i
            
            do
                i = *r12_2
                *(r12_2 + r13_5 - u"MediaCapture") = i
                r12_2 = &r12_2[1]
            while (i != 0)
            void*** rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_71 = &rcx_35[0x27]
            
            if (rax_71 u> *(arg2 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg2 + 0x30, 0x140)
                rcx_35 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_71 = &rcx_35[0x27]
            
            *(arg2 + 0x30) = rax_71
            void**** rax_72 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_72 = rcx_35
            *(arg2 + 8) = &rcx_35[1]
            sub_1405d11b0(rcx_35, &var_1b8, r13_5)
            *(arg2 + 0x1c4) = 1
            sub_1405d19b0(arg2, &var_1b8)
            int32_t i_1 = 0
            int64_t var_a8
            *(arg2 + 0x178) = var_a8:7.b
            uint64_t rax_75 = zx.q(*(arg2 + 0xa0))
            *(arg2 + 0x179) = 0
            *(arg2 + 0x1c4) = 1
            var_294.d = rax_75.d
            
            if (rax_75.d != 0)
                do
                    uint64_t i_2 = zx.q(i_1)
                    int64_t rdx_10 = (i_2 + 7) * 3
                    int64_t* rcx_40 = *(arg2 + (rdx_10 << 3))
                    var_490.q = rdx_10
                    
                    if (rcx_40 == 0)
                        *(&var_294:4 + i_2) = 0
                        rax_75.b = 0
                    else
                        *(&var_294:4 + i_2) = *(rcx_40 + 0x3c)
                        int64_t var_288
                        *(&var_288 + (i_2 << 2)) = rcx_40[8].d
                        int64_t rax_79 = (*(*rcx_40 + 0x10))()
                        
                        if (rax_79 != 0)
                            var_254_1:1.b = 1
                        
                        if (rax_79 == 0 || *(rax_79 + 0x68) u<= 1)
                            var_254_1:1.b = 0
                        
                        rax_75 = zx.q(*(&var_294:4 + i_2))
                        rdx_10 = var_490.q
                    
                    if (rax_75.b != 0)
                        var_258_1.w = *(*(arg2 + (rdx_10 << 3)) + 0x38)
                    
                    i_1 += 1
                while (i_1 u< var_294.d)
            
            int64_t* rcx_42 = *(arg2 + 0x168)
            int32_t var_268_1
            
            if (rcx_42 == 0)
                var_268_1 = 0
            else
                var_268_1 = *(rcx_42 + 0x3c)
                var_268_1 = rcx_42[8].d
                void* rax_83 = (*(*rcx_42 + 0x10))()
                
                if (rax_83 == 0 || *(rax_83 + 0x68) u<= 1)
                    var_254_1:1.b = 0
                else
                    var_254_1:1.b = 1
            
            var_260_1.b = *(arg2 + 0x170)
            var_260_1:1.b = *(arg2 + 0x171)
            var_260_1:2.b = *(arg2 + 0x172)
            var_260_1:3.b = *(arg2 + 0x173)
            var_260_1:4.d = *(arg2 + 0x174)
            
            if (var_268_1 != 0)
                var_258_1.w = *(*(arg2 + 0x168) + 0x38)
            
            var_258_1:2.b = *(arg2 + 0x178)
            var_258_1:3.b = *(arg2 + 0x179)
            char var_252_2 = *(arg2 + 0x17a)
            int64_t var_2b0_1 = data_14395d9e8
            int64_t var_2b8_1 = data_14395da18
            int64_t var_2c0_1 = data_14395e020
            int32_t var_298_1 = 1
            int64_t* rax_97 = std::_Get_future_error_what((*U"1111")[sx.q(data_1439c7a08)])
            void* var_300
            sub_1419a2ec0(rax_97, &var_300, &data_143f10cd0, 0)
            int64_t rax_98 = 0
            var_2f0.q = data_1439c93a0
            void* rcx_47 = var_300
            
            if (rcx_47 != 0)
                int64_t rdx_12 = sx.q(*(rcx_47 + 0x10c))
                var_490.q = rdx_12
                void* var_2f8
                int64_t* r13_8 = *(var_2f8 + 0x10)
                int64_t rcx_49 = rdx_12
                int64_t rax_99 = r13_8[3]
                
                if (*(rax_99 + (rdx_12 << 3)) == 0)
                    zmm6_2 = sub_1419ccf30(r13_8, rdx_12.d)
                    rax_99 = r13_8[3]
                    rcx_49 = var_490.q
                
                rax_98 = *(rax_99 + (rcx_49 << 3))
            
            int32_t rcx_51 = sx.d(arg3[0x1c].b)
            var_2f0:8.q = rax_98
            int128_t var_2d0
            
            if (rcx_51 == 1)
                void* var_350
                sub_1419a2ec0(rax_97, &var_350, &data_143f12160, 0)
                void* r13_12 = var_350
                int64_t rax_109 = 0
                
                if (r13_12 != 0)
                    int64_t rdx_26 = sx.q(*(r13_12 + 0x10c))
                    int64_t rcx_71 = rdx_26
                    var_490.q = rdx_26
                    void* var_348
                    int64_t* r12_7 = *(var_348 + 0x10)
                    int64_t rax_111 = r12_7[3]
                    
                    if (*(rax_111 + (rdx_26 << 3)) == 0)
                        sub_1419ccf30(r12_7, rdx_26.d)
                        rax_111 = r12_7[3]
                        rcx_71 = var_490.q
                    
                    rax_109 = *(rax_111 + (rcx_71 << 3))
                
                var_2d0.q = rax_109
                sub_1419870b0(arg2, &var_2f0, 2)
                int64_t* var_3a8 = r14
                
                if (r14 != 0)
                    r14[1].d += 1
                    r13_12 = var_350
                
                zmm6_2 = sub_1419acb70(r13_12, arg2, &var_3a8, &data_1439c9330, &data_1439c9370, 0)
            else if (rcx_51 == 2)
                void* var_360
                sub_1419a2ec0(rax_97, &var_360, &data_143f12300, 0)
                void* r13_11 = var_360
                int64_t rax_106 = 0
                
                if (r13_11 != 0)
                    int64_t rdx_22 = sx.q(*(r13_11 + 0x10c))
                    int64_t rcx_66 = rdx_22
                    var_490.q = rdx_22
                    void* var_358
                    int64_t* r12_6 = *(var_358 + 0x10)
                    int64_t rax_108 = r12_6[3]
                    
                    if (*(rax_108 + (rdx_22 << 3)) == 0)
                        sub_1419ccf30(r12_6, rdx_22.d)
                        rax_108 = r12_6[3]
                        rcx_66 = var_490.q
                    
                    rax_106 = *(rax_108 + (rcx_66 << 3))
                
                var_2d0.q = rax_106
                sub_1419870b0(arg2, &var_2f0, 2)
                int64_t* var_3b0 = r14
                
                if (r14 != 0)
                    r14[1].d += 1
                    r13_11 = var_360
                
                zmm6_2 = sub_1419ac8b0(r13_11, arg2, &var_3b0, &data_1439c9330, &data_1439c9380, 0)
            else if (rcx_51 == 3)
                void* var_370
                sub_1419a2ec0(rax_97, &var_370, &data_143f124a0, 0)
                void* r13_10 = var_370
                int64_t rax_103 = 0
                
                if (r13_10 != 0)
                    int64_t rdx_18 = sx.q(*(r13_10 + 0x10c))
                    int64_t rcx_61 = rdx_18
                    var_490.q = rdx_18
                    void* var_368
                    int64_t* r12_5 = *(var_368 + 0x10)
                    int64_t rax_105 = r12_5[3]
                    
                    if (*(rax_105 + (rdx_18 << 3)) == 0)
                        sub_1419ccf30(r12_5, rdx_18.d)
                        rax_105 = r12_5[3]
                        rcx_61 = var_490.q
                    
                    rax_103 = *(rax_105 + (rcx_61 << 3))
                
                var_2d0.q = rax_103
                sub_1419870b0(arg2, &var_2f0, 2)
                int64_t* var_3b8 = r14
                
                if (r14 != 0)
                    r14[1].d += 1
                    r13_10 = var_370
                
                zmm6_2 = sub_1419ac0a0(r13_10, arg2, &var_3b8)
            else if (rcx_51 == 4)
                void* var_380
                sub_1419a2ec0(rax_97, &var_380, &data_143f12640, 0)
                void* r13_9 = var_380
                int64_t rax_100 = 0
                
                if (r13_9 != 0)
                    int64_t rdx_14 = sx.q(*(r13_9 + 0x10c))
                    int64_t rcx_56 = rdx_14
                    var_490.q = rdx_14
                    void* var_378
                    int64_t* r12_4 = *(var_378 + 0x10)
                    int64_t rax_102 = r12_4[3]
                    
                    if (*(rax_102 + (rdx_14 << 3)) == 0)
                        sub_1419ccf30(r12_4, rdx_14.d)
                        rax_102 = r12_4[3]
                        rcx_56 = var_490.q
                    
                    rax_100 = *(rax_102 + (rcx_56 << 3))
                
                var_2d0.q = rax_100
                sub_1419870b0(arg2, &var_2f0, 2)
                int64_t* var_3c0 = r14
                
                if (r14 != 0)
                    r14[1].d += 1
                    r13_9 = var_380
                
                zmm6_2 = sub_1419ad300(r13_9, arg2, &var_3c0)
            int128_t zmm1_2 = data_143dbb1e0
            int128_t var_1f8
            var_4c0.q = &var_1f8
            int32_t var_1e8_1 = 1
            int64_t* rcx_76 = data_143f0f180
            char var_1d0_1 = 0
            int32_t var_1d4_1 = (1 << (data_1439c7a34).b) - 1
            var_1f8 = zx.o(0)
            int128_t var_1e4_1 = zmm1_2
            int64_t var_1c8_1 = 0
            int32_t var_1c0_1 = 0
            var_4c8_1.d = 4
            int64_t var_428
            (*(*rcx_76 + 0x498))(rcx_76, &var_428, &data_143f02b98, 0x80, var_4c8_1, var_4c0)
            int64_t* rcx_77 = data_143f0f180
            var_4c0.d = 1
            var_4c8_1.d = 0x80
            int32_t* rax_116 =
                (*(*rcx_77 + 0x130))(rcx_77, &data_143f02b98, var_428, 0, var_4c8_1, var_4c0)
            *rax_116 = 0xbf800000
            rax_116[1] = 0x3f800000
            rax_116[2] = 0x3f800000
            rax_116[3] = 0x3f800000
            rax_116[8] = 0x3f800000
            rax_116[9] = 0x3f800000
            rax_116[0xa] = 0x3f800000
            rax_116[0xb] = 0x3f800000
            rax_116[0x10] = 0xbf800000
            rax_116[0x11] = 0xbf800000
            rax_116[0x12] = 0x3f800000
            rax_116[0x13] = 0x3f800000
            rax_116[0x18] = 0x3f800000
            rax_116[0x19] = 0xbf800000
            rax_116[0x1a] = 0x3f800000
            rax_116[0x1b] = 0x3f800000
            rax_116[4] = zmm6_2.d
            rax_116[5] = zmm8.d
            rax_116[0xc] = zmm7.d
            rax_116[0xd] = zmm8.d
            rax_116[0x14] = zmm6_2.d
            rax_116[0x15] = zmm9.d
            rax_116[0x1c] = zmm7.d
            rax_116[0x1d] = zmm9.d
            int64_t* rcx_78 = data_143f0f180
            (*(*rcx_78 + 0x138))(rcx_78, &data_143f02b98, var_428)
            int64_t r14_2 = var_428
            void*** rcx_81 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_118 = &rcx_81[5]
            
            if (rax_118 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_81 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_118 = &rcx_81[5]
            
            *(arg2 + 0x30) = rax_118
            *(arg2 + 0x14) += 1
            **(arg2 + 8) = rcx_81
            *(arg2 + 8) = &rcx_81[1]
            rcx_81[1] = 0
            *rcx_81 = &data_142d56618
            rcx_81[2].d = 0
            rcx_81[3] = r14_2
            rcx_81[4].d = 0
            zmm7 = zx.o(*(arg3 + 0xc4))
            void*** rcx_87 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            zmm6_2 = _mm_cvtepi32_ps(zx.o(arg3[0x19].d))
            void* rax_121 = &rcx_87[5]
            zmm7 = _mm_cvtepi32_ps(zmm7)
            
            if (rax_121 u> *(arg2 + 0x38))
                zmm6_2 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_87 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_121 = &rcx_87[5]
            
            *(arg2 + 0x30) = rax_121
            void** rax_122 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_122 = rcx_87
            *(arg2 + 8) = &rcx_87[1]
            rcx_87[1] = 0
            *rcx_87 = &data_142d54998
            *(rcx_87 + 0x1c) = zmm7.d
            rcx_87[4].d = zmm6_2.d
            rcx_87[2] = 0
            rcx_87[3].d = 0
            *(rcx_87 + 0x24) = 0x3f800000
            void*** rcx_93 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_124 = &rcx_93[4]
            
            if (rax_124 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x28)
                rcx_93 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_124 = &rcx_93[4]
            
            *(arg2 + 0x30) = rax_124
            *(arg2 + 0x14) += 1
            r13_2 = rdx_4
            **(arg2 + 8) = rcx_93
            *(arg2 + 8) = &rcx_93[1]
            rcx_93[1] = 0
            *rcx_93 = &data_142d54988
            rcx_93[2].d = 0
            *(rcx_93 + 0x14) = 2
            rcx_93[3].d = 1
            int64_t rax_127 = r13_2[1]
            int64_t* r14_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rcx_97 = &r14_5[1]
            
            if (rcx_97 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x10)
                r14_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_97 = &r14_5[1]
            
            *(arg2 + 0x30) = rcx_97
            *r14_5 = rax_127
            void*** rcx_101 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_128 = &rcx_101[5]
            
            if (rax_128 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_101 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_128 = &rcx_101[5]
            
            *(arg2 + 0x30) = rax_128
            void**** rax_129 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_129 = rcx_101
            *(arg2 + 8) = &rcx_101[1]
            rcx_101[1] = 0
            *rcx_101 = &data_142d549c8
            rcx_101[2].d = 1
            rcx_101[3] = r14_5
            rcx_101[4].d = 0
            void*** rcx_107 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_131 = &rcx_107[2]
            
            if (rax_131 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x18)
                rcx_107 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_131 = &rcx_107[2]
            
            *(arg2 + 0x30) = rax_131
            int64_t* rax_132 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_132 = rcx_107
            *(arg2 + 8) = &rcx_107[1]
            rcx_107[1] = 0
            *rcx_107 = &data_142d549b8
            *(arg2 + 0x1c4) = 0
            *(arg2 + 0x178) = 0
            sub_1405d1550(&var_428)
            int64_t var_b0
            sub_1405d1550(&var_b0)
            r14_1 = arg4
        else
            int32_t var_410_1 = zmm8.d
            int32_t var_40c_1 = zmm9.d
            int32_t var_408_1 = zmm6_2.d
            int32_t var_404_1 = zmm7.d
            void* var_340 = r13_1
            
            if (r13_1 != 0)
                *(r13_1 + 8) += 1
                r14 = var_468
            
            int64_t* var_338 = r14
            
            if (r14 != 0)
                r14[1].d += 1
            
            r14_1 = arg4
            int64_t var_310 = r14_1[6]
            void* rax_68 = r14_1[7]
            void* var_308_1 = rax_68
            
            if (rax_68 != 0)
                *(rax_68 + 8) += 1
            
            var_4a8 = var_410_1.q
            var_4b0.q = var_408_1.q
            var_4b8.q = &var_458
            var_4c0.q = &var_340
            var_4c8_1 = &var_338
            (*(*arg3 + 0x2c0))(arg3, arg2, &r14_1[1], &var_310, var_4c8_1, var_4c0, var_4b8, 
                var_4b0, var_4a8)
            r13_2 = rdx_4
        
        bool z_1
        
        if (0 == *(arg3 + 0xfb))
            *(arg3 + 0xfb) = 0
            z_1 = true
        else
            int64_t rax_61
            rax_61.b = *(arg3 + 0xfb)
            z_1 = false
        
        if (z_1)
            int64_t* r13_13 = r13_2[1]
            void*** rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            var_490.q = *r14_1
            int64_t var_3f0_1 = data_142d57d10.q
            zmm0_2 = data_142d57920
            void* rax_135 = &rbx_8[0xa]
            uint128_t var_3e0_1 = data_142d3f800
            
            if (rax_135 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x58)
                rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_135 = &rbx_8[0xa]
            
            *(arg2 + 0x30) = rax_135
            int64_t* rax_136 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_136 = rbx_8
            *(arg2 + 8) = &rbx_8[1]
            rbx_8[1] = 0
            *rbx_8 = &data_142d56628
            rbx_8[2].d = var_3f0_1.d
            *(rbx_8 + 0x14) = var_3f0_1:4.d
            int32_t var_3e8
            rbx_8[3].d = var_3e8
            int32_t var_3e4
            *(rbx_8 + 0x1c) = var_3e4
            __builtin_memset(&rbx_8[4], 0xff, 0x14)
            *(rbx_8 + 0x34) = zmm0_2:4.d
            rbx_8[7].d = zmm0_2:8.d
            *(rbx_8 + 0x3c) = zmm0_2:0xc.d
            rbx_8[9] = var_490.q
            rbx_8[8] = r13_13
            
            if ((*(*r13_13 + 8))(r13_13) == 0)
                int64_t* rcx_115 = rbx_8[8]
                
                if ((*(*rcx_115 + 0x18))(rcx_115) == 0)
                    int64_t* rcx_116 = rbx_8[8]
                    
                    if ((*(*rcx_116 + 0x20))(rcx_116) == 0)
                        int64_t* rcx_117 = rbx_8[8]
                        (*(*rcx_117 + 0x10))(rcx_117)
            
            int64_t* rcx_118 = rbx_8[9]
            
            if ((*(*rcx_118 + 8))(rcx_118) == 0)
                int64_t* rcx_119 = rbx_8[9]
                
                if ((*(*rcx_119 + 0x18))(rcx_119) == 0)
                    int64_t* rcx_120 = rbx_8[9]
                    
                    if ((*(*rcx_120 + 0x20))(rcx_120) == 0)
                        int64_t* rcx_121 = rbx_8[9]
                        (*(*rcx_121 + 0x10))(rcx_121)
            
            char temp0_4 = *(r14_1 + 0x2c)
            *(r14_1 + 0x2c) = 1
            int64_t rax_160
            rax_160.b = temp0_4
            *(arg1 + 0x100) += 1
        else
            void* rax_62 = r13_2[1]
            void* var_398 = rax_62
            
            if (rax_62 != 0)
                *(rax_62 + 8) += 1
            
            int64_t var_330 = r14_1[6]
            void* rax_64 = r14_1[7]
            void* var_328_1 = rax_64
            
            if (rax_64 != 0)
                *(rax_64 + 8) += 1
            
            (*(*arg3 + 0x2b8))(arg3, &r14_1[1], &var_330, &var_398, var_4c8_1, var_4c0, var_4b8, 
                var_4b0, var_4a8)
            char temp0_1 = *(r14_1 + 0x2c)
            *(r14_1 + 0x2c) = 0
            int64_t rax_66
            rax_66.b = temp0_1
        
        int64_t* rcx_122 = var_460
        
        if (rcx_122 != 0)
            (*(*rcx_122 + 0x38))(rcx_122)
else
    int64_t r8_1 = *(arg6 + 0xa0)
    
    if (r8_1 == 0)
        goto label_1405d76a9
    
    int64_t* rcx = data_143f0f180
    void var_420
    (*(*rcx + 0x338))(rcx, &var_420, r8_1)
    sub_1405d1600(&var_468, &var_420)
    rcx_2 = &var_420
label_1405d7610:
    zmm6_1 = sub_1405d1550(rcx_2)
    r14 = var_468
    r12_1 = arg4
    
    if (r14 == 0)
        goto label_1405d76b1
    
    if (r12_1 != 0)
        if (arg3[0x18].d != *(r14 + 0x3c))
            goto label_1405d76b1
        
        char rcx_7 = arg3[0x1a].b
        
        if (rcx_7 == 0)
            rbx = arg8.d
            r13 = arg8:4.d
            
            if (rbx != r14[0xc].d || r13 != *(r14 + 0x64))
                goto label_1405d76b1
            
            goto label_1405d76b6
        
        int64_t rax_10 = data_143dbb180
        int32_t rax_11
        int32_t rcx_8
        
        if (rcx_7 != 3)
            rcx_8 = rax_10:4.d
            rax_11 = rax_10.d
        else
            rax_11 = *(arg3 + 0xd4)
            rcx_8 = arg3[0x1b].d
        
        if (rax_11 + rbx u> r14[0xc].d || rcx_8 + r13 u> *(r14 + 0x64))
            goto label_1405d76b1
        
        goto label_1405d76b6
bool z_2

if (0 == *(arg3 + 0xfb))
    *(arg3 + 0xfb) = 0
    z_2 = true
else
    int64_t rax_163
    rax_163.b = *(arg3 + 0xfb)
    z_2 = false

if (z_2 && (*(*arg3 + 0x260))(arg3) != 0)
    bool z_3
    
    if (0 == *(arg5 + 0x2c))
        *(arg5 + 0x2c) = 0
        z_3 = true
    else
        int64_t rax_166
        rax_166.b = *(arg5 + 0x2c)
        z_3 = false
    
    if (not(z_3))
        int64_t* rcx_124 = data_143f0f180
        int64_t r8_12 = *arg5
        int32_t var_470
        var_4b8.q = &var_470
        int32_t var_46c
        var_4c0.q = &var_46c
        int64_t var_400 = 0
        var_46c = 0
        var_470 = 0
        (*(*rcx_124 + 0x640))(rcx_124, arg2, r8_12, 0, &var_400, var_4c0, var_4b8, var_4b0, var_4a8)
        int64_t var_320 = arg5[6]
        void* rax_169 = arg5[7]
        void* var_318_1 = rax_169
        
        if (rax_169 != 0)
            *(rax_169 + 8) += 1
        
        var_4c0.d = var_470
        int64_t* var_4c8_2
        var_4c8_2.d = var_46c
        (*(*arg3 + 0x2b0))(arg3, &arg5[1], &var_320, var_400, var_4c8_2, var_4c0)
        char temp0_5 = *(arg5 + 0x2c)
        *(arg5 + 0x2c) = 0
        int64_t rsi
        rsi.b = temp0_5
        *(arg1 + 0x100) -= 1
        int64_t* rcx_126 = data_143f0f180
        (*(*rcx_126 + 0x648))(rcx_126, arg2, *arg5)

*(arg3 + 0xfc) -= 1
sub_1405d1550(&var_468)
int64_t* result = arg9
int64_t rcx_128 = *result

if (rcx_128 != 0)
    result = sub_140a74f90(rcx_128)

__security_check_cookie(rax_1 ^ &var_4e8)
return result
