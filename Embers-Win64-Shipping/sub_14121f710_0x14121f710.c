// 函数: sub_14121f710
// 地址: 0x14121f710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c08
int64_t rax_1 = __security_cookie ^ &var_c08
int32_t* rbx = arg4
int32_t* var_b28 = rbx
void* r13 = arg1
int64_t result

if (arg3 == 0 || *(arg1 + 0x3b0) s< 3)
    void* r14_19 = *(arg1 + 0xa0)
    result = sx.q(*(arg1 + 0xa8))
    void* r15_13 = result * 0x5240 + r14_19
    
    if (r14_19 != r15_13)
        int64_t* rdi_11 = data_143e84478
        
        do
            if (rdi_11 == 0)
                void*** rax_223 = j_sub_140a82f30(0x300)
                rdi_11 = rax_223
                
                if (rax_223 == 0)
                    rdi_11 = nullptr
                    data_143e84478 = 0
                else
                    rax_223[1].d = 0xffffffff
                    *(rax_223 + 0xc) = 4
                    *rax_223 = &data_142f41578
                    sub_141218830(&rax_223[2])
                    rdi_11[0x52] = 0
                    __builtin_memset(&rdi_11[0x54], 0, 0x14)
                    rdi_11[0x53] = &data_142f40b50
                    __builtin_memset(&rdi_11[0x57], 0, 0x24)
                    __builtin_memset(&rdi_11[0x5c], 0, 0x1c)
                    *rdi_11 = &data_142f415b8
                    
                    if (sub_140a80f40() == 0)
                        sub_141997e80(rdi_11)
                        data_143e84478 = rdi_11
                    else
                        (*(*rdi_11 + 0x28))(rdi_11)
                        data_143e84478 = rdi_11
            
            result = &rdi_11[2]
            *(r14_19 + 0x1540) = result
            r14_19 += 0x5240
        while (r14_19 != r15_13)
