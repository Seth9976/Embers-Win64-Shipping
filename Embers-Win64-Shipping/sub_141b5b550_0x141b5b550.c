// 函数: sub_141b5b550
// 地址: 0x141b5b550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t r12 = *(arg1 + 0x238)
void* r14 = arg2
char rax_2 = sub_140a80f40()
int128_t zmm6

if (rax_2 == 0)
    if (data_143f138f4 != rax_2)
    label_141b5b5e0:
        void var_1c8
        int64_t* rax_4 = sub_141b53010(&var_1c8, nullptr, 0xff)
        *(*rax_4 + 0x10) = r12
        void* rcx_2 = *rax_4
        int32_t r8_1 = rax_4[2].d
        int64_t* rdx = rax_4[1]
        int64_t* rbx_1 = *(rcx_2 + 0x20)
        int64_t* var_2a8_1 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = var_2a8_1
        
        zmm6 = sub_1405a5630(rcx_2, rdx, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax_5 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_5 == 1)
                zmm6 = sub_140a2f6e0(var_2a8_1)
    else if (data_143de5480 != rax_2)
        uint32_t rax_3
        rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_3.b == 0)
            goto label_141b5b5e0

if (sub_140e0e0e0() != 0)
    void* rsi_1 = *(arg1 + 0x228)
    int32_t i = 0
    
    if (*(rsi_1 + 0x210) s> 0)
        int64_t* rbx_2 = nullptr
        
        do
            int64_t* rcx_4 = *(rbx_2 + *(rsi_1 + 0x208))
            (*(*rcx_4 + 8))(rcx_4)
            i += 1
            rbx_2 = &rbx_2[1]
        while (i s< *(rsi_1 + 0x210))

void* var_238
sub_140e149c0(*(arg1 + 8), &var_238)
int32_t i_3 = 0

