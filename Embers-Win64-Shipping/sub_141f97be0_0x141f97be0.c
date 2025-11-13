// 函数: sub_141f97be0
// 地址: 0x141f97be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* performanceCount = arg1
int64_t* performanceCount_2 = arg1
void* r13 = &arg1[0xe]
int64_t* rcx = arg1[0xe]
void* rax_1
int64_t r8
rax_1, r8 = (*(*rcx + 0x150))(rcx)
uint64_t rsi = *(rax_1 + 0xf0)
int64_t r12 = *(performanceCount_2[5] + 0x58)
uint64_t var_190 = rsi

if (rsi != r12)
    sub_140b33630("ReplicateActor")

uint128_t zmm7 = 0x4170000000000000
int64_t performanceCount_1
char arg_20
int128_t zmm6

if (rsi == r12 || data_143f3bc4c == 0)
    arg_20 = 0
    zmm6 = zx.o(0)
    
    if (rsi != r12)
        data_143f3bc48 += 1
else
    arg_20 = 1
    QueryPerformanceCounter(&performanceCount_1)
    zmm6.q = float.d(performanceCount_1)
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ zmm7.q
    data_143f3bc48 += 1

int32_t r9 = performanceCount_2[0x12].d
uint64_t result
void*** (* var_1f0)()
int64_t* var_1a0

