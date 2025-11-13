// 函数: sub_1407bd270
// 地址: 0x1407bd270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = data_14399f5c0
int32_t var_1e8
sub_14077d160(&var_1e8, arg2)
int64_t result_1
int64_t result = result_1
void* rsi = *(result + 8)
void* r14_1

if (rsi != 0)
    result = *(rsi + 0x778)
    r14_1 = *(result + 0x98)

int32_t var_1bc
void* var_1b0
int32_t var_1a4
void* var_198
int32_t var_18c
void* var_180
int32_t var_174
void* var_168
int32_t result_2
void* var_150

if (rsi == 0 || r14_1 == 0 || *(r14_1 + 0xb0) u<= 0 || *(rsi + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_10 = var_1b0
            i += 1
            var_1b0 = rdx_10 + (sx.q(var_1bc) << 2)
            *rdx_10 = 0
            void* rdx_11 = var_198
            var_198 = rdx_11 + (sx.q(var_1a4) << 2)
            *rdx_11 = zmm6.d
            void* rdx_12 = var_180
            var_180 = rdx_12 + (sx.q(var_18c) << 2)
            *rdx_12 = zmm6:4.d
            void* rdx_13 = var_168
            var_168 = rdx_13 + (sx.q(var_174) << 2)
            *rdx_13 = zmm6:8.d
            void* rdx_14 = var_150
            result = sx.q(result_2)
            var_150 = rdx_14 + (result << 2)
            *rdx_14 = zmm6:0xc.d
        while (i s< *(arg2 + 0x40))
else
    int32_t i_1 = 0
    TEB* gsbase
    
    if (data_143ce2630
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce2630)
        
        if (data_143ce2630 == 0xffffffff)
            int64_t arg_18
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce2608 = arg_18
            data_143ce2610 = data_14396f138
            data_143ce2618 = data_14396f140
            data_143ce261a = 0xffffffff
            data_143ce2620 = 0
            data_143ce2628 = 0
            atexit(sub_142cb2940)
            _Init_thread_footer(&data_143ce2630)
    
    int32_t r14_2 = *(r14_1 + 0xb0)
    int64_t var_210_1 = data_14396f0e8
    int16_t rax_3 = data_14396f0f0
    int64_t var_218 = arg3
    int16_t var_208_1 = rax_3
    int32_t var_206_1 = 0xffffffff
    int64_t var_200_1 = 0
    int64_t var_1f8_1 = 0
    void* var_148
    void var_c8
    sub_14077dbe0(&var_148, *(rsi + 0x778), sub_140745220(&var_c8, &var_218))
    void var_98
    int128_t zmm6_1
    result, zmm6_1 = sub_14077dde0(&var_98, *(rsi + 0x778), sub_140745220(&var_c8, &data_143ce2608))
    
    if (*(arg2 + 0x40) s> 0)
        void* rsi_1 = var_148
        
        do
            void* var_1d0
            int32_t* rdx_4 = var_1d0
            char r8_2 = 0
            int128_t var_228_1 = zmm6_1
            int32_t var_1c8
            var_1d0 = &rdx_4[sx.q(var_1c8)]
            int64_t rax_7 = sx.q(*rdx_4)
            
            if (rax_7.d s>= 0 && rax_7.d s< r14_2)
                int64_t var_110
                int64_t var_108
                int64_t var_100
                int64_t var_f8
                void* rcx_7
                
                if (var_110 != 0 && var_108 != 0 && var_100 != 0 && var_f8 != 0)
                    rcx_7 = *(rsi_1 + 0x98)
                
                int128_t var_238
                
                if (var_110 == 0 || var_108 == 0 || var_100 == 0 || var_f8 == 0 || rcx_7 == 0
                        || rax_7.d u>= *(rcx_7 + 0xb0))
                    var_238.d = zmm6.d
                    var_238:4.d = zmm6:4.d
                    var_238:8.d = zmm6:8.d
                    var_238:0xc.d = zmm6:0xc.d
                else
                    var_238.d = (*(var_110 + (rax_7 << 2))).d
                    var_238:4.d = *(var_108 + (rax_7 << 2))
                    var_238:8.d = (*(var_100 + (rax_7 << 2))).d
                    var_238:0xc.d = *(var_f8 + (rax_7 << 2))
                
                r8_2 = 1
                var_228_1 = var_238
            
            int32_t* rdx_5 = var_1b0
            int64_t rax_8 = sx.q(var_1bc)
            var_1b0 = &rdx_5[rax_8]
            i_1 += 1
            *rdx_5 = sbb.d(rax_8.d, rax_8.d, r8_2 != 0)
            int32_t* rdx_6 = var_198
            var_198 = &rdx_6[sx.q(var_1a4)]
            *rdx_6 = var_228_1.d.d
            int32_t* rdx_7 = var_180
            var_180 = &rdx_7[sx.q(var_18c)]
            *rdx_7 = var_228_1:4.d.d
            int32_t* rdx_8 = var_168
            var_168 = &rdx_8[sx.q(var_174)]
            *rdx_8 = var_228_1:8.d.d
            int32_t* rdx_9 = var_150
            result = sx.q(result_2)
            var_150 = &rdx_9[result]
            *rdx_9 = var_228_1:0xc.d.d
        while (i_1 s< *(arg2 + 0x40))
    
    int64_t var_70
    
    if (var_70 != 0)
        result = sub_140a74f90(var_70)
    
    int64_t var_120
    
    if (var_120 != 0)
        result = sub_140a74f90(var_120)
    
    if (var_200_1 != 0)
        return sub_140a74f90(var_200_1)
return result