else
    sub_140b33630("ComputeLightGrid")
    TEB* gsbase
    
    if (data_143e846a0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e846a0)
        
        if (data_143e846a0 == 0xffffffff)
            int64_t* rcx_187 = data_143db18d0
            
            if (rcx_187 == 0)
                sub_140a53c40()
                rcx_187 = data_143db18d0
            
            int64_t r8_35
            r8_35.b = 1
            int64_t* rax_228 = (*(*rcx_187 + 0xb0))(rcx_187, u"r.AllowStaticLighting", r8_35)
            int64_t rax_226
            
            if (rax_228 == 0)
                rax_226 = 0
            else
                int64_t rdx_103 = *rax_228
                rax_226 = (*(rdx_103 + 0x58))(rax_228, rdx_103)
            
            data_143e84698 = rax_226
            _Init_thread_footer(&data_143e846a0)
    
    void* rax_4 = data_143e84698
    char var_bd8_1
    
    if (rax_4 != 0)
        var_bd8_1 = 0
    
    if (rax_4 == 0 || *(rax_4 + 4) != 0)
        var_bd8_1 = 1
    
    uint64_t r15
    r15.b = 0
    int32_t i = 0
    
    if (*(r13 + 0xa8) s> 0)
        int64_t rbx_1 = 0
        
        do
            int64_t r14_1 = *(r13 + 0xa0)
            
            if ((*(rbx_1 + r14_1 + 0x497c) & 0x200) == 0)
                rax_4 = sub_1414e0a50(r13)
            
            if ((*(rbx_1 + r14_1 + 0x497c) & 0x200) != 0 || rax_4.b != 0
                    || (*(rbx_1 + r14_1 + 0x497c) & 0x10000) != 0)
                rax_4.b = 1
            
            r15.b |= rax_4.b
            i += 1
            rbx_1 += 0x5240
        while (i s< *(r13 + 0xa8))
        
        rbx = var_b28
    
    if (data_1439b6300 == 0)
        r15.b = 0
    else
        int32_t rcx_3 = *(r13 + 0x3b4)
        int32_t var_898_1 = rcx_3
        
        if (sub_1410a09e0(rcx_3) != 0 || r15.b != 0)
            r15.b = 1
        else
            int64_t rax_6
            uint64_t rdx
            
            if (data_143f0f21f != 0)
                rdx = zx.q(data_143f0f1a0)
                rax_6 = sx.q(rdx.d)
            
            if (data_143f0f21f == 0 || ((*(&data_143f025fc + rax_6 * 0x14) u>> 0x13).b & 1) == 0
                    || not(test_bit(data_143f13cd8, rdx)))
                if (sub_1410c25d0(r13) == 0)
                    r15.b = 0
                else
                    r15.b = 1
            else
                r15.b = 1
    
    char var_bd7_1 = r15.b
    *(r13 + 0x400) = r15.b
    int32_t i_2 = 0
    
    if (*(r13 + 0xa8) s> 0)
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        uint128_t zmm7
        uint128_t var_58_1 = zmm7
        int64_t rcx_6 = 0
        uint128_t zmm8 = 0x4023000000000000
        float zmm9[0x4] = 0x3f800000
        float zmm10[0x4]
        float var_88_1[0x4] = zmm10
        float zmm11[0x4] = zx.o(0)
        int128_t zmm12 = 0x3fc8f622
        int128_t zmm13 = 0x80000000
        int128_t zmm14 = 0x38d1b717
        float zmm15[0x4] = 0x447a0000
        int64_t var_a48_1 = 0
        int64_t* var_b30_1 = arg2 + 0x30
        int32_t i_1
        
        do
            void* r14_3 = rcx_6 * 0x5240 + *(r13 + 0xa0)
            void* var_bc0_1 = r14_3
            int32_t* rdi_1 = *(r14_3 + 0x1540)
            int32_t var_5d8
            memset(&var_5d8, 0, 0x280)
            void var_548
            void* rcx_8 = &var_548
            int64_t r9 = data_14395fa10
            int64_t j_6 = 2
            int64_t r10_1 = data_14395f4d0
            int64_t r8 = *(data_143f10e68 + 0x10)
            int64_t var_398_1 = r8
            int64_t var_390_1 = r9
            int64_t r11_1 = *(data_143f10dc8 + 0x10)
            *rdi_1 = var_5d8
            int32_t var_5d4
            rdi_1[1] = var_5d4
            int32_t var_5d0
            rdi_1[2] = var_5d0
            int32_t var_5cc
            rdi_1[3] = var_5cc
            int32_t var_5c8
            rdi_1[4] = var_5c8
            int32_t var_5c4
            rdi_1[5] = var_5c4
            int32_t var_5c0
            rdi_1[6] = var_5c0
            int32_t var_5bc
            rdi_1[7] = var_5bc
            int64_t var_5a8
            *(rdi_1 + 0x30) = var_5a8
            int32_t var_5b8
            rdi_1[8] = var_5b8
            int64_t var_598
            *(rdi_1 + 0x40) = var_598
            int32_t var_5a0
            rdi_1[0xe] = var_5a0
            int64_t var_588
            *(rdi_1 + 0x50) = var_588
            int32_t var_590
            rdi_1[0x12] = var_590
            int32_t var_580
            rdi_1[0x16] = var_580
            int32_t var_57c
            rdi_1[0x17] = var_57c[0]
            int32_t var_578
            rdi_1[0x18] = var_578
            int32_t var_570
            rdi_1[0x1a] = var_570[0]
            int32_t var_568
            rdi_1[0x1c] = var_568
            void* rax_28 = &rdi_1[0x24]
            float var_558[0x4]
            *(rdi_1 + 0x80) = var_558
            int64_t var_388_1 = r8
            int32_t var_56c
            rdi_1[0x1b] = var_56c[0]
            int64_t var_380_1 = r10_1
            int64_t var_360_1 = r11_1
            float zmm0_1[0x4]
            float zmm1_1[0x4]
            int64_t j
            
            do
                zmm1_1 = *(rcx_8 + 0x10)
                *rax_28 = *rcx_8
                zmm0_1 = *(rcx_8 + 0x20)
                *(rax_28 + 0x10) = zmm1_1
                zmm1_1 = *(rcx_8 + 0x30)
                *(rax_28 + 0x20) = zmm0_1
                zmm0_1 = *(rcx_8 + 0x40)
                *(rax_28 + 0x30) = zmm1_1
                zmm1_1 = *(rcx_8 + 0x50)
                *(rax_28 + 0x40) = zmm0_1
                zmm0_1 = *(rcx_8 + 0x60)
                *(rax_28 + 0x50) = zmm1_1
                zmm1_1 = *(rcx_8 + 0x70)
                rcx_8 += 0x80
                *(rax_28 + 0x60) = zmm0_1
                rax_28 += 0x80
                *(rax_28 - 0x10) = zmm1_1
                j = j_6
                j_6 -= 1
            while (j != 1)
            int32_t rcx_9 = 0
            int32_t j_26 = 0
            int32_t r13_1 = 0
            int32_t var_3f4
            rdi_1[0x79] = var_3f4
            zmm10 = zmm15
            int32_t var_3f0
            rdi_1[0x7a] = var_3f0
            int32_t var_3ec
            rdi_1[0x7b] = var_3ec
            *(rdi_1 + 0x240) = r8
            *(rdi_1 + 0x248) = r9
            *(rdi_1 + 0x250) = r8
            *(rdi_1 + 0x258) = r10_1
            __builtin_memset(&rdi_1[0x98], 0, 0x18)
            *(rdi_1 + 0x278) = r11_1
            int64_t var_bb0
            __builtin_memset(&var_bb0, 0, 0x14)
            int64_t* var_b90 = nullptr
            int64_t j_9 = j_6
            int64_t var_b80 = 0
            int32_t var_bb8_1 = 0
            int64_t j_10 = j_6
            int32_t j_14 = 0
            float var_448[0x4]
            *(rdi_1 + 0x190) = var_448
            float var_438[0x4]
            *(rdi_1 + 0x1a0) = var_438
            float var_428[0x4]
            *(rdi_1 + 0x1b0) = var_428
            float var_408[0x4]
            *(rdi_1 + 0x1d0) = var_408
            float var_418[0x4]
            *(rdi_1 + 0x1c0) = var_418
            int32_t var_3f8
            rdi_1[0x78] = var_3f8[0]
            float var_3e8[0x4]
            *(rdi_1 + 0x1f0) = var_3e8
            float var_3d8[0x4]
            *(rdi_1 + 0x200) = var_3d8
            float var_3c8[0x4]
            *(rdi_1 + 0x210) = var_3c8
            float var_3b8[0x4]
            *(rdi_1 + 0x220) = var_3b8
            float var_3a8[0x4]
            *(rdi_1 + 0x230) = var_3a8
            int32_t var_be0
            uint16_t var_bd0
            uint16_t var_bc8
            int32_t j_24
            int32_t var_ba4
            int32_t j_13
            int32_t* j_17
            float zmm2[0x4]
            
            if (r15.b != 0)
                int32_t j_11 = *rbx
                j_13 = j_11
                void* var_b68
                float zmm3[0x4]
                
                if (j_11 s> 0)
                    int32_t j_1 = 0
                    int64_t r14_4 = 0
                    int32_t var_a0c_1 = 0x700
                    int32_t var_a10_1 = j_6.d
                    zmm6 = 0x3f800000.o
                    int32_t var_a08_1 = 0xc0000000
                    int64_t var_a04_1 = 0x3f800000
                    int32_t var_9ec_1 = 0x3f800000
                    
                    do
                        int32_t j_29 = j_26
                        j_26 += 1
                        j_24 = j_26
                        int64_t rbx_2 = sx.q(*(*(rbx + 0x40) + r14_4 + 0x10))
                        
                        if (j_26 s> rcx_9)
                            zmm6 = sub_141238960(&var_bb0, j_29)
                            j_26 = j_24
                        
                        float (* r10_3)[0x4] = rbx_2 * 0x1c + *(var_b28 + 0x10)
                        float (* r9_3)[0x4] = sx.q(j_26 - 1) * 0x60 + var_bb0
                        int64_t rcx_12
                        
                        if (var_b28[6] != var_b28[0xa])
                            int32_t i_3 = 0
                            int64_t rdx_2 = *(*(var_b28 + 0x30) + (rbx_2 << 3))
                            
                            if ((rdx_2 u>> 0x20).d != 0)
                                i_3 = i_2
                            
                            rcx_12 = sx.q((rdx_2.d & 0x7fffffff) + i_3) * 3
                        else
                            rcx_12 = rbx_2 * 3
                        
                        int64_t rax_40 = *(var_b28 + 0x20)
                        zmm0_1 = _mm_max_ss((*r10_3)[3][0], zmm14.d)
                        zmm1_1 = *(rax_40 + (rcx_12 << 2) + 4)
                        int128_t* rbx_4 = rax_40 + (rcx_12 << 2)
                        zmm2 = *(rbx_4 + 8)
                        float zmm4_1[0x4] = *rbx_4
                        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                        zmm9[0] = zmm9[0] / zmm0_1[0]
                        zmm4_1[0] = zmm1_1[0]
                        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc6)
                        zmm4_1[0] = zmm2[0]
                        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x27)
                        zmm4_1[0] = zmm9[0]
                        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x39)
                        *r9_3 = zmm4_1
                        zmm0_1 = (*r10_3)[1]
                        zmm3 = *r10_3
                        zmm1_1 = (*r10_3)[2]
                        zmm2 = r10_3[1][0]
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                        zmm3[0] = zmm0_1[0]
                        var_b68.o = zmm4_1
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                        zmm3[0] = zmm1_1[0]
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                        zmm3[0] = zmm2[0]
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                        r9_3[1] = zmm3
                        r9_3[2] = zmm6
                        float var_bd4_1 = (*r10_3)[5][0]
                        uint16_t rax_42 = (var_bd4_1 u>> 0x17).w
                        uint16_t rdx_5 = (var_bd4_1 u>> 0x1f).w << 0xf
                        uint32_t rcx_13 = zx.d(rax_42.b)
                        var_b68.o = zmm3
                        
                        if (rcx_13 u<= 0x70)
                            var_bd0 = rdx_5
                            
                            if (0x70 - rcx_13 + 0xe s<= 0x18)
                                int32_t r8_3 = (var_bd4_1 & 0x7fffff) | 0x800000
                                uint16_t rax_44 =
                                    ((r8_3 u>> (0x70 - rcx_13 + 0xe).b).w & 0x3ff) | rdx_5
                                var_bd0 = rax_44
                                rdx_5 = rax_44
                                
                                if (((r8_3 u>> ((0x70 - rcx_13).b + 0xd)).b & 1) != 0)
                                    rdx_5 += 1
                                    var_bd0 = rdx_5
                        else if (rcx_13 u< 0x8f)
                            rax_42 = ((rax_42 - 0x10) & 0x1f) << 0xa
                                | ((var_bd4_1 u>> 0xd).w & 0x3ff) | rdx_5
                            rdx_5 = rax_42
                            var_bd0 = rax_42
                        else
                            rdx_5 |= 0x7bff
                            var_bd0 = rdx_5
                        
                        __builtin_memcpy(&r9_3[4], 
                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                        "00\x00\x00\x00\x00\xc0\x00\x00\x00\x00\x00\x00\x00\x00", 
                            0x20)
                        uint32_t var_9fc_1 = zx.d(rdx_5) << 0x10
                        r9_3[3] = var_a08_1.o
                        int64_t var_888_1 = 0
                        zmm1_1 = *(rbx_4 + 4)
                        float var_9f8[0x4]
                        var_9f8[0] = (*rbx_4)[0]
                        zmm2 = *(rbx_4 + 8)
                        int64_t rbx_5 = sx.q(j_9.d)
                        zmm3 = _mm_shuffle_ps(var_9f8, var_9f8, 0xe1)
                        zmm3[0] = zmm1_1[0]
                        int32_t var_880_1 = 0
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                        zmm3[0] = zmm2[0]
                        int32_t rax_47 = (rbx_5 + 1).d
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                        zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), 
                            *(var_bc0_1 + 0x370))
                        j_9.d = rax_47
                        zmm0_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), 
                            *(var_bc0_1 + 0x360))
                        zmm1_1 =
                            __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *(var_bc0_1 + 0x340))
                        var_9f8 = zmm3
                        zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0_1), 
                            _mm_add_ps(zmm1_1, 
                                __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), 
                                    *(var_bc0_1 + 0x350))))
                        float var_9e8_1 = zmm2[0]
                        float var_9e4_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
                        zmm0_1 = (*r10_3)[3]
                        var_888_1.o = zmm2
                        zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        float var_9dc_1 = zmm0_1[0]
                        float var_9e0_1 = zmm2[0]
                        
                        if (rax_47 s> j_9:4.d)
                            zmm6 = sub_1411ec960(&var_b90, rbx_5.d)
                        
                        int64_t rbx_6 = sx.q(r13_1)
                        *(var_b90 + rbx_5 * 0x10) = var_9e8_1.o
                        r13_1 = (rbx_6 + 1).d
                        j_10.d = r13_1
                        
                        if (r13_1 s> j_10:4.d)
                            zmm6 = sub_1411ec960(&var_b80, rbx_6.d)
                            r13_1 = j_10.d
                        
                        rbx = var_b28
                        j_1 += 1
                        r14_4 += 0x18
                        int64_t* rax_52 = (rbx_6 << 4) + var_b80
                        *rax_52 = 0
                        rax_52[1] = 0
                        rcx_9 = var_ba4
                    while (j_1 s< *rbx)
                    
                    zmm8 = 0x4023000000000000
                    r14_3 = var_bc0_1
                    j_11 = j_13
                    var_bb8_1 = r13_1
                
                j_14 = j_11
                int32_t j_5 = j_11
                
                if (j_11 s< rbx[0x12])
                    void* j_16 = sx.q(j_11)
                    j_17 = j_16
                    int32_t j_2
                    
                    do
                        int64_t r13_2 = *(rbx + 0x40)
                        void* r12_1 = j_16 * 3
                        void* r15_1 = *(r13_2 + (r12_1 << 3) + 8)
                        int64_t* rbx_7 = *(r15_1 + 0x20)
                        
                        if (((*(r15_1 + 0x64) & 2) == 0
                                || (*(sx.q(*(r15_1 + 0x28)) * 0x78 + *(r14_3 + 0x18d0) + 0x40) & 1)
                                != 0) && (*(r14_3 + 0xd79) == 0 || (rbx_7[0x27].b & 8) != 0) &&
                                ((*(rbx_7 + 0x13d) & 1) != 0 || (*(r14_3 + 0x497c) & 0x100) != 0))
                            j_16.b = 1
                        else
                            j_16.b = 0
                        
                        if (j_16.b != 0)
                            int64_t var_a90_1 = 0
                            float var_ae8[0x4]
                            (*(*rbx_7 + 0x68))(rbx_7, &var_ae8)
                            
                            if ((*(*rbx_7 + 0x30))(rbx_7) != 0)
                                int32_t var_acc_1 = 0
                            
                            float var_ad8
                            float var_ad4
                            float var_ad0
                            
                            if (*(r14_3 + 0xd74) != 0)
                                zmm2 = rbx_7[0x19].d
                                zmm0_1 = var_ad8
                                zmm1_1 = var_ad4
                                zmm0_1[0] = zmm0_1[0] * zmm2[0]
                                zmm1_1[0] = zmm1_1[0] * zmm2[0]
                                var_ad8 = zmm0_1[0]
                                zmm0_1 = var_ad0
                                zmm0_1[0] = zmm0_1[0] * zmm2[0]
                                var_ad4 = zmm1_1[0]
                                var_ad0 = zmm0_1[0]
                            
                            void* rax_57 = *(r15_1 + 0x20)
                            int32_t r9_4 = rbx_7[0x1f].d
                            int32_t r8_6
                            
                            if ((*(rax_57 + 0x138) & 8) == 0)
                                r8_6 = *(r15_1 + 0x60)
                            else
                                r8_6 = *(rax_57 + 0xfc)
                            
                            int32_t r10_4 = *(r13_2 + (r12_1 << 3))
                            
                            if (var_bd8_1 == 0)
                                r9_4 = -1
                            
                            int32_t rdx_11 = r10_4 & 3
                            int32_t rax_58 = 0
                            
                            if (r8_6 == 3)
                                rax_58 = 0x80
                            
                            int32_t rax_59 = 0
                            
                            if (r8_6 == 2)
                                rax_59 = 0x40
                            
                            int32_t rax_60 = 0
                            
                            if (r8_6 == 1)
                                rax_60 = 0x20
                            
                            int32_t rax_61 = 0
                            
                            if (r8_6 == 0)
                                rax_61 = 0x10
                            
                            int32_t rax_62 = 0
                            
                            if (r9_4 == 3)
                                rax_62 = 8
                            
                            int32_t rax_63 = 0
                            
                            if (r9_4 == 2)
                                rax_63 = 4
                            
                            int32_t rax_64 = 0
                            
                            if (r9_4 == 1)
                                rax_64 = 2
                            
                            int32_t rax_65
                            rax_65.b = r9_4 == 0
                            int32_t rcx_32 = zx.d(*(rbx_7 + 0x13d)) << 8 | rax_58 | rax_59 | rax_60
                                | rax_61 | rax_62 | rax_63 | rax_64 | rax_65 | rdx_11 << 0x10
                            int64_t var_ac8
                            int32_t var_ac0
                            
                            if (rdx_11 != 1)
                                if (rdx_11 != 2)
                                    if (rdx_11 != 3)
                                        if (rdx_11 == 0)
                                            *(rdi_1 + 0x50) = var_ad8.q
                                            rdi_1[0x16] = var_ad0
                                            rdi_1[2] = 1
                                            rdi_1[0x17] = *(rbx_7 + 0xcc)
                                            *(rdi_1 + 0x40) = var_ac8
                                            rdi_1[0x12] = var_ac0
                                            rdi_1[0x18] = rcx_32
                                            
                                            if ((*(r15_1 + 0x64) & 1) == 0)
                                                if ((*(*(r15_1 + 0x20) + 0x138) & 8) == 0)
                                                    r9_4 = 1
                                                else
                                                    r9_4.b = 0
                                            else if (*(r15_1 + 0x78) s< data_1439b6348
                                                    || (*(*(r15_1 + 0x20) + 0x138) & 8) == 0)
                                                r9_4 = 1
                                            else
                                                r9_4.b = 0
                                            
                                            int32_t var_a88
                                            (*(*rbx_7 + 0x70))(rbx_7, &var_a88, 
                                                zx.q(*(r14_3 + 0x1548)), r9_4, *(r14_3 + 0x278), 
                                                var_be0, var_bd8_1, var_bd0, var_bc8, var_bc0_1, 
                                                var_bb8_1)
                                            int32_t var_a84
                                            zmm0_1 = var_a84
                                            zmm0_1[0] = zmm0_1[0] f* var_a88
                                            rdi_1[0x1a] = zmm0_1[0]
                                            rdi_1[0x1b] = (zmm0_1 ^ zmm13)[0]
                                            
                                            if ((*(arg1 + 0x3c) & 1) != 0)
                                                int64_t rax_99 = sx.q(*(r15_1 + 0x28))
                                                
                                                if (rax_99.d s>= 0 && rax_99.d s< *(arg1 + 0x2f8))
                                                    int64_t rcx_51 = rax_99 * 0x70
                                                    int64_t rax_100 = *(arg1 + 0x2f0)
                                                    int64_t var_838_1 = rax_100
                                                    
                                                    if (*(rcx_51 + rax_100 + 0x18) s> 0)
                                                        rdi_1[0x1c] = 0
                                                        int32_t k = 0
                                                        
                                                        if (*(rcx_51 + rax_100 + 0x18) s> 0)
                                                            int64_t* r12_2 = nullptr
                                                            
                                                            do
                                                                void* r14_8 =
                                                                    *(r12_2 + *(rcx_51 + rax_100 + 0x10))
                                                                char rax_102 = (*(r14_8 + 0x570)).b
                                                                int64_t r15_2 = sx.q(*(r14_8 + 0x534))
                                                                
                                                                if ((rax_102 & 0x40) != 0
                                                                        && r15_2.d s>= 0
                                                                        && (rax_102 & 0x10) != 0
                                                                        && (rax_102 & 1) != 0 && r15_2.d s< 4)
                                                                    rdi_1[0x1c] += 1
                                                                    uint64_t rbx_10 = zx.q(r15_2.d)
                                                                    float var_6b8[0x4][0x4]
                                                                    float (* rax_103)[0x4]
                                                                    rax_103, zmm8, zmm9, zmm10, zmm11, 
                                                                        zmm12, zmm13, zmm14, zmm15 =
                                                                        sub_14148d370(r14_8, &var_6b8, 
                                                                        &rdi_1[(rbx_10 + 0x19) * 4], nullptr)
                                                                    uint64_t rbx_11 = rbx_10 << 6
                                                                    *(rbx_11 + rdi_1 + 0x90) = *rax_103
                                                                    *(rbx_11 + rdi_1 + 0xa0) = rax_103[1]
                                                                    *(rbx_11 + rdi_1 + 0xb0) = rax_103[2]
                                                                    *(rbx_11 + rdi_1 + 0xc0) = rax_103[3]
                                                                    rdi_1[r15_2 + 0x20] = *(r14_8 + 0x3d4)
                                                                    
                                                                    if (r15_2.d == 0)
                                                                        *(rdi_1 + 0x240) =
                                                                            *(*(r14_8 + 0x38) + 0x10)
                                                                        rdi_1[0x78] = *(r14_8 + 0x8f4)
                                                                        int64_t* rcx_54 = *(r14_8 + 0x38)
                                                                        int64_t rcx_55 =
                                                                            *((*(*rcx_54 + 0x10))(rcx_54) + 0x14)
                                                                        zmm3 = _mm_cvtepi32_ps(zx.o(rcx_55.d))
                                                                        zmm9[0] = zmm9[0] / zmm3[0]
                                                                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                                                                        zmm0_1 = _mm_cvtepi32_ps(zx.o((rcx_55
                                                                            u>> 0x20).d))
                                                                        zmm3[0] = zmm0_1[0]
                                                                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                                                                        zmm3[0] = zmm9[0]
                                                                        zmm9[0] = zmm9[0] / zmm0_1[0]
                                                                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                                                                        zmm3[0] = zmm9[0]
                                                                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                                                                        int32_t var_b48_1
                                                                        var_b48_1.o = zmm3
                                                                        *(rdi_1 + 0x1d0) = zmm3
                                                                
                                                                rax_100 = var_838_1
                                                                k += 1
                                                                r12_2 = &r12_2[1]
                                                            while (k s< *(rcx_51 + rax_100 + 0x18))
                                                            
                                                            r14_3 = var_bc0_1
                                            
                                            void* rdx_31 = *(r15_1 + 0x20)
                                            void* rcx_57 = *(rdx_31 + 0x108)
                                            
                                            if ((*(r15_1 + 0x64) & 1) != 0
                                                    && *(r15_1 + 0x78) s< data_1439b6348)
                                                if (rcx_57 == 0 || *(rcx_57 + 0x48) == 0
                                                        || *(rcx_57 + 0x10) == 0)
                                                    goto label_141220b0b
                                                
                                                goto label_141220ab1
                                            
                                            float* rax_111
                                            int32_t rdx_32
                                            
                                            if ((*(rdx_31 + 0x138) & 8) != 0 || rcx_57 == 0
                                                || *(rcx_57 + 0x48) == 0 || *(rcx_57 + 0x10) == 0)
                                            label_141220b0b:
                                                rdi_1[0x79] = 0
                                                int128_t var_758 = zx.o(0)
                                                rax_111 = &var_758
                                                rdx_32 = 0
                                            else
                                            label_141220ab1:
                                                rdi_1[0x79] = 1
                                                void* rax_110 = *(rcx_57 + 0x48)
                                                rdx_32 = 1
                                                zmm2 = zx.o(*(rax_110 + 0x44))
                                                float var_938
                                                rax_111 = &var_938
                                                zmm1_1 = _mm_cvtepi32_ps(zx.o(*(rax_110 + 0x40)))
                                                zmm2 = _mm_cvtepi32_ps(zmm2)
                                                zmm9[0] = zmm9[0] / zmm1_1[0]
                                                var_938 = zmm1_1[0]
                                                zmm9[0] = zmm9[0] / zmm2[0]
                                                float var_934_1 = zmm2[0]
                                                float var_92c_1 = zmm9[0]
                                                float var_930_1 = zmm9[0]
                                            
                                            *(rdi_1 + 0x1f0) = *rax_111
                                            float (* rax_112)[0x4]
                                            
                                            if (rdx_32 == 0)
                                                rax_112 = &data_14399f6e0
                                            else
                                                rax_112 = *(rcx_57 + 0x48)
                                            
                                            *(rdi_1 + 0x200) = *rax_112
                                            *(rdi_1 + 0x210) = rax_112[1]
                                            *(rdi_1 + 0x220) = rax_112[2]
                                            *(rdi_1 + 0x230) = rax_112[3]
                                            void* rax_113
                                            
                                            if (rdx_32 == 0)
                                                rax_113 = data_143f10dc8 + 0x10
                                            else
                                                rax_113 = rcx_57 + 0x10
                                            
                                            *(rdi_1 + 0x250) = *rax_113
                                    else if ((*(arg1 + 0x38) & 0x2000) != 0)
                                        goto label_14122020a
                                else if ((*(arg1 + 0x38) & 0x1000) != 0)
                                    goto label_14122020a
                            else if ((*(arg1 + 0x38) & 0x800) != 0)
                            label_14122020a:
                                int32_t j_25 = j_24
                                int32_t j_23 = j_25 + 1
                                j_24 = j_23
                                
                                if (j_23 s> var_ba4)
                                    sub_141238960(&var_bb0, j_25)
                                    r10_4 = *(r13_2 + (r12_1 << 3))
                                    j_23 = j_24
                                
                                float (* r14_7)[0x4] = sx.q(j_23 - 1) * 0x60 + var_bb0
                                
                                if (not(test_bit(r10_4, 8)))
                                    int32_t j_18 = j_23
                                    
                                    if (j_14 s>= j_23)
                                        j_18 = j_14
                                    
                                    j_14 = j_18
                                
                                zmm0_1, zmm8, zmm10 = sub_1412273e0(var_bc0_1, rbx_7)
                                zmm1_1 = var_ad8
                                zmm2 = var_ad4
                                zmm2[0] = zmm2[0] * zmm0_1[0]
                                int32_t var_9ac_1 = 0
                                zmm1_1[0] = zmm1_1[0] * zmm0_1[0]
                                int64_t var_9a0_1 = 0
                                var_ad4 = zmm2[0]
                                var_ad8 = zmm1_1[0]
                                zmm1_1 = var_ad0
                                zmm1_1[0] = zmm1_1[0] * zmm0_1[0]
                                zmm0_1 = var_ae8
                                float var_9d8_1[0x4] = zmm0_1
                                var_ad0 = zmm1_1[0]
                                *r14_7 = zmm0_1
                                zmm1_1 = var_ad8.o
                                r14_7[1] = zmm1_1
                                zmm3 = var_ac8.d
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                                zmm3[0] = var_ac8:4.d[0]
                                float var_9c8_1[0x4] = zmm1_1
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                                zmm3[0] = var_ac0[0]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                                zmm3[0] = rcx_32[0]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                                r14_7[2] = zmm3
                                var_b68.o = zmm3
                                int32_t var_aa8
                                float var_9b8[0x4]
                                var_9b8[0] = var_aa8[0]
                                zmm3 = _mm_shuffle_ps(var_9b8, var_9b8, 0xe1)
                                int32_t var_aa4
                                zmm3[0] = var_aa4[0]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                                int32_t var_aac
                                zmm3[0] = var_aac[0]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                                r14_7[3] = zmm3
                                int32_t var_ab8
                                float zmm4_2[0x4] = var_ab8
                                zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xe1)
                                int32_t var_ab4
                                zmm4_2[0] = var_ab4[0]
                                var_9b8 = zmm3
                                zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xc6)
                                int32_t var_ab0
                                zmm4_2[0] = var_ab0[0]
                                zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x27)
                                int32_t var_aa0
                                zmm4_2[0] = var_aa0[0]
                                zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x39)
                                r14_7[4] = zmm4_2
                                int32_t var_a98
                                float var_9a8[0x4]
                                var_9a8[0] = var_a98[0]
                                zmm2 = _mm_shuffle_ps(var_9a8, var_9a8, 0xe1)
                                int32_t var_a94
                                zmm2[0] = var_a94[0]
                                var_b68.o = zmm4_2
                                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe1)
                                r14_7[5] = zmm2
                                zmm6 = *(rbx_7 + 0xcc)
                                var_9a8 = zmm2
                                
                                if (sub_1414d5e70(r15_1, 
                                        sx.q(*(r15_1 + 0x28)) * 0x70 + *(arg1 + 0x2f0)) != 0)
                                    zmm6 = zmm11
                                
                                int32_t var_a9c
                                float var_b48_2 = var_a9c[0]
                                uint16_t rax_76 = (var_b48_2 u>> 0x17).w
                                uint16_t r9_6 = (var_b48_2 u>> 0x1f).w << 0xf
                                uint32_t rcx_37 = zx.d(rax_76.b)
                                
                                if (rcx_37 u<= 0x70)
                                    uint16_t var_bcc_1 = r9_6
                                    
                                    if (0x70 - rcx_37 + 0xe s<= 0x18)
                                        int32_t rdx_17 = (var_b48_2 & 0x7fffff) | 0x800000
                                        uint16_t rax_78 =
                                            ((rdx_17 u>> (0x70 - rcx_37 + 0xe).b).w & 0x3ff) | r9_6
                                        uint16_t var_bcc_2 = rax_78
                                        r9_6 = rax_78
                                        
                                        if (((rdx_17 u>> ((0x70 - rcx_37).b + 0xd)).b & 1) != 0)
                                            r9_6 += 1
                                            uint16_t var_bcc_3 = r9_6
                                else if (rcx_37 u< 0x8f)
                                    rax_76 = ((rax_76 - 0x10) & 0x1f) << 0xa
                                        | ((var_b48_2 u>> 0xd).w & 0x3ff) | r9_6
                                    r9_6 = rax_76
                                    uint16_t var_bcc_5 = rax_76
                                else
                                    r9_6 |= 0x7bff
                                    uint16_t var_bcc_4 = r9_6
                                
                                float r8_8 = zmm6[0]
                                uint16_t rax_80 = (r8_8 u>> 0x17).w
                                uint16_t rdx_21 = (r8_8 u>> 0x1f).w << 0xf
                                uint32_t rcx_40 = zx.d(rax_80.b)
                                
                                if (rcx_40 u> 0x70)
                                    if (rcx_40 u< 0x8f)
                                        r8_8.w = (r8_8 u>> 0xd).w & 0x3ff
                                        r8_8.w |= ((rax_80 - 0x10) & 0x1f) << 0xa
                                        rdx_21 |= r8_8.w
                                    else
                                        rdx_21 |= 0x7bff
                                    
                                    var_bc8 = rdx_21
                                else
                                    var_bc8 = rdx_21
                                    
                                    if (0x70 - rcx_40 + 0xe s<= 0x18)
                                        int32_t r8_10 = (r8_8 & 0x7fffff) | 0x800000
                                        r8_8 = r8_10 u>> ((0x70 - rcx_40).b + 0xd)
                                        uint16_t rax_82 =
                                            ((r8_10 u>> (0x70 - rcx_40 + 0xe).b).w & 0x3ff) | rdx_21
                                        var_bc8 = rax_82
                                        rdx_21 = rax_82
                                        
                                        if ((r8_8.b & 1) != 0)
                                            rdx_21 += 1
                                            var_bc8 = rdx_21
                                
                                (*r14_7)[0xf] = (zx.d(rdx_21) << 0x10 | zx.d(r9_6))[0]
                                int32_t var_988
                                (*(*rbx_7 + 0x10))(rbx_7, &var_988, r8_8)
                                r14_3 = var_bc0_1
                                zmm7 = *(r14_3 + 0x370)
                                zmm6 = *(r14_3 + 0x360)
                                float zmm5_1[0x4] = *(r14_3 + 0x350)
                                float zmm4_3[0x4] = *(r14_3 + 0x340)
                                int32_t var_98c_1 = 0x3f800000
                                float var_998[0x4]
                                var_998[0] = var_988[0]
                                int32_t var_96c_1 = 0x3f800000
                                zmm3 = _mm_shuffle_ps(var_998, var_998, 0xe1)
                                int32_t var_984
                                zmm3[0] = var_984[0]
                                int32_t var_760_1 = 0
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                                int32_t var_980
                                zmm3[0] = var_980[0]
                                int64_t var_878_1 = 0
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                                var_998 = zmm3
                                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                                zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                                zmm2 = _mm_mul_ps(zmm2, zmm4_3)
                                int32_t var_870_1 = 0
                                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm7)
                                zmm0_1 = _mm_mul_ps(zmm0_1, zmm5_1)
                                zmm1_1 = _mm_mul_ps(zmm1_1, zmm6)
                                zmm2 = _mm_add_ps(zmm2, zmm0_1)
                                zmm0_1 = var_ae8[0]
                                zmm1_1 = _mm_add_ps(zmm1_1, zmm3)
                                float var_978[0x4]
                                var_978[0] = zmm0_1[0]
                                zmm3 = _mm_shuffle_ps(var_978, var_978, 0xe1)
                                zmm2 = _mm_add_ps(zmm2, zmm1_1)
                                zmm3[0] = var_ae8[1][0]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                                float var_768_1[0x4] = zmm2
                                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                int32_t var_97c
                                zmm2[0] = zmm2[0] f+ var_97c
                                zmm10 = _mm_max_ss(zmm2[0], zmm10[0])
                                zmm3[0] = var_ae8[2][0]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                                var_978 = zmm3
                                zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                                zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                                zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                                zmm0_1 = _mm_mul_ps(zmm0_1, zmm5_1)
                                zmm2 = _mm_mul_ps(zmm2, zmm4_3)
                                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm7)
                                zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0_1), 
                                    _mm_add_ps(_mm_mul_ps(zmm1_1, zmm6), zmm3))
                                float var_968_1 = zmm2[0]
                                float var_964_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)[0]
                                var_878_1.o = zmm2
                                int64_t rbx_8 = sx.q(j_9.d)
                                zmm9[0] = zmm9[0] / var_ae8[3]
                                int32_t rax_85 = (rbx_8 + 1).d
                                j_9.d = rax_85
                                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                float var_95c_1 = zmm9[0]
                                float var_960_1 = zmm2[0]
                                
                                if (rax_85 s> j_9:4.d)
                                    sub_1411ec960(&var_b90, rbx_8.d)
                                
                                zmm0_1 = var_968_1.o
                                *(var_b90 + rbx_8 * 0x10) = zmm0_1
                                
                                if (((*(r13_2 + (r12_1 << 3))).b & 3) == 2)
                                    int64_t* rcx_46 = *(r15_1 + 0x20)
                                    (*(*rcx_46 + 0x20))(rcx_46)
                                
                                if (((*(r13_2 + (r12_1 << 3))).b & 3) != 2 || zmm0_1[0] f>= zmm12.d)
                                    zmm4_3 = zmm11
                                else
                                    zmm4_3 = tanf(zmm0_1[0])
                                
                                int64_t rbx_9 = sx.q(var_bb8_1)
                                int32_t var_94c_1 = 0
                                float var_958[0x4]
                                var_958[0] = var_ac8.d[0]
                                int64_t var_868_1 = 0
                                zmm3 = _mm_shuffle_ps(var_958, var_958, 0xe1)
                                int32_t rcx_47 = (rbx_9 + 1).d
                                zmm3[0] = var_ac8:4.d[0]
                                int32_t var_860_1 = 0
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                                zmm3[0] = var_ac0[0]
                                float var_93c_1 = zmm4_3[0]
                                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                                zmm2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), 
                                    *(r14_3 + 0x370))
                                var_bb8_1 = rcx_47
                                zmm0_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), 
                                    *(r14_3 + 0x360))
                                j_10.d = rcx_47
                                zmm1_1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), 
                                    *(r14_3 + 0x350))
                                var_958 = zmm3
                                zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm0_1), 
                                    _mm_add_ps(zmm1_1, 
                                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), 
                                            *(r14_3 + 0x340))))
                                float var_948_1 = zmm2[0]
                                zmm0_1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                var_868_1.o = zmm2
                                float var_940_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
                                float var_944_1 = zmm0_1[0]
                                
                                if (rcx_47 s> j_10:4.d)
                                    sub_1411ec960(&var_b80, rbx_9.d)
                                    var_bb8_1 = j_10.d
                                
                                *(var_b80 + rbx_9 * 0x10) = var_948_1.o
                        
                        j_2 = j_5 + 1
                        rbx = var_b28
                        j_16 = j_17 + 1
                        j_5 = j_2
                        j_17 = j_16
                    while (j_2 s< rbx[0x12])
            
            uint64_t j_27 = zx.q(j_24)
            int32_t r12_3 = j_27.d
            
            if (j_27.d == 0)
                j_27 = 1
                int32_t j_28 = 1
                
                if (var_ba4 s< 1)
                    sub_141238960(&var_bb0, 0)
                    j_27 = zx.q(j_28)
                
                memset(var_bb0, 0, 0x60)
            
            int64_t* r14_10 = *(r14_3 + 0x1540) + 0x288
            int32_t count = ((j_27 << 1).d + j_27.d) << 5
            int32_t rdx_33 = r14_10[3].d
            
            if (rdx_33 u< count)
                r14_10[3].d = 0
                sub_1405d16e0(&r14_10[1], nullptr)
                sub_1405d16e0(&r14_10[2], nullptr)
                (*(*r14_10 + 8))(r14_10, 0x10, zx.q(count u>> 4), 1, 4, var_be0, var_bd8_1, 
                    var_bd0, var_bc8, var_bc0_1, var_bb8_1)
                rdx_33 = r14_10[3].d
            
            int64_t* rcx_64 = data_143f0f180
            int64_t rax_119 = (*(*rcx_64 + 0x130))(rcx_64, &data_143f02b98, r14_10[1], 0, rdx_33, 
                1, var_bd8_1, var_bd0, var_bc8, var_bc0_1, var_bb8_1)
            int64_t rdx_34 = var_bb0
            r14_10[4] = rax_119
            memcpy(rax_119, rdx_34, count)
            int64_t* rcx_66 = data_143f0f180
            (*(*rcx_66 + 0x138))(rcx_66, &data_143f02b98, r14_10[1])
            r14_10[4] = 0
            int32_t rcx_67 = data_1439b62f0
            int32_t temp0_95 =
                divs.dp.d(sx.q(*(var_bc0_1 + 0x15a0) - *(var_bc0_1 + 0x1598) - 1 + rcx_67), rcx_67)
            int32_t temp0_96 =
                divs.dp.d(sx.q(rcx_67 - 1 + *(var_bc0_1 + 0x15a4) - *(var_bc0_1 + 0x159c)), rcx_67)
            int32_t r14_12 = temp0_96 * temp0_95
            *(rdi_1 + 0x260) = *(*(var_bc0_1 + 0x1540) + 0x298)
            *rdi_1 = r12_3
            int32_t rcx_69 = *(var_bc0_1 + 0x5044)
            bool cond:0_1 = rcx_69 != neg.d(*(var_bc0_1 + 0x5040))
            rdi_1[1] = rcx_69 + *(var_bc0_1 + 0x5040)
            rdi_1[3] = r14_12 * data_1439b62f4
            rdi_1[6] = data_1439b62f4
            rdi_1[4] = temp0_95
            rdi_1[5] = temp0_96
            rdi_1[7] = data_1439b62f8
            int32_t rax_133 = 0
            uint64_t rflags_1
            int32_t temp0_97
            temp0_97, rflags_1 = __bsr_gprv_memv(data_1439b62f0)
            j_17.d = temp0_97
            
            if (cond:0_1)
                rax_133 = temp0_97
            
            rdi_1[8] = rax_133
            rdi_1[0x7a] = j_13
            rdi_1[0x7b] = j_14
            int32_t rax_136 = data_1439b62f4
            uint128_t zmm0_2 = _mm_max_ss((*(var_bc0_1 + 0x5048)).d, zmm10[0])
            zmm7.q = _mm_cvtps_pd((*(var_bc0_1 + 0xd30)).q).q f+ zmm8.q
            zmm0_2.d = __minss_xmmss_memss(zmm0_2.d, 0x484ccccd).d f+ 10f
            zmm6 = _mm_cvtps_pd(zmm0_2.q)
            zmm0_2.q = _mm_cvtepi32_pd(zx.q(rax_136 - 1)).q f* 0.24691358024691359
            exp2(zmm0_2.q)
            zmm0_2.q = zmm0_2.q f* zmm7.q
            zmm6[0].q = zmm6[0].q f- zmm0_2.q
            zmm6[0].q = zmm6[0].q f- zmm7.q
            int32_t var_7c0_1 = 0x4081999a
            zmm6[0].q = zmm6[0].q f/ zmm6[0].q
            zmm0_2.q = 0x3ff0000000000000 f- zmm6[0].q
            zmm2 = _mm_cvtpd_ps(zmm6)
            zmm0_2.q = zmm0_2.q f/ zmm7.q
            *(rdi_1 + 0x30) = (_mm_unpacklo_ps(_mm_cvtpd_ps(zmm0_2), zmm2[0].q)).q
            rdi_1[0xe] = 0x4081999a
            
            if (sx.q(j_27.d) u> 0x10000)
                char rax_139 = data_143e846a4
                char rcx_74 = rax_139
                
                if (rax_139 == 0)
                    rcx_74 = 1
                
                data_143e846a4 = rcx_74
            
            void* rbx_12 = *(var_bc0_1 + 0x1540)
            int32_t r14_14 = r14_12 * data_1439b6308 * data_1439b62f4
            uint64_t r9_9 = zx.q(r14_14 * data_1439b6304)
            int32_t var_be0_1
            
            if (zx.q(*(rbx_12 + 0x2c8)) != sx.q(r9_9.d) << 2)
                int64_t var_678 = 0
                int32_t var_668_1 = 1
                char var_650_1 = 0
                var_be0_1.q = &var_678
                int32_t var_640_1 = 0
                int64_t var_670_1 = 0
                int64_t var_648_1 = 0
                int32_t var_be8_4 = 0x208
                *(rbx_12 + 0x2c8) = (r9_9 << 2).d
                int64_t* rcx_77 = data_143f0f180
                uint128_t var_664_1 = data_143dbb1e0
                int32_t var_654_1 = (1 << (data_1439c7a34).b) - 1
                void var_a80
                (*(*rcx_77 + 0x498))(rcx_77, &var_a80, &data_143f02b98)
                sub_1405d1600(rbx_12 + 0x2b0, &var_a80)
                sub_1405d1550(&var_a80)
                int64_t* rcx_80 = data_143f0f180
                var_be8_4.b = 0x1c
                void var_a78
                (*(*rcx_80 + 0x590))(rcx_80, &var_a78, &data_143f02b98, *(rbx_12 + 0x2b0), 
                    var_be8_4, var_be0_1)
                sub_1405d1600(rbx_12 + 0x2b8, &var_a78)
                sub_1405d1550(&var_a78)
                int64_t* rcx_83 = data_143f0f180
                var_be0_1.b = 0x1c
                void var_a70
                (*(*rcx_83 + 0x4b8))(rcx_83, &var_a70, &data_143f02b98, *(rbx_12 + 0x2b0), 4, 
                    var_be0_1)
                sub_1405d1600(rbx_12 + 0x2c0, &var_a70)
                sub_1405ec8a0(&var_a70)
                rbx_12 = *(var_bc0_1 + 0x1540)
            
            int32_t rdx_50 = data_1439b62f8
            int32_t r9_14 = r14_14 * rdx_50
            
            if (zx.q(*(rbx_12 + 0x2e8)) != sx.q(r9_14) * 2)
                int64_t var_638 = 0
                int32_t var_628_1 = 1
                char var_610_1 = 0
                var_be0_1.q = &var_638
                int32_t var_600_1 = 0
                int64_t var_630_1 = 0
                int64_t var_608_1 = 0
                int32_t var_be8_6 = 0x208
                *(rbx_12 + 0x2e8) = r9_14 * 2
                int64_t* rcx_89 = data_143f0f180
                uint128_t var_624_1 = data_143dbb1e0
                int32_t var_614_1 = (1 << (data_1439c7a34).b) - 1
                void var_a68
                (*(*rcx_89 + 0x498))(rcx_89, &var_a68, &data_143f02b98)
                sub_1405d1600(rbx_12 + 0x2d0, &var_a68)
                sub_1405d1550(&var_a68)
                int64_t* rcx_92 = data_143f0f180
                var_be8_6.b = 0x20
                void var_a60
                (*(*rcx_92 + 0x590))(rcx_92, &var_a60, &data_143f02b98, *(rbx_12 + 0x2d0), 
                    var_be8_6, var_be0_1)
                sub_1405d1600(rbx_12 + 0x2d8, &var_a60)
                sub_1405d1550(&var_a60)
                int64_t* rcx_95 = data_143f0f180
                var_be0_1.b = 0x20
                void var_a58
                (*(*rcx_95 + 0x4b8))(rcx_95, &var_a58, &data_143f02b98, *(rbx_12 + 0x2d0), 2, 
                    var_be0_1)
                sub_1405d1600(rbx_12 + 0x2e0, &var_a58)
                sub_1405ec8a0(&var_a58)
                rdx_50 = data_1439b62f8
            
            int64_t rax_153 = *(var_bc0_1 + 0x15a8)
            int64_t var_7b0
            __builtin_memset(&var_7b0, 0, 0x14)
            void** var_7b8 = &data_142f40b50
            int64_t var_798_1 = 0
            int128_t var_788
            __builtin_memset(&var_788, 0, 0x14)
            void** var_790 = &data_142f40b50
            int64_t var_770_1 = 0
            int64_t* r13_4
            
            if (rax_153 == 0)
                r13_4 = &var_7b8
            else
                r13_4 = *(var_bc0_1 + 0x15a8) + 0xce8
            
            int32_t r15_8 = r14_14 * data_1439b630c * rdx_50
            
            if (j_9.d == 0)
                bool cond:2_1 = j_9:4.d s>= 1
                j_9.d = 1
                
                if (not(cond:2_1))
                    sub_1411ec960(&var_b90, 0)
                
                int64_t* rax_154 = var_b90
                int64_t rbx_15 = sx.q(var_bb8_1)
                *rax_154 = 0
                rax_154[1] = 0
                int32_t rax_155 = (rbx_15 + 1).d
                j_10.d = rax_155
                
                if (rax_155 s> j_10:4.d)
                    sub_1411ec960(&var_b80, rbx_15.d)
                
                int64_t* rax_158 = (rbx_15 << 4) + var_b80
                *rax_158 = 0
                rax_158[1] = 0
            
            sub_141217fe0(&var_b90, r13_4)
            sub_141217fe0(&var_b80, &r13_4[5])
            var_be0 = 1
            int32_t var_be8_8 = 1
            *(rdi_1 + 0x278) = *(data_143f10dc8 + 0x10)
            *(rdi_1 + 0x268) = *(*(var_bc0_1 + 0x1540) + 0x2c0)
            *(rdi_1 + 0x270) = *(*(var_bc0_1 + 0x1540) + 0x2e0)
            int64_t* rcx_105 = data_143f0f180
            void* var_a50
            (*(*rcx_105 + 0xf8))(rcx_105, &var_a50, rdi_1, &data_143e82030, var_be8_8, var_be0)
            void* rax_163 = var_a50
            j_13.q = rax_163
            
            if (rax_163 != 0)
                *(rax_163 + 8) += 1
            
            sub_1405d1550(&var_a50)
            sub_1405d1600(*(var_bc0_1 + 0x1540) + 0x280, &j_13)
            sub_1405d1550(&j_13)
            int32_t r8_24 = data_1439b6310
            int32_t temp0_106 = divs.dp.d(sx.q(temp0_95 - 1 + r8_24), r8_24)
            int32_t var_a3c_1 = divs.dp.d(sx.q(temp0_96 - 1 + r8_24), r8_24)
            void* rdx_59 = *(var_bc0_1 + 0x1540)
            j_13 = divs.dp.d(sx.q(data_1439b62f4 - 1 + r8_24), r8_24)
            int64_t rcx_111 = *(rdx_59 + 0x2b8)
            int64_t var_828_1 = *(rdx_59 + 0x2d8)
            void* var_5e8_1 = nullptr
            int32_t j_15 = 2
            void var_5f8
            sub_1412385b0(&var_5f8, 2, 0)
            void* rdx_60 = &var_5f8
            int64_t* r8_25 = var_b30_1
            void* rdi_3 = &var_5f8
            
            if (var_5e8_1 != 0)
                rdx_60 = var_5e8_1
            
            *rdx_60 = rcx_111.o
            uint64_t j_19 = zx.q(j_15)
            
            if (var_5e8_1 != 0)
                rdi_3 = var_5e8_1
            
            int32_t j_22 = j_19.d
            int64_t* rbx_19 = (*r8_25 + 7) & 0xfffffffffffffff8
            uint32_t rdx_61 = (j_19 << 3).d
            int64_t r12_4 = sx.q(rdx_61)
            void* rax_179 = rbx_19 + r12_4
            
            if (rax_179 u> r8_25[1])
                sub_140b0e3d0(r8_25, rdx_61 + 8)
                r8_25 = var_b30_1
                j_19 = zx.q(j_22)
                rbx_19 = (*r8_25 + 7) & 0xfffffffffffffff8
                rax_179 = rbx_19 + r12_4
            
            *r8_25 = rax_179
            int64_t j_7 = sx.q(j_19.d)
            
            if (j_19.d s> 0)
                int64_t* rcx_116 = rbx_19
                int64_t j_3
                
                do
                    *rcx_116 = *(rdi_3 - rbx_19 + rcx_116)
                    rcx_116 = &rcx_116[1]
                    j_3 = j_7
                    j_7 -= 1
                while (j_3 != 1)
            
            void*** rcx_119 = (*r8_25 + 7) & 0xfffffffffffffff8
            void* rax_181 = &rcx_119[6]
            
            if (rax_181 u> r8_25[1])
                sub_140b0e3d0(r8_25, 0x38)
                r8_25 = var_b30_1
                rcx_119 = (*r8_25 + 7) & 0xfffffffffffffff8
                rax_181 = &rcx_119[6]
            
            *r8_25 = rax_181
            void**** rax_182 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_182 = rcx_119
            *(arg2 + 8) = &rcx_119[1]
            rcx_119[1] = 0
            rcx_119[3] = rbx_19
            *rcx_119 = &data_142da7798
            rcx_119[2].d = j_22
            rcx_119[4] = 1
            rcx_119[5] = 0
            void var_358
            sub_1419928d0(&var_358, arg2)
            int64_t var_920_1 = 0x209
            int32_t var_928_1 = 4
            int32_t var_924_1 = r15_8
            int64_t* var_350
            void*** rax_185 = sub_14081d830(0x48, var_350, 1, 0)
            void*** r15_9 = rax_185
            
            if (rax_185 == 0)
                r15_9 = nullptr
            else
                r15_9[2] = 0
                r15_9[1] = u"CulledLightLinks"
                r15_9[3].b = 0
                *(r15_9 + 0x1c) = 0
                r15_9[4] = 0
                r15_9[5].w = 0x200
                *r15_9 = &data_142f285d0
                *(r15_9 + 0x30) = var_928_1.o
                r15_9[8] = 0
            
            int64_t var_910_1 = 0x209
            int32_t var_918_1 = 4
            int32_t var_914_1 = r14_14
            void*** rax_186 = sub_14081d830(0x48, var_350, 1, 0)
            void*** r12_5 = rax_186
            
            if (rax_186 == 0)
                r12_5 = nullptr
            else
                r12_5[2] = 0
                r12_5[1] = u"StartOffsetGrid"
                r12_5[3].b = 0
                *(r12_5 + 0x1c) = 0
                r12_5[4] = 0
                r12_5[5].w = 0x200
                *r12_5 = &data_142f285d0
                *(r12_5 + 0x30) = var_918_1.o
                r12_5[8] = 0
            
            int64_t var_900_1 = 0x209
            int32_t var_908_1 = 4
            int32_t var_904_1 = 1
            void*** rax_187 = sub_14081d830(0x48, var_350, 1, 0)
            void*** r14_15 = rax_187
            
            if (rax_187 == 0)
                r14_15 = nullptr
            else
                r14_15[2] = 0
                r14_15[1] = u"NextCulledLightLink"
                r14_15[3].b = 0
                *(r14_15 + 0x1c) = 0
                r14_15[4] = 0
                r14_15[5].w = 0x200
                *r14_15 = &data_142f285d0
                *(r14_15 + 0x30) = var_908_1.o
                r14_15[8] = 0
            
            int64_t var_8f0_1 = 0x209
            int32_t var_8f8_1 = 4
            int32_t var_8f4_1 = 1
            void*** rax_188 = sub_14081d830(0x48, var_350, 1, 0)
            void*** rdi_5 = rax_188
            
            if (rax_188 == 0)
                rdi_5 = nullptr
            else
                rdi_5[2] = 0
                rdi_5[1] = u"NextCulledLightData"
                rdi_5[3].b = 0
                *(rdi_5 + 0x1c) = 0
                rdi_5[4] = 0
                rdi_5[5].w = 0x200
                *rdi_5 = &data_142f285d0
                *(rdi_5 + 0x30) = var_8f8_1.o
                rdi_5[8] = 0
            
            int64_t* rax_189 = sub_14081d830(0x50, var_350, 1, 0)
            int64_t* rbx_22 = rax_189
            
            if (rax_189 == 0)
                rbx_22 = nullptr
            else
                __builtin_memset(rax_189, 0, 0x50)
            
            memset(rbx_22, 0, 0x50)
            sub_1405d16e0(&rbx_22[2], *(var_bc0_1 + 0x10))
            sub_1405d16e0(rbx_22, *(var_bc0_1 + 0x5050))
            sub_1405d16e0(&rbx_22[1], *(*(var_bc0_1 + 0x1540) + 0x280))
            int32_t var_8e0_1 = 0x1c
            int16_t var_8dc_1 = 0
            rbx_22[3] = *(*(var_bc0_1 + 0x1540) + 0x2b8)
            rbx_22[4] = *(*(var_bc0_1 + 0x1540) + 0x2d8)
            void*** rax_195 = sub_14081d830(0x28, var_350, 1, 0)
            
            if (rax_195 == 0)
                rax_195 = nullptr
            else
                rax_195[1] = r14_15[1]
                *rax_195 = &data_142f285c0
                rax_195[2] = 0
                *(rax_195 + 0x18) = r14_15.o
            
            rbx_22[5] = rax_195
            int32_t var_8d0_1 = 0x1c
            int16_t var_8cc_1 = 0
            void*** rax_196 = sub_14081d830(0x28, var_350, 1, 0)
            
            if (rax_196 == 0)
                rax_196 = nullptr
            else
                rax_196[1] = r12_5[1]
                *rax_196 = &data_142f285c0
                rax_196[2] = 0
                *(rax_196 + 0x18) = r12_5.o
            
            rbx_22[6] = rax_196
            int32_t var_8c0_1 = 0x1c
            int16_t var_8bc_1 = 0
            void*** rax_197 = sub_14081d830(0x28, var_350, 1, 0)
            
            if (rax_197 == 0)
                rax_197 = nullptr
            else
                rax_197[1] = r15_9[1]
                *rax_197 = &data_142f285c0
                rax_197[2] = 0
                *(rax_197 + 0x18) = r15_9.o
            
            rbx_22[7] = rax_197
            rbx_22[8] = r13_4[2]
            rbx_22[9] = r13_4[7]
            int32_t r9_18
            r9_18.b = data_1439b62fc != 0
            uint128_t var_818
            sub_1419a2ec0(*(var_bc0_1 + 0x5150), &var_818, &data_143e820b0, r9_18)
            zmm7 = var_818
            int64_t* r12_6
            int128_t var_b08
            
            if (data_1439b62fc == 0)
                r12_6 = var_b30_1
                int64_t var_a30_1 = 0
                int64_t var_a28_1 = 0
                int64_t rdi_7 = *(*(var_bc0_1 + 0x1540) + 0x2b8)
                void*** rcx_156 = (*r12_6 + 7) & 0xfffffffffffffff8
                void* rax_213 = &rcx_156[5]
                
                if (rax_213 u> r12_6[1])
                    sub_140b0e3d0(r12_6, 0x30)
                    rcx_156 = (*r12_6 + 7) & 0xfffffffffffffff8
                    rax_213 = &rcx_156[5]
                
                *r12_6 = rax_213
                int128_t var_6c8_1 = zx.o(0)
                int64_t* rax_214 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_214 = rcx_156
                *(arg2 + 8) = &rcx_156[1]
                rcx_156[1] = 0
                *rcx_156 = &data_142f115d8
                rcx_156[2] = rdi_7
                *(rcx_156 + 0x18) = var_a30_1.o
                int128_t var_708_1 = sub_1412285f0(rcx_156.b)
                sub_141998c50(zmm7.q, &data_143e84480, rbx_22)
                int32_t j_21 = j_13
                int64_t var_b00_3 = temp0_106.q
                uint128_t var_b10_3 = zmm7
                void*** rax_216
                char rcx_161
                rax_216, rcx_161 = sub_14081d830(0x60, var_350, 1, 0)
                void*** rdi_8 = rax_216
                
                if (rax_216 == 0)
                    rdi_8 = nullptr
                else
                    sub_1412285f0(rcx_161)
                    void* var_7d0_1 = &data_143e844b0
                    int128_t var_6f8 = rbx_22.o
                    void var_b55
                    sub_141992bd0(rdi_8, &var_b55, &var_6f8, 2)
                    *rdi_8 = &data_142f42640
                    *(rdi_8 + 0x38) = rbx_22.o
                    *(rdi_8 + 0x48) = var_b08
                    rdi_8[0xb] = j_21.q
                
                sub_1419968d0(&var_358, rdi_8)
            else
                sub_1419965b0(&var_358, rbx_22[6])
                sub_1419965b0(&var_358, rbx_22[5])
                int32_t var_8b0_1 = 0x1c
                int16_t var_8ac_1 = 0
                void*** rax_200 = sub_14081d830(0x28, var_350, 1, 0)
                void*** rdx_81 = rax_200
                
                if (rax_200 == 0)
                    rdx_81 = nullptr
                else
                    rdx_81[1] = rdi_5[1]
                    *rdx_81 = &data_142f285c0
                    rdx_81[2] = 0
                    *(rdx_81 + 0x18) = rdi_5.o
                
                int128_t var_6e8_1 = zx.o(0)
                int128_t var_748_1 = sub_1412285f0(sub_1419965b0(&var_358, rdx_81))
                sub_141998c50(var_818.q, &data_143e84480, rbx_22)
                int32_t j_20 = j_13
                uint128_t var_b10_1 = zmm7
                zmm7 = zx.o(temp0_106.q)
                uint64_t var_b00_1 = zmm7.q
                void*** rax_202
                char rcx_139
                rax_202, rcx_139 = sub_14081d830(0x60, var_350, 1, 0)
                void*** r14_17 = rax_202
                
                if (rax_202 == 0)
                    r14_17 = nullptr
                else
                    sub_1412285f0(rcx_139)
                    void* var_800_1 = &data_143e844b0
                    int128_t var_738 = rbx_22.o
                    void var_b57
                    sub_141992bd0(r14_17, &var_b57, &var_738, 2)
                    *r14_17 = &data_142f42640
                    *(r14_17 + 0x38) = rbx_22.o
                    *(r14_17 + 0x48) = var_b08
                    r14_17[0xb] = j_20.q
                
                sub_1419968d0(&var_358, r14_17)
                uint128_t var_7f8
                sub_1419a2ec0(*(var_bc0_1 + 0x5150), &var_7f8, &data_143e821c0, 0)
                zmm8 = var_7f8
                int64_t* rax_203 = sub_14081d830(0x40, var_350, 1, 0)
                int64_t* rbx_23 = rax_203
                
                if (rax_203 == 0)
                    rbx_23 = nullptr
                else
                    __builtin_memset(rax_203, 0, 0x38)
                
                __builtin_memset(rbx_23, 0, 0x40)
                sub_1405d16e0(&rbx_23[1], *(var_bc0_1 + 0x10))
                sub_1405d16e0(rbx_23, *(*(var_bc0_1 + 0x1540) + 0x280))
                int32_t var_84c_1 = 0x1c
                int32_t var_850_1 = data_1439c8a54
                void*** rax_205 = sub_14081d830(0x28, var_350, 1, 0)
                
                if (rax_205 == 0)
                    rax_205 = nullptr
                else
                    rax_205[1] = r15_9[1]
                    rax_205[2] = 0
                    *(rax_205 + 0x18) = r15_9.o
                    *rax_205 = &data_142f285c0
                
                rbx_23[6] = rax_205
                int32_t var_8a0_1 = 0x1c
                int16_t var_89c_1 = 0
                rbx_23[2] = *(*(var_bc0_1 + 0x1540) + 0x2b8)
                rbx_23[3] = *(*(var_bc0_1 + 0x1540) + 0x2d8)
                void*** rax_208 = sub_14081d830(0x28, var_350, 1, 0)
                
                if (rax_208 == 0)
                    rax_208 = nullptr
                else
                    rax_208[1] = rdi_5[1]
                    *rax_208 = &data_142f285c0
                    rax_208[2] = 0
                    *(rax_208 + 0x18) = rdi_5.o
                
                rbx_23[4] = rax_208
                int32_t var_83c_1 = 0x1c
                int32_t var_840_1 = data_1439c8a54
                void*** rax_210
                int64_t rcx_149
                int128_t zmm6_3
                rax_210, rcx_149, zmm6_3 = sub_14081d830(0x28, var_350, 1, 0)
                
                if (rax_210 == 0)
                    rax_210 = nullptr
                else
                    rcx_149 = r12_5[1]
                    rax_210[1] = rcx_149
                    rax_210[2] = 0
                    *(rax_210 + 0x18) = r12_5.o
                    *rax_210 = &data_142f285c0
                
                rbx_23[5] = rax_210
                int128_t var_6d8_1 = zmm6_3
                int128_t var_728_1 = sub_141228480(rcx_149.b)
                sub_141998c50(var_7f8.q, &data_143e84590, rbx_23)
                uint128_t var_b10_2 = zmm8
                uint64_t var_b00_2 = zmm7.q
                void*** rax_211
                char rcx_151
                rax_211, rcx_151 = sub_14081d830(0x60, var_350, 1, 0)
                void*** rdi_6 = rax_211
                
                if (rax_211 == 0)
                    rdi_6 = nullptr
                else
                    sub_141228480(rcx_151)
                    void* var_7e0_1 = &data_143e845c0
                    int128_t var_718 = rbx_23.o
                    void var_b56
                    sub_141992bd0(rdi_6, &var_b56, &var_718, 2)
                    *rdi_6 = &data_142f42650
                    *(rdi_6 + 0x38) = rbx_23.o
                    *(rdi_6 + 0x48) = var_b08
                    rdi_6[0xb] = j_20.q
                
                sub_1419968d0(&var_358, rdi_6)
                zmm8 = 0x4023000000000000
                r12_6 = var_b30_1
            sub_14199ef00(&var_358)
            void* rdi_9 = &var_5f8
            int64_t j_12 = sx.q(j_15)
            
            if (var_5e8_1 != 0)
                rdi_9 = var_5e8_1
            
            int64_t* rbx_26 = (*r12_6 + 7) & 0xfffffffffffffff8
            int32_t rdx_100 = (j_12 << 3).d
            int64_t r15_10 = sx.q(rdx_100)
            void* rax_218 = r15_10 + rbx_26
            
            if (rax_218 u> r12_6[1])
                sub_140b0e3d0(r12_6, rdx_100 + 8)
                rbx_26 = (*r12_6 + 7) & 0xfffffffffffffff8
                rax_218 = r15_10 + rbx_26
            
            *r12_6 = rax_218
            int64_t j_8 = j_12
            
            if (j_12.d s> 0)
                int64_t* rcx_166 = rbx_26
                int64_t j_4
                
                do
                    *rcx_166 = *(rdi_9 - rbx_26 + rcx_166)
                    rcx_166 = &rcx_166[1]
                    j_4 = j_8
                    j_8 -= 1
                while (j_4 != 1)
            
            void*** rcx_169 = (*r12_6 + 7) & 0xfffffffffffffff8
            void* rax_220 = &rcx_169[6]
            
            if (rax_220 u> r12_6[1])
                sub_140b0e3d0(r12_6, 0x38)
                rcx_169 = (*r12_6 + 7) & 0xfffffffffffffff8
                rax_220 = &rcx_169[6]
            
            *r12_6 = rax_220
            void**** rax_221 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_221 = rcx_169
            *(arg2 + 8) = &rcx_169[1]
            rcx_169[1] = 0
            *rcx_169 = &data_142da7798
            rcx_169[2].d = j_12.d
            rcx_169[3] = rbx_26
            rcx_169[4].d = 0
            *(rcx_169 + 0x24) = 1
            rcx_169[5] = 0
            int32_t var_130_1 = 0
            int32_t var_12c
            void var_138
            
            if (var_12c != 0)
                sub_1410b3aa0(&var_138, 0)
            int32_t var_1a8_1 = 0
            int32_t var_1a4
            void var_1b0
            
            if (var_1a4 != 0)
                sub_1410b3aa0(&var_1b0, 0)
            int32_t var_200_1 = 0
            void var_248
            sub_141219390(&var_248)
            int32_t var_250_1 = 0
            void var_298
            sub_141219390(&var_298)
            int32_t var_2a0_1 = 0
            void var_2e8
            sub_141096480(&var_2e8, 0)
            int32_t var_2f0_1 = 0
            void var_338
            sub_14108c840(&var_338)
            
            if (var_5e8_1 != 0)
                sub_140a74f90(var_5e8_1)
            
            sub_1412193d0(&var_790)
            sub_1412193d0(&var_7b8)
            rcx_6 = var_a48_1 + 1
            r13 = arg1
            i_1 = i_2 + 1
            rbx = var_b28
            i_2 = i_1
            var_a48_1 = rcx_6
            r15 = zx.q(var_bd7_1)
        while (i_1 s< *(r13 + 0xa8))
    
    result = sub_140b37f60("ComputeLightGrid")

__security_check_cookie(rax_1 ^ &var_c08)
return result