if (*(r14 + 0x18) s> 0)
    uint64_t rdi_2 = zx.q(data_14401b1a0)
    void** rbx_3 = nullptr
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    int128_t zmm8 = zx.o(0)
    int128_t var_48_1 = zmm6
    int128_t zmm7
    int128_t var_58_1 = zmm7
    void** var_298_1 = nullptr
    int32_t i_1
    
    do
        int64_t* rbx_4 = *(rbx_3 + *(r14 + 0x10))
        void* r14_1 = rbx_4[8]
        
        if (r14_1 != 0)
        label_141b5b736:
            void* rax_11 = r14_1 + 0x7a8
            
            if (not(zmm8.d f!= *(r14_1 + 0x7a8)))
                rax_11 = r14_1 + 0x7a0
            
            float zmm1[0x4] = *(rax_11 + 4)
            
            if (not((*rax_11).d f<= zmm8.d) && not(zmm1[0] f<= zmm8.d))
                int64_t zmm9_1
                zmm8, zmm9_1 = sub_140de6b30(*(arg1 + 0x220), rbx_4, zmm1)
                sub_140dc02b0(var_238)
                char r15_1 = *(*(arg1 + 0x220) + 0x29)
                
                if (data_143f2f100 s> *(0x14 + *(ThreadLocalStoragePointer + (rdi_2 << 3))))
                    _Init_thread_header(&data_143f2f100)
                    
                    if (data_143f2f100 == 0xffffffff)
                        int64_t* rcx_51 = data_143db18d0
                        
                        if (rcx_51 == 0)
                            sub_140a53c40()
                            rcx_51 = data_143db18d0
                        
                        int64_t r8_14
                        r8_14.b = 1
                        data_143f2f0f8 = (*(*rcx_51 + 0xb0))(rcx_51, u"r.VSync", r8_14)
                        _Init_thread_footer(&data_143f2f100)
                
                int64_t* rcx_9 = data_143f2f0f8
                int32_t rax_15
                rax_15.b = (*(*rcx_9 + 0x90))(rcx_9) != 0
                sub_140e21900(*(arg1 + 0x220))
                int32_t var_2ac
                sub_140865c40(arg1 + 0xb8, &var_2ac, r14_1)
                int64_t rax_16 = sx.q(var_2ac)
                void* const rdi_3
                
                if (rax_16.d == 0xffffffff)
                    rdi_3 = nullptr
                else
                    rdi_3 = *(arg1 + 0xb8) + rax_16 * 0x18
                
                int64_t* rcx_12 = data_143f0f180
                void* rdi_4 = *(rdi_3 + 8)
                int32_t rax_19
                rax_19.b = (*(*rcx_12 + 0x3c8))(rcx_12, *(rdi_4 + 0x50)) != 0x21
                *(rdi_4 + 0xc8) = rax_19.b
                rax_19.b *= 2
                *(r14_1 + 0x77a) &= 0xfd
                *(r14_1 + 0x77a) |= rax_19.b
                
                if (not(zmm8.d f!= *(r14_1 + 0x7a8)))
                    char rax_20 = sub_140e1abc0()
                    zmm8, zmm9_1 =
                        sub_141b50d60(arg1, rdi_4, *(rdi_4 + 0xa0), *(rdi_4 + 0xa4), rax_20)
                
                uint128_t zmm0
                zmm0.q = data_143dbb3b8 f- data_143de5880
                zmm1 = _mm_cvtpd_ps(zx.o(data_14399f938))
                int64_t* var_268_1 = rbx_4
                char var_24c_1 = r15_1 | rax_15.b
                char var_24b_1 = 0
                zmm0 = _mm_cvtpd_ps(zmm0)
                float var_254_1 = zmm1[0]
                int32_t var_258_1 = zmm0.d
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                bool cond:6_1 = data_143de5429 == 0
                zmm0.q = float.d(performanceCount)
                char rax_21 = *(arg1 + 0x2f0)
                zmm0.q = zmm0.q f* data_143d796f8
                zmm0.q = zmm0.q f+ zmm9_1
                zmm0.q = zmm0.q f- data_143de5880
                int32_t var_250_1 = _mm_cvtpd_ps(zmm0).d
                
                if (not(cond:6_1) && data_143de5426 == 0 && data_143f0f1d4 == 0)
                    zmm6 = arg1.o
                    void* var_200_1 = rdi_4
                    zmm7 = r14_1.o
                    int128_t var_228 = zmm6
                    int128_t var_218_1 = zmm7
                    uint64_t var_208_1 = var_250_1.q
                    char var_2c8
                    
                    if (sub_140a80f40() == 0)
                        uint32_t rax_23
                        
                        if (data_143f138f4 == 0 && data_143de5480 != 0)
                            rax_23.b = GetCurrentThreadId() == data_143de5470
                        
                        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_23.b == 0))
                            void var_1b0
                            void** rax_24
                            int128_t zmm6_1
                            rax_24, zmm6_1 = sub_141b53160(&var_1b0, nullptr, 0xff)
                            void* rcx_19 = *rax_24
                            *(rcx_19 + 0x10) = zmm6_1
                            *(rcx_19 + 0x20) = zmm7
                            *(rcx_19 + 0x30) = var_208_1.o
                            void* rcx_20 = *rax_24
                            int32_t r8_5 = rax_24[2].d
                            int64_t* rdx_8 = rax_24[1]
                            int64_t* rbx_5 = *(rcx_20 + 0x48)
                            int64_t* var_2a0_1 = rbx_5
                            void* rdi_5 = &rbx_5[9]
                            
                            if (rbx_5 != 0)
                                *rdi_5 += 1
                                rbx_5 = var_2a0_1
                            
                            sub_141b66b40(rcx_20, rdx_8, r8_5, 1)
                            
                            if (rbx_5 != 0)
                                int32_t rax_25 = *rdi_5
                                *rdi_5 -= 1
                                
                                if (rax_25 == 1)
                                    sub_140a2f6e0(var_2a0_1)
                        else
                            int128_t var_1f8 = zmm6
                            uint128_t var_1d8_1 = var_208_1.o
                            int128_t var_1e8_1 = zmm7
                            var_2c8.q = &var_1f8
                            zmm8 = sub_141b58e10(arg1, &data_143f02b98, rdi_4, rbx_4, var_2c8)
                    else
                        var_2c8.q = &var_228
                        zmm8 = sub_141b58e10(arg1, &data_143f02b98, rdi_4, rbx_4, var_2c8)
                
                *(arg1 + 0x2c) += 1
                r15_1 = 0
                int32_t rax_26 = *(arg1 + 0x20)
                int32_t rcx_22 = *(arg1 + 0x2c)
                int64_t rdi_6 = sx.q(rax_26 - 1)
                
                if (rax_26 - 1 s>= 0)
                    int64_t rbx_7 = rdi_6 << 4
                    int64_t temp4_1
                    
                    do
                        int64_t rcx_23 = *(arg1 + 0x18)
                        
                        if (*(rbx_7 + rcx_23 + 8) == 0)
                            r15_1 = 1
                        else
                            int64_t* rcx_24 = *(rbx_7 + rcx_23)
                            
                            if (rcx_24 == 0)
                                r15_1 = 1
                            else if ((*(*rcx_24 + 0x50))(rcx_24, r14_1, rdi_4 + 0x50) == 0)
                                r15_1 = 1
                        
                        rbx_7 -= 0x10
                        temp4_1 = rdi_6
                        rdi_6 -= 1
                    while (temp4_1 - 1 s>= 0)
                    rcx_22 = *(arg1 + 0x2c)
                
                *(arg1 + 0x2c) = rcx_22 - 1
                
                if (r15_1 != 0)
                    sub_140599630(arg1 + 0x18, 0)
                
                if (rax_21 != 0)
                    zmm8 = sub_1419a21e0(0)
                
                ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
                rdi_2 = zx.q(data_14401b1a0)
        else if (*rbx_4 != r14_1)
            void* rax_10 = rbx_4[1]
            
            if (rax_10 != 0 && *(rax_10 + 8) s> r14_1.d)
                r14_1 = rbx_4[2]
                
                if (r14_1 != 0)
                    goto label_141b5b736
        
        i_1 = i_3 + 1
        r14 = arg2
        rbx_3 = &var_298_1[2]
        i_3 = i_1
        var_298_1 = rbx_3
    while (i_1 s< *(r14 + 0x18))

