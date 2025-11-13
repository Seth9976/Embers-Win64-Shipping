// 函数: sub_1407bef10
// 地址: 0x1407bef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = data_14399f720.d
float zmm7[0x4] = data_14399f720:4.d
int128_t zmm8 = data_14399f720:8.d
int128_t zmm9 = data_14399f720:0xc.d
int32_t var_218
sub_14077d160(&var_218, arg2)
int64_t result_1
int64_t result = result_1
void* rsi = *(result + 8)
void* r14_1

if (rsi != 0)
    result = *(rsi + 0x778)
    r14_1 = *(result + 0x98)

int32_t var_1ec
void* var_1e0
int32_t var_1d4
void* var_1c8
int32_t var_1bc
void* var_1b0
int32_t var_1a4
void* var_198
int32_t result_2
void* var_180

if (rsi == 0 || r14_1 == 0 || *(r14_1 + 0xb0) u<= 0 || *(rsi + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_10 = var_1e0
            i += 1
            var_1e0 = rdx_10 + (sx.q(var_1ec) << 2)
            *rdx_10 = 0
            void* rdx_11 = var_1c8
            var_1c8 = rdx_11 + (sx.q(var_1d4) << 2)
            *rdx_11 = zmm6.d
            void* rdx_12 = var_1b0
            var_1b0 = rdx_12 + (sx.q(var_1bc) << 2)
            *rdx_12 = zmm7[0]
            void* rdx_13 = var_198
            var_198 = rdx_13 + (sx.q(var_1a4) << 2)
            *rdx_13 = zmm8.d
            void* rdx_14 = var_180
            result = sx.q(result_2)
            var_180 = rdx_14 + (result << 2)
            *rdx_14 = zmm9.d
        while (i s< *(arg2 + 0x40))
else
    int32_t i_1 = 0
    TEB* gsbase
    
    if (data_143ce2660
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce2660)
        
        if (data_143ce2660 == 0xffffffff)
            int64_t arg_18
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce2638 = arg_18
            data_143ce2640 = data_14396f138
            data_143ce2648 = data_14396f140
            data_143ce264a = 0xffffffff
            data_143ce2650 = 0
            data_143ce2658 = 0
            atexit(sub_142cb29a0)
            _Init_thread_footer(&data_143ce2660)
    
    int32_t r14_2 = *(r14_1 + 0xb0)
    int64_t var_240_1 = data_14396f0f8
    int16_t rax_3 = data_14396f100
    int64_t var_248 = arg3
    int16_t var_238_1 = rax_3
    int32_t var_236_1 = 0xffffffff
    int64_t var_230_1 = 0
    int64_t var_228_1 = 0
    void* var_178
    void var_f8
    sub_14077dbe0(&var_178, *(rsi + 0x778), sub_140745220(&var_f8, &var_248))
    void var_c8
    float zmm6_1[0x4]
    result, zmm6_1 = sub_14077dde0(&var_c8, *(rsi + 0x778), sub_140745220(&var_f8, &data_143ce2638))
    
    if (*(arg2 + 0x40) s> 0)
        void* rsi_1 = var_178
        
        do
            void* var_200
            int32_t* rdx_4 = var_200
            char r8_2 = 0
            float zmm0_1[0x4] = zmm6_1
            float zmm1_1[0x4] = zmm7
            int32_t zmm2_1 = zmm8.d
            float zmm3 = zmm9.d
            int32_t var_1f8
            var_200 = &rdx_4[sx.q(var_1f8)]
            int64_t rax_7 = sx.q(*rdx_4)
            
            if (rax_7.d s>= 0 && rax_7.d s< r14_2)
                int64_t var_140
                int64_t var_138
                int64_t var_130
                int64_t var_128
                void* rcx_7
                
                if (var_140 != 0 && var_138 != 0 && var_130 != 0 && var_128 != 0)
                    rcx_7 = *(rsi_1 + 0x98)
                
                float var_268_1
                
                if (var_140 == 0 || var_138 == 0 || var_130 == 0 || var_128 == 0 || rcx_7 == 0
                        || rax_7.d u>= *(rcx_7 + 0xb0))
                    var_268_1 = zmm6_1[0]
                    float var_264_2 = zmm7[0]
                    int32_t var_260_2 = zmm8.d
                    int32_t var_25c_2 = zmm9.d
                else
                    var_268_1 = (*(var_140 + (rax_7 << 2)))[0]
                    float var_264_1 = (*(var_138 + (rax_7 << 2)))[0]
                    float var_260_1 = (*(var_130 + (rax_7 << 2)))[0]
                    float var_25c_1 = (*(var_128 + (rax_7 << 2)))[0]
                
                zmm1_1 = var_268_1.o
                r8_2 = 1
                int96_t var_258_1 = zmm1_1[0].12
                zmm0_1 = zmm1_1
                zmm2_1 = var_258_1:8.d
                zmm1_1 = var_258_1:4.d
                zmm3 = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xff)[0]
                zmm0_1 = var_258_1.d
            
            int32_t* rdx_5 = var_1e0
            int64_t rax_8 = sx.q(var_1ec)
            var_1e0 = &rdx_5[rax_8]
            i_1 += 1
            *rdx_5 = sbb.d(rax_8.d, rax_8.d, r8_2 != 0)
            float* rdx_6 = var_1c8
            var_1c8 = &rdx_6[sx.q(var_1d4)]
            *rdx_6 = zmm0_1[0]
            int32_t* rdx_7 = var_1b0
            var_1b0 = &rdx_7[sx.q(var_1bc)]
            *rdx_7 = zmm1_1[0]
            int32_t* rdx_8 = var_198
            var_198 = &rdx_8[sx.q(var_1a4)]
            *rdx_8 = zmm2_1
            float* rdx_9 = var_180
            result = sx.q(result_2)
            var_180 = &rdx_9[result]
            *rdx_9 = zmm3
        while (i_1 s< *(arg2 + 0x40))
    
    int64_t var_a0
    
    if (var_a0 != 0)
        result = sub_140a74f90(var_a0)
    
    int64_t var_150
    
    if (var_150 != 0)
        result = sub_140a74f90(var_150)
    
    if (var_230_1 != 0)
        return sub_140a74f90(var_230_1)
return result
