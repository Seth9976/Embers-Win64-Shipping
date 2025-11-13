// 函数: sub_141f1ebb0
// 地址: 0x141f1ebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_678
int64_t rax_1 = __security_cookie ^ &var_678
int32_t rax_2 = data_143f3aff0
float (* r12)[0x4] = arg6
int32_t* rdi = arg2
int64_t* var_5c8 = arg2
float (* var_4e8)[0x4] = r12
int128_t* r14 = arg3
int64_t* var_5e8 = arg3
sub_140b34200("MoveComponentTime", rax_2)
int32_t rax_3 = *(arg1 + 0xc)
void* const r15 = nullptr
void* const rax_9

if (rax_3 s>= data_143e1d9b4)
    rax_9 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_3)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_5 = temp1_1 + rdx_2
    rax_9 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_2) * 0x18

float zmm6[0x4]
float var_58[0x4] = zmm6
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm8[0x4]
float var_78[0x4] = zmm8
float zmm9[0x4]
float var_88[0x4] = zmm9
int128_t zmm11
int128_t var_a8 = zmm11
int128_t zmm12
int128_t var_b8 = zmm12
char rax_12

if (((*(rax_9 + 8) u>> 0x1d).b & 1) == 0)
    rax_12 = sub_141f36210(arg1)

uint64_t r13

if (((*(rax_9 + 8) u>> 0x1d).b & 1) != 0 || rax_12 != 0)
    if (r12 != 0)
        memset(r12, 0, 0x88)
        (*r12)[2] = 1f
    
    r13.b = 0
