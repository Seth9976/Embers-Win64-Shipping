// 函数: sub_14227e7d0
// 地址: 0x14227e7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
uint64_t result = sub_141efce60(arg1, arg2)

if ((*(arg1 + 0x8a) & 1) != 0)
    float zmm1[0x4] = *(arg1 + 0x1d0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t rcx = zx.q(data_14401b1a0)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    int64_t rcx_1 = *(ThreadLocalStoragePointer + (rcx << 3))
    float var_1f0 = zmm1[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
    bool cond:0_1 = data_143f52750 s> *(0x14 + rcx_1)
    float var_1ec_1 = temp0_1[0]
    float var_1e8_1 = temp0_2[0]
    void* i_2 = nullptr
    int32_t var_1d8_1 = 0
    
    if (cond:0_1)
        _Init_thread_header(&data_143f52750)
        
        if (data_143f52750 == 0xffffffff)
            sub_140b58170(&data_143f52748, "AddForceOverlap", 1)
            _Init_thread_footer(&data_143f52750)
    
    void var_1f8
    void var_198
    sub_141eb54c0(&var_198, data_143f52748, &var_1f8, 0, nullptr)
    
    if ((*(arg1 + 0x1fc) & 2) != 0)
        sub_141eb8b10(&var_198, arg1[0x14])
    
    void* rax_3 = arg1[0x15]
    int32_t var_1c4_1 = arg1[0x3e].d
    int32_t var_1c8 = 2
    
    if (rax_3 == 0)
        rax_3 = sub_141ee69e0(arg1)
    
    int512_t zmm2_1
    int512_t zmm3_1
    zmm2_1, zmm3_1 =
        sub_141ec85d0(rax_3, &i_2, &var_1f0, &data_14399f720, &arg1[0x43], &var_1c8, &var_198)
    int32_t rax_4 = var_1d8_1
    void* r8_3 = nullptr
    void* var_1a8_1 = nullptr
    int32_t var_1a0_1 = 0
    int32_t var_19c_1 = 1
    void var_1b0
    
    if (rax_4 s> 1)
        sub_140809a30(&var_1b0, rax_4)
        rax_4 = var_1d8_1
        r8_3 = var_1a8_1
    
    void* i = i_2
    
    for (void* r14_1 = i + sx.q(rax_4) * 0x18; i != r14_1; i += 0x18)
        int64_t j = sub_140d3c6e0(i + 8)
        r8_3 = var_1a8_1
        
        if (j != 0)
            void* r9_1 = &var_1b0
            
            if (r8_3 != 0)
                r9_1 = r8_3
            
            void* rdx_5 = r9_1
            void* rax_6 = r9_1 + (sx.q(var_1a0_1) << 3)
            
            if (r9_1 != rax_6)
                while (*rdx_5 != j)
                    rdx_5 += 8
                    
                    if (rdx_5 == rax_6)
                        goto label_14227e9bd
            
            if (r9_1 == rax_6 || ((rdx_5 - r9_1) s>> 3).d == 0xffffffff)
            label_14227e9bd:
                int64_t rsi_1 = sx.q(var_1a0_1)
                int32_t rax_7 = (rsi_1 + 1).d
                var_1a0_1 = rax_7
                
                if (rax_7 s> var_19c_1)
                    sub_140809610(&var_1b0, rsi_1.d)
                    r8_3 = var_1a8_1
                
                void* rcx_12 = &var_1b0
                
                if (r8_3 != 0)
                    rcx_12 = r8_3
                
                *(rcx_12 + (rsi_1 << 3)) = j
                r8_3 = var_1a8_1
    
    void* r12_1 = &var_1b0
    int64_t r15_1 = 0
    
    if (r8_3 != 0)
        r12_1 = r8_3
    
    int64_t rcx_13 = sx.q(var_1a0_1) << 3
    result = rcx_13 + r12_1
    uint64_t rcx_14 = rcx_13 u>> 3
    
    if (r12_1 u> result)
        rcx_14 = 0
    
    if (rcx_14 != 0)
        do
            int64_t* rsi_2 = *r12_1
            zmm3_1.o = arg1[0x40].d
            zmm2_1.o = arg1[0x3e].d
            float var_1c0_1 = var_1e8_1
            int32_t* var_210_1
            var_210_1.b = 0
            var_1c8.q = var_1f0.q
            void* var_218_2
            var_218_2.d = zx.d(*(arg1 + 0x1f4))
            result = (*(*rsi_2 + 0x5e0))(rsi_2, &var_1c8, zmm2_1, zmm3_1, var_218_2, var_210_1)
            void* r14_2 = rsi_2[0x14]
            
            if (r14_2 != 0)
                int64_t** i_4 = nullptr
                int32_t var_5c_1 = 0x18
                int32_t result_1 = 0
                void* rax_11 = sub_14254ab60()
                void* rdi_1
                
                if (rax_11 == 0)
                    rdi_1 = nullptr
                else
                    void* rax_12 = sub_142459c10()
                    
                    if (rax_12 == 0)
                        rdi_1 = nullptr
                    else
                        int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                        
                        if (rax_13.d s> *(rax_11 + 0x38)
                                || *(*(rax_11 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
                            rdi_1 = nullptr
                        else
                            rdi_1 = rax_11
                
                void var_128
                void* r8_5 = &var_128
                
                if (rdi_1 != sub_142459c10())
                    sub_1419f71f0(r14_2, rax_11, r8_5)
                else
                    sub_1419f6fe0(r14_2, rax_11, r8_5)
                
                int64_t** i_3 = i_4
                int64_t** i_1 = &var_128
                result = sx.q(result_1)
                
                if (i_3 != 0)
                    i_1 = i_3
                
                for (; i_1 != &i_1[result]; i_1 = &i_1[1])
                    int64_t* r9_2 = *i_1
                    
                    if (r9_2[0x16] == rsi_2)
                        zmm3_1.o = arg1[0x40].d
                        zmm2_1.o = arg1[0x3e].d
                        var_218_2.d = zx.d(*(arg1 + 0x1f4))
                        result = (*(*r9_2 + 0x4a8))(r9_2, &var_1f0, zmm2_1, zmm3_1, var_218_2)
                        i_3 = i_4
                        break
                
                if (i_3 != 0)
                    result = sub_140a74f90(i_3)
            
            r12_1 += 8
            r15_1 += 1
        while (r15_1 != rcx_14)
        
        r8_3 = var_1a8_1
    
    if (r8_3 != 0)
        result = sub_140a74f90(r8_3)
    
    int64_t var_138
    
    if (var_138 != 0)
        result = sub_140a74f90(var_138)
    
    int64_t var_158
    
    if (var_158 != 0)
        result = sub_140a74f90(var_158)
    
    void* i_5 = i_2
    
    if (i_5 != 0)
        result = sub_140a74f90(i_5)

__security_check_cookie(rax_1 ^ &var_238)
return result
