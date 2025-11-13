// 函数: sub_1407c0db0
// 地址: 0x1407c0db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_1d8
sub_14077d160(&var_1d8, arg2)
int64_t result_1
int64_t result = result_1
void* rsi = *(result + 8)
void* r15_1

if (rsi != 0)
    result = *(rsi + 0x778)
    r15_1 = *(result + 0x98)

int32_t var_1ac
void* var_1a0
int32_t var_194
void* var_188
int32_t var_17c
void* var_170
int32_t var_164
void* var_158
int32_t result_2
void* var_140

if (rsi == 0 || r15_1 == 0 || *(r15_1 + 0xb0) u<= 0 || *(rsi + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_10 = var_1a0
            i += 1
            var_1a0 = rdx_10 + (sx.q(var_1ac) << 2)
            *rdx_10 = 0
            void* rdx_11 = var_188
            var_188 = rdx_11 + (sx.q(var_194) << 2)
            *rdx_11 = 0
            void* rdx_12 = var_170
            var_170 = rdx_12 + (sx.q(var_17c) << 2)
            *rdx_12 = 0
            void* rdx_13 = var_158
            var_158 = rdx_13 + (sx.q(var_164) << 2)
            *rdx_13 = 0
            void* rdx_14 = var_140
            result = sx.q(result_2)
            var_140 = rdx_14 + (result << 2)
            *rdx_14 = 0
        while (i s< *(arg2 + 0x40))
else
    int32_t i_1 = 0
    TEB* gsbase
    
    if (data_143ce2600
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce2600)
        
        if (data_143ce2600 == 0xffffffff)
            int64_t arg_18
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce25d8 = arg_18
            data_143ce25e0 = data_14396f138
            data_143ce25e8 = data_14396f140
            data_143ce25ea = 0xffffffff
            data_143ce25f0 = 0
            data_143ce25f8 = 0
            atexit(sub_142cb29e0)
            _Init_thread_footer(&data_143ce2600)
    
    int32_t r15_2 = *(r15_1 + 0xb0)
    int64_t var_200_1 = data_14396f0d8
    int16_t rax_3 = data_14396f0e0
    int64_t var_208 = arg3
    int16_t var_1f8_1 = rax_3
    int32_t var_1f6_1 = 0xffffffff
    int64_t var_1f0_1 = 0
    int64_t var_1e8_1 = 0
    void* var_138
    void var_b8
    sub_14077dbe0(&var_138, *(rsi + 0x778), sub_140745220(&var_b8, &var_208))
    void var_88
    result = sub_14077dde0(&var_88, *(rsi + 0x778), sub_140745220(&var_b8, &data_143ce25d8))
    
    if (*(arg2 + 0x40) s> 0)
        void* rsi_1 = var_138
        
        do
            void* var_1c0
            int32_t* rdx_4 = var_1c0
            char r8_2 = 0
            float var_218_1[0x4] = zx.o(0)
            int32_t var_1b8
            var_1c0 = &rdx_4[sx.q(var_1b8)]
            int64_t rax_7 = sx.q(*rdx_4)
            float zmm0_1[0x4]
            
            if (rax_7.d s>= 0 && rax_7.d s< r15_2)
                int64_t var_100
                int64_t var_f8
                int64_t var_f0
                int64_t var_e8
                void* rcx_7
                
                if (var_100 != 0 && var_f8 != 0 && var_f0 != 0 && var_e8 != 0)
                    rcx_7 = *(rsi_1 + 0x98)
                
                float zmm3[0x4]
                
                if (var_100 == 0 || var_f8 == 0 || var_f0 == 0 || var_e8 == 0 || rcx_7 == 0
                        || rax_7.d u>= *(rcx_7 + 0xb0))
                    zmm3 = zx.o(0)
                else
                    zmm3 = *(var_100 + (rax_7 << 2))
                    zmm0_1 = *(var_f8 + (rax_7 << 2))
                    int32_t zmm1_1 = *(var_f0 + (rax_7 << 2))
                    int32_t zmm2_1 = *(var_e8 + (rax_7 << 2))
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                    zmm3[0] = zmm0_1[0]
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                    zmm3[0] = zmm1_1
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                    zmm3[0] = zmm2_1
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                
                float var_218_2[0x4] = zmm3
                r8_2 = 1
                var_218_1 = zmm3
            
            int32_t* rdx_5 = var_1a0
            int64_t rax_8 = sx.q(var_1ac)
            zmm0_1 = var_218_1[0]
            var_1a0 = &rdx_5[rax_8]
            i_1 += 1
            *rdx_5 = sbb.d(rax_8.d, rax_8.d, r8_2 != 0)
            float* rdx_6 = var_188
            var_188 = &rdx_6[sx.q(var_194)]
            *rdx_6 = zmm0_1[0]
            float* rdx_7 = var_170
            var_170 = &rdx_7[sx.q(var_17c)]
            *rdx_7 = var_218_1[1][0]
            float* rdx_8 = var_158
            var_158 = &rdx_8[sx.q(var_164)]
            *rdx_8 = var_218_1[2][0]
            float* rdx_9 = var_140
            result = sx.q(result_2)
            var_140 = &rdx_9[result]
            *rdx_9 = var_218_1[3][0]
        while (i_1 s< *(arg2 + 0x40))
    
    int64_t var_60
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    int64_t var_110
    
    if (var_110 != 0)
        result = sub_140a74f90(var_110)
    
    if (var_1f0_1 != 0)
        return sub_140a74f90(var_1f0_1)
return result
