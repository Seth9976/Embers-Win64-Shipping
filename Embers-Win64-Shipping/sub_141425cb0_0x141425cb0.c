// 函数: sub_141425cb0
// 地址: 0x141425cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1710)
void var_1738
int64_t rax_1 = __security_cookie ^ &var_1738
uint64_t rsi = arg2
sub_140b33630("RenderCustomDepthPass")
int64_t rbx
rbx.b = 0
void* rdx = *(*(arg1 + 8) + 0x10)

if (rdx == 0)
label_141425d12:
    int32_t i = 0
    
    if (*(arg1 + 0xa8) s> 0)
        char* rax_5 = *(arg1 + 0xa0) + 0x18a9
        
        do
            if (*rax_5 != 0)
                rbx.b = 1
                break
            
            i += 1
            rax_5 = &rax_5[0x5240]
        while (i s< *(arg1 + 0xa8))
else
    char rax_3 = *(rdx + 0x11a)
    
    if (rax_3 != 4 && rax_3 != 7)
        goto label_141425d12

int64_t* var_1668 = &data_143ec4c60
int64_t* r13 = &data_143ec4c60
char rax_6
uint128_t zmm6
rax_6, zmm6 = sub_141393960(&data_143ec4c60, rsi, rbx.b)

if (rax_6 != 0)
    int32_t i_1 = 0
    uint128_t var_1660
    
    if (*(arg1 + 0xa8) s> 0)
        uint64_t rax_7 = zx.q(data_14401b1a0)
        int64_t r12_1 = 0
        int128_t zmm12 = zx.o(0)
        uint128_t zmm13 = -0x4010000000000000
        uint128_t zmm14 = 0x3ff0000000000000
        int128_t zmm15 = 0x3f800000
        uint128_t var_48_1 = zmm6
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        uint128_t zmm8
        uint128_t var_68_1 = zmm8
        uint128_t zmm9
        uint128_t var_78_1 = zmm9
        int128_t zmm10
        int128_t var_88_1 = zmm10
        int128_t zmm11
        int128_t var_98_1 = zmm11
        
        do
            int64_t* rbx_2 = r12_1 * 0x5240 + *(arg1 + 0xa0)
            
            if ((*(rbx_2 + 0x497c) & 2) == 0)
                if (*(rbx_2 + 0xd7a) != 0)
                    if (sub_142391c90(zx.q(rbx_2[0x15a].d)) == 0)
                    label_141425e94:
                        int32_t rdi_1 = rbx_2[0x2a9].d
                        uint64_t rdx_2 = zx.q(rdi_1)
                        int64_t* var_1718
                        uint32_t var_15f8[0x4]
                        int64_t rdx_3
                        int128_t* r8_1
                        
                        if (rdi_1 s>= 3)
                            int128_t var_1578
                            __builtin_memset(&var_1578, 0, 0x120)
                            sub_1413aab70(r13, rdx_2.d, 0, &var_1578)
                            r8_1 = &var_1578
                            rdx_3 = *(*(arg1 + 8) + 0xa8)
                        else
                            __builtin_memset(&var_15f8, 0, 0x60)
                            var_1718 = &var_15f8
                            sub_1413aa7b0(r13, rdx_2, 0, 0, var_1718)
                            r8_1 = &var_15f8
                            rdx_3 = *(*(arg1 + 8) + 0xb0)
                        
                        int64_t* rcx_4 = data_143f0f180
                        int64_t r9_2 = *rcx_4
                        int32_t var_1710
                        int128_t* var_1708
                        (*(r9_2 + 0x100))(rcx_4, rdx_3, r8_1, r9_2, var_1718, var_1710, var_1708)
                        TEB* gsbase
                        
                        if (data_143ed4ac8
                                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rax_7 << 3))))
                            _Init_thread_header(&data_143ed4ac8)
                            
                            if (data_143ed4ac8 == 0xffffffff)
                                int64_t* rcx_62 = data_143db18d0
                                
                                if (rcx_62 == 0)
                                    sub_140a53c40()
                                    rcx_62 = data_143db18d0
                                
                                int64_t r8_17
                                r8_17.b = 1
                                int64_t* rax_116 =
                                    (*(*rcx_62 + 0xb0))(rcx_62, r.Mobile.CustomDepthDownSample", 
                                    r8_17)
                                
                                if (rax_116 != 0)
                                    int64_t rdx_48 = *rax_116
                                    rax_116 = (*(rdx_48 + 0x58))(rax_116, rdx_48)
                                
                                data_143ed4ac0 = rax_116
                                _Init_thread_footer(&data_143ed4ac8)
                        
                        void* rax_15
                        
                        if (rdi_1 s< 3)
                            rax_15 = data_143ed4ac0
                        
                        int64_t* rax_33
                        int128_t zmm0_2
                        
                        if (rdi_1 s>= 3 || rax_15 == 0 || *(rax_15 + 4) s<= 0)
                            rdi_1.b = 0
                            int128_t var_1598
                            rax_33 = &var_1598
                            var_1598 = *(rbx_2 + 0x1598)
                        else
                            zmm0_2 = *(rbx_2 + 0x1598)
                            rdi_1.b = 1
                            int64_t rcx_6 = zmm0_2:8.q
                            int32_t var_16a4_1 = 2
                            int64_t r8_2 = 2.q
                            uint32_t r9_4 = (r8_2 u>> 0x20).d
                            int32_t var_169c_1 =
                                divs.dp.d(sx.q((rcx_6 u>> 0x20).d - 1 + r9_4), r9_4)
                            int64_t rax_24 = zmm0_2.q
                            int128_t var_16f8_1
                            var_16f8_1.q = rax_24
                            int32_t temp14_1
                            int32_t temp15_1
                            temp14_1:temp15_1 = sx.q(rax_24.d)
                            var_16f8_1.d = (temp15_1 - temp14_1) s>> 1
                            var_16f8_1:4.d = divs.dp.d(sx.q(var_16f8_1:4.d), (r8_2 u>> 0x20).d)
                            int64_t var_1628 = var_16f8_1.q
                            int64_t var_1620_1 = divs.dp.d(sx.q((rcx_6 - 1).d + 2), 2).q
                            rax_33 = &var_1628
                        
                        zmm0_2 = *rax_33
                        uint32_t var_16e8[0x4]
                        void** const rax_84
                        void*** rcx_11
                        uint128_t zmm1_1
                        void* rax_37
                        
                        if (sub_1422eb5d0(rbx_2) != 0)
                            if (*(rbx_2 + 0xd7b) == 0)
                                rcx_11 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
                                zmm7.d = float.s(zx.q(*(arg1 + 0x3b8)))
                                void* rax_86 = &rcx_11[5]
                                zmm6 = _mm_cvtepi32_ps(zx.o(zmm0_2:0xc.d))
                                
                                if (rax_86 u> *(rsi + 0x38))
                                    zmm6 = sub_140b0e3d0(rsi + 0x30, 0x30)
                                    rcx_11 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
                                    rax_86 = &rcx_11[5]
                                
                                *(rsi + 0x30) = rax_86
                                void**** rax_87 = *(rsi + 8)
                                *(rsi + 0x14) += 1
                                *rax_87 = rcx_11
                                rax_37 = &rcx_11[1]
                                *(rsi + 8) = rax_37
                                rcx_11[2] = 0
                                goto label_1414263ca
                            
                            void* r10_1 = *(arg1 + 0xa0)
                            uint128_t zmm0_3 = *(r10_1 + 0x1598)
                            uint128_t* rax_55
                            
                            if (rdi_1.b == 0)
                                uint128_t var_1588 = zmm0_3
                                rax_55 = &var_1588
                            else
                                int64_t rcx_15 = zmm0_3:8.q
                                int32_t var_1694_1 = 2
                                int64_t r8_4 = 2.q
                                uint32_t r9_6 = (r8_4 u>> 0x20).d
                                int32_t var_168c_1 =
                                    divs.dp.d(sx.q((rcx_15 u>> 0x20).d - 1 + r9_6), r9_6)
                                int64_t rax_46 = zmm0_3.q
                                uint128_t var_16f8_3
                                var_16f8_3.q = rax_46
                                int32_t temp34_1
                                int32_t temp35_1
                                temp34_1:temp35_1 = sx.q(rax_46.d)
                                var_16f8_3.d = (temp35_1 - temp34_1) s>> 1
                                var_16f8_3:4.d = divs.dp.d(sx.q(var_16f8_3:4.d), (r8_4 u>> 0x20).d)
                                int64_t var_1618 = var_16f8_3.q
                                int64_t var_1610_1 = divs.dp.d(sx.q((rcx_15 - 1).d + 2), 2).q
                                rax_55 = &var_1618
                            
                            var_16e8 = *rax_55
                            zmm0_3 = *(r10_1 + 0x67d8)
                            uint128_t* rax_73
                            
                            if (rdi_1.b == 0)
                                var_1660 = zmm0_3
                                rax_73 = &var_1660
                            else
                                int64_t rcx_17 = zmm0_3:8.q
                                int32_t var_1684_1 = 2
                                int64_t r8_6 = 2.q
                                uint32_t r9_8 = (r8_6 u>> 0x20).d
                                int32_t var_167c_1 =
                                    divs.dp.d(sx.q((rcx_17 u>> 0x20).d - 1 + r9_8), r9_8)
                                int64_t rax_64 = zmm0_3.q
                                uint128_t var_16f8_4
                                var_16f8_4.q = rax_64
                                int32_t temp54_1
                                int32_t temp55_1
                                temp54_1:temp55_1 = sx.q(rax_64.d)
                                var_16f8_4.d = (temp55_1 - temp54_1) s>> 1
                                var_16f8_4:4.d = divs.dp.d(sx.q(var_16f8_4:4.d), (r8_6 u>> 0x20).d)
                                int64_t var_1608 = var_16f8_4.q
                                int64_t var_1600_1 = divs.dp.d(sx.q((rcx_17 - 1).d + 2), 2).q
                                rax_73 = &var_1608
                            
                            zmm1_1 = *rax_73
                            int64_t rcx_19 = var_16e8[2].q
                            int64_t rdx_20 = _mm_bsrli_si128(zmm1_1, 8).q
                            zmm6.d = float.s(rdx_20 u>> 0x20)
                            zmm7.d = float.s(rcx_19 u>> 0x20)
                            zmm8.d = float.s(zx.q(rdx_20.d))
                            zmm9.d = float.s(zx.q(rcx_19.d))
                            zmm10.d = float.s(zx.q(zmm1_1.d))
                            rcx_11 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
                            zmm11.d = float.s(zx.q(var_16e8[0]))
                            void* rax_81 = &rcx_11[7]
                            
                            if (rax_81 u> *(rsi + 0x38))
                                zmm6 = sub_140b0e3d0(rsi + 0x30, 0x40)
                                rcx_11 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
                                rax_81 = &rcx_11[7]
                            
                            *(rsi + 0x30) = rax_81
                            void** rax_82 = *(rsi + 8)
                            *(rsi + 0x14) += 1
                            *rax_82 = rcx_11
                            *(rsi + 8) = &rcx_11[1]
                            rcx_11[1] = 0
                            rax_84 = &data_142f115a8
                            rcx_11[2].d = zmm11.d
                            *(rcx_11 + 0x14) = zmm10.d
                            *(rcx_11 + 0x24) = zmm9.d
                            rcx_11[5].d = zmm8.d
                            *(rcx_11 + 0x2c) = zmm7.d
                            rcx_11[6].d = zmm6.d
                            rcx_11[3] = 0
                            rcx_11[4].d = 0
                            *(rcx_11 + 0x34) = 0x3f800000
                        else
                            rcx_11 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
                            zmm6 = _mm_cvtepi32_ps(zx.o(zmm0_2:0xc.d))
                            void* rax_35 = &rcx_11[5]
                            zmm7 = _mm_cvtepi32_ps(zx.o(zmm0_2:8.d))
                            zmm8 = _mm_cvtepi32_ps(zx.o(zmm0_2:4.d))
                            zmm9 = _mm_cvtepi32_ps(zx.o(zmm0_2.d))
                            
                            if (rax_35 u> *(rsi + 0x38))
                                zmm6 = sub_140b0e3d0(rsi + 0x30, 0x30)
                                rcx_11 = (*(rsi + 0x30) + 7) & 0xfffffffffffffff8
                                rax_35 = &rcx_11[5]
                            
                            *(rsi + 0x30) = rax_35
                            void** rax_36 = *(rsi + 8)
                            *(rsi + 0x14) += 1
                            *rax_36 = rcx_11
                            rax_37 = &rcx_11[1]
                            *(rsi + 8) = rax_37
                            rcx_11[2].d = zmm9.d
                            *(rcx_11 + 0x14) = zmm8.d
                        label_1414263ca:
                            *rax_37 = 0
                            rax_84 = &data_142d54998
                            *(rcx_11 + 0x24) = 0x3f800000
                            rcx_11[4].d = zmm6.d
                            *(rcx_11 + 0x1c) = zmm7.d
                            rcx_11[3].d = 0
                        *rcx_11 = rax_84
                        int32_t var_16d8
                        int64_t j_4
                        uint128_t zmm2
                        int64_t* rcx_49
                        
                        if (*(data_143eceee8 + 4) != 0 || rbx_2[0x2a4].d != 2)
                            int64_t* rcx_44 = data_143f0f180
                            (*(*rcx_44 + 0x100))(rcx_44, *(*(arg1 + 8) + 0xb8), rbx_2[0x2b6])
                            char rax_96 = sub_1422eb5d0(rbx_2)
                            
                            if (rax_96 != 0)
                                if (*(*rbx_2 + 8) s<= 0)
                                    goto label_1414268c8
                                
                                goto label_14142688f
                            
                            if (*(rbx_2 + 0xd7c) == rax_96 || *(*rbx_2 + 8) s<= 0)
                            label_1414268c8:
                                rcx_49 = data_143f0f180
                                (*(*rcx_49 + 0x100))(rcx_49, *(*(arg1 + 8) + 0xc0), rbx_2[0x2b6])
                            else
                            label_14142688f:
                                char rax_98
                                int32_t rdx_34
                                rax_98, rdx_34 = sub_142391f10(rbx_2)
                                void* rax_99 =
                                    sub_1422e5d90(*rbx_2, sbb.d(rdx_34, rdx_34, rax_98 != 0) & 2)
                                int64_t* rcx_48 = data_143f0f180
                                int64_t r9_11 = *rcx_48
                                (*(r9_11 + 0x100))(rcx_48, *(*(arg1 + 8) + 0xc0), 
                                    *(rax_99 + 0x15b0), r9_11)
                        else
                            void var_10a8
                            memcpy(&var_10a8, rbx_2[0x2b6], 0xfc0)
                            void* rax_89 = &rbx_2[0x50]
                            int64_t j_2 = 7
                            int32_t var_1458
                            uint128_t* rcx_32 = &var_1458
                            uint128_t zmm0_4
                            int64_t j
                            
                            do
                                rcx_32 = &rcx_32[8]
                                zmm0_4 = *rax_89
                                zmm1_1 = *(rax_89 + 0x10)
                                rax_89 += 0x80
                                rcx_32[-8] = zmm0_4
                                zmm0_4 = *(rax_89 - 0x60)
                                rcx_32[-7] = zmm1_1
                                zmm1_1 = *(rax_89 - 0x50)
                                rcx_32[-6] = zmm0_4
                                zmm0_4 = *(rax_89 - 0x40)
                                rcx_32[-5] = zmm1_1
                                zmm1_1 = *(rax_89 - 0x30)
                                rcx_32[-4] = zmm0_4
                                zmm0_4 = *(rax_89 - 0x20)
                                rcx_32[-3] = zmm1_1
                                zmm1_1 = *(rax_89 - 0x10)
                                rcx_32[-2] = zmm0_4
                                rcx_32[-1] = zmm1_1
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                            zmm1_1 = *(rax_89 + 0x10)
                            *rcx_32 = *rax_89
                            zmm0_4 = *(rax_89 + 0x20)
                            rcx_32[1] = zmm1_1
                            rcx_32[2] = zmm0_4
                            float var_1434
                            float zmm5_1[0x2] = var_1434
                            int32_t var_1438
                            int32_t var_10b8
                            zmm2.d = var_1438.d f- var_10b8
                            int32_t var_10b4
                            zmm5_1[0] = zmm5_1[0] f- var_10b4
                            var_1438 = zmm2.d
                            var_1434 = zmm5_1[0]
                            uint128_t var_16c8
                            uint128_t var_16b8
                            int32_t var_1454
                            int32_t var_1450
                            int32_t var_144c
                            int32_t var_1448
                            int32_t var_1440
                            int32_t var_143c
                            int32_t var_142c
                            int32_t var_1428
                            int32_t var_1424
                            int32_t var_141c
                            
                            if (var_1448.d f!= zmm12.d || var_1428.d f!= zmm12.d
                                    || var_1454.d f!= zmm12.d || var_1424.d f!= zmm12.d
                                    || var_1450.d f!= zmm12.d || var_1440.d f!= zmm12.d
                                    || var_144c.d f!= zmm12.d || var_143c.d f!= zmm12.d
                                    || var_142c.d f!= zmm15.d || var_141c.d f!= zmm12.d)
                                sub_140631b10(&var_1458, &var_16e8)
                            else
                                zmm6 = var_1458
                                uint128_t temp0_16 = _mm_cvtps_pd(zmm2.q)
                                var_16e8[1].q = j_2
                                var_16e8[3].q = j_2
                                j_4 = j_2
                                var_16c8.q = j_2
                                var_16c8:8.d = j_2.d
                                zmm6 = _mm_cvtps_pd(zmm6.q)
                                var_16b8:8.d = 0x3f800000
                                int32_t var_1420
                                float temp0_18[0x2] = _mm_cvtps_pd(var_1420)
                                zmm1_1.q = zmm13.q f/ zmm6.q
                                int32_t var_1444
                                float temp0_19[0x2] = _mm_cvtps_pd(var_1444)
                                zmm1_1.q = zmm1_1.q f* temp0_16.q
                                zmm2.q = zmm13.q f/ temp0_19
                                zmm8.d = fconvert.s(zmm1_1.q)
                                var_16b8.d = zmm8.d
                                zmm2.q = zmm2.q f* _mm_cvtps_pd(zmm5_1).q
                                zmm5_1 = (zx.o(0)).q
                                zmm1_1.q = zmm13.q f/ temp0_18
                                zmm7.d = fconvert.s(zmm2.q)
                                int32_t var_1430
                                zmm1_1.q = zmm1_1.q f* _mm_cvtps_pd(var_1430.q).q
                                var_16b8:4.d = zmm7.d
                                zmm0_4.q = zmm14.q f/ temp0_19
                                zmm5_1[0] = fconvert.s(zmm1_1.q)
                                zmm1_1.q = zmm14.q f/ temp0_18
                                float zmm3[0x2] = (zx.o(0)).q
                                var_16b8:0xc.d = zmm5_1[0]
                                zmm3[0] = fconvert.s(zmm1_1.q)
                                zmm2.d = fconvert.s(zmm0_4.q)
                                var_16c8:0xc.d = zmm3[0]
                                zmm1_1.q = zmm14.q f/ zmm6.q
                                j_4.d = zmm2.d
                                zmm0_4.d = fconvert.s(zmm1_1.q)
                                var_16e8[0] = zmm0_4.d
                            
                            uint128_t var_13d8_1 = var_16e8
                            uint128_t var_13c8_1 = var_16d8.o
                            uint128_t var_13b8_1 = var_16c8
                            uint128_t var_13a8_1 = var_16b8
                            var_10b8 = data_143dbb1f0.d.d
                            var_10b4 = data_143dbb1f0:4.d.d
                            sub_141366e50(&var_1458)
                            var_1708 = &var_10a8
                            var_1710 = 2
                            var_1718 = &var_15f8
                            zmm12, zmm13, zmm14, zmm15 = sub_14142a220(rbx_2, r13, &var_1458, 
                                &var_1458, var_1718, var_1710, var_1708)
                            int64_t* rcx_36 = data_143f0f180
                            (*(*rcx_36 + 0x100))(rcx_36, *(*(arg1 + 8) + 0xb8), &var_10a8)
                            char rax_91 = sub_1422eb5d0(rbx_2)
                            
                            if ((rax_91 != 0 || *(rbx_2 + 0xd7c) != rax_91) && *(*rbx_2 + 8) s> 0)
                                char rax_93
                                int32_t rdx_26
                                rax_93, rdx_26 = sub_142391f10(rbx_2)
                                int64_t* rax_94 =
                                    sub_1422e5d90(*rbx_2, sbb.d(rdx_26, rdx_26, rax_93 != 0) & 2)
                                XXH64_copyState(&var_10a8, rax_94[0x2b6])
                                void* rcx_41 = &rax_94[0x50]
                                int64_t j_3 = 7
                                int32_t* rdx_30 = &var_1458
                                int64_t j_1
                                
                                do
                                    rdx_30 = &rdx_30[0x20]
                                    int128_t zmm0_6 = *rcx_41
                                    rcx_41 += 0x80
                                    *(rdx_30 - 0x80) = zmm0_6
                                    *(rdx_30 - 0x70) = *(rcx_41 - 0x70)
                                    *(rdx_30 - 0x60) = *(rcx_41 - 0x60)
                                    *(rdx_30 - 0x50) = *(rcx_41 - 0x50)
                                    *(rdx_30 - 0x40) = *(rcx_41 - 0x40)
                                    *(rdx_30 - 0x30) = *(rcx_41 - 0x30)
                                    *(rdx_30 - 0x20) = *(rcx_41 - 0x20)
                                    *(rdx_30 - 0x10) = *(rcx_41 - 0x10)
                                    j_1 = j_3
                                    j_3 -= 1
                                while (j_1 != 1)
                                *rdx_30 = *rcx_41
                                *(rdx_30 + 0x10) = *(rcx_41 + 0x10)
                                *(rdx_30 + 0x20) = *(rcx_41 + 0x20)
                                sub_1414205c0(&var_1458)
                                var_1708 = &var_10a8
                                var_1710 = 2
                                var_1718 = &var_15f8
                                zmm12, zmm13, zmm14, zmm15 = sub_14142a220(rax_94, r13, &var_1458, 
                                    &var_1458, var_1718, var_1710, var_1708)
                                rcx_49 = data_143f0f180
                                (*(*rcx_49 + 0x100))(rcx_49, *(*(arg1 + 8) + 0xc0), &var_10a8)
                        int32_t r10_2 = (data_1439b6c78).d
                        int32_t rcx_50 = 0
                        var_16e8[1] = 1
                        int32_t r8_14 = 0
                        var_16e8[0] = 0
                        var_16e8[2].q = &data_1439b6c60
                        int32_t var_16d8_1 = 0xffffffff
                        j_4 = 0
                        
                        if (r10_2 != 0)
                            void* rax_101 = data_1439b6c70
                            void* r9_12 = &data_1439b6c60
                            
                            if (rax_101 != 0)
                                r9_12 = rax_101
                            
                            int32_t temp64_1
                            int32_t temp65_1
                            temp64_1:temp65_1 = sx.q(r10_2 - 1)
                            int32_t rdx_43 = *r9_12
                            
                            if (rdx_43 != 0)
                            label_14142697b:
                                int32_t rax_108 = neg.d(rdx_43) & rdx_43
                                uint64_t rflags_1
                                int32_t temp0_22
                                temp0_22, rflags_1 = _bit_scan_reverse(rax_108)
                                var_16e8[1] = rax_108
                                int32_t rax_109
                                
                                if (rax_108 == 0)
                                    rax_109 = 0x20
                                else
                                    rax_109 = 0x1f - temp0_22
                                
                                int32_t rax_110 = r8_14 - rax_109 + 0x1f
                                j_4.d = rax_110
                                
                                if (rax_110 s> r10_2)
                                    j_4.d = r10_2
                            else
                                while (true)
                                    int64_t rdx_44 = sx.q(rcx_50)
                                    r8_14 += 0x20
                                    rcx_50 += 1
                                    j_4:4.d = r8_14
                                    var_16e8[0] = rcx_50
                                    
                                    if (rdx_44.d s>= (temp65_1 + (temp64_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_43 = *(r9_12 + (rdx_44 << 2) + 4)
                                    var_16d8_1 = 0xffffffff
                                    
                                    if (rdx_43 != 0)
                                        goto label_14142697b
                                
                                j_4.d = r10_2
                        
                        zmm2 = var_16d8_1.o
                        var_15f8[0].q = &data_1439b6c50
                        j_4.d = r10_2
                        var_15f8 = var_16e8
                        uint32_t zmm0_5[0x4] = var_15f8
                        var_16d8 = 0xffffffff << (r10_2.b & 0x1f)
                        zmm1_1 = zmm2
                        zmm2 = _mm_unpackhi_pd(zmm2, zmm2.q)
                        uint32_t var_1650[0x4] = zmm0_5
                        int64_t var_1640_1 = zmm1_1.q
                        uint64_t var_1630_1 = zmm2.q
                        
                        while (true)
                            int32_t var_1634
                            int64_t rcx_54 = sx.q(var_1634)
                            int64_t* rax_111 = var_1650[0].q
                            
                            if (rcx_54.d == (var_16d8.q u>> 0x20).d && var_1640_1 == &data_1439b6c60
                                    && rax_111 == &data_1439b6c50)
                                break
                            
                            r8_14.b = 1
                            int64_t* rcx_56 = *(*rax_111 + rcx_54 * 0x10)
                            (*(*rcx_56 + 0x10))(rcx_56, rbx_2, r8_14)
                            int32_t var_1638 = var_1638 & not.d(var_1650[3])
                            sub_14059bdd0(&var_1650[2])
                        
                        rsi = arg2
                        sub_141267530(&rbx_2[0x814], nullptr, rsi)
                        r13 = var_1668
                    else if (*(rbx_2 + 0xd7c) != 0)
                        goto label_141425e71
                else
                    if (*(rbx_2 + 0xd7c) == 0)
                        goto label_141425e94
                    
                label_141425e71:
                    
                    if (sub_142391c90(zx.q(rbx_2[0x15a].d)) == 0)
                        void* rax_10 = *rbx_2
                        
                        if (rax_10 != 0 && *(rax_10 + 8) s> 1)
                            goto label_141425e94
            
            i_1 += 1
            r12_1 += 1
        while (i_1 s< *(arg1 + 0xa8))
    
    var_1660 = data_142d3f800
    sub_14139b920(r13, rsi, &var_1660)

int64_t result = sub_140b37f60("RenderCustomDepthPass")
__security_check_cookie(rax_1 ^ &var_1738)
return result
