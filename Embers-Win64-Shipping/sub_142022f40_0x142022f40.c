// 函数: sub_142022f40
// 地址: 0x142022f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5a8
int64_t rax_1 = __security_cookie ^ &var_5a8
void* r14 = arg1
int32_t var_4c8 = 0
sub_140599090(arg1 + 0x238)
char rax_2 = sub_1423e6860(data_143f5b298, arg2)
int64_t rdx_1 = *arg2
char r13 = rax_2
void* rax_3 = (*(rdx_1 + 0x120))(arg2, rdx_1)
TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f407c8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f407c8)
    
    if (data_143f407c8 == 0xffffffff)
        sub_140b58260(&data_143f407c0, u"CanvasObject", 1)
        _Init_thread_footer(&data_143f407c8)

void* rax_4 = sub_142028f80(data_143f407c0)
*(rax_4 + 0x260) = arg3
int64_t r8 = *arg2
int32_t var_520
(*(r8 + 0x18))(arg2, &var_520, r8)
int32_t var_51c

if (r13 != 0)
    int64_t* rcx_8 = *(data_143f5b298 + 0xb08)
    
    if (rcx_8 != 0 && (*(*rcx_8 + 0x100))(rcx_8) != 0)
        int64_t* rcx_9 = *(data_143f5b298 + 0xb08)
        int64_t* rax_9 = (*(*rcx_9 + 0x100))(rcx_9)
        int64_t r8_1 = *rax_9
        void var_258
        int32_t* rax_10 = (*(r8_1 + 0xe0))(rax_9, &var_258, r8_1)
        var_520 = *rax_10
        var_51c = rax_10[1]

if (data_143f407d8 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f407d8)
    
    if (data_143f407d8 == 0xffffffff)
        sub_140b58260(&data_143f407d0, u"DebugCanvasObject", 1)
        _Init_thread_footer(&data_143f407d8)

void* rax_13
uint128_t zmm6
uint128_t zmm7
int128_t zmm8
int128_t zmm9
rax_13, zmm6, zmm7, zmm8, zmm9 = sub_142028f80(data_143f407d0)
void* var_588 = rax_3
sub_1424131e0(rax_13, var_520, var_51c, 0, var_588)

if (rax_3 != 0)
    *(rax_3 + 0x8c) = r13
    *(rax_3 + 0x94) = r13

if (arg3 != 0)
    arg3[0x23].b = r13
    arg3[0x25].b = r13

int64_t result = (*(*(r14 - 0x28) + 0x150))(r14 - 0x28)