else
    if ((*(arg1 + 0x14c) & 1) == 0)
        arg5 = sub_1405c6ac0(arg1, 0, 0)
    
    zmm7 = arg1[0x1d]
    zmm11 = zx.o(0)
    float zmm4_1[0x4] = arg1[0x1c]
    zmm8 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
    zmm6 = zmm7
    float var_5d8 = zmm7[0]
    float var_5d4_1 = zmm8[0]
    zmm9 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
    float var_5d0_1 = zmm9[0]
    float var_4f8[0x4] = zmm4_1
    zmm6[0] = zmm6[0] f+ *rdi
    zmm8[0] = zmm8[0] f+ rdi[1]
    zmm9[0] = zmm9[0] f+ rdi[2]
    float var_608 = zmm6[0]
    zmm6[0] = zmm6[0] - zmm7[0]
    float var_604_1 = zmm8[0]
    zmm8[0] = zmm8[0] - zmm8[0]
    float var_600_1 = zmm9[0]
    zmm9[0] = zmm9[0] - zmm9[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm8[0] = zmm8[0] * zmm8[0]
    zmm9[0] = zmm9[0] * zmm9[0]
    zmm6[0] = zmm6[0] + zmm8[0]
    zmm6[0] = zmm6[0] + zmm9[0]
    
    if (arg4 == 0)
        zmm12 = zx.o(0)
    else
        zmm12 = 0x342bcc76
    
    if (zmm6[0] f> zmm12.d)
        goto label_141f1edc1
    
    float zmm2[0x4] = _mm_sub_ps(*r14, zmm4_1)
    zmm4_1 = __addps_xmmps_memps(zmm4_1, *r14)
    float zmm3[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
    float zmm0_1[0x4] = _mm_cmpeq_ps(zmm3, __andps_xmmxud_memxud(zmm2, data_143f3ade0), 1)
    zmm4_1 = __andps_xmmxud_memxud(zmm4_1, data_143f3ade0)
    uint32_t temp0_10 = _mm_movemask_ps(zmm0_1)
    uint32_t temp0_12
    
    if (temp0_10 != 0)
        temp0_12 = _mm_movemask_ps(_mm_cmpeq_ps(zmm3, zmm4_1, 1))
    
    if (temp0_10 == 0 || temp0_12 == 0)
        if (r12 != 0)
            memset(r12, 0, 0x88)
            r12[4][0].q = var_5d8.q
            int64_t zmm0_3 = var_608.q
            (*r12)[0x12] = var_5d0_1
            *(r12 + 0x4c) = zmm0_3
            (*r12)[0x15] = var_600_1
            (*r12)[2] = 1f
        
        r13.b = 1
    else
        zmm6 = zx.o(0)
    label_141f1edc1:
        char rbx = 0
        char var_588 = var_588 & 0xfe
        int64_t* rax_15 = arg1[0xa].q
        uint32_t r13_2
        r13_2.b = (arg7 u>> 1).b & 1
        float var_528[0x4] = data_1430219f0
        int32_t var_518 = 0xffffffff
        int64_t var_514
        __builtin_memset(&var_514, 0, 0x14)
        int32_t var_580_1 = 0x3f800000
        char var_62b_1 = 0
        void* var_150_1 = nullptr
        int32_t var_148_1 = 0
        int32_t var_144_1 = 3
        char var_658_1
        float (** var_650)[0x4]
        int64_t* var_648
        float var_628
        void* var_618
        int32_t var_610
        void* var_5a8
        char* var_598
        float var_578[0x4]
        float var_568[0x4]
        float var_558[0x4]
        float var_548[0x4]
        float var_538[0x4]
        int64_t var_50c
        char var_4b8
        void var_2f8
        uint64_t rax_18
        int64_t r8_2
        float zmm0_2[0x4]
        float zmm1_2[0x4]
        int512_t zmm10
        
        if (arg4 != 0)
            int64_t rax_24 = *arg1
            var_628 = zmm7[0]
            float var_624_2 = zmm8[0]
            float var_620_3 = zmm9[0]
            var_618 = nullptr
            var_610 = 0
            int32_t rax_26
            
            if ((((*(rax_24 + 0x4c8))(arg1) - 1) & 0xfffffffd) == 0)
                rax_26.b = 1
                
                if (zmm6[0] f<= zmm11.d)
                label_141f1f88d:
                    
                    if (zmm6[0] f!= zmm11.d || rax_26.b == 0)
                        rdi.b = 0
                    else
                        float zmm1_1[0x4] = arg1[0x1e]
                        int64_t rax_67 = *arg1
                        var_5e8.d = zmm1_1[0]
                        zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                        float var_5e0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                        var_5e8:4.d = zmm0_1[0]
                        rbx = (*(rax_67 + 0x728))(arg1, &var_4f8, r14, &var_5e8)
                        rdi.b = 1
                else
                    rdi = *(arg1 + 0xa8)
                    var_598 = rdi
                    
                    if (rdi == 0)
                        char* rax_27 = sub_141ee69e0(arg1)
                        rdi = rax_27
                        var_598 = rax_27
                    
                    TEB* gsbase
                    void* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
                    
                    if (data_143f3b200 s> *(rbx_1 + 0x14))
                        _Init_thread_header(&data_143f3b200)
                        
                        if (data_143f3b200 == 0xffffffff)
                            sub_140b58260(&data_143f3b1f8, u"MoveComponent", 1)
                            _Init_thread_footer(&data_143f3b200)
                    
                    void* rdx_8
                    
                    if (*(arg1 + 0x178) s> 0)
                        rdx_8 = *(arg1[0x17].q + (sx.q(*(arg1 + 0x178)) << 3) - 8)
                    
                    if (*(arg1 + 0x178) s<= 0 || rdx_8 == 0)
                        r14.b = 1
                    else
                        r14.b = *(rdx_8 + 0x350) u>> 2
                        r14.b &= 1
                    
                    char var_638_2 = r14.b
                    
                    if (data_143f3b210 s> *(rbx_1 + 0x14))
                        _Init_thread_header(&data_143f3b210)
                        
                        if (data_143f3b210 == 0xffffffff)
                            sub_140b58170(&data_143f3b208, "MoveComponent", 1)
                            _Init_thread_footer(&data_143f3b210)
                    
                    char var_658
                    var_658.q = rax_15
                    void var_5f0
                    int64_t var_138
                    sub_141eb54c0(&var_138, data_143f3b208, &var_5f0, 0, var_658)
                    void var_4d8
                    sub_142259c00(&var_4d8)
                    sub_142277d10(&var_4d8, 2)
                    (*(*arg1 + 0x718))(arg1, &var_138, &var_4d8)
                    char rax_32
                    
                    if ((*(arg1 + 0x209) & 1) != 0 || r14.b == 0)
                        rax_32 = 0
                    else
                        rax_32 = 1
                    
                    char var_123
                    char var_123_1 = var_123 | rax_32
                    var_138 = data_143f3b1f8
                    var_648 = &var_138
                    var_650 = &var_4f8
                    var_658.q = &var_608
                    char rax_34
                    float zmm6_1
                    float zmm10_1[0x4]
                    float zmm11_1[0x4]
                    int32_t zmm12_1
                    rax_34, zmm6_1, zmm10_1, zmm11_1, zmm12_1 =
                        sub_141ebd9c0(rdi, &var_618, arg1, &var_5d8, var_658, var_650, var_648)
                    float zmm1_3[0x4]
                    
                    if (var_610 s> 0)
                        zmm0_1 = _mm_sqrt_ss(0, zmm6_1)
                        int32_t rdx_12 = 0
                        int64_t rax_35 = 0
                        zmm10_1[0] = zmm10_1[0] / zmm0_1[0]
                        zmm10_1[0] = zmm10_1[0] * 0.100000001f
                        
                        do
                            void* rcx_20 = var_618
                            
                            if (zmm10_1[0] <= 0.100000001f)
                                zmm1_3 = _mm_min_ss(zmm10_1[0], 0x3dcccccd)
                            else
                                zmm1_3 = zmm10_1
                            
                            zmm0_1 = *(rax_35 + rcx_20 + 8)
                            zmm1_3[0] = zmm1_3[0] + 0.00100000005f
                            zmm0_1[0] = zmm0_1[0] - zmm1_3[0]
                            
                            if (zmm0_1[0] >= zmm11_1[0])
                                zmm0_1 = _mm_min_ss(zmm0_1[0], zmm10_1[0])
                            else
                                zmm0_1 = zmm11_1
                            
                            *(rax_35 + rcx_20 + 8) = zmm0_1[0]
                            rdx_12 += 1
                            rax_35 += 0x88
                        while (rdx_12 s< var_610)
                    
                    int32_t r15_1 = -1
                    float zmm2_1[0x4]
                    
                    if (rax_34 != 0 || (*(arg1 + 0x209) & 1) != 0 || r14.b == 0)
                        int32_t rax_36 = 0
                        rdi = 0xffffffff
                        int32_t var_630_1 = 0xffffffff
                        int32_t var_634_1 = 0
                        
                        if (var_610 s> 0)
                            var_5a8 = nullptr
                            void* r13_3 = -ffffffffffffffff
                            void* rbx_2 = nullptr
                            
                            while (true)
                                void* rbx_4 = rbx_2 * 0x88 + var_618
                                
                                if ((*rbx_4 & 1) != 0)
                                    int64_t* r14_1 = var_5c8
                                    var_658.d = arg7
                                    char rax_38
                                    rax_38, zmm6_1 =
                                        sub_141f279c0(var_598, rbx_4, r14_1, rax_15, var_658)
                                    
                                    if (rax_38 != 0)
                                        goto label_141f1f538
                                    
                                    if (zmm11_1[0] f!= *(rbx_4 + 8))
                                        rax_36 = var_634_1
                                        
                                        if (r13_3 == -1)
                                            break
                                        
                                        goto label_141f1f540
                                    
                                    zmm2_1 = *(rbx_4 + 0x38)
                                    zmm2_1[0] = zmm2_1[0] f* *(r14_1 + 4)
                                    void* rax_39 = var_5a8
                                    zmm0_1 = *r14_1
                                    zmm0_1[0] = zmm0_1[0] f* *(rbx_4 + 0x34)
                                    zmm1_3 = *(rbx_4 + 0x3c)
                                    zmm1_3[0] = zmm1_3[0] f* r14_1[1].d
                                    zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm1_3[0]
                                    zmm6_1 - zmm2_1[0]
                                    bool cond:12_1 = zmm6_1 <= zmm2_1[0]
                                    bool cond:13_1 = zmm6_1 <= zmm2_1[0]
                                    zmm2_1 = _mm_min_ss(zmm2_1[0], zmm6_1)
                                    
                                    if (cond:12_1)
                                        rax_39 = r13_3
                                    
                                    r13_3 = rax_39
                                    int32_t rax_40 = var_634_1
                                    
                                    if (cond:13_1)
                                        rax_40 = rdi.d
                                    
                                    rdi = zx.q(rax_40)
                                    var_630_1 = rax_40
                                    zmm2_1[0]
                                    goto label_141f1f538
                                
                                if ((*(arg1 + 0x209) & 1) == 0 && r14.b != 0)
                                    goto label_141f1f540
                                
                                int32_t* rax_41 = sub_140d3c6e0(rbx_4 + 0x70)
                                
                                if (rax_41 == 0 || ((*(rax_41 + 0x209) & 1) == 0 && r14.b != 0))
                                label_141f1f534:
                                    rdi = zx.q(var_630_1)
                                label_141f1f538:
                                    rax_36 = var_634_1
                                label_141f1f540:
                                    rax_36 += 1
                                    rbx_2 = var_5a8 + 1
                                    var_634_1 = rax_36
                                    var_5a8 = rbx_2
                                    
                                    if (rax_36 s< var_610)
                                        r14 = zx.q(var_638_2)
                                        continue
                                else
                                    void* rax_42 = sub_140d3c6e0(rbx_4 + 0x68)
                                    
                                    if (arg1 == rax_41 || (var_638_2 != 0 && (
                                            (*(arg1 + 0x209) & 1) == 0
                                            || (*(rax_41 + 0x209) & 1) == 0)) || rax_15 == 0
                                            || rax_42 == 0)
                                        goto label_141f1f534
                                    
                                    char* rax_43 = var_598
                                    
                                    if (rax_43 == 0)
                                        goto label_141f1f534
                                    
                                    if (rax_42 == sub_142437e30(rax_43, 0, 1)
                                            || (*(rax_42 + 0x5b) & 0x20) == 0)
                                        goto label_141f1f534
                                    
                                    if (r13_3 s< 0 ||
                                            not((*(r13_3 * 0x88 + var_618 + 8))[0] f< *(rbx_4 + 8)))
                                        if (r15_1 == 0xffffffff && zmm11_1[0] f< *(rbx_4 + 8))
                                            r15_1 = var_148_1
                                        
                                        void* r10_2 = &var_2f8
                                        zmm0_1 = *rbx_4
                                        var_4b8 = 1
                                        
                                        if (var_150_1 != 0)
                                            r10_2 = var_150_1
                                        
                                        void* rcx_26 = r10_2
                                        float var_4a4_1[0x4] = *(rbx_4 + 0x10)
                                        float var_494_1[0x4] = *(rbx_4 + 0x20)
                                        float var_484_1[0x4] = *(rbx_4 + 0x30)
                                        float var_474_1[0x4] = *(rbx_4 + 0x40)
                                        void* r9_6 = sx.q(var_148_1) * 0x8c + r10_2
                                        float var_464_1[0x4] = *(rbx_4 + 0x50)
                                        float var_454_1[0x4] = *(rbx_4 + 0x60)
                                        int64_t var_434_1 = *(rbx_4 + 0x80)
                                        float var_444_1[0x4] = *(rbx_4 + 0x70)
                                        int64_t rdx_16
                                        
                                        if (r10_2 != r9_6)
                                            while (var_444_1[0] != *(rcx_26 + 0x74)
                                                    || var_444_1[1] != *(rcx_26 + 0x78)
                                                    || var_464_1[3] != *(rcx_26 + 0x60))
                                                rcx_26 += 0x8c
                                                
                                                if (rcx_26 == r9_6)
                                                    goto label_141f1f475
                                            
                                            int64_t rax_49
                                            int64_t rdx_15
                                            rdx_15:rax_49 =
                                                muls.dp.q(0xea0ea0ea0ea0ea1, rcx_26 - r10_2)
                                            rdx_16 = rdx_15 s>> 3
                                        
                                        if (r10_2 == r9_6
                                            || rdx_16.d + (rdx_16 u>> 0x3f).d == 0xffffffff)
                                        label_141f1f475:
                                            int64_t rbx_5 = sx.q(var_148_1)
                                            int32_t rax_52 = (rbx_5 + 1).d
                                            var_148_1 = rax_52
                                            
                                            if (rax_52 s> var_144_1)
                                                sub_141f229d0(&var_2f8, rbx_5.d)
                                            
                                            void* rdx_19 = &var_2f8
                                            
                                            if (var_150_1 != 0)
                                                rdx_19 = var_150_1
                                            
                                            int64_t rcx_29 = rbx_5 * 0x8c
                                            *(rdx_19 + rcx_29) = var_4b8.o
                                            *(rdx_19 + rcx_29 + 0x10) = zmm0_1
                                            *(rdx_19 + rcx_29 + 0x20) = var_4a4_1
                                            *(rdx_19 + rcx_29 + 0x30) = var_494_1
                                            *(rdx_19 + rcx_29 + 0x40) = var_484_1
                                            *(rdx_19 + rcx_29 + 0x50) = var_474_1
                                            *(rdx_19 + rcx_29 + 0x60) = var_464_1
                                            *(rdx_19 + rcx_29 + 0x70) = var_454_1
                                            *(rdx_19 + rcx_29 + 0x80) = var_444_1[3].q
                                            *(rdx_19 + rcx_29 + 0x88) = var_434_1:4.d
                                        
                                        goto label_141f1f534
                                
                                rax_36 = var_630_1
                                break
                            
                            if (rax_36 s>= 0)
                                float (* rcx_30)[0x4] = sx.q(rax_36) * 0x88
                                void* rax_56 = var_618
                                var_62b_1 = 1
                                var_588.o = *(rcx_30 + rax_56)
                                var_578 = *(rcx_30 + rax_56 + 0x10)
                                var_568 = *(rcx_30 + rax_56 + 0x20)
                                var_558 = *(rcx_30 + rax_56 + 0x30)
                                var_548 = *(rcx_30 + rax_56 + 0x40)
                                var_538 = *(rcx_30 + rax_56 + 0x50)
                                var_528 = *(rcx_30 + rax_56 + 0x60)
                                var_518.o = *(rcx_30 + rax_56 + 0x70)
                                var_50c = *(rcx_30 + rax_56 + 0x80)
                    
                    if ((var_588 & 1) != 0)
                        float zmm4_2[0x4] = var_5d8
                        zmm0_1 = var_580_1
                        zmm2_1 = var_604_1
                        float zmm3_1 = var_608 - zmm4_2[0]
                        zmm1_3 = var_600_1
                        zmm2_1[0] = zmm2_1[0] - var_5d4_1
                        zmm1_3[0] = zmm1_3[0] - var_5d0_1
                        zmm3_1 = zmm3_1 * zmm0_1[0]
                        zmm2_1[0] = zmm2_1[0] * zmm0_1[0]
                        zmm3_1 = zmm3_1 + zmm4_2[0]
                        zmm1_3[0] = zmm1_3[0] * zmm0_1[0]
                        zmm2_1[0] = zmm2_1[0] + var_5d4_1
                        zmm1_3[0] = zmm1_3[0] + var_5d0_1
                        var_628 = zmm3_1
                        zmm3_1 = zmm3_1 - zmm4_2[0]
                        float var_624_5 = zmm2_1[0]
                        zmm2_1[0] = zmm2_1[0] - var_5d4_1
                        var_620_3 = zmm1_3[0]
                        zmm1_3[0] = zmm1_3[0] - var_5d0_1
                        zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                        zmm1_3[0] = zmm1_3[0] * zmm1_3[0]
                        
                        if (not(zmm3_1 * zmm3_1 + zmm2_1[0] + zmm1_3[0] f> zmm12_1))
                            var_628 = zmm4_2[0]
                            float var_624_6 = var_5d4_1
                            var_620_3 = var_5d0_1
                            int32_t var_580_2 = 0
                            
                            if (r15_1 != 0xffffffff)
                                int64_t rbx_7 = sx.q(var_148_1)
                                
                                if (r15_1 s> rbx_7.d)
                                    int32_t i_1 = r15_1 - rbx_7.d
                                    int32_t rax_57 = rbx_7.d + i_1
                                    var_148_1 = rax_57
                                    
                                    if (rax_57 s> var_144_1)
                                        sub_141f229d0(&var_2f8, rbx_7.d)
                                    
                                    void* rdx_21 = &var_2f8
                                    
                                    if (var_150_1 != 0)
                                        rdx_21 = var_150_1
                                    
                                    if (i_1 != 0)
                                        void* rbx_8 = rdx_21 + 0x70 + rbx_7 * 0x8c
                                        int32_t i
                                        
                                        do
                                            memset(rbx_8 - 0x6c, 0, 0x88)
                                            *(rbx_8 - 0x64) = 0x3f800000
                                            rbx_8 += 0x8c
                                            i = i_1
                                            i_1 -= 1
                                        while (i != 1)
                                else if (r15_1 s< var_148_1)
                                    rdi = zx.q(var_148_1 - r15_1)
                                    
                                    if (var_148_1 != r15_1)
                                        int32_t rbx_10 = var_148_1 - rdi.d
                                        
                                        if (rbx_10 != r15_1)
                                            void* r9_7 = &var_2f8
                                            
                                            if (var_150_1 != 0)
                                                r9_7 = var_150_1
                                            
                                            memmove(sx.q(r15_1) * 0x8c + r9_7, 
                                                sx.q(rdi.d + r15_1) * 0x8c + r9_7, 
                                                (rbx_10 - r15_1) * 0x8c)
                                        
                                        var_148_1 -= rdi.d
                    else
                        var_628 = var_608[0]
                        var_620_3 = var_600_1[0]
                        float var_624_4 = var_604_1[0]
                    
                    zmm1_3 = arg1[0x1e]
                    int64_t rax_63 = *arg1
                    r14 = var_5e8
                    zmm0_1 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0x55)
                    var_5c8.d = zmm1_3[0]
                    float var_5c0_1 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xaa)[0]
                    var_5c8:4.d = zmm0_1[0]
                    rbx = (*(rax_63 + 0x728))(arg1, &var_4f8, r14, &var_5c8, var_658)
                    int64_t var_d8
                    
                    if (var_d8 != 0)
                        sub_140a74f90(var_d8)
                    
                    int64_t var_f8
                    
                    if (var_f8 != 0)
                        sub_140a74f90(var_f8)
                    
                    r15 = nullptr
                    rdi.b = 0
            else
                rax_26.b = 0
                
                if (zmm6[0] f<= zmm11.d)
                    goto label_141f1f88d
                
                zmm7[0] = zmm7[0] f+ *rdi
                zmm8[0] = zmm8[0] f+ rdi[1]
                zmm9[0] = zmm9[0] f+ rdi[2]
                rbx = 0
                var_628 = zmm7[0]
                float var_624_3 = zmm8[0]
                var_620_3 = zmm9[0]
                rdi.b = 0
            float var_5e0_1 = var_620_3
            var_658_1 = arg8
            var_5e8 = var_628.q
            rax_18, r8_2, zmm10 = sub_141f40400(arg1, &var_5e8, r14, r13_2.b, var_658_1)
            void* rcx_41 = var_618
            r13 = zx.q(rax_18.b)
            
            if (rcx_41 != 0)
                rax_18, r8_2 = sub_140a74f90(rcx_41)
        else
            float var_620_1 = var_600_1
            var_658_1 = arg8
            var_628.q = var_608.q
            rax_18, r8_2, zmm6, zmm10, zmm11 =
                sub_141f40400(arg1, &var_628, r14, r13_2.b, var_658_1)
            r13 = zx.q(rax_18.b)
            
            if (zmm6[0] f!= zmm11.d)
                rdi.b = 0
                rbx = 0
            else
                zmm1_2 = arg1[0x1e]
                int64_t rax_19 = *arg1
                var_628 = zmm1_2[0]
                zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                float var_620_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)[0]
                float var_624_1 = zmm0_2[0]
                char var_638_1 = 1
                rax_18, r8_2 = (*(rax_19 + 0x728))(arg1, &var_4f8, r14, &var_628)
                
                if (rax_18.b == 0)
                    rdi.b = 1
                    rbx = 0
                else
                    int32_t rax_21
                    rax_21, r8_2 = (*(*arg1 + 0x4c8))(arg1)
                    
                    if (((rax_21 - 1) & 0xfffffffd) != 0)
                        rdi = zx.q(var_638_1)
                        rbx = 0
                    else
                        rbx = 1
                        rdi = 1
        
        zmm10.o = arg5
        
        if (r13.b != 0)
            if (*(arg1 + 0x178) s> 0)
                void* r10_3 = *(arg1[0x17].q + (sx.q(*(arg1 + 0x178)) << 3) - 8)
                
                if (rdi.b == 0 || rbx == 0)
                    void* rcx_44 = &var_2f8
                    
                    if (var_150_1 != 0)
                        rcx_44 = var_150_1
                    
                    var_618 = rcx_44
                    var_610 = var_148_1
                    sub_141f31830(r10_3, &var_618, zx.q(arg4), rbx)
                else
                    *(r10_3 + 0x350) |= 2
            else if (rbx == 0)
                void* rax_80 = &var_2f8
                
                if (var_150_1 != 0)
                    rax_80 = var_150_1
                
                bool cond:2_1 = data_143a2d7b4 != 1
                var_618 = rax_80
                var_610 = var_148_1
                
                if (cond:2_1 || (*(arg1 + 0x14c) & 2) == 0)
                    r8_2.b = 1
                    rax_18 =
                        (*(*arg1 + 0x468))(arg1, &var_618, r8_2, 0, var_658_1, var_650, var_648)
                    *(arg1 + 0x14c) &= 0xfd
                    rax_18.b &= 1
                    rax_18.b *= 2
                    *(arg1 + 0x14c) |= rax_18.b
            else
                char* var_310_1 = nullptr
                char* r8_16 = nullptr
                int32_t var_308_1 = 0
                int32_t var_304_1 = 3
                char r10_1
                
                if (rdi.b == 0)
                    void* rcx_50 = &var_2f8
                    zmm1_2 = arg1[0x1d]
                    var_4e8.o = arg1[0x1c]
                    var_628 = zmm1_2[0]
                    
                    if (var_150_1 != 0)
                        rcx_50 = var_150_1
                    
                    zmm0_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
                    var_610 = var_148_1
                    var_650 = &var_4e8
                    var_618 = rcx_50
                    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xaa)
                    var_658_1.q = &var_628
                    float var_624_7 = zmm0_2[0]
                    float var_620_4 = zmm1_2[0]
                    r10_1 = sub_141f00540(arg1, &var_4b8, &var_618, 0, var_658_1, var_650)
                    r8_16 = var_310_1
                else
                    float (* rdi_2)[0x4] = *(arg1 + 0x298)
                    r10_1 = 0
                    int64_t r14_3 = sx.q(arg1[0x2a].d)
                    
                    if ((*(arg1 + 0x209) & 1) != 0 && data_143a2d74c != 0)
                        void* rbx_12 = arg1[0xa].q
                        
                        if (rbx_12 != 0 && *(rbx_12 + 0x130) == arg1 && data_143a2d750 != 0)
                            if (r14_3.d s> 3)
                                sub_141dd6010(&var_4b8, r14_3.d)
                            
                            sub_140d3a3a0(&var_5e8, rbx_12)
                            int64_t* rbx_13 = var_5e8
                            var_5c8 = rbx_13
                            void* r15_3 = r14_3 * 0x8c + rdi_2
                            
                            if (rdi_2 != r15_3)
                                int32_t r12_1 = var_5c8:4.d
                                
                                do
                                    int64_t rax_71 = *(rdi_2 + 0x6c)
                                    
                                    if (rbx_13.d != rax_71.d || r12_1 != (rax_71 u>> 0x20).d)
                                        int64_t r14_4 = sx.q(var_308_1)
                                        int32_t rax_73 = (r14_4 + 1).d
                                        var_308_1 = rax_73
                                        
                                        if (rax_73 s> var_304_1)
                                            sub_141f229d0(&var_4b8, r14_4.d)
                                        
                                        float (* rdx_32)[0x4] = &var_4b8
                                        
                                        if (var_310_1 != 0)
                                            rdx_32 = var_310_1
                                        
                                        int64_t rcx_49 = r14_4 * 0x8c
                                        *(rdx_32 + rcx_49) = *rdi_2
                                        *(rdx_32 + rcx_49 + 0x10) = rdi_2[1]
                                        *(rdx_32 + rcx_49 + 0x20) = rdi_2[2]
                                        *(rdx_32 + rcx_49 + 0x30) = rdi_2[3]
                                        *(rdx_32 + rcx_49 + 0x40) = rdi_2[4]
                                        *(rdx_32 + rcx_49 + 0x50) = rdi_2[5]
                                        *(rdx_32 + rcx_49 + 0x60) = rdi_2[6]
                                        *(rdx_32 + rcx_49 + 0x70) = rdi_2[7]
                                        *(rdx_32 + rcx_49 + 0x80) = rdi_2[8][0].q
                                        (*rdx_32)[r14_4 * 0x23 + 0x22] = (*rdi_2)[0x22]
                                    
                                    rdi_2 = &(*rdi_2)[0x23]
                                while (rdi_2 != r15_3)
                                
                                r12 = var_4e8
                            
                            r10_1 = 1
                            r15 = nullptr
                            r8_16 = var_310_1
                
                void* rcx_52 = &var_2f8
                int32_t var_590_1 = var_308_1
                
                if (var_150_1 != 0)
                    rcx_52 = var_150_1
                
                var_5a8 = rcx_52
                int32_t var_5a0_1 = var_148_1
                char* rcx_54 = &var_4b8
                
                if (r8_16 != 0)
                    rcx_54 = r8_16
                
                bool cond:8_1 = *(arg1 + 0x178) s<= 0
                var_598 = rcx_54
                
                if (not(cond:8_1))
                    void* rdx_35 = *(arg1[0x17].q + (sx.q(*(arg1 + 0x178)) << 3) - 8)
                    *(rdx_35 + 0x350) |= 2
                    *(rdx_35 + 0x10) = 3
                    *(rdx_35 + 0x74) = 0xffffffff
                    r8_16 = var_310_1
                else if (data_143a2d7b4 != 1 || (*(arg1 + 0x14c) & 2) == 0)
                    char** r9_12 = &var_598
                    r8_16.b = 1
                    
                    if (r10_1 == 0)
                        r9_12 = nullptr
                    
                    rax_18 = (*(*arg1 + 0x468))(arg1, &var_5a8, r8_16, r9_12, var_658_1, var_650, 
                        var_648)
                    *(arg1 + 0x14c) &= 0xfd
                    rax_18.b &= 1
                    rax_18.b *= 2
                    *(arg1 + 0x14c) |= rax_18.b
                    r8_16 = var_310_1
                
                if (r8_16 != 0)
                    sub_140a74f90(r8_16)
        
        char rcx_59 = var_588
        
        if ((rcx_59 & 2) == 0 || (arg7.b & 8) == 0)
            rax_18.b = 1
        else
            rax_18.b = 0
        
        if ((rcx_59 & 1) != 0 && rax_18.b != 0)
            int32_t rax_82 = *(arg1 + 0xc)
            void* const rax_89
            
            if (rax_82 s>= data_143e1d9b4)
                rax_89 = nullptr
            else
                int16_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(rax_82)
                uint32_t rdx_40 = zx.d(temp2_1)
                int32_t rax_84 = temp3_1 + rdx_40
                rax_89 = *(data_143e1d9a0 + (sx.q(rax_84 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_84.w) - rdx_40) * 0x18
            
            if (((*(rax_89 + 8) u>> 0x1d).b & 1) == 0)
                if (*(arg1 + 0x178) s<= 0)
                    uint128_t* rax_95 = sub_140d3c6e0(&var_518)
                    
                    if (rax_95 != 0)
                        var_658_1.q = &var_588
                        sub_141dbf430(rax_15, arg1, rax_95, 1, var_658_1)
                        int32_t rax_96 = *(rax_95 + 0xc)
                        
                        if (rax_96 s< data_143e1d9b4)
                            int16_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(rax_96)
                            uint32_t rdx_45 = zx.d(temp4_1)
                            int32_t rax_98 = temp5_1 + rdx_45
                            r15 = *(data_143e1d9a0 + (sx.q(rax_98 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_98.w) - rdx_45) * 0x18
                        
                        if (((*(r15 + 8) u>> 0x1d).b & 1) == 0)
                            int64_t* rax_105 = sub_140d3c6e0(&var_528[2])
                            
                            if (rax_105 != 0)
                                var_658_1.q = &var_588
                                sub_141dbf430(rax_105, rax_95, arg1, 0, var_658_1)
                else
                    float (* rbx_15)[0x4] =
                        *(arg1[0x17].q + (sx.q(*(arg1 + 0x178)) << 3) - 8) + 0x230
                    int64_t rdi_3 = sx.q((*rbx_15)[0x46])
                    int32_t rax_93 = (rdi_3 + 1).d
                    (*rbx_15)[0x46] = rax_93
                    
                    if (rax_93 s> (*rbx_15)[0x47])
                        sub_141f228b0(rbx_15, rdi_3.d)
                    
                    float (* rax_94)[0x4] = rbx_15[0x11][0].q
                    
                    if (rax_94 != 0)
                        rbx_15 = rax_94
                    
                    int64_t rcx_66 = rdi_3 * 0x88
                    *(rbx_15 + rcx_66) = var_588.o
                    *(rbx_15 + rcx_66 + 0x10) = var_578
                    *(rbx_15 + rcx_66 + 0x20) = var_568
                    *(rbx_15 + rcx_66 + 0x30) = var_558
                    *(rbx_15 + rcx_66 + 0x40) = var_548
                    *(rbx_15 + rcx_66 + 0x50) = var_538
                    *(rbx_15 + rcx_66 + 0x60) = var_528
                    *(rbx_15 + rcx_66 + 0x70) = var_518.o
                    *(rbx_15 + rcx_66 + 0x80) = var_50c
        
        if (r12 != 0)
            if (var_62b_1 == 0)
                memset(r12, 0, 0x88)
                r12[4][0].q = var_5d8.q
                int64_t zmm0_4 = var_608.q
                (*r12)[0x12] = var_5d0_1
                *(r12 + 0x4c) = zmm0_4
                (*r12)[0x15] = var_600_1
                (*r12)[2] = 1f
            else
                *r12 = var_588.o
                r12[1] = var_578
                r12[2] = var_568
                r12[3] = var_558
                r12[4] = var_548
                zmm0_2 = var_528
                r12[5] = var_538
                zmm1_2 = var_518.o
                r12[6] = zmm0_2
                r12[7] = zmm1_2
                r12[8][0].q = var_50c
        
        if (var_150_1 != 0)
            sub_140a74f90(var_150_1)

sub_140b38680("MoveComponentTime", rax_2)
__security_check_cookie(rax_1 ^ &var_678)
return zx.q(r13.b)