int64_t var_278 = r12
char rax_32 = sub_140a80f40()

if (rax_32 != 0)
    sub_141b5cea0(&data_143f02b98, r14, r12)
else if (data_143f138f4 != rax_32)
label_141b5bb33:
    void var_198
    int64_t* rax_34 = sub_141b532b0(&var_198, nullptr, 0xff)
    *(*rax_34 + 0x10) = r14.o
    void* rcx_28 = *rax_34
    int32_t r8_8 = rax_34[2].d
    int64_t* rdx_11 = rax_34[1]
    int64_t* rbx_9 = *(rcx_28 + 0x28)
    int64_t* var_290_1 = rbx_9
    int32_t* rdi_7 = &rbx_9[9]
    
    if (rbx_9 != 0)
        *rdi_7 += 1
        rbx_9 = var_290_1
    
    sub_1405e48c0(rcx_28, rdx_11, r8_8, 1)
    
    if (rbx_9 != 0)
        int32_t rax_35 = *rdi_7
        *rdi_7 -= 1
        
        if (rax_35 == 1)
            sub_140a2f6e0(var_290_1)
else if (data_143de5480 == rax_32)
    sub_141b5cea0(&data_143f02b98, r14, r12)
else
    uint32_t rax_33
    rax_33.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_33.b == 0)
        goto label_141b5bb33
    
    sub_141b5cea0(&data_143f02b98, r14, r12)