if (result != 0)
    int64_t* rcx_15 = arg2[6]
    uint128_t var_48_1 = zmm6
    uint128_t var_58_1 = zmm7
    int64_t rdx_6 = *rcx_15
    int128_t var_78_1 = zmm9
    (*(rdx_6 + 0x38))(rcx_15, rdx_6)
    int64_t* rdx_7 = *(result + 0x1b0)
    int64_t rcx_16 = *(r14 + 0x84)
    int128_t zmm0_1 = data_142d3f660
    int64_t var_40c_1 = 0
    int64_t* var_428 = arg2
    int32_t var_3f4
    int32_t rax_17 = (var_3f4 & 0xffffffe8) | 8
    int64_t* var_420_1 = rdx_7
    int64_t var_418_1 = rcx_16
    int32_t var_410_1 = 0xffffffff
    int128_t var_404_1 = zmm0_1
    
    if (rdx_7 != 0)
        void* rax_19 = (*(*rdx_7 + 0x240))(rdx_7)
        
        if (rax_19 != 0)
            bool rcx_18
            
            if (data_143de5480 != 0)
                rcx_18 = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rcx_18 != 0)
                var_404_1.d = (*(rax_19 + 0x520)).d
                rax_17 |= 0x10
                var_404_1:4.d = *(rax_19 + 0x530)
                var_404_1:8.d = (*(rax_19 + 0x528)).d
    
    int32_t var_3f4_2 = rax_17 | 2
    int64_t* var_3e8
    char r9_1 = sub_1422d9ba0(&var_3e8, &var_428)
    void* var_308
    int64_t* rax_24 = sub_1422e3b90(*(data_143f5b298 + 0xb18), &var_308, arg2, r9_1)
    uint64_t i_5
    int32_t i_10
    
    if (&i_5 != rax_24)
        int32_t i_6 = i_10
        
        if (i_6 != 0)
            int64_t* rdi_2 = i_5 + 8
            int32_t i
            
            do
                int64_t* rbx_2 = *rdi_2
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t rax_28 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (rax_28 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rdi_2 = &rdi_2[2]
                i = i_6
                i_6 -= 1
            while (i != 1)
        
        int32_t i_8 = rax_24[1].d
        int64_t* rbx_3 = *rax_24
        i_10 = i_8
        int32_t var_37c
        
        if (i_8 != 0 || var_37c != 0)
            sub_1405a4be0(&i_5, i_8, var_37c)
            uint64_t i_12 = i_5
            
            if (i_8 != 0)
                int32_t i_1
                
                do
                    *i_12 = *rbx_3
                    void* rax_32 = rbx_3[1]
                    *(i_12 + 8) = rax_32
                    
                    if (rax_32 != 0)
                        *(rax_32 + 8) += 1
                    
                    i_12 += 0x10
                    rbx_3 = &rbx_3[2]
                    i_1 = i_8
                    i_8 -= 1
                while (i_1 != 1)
        else
            int32_t var_37c_1 = 0
    
    int32_t i_11
    int32_t i_7 = i_11
    
    if (i_7 != 0)
        int64_t* rdi_3 = var_308 + 8
        int32_t i_2
        
        do
            int64_t* rbx_4 = *rdi_3
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t rax_37 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rax_37 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            rdi_3 = &rdi_3[2]
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
    
    void* rcx_26 = var_308
    
    if (rcx_26 != 0)
        sub_140a74f90(rcx_26)
    
    uint64_t i_3 = i_5
    
    for (int64_t r15_5 = (sx.q(i_10) << 4) + i_3; i_3 != r15_5; i_3 += 0x10)
        int64_t* rbx_5 = *(i_3 + 8)
        int64_t* rcx_27 = *i_3
        
        if (rbx_5 != 0)
            rbx_5[1].d += 1
        
        (*(*rcx_27 + 8))(rcx_27, &var_3e8)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t rax_44 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rax_44 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
    
    if (r13 != 0)
        int64_t* rcx_30 = *(data_143f5b298 + 0xb08)
        
        if (rcx_30 != 0 && (*(*rcx_30 + 0x100))(rcx_30) != 0)
            int64_t* rcx_31 = *(data_143f5b298 + 0xb08)
            int64_t* rax_52 = (*(*rcx_31 + 0x100))(rcx_31)
            int64_t r8_5 = *rax_52
            (*(r8_5 + 0x138))(rax_52, *(r14 + 0x90), r8_5)
    
    int32_t rdx_13 = *(r14 + 0x80)
    int32_t var_3d8_1 = rdx_13
    int32_t var_3c0
    sub_14230d3e0(0, rdx_13, &var_3c0)
    int64_t result_1 = result
    void* rcx_33 = data_143f5b298
    int32_t rdi_4 = 0
    int32_t var_f8_1 = 0xffffffff
    int64_t var_128 = 0
    int32_t r12_1 = 0
    int32_t var_120_1 = 0
    int32_t var_fc_1 = 0x80
    int64_t var_118
    __builtin_memset(&var_118, 0, 0x1c)
    int32_t var_f4_1 = 0
    int64_t var_e8_1 = 0
    int32_t var_e0_1 = 0
    int64_t* var_4e8 = nullptr
    int64_t var_4e0_1 = 0
    int64_t** var_4d8
    sub_1423ddac0(rcx_33, &var_4d8, result_1)
    int64_t** r8_8 = var_4d8
    int32_t var_4d0
    int32_t rdx_15 = var_4d0
    int64_t* rax_53
    
    while (true)
        if (rdx_15 s< 0 || rdx_15 s>= r8_8[1].d)
            rax_53.b = 0
        else
            rax_53.b = 1
        
        if (rax_53.b == 0)
            break
        
        if ((*r8_8)[sx.q(rdx_15)] != 0)
            break
        
        rdx_15 += 1
        var_4d0 = rdx_15
    
    int128_t zmm10 = 0x3e4ccccd
    int128_t zmm11 = 0x3f800000
    int64_t var_580
    int32_t var_578
    int32_t* var_570
    
    while (true)
        if (rdx_15 s< 0 || rdx_15 s>= r8_8[1].d)
            rax_53.b = 0
        else
            rax_53.b = 1
        
        if (rax_53.b == 0)
            break
        
        int64_t* r15_6 = (*r8_8)[sx.q(rdx_15)]
        int64_t* var_4b8 = r15_6
        
        if (r15_6 != 0)
            int64_t* rbx_6 = arg2
            int64_t* r15_7 = r15_6[6]
            sub_1423e6860(data_143f5b298, rbx_6)
            
            if (r13 == 0)
                rax_53 = 1
            else
                int64_t* rcx_37 = *(data_143f5b298 + 0xaf8)
                rax_53 = (*(*rcx_37 + 0x20))(rcx_37, zx.q(r13))
            
            int32_t var_544_1 = rax_53.d
            
            if (rax_53.d s> 0)
                do
                    int32_t rax_58
                    
                    if (r13 == 0)
                        rax_58 = 0
                    else
                        int64_t* rcx_38 = *(data_143f5b298 + 0xaf8)
                        rax_58 = (*(*rcx_38 + 0x28))(rcx_38, zx.q(r13), zx.q(rdi_4))
                    
                    int64_t* rcx_39 = var_4b8
                    var_578 = rax_58
                    var_580 = 0
                    var_588 = rbx_6
                    int64_t var_348
                    void var_1c8
                    int64_t* rax_60 = (*(*rcx_39 + 0x270))(rcx_39, &var_3e8, &var_348, &var_1c8, 
                        var_588, var_580, var_578, var_570)
                    int64_t* var_540 = rax_60
                    int64_t* rcx_40 = rax_60
                    
                    if (rax_60 != 0)
                        int64_t rbx_7 = sx.q(r12_1)
                        r12_1 = (rbx_7 + 1).d
                        var_4e0_1.d = r12_1
                        
                        if (r12_1 s> var_4e0_1:4.d)
                            sub_1405a4d70(&var_4e8)
                            rcx_40 = var_540
                            r12_1 = var_4e0_1.d
                        
                        var_4e8[rbx_7] = rcx_40
                        int64_t* rcx_42 = var_540
                        
                        if ((*(*rcx_42 + 0x28) & 0x100000) == 0)
                            *(rcx_42 + 0xb10) = zx.o(0)
                            rcx_42 = var_540
                        
                        *(rcx_42 + 0xaec) = *(r14 + 0xd0)
                        int64_t* rcx_43 = var_540
                        rcx_43[0x1b4].d = rcx_43[0x4b].d
                        *(rcx_43 + 0xda4) = *(rcx_43 + 0x25c)
                        rcx_43[0x1b5].d = rcx_43[0x4c].d
                        *(rcx_43 + 0xdac) = *(rcx_43 + 0x264)
                        
                        if (rdi_4 == 0)
                            int64_t* rcx_44 = var_4b8
                            rcx_44[0x11] = var_348
                            int32_t var_340
                            rcx_44[0x12].d = var_340
                            int64_t** var_2f8 = &var_4b8
                            int64_t** var_2f0_1 = &var_540
                            void var_4c0
                            sub_142012c10(&var_128, &var_4c0, &var_2f8, nullptr)
                            
                            if (sub_141e80b60(r14 + 0x68) != 0 && r15_7 != 0)
                                void* rcx_47 = data_143f5b298
                                rbx_7.b = 1
                                
                                if (rcx_47 != 0 && sub_141e7e7b0(sub_1423dcff0(rcx_47)) u> 1)
                                    int32_t rax_71 = sub_1423ddb30(data_143f5b298)
                                    
                                    if (*(*(r14 + 0x70) + 0x28) == rax_71)
                                        rbx_7 = 1
                                        
                                        if (*(r14 + 0x305) == rdi_4.b)
                                            rbx_7 = 0
                                
                                if (rbx_7.b != 0)
                                    float var_518
                                    void var_2d8
                                    void var_2c8
                                    (*(*r15_7 + 0xc48))(r15_7, &var_518, &var_2c8, &var_2d8)
                                    int32_t var_178[0x10]
                                    float var_d8[0x4]
                                    float zmm9_1[0x4] = sub_1407c8dd0(&var_d8, 
                                        sub_140ada430(&var_178, &var_2c8, &var_2d8))
                                    void* rcx_54 = data_143f5b298
                                    float var_c8[0x4]
                                    float zmm0_3[0x4]
                                    float zmm1_2[0x4]
                                    float zmm2_1[0x4]
                                    float zmm3_1[0x4]
                                    float zmm4_1[0x4]
                                    float zmm5_1[0x4]
                                    float zmm6_2[0x4]
                                    float var_514
                                    float var_510
                                    
                                    if (*(rcx_54 + 0xb08) == 0)
                                    label_14202388c:
                                        zmm5_1 = var_510
                                        zmm2_1 = var_514
                                        zmm3_1 = var_518
                                        zmm6_2 = var_d8
                                    else
                                        int64_t* rcx_55 = *(rcx_54 + 0xaf8)
                                        
                                        if (rcx_55 == 0)
                                            goto label_14202388c
                                        
                                        if ((*(*rcx_55 + 8))(rcx_55) == 0)
                                            goto label_14202388c
                                        
                                        int64_t* rcx_56 = *(data_143f5b298 + 0xb08)
                                        int32_t var_498
                                        (*(*rcx_56 + 0x98))(rcx_56, &var_498, 0)
                                        zmm6_2 = var_d8
                                        int32_t var_494
                                        int32_t var_490
                                        zmm5_1 = _mm_unpacklo_ps(
                                            _mm_unpacklo_ps(var_498, var_490[0].q), 
                                            _mm_unpacklo_ps(var_494, zmm9_1[0].q)[0].q)
                                        zmm3_1 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
                                        zmm0_3 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                        zmm2_1 =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm3_1)
                                        zmm1_2 = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xd2)
                                        zmm2_1 = _mm_sub_ps(zmm2_1, _mm_mul_ps(zmm0_3, zmm1_2))
                                        zmm2_1 = _mm_add_ps(zmm2_1, zmm2_1)
                                        zmm0_3 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
                                        zmm4_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
                                        zmm0_3 = _mm_mul_ps(zmm0_3, zmm1_2)
                                        zmm4_1 = _mm_mul_ps(zmm4_1, zmm3_1)
                                        zmm3_1 = var_518
                                        zmm4_1 = _mm_sub_ps(zmm4_1, zmm0_3)
                                        zmm0_3 =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm6_2, zmm6_2, 0xff), zmm2_1)
                                        zmm2_1 = var_514
                                        zmm0_3 = _mm_add_ps(zmm0_3, zmm5_1)
                                        zmm5_1 = var_510
                                        zmm4_1 =
                                            __addps_xmmps_memps(_mm_add_ps(zmm4_1, zmm0_3), var_c8)
                                        float var_1b8_1[0x4] = zmm4_1
                                        zmm0_3 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                                        zmm3_1[0] = zmm3_1[0] + zmm4_1[0]
                                        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                                        zmm2_1[0] = zmm2_1[0] + zmm0_3[0]
                                        zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
                                        var_518 = zmm3_1[0]
                                        var_514 = zmm2_1[0]
                                        var_510 = zmm5_1[0]
                                    int64_t* rax_78 = var_540
                                    zmm3_1 = _mm_unpacklo_ps(zmm3_1, zmm5_1[0].q)
                                    zmm5_1 = data_143f405b0
                                    zmm1_2 = _mm_mul_ps(zmm6_2, zmm6_2)
                                    var_c8 = _mm_unpacklo_ps(zmm3_1, 
                                        _mm_unpacklo_ps(zmm2_1, zmm9_1[0].q)[0].q)
                                    zmm1_2 =
                                        _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
                                    zmm4_1 =
                                        _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
                                    zmm1_2 = _mm_rsqrt_ps(zmm4_1)
                                    zmm3_1 = _mm_mul_ps(zmm4_1, zmm5_1)
                                    zmm2_1 = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm5_1, 
                                                _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), zmm3_1)), 
                                            zmm1_2), 
                                        zmm1_2)
                                    zmm1_2 = data_143f405a0
                                    zmm5_1 = _mm_sub_ps(zmm5_1, 
                                        _mm_mul_ps(_mm_mul_ps(zmm2_1, zmm2_1), zmm3_1))
                                    zmm0_3 = _mm_cmpeq_ps(data_143f406b0, zmm4_1, 2)
                                    var_d8 = _mm_and_ps(
                                        _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5_1, zmm2_1), zmm2_1), 
                                            zmm6_2) ^ zmm1_2, 
                                        zmm0_3) ^ zmm1_2
                                    
                                    if (*(rax_78 + 0xd64) == 0)
                                        zmm0_3 = *(result_1 + 0x530)
                                    else
                                        zmm0_3 = zmm9_1
                                    
                                    var_588.d = zmm0_3[0]
                                    sub_141e86a10(*(r14 + 0x70), result_1, 
                                        var_120_1 - var_f4_1 - 1, &var_d8, var_588.d)
                                    int64_t var_338
                                    char rax_80
                                    char r8_15
                                    char r9_6
                                    rax_80, r8_15, r9_6 = (*(*r15_7 + 0xc50))(r15_7, &var_338)
                                    void* rcx_59 = *(r14 + 0x70)
                                    
                                    if (rax_80 == 0)
                                        sub_141e76b60(rcx_59, var_120_1 - var_f4_1 - 1, r8_15)
                                    else
                                        int64_t var_318 = var_338
                                        int32_t var_330
                                        int32_t var_310_1 = var_330
                                        sub_141e86e20(rcx_59, var_120_1 - var_f4_1 - 1, &var_318, 
                                            r9_6)
                            
                            sub_1422f4e50(var_540)
                            zmm10, zmm11 = sub_1420423c0(r14 - 0x28, var_540)
                        
                        float zmm6_1 = *(var_540 + 0xd5c)
                        
                        if (zmm6_1 f>= zmm10.d)
                            _mm_min_ss(zmm6_1, zmm11.d)
                        
                        int32_t* var_358
                        sub_140d3a3a0(&var_358, nullptr)
                        int64_t* rcx_63 = var_540
                        _mm_cvtepi32_ps(zx.o(rcx_63[0x4c].d - rcx_63[0x4b].d))
                        rcx_63[0x50].d
                        void*** rax_85
                        uint32_t zmm6_3[0x4]
                        int32_t zmm7_2
                        uint32_t zmm8_2[0x4]
                        int32_t zmm9_2
                        rax_85, zmm6_3, zmm7_2, zmm8_2, zmm9_2 = sub_141f88540()
                        var_570 = var_358
                        var_578 = zmm9_2
                        var_580.b = 0
                        var_588.d = zmm7_2
                        zmm10, zmm11 = sub_141f80710(rax_85, rcx_63 + 0x60c, zmm8_2, zmm6_3, 
                            var_588.d, var_580.b, var_578, var_570)
                        int64_t* r13_1 = var_540
                        int64_t rsi_1 = sx.q(*(result_1 + 0x110))
                        int32_t rax_87 = (rsi_1 + 1).d
                        *(result_1 + 0x110) = rax_87
                        
                        if (rax_87 s> *(result_1 + 0x114))
                            sub_140638a00(result_1 + 0x108)
                        
                        int64_t rcx_66 = *(result_1 + 0x108)
                        int64_t rdx_34 = rsi_1 * 3
                        result_1 = result
                        rbx_6 = arg2
                        *(rcx_66 + (rdx_34 << 2)) = *(r13_1 + 0x60c)
                        r13 = rax_2
                        *(rcx_66 + (rdx_34 << 2) + 8) = *(r13_1 + 0x614)
                    
                    rdi_4 += 1
                while (rdi_4 s< var_544_1)
            
            r8_8 = var_4d8
            rdi_4 = 0
            rdx_15 = var_4d0
        
        do
            rdx_15 += 1
            var_4d0 = rdx_15
            
            if (rdx_15 s< 0 || rdx_15 s>= r8_8[1].d)
                rax_53.b = 0
            else
                rax_53.b = 1
            
            if (rax_53.b == 0)
                break
        while ((*r8_8)[sx.q(rdx_15)] == 0)
    
    (*(*(r14 - 0x28) + 0x280))(r14 - 0x28, &var_3e8, &var_128)
    uint128_t zmm3_3
    int512_t zmm8_3
    int128_t zmm9_3
    int128_t zmm11_1
    zmm3_3, zmm8_3, zmm9_3, zmm11_1 = sub_14244a470(result_1)
    void var_278
    int32_t rsi_2 = *(*(*arg2 + 0x18))(arg2, &var_278)
    int32_t i_14
    int32_t i_13 = i_14
    int32_t r15_8 = 0
    zmm8_3.o = zmm8
    uint32_t rdi_6 = 0
    void var_260
    uint32_t r13_2 = *((*(*arg2 + 0x18))(arg2, &var_260) + 4)
    int32_t rbx_13 = 0
    uint32_t var_544_2 = 0
    
    if (i_13 s> 0)
        int64_t* r10_1 = var_3e8
        uint64_t i_9 = zx.q(i_13)
        uint64_t i_4
        
        do
            void* rax_94 = *r10_1
            r10_1 = &r10_1[1]
            uint128_t zmm0_5 = *(rax_94 + 0x258)
            int64_t rcx_72 = zmm0_5.q
            uint128_t var_1a8_1 = zmm0_5
            
            if (rcx_72.d u<= rsi_2)
                rsi_2 = rcx_72.d
            
            uint32_t r8_19 = (rcx_72 u>> 0x20).d
            int64_t rax_95 = _mm_bsrli_si128(zmm0_5, 8).q
            
            if (r8_19 u<= r13_2)
                r13_2 = r8_19
            
            if (rax_95.d u>= r15_8)
                r15_8 = rax_95.d
            
            uint32_t rdx_40 = (rax_95 u>> 0x20).d
            
            if (rdx_40 u>= rdi_6)
                rdi_6 = rdx_40
            
            int32_t rcx_73 = int.d(_mm_cvtepi32_ps(zx.o(rax_95.d - rcx_72.d)))
            rbx_13 += int.d(_mm_cvtepi32_ps(zx.o(rdx_40 - r8_19))) * rcx_73
            i_4 = i_9
            i_9 -= 1
        while (i_4 != 1)
        var_544_2 = rdi_6
    
    int32_t rcx_74 = *data_143f40670
    int32_t rax_100
    
    if (rcx_74 s>= 0)
        rax_100 = 0xa
        
        if (rcx_74 s< 0xa)
            rax_100 = rcx_74
    else
        rax_100 = 0
    
    if (i_13 == 1 && rax_100 != 0)
        rdi_6 -= rax_100
        r13_2 += rax_100
        r15_8 -= rax_100
        var_544_2 = rdi_6
        rsi_2 += rax_100
        rbx_13 = (rdi_6 - r13_2) * (r15_8 - rsi_2)
    
    char var_547_1 = 0
    char rdx_38
    
    if (i_13 == 0)
        rdx_38 = 0
    else
        i_13 = i_14
        
        if (sub_142391f10(*var_3e8) == 0)
            rdx_38 = 0
        else
            rdx_38 = 1
    
    if (i_13 == 0 || rbx_13 != (rdi_6 - r13_2) * (r15_8 - rsi_2))
    label_142023c91:
        
        if ((*(r14 + 0x44) & 4) != 0 || rdx_38 == 0)
            zmm9_3 = sub_142403540(arg3, &data_143dbb1e0)
            var_547_1 = 1
        else
            var_547_1 = 1
    else if ((*(r14 + 0x44) & 4) != 0)
        zmm9_3 = sub_142403540(arg3, &data_143dbb1e0)
        var_547_1 = 1
    else if (rdx_38 != 0)
        goto label_142023c91
    
    char rax_107
    float zmm0_6
    rax_107, zmm0_6 = sub_1422f6770(&var_3e8)
    
    if (rax_107 == 0)
        var_3c0 &= 0xfffbffff
    
    if (rax_2 == 0)
        char rax_108
        rax_108, zmm0_6 = sub_1422f6770(&var_3e8)
        
        if (rax_108 != 0)
            zmm0_6 = *data_143f406a0
            float var_36c_2
            
            if (zmm0_6 f<= zmm9_3.d)
                zmm0_6 = sub_14075a020()
                var_36c_2 = zmm0_6
            else
                zmm0_6 = zmm0_6 * 0.00999999978f
                
                if (zmm0_6 f<= zmm11_1.d)
                    var_36c_2 = zmm0_6
                else
                    int32_t var_36c_1 = 0x3f800000
    
    void*** var_360
    
    if ((var_3c0 & 0x40000) != 0)
        int32_t var_138
        sub_1423dd0a0(data_143f5b298, &var_138, zmm0_6)
        int32_t rax_110 = var_138
        int32_t var_134
        
        if (rax_110 == 3)
            sub_1423dafd0(data_143f5b298, 1)
            int64_t* rcx_85 = *(data_143f5b298 + 0xa60)
            (*(*rcx_85 + 0x18))(rcx_85, &var_3e8)
        else if (rax_110 == 4)
            sub_1423dafd0(data_143f5b298, 1)
            void*** rax_113 = j_sub_140a82f30(0x20)
            
            if (rax_113 != 0)
                int32_t var_130
                var_588.d = var_130
                rax_113 = sub_1420d8740(rax_113, &var_3e8, var_134.d, 0, var_588.d)
            
            var_360 = rax_113
        
        int128_t zmm2_3 = var_134
        
        if (not(zmm2_3.d f< zmm9_3.d))
            zmm2_3.d = zmm2_3.d f* 100f
            sub_140b43f30("DynamicResolutionPercentage", 0, zmm2_3, 0)
    
    if (var_360 == 0)
        int128_t zmm6_4 = zmm11_1
        int32_t rdi_9 = var_3c0 u>> 0x12 & 1
        
        if (rdi_9 != 0)
            zmm6_4 = sub_1420e4310()
        
        void*** rax_114 = j_sub_140a82f30(0x20)
        void*** rbx_17 = rax_114
        
        if (rax_114 == 0)
            rbx_17 = rax_114
        else
            var_588.d = zmm6_4.d
            sub_1420d8740(rax_114, &var_3e8, zmm6_4.d, rdi_9.b, var_588.d)
            *rbx_17 = &data_1432c1410
        
        void*** var_360_1 = rbx_17
    else if (rax_2 != 0)
        int64_t* r9_8 = var_4e8
        int64_t rdx_47 = 0
        void* rcx_90 = &r9_8[sx.q(r12_1)]
        int64_t* rax_121 = r9_8
        uint64_t r8_23 = (rcx_90 - r9_8 + 7) u>> 3
        
        if (r9_8 u> rcx_90)
            r8_23 = 0
        
        if (r8_23 != 0)
            do
                void* rcx_91 = *rax_121
                
                if (*(rcx_91 + 0x1524) == 0)
                    *(rcx_91 + 0x1524) = 2
                
                rax_121 = &rax_121[1]
                rdx_47 += 1
            while (rdx_47 != r8_23)
    
    int64_t* rdi_10 = *(r14 + 0xa8)
    int64_t* var_268_1 = rdi_10
    
    if (rdi_10 == 0)
        goto label_142023f61
    
    int32_t rax_115 = rdi_10[1].d
    int64_t* rbx_18
    int32_t r12_2
    
    if (rax_115 == 0)
        rdi_10 = nullptr
        int64_t var_268_2 = 0
    label_142023f61:
        int64_t* var_430
        rbx_18 = var_430
        r12_2 = var_4c8
        char var_397_2 = 0
    else
        rdi_10[1].d = rax_115 + 1
        
        if (rdi_10 == 0 || *(r14 + 0xa0) == 0)
            goto label_142023f61
        
        rbx_18 = *(r14 + 0xa8)
        void* rcx_89 = nullptr
        int64_t var_438_1 = 0
        r12_2 = 1
        int64_t* var_430_1 = rbx_18
        
        if (rbx_18 == 0)
            uint8_t var_397_1 = *(rcx_89 + 0x77a) u>> 1 & 1
        else
            int32_t rax_117 = rbx_18[1].d
            
            if (rax_117 == 0)
                rbx_18 = nullptr
                int64_t var_430_2 = 0
                uint8_t var_397_3 = *0x77a u>> 1 & 1
            else
                rbx_18[1].d = rax_117 + 1
                
                if (rbx_18 != 0)
                    rcx_89 = *(r14 + 0xa0)
                    void* var_438_2 = rcx_89
                
                var_397_1 = *(rcx_89 + 0x77a) u>> 1 & 1
    
    if ((r12_2.b & 1) != 0)
        r12_2 &= 0xfffffffe
        
        if (rbx_18 != 0)
            rbx_18[1].d -= 1
            
            if (rbx_18[1].d == 1)
                (**rbx_18)(rbx_18)
                int32_t temp14_1 = *(rbx_18 + 0xc)
                *(rbx_18 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*(*rbx_18 + 8))(rbx_18, 1)
    
    if (rdi_10 != 0)
        rdi_10[1].d -= 1
        
        if (rdi_10[1].d == 1)
            (**rdi_10)(rdi_10)
            int32_t temp13_1 = *(rdi_10 + 0xc)
            *(rdi_10 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rdi_10 + 8))(rdi_10, 1)
    
    int64_t* rbx_19
    
    if ((*(r14 + 0x44) & 4) != 0 || var_120_1 - var_f4_1 s<= 0)
        int64_t* var_2e0
        rbx_19 = var_2e0
        rdi_10.b = 0
    else
        rbx_19 = data_143e20d20
        r12_2 |= 2
        int64_t* rcx_96 = data_143e20d18
        int64_t* var_2e8_1 = rcx_96
        int64_t* var_2e0_1 = rbx_19
        
        if (rbx_19 != 0)
            rbx_19[1].d += 1
        
        if ((*(*rcx_96 + 0x110))(rcx_96) == 0)
            rdi_10.b = 0
        else
            rdi_10.b = 1
    
    if ((r12_2.b & 2) != 0 && rbx_19 != 0)
        rbx_19[1].d -= 1
        
        if (rbx_19[1].d == 1)
            (**rbx_19)(rbx_19)
            int32_t temp16_1 = *(rbx_19 + 0xc)
            *(rbx_19 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*rbx_19 + 8))(rbx_19, 1)
    
    int64_t* rax_133
    int128_t zmm2_4
    rax_133, zmm2_4 = sub_142006940()
    int64_t r9_9 = *rax_133
    int32_t* rdi_11
    
    if (rdi_10.b == 0)
        (*(r9_9 + 0x128))(rax_133)
        
        if (sub_140a80f40() == 0)
            uint32_t rax_135
            
            if (data_143f138f4 == 0 && data_143de5480 != 0)
                rax_135.b = GetCurrentThreadId() == data_143de5470
            
            void var_530
            
            if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_135.b == 0))
                void var_198
                void** rax_136 = sub_1420228e0(&var_198, nullptr, 0xff)
                void* rcx_105 = *rax_136
                int32_t r8_25 = rax_136[2].d
                int64_t* rdx_53 = rax_136[1]
                int64_t* rbx_20 = *(rcx_105 + 0x18)
                int64_t* var_4a8_1 = rbx_20
                void* rdi_13 = &rbx_20[9]
                
                if (rbx_20 != 0)
                    *rdi_13 += 1
                    rbx_20 = var_4a8_1
                
                sub_1405a5890(rcx_105, rdx_53, r8_25, 1)
                
                if (rbx_20 != 0)
                    int32_t rax_137 = *rdi_13
                    *rdi_13 -= 1
                    
                    if (rax_137 == 1)
                        sub_140a2f6e0(var_4a8_1)
            else
                sub_14201af30(&var_530, &data_143f02b98, zmm2_4, zmm3_3)
        else
            int32_t rdi_12 = data_143f029c8
            sub_140b34200("FlushRHIThreadFlushResourcesTotal", rdi_12)
            
            if (data_143f02bac u> 0)
                j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2_4, zmm3_3)
            
            sub_14198b230()
            sub_14198b3f0()
            int64_t rdx_51
            rdx_51.b = 1
            sub_14198b7d0()
            sub_141971910()
            sub_1419712f0(0)
            sub_140b38680("FlushRHIThreadFlushResourcesTotal", rdi_12)
        
        rdi_11 = arg3
    else
        rdi_11 = arg3
        (*(r9_9 + 0x40))(rax_133, rdi_11, &var_3e8, r9_9, var_588, var_580, var_578, var_570)
    
    sub_1423dafd0(data_143f5b298, 2)
    int32_t var_568
    int128_t* var_560
    int64_t var_558
    char var_550
    uint128_t zmm6_5
    uint128_t zmm7_3
    
    if (var_547_1 == 0)
        zmm7_3.d = float.s(zx.q(rsi_2))
        int512_t zmm1_4
        
        if (rsi_2 != 0)
            void var_280
            void* rax_140
            int32_t rdx_55
            int32_t r8_26
            int32_t r9_11
            rax_140, rdx_55, r8_26, r9_11 = (*(*arg2 + 0x18))(arg2, &var_280)
            var_550 = 0
            zmm1_4.o = zmm9_3
            var_558 = 0
            var_560 = &data_14399f5e0
            var_568 = zmm11_1.d
            var_570.d = zmm11_1.d
            var_578 = zmm9_3.d
            var_580.d = zmm9_3.d
            var_588.d = _mm_cvtepi32_ps(zx.o(*(rax_140 + 4))).d
            zmm1_4, zmm7_3, zmm9_3, zmm11_1 = sub_14240b0a0(rdi_11, rdx_55, r8_26, r9_11, 
                var_588.d, var_580.d, var_578, var_570, var_568.b)
        
        void var_288
        int32_t* rax_142
        int32_t rdx_57
        int32_t r8_27
        int32_t r9_12
        rax_142, rdx_57, r8_27, r9_12 = (*(*arg2 + 0x18))(arg2, &var_288)
        uint128_t zmm0_9
        
        if (r15_8 u>= *rax_142)
            zmm6_5.d = float.s(zx.q(r15_8))
        else
            void var_290
            int32_t rbx_21 = *((*(*arg2 + 0x18))(arg2, &var_290) + 4)
            void var_2a0
            int32_t* rax_146
            int32_t rdx_60
            int32_t r8_28
            int32_t r9_13
            rax_146, rdx_60, r8_28, r9_13 = (*(*arg2 + 0x18))(arg2, &var_2a0)
            var_550 = 0
            zmm3_3 = zx.o(*rax_146)
            var_558 = 0
            var_560 = &data_14399f5e0
            var_568 = zmm11_1.d
            zmm6_5.d = float.s(zx.q(r15_8))
            var_570.d = zmm11_1.d
            zmm0_9 = _mm_cvtepi32_ps(zx.o(rbx_21))
            var_578 = zmm9_3.d
            zmm1_4.o = zmm6_5
            _mm_cvtepi32_ps(zmm3_3)
            var_580.d = zmm9_3.d
            var_588.d = zmm0_9.d
            rdx_57, r8_27, r9_12, zmm1_4, zmm6_5, zmm7_3, zmm9_3, zmm11_1 = sub_14240b0a0(rdi_11, 
                rdx_60, r8_28, r9_13, var_588.d, var_580.d, var_578, var_570, var_568.b)
        
        if (r13_2 != 0)
            var_550 = 0
            var_558 = 0
            zmm1_4.o = zx.o(0)
            var_560 = &data_14399f5e0
            var_568 = zmm11_1.d
            var_570.d = zmm11_1.d
            var_578 = zmm9_3.d
            var_580.d = zmm9_3.d
            zmm0_9.d = float.s(zx.q(r13_2))
            zmm1_4.d = float.s(zx.q(rsi_2))
            var_588.d = zmm0_9.d
            zmm1_4, zmm6_5, zmm7_3, zmm9_3, zmm11_1 = sub_14240b0a0(rdi_11, rdx_57, r8_27, r9_12, 
                var_588.d, var_580.d, var_578, var_570, var_568.b)
        
        uint64_t rbx_22 = zx.q(var_544_2)
        void var_2a8
        
        if (rbx_22.d u< *((*(*arg2 + 0x18))(arg2, &var_2a8) + 4))
            void var_2b0
            void* rax_153
            int32_t rdx_63
            int32_t r8_29
            int32_t r9_14
            rax_153, rdx_63, r8_29, r9_14 = (*(*arg2 + 0x18))(arg2, &var_2b0)
            var_550 = 0
            var_558 = 0
            zmm2_4.d = float.s(rbx_22)
            zmm1_4.o = zmm7_3
            var_560 = &data_14399f5e0
            var_568 = zmm11_1.d
            var_570.d = zmm11_1.d
            var_578 = zmm9_3.d
            var_580.d = zmm9_3.d
            var_588.d = _mm_cvtepi32_ps(zx.o(*(rax_153 + 4))).d
            sub_14240b0a0(rdi_11, rdx_63, r8_29, r9_14, var_588.d, var_580.d, var_578, var_570, 
                var_568.b)
    
    int64_t* rcx_119 = *(result + 0x40)
    
    if (rcx_119 != 0)
        sub_141f124a0(rcx_119)
    
    int64_t* rcx_120 = *(result + 0x50)
    
    if (rcx_120 != 0)
        sub_141f124a0(rcx_120)
    
    int64_t* rcx_121 = *(result + 0x468)
    
    if (rcx_121 != 0)
        (*(*rcx_121 + 0x20))(rcx_121, arg3)
    
    int64_t* rbx_23 = data_143e20d20
    int64_t* rcx_122 = data_143e20d18
    
    if (rbx_23 != 0)
        rbx_23[1].d += 1
    
    char rax_156 = (*(*rcx_122 + 0x110))(rcx_122)
    
    if (rbx_23 != 0)
        rbx_23[1].d -= 1
        
        if (rbx_23[1].d == 1)
            int64_t rdx_65 = *rbx_23
            (*rdx_65)(rbx_23, rdx_65)
            int32_t temp18_1 = *(rbx_23 + 0xc)
            *(rbx_23 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*rbx_23 + 8))(rbx_23, 1)
    
    void* rdi_16
    
    if (rax_156 == 0)
        rdi_16 = rax_13
    else
        sub_140b33630(&data_142e7b648)
        rsi_2.b = 0
        int64_t* var_458
        sub_1424373a0(result, &var_458)
        int32_t var_450
        int32_t rax_158 = var_450
        
        while (true)
            int64_t* rdx_67 = var_458
            int64_t rcx_125
            
            if (rax_158 s< 0 || rax_158 s>= rdx_67[1].d)
                rcx_125.b = 0
            else
                rcx_125.b = 1
            
            if (rcx_125.b == 0)
                break
            
            void* rax_160
            rax_160, rcx_125 = sub_140d3c6e0(*rdx_67 + (sx.q(rax_158) << 3))
            
            if (rax_160 != 0)
                void* rbx_24 = *(rax_160 + 0x298)
                
                if (rbx_24 != 0)
                    void* rax_161
                    rax_161, rcx_125 = sub_142531230()
                    void* rdx_68 = *(rbx_24 + 0x10)
                    int64_t rax_162 = sx.q(*(rax_161 + 0x38))
                    
                    if (rax_162.d s<= *(rdx_68 + 0x38)
                            && *(*(rdx_68 + 0x30) + (rax_162 << 3)) == rax_161 + 0x30)
                        int32_t var_4c4
                        sub_140865c40(&var_128, &var_4c4, rbx_24)
                        int64_t rax_164 = sx.q(var_4c4)
                        
                        if (rax_164.d != 0xffffffff)
                            void* rbx_25 = var_128 + rax_164 * 0x18
                            
                            if (rbx_25 != 0)
                                void* rbx_26 = *(rbx_25 + 8)
                                
                                if (rbx_26 != 0)
                                    zmm6_5 = _mm_cvtepi32_ps(zx.o(*(rbx_26 + 0x25c)))
                                    uint128_t zmm0_10 = _mm_cvtepi32_ps(zx.o(*(rbx_26 + 0x258)))
                                    truncf(zmm0_10.d)
                                    int32_t r8_33 = *(rbx_26 + 0x264) - *(rbx_26 + 0x25c)
                                    int32_t rdx_72 = *(rbx_26 + 0x260) - *(rbx_26 + 0x258)
                                    var_588 = arg3
                                    zmm6_5 = _mm_cvtepi32_ps(zx.o(int.d(zmm6_5.d)))
                                    sub_1424131e0(rax_4, rdx_72, r8_33, rbx_26, var_588)
                                    int32_t var_210_1 = 0
                                    int32_t var_20c_1 = 0x3f800000
                                    int128_t var_248
                                    __builtin_memcpy(&var_248, 
                                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                    "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00"
                                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
                                    "00", 
                                        0x30)
                                    int32_t var_218_1 = zmm0_10.d
                                    int32_t var_214_1 = zmm6_5.d
                                    sub_14241d510(arg3, &var_248)
                                    zmm6_5, zmm7_3 = sub_1424026c0(rax_4)
                                    
                                    if (*(rax_160 + 0x2b0) != 0)
                                        *(rax_13 + 0x268) = rbx_26
                                        sub_1420a3060(*(rax_160 + 0x2b0), rax_4, rax_13)
                                        int64_t* rcx_133 = *(rax_160 + 0x2b0)
                                        (*(*rcx_133 + 0x6b0))(rcx_133)
                                        *(rax_4 + 0x260) = arg3
                                        *(rax_13 + 0x260) = rax_3
                                        int32_t rax_171 = *(rax_160 + 0xc)
                                        void* const rax_175
                                        
                                        if (rax_171 s>= data_143e1d9b4)
                                            rax_175 = nullptr
                                        else
                                            uint32_t rdx_75 = zx.d(rax_171.w)
                                            
                                            if (rax_171 s< 0)
                                                rax_171 += 0xffff
                                                rdx_75 -= 0x10000
                                            
                                            rax_175 =
                                                *(data_143e1d9a0 + (sx.q(rax_171 s>> 0x10) << 3))
                                                + sx.q(rdx_75) * 0x18
                                        
                                        if (((*(rax_175 + 8) u>> 0x1d).b & 1) == 0)
                                            sub_1420a3060(*(rax_160 + 0x2b0), 0, 0)
                                    
                                    if (rax_3 != 0)
                                        int128_t var_208
                                        __builtin_memcpy(&var_208, 
                                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f"
                                        "00\x00\x00\x00", 
                                            0x30)
                                        int32_t var_1d8_1 = zmm7_3.d
                                        int32_t var_1d4_1 = zmm6_5.d
                                        int32_t var_1d0_1 = 0
                                        int32_t var_1cc_1 = 0x3f800000
                                        sub_14241d510(rax_3, &var_208)
                                        var_588 = rax_13
                                        sub_141face00(var_3c0.q, arg2, rbx_26, rax_3, var_588)
                                        sub_142418560(rax_3)
                                    
                                    sub_1424184e0(rax_4)
                                    sub_142418560(arg3)
                                    
                                    if (rsi_2.b == 0)
                                        int64_t var_4f8 = 0
                                        float var_4f0 = 1f
                                        float var_4ec_1 = 1f
                                        (*(*(r14 - 0x28) + 0x2f8))(r14 - 0x28, &var_4f8, &var_4f0)
                                        int64_t* rcx_143 = *(arg3 + 0x58)
                                        void var_2b8
                                        int32_t* rax_181 = (*(*rcx_143 + 0x18))(rcx_143, &var_2b8)
                                        int64_t* rcx_144 = *(arg3 + 0x58)
                                        uint64_t rbx_27 = zx.q(*rax_181)
                                        void var_298
                                        void* rax_183 = (*(*rcx_144 + 0x18))(rcx_144, &var_298)
                                        double zmm3_4[0x2] = zx.o(0)
                                        zmm6_5 = *(result + 0x52c)
                                        zmm3_4[0].d = float.s(rbx_27)
                                        float zmm2_5 = float.s(zx.q(*(rax_183 + 4)))
                                        float zmm0_11 = var_4f8:4.d * zmm2_5
                                        int32_t var_448 = int.d(var_4f8.d f* zmm3_4[0].d)
                                        int32_t var_444_1 = int.d(zmm0_11)
                                        int32_t var_440_1 = int.d(var_4f0 f* zmm3_4[0].d)
                                        int32_t var_43c_1 = int.d(var_4ec_1 * zmm2_5)
                                        sub_1423ad360(sub_1423b13e0(), arg3, &var_448, zmm6_5)
                                        rsi_2.b = 1
            
            rax_158 = var_450 + 1
            var_450 = rax_158
        
        sub_14240e030(arg3, 0)
        r14 = arg1
        sub_140599090(r14 + 0x250)
        rdi_16 = rax_13
        (*(*(r14 - 0x28) + 0x308))(r14 - 0x28, rdi_16)
        sub_140b37f60(&data_142e7b648)
    
    int32_t rax_191 = data_143dbb200
    uint64_t var_488 = data_143dbb1f8.q
    int32_t var_480_1 = rax_191
    int32_t rax_192 = data_143dbb210
    uint64_t var_478 = data_143dbb208
    int32_t var_470_1 = rax_192
    int64_t* var_468
    sub_1424373a0(result, &var_468)
    int32_t var_460
    int32_t rax_193 = var_460
    
    while (true)
        int64_t* rdx_85 = var_468
        int64_t rcx_150
        
        if (rax_193 s< 0 || rax_193 s>= rdx_85[1].d)
            rcx_150.b = 0
        else
            rcx_150.b = 1
        
        if (rcx_150.b == 0)
            break
        
        int64_t* rax_195
        rax_195, rcx_150 = sub_140d3c6e0(*rdx_85 + (sx.q(rax_193) << 3))
        
        if (rax_195 != 0)
            int64_t r9_17 = *rax_195
            (*(r9_17 + 0x6f8))(rax_195, &var_488, &var_478, r9_17, var_588, var_580, var_578, 
                var_570, var_568, var_560, var_558, var_550, rax_2)
        
        rax_193 = var_460 + 1
        var_460 = rax_193
    
    if (rax_3 != 0)
        sub_1424131e0(rdi_16, var_520, var_51c, 0, rax_3)
        var_578.q = &var_478
        sub_1423dade0(result, arg2, rax_3, rdi_16, r14 + 0x20, &var_488)
        sub_1423e6860(data_143f5b298, arg2)
        int64_t* rcx_157 = *(r14 + 0x18)
        
        if (rcx_157 != 0)
            (*(*rcx_157 + 0x330))(rcx_157, rdi_16)
    
    sub_140599090(r14 + 0x268)
    int64_t* rax_199 = var_4e8
    
    if (rax_199 != 0)
        sub_140a74f90(rax_199)
    
    sub_1405ae080(&var_128)
    result = sub_1422dbba0(&var_3e8)

__security_check_cookie(rax_1 ^ &var_5a8)
return result
