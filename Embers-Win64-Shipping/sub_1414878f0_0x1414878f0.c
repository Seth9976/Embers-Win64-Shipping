// 函数: sub_1414878f0
// 地址: 0x1414878f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1ad0)
void var_1ad8
int64_t rax_1 = __security_cookie ^ &var_1ad8
int64_t* rdi_1 = sx.q(*(arg2 + 0x28)) * 0x70 + *(arg1 + 0x2f0)
int64_t* rcx = *(arg2 + 0x20)
int32_t var_f4 = 6
void* var_108 = nullptr
int32_t result_2 = 0
void var_e28
uint64_t result = (*(*rcx + 0x88))(rcx, arg1 + 0x10, &var_e28)

if (result.b != 0)
    void* rdx_1 = &var_e28
    int64_t* var_1958_1 = &data_143ec4c60
    int32_t rax_4 = 4
    
    if (var_108 != 0)
        rdx_1 = var_108
    
    int32_t r12_1 = *(data_143ed9cb0 + 4)
    
    if (*(rdx_1 + 0x220) != 0)
        rax_4 = 0
    
    if (r12_1 s<= 0)
        r12_1 = 0
    
    int32_t r14_1 = rax_4 * 2
    int32_t rdi_2 = data_143a30378.d
    int64_t var_1a20
    sub_14139db90(&data_143ec4c60, &var_1a20)
    int32_t rbx_1 = var_1a20.d
    int32_t rax_5 = var_1a20:4.d
    char var_1a78_1 = 0
    
    if (rdi_2 s<= rbx_1)
        rbx_1 = rdi_2
    
    char var_1a77_1 = 0
    int32_t result_8 = rbx_1 - r14_1
    
    if (rdi_2 s<= rax_5)
        rax_5 = rdi_2
    
    int32_t rax_6 = rax_5 - r14_1
    result = data_143ed9c98
    int32_t r13_1 = *(result + 4)
    void* var_1880_1 = nullptr
    
    if (r13_1 s<= 0)
        r13_1 = 0
    
    int32_t var_1878_1 = 0
    int64_t i_14 = sx.q(*(arg1 + 0xa8))
    int32_t var_1874_1 = 2
    
    if (i_14 s> 0)
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        int64_t rdi_3 = 0
        float zmm11[0x4] = zx.o(0)
        void* rsi_1 = arg2
        zmm11[0] = float.s(zx.q(result_8))
        int128_t zmm9
        zmm9.d = float.s(zx.q(r12_1))
        float var_1a30_1 = zmm11[0]
        void var_1888
        float zmm8_1
        uint128_t zmm10_1
        int64_t i
        
        do
            int64_t* rcx_3 = *(rsi_1 + 0x20)
            int64_t r14_2 = *(arg1 + 0xa0)
            (*(*rcx_3 + 0x58))(rcx_3, r14_2 + 0x6b0 + rdi_3)
            void* rsi_2 = *(rsi_1 + 0x20)
            zmm6 = 0x3f800000
            uint32_t rcx_4 = zx.d(*(rsi_2 + 0x13c))
            
            if (rcx_4 == 1)
                zmm6 = *(data_143ed9c38 + 4)
                zmm6[0] = zmm6[0] * arg5[0]
            else if (rcx_4 == 2)
                zmm6 = *(data_143ed9c50 + 4)
                zmm6[0] = zmm6[0] * arg5[0]
            else if (rcx_4 == 3)
                zmm6 = *(data_143ed9c68 + 4)
                zmm6[0] = zmm6[0] * arg5[0]
            
            float zmm9_1[0x4]
            arg5, zmm6, zmm8_1, zmm9_1, zmm10_1 = sub_141481cb0(zmm6, r13_1, r12_1)
            arg5[0] = arg5[0] f* *(rsi_2 + 0x168)
            int64_t rsi_3 = sx.q(var_1878_1)
            int32_t rax_12 = (rsi_3 + 1).d
            var_1878_1 = rax_12
            zmm8_1 = _mm_max_ss(arg5[0], zmm8_1)[0]
            
            if (rax_12 s> var_1874_1)
                sub_140bcee10(&var_1888, rsi_3.d)
            
            void* rcx_8 = &var_1888
            
            if (var_1880_1 != 0)
                rcx_8 = var_1880_1
            
            *(rcx_8 + (rsi_3 << 2)) = arg5[0]
            rsi_1 = arg2
            float zmm1_1[0x4] = *(*(rsi_1 + 0x20) + 0xd0)
            zmm1_1[0] - 1f
            bool cond:7_1 = zmm1_1[0] > 1f
            
            if (not(zmm1_1[0] <= 1f))
                zmm1_1[0] = zmm1_1[0] * zmm6[0]
                zmm6 = zmm1_1
            
            zmm6 = _mm_min_ss(zmm6[0], zmm11[0])
            
            if (not(cond:7_1))
                zmm6[0] = zmm6[0] * zmm1_1[0]
            
            arg5 = zx.o(0)
            result = zx.q(var_1a20.d - rax_4 * 2)
            arg5[0] = float.s(result)
            zmm1_1 = _mm_min_ss(zmm9_1[0], arg5[0])
            zmm6 = _mm_max_ss(_mm_max_ss(zmm6[0], zmm1_1[0])[0], zmm10_1.d)
            zmm10_1 = zmm6
            
            if (var_1a78_1 != 0)
                var_1a78_1 = 1
            else
                var_1a78_1 = 0
                
                if (*(rdi_3 + r14_2 + 0xd79) != 0)
                    var_1a78_1 = 1
            
            if (var_1a77_1 != 0)
                var_1a77_1 = 1
            else
                var_1a77_1 = 0
                
                if (*(rdi_3 + r14_2 + 0xd72) != 0)
                    var_1a77_1 = 1
            
            rdi_3 += 0x5240
            i = i_14
            i_14 -= 1
        while (i != 1)
        int32_t result_3 = result_8
        float var_1a34_1 = zmm6[0]
        
        if (not(zmm8_1 <= 0.00390625f))
            void* r12_2 = arg1
            zmm6 = sub_1413e83d0(*(r12_2 + 8))
            result = sx.q(result_2)
            uint64_t result_1 = result
            
            if (result s> 0)
                uint64_t r9 = zx.q(rax_6)
                uint64_t rax_16 = zx.q(data_14401b1a0)
                zmm6[0] = zmm6[0] + 1f
                void*** r13_2 = nullptr
                int64_t rdx_8 = 0
                int64_t r8_2 = int.q(zmm6[0])
                int64_t var_19c8_1 = 0
                float zmm0[0x4] = zx.o(0)
                float zmm15[0x4]
                float var_d8_1[0x4] = zmm15
                zmm0[0] = float.s(r9)
                int64_t var_1930_1 = r8_2
                float var_1a2c_1 = zmm0[0]
                
                do
                    void* r14_3 = &var_e28
                    
                    if (var_108 != 0)
                        r14_3 = var_108
                    
                    int64_t rax_17 = rdx_8 * 0x230
                    int64_t* r14_4 = r14_3 + rax_17
                    uint64_t rflags_1
                    int32_t temp0_6
                    temp0_6, rflags_1 = _bit_scan_reverse(r8_2.d)
                    int64_t* var_19f0_1 = r14_4
                    int32_t rcx_12
                    
                    if (r14_3 == neg.q(rax_17))
                        rcx_12 = 0x20
                    else
                        rcx_12 = 0x1f - temp0_6
                    
                    int32_t rcx_14 = rcx_12 << 0x1a s>> 0x1f
                    uint64_t rflags_2
                    char temp0_7
                    temp0_7, rflags_2 = _bit_scan_reverse((r8_2 - 1).d)
                    char rdx_9
                    
                    if (rcx_14 == 0)
                        rdx_9 = 0x20
                    else
                        rdx_9 = 0x1f - temp0_7
                    
                    int32_t result_4 = 1
                    int32_t rdi_4 = rax_4 * 2
                    int32_t result_7 = (1 << (((not.d(rcx_14)).b & (0x20 - rdx_9)) - 1)) - rdi_4
                    
                    if (result_7 s>= 1)
                        result_4 = result_7
                    
                    result = zx.q(result_4)
                    
                    if (zmm10_1.d f>= zmm11[0])
                        result = zx.q(result_3)
                    
                    int32_t var_1a64_1 = result.d
                    
                    if (zmm10_1.d f>= zmm0[0])
                        result_4 = r9.d
                    
                    int32_t result_5 = result_4
                    
                    if (r14_4[0x44].b != 0)
                        result =
                            sub_14139c4c0(var_1958_1, sub_14139c360(var_1958_1, int.d(zmm10_1.d)))
                        r9 = zx.q(rax_6)
                        result_4 = result.d
                        result_5 = result.d
                        var_1a64_1 = result.d
                    
                    int32_t rcx_20 = 1
                    int32_t var_1a4c_1 = 1
                    int32_t var_1a74 = 1
                    int32_t var_1a18 = 2
                    int32_t var_1a14_1 = 2
                    float zmm2_1[0x4]
                    
                    if (var_1a77_1 == 0 && *(r14_4 + 0x221) == 0)
                        zmm2_1 = *(r12_2 + 0x48)
                        char rdx_13 = r14_4[0x44].b
                        int32_t var_1a48 = result.d + rdi_4
                        int32_t* var_1a80_1 = &var_1a18
                        int32_t result_6 = result_3
                        int32_t var_19e4_1 = r9.d
                        sub_141482500(rsi_1, rdx_13, zmm2_1, zmm10_1, &result_6, *(r12_2 + 8), 
                            r14_4, &var_1a48, arg3, arg4, &var_1a74, var_1a80_1)
                        result = zx.q(var_1a48 - rdi_4)
                        rcx_20 = var_1a74
                        result_5 = result_4
                        var_1a64_1 = result.d
                        var_1a4c_1 = rcx_20
                    
                    int32_t var_1a50_1 = 0
                    int64_t var_19f8_1 = 0
                    
                    if (rcx_20 s> 0)
                        bool cond:20_1
                        
                        do
                            char var_1a76 = 0
                            char* var_1920_1 = &var_1a76
                            void*** (* var_1928)() = j_sub_140597fc0
                            void* rax_28 = sub_140a756e0(&var_1928, &data_143958018)
                            void*** rcx_26 = (*(rax_28 + 0x10) + 0xf) & 0xfffffffffffffff0
                            void* rax_29 = &rcx_26[0x120]
                            
                            if (rax_29 u> *(rax_28 + 0x18))
                                sub_140b0e3d0(rax_28 + 0x10, 0x910)
                                rcx_26 = (*(rax_28 + 0x10) + 0xf) & 0xfffffffffffffff0
                                rax_29 = &rcx_26[0x120]
                            
                            *(rax_28 + 0x10) = rax_29
                            
                            if (rcx_26 != 0)
                                r13_2 = sub_141475910(rcx_26)
                            
                            int32_t* var_1aa0
                            var_1aa0.b = 0
                            int64_t* var_1aa8
                            var_1aa8.d = rax_4
                            void* var_1ab0
                            var_1ab0.d = result_4
                            int32_t* var_1ab8
                            var_1ab8.d = var_1a64_1
                            uint128_t zmm7_2
                            float zmm8_2[0x4]
                            float zmm9_2[0x4]
                            float zmm12_1[0x4]
                            float zmm13_1[0x4]
                            float zmm14_1[0x4]
                            zmm0, zmm6, zmm7_2, zmm8_2, zmm9_2, zmm12_1, zmm13_1, zmm14_1 =
                                sub_1414a3420(r13_2, rsi_1, 0, r14_4, var_1ab8.d, var_1ab0.d, 
                                var_1aa8.d, var_1aa0.b)
                            void* rdi_6 = &r13_2[0xab]
                            int32_t r15_2 = (&var_1a18)[var_19f8_1]
                            var_1a74 = r15_2
                            r13_2[8].d = r15_2
                            
                            if (rdi_6 != &var_1888)
                                int64_t rsi_4 = sx.q(var_1878_1)
                                int32_t r8_4 = *(rdi_6 + 0x14)
                                *(rdi_6 + 0x10) = rsi_4.d
                                
                                if (rsi_4.d != 0 || r8_4 != 0)
                                    sub_14149bdb0(rdi_6, rsi_4.d, r8_4)
                                    void* rax_34 = *(rdi_6 + 8)
                                    void* rdx_16 = &var_1888
                                    
                                    if (var_1880_1 != 0)
                                        rdx_16 = var_1880_1
                                    
                                    if (rax_34 != 0)
                                        rdi_6 = rax_34
                                    
                                    zmm0 = memcpy(rdi_6, rdx_16, (rsi_4 << 2).d)
                                else
                                    *(rdi_6 + 0x14) = 2
                                
                                r14_4 = var_19f0_1
                            
                            int64_t rdi_7 = sx.q(rdi_1[1].d)
                            int32_t rax_35 = (rdi_7 + 1).d
                            rdi_1[1].d = rax_35
                            
                            if (rax_35 s> *(rdi_1 + 0xc))
                                zmm0, zmm6 = sub_14083a310(rdi_1, rdi_7.d)
                            
                            *(*rdi_1 + (rdi_7 << 3)) = r13_2
                            int64_t rax_36
                            float zmm1_2[0x4]
                            
                            if (r14_4[0x44].b != 0)
                                TEB* gsbase
                                int64_t rdi_8 = *(gsbase->ThreadLocalStoragePointer + (rax_16 << 3))
                                
                                if (data_143ee1c58 s> *(0x14 + rdi_8))
                                    zmm0 = _Init_thread_header(&data_143ee1c58)
                                    
                                    if (data_143ee1c58 == 0xffffffff)
                                        __builtin_memcpy(&data_143ee1c10, 
                                            "\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                                        "00\x80\xbf\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f"
                                        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
                                        "bf\x00\x00\x00\x00", 
                                            0x40)
                                        data_143ee1c50 = 0
                                        data_143ee1c54 = 0x3f800000
                                        zmm0 = _Init_thread_footer(&data_143ee1c58)
                                
                                if (data_143ee1ca8 s> *(0x14 + rdi_8))
                                    zmm0 = _Init_thread_header(&data_143ee1ca8)
                                    
                                    if (data_143ee1ca8 == 0xffffffff)
                                        __builtin_memcpy(&data_143ee1c60, 
                                            "\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x"
                                        "00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x80\xbf\x00\x00\x00\x00\x00\x00\x00\x00"
                                        "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
                                        "00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00", 
                                            0x48)
                                        zmm0 = _Init_thread_footer(&data_143ee1ca8)
                                
                                int64_t* rdi_9 = r13_2[0xb8][4]
                                (*(*rdi_9 + 0x18))(rdi_9)
                                bool cond:19_1 = zmm0[0] != zmm12_1[0]
                                zmm0[0] = zmm0[0] - zmm12_1[0]
                                
                                if (cond:19_1)
                                    zmm2_1 = zmm0
                                    zmm2_1[0] = zmm2_1[0] / zmm0[0]
                                else
                                    zmm2_1 = zmm12_1
                                
                                if (zmm0[0] != zmm12_1[0])
                                    zmm0[0] = zmm0[0] / zmm0[0]
                                else
                                    zmm0 = zmm12_1
                                
                                float var_18e0_1 = zmm0[0]
                                int64_t var_18e8_1 = 0
                                int96_t var_19b8_1 = (*(rdi_9 + 0x20))[0].12
                                float var_18d0_1 = (zmm2_1 ^ zmm6)[0]
                                int64_t var_18dc_1 = 0x3f800000
                                int32_t var_18d4_1 = 0
                                int32_t var_18cc_1 = 0
                                r13_2[0xb2].d = 0
                                
                                if (*(r13_2 + 0x594) != 6)
                                    sub_1405a52a0(&r13_2[0xb1], 6)
                                
                                r13_2[0xb0].d = 0
                                
                                if (*(r13_2 + 0x584) != 6)
                                    sub_1405a52a0(&r13_2[0xaf], 6)
                                
                                int32_t i_11 = r13_2[0xb4].d
                                
                                if (i_11 != 0)
                                    void* rdi_11 = &r13_2[0xb3][0xc]
                                    int32_t i_1
                                    
                                    do
                                        int64_t rcx_39 = *(rdi_11 + 0xa0)
                                        
                                        if (rcx_39 != 0)
                                            sub_140a74f90(rcx_39)
                                        
                                        int64_t rcx_40 = *rdi_11
                                        
                                        if (rcx_40 != 0)
                                            sub_140a74f90(rcx_40)
                                        
                                        rdi_11 += 0x120
                                        i_1 = i_11
                                        i_11 -= 1
                                    while (i_1 != 1)
                                
                                int32_t rdi_12 = 0
                                r13_2[0xb4].d = 0
                                
                                if (*(r13_2 + 0x5a4) != 6)
                                    sub_14149c700(&r13_2[0xb3], 6)
                                    rdi_12 = r13_2[0xb4].d
                                
                                r13_2[0xb4].d = rdi_12 + 6
                                
                                if (rdi_12 + 6 s> *(r13_2 + 0x5a4))
                                    sub_14149bf70(&r13_2[0xb3])
                                
                                memset(&r13_2[0xb3][sx.q(rdi_12) * 0x24], 0, 0x6c0)
                                r13_2[0x3c].d = 0
                                
                                if (*(r13_2 + 0x1e4) != 0)
                                    sub_14149c8a0(&r13_2[0x2e], 0)
                                
                                zmm15 = var_19b8_1.d
                                int64_t rdi_13 = 0
                                int64_t var_1a08_1 = 0
                                int64_t var_1a10_1 = 0
                                float var_1a38_1 = (zmm15 ^ zmm6)[0]
                                float zmm0_1[0x4] = var_19b8_1:4.d
                                int64_t i_8 = 6
                                float var_1a54_1 = (zmm0_1 ^ zmm6)[0]
                                zmm1_2 = var_19b8_1:8.d
                                float var_1a60_1 = (zmm1_2 ^ zmm6)[0]
                                int64_t i_2
                                
                                do
                                    zmm6 = data_143dbb200
                                    zmm7_2 = data_143dbb1fc
                                    zmm10_1.d = zmm0_1.d f+ *(rdi_13 + &data_143ee1c10:4)
                                    zmm8_2 = data_143dbb1f8
                                    zmm11 = zmm1_2
                                    zmm11[0] = zmm11[0] f+ *(rdi_13 + &data_143ee1c10:8)
                                    zmm9_2 = zmm15
                                    zmm9_2[0] = zmm9_2[0] f+ *(rdi_13 + &data_143ee1c10)
                                    zmm10_1.d = zmm10_1.d f- zmm0_1[0]
                                    zmm11[0] = zmm11[0] - zmm1_2[0]
                                    zmm9_2[0] = zmm9_2[0] - zmm15[0]
                                    zmm2_1 = zmm10_1
                                    zmm2_1[0] = zmm2_1[0] f* zmm10_1.d
                                    zmm11[0] = zmm11[0] * zmm11[0]
                                    zmm9_2[0] = zmm9_2[0] * zmm9_2[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm9_2[0]
                                    zmm2_1[0] = zmm2_1[0] + zmm11[0]
                                    uint128_t zmm3_1
                                    float zmm4_1[0x4]
                                    float zmm5_1[0x4]
                                    
                                    if (not(zmm2_1[0] == zmm12_1[0]))
                                        if (zmm2_1[0] >= zmm13_1[0])
                                            zmm4_1 = zx.o(0)
                                            zmm4_1[0] = zmm14_1[0]
                                            zmm3_1 = zmm2_1
                                            zmm5_1 = _mm_rsqrt_ss(zmm2_1[0], zmm3_1.d)
                                            zmm3_1.d = zmm3_1.d f* zmm4_1[0]
                                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                                            zmm1_2 = zmm3_1
                                            zmm1_2[0] = zmm1_2[0] * zmm5_1[0]
                                            zmm4_1[0] = zmm4_1[0] - zmm1_2[0]
                                            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                                            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                                            zmm3_1.d = zmm3_1.d f* zmm5_1[0]
                                            zmm4_1[0] = zmm4_1[0] f- zmm3_1.d
                                            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                                            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                                            zmm9_2[0] = zmm9_2[0] * zmm5_1[0]
                                            zmm10_1.d = zmm10_1.d f* zmm5_1[0]
                                            zmm11[0] = zmm11[0] * zmm5_1[0]
                                        else
                                            zmm9_2 = zmm8_2
                                            zmm10_1 = zmm7_2
                                            zmm11 = zmm6
                                    
                                    zmm1_2 = *(rdi_13 + &data_143ee1c60:4)
                                    zmm13_1 = *(rdi_13 + &data_143ee1c60:8)
                                    zmm12_1 = zmm1_2
                                    zmm14_1 = *(rdi_13 + &data_143ee1c60)
                                    zmm13_1[0] = zmm13_1[0] f* zmm10_1.d
                                    zmm1_2[0] = zmm1_2[0] * zmm9_2[0]
                                    zmm12_1[0] = zmm12_1[0] * zmm11[0]
                                    zmm13_1[0] = zmm13_1[0] * zmm9_2[0]
                                    zmm12_1[0] = zmm12_1[0] - zmm13_1[0]
                                    zmm14_1[0] = zmm14_1[0] * zmm11[0]
                                    zmm14_1[0] = zmm14_1[0] f* zmm10_1.d
                                    zmm13_1[0] = zmm13_1[0] - zmm14_1[0]
                                    zmm12_1[0] = zmm12_1[0] * zmm12_1[0]
                                    zmm14_1[0] = zmm14_1[0] - zmm1_2[0]
                                    zmm13_1[0] = zmm13_1[0] * zmm13_1[0]
                                    zmm14_1[0] = zmm14_1[0] * zmm14_1[0]
                                    zmm12_1[0] = zmm12_1[0] + zmm13_1[0]
                                    zmm12_1[0] = zmm12_1[0] + zmm14_1[0]
                                    
                                    if (not(zmm12_1[0] == 1f))
                                        if (zmm12_1[0] >= 9.99999994e-09f)
                                            zmm4_1 = 0x3f000000
                                            zmm3_1 = zmm12_1
                                            zmm5_1 = _mm_rsqrt_ss(zmm12_1[0], zmm3_1.d)
                                            zmm2_1 = 0x3f000000
                                            zmm3_1.d = zmm3_1.d f* 0.5f
                                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                                            zmm1_2 = zmm3_1
                                            zmm1_2[0] = zmm1_2[0] * zmm5_1[0]
                                            zmm2_1[0] = 0.5f - zmm1_2[0]
                                            zmm5_1[0] = zmm5_1[0] * zmm2_1[0]
                                            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                                            zmm3_1.d = zmm3_1.d f* zmm5_1[0]
                                            zmm4_1[0] = 0.5f f- zmm3_1.d
                                            zmm5_1[0] = zmm5_1[0] * zmm4_1[0]
                                            zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                                            zmm12_1[0] = zmm12_1[0] * zmm5_1[0]
                                            zmm5_1[0] = zmm5_1[0] * zmm13_1[0]
                                            zmm5_1[0] = zmm5_1[0] * zmm14_1[0]
                                            zmm13_1 = zmm5_1
                                            zmm14_1 = zmm5_1
                                        else
                                            zmm12_1 = zmm8_2
                                            zmm13_1 = zmm7_2
                                            zmm14_1 = zmm6
                                    
                                    zmm2_1 = var_1a38_1
                                    zmm4_1 = zmm12_1
                                    zmm4_1[0] = zmm4_1[0] * zmm11[0]
                                    int32_t var_198c_1 = 0
                                    zmm6 = zmm10_1
                                    int32_t var_197c_1 = 0
                                    zmm6[0] = zmm6[0] * var_1a54_1
                                    int32_t var_196c_1 = 0
                                    zmm3_1.d = zmm14_1.d f* zmm10_1.d
                                    int32_t var_195c_1 = 0x3f800000
                                    zmm13_1[0] = zmm13_1[0] * zmm11[0]
                                    zmm5_1 = zmm13_1
                                    zmm5_1[0] = zmm5_1[0] * zmm9_2[0]
                                    zmm14_1[0] = zmm14_1[0] * var_1a60_1
                                    zmm3_1.d = zmm3_1.d f- zmm13_1[0]
                                    zmm8_2 = zmm13_1
                                    zmm8_2[0] = zmm8_2[0] * var_1a54_1
                                    zmm14_1[0] = zmm14_1[0] * zmm9_2[0]
                                    zmm7_2.d = zmm2_1.d f* zmm3_1.d
                                    zmm4_1[0] = zmm4_1[0] - zmm14_1[0]
                                    zmm12_1[0] = zmm12_1[0] f* zmm10_1.d
                                    zmm5_1[0] = zmm5_1[0] - zmm12_1[0]
                                    zmm12_1[0] = zmm12_1[0] * zmm2_1[0]
                                    zmm8_2[0] = zmm8_2[0] + zmm12_1[0]
                                    zmm4_1[0] = zmm4_1[0] * var_1a54_1
                                    zmm7_2.d = zmm7_2.d f+ zmm4_1[0]
                                    zmm9_2[0] = zmm9_2[0] * zmm2_1[0]
                                    zmm8_2[0] = zmm8_2[0] + zmm14_1[0]
                                    zmm5_1[0] = zmm5_1[0] * var_1a60_1
                                    float var_1998[0x4]
                                    var_1998[0] = zmm12_1[0]
                                    zmm12_1 = data_142f79470
                                    zmm6[0] = zmm6[0] + zmm9_2[0]
                                    zmm2_1 = _mm_shuffle_ps(var_1998, var_1998, 0xe1)
                                    zmm2_1[0] = zmm3_1.d
                                    zmm7_2.d = zmm7_2.d f+ zmm5_1[0]
                                    zmm3_1 = data_142d4cc00
                                    zmm11[0] = zmm11[0] * var_1a60_1
                                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
                                    zmm2_1[0] = zmm9_2[0]
                                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
                                    zmm6[0] = zmm6[0] + zmm11[0]
                                    var_1998 = zmm2_1
                                    zmm9_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                                    zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                                    zmm1_2 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa), data_142d4cc30)
                                    zmm2_1 = __mulps_xmmps_memps(
                                        _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), data_142d3f660)
                                    zmm9_2 = _mm_add_ps(
                                        _mm_add_ps(
                                            _mm_add_ps(_mm_mul_ps(zmm9_2, zmm12_1), 
                                                _mm_mul_ps(zmm0_1, zmm3_1)), 
                                            zmm1_2), 
                                        zmm2_1)
                                    float var_1988[0x4]
                                    var_1988[0] = zmm13_1[0]
                                    zmm2_1 = _mm_shuffle_ps(var_1988, var_1988, 0xe1)
                                    zmm2_1[0] = zmm4_1[0]
                                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
                                    zmm2_1[0] = zmm10_1.d
                                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
                                    var_1988 = zmm2_1
                                    zmm10_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x55), zmm12_1)
                                    zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                                    zmm4_1 = data_142d4cc30
                                    zmm13_1 = data_142d3f660
                                    int64_t r14_6 = sx.q(r13_2[0xb2].d)
                                    zmm1_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm13_1)
                                    int32_t rax_44 = (r14_6 + 1).d
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm3_1)
                                    r13_2[0xb2].d = rax_44
                                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm4_1)
                                    zmm10_1 = _mm_add_ps(
                                        _mm_add_ps(_mm_add_ps(zmm10_1, zmm0_1), zmm1_2), zmm2_1)
                                    float var_1978[0x4]
                                    var_1978[0] = zmm14_1[0]
                                    zmm2_1 = _mm_shuffle_ps(var_1978, var_1978, 0xe1)
                                    zmm2_1[0] = zmm5_1[0]
                                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
                                    zmm2_1[0] = zmm11[0]
                                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
                                    zmm11 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                                    zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                                    zmm1_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                                    var_1978 = zmm2_1
                                    zmm2_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm13_1)
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm3_1)
                                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm4_1)
                                    zmm11 = _mm_add_ps(
                                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm11, zmm12_1), zmm0_1), 
                                            zmm1_2), 
                                        zmm2_1)
                                    float var_1968[0x4]
                                    var_1968[0] = zmm8_2[0]
                                    zmm2_1 = _mm_shuffle_ps(var_1968, var_1968, 0xe1)
                                    zmm2_1[0] = zmm7_2.d
                                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
                                    zmm2_1[0] = zmm6[0]
                                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc9)
                                    zmm6 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
                                    zmm0_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
                                    zmm6 = _mm_mul_ps(zmm6, zmm12_1)
                                    zmm1_2 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
                                    var_1968 = zmm2_1
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm3_1)
                                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm4_1)
                                    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                                    zmm6 = _mm_add_ps(zmm6, zmm0_1)
                                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm13_1)
                                    zmm6 = _mm_add_ps(_mm_add_ps(zmm6, zmm1_2), zmm2_1)
                                    
                                    if (rax_44 s> *(r13_2 + 0x594))
                                        sub_1405c4fe0(&r13_2[0xb1])
                                    
                                    int64_t rax_45 = r13_2[0xb1]
                                    zmm5_1 = data_142f8e7a0
                                    zmm14_1 = data_142f79450
                                    zmm13_1 = var_18e8_1.o
                                    zmm12_1 = var_18dc_1:4.o
                                    zmm0_1 = _mm_shuffle_ps(zmm9_2, zmm9_2, 0)
                                    zmm1_2 = _mm_shuffle_ps(zmm9_2, zmm9_2, 0xaa)
                                    zmm2_1 = _mm_shuffle_ps(zmm10_1, zmm10_1, 0x55)
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm14_1)
                                    int64_t rcx_49 = r14_6 << 6
                                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm13_1)
                                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm5_1)
                                    *(rcx_49 + rax_45) = zmm9_2
                                    *(rcx_49 + rax_45 + 0x10) = zmm10_1
                                    *(rcx_49 + rax_45 + 0x20) = zmm11
                                    *(rcx_49 + rax_45 + 0x30) = zmm6
                                    int64_t r14_7 = sx.q(r13_2[0xb0].d)
                                    zmm4_1 = _mm_shuffle_ps(zmm9_2, zmm9_2, 0x55)
                                    zmm3_1 = _mm_shuffle_ps(zmm11, zmm11, 0x55)
                                    zmm4_1 = _mm_mul_ps(zmm4_1, zmm5_1)
                                    int32_t rax_46 = (r14_7 + 1).d
                                    zmm3_1 = _mm_mul_ps(zmm3_1, zmm5_1)
                                    r13_2[0xb0].d = rax_46
                                    zmm9_2 = _mm_shuffle_ps(zmm9_2, zmm9_2, 0xff)
                                    zmm4_1 = _mm_add_ps(zmm4_1, zmm0_1)
                                    zmm0_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0), zmm14_1)
                                    zmm9_2 = _mm_mul_ps(zmm9_2, zmm12_1)
                                    zmm4_1 = _mm_add_ps(zmm4_1, zmm1_2)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_1)
                                    zmm1_2 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa), zmm13_1)
                                    zmm0_1 = _mm_shuffle_ps(zmm11, zmm11, 0)
                                    zmm4_1 = _mm_add_ps(zmm4_1, zmm9_2)
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm14_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm1_2)
                                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xaa), zmm13_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm0_1)
                                    zmm0_1 = _mm_shuffle_ps(zmm6, zmm6, 0)
                                    zmm10_1 =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xff), zmm12_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm1_2)
                                    zmm1_2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                                    zmm0_1 = _mm_mul_ps(zmm0_1, zmm14_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm10_1)
                                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm13_1)
                                    zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xff), zmm12_1)
                                    float var_18b8_1[0x4] = zmm2_1
                                    zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0x55), zmm5_1)
                                    zmm3_1 = _mm_add_ps(zmm3_1, zmm11)
                                    zmm6 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm12_1)
                                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_1)
                                    float var_18c8[0x4] = zmm4_1
                                    zmm2_1 = _mm_add_ps(_mm_add_ps(zmm2_1, zmm1_2), zmm6)
                                    
                                    if (rax_46 s> *(r13_2 + 0x584))
                                        sub_1405c4fe0(&r13_2[0xaf])
                                        zmm4_1 = var_18c8
                                    
                                    int64_t rax_47 = r13_2[0xaf]
                                    float (* rcx_52)[0x4] = r14_7 << 6
                                    *(rcx_52 + rax_47) = zmm4_1
                                    *(rcx_52 + rax_47 + 0x10) = var_18b8_1
                                    *(rcx_52 + rax_47 + 0x20) = zmm3_1
                                    *(rcx_52 + rax_47 + 0x30) = zmm2_1
                                    zmm15 = sub_141f8c8a0(var_1a10_1 + r13_2[0xb3], &var_18c8, 0)
                                    void* rax_48 = r13_2[0xb3]
                                    int64_t r8_7 = var_1a08_1
                                    int64_t rdx_22 = sx.q(*(rax_48 + r8_7 + 0x70))
                                    void* rcx_55 = rax_48 + r8_7
                                    
                                    if (rdx_22.d s> 0)
                                        void* rax_49 = *(rcx_55 + 0x60)
                                        int64_t r14_8 = sx.q(r13_2[0x3c].d)
                                        
                                        if (rax_49 != 0)
                                            rcx_55 = rax_49
                                        
                                        zmm3_1 = *(rcx_55 + rdx_22 * 0x10 - 0x10)
                                        int32_t rax_52 = (r14_8 + 1).d
                                        zmm0_1 = zmm3_1
                                        zmm0_1[0] = zmm0_1[0] f* *(r13_2 + 0x54)
                                        zmm2_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55)
                                        zmm2_1[0] = zmm2_1[0] f* r13_2[0xb].d
                                        zmm1_2 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa)
                                        zmm1_2[0] = zmm1_2[0] f* *(r13_2 + 0x5c)
                                        r13_2[0x3c].d = rax_52
                                        zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
                                        uint128_t var_1918_1 = zmm3_1
                                        zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
                                        zmm2_1[0] = zmm2_1[0] + zmm1_2[0]
                                        zmm3_1.d = zmm3_1.d f+ zmm2_1[0]
                                        var_1918_1:0xc.d = zmm3_1.d
                                        
                                        if (rax_52 s> *(r13_2 + 0x1e4))
                                            sub_14149c260(&r13_2[0x2e], r14_8.d)
                                            r8_7 = var_1a08_1
                                        
                                        void* rax_53 = r13_2[0x3a]
                                        void* rcx_57 = &r13_2[0x2e]
                                        
                                        if (rax_53 != 0)
                                            rcx_57 = rax_53
                                        
                                        *(rcx_57 + (r14_8 << 4)) = var_1918_1
                                    
                                    var_1a10_1 += 0x120
                                    zmm0_1 = var_19b8_1:4.d
                                    rdi_13 += 0xc
                                    i_2 = i_8
                                    i_8 -= 1
                                    zmm1_2 = var_19b8_1:8.d
                                    zmm12_1 = 0x3f800000
                                    zmm13_1 = 0x322bcc77
                                    zmm14_1 = 0x3f000000
                                    var_1a08_1 = r8_7 + 0x120
                                while (i_2 != 1)
                                rax_36, zmm7_2, zmm8_2, zmm9_2, zmm12_1 =
                                    sub_141f8cbb0(&r13_2[0x2e])
                                r12_2 = arg1
                                r15_2 = var_1a74
                            
                            if ((r13_2[0xae].d & 0x200) == 0)
                                void* rdi_14 = arg2
                                void* var_e48_1 = nullptr
                                int32_t i_15 = 0
                                int32_t var_e34_1 = 8
                                void var_1748
                                
                                if (r15_2 != 1)
                                    bool cond:18_1 = data_1439b6e0c == 0
                                    rax_36 = *(rdi_14 + 0x20)
                                    zmm1_2 = *(rax_36 + 0xb4)
                                    float var_19a8 = (*(rax_36 + 0xb0))[0]
                                    float var_19a0_1 = (*(rax_36 + 0xb8))[0]
                                    float var_19a4_1 = zmm1_2[0]
                                    
                                    if (not(cond:18_1))
                                        rax_36 = zx.q(*(arg1 + 0xa8))
                                        
                                        if (rax_36.d s> 8)
                                            sub_14149c680(&var_1748, rax_36.d)
                                            rax_36 = zx.q(*(arg1 + 0xa8))
                                        
                                        int32_t i_3 = 0
                                        
                                        if (rax_36.d s> 0)
                                            int64_t rdi_15 = 0
                                            
                                            do
                                                rax_36 = *(arg1 + 0xa0)
                                                
                                                if (not(zmm12_1[0] f<= *(rdi_15 + rax_36 + 0x2bc)))
                                                    int64_t var_1808_1 = 0
                                                    int32_t var_17f8_1 = 0
                                                    int32_t var_17f4_1 = 6
                                                    int64_t var_1768_1 = 0
                                                    int32_t var_1758_1 = 0
                                                    int32_t var_1754_1 = 8
                                                    void var_1868
                                                    zmm7_2, zmm8_2, zmm9_2, zmm12_1 = sub_1414819b0(
                                                        &var_19a8, rax_36 + 0xbf0 + rdi_15, 
                                                        &var_1868, zmm7_2, zmm8_2, zmm9_2)
                                                    int64_t i_17 = sx.q(i_15)
                                                    int32_t i_16 = (i_17 + 1).d
                                                    i_15 = i_16
                                                    
                                                    if (i_16 s> var_e34_1)
                                                        sub_14149bed0(&var_1748, i_17.d)
                                                    
                                                    void* rcx_62 = &var_1748
                                                    
                                                    if (var_e48_1 != 0)
                                                        rcx_62 = var_e48_1
                                                    
                                                    sub_1413be260(rcx_62 + i_17 * 0x120, &var_1868)
                                                    
                                                    if (var_1768_1 != 0)
                                                        sub_140a74f90(var_1768_1)
                                                    
                                                    if (var_1808_1 != 0)
                                                        sub_140a74f90(var_1808_1)
                                                
                                                i_3 += 1
                                                rdi_15 += 0x5240
                                            while (i_3 s< *(arg1 + 0xa8))
                                            
                                            r12_2 = arg1
                                            rdi_14 = arg2
                                
                                if (data_1439b6e08 != 0 || (*(*(rdi_14 + 0x20) + 0x139) & 8) != 0)
                                    rax_36.b = 1
                                else
                                    rax_36.b = 0
                                
                                if (r15_2 != 1 && (r15_2 != 0 || rax_36.b != 0))
                                    void* i_9 = sub_141226dd0(rdi_14, 0)
                                    void* i_4 = i_9
                                    
                                    if (i_9 != 0)
                                        do
                                            if ((*(i_4 + 0x34) & 1) != 0
                                                    && ((*(i_4 + 0x34) u>> 7).b & 1) == 0 && (
                                                    var_1a78_1 == 0
                                                    || (*(*(*(i_4 + 8) + 8) + 0x37) & 8) != 0))
                                                void* rdx_31 = *(i_4 + 8)
                                                void* r14_9 = *(rdx_31 + 8)
                                                
                                                if (i_15 == 0)
                                                    var_1ab8.b = 0
                                                    sub_141479710(r13_2, rdx_31, arg1 + 0xa0, 
                                                        (*(r12_2 + 0x3b0)).b)
                                                else
                                                    int32_t rdi_16 = 0
                                                    
                                                    if (i_15 s> 0)
                                                        while (true)
                                                            void* rcx_70 = &var_1748
                                                            
                                                            if (var_e48_1 != 0)
                                                                rcx_70 = var_e48_1
                                                            
                                                            if (sub_141f8d780(
                                                                    rcx_70 + sx.q(rdi_16) * 0x120, 
                                                                    r14_9 + 0xc0, r14_9 + 0xcc) != 0)
                                                                break
                                                            
                                                            rdi_16 += 1
                                                            
                                                            if (rdi_16 s>= i_15)
                                                                goto label_141488c92
                                                        
                                                        var_1ab8.b = 0
                                                        sub_141479710(r13_2, *(i_4 + 8), 
                                                            arg1 + 0xa0, (*(r12_2 + 0x3b0)).b)
                                            
                                        label_141488c92:
                                            i_4 = *(i_4 + 0x18)
                                        while (i_4 != 0)
                                        
                                        r15_2 = var_1a74
                                
                                if (r15_2 != 0)
                                    void* i_10 = sub_141226e00(arg2, 0)
                                    void* i_5 = i_10
                                    
                                    if (i_10 != 0)
                                        do
                                            if ((*(i_5 + 0x34) & 1) != 0
                                                    && ((*(i_5 + 0x34) u>> 7).b & 1) == 0 && (
                                                    var_1a78_1 == 0
                                                    || (*(*(*(i_5 + 8) + 8) + 0x37) & 8) != 0))
                                                void* rdx_35 = *(i_5 + 8)
                                                void* r14_10 = *(rdx_35 + 8)
                                                
                                                if (i_15 == 0)
                                                    var_1ab8.b = 0
                                                    sub_141479710(r13_2, rdx_35, arg1 + 0xa0, 
                                                        (*(r12_2 + 0x3b0)).b)
                                                else
                                                    int32_t rdi_17 = 0
                                                    
                                                    if (i_15 s> 0)
                                                        while (true)
                                                            void* rcx_77 = &var_1748
                                                            
                                                            if (var_e48_1 != 0)
                                                                rcx_77 = var_e48_1
                                                            
                                                            if (sub_141f8d780(
                                                                    rcx_77 + sx.q(rdi_17) * 0x120, 
                                                                    r14_10 + 0xc0, r14_10 + 0xcc) != 0)
                                                                break
                                                            
                                                            rdi_17 += 1
                                                            
                                                            if (rdi_17 s>= i_15)
                                                                goto label_141488d72
                                                        
                                                        var_1ab8.b = 0
                                                        sub_141479710(r13_2, *(i_5 + 8), 
                                                            arg1 + 0xa0, (*(r12_2 + 0x3b0)).b)
                                            
                                        label_141488d72:
                                            i_5 = *(i_5 + 0x18)
                                        while (i_5 != 0)
                                        
                                        r15_2 = var_1a74
                                
                                void* rdi_18 = &var_1748
                                int32_t i_12 = i_15
                                
                                if (var_e48_1 != 0)
                                    rdi_18 = var_e48_1
                                
                                if (i_12 != 0)
                                    void* rdi_19 = rdi_18 + 0x60
                                    int32_t i_6
                                    
                                    do
                                        int64_t rcx_81 = *(rdi_19 + 0xa0)
                                        
                                        if (rcx_81 != 0)
                                            sub_140a74f90(rcx_81)
                                        
                                        int64_t rcx_82 = *rdi_19
                                        
                                        if (rcx_82 != 0)
                                            sub_140a74f90(rcx_82)
                                        
                                        rdi_19 += 0x120
                                        i_6 = i_12
                                        i_12 -= 1
                                    while (i_6 != 1)
                                
                                if (var_e48_1 != 0)
                                    sub_140a74f90(var_e48_1)
                            
                            if (r15_2 != 1)
                            label_141488ea6:
                                int64_t rsi_6 = sx.q(rdi_1[3].d)
                                int32_t rax_67 = (rsi_6 + 1).d
                                rdi_1[3].d = rax_67
                                
                                if (rax_67 s> *(rdi_1 + 0x1c))
                                    sub_14083a310(&rdi_1[2], rsi_6.d)
                                
                                result = rdi_1[2]
                                *(result + (rsi_6 << 3)) = r13_2
                            else
                                char r11_1
                                
                                if (r13_2[0xc2].d s> 0 || *(r13_2 + 0x84c) s> 0
                                        || r13_2[0xcc].d s> 0)
                                    r11_1 = 1
                                else
                                    r11_1 = 0
                                
                                void* r9_4 = *(r12_2 + 8)
                                result = zx.q(*(r9_4 + 0x1ac0))
                                int32_t* rcx_89
                                
                                if (result.d == *(r9_4 + 0x1aec))
                                label_141488e94:
                                    rcx_89 = nullptr
                                else
                                    void* r8_14 = r9_4 + 0x1af0
                                    void* rdx_39 = *(r8_14 + 8)
                                    int64_t r10_1 = sx.q(r13_2[0xb8][5].d)
                                    
                                    if (rdx_39 != 0)
                                        r8_14 = rdx_39
                                    
                                    result = zx.q(
                                        *(r8_14 + (((sx.q(*(r9_4 + 0x1b00)) - 1) & r10_1) << 2)))
                                    
                                    if (result.d == 0xffffffff)
                                    label_141488e94_1:
                                        rcx_89 = nullptr
                                    else
                                        while (true)
                                            rcx_89 = sx.q(result.d) * 0x290 + *(r9_4 + 0x1ab8)
                                            
                                            if (*rcx_89 == r10_1.d)
                                                break
                                            
                                            result = zx.q(rcx_89[0xa0])
                                            
                                            if (result.d == 0xffffffff)
                                                goto label_141488e94_2
                                        
                                        if (result.d == 0xffffffff)
                                        label_141488e94_2:
                                            rcx_89 = nullptr
                                
                                rcx_89[0x9f].b = r11_1
                                
                                if (r11_1 != 0)
                                    goto label_141488ea6
                            
                            var_19f8_1 += 1
                            cond:20_1 = var_1a50_1 + 1 s< var_1a4c_1
                            rsi_1 = arg2
                            r14_4 = var_19f0_1
                            result_4 = result_5
                            var_1a50_1 += 1
                            r13_2 = nullptr
                        while (cond:20_1)
                        zmm10_1 = var_1a34_1
                        result_3 = result_8
                        zmm11 = var_1a30_1
                    
                    zmm0 = var_1a2c_1
                    rdx_8 = var_19c8_1 + 1
                    r9 = zx.q(rax_6)
                    r8_2 = var_1930_1
                    var_19c8_1 = rdx_8
                while (rdx_8 s< result_1)
        
        if (var_1880_1 != 0)
            result = sub_140a74f90(var_1880_1)

void* rbx_6 = &var_e28
int32_t i_13 = result_2

if (var_108 != 0)
    rbx_6 = var_108

if (i_13 != 0)
    void* rbx_7 = rbx_6 + 0x130
    int32_t i_7
    
    do
        int64_t rcx_93 = *(rbx_7 + 0xa0)
        
        if (rcx_93 != 0)
            result = sub_140a74f90(rcx_93)
        
        int64_t rcx_94 = *rbx_7
        
        if (rcx_94 != 0)
            result = sub_140a74f90(rcx_94)
        
        rbx_7 += 0x230
        i_7 = i_13
        i_13 -= 1
    while (i_7 != 1)

if (var_108 != 0)
    result = sub_140a74f90(var_108)

__security_check_cookie(rax_1 ^ &var_1ad8)
return result