if ((r9.b & 4) != 0)
    int64_t* rax_3 = (*(*performanceCount_2 + 0x288))(performanceCount_2, &var_1a0)
    int16_t* const r8_1
    
    if (rax_3[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_3
    
    sub_140a2e390(&var_1f0, u"ReplicateActor called while already replicating! %s", r8_1)
    int64_t* rcx_4 = var_1a0
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    void*** (* rcx_5)() = var_1f0
    
    if (rcx_5 == 0)
        result = 0
    else
        sub_140a74f90(rcx_5)
        result = 0
else if ((r9.b & 0x20) == 0)
    int32_t rax_5 = *(*r13 + 0xc)
    int64_t rax_11
    
    if (rax_5 s>= data_143e1d9b4)
        rax_11 = 0
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_5)
        uint32_t rdx_3 = zx.d(temp0_1)
        int32_t rax_7 = temp1_1 + rdx_3
        rax_11 =
            *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(zx.d(rax_7.w) - rdx_3) * 0x18
    
    if ((*(rax_11 + 8) & 0x30000000) == 0)
        int32_t rax_17 = performanceCount_2[6].d
        
        if (not(test_bit(rax_17, 8)))
            goto label_141f97e3f
        
        if (performanceCount_2[0xa].d s> 0)
            result = 0
        else
            performanceCount_2[6].d = rax_17 & 0xfffffeff
        label_141f97e3f:
            r8.b = 1
            void* rax_19 = sub_142437e30(rax_1, 0, r8.b)
            rsi.b = 0
            char arg_18 = 0
            
            if (performanceCount_2[7].d == 0xffffffff)
            label_141f97f0e:
                performanceCount_1.b = 0
            label_141f97f1e:
                void** var_188
                sub_141f79e30(&var_188, performanceCount_2, 0)
                char var_15f
                
                if ((var_15f & 1) == 0)
                    uint8_t var_98
                    uint8_t rcx_22 = var_98
                    
                    if (rsi.b != 0)
                        rcx_22 |= 0x30
                        var_98 = rcx_22
                    
                    void* rdx_9 = performanceCount_2[5]
                    int32_t rax_26 = performanceCount_2[0x12].d | 4
                    bool cond:4_1 = performanceCount_2[7].d == 0xffffffff
                    performanceCount_2[0x12].d = rax_26
                    int32_t var_288 = 0
                    int32_t var_280
                    int128_t var_238
                    int64_t* rdx_17
                    
                    if (cond:4_1 || *(rdx_9 + 0x1508) != 0)
                        int32_t rax_47
                        
                        if (*(rdx_9 + 0x1508) != 2)
                            rax_47 = 2
                        else
                            rax_47 = not.d(performanceCount_2[6].d u>> 0xb) & 2
                        
                        rdx_17 = *r13
                        var_288 = rax_47
                        var_98 = ((rdx_17[0xb].b & 1) | 8) << 2 | (rcx_22 & 0xfb)
                    else
                        if ((rax_26.b & 1) == 0 && (performanceCount_2[6].b & 1) != 0)
                            int32_t var_27c_1 = 1
                            performanceCount_2[0x12].d = rax_26 | 1
                            int32_t r11_1 = performanceCount_2[0x1a].d
                            void* r9_2 = &performanceCount_2[0x17]
                            void* var_278_1 = r9_2
                            int32_t rcx_23 = 0
                            var_280 = 0
                            int32_t r8_3 = 0
                            int32_t var_270_1 = 0xffffffff
                            int64_t var_26c_1 = 0
                            
                            if (r11_1 != 0)
                                void* rax_28 = *(r9_2 + 0x10)
                                
                                if (rax_28 != 0)
                                    r9_2 = rax_28
                                
                                int32_t temp4_1
                                int32_t temp5_1
                                temp4_1:temp5_1 = sx.q(r11_1 - 1)
                                int32_t rdx_12 = *r9_2
                                
                                if (rdx_12 != 0)
                                label_141f9801c:
                                    int32_t rax_35 = ((rdx_12 - 1) & rdx_12) ^ rdx_12
                                    uint64_t rflags_1
                                    int32_t temp0_2
                                    temp0_2, rflags_1 = _bit_scan_reverse(rax_35)
                                    int32_t var_27c_2 = rax_35
                                    int32_t rax_36
                                    
                                    if (rax_35 == 0)
                                        rax_36 = 0x20
                                    else
                                        rax_36 = 0x1f - temp0_2
                                    
                                    var_26c_1.d = r8_3 - rax_36 + 0x1f
                                    
                                    if (r8_3 - rax_36 + 0x1f s> r11_1)
                                        var_26c_1.d = r11_1
                                else
                                    while (true)
                                        int64_t rdx_13 = sx.q(rcx_23)
                                        r8_3 += 0x20
                                        rcx_23 += 1
                                        var_26c_1:4.d = r8_3
                                        var_280 = rcx_23
                                        
                                        if (rdx_13.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_12 = *(r9_2 + (rdx_13 << 2) + 4)
                                        var_270_1 = 0xffffffff
                                        
                                        if (rdx_12 != 0)
                                            goto label_141f9801c
                                    
                                    var_26c_1.d = r11_1
                            
                            uint128_t zmm4_1 = var_270_1.o
                            void* var_1a8_1 = &performanceCount_2[0x15]
                            uint128_t zmm0_1 = var_280.o
                            uint128_t var_1b8_1 = zmm4_1
                            int16_t var_200_1 = 0
                            void* rax_38 = zmm0_1.q
                            uint128_t var_228_1 = zmm0_1
                            var_238 = (&performanceCount_2[0x15]).o
                            zmm0_1.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
                            var_1b8_1 = zmm0_1
                            uint128_t var_218_1 = zmm0_1
                            
                            if (_mm_bsrli_si128(zmm4_1, 4).d s< *(rax_38 + 0x18))
                                int32_t i = var_228_1:0xc.d
                                
                                do
                                    sub_141fb3670(*((sx.q(i) << 5) + *var_238.q + 8))
                                    var_228_1:8.d &= not.d(var_238:0xc.d)
                                    sub_14059bdd0(&var_238:8)
                                    i = var_228_1:0xc.d
                                while (i s< *(var_228_1.q + 0x18))
                                
                                if (var_200_1.b != 0 && var_200_1:1.b != 0)
                                    sub_1405b6520(&performanceCount_2[0x15], 
                                        performanceCount_2[0x16].d - *(performanceCount_2 + 0xdc), 
                                        1)
                        
                        rdx_17 = *r13
                    
                    uint64_t rax_50 = (*(*rdx_17 + 0x4a0))(rdx_17)
                    void* rax_51
                    int64_t rax_52
                    void* rdx_18
                    
                    if (rax_50 != performanceCount_2[5] && rax_50 != 0)
                        rax_51 = sub_1424929c0()
                        rdx_18 = *(rax_50 + 0x10)
                        rax_52 = sx.q(*(rax_51 + 0x38))
                    
                    int32_t rax_56
                    
                    if (rax_50 != performanceCount_2[5] && (rax_50 == 0
                            || rax_52.d s> *(rdx_18 + 0x38)
                            || *(*(rdx_18 + 0x30) + (rax_52 << 3)) != rax_51 + 0x30
                            || *(rax_50 + 0x1a30) != performanceCount_2[5]))
                        rax_56 = var_288 & 0xfffffffe
                    else
                        rax_56 = var_288 | 1
                    
                    var_288 = rax_56
                    uint64_t rdi_3
                    
                    if ((rax_56.b & 2) == 0 || (performanceCount_2[6].d & 0x800) == 0)
                        rdi_3 = zx.q(performanceCount_1.b)
                    else
                        int64_t* rcx_33 = *(performanceCount_2[5] + 0x68)
                        (*(*rcx_33 + 0x280))(rcx_33, &var_188, performanceCount_2, r13)
                        int64_t* rcx_34 = *r13
                        rdi_3.b = 1
                        performanceCount_1.b = 1
                        (*(*rcx_34 + 0x3e8))(rcx_34, &var_188)
                        rax_56 = var_288
                    
                    int64_t* r12_1 = *r13
                    var_1a0 = r12_1
                    int64_t* r8_8 = r12_1
                    uint32_t rcx_35 = zx.d(*(r12_1 + 0x5f))
                    
                    if (rcx_35 == 2 && (rax_56.b & 1) == 0)
                        zmm6, zmm7 = sub_141dd7750(r12_1, 0, 0)
                        r8_8 = *r13
                        rax_56 = var_288
                    
                    int32_t rdx_22 = zx.d(r8_8[0x12].b) & 2
                    int32_t rcx_37 = 0
                    char var_284 = 0
                    
                    if (var_190 == r12)
                        rcx_37 = 4
                    
                    int32_t rcx_38 = 0
                    
                    if (*(r8_8 + 0x5f) == 1)
                        rcx_38 = 4
                    
                    char* var_1e8_1 = &var_284
                    var_288 =
                        (rdx_22 | rcx_37) << 2 | ((rcx_38 | (rax_56 & 0xfffffffb)) & 0xffffffe7)
                    var_1f0 = j_sub_140597fc0
                    void* rax_62
                    uint64_t rdx_26
                    void* r9_5
                    rax_62, rdx_26, r9_5 = sub_140a756e0(&var_1f0, &data_143958018)
                    int64_t* var_260 = rax_62 + 0x10
                    int64_t var_258_1 = *(rax_62 + 0x10)
                    uint64_t rcx_43 = *(rax_62 + 0x20)
                    char var_248_1 = 0
                    int64_t rcx_44 = *(rax_62 + 0x28)
                    *(rax_62 + 0x28) = &var_260
                    int64_t* rax_64 = var_260
                    rax_64[4].d += 1
                    uint128_t zmm0_2
                    
                    if (rsi.b != 0)
                    label_141f9860c:
                        result = 0
                        
                        if (performanceCount_1.b != 0)
                            r9_5.b = 1
                            (*(*performanceCount_2 + 0x2c8))(performanceCount_2, 
                                &performanceCount_1, &var_188, r9_5)
                            
                            if (rsi.b == 0)
                                int32_t var_27c_5 = 1
                                int32_t r11_3 = performanceCount_2[0x1a].d
                                void* r9_8 = &performanceCount_2[0x17]
                                void* var_278_3 = r9_8
                                int32_t rcx_67 = 0
                                var_280 = 0
                                int32_t r8_16 = 0
                                int32_t var_270_3 = 0xffffffff
                                int64_t var_26c_3 = 0
                                
                                if (r11_3 != 0)
                                    void* rax_96 = *(r9_8 + 0x10)
                                    
                                    if (rax_96 != 0)
                                        r9_8 = rax_96
                                    
                                    int32_t temp8_1
                                    int32_t temp9_1
                                    temp8_1:temp9_1 = sx.q(r11_3 - 1)
                                    rdx_26 = zx.q(*r9_8)
                                    
                                    if (rdx_26.d != 0)
                                    label_141f986cb:
                                        int32_t rax_103 = neg.d(rdx_26.d) & rdx_26.d
                                        uint64_t rflags_3
                                        int32_t temp0_8
                                        temp0_8, rflags_3 = _bit_scan_reverse(rax_103)
                                        int32_t var_27c_6 = rax_103
                                        int32_t r14_2
                                        
                                        if (rax_103 == 0)
                                            r14_2 = 0x20
                                        else
                                            r14_2 = 0x1f - temp0_8
                                        
                                        var_26c_3.d = r8_16 - r14_2 + 0x1f
                                        
                                        if (r8_16 - r14_2 + 0x1f s> r11_3)
                                            var_26c_3.d = r11_3
                                    else
                                        while (true)
                                            rdx_26 = sx.q(rcx_67)
                                            r8_16 += 0x20
                                            rcx_67 += 1
                                            var_26c_3:4.d = r8_16
                                            var_280 = rcx_67
                                            
                                            if (rdx_26.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                                break
                                            
                                            rdx_26 = zx.q(*(r9_8 + (rdx_26 << 2) + 4))
                                            var_270_3 = 0xffffffff
                                            
                                            if (rdx_26.d != 0)
                                                goto label_141f986cb
                                        
                                        var_26c_3.d = r11_3
                                
                                double zmm4_3[0x2] = var_270_3.o
                                void* var_1a8_3 = &performanceCount_2[0x15]
                                zmm0_2 = var_280.o
                                double var_1b8_3[0x2] = zmm4_3
                                int16_t var_200_3 = 0
                                uint128_t var_228_3 = zmm0_2
                                void* rax_105 = zmm0_2.q
                                zmm0_2.q = (_mm_unpackhi_pd(zmm4_3, zmm4_3[0])).q
                                int32_t rcx_69 = _mm_bsrli_si128(zmm4_3, 4)[0].d
                                var_238 = (&performanceCount_2[0x15]).o
                                uint128_t var_218_3 = zmm0_2
                                
                                if (rcx_69 s< *(rax_105 + 0x18))
                                    int32_t i_1 = var_228_3:0xc.d
                                    
                                    do
                                        sub_141fbf320(*((sx.q(i_1) << 5) + *var_238.q + 8), 
                                            &performanceCount_1, var_98 u>> 5 & 1)
                                        var_228_3:8.d &= not.d(var_238:0xc.d)
                                        sub_14059bdd0(&var_238:8)
                                        i_1 = var_228_3:0xc.d
                                    while (i_1 s< *(var_228_3.q + 0x18))
                                    
                                    if (var_200_3.b != 0 && var_200_3:1.b != 0)
                                        sub_1405b6520(&performanceCount_2[0x15], 
                                            performanceCount_2[0x16].d
                                                - *(performanceCount_2 + 0xdc), 
                                            1)
                                
                                if (performanceCount_2[0x48].d s> 0)
                                    for (int32_t i_2 = performanceCount_1.d; 
                                            i_2 s<= performanceCount_1:4.d; i_2 += 1)
                                        int32_t rdx_44 = i_2 & 0x8000003f
                                        
                                        if (rdx_44 s< 0)
                                            rdx_44 = ((rdx_44 - 1) | 0xffffffc0) + 1
                                        
                                        performanceCount.d = rdx_44
                                        void* rax_110
                                        rax_110, rdx_26 = sub_141f78ad0(&performanceCount_2[0x3d], 
                                            rdx_44, &performanceCount)
                                        
                                        if (*rax_110 != i_2)
                                            rdx_26 = zx.q(*(rax_110 + 0x10))
                                            *(rax_110 + 0x10) = 0
                                            
                                            if (*(rax_110 + 0x14) != rdx_26.d)
                                                sub_1405dadb0(rax_110 + 8, rdx_26.d)
                                        
                                        *rax_110 = i_2
                                        int64_t r14_3 = sx.q(performanceCount_2[0x48].d)
                                        
                                        if (r14_3.d != 0)
                                            int32_t rax_111 = *(rax_110 + 0x10)
                                            int32_t rdx_47 = r14_3.d + rax_111
                                            
                                            if (rdx_47 s> *(rax_110 + 0x14))
                                                sub_1405dadb0(rax_110 + 8, rdx_47)
                                                rax_111 = *(rax_110 + 0x10)
                                            
                                            memcpy(*(rax_110 + 8) + (sx.q(rax_111) << 2), 
                                                performanceCount_2[0x47], (r14_3 << 2).d)
                                            *(rax_110 + 0x10) += r14_3.d
                                
                                if ((*(*r13 + 0x58) & 1) != 0)
                                    void* rdi_9 = performanceCount_2[5]
                                    int64_t rsi_5 = sx.q(*(rdi_9 + 0x88))
                                    int32_t rax_114 = (rsi_5 + 1).d
                                    *(rdi_9 + 0x88) = rax_114
                                    
                                    if (rax_114 s> *(rdi_9 + 0x8c))
                                        sub_1405a4d70(rdi_9 + 0x80)
                                    
                                    *(*(rdi_9 + 0x80) + (rsi_5 << 3)) = *r13
                            
                            uint64_t result_1
                            result = result_1
                        
                        performanceCount_2[0x48].d = 0
                        
                        if (*(performanceCount_2 + 0x244) != 0)
                            sub_1405dadb0(&performanceCount_2[0x47], 0)
                        
                        performanceCount_2[0x11] = *(*(performanceCount_2[5] + 0x58) + 0x218)
                        
                        if (var_248_1 == 0)
                            int64_t* rax_118 = var_260
                            var_248_1 = 1
                            rax_118[4].d -= 1
                            int64_t* rcx_83 = var_260
                            
                            if (rcx_43 != rcx_83[2])
                                rdx_26, zmm6 = sub_140b16b40(rcx_83, rcx_43)
                                rcx_83 = var_260
                            
                            *rcx_83 = var_258_1
                            var_260[3] = rcx_44
                            var_258_1 = 0
                        
                        performanceCount_2[0x12].d &= 0xfffffff9
                        r12_1 = var_1a0
                    else
                        char rax_65
                        rax_65, zmm6, zmm7 =
                            sub_141fc4e80(performanceCount_2[0x13], &var_188, var_288)
                        int64_t* rcx_46 = performanceCount_2[0xe]
                        rdi_3.b |= rax_65
                        char rax_67
                        int64_t r9_7
                        rax_67, rdx_26, r9_7 =
                            (*(*rcx_46 + 0x2a8))(rcx_46, performanceCount_2, &var_188, &var_288)
                        rdi_3.b |= rax_67
                        performanceCount_1.b = rdi_3.b
                        
                        if (*(performanceCount_2[5] + 0x1508) == 0)
                            void* rdi_4 = &performanceCount_2[0x15]
                            int32_t r11_2 = *(rdi_4 + 0x28)
                            r9_5 = rdi_4 + 0x10
                            void* var_1e0 = performanceCount_2[0x13]
                            int32_t rcx_50 = 0
                            var_280 = 0
                            int32_t r8_12 = 0
                            int32_t var_27c_3 = 1
                            void* var_278_2 = r9_5
                            int32_t var_270_2 = 0xffffffff
                            int64_t var_26c_2 = 0
                            
                            if (r11_2 != 0)
                                void* rax_74 = *(r9_5 + 0x10)
                                
                                if (rax_74 != 0)
                                    r9_5 = rax_74
                                
                                int32_t temp6_1
                                int32_t temp7_1
                                temp6_1:temp7_1 = sx.q(r11_2 - 1)
                                rdx_26 = zx.q(*r9_5)
                                
                                if (rdx_26.d != 0)
                                label_141f9841d:
                                    int32_t rax_81 = neg.d(rdx_26.d) & rdx_26.d
                                    uint64_t rflags_2
                                    int32_t temp0_5
                                    temp0_5, rflags_2 = _bit_scan_reverse(rax_81)
                                    int32_t var_27c_4 = rax_81
                                    int32_t rax_82
                                    
                                    if (rax_81 == 0)
                                        rax_82 = 0x20
                                    else
                                        rax_82 = 0x1f - temp0_5
                                    
                                    var_26c_2.d = r8_12 - rax_82 + 0x1f
                                    
                                    if (r8_12 - rax_82 + 0x1f s> r11_2)
                                        var_26c_2.d = r11_2
                                else
                                    while (true)
                                        rdx_26 = sx.q(rcx_50)
                                        r8_12 += 0x20
                                        rcx_50 += 1
                                        var_26c_2:4.d = r8_12
                                        var_280 = rcx_50
                                        
                                        if (rdx_26.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_26 = zx.q(*(r9_5 + (rdx_26 << 2) + 4))
                                        var_270_2 = 0xffffffff
                                        
                                        if (rdx_26.d != 0)
                                            goto label_141f9841d
                                    
                                    var_26c_2.d = r11_2
                            
                            uint128_t zmm4_2 = var_270_2.o
                            void* var_1a8_2 = rdi_4
                            zmm0_2 = var_280.o
                            uint128_t var_1b8_2 = zmm4_2
                            int16_t var_200_2 = 0
                            uint128_t var_228_2 = zmm0_2
                            void* rax_84 = zmm0_2.q
                            zmm0_2.q = (_mm_unpackhi_pd(zmm4_2, zmm4_2.q)).q
                            int32_t rcx_52 = _mm_bsrli_si128(zmm4_2, 4).d
                            var_238 = rdi_4.o
                            var_1b8_2 = zmm0_2
                            
                            if (rcx_52 s< *(rax_84 + 0x18))
                                int32_t i_3 = var_228_2:0xc.d
                                void* rbx = var_1e0
                                
                                do
                                    int64_t rsi_4 = sx.q(i_3) << 5
                                    int64_t r14_1 = *var_238.q
                                    var_1f0 = *(*(rsi_4 + r14_1 + 8) + 0xd8)
                                    
                                    if (sub_140d3e110(&var_1f0) == 0)
                                        int32_t* rdi_5 = *(rsi_4 + r14_1 + 8)
                                        
                                        if (*rdi_5 u> 0)
                                            sub_140b560b0(&var_188, 0)
                                            sub_140b560b0(&var_188, 0)
                                            var_188[0x2d](&var_188, rdi_5)
                                            sub_140b560b0(&var_188, 0)
                                            var_1e0.d = 0
                                            var_188[0x2d](&var_188, &var_1e0)
                                            var_98 |= 0x20
                                            rdi_5 = *(rsi_4 + r14_1 + 8)
                                            performanceCount_1.b = 1
                                        
                                        if (rbx == rdi_5 && &performanceCount_2[0x13] != &var_280)
                                            performanceCount_2[0x13] = nullptr
                                            int64_t* rdi_6 = performanceCount_2[0x14]
                                            
                                            if (rdi_6 != 0)
                                                performanceCount_2[0x14] = 0
                                                rdi_6[1].d -= 1
                                                
                                                if (rdi_6[1].d == 1)
                                                    (**rdi_6)(rdi_6)
                                                    int32_t temp11_1 = *(rdi_6 + 0xc)
                                                    *(rdi_6 + 0xc) -= 1
                                                    
                                                    if (temp11_1 == 1)
                                                        (*(*rdi_6 + 8))(rdi_6, 1)
                                        
                                        sub_141faa400(*(rsi_4 + r14_1 + 8))
                                        sub_141b643e0(zmm0_2:8.q, i_3)
                                        var_200_2.b = 1
                                    
                                    var_228_2:8.d &= not.d(var_238:0xc.d)
                                    rdx_26, r9_5 = sub_14059bdd0(&var_238:8)
                                    i_3 = var_228_2:0xc.d
                                while (i_3 s< *(var_228_2.q + 0x18))
                                
                                performanceCount_2 = performanceCount
                                
                                if (var_200_2.b != 0 && var_200_2:1.b != 0)
                                    rdx_26, r9_5 =
                                        sub_1405b6520(rdi_4, *(rdi_4 + 8) - *(rdi_4 + 0x34), 1)
                                
                                rsi = zx.q(arg_18)
                            
                            r13 = &performanceCount_2[0xe]
                            goto label_141f9860c
                        
                        if (rdi_3.b != 0)
                            r9_7.b = 1
                            (*(*performanceCount_2 + 0x2c8))(performanceCount_2, &performanceCount, 
                                &var_188, r9_7)
                        
                        if (var_248_1 == 0)
                            int64_t* rax_70 = var_260
                            var_248_1 = 1
                            rax_70[4].d -= 1
                            int64_t* rcx_48 = var_260
                            
                            if (rcx_43 != rcx_48[2])
                                rdx_26, zmm6 = sub_140b16b40(rcx_48, rcx_43)
                                rcx_48 = var_260
                            
                            *rcx_48 = var_258_1
                            var_260[3] = rcx_44
                            var_258_1 = 0
                        
                        performanceCount_2[0x12].d &= 0xfffffffb
                        result = zx.q(rdi_3.b)
                    
                    if (var_248_1 == 0)
                        int64_t* rax_121 = var_260
                        char var_248_2 = 1
                        rax_121[4].d -= 1
                        int64_t* rcx_85 = var_260
                        
                        if (rcx_43 != rcx_85[2])
                            rdx_26, zmm6 = sub_140b16b40(rcx_85, rcx_43)
                            rcx_85 = var_260
                        
                        *rcx_85 = var_258_1
                        var_260[3] = rcx_44
                        int64_t var_258_2 = 0
                    
                    if (zx.d(*(r12_1 + 0x5f)) != rcx_35)
                        rdx_26.b = rcx_35 != 0
                        zmm6, zmm7 = sub_141dd8f90(r12_1, rdx_26.b)
                        
                        if (rcx_35.b == 2)
                            zmm6, zmm7 = sub_141dd7750(r12_1, 1, 0)
                else
                    result = 0
                
                var_188 = &data_143286b38
                int64_t var_80
                
                if (var_80 != 0)
                    sub_140a74f90(var_80)
                
                int64_t var_90
                
                if (var_90 != 0)
                    sub_140a74f90(var_90)
                
                int64_t var_f8
                
                if (var_f8 != 0)
                    sub_140a74f90(var_f8)
                
                sub_140b4cb40(&var_188)
            else
                int64_t rcx_17 = sx.q(*(rax_19 + 0x358))
                
                if (rcx_17.d s<= 0)
                    goto label_141f97f0e
                
                int64_t i_4 = *(rax_19 + 0x350)
                int64_t r14
                r14.b = 1
                
                for (rsi = rcx_17 * 0x30 + i_4; i_4 != rsi; i_4 += 0x30)
                    int64_t* rcx_18 = *r13
                    
                    if ((*(*rcx_18 + 0x298))(rcx_18, i_4) == 0)
                        r14.b = 0
                        break
                
                if ((*(*performanceCount_2 + 0x308))(performanceCount_2) == 0)
                    i_4.b = 0
                    
                    if (r14.b == 0)
                        goto label_141f97ed2
                    
                    rsi.b = 1
                label_141f97edf:
                    arg_18 = rsi.b
                    (*(*performanceCount_2 + 0x300))(performanceCount_2, zx.q(r14.b))
                    
                    if (i_4.b == 0 && rsi.b == 0)
                        goto label_141f97f0e
                    
                    performanceCount_1.b = 1
                    goto label_141f97f1e
                
                if (r14.b == 0)
                    i_4.b = 1
                label_141f97ed2:
                    rsi.b = 0
                    goto label_141f97edf
                
                result = 0
    else
        performanceCount_2[0x12].d = r9 | 0x20
        
        if (&performanceCount_2[0x13] != &var_1a0)
            performanceCount_2[0x13] = 0
            int64_t* rdi_1 = performanceCount_2[0x14]
            
            if (rdi_1 != 0)
                performanceCount_2[0x14] = 0
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp3_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* rax_16 = (*(*performanceCount_2 + 0x288))(performanceCount_2, &var_1a0)
        int16_t* const r8_2
        
        if (rax_16[1].d == 0)
            r8_2 = &data_142d40450
        else
            r8_2 = *rax_16
        
        sub_140a2e390(&var_1f0, u"ReplicateActor called with PendingKill Actor! %s", r8_2)
        int64_t* rcx_14 = var_1a0
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        void*** (* rcx_15)() = var_1f0
        
        if (rcx_15 == 0)
            result = 0
        else
            sub_140a74f90(rcx_15)
            result = 0
else
    result = 0

if (arg_20 != 0)
    QueryPerformanceCounter(&performanceCount)
    double zmm0 = data_143f3bc50
    double zmm1[0x2] = zx.o(0)
    zmm1[0] = float.d(performanceCount)
    zmm1[0] = zmm1[0] f* data_143d796f8
    zmm1[0] = zmm1[0] f+ zmm7.q
    zmm1[0] = zmm1[0] f- zmm6.q
    data_143f3bc50 = zmm0 + zmm1[0]

if (var_190 != r12)
    sub_140b37f60("ReplicateActor")

return result