if (*(arg1 + 0x2e8) s> 0)
    void* i_4 = nullptr
    int64_t rbx_10 = sx.q(*(arg1 + 0x2e8))
    void* rdi_8 = *(arg1 + 0x2e0)
    int32_t var_100_1 = rbx_10.d
    void var_168
    int32_t var_fc
    
    if (rbx_10.d != 0)
        sub_141b651d0(&var_168, rbx_10.d, 0)
        void* i_5 = &var_168
        void* rdx_13 = arg1 + 0x280
        
        if (rdi_8 != 0)
            rdx_13 = rdi_8
        
        if (i_4 != 0)
            i_5 = i_4
        
        memcpy(i_5, rdx_13, (rbx_10 * 0x30).d)
    else
        var_fc = 2
    
    if (sub_140a80f40() == 0)
        uint32_t rax_41
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_41.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_41.b == 0))
            void var_180
            void** rax_44 = sub_141b52ac0(&var_180, nullptr, 0xff)
            void* rbx_12 = *rax_44
            *(rbx_12 + 0x70) = 0
            
            if (i_4 == 0)
                memmove(rbx_12 + 0x10, &var_168, 0x60)
            
            int64_t rcx_48 = *(rbx_12 + 0x70)
            
            if (rcx_48 != 0)
                sub_140a74f90(rcx_48)
            
            *(rbx_12 + 0x70) = i_4
            i_4 = nullptr
            *(rbx_12 + 0x78) = var_100_1
            *(rbx_12 + 0x7c) = var_fc
            int32_t var_100_3 = 0
            int32_t var_fc_2 = 2
            void* rcx_49 = *rax_44
            int32_t r8_13 = rax_44[2].d
            int64_t* rdx_16 = rax_44[1]
            int64_t* rbx_13 = *(rcx_49 + 0x88)
            int64_t* var_288_1 = rbx_13
            int32_t* rdi_13 = &rbx_13[9]
            
            if (rbx_13 != 0)
                *rdi_13 += 1
                rbx_13 = var_288_1
            
            sub_1417d4450(rcx_49, rdx_16, r8_13, 1)
            
            if (rbx_13 != 0)
                int32_t r15_2 = *rdi_13
                *rdi_13 -= 1
                
                if (r15_2 == 1)
                    sub_140a2f6e0(var_288_1)
        else
            void* i_6 = i_4
            int64_t var_98_1 = 0
            void var_f8
            
            if (i_6 == 0)
                memmove(&var_f8, &var_168, (i_6 + 0x60).d)
                
                if (var_98_1 != 0)
                    sub_140a74f90(var_98_1)
                    i_6 = i_4
            
            int32_t var_90_1 = var_100_1
            int32_t var_8c_1 = var_fc
            int32_t var_fc_1 = 2
            i_4 = nullptr
            int32_t var_100_2 = 0
            sub_141b4b170(&var_f8, &data_143f02b98)
            
            if (i_6 != 0)
                sub_140a74f90(i_6)
    else
        void* i_2 = &var_168
        
        if (i_4 != 0)
            i_2 = i_4
        
        for (void* rdi_11 = sx.q(var_100_1) * 0x30 + i_2; i_2 != rdi_11; i_2 += 0x30)
            int64_t* rcx_33 = *(i_2 + 0x20)
            (*(*rcx_33 + 0x28))(rcx_33, &data_143f02b98, i_2)
    
    if (i_4 != 0)
        sub_140a74f90(i_4)
    
    bool cond:5_1 = *(arg1 + 0x2ec) == 0
    *(arg1 + 0x2e8) = 0
    
    if (not(cond:5_1))
        sub_141b65820(arg1 + 0x280, 0)

int64_t rcx_36 = *(arg1 + 0x278)

if (rcx_36 != 0)
    sub_141b4f810(rcx_36)
    *(arg1 + 0x278) = 0

int64_t result = sub_140d9bd10(var_238)
int64_t* var_230

if (var_230 != 0)
    var_230[1].d -= 1
    
    if (var_230[1].d == 1)
        result = (**var_230)(var_230)
        int32_t temp2_1 = *(var_230 + 0xc)
        *(var_230 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_230 + 8))(var_230, 1)

__security_check_cookie(rax_1 ^ &var_2e8)
return result
