// 函数: sub_1407bfc70
// 地址: 0x1407bfc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = data_143dbb1f0.d
int128_t zmm7 = data_143dbb1f0:4.d
int32_t var_1a8
sub_14077d3e0(&var_1a8, arg2)
int64_t result_1
int64_t result = result_1
void* r14 = *(result + 8)
void* r15_1

if (r14 != 0)
    result = *(r14 + 0x778)
    r15_1 = *(result + 0x98)

int32_t var_17c
void* var_170
int32_t var_164
void* var_158
int32_t result_2
void* var_140

if (r14 == 0 || r15_1 == 0 || *(r15_1 + 0xb0) u<= 0 || *(r14 + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_8 = var_170
            i += 1
            var_170 = rdx_8 + (sx.q(var_17c) << 2)
            *rdx_8 = 0
            void* rdx_9 = var_158
            var_158 = rdx_9 + (sx.q(var_164) << 2)
            *rdx_9 = zmm6.d
            void* rdx_10 = var_140
            result = sx.q(result_2)
            var_140 = rdx_10 + (result << 2)
            *rdx_10 = zmm7.d
        while (i s< *(arg2 + 0x40))
else
    int32_t i_1 = 0
    TEB* gsbase
    
    if (data_143ce25a0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce25a0)
        
        if (data_143ce25a0 == 0xffffffff)
            int64_t arg_18
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce2578 = arg_18
            data_143ce2580 = data_14396f138
            data_143ce2588 = data_14396f140
            data_143ce258a = 0xffffffff
            data_143ce2590 = 0
            data_143ce2598 = 0
            atexit(sub_142cb29c0)
            _Init_thread_footer(&data_143ce25a0)
    
    int32_t r15_2 = *(r15_1 + 0xb0)
    int64_t var_1d0_1 = data_14396f0b8
    int16_t rax_3 = data_14396f0c0
    int64_t var_1d8 = arg3
    int16_t var_1c8_1 = rax_3
    int32_t var_1c6_1 = 0xffffffff
    int64_t var_1c0_1 = 0
    int64_t var_1b8_1 = 0
    void* var_138
    void var_d8
    sub_14077dec0(&var_138, *(r14 + 0x778), sub_140745220(&var_d8, &var_1d8))
    void var_a8
    int32_t zmm6_1
    result, zmm6_1 = sub_14077dde0(&var_a8, *(r14 + 0x778), sub_140745220(&var_d8, &data_143ce2578))
    
    if (*(arg2 + 0x40) s> 0)
        void* r11_1 = var_138
        
        do
            void* var_190
            int32_t* rdx_4 = var_190
            char r8_2 = 0
            int32_t zmm0_1 = zmm6_1
            int32_t zmm1_1 = zmm7.d
            int32_t var_188
            var_190 = &rdx_4[sx.q(var_188)]
            int64_t rax_7 = sx.q(*rdx_4)
            
            if (rax_7.d s>= 0 && rax_7.d s< r15_2)
                int64_t var_100
                int64_t var_f8
                void* rcx_7
                
                if (var_100 != 0 && var_f8 != 0)
                    rcx_7 = *(r11_1 + 0x98)
                
                if (var_100 == 0 || var_f8 == 0 || rcx_7 == 0 || rax_7.d u>= *(rcx_7 + 0xb0))
                    zmm0_1 = zmm6_1
                    zmm1_1 = zmm7.d
                else
                    zmm0_1 = *(var_100 + (rax_7 << 2))
                    zmm1_1 = *(var_f8 + (rax_7 << 2))
                
                r8_2 = 1
            
            int32_t* rdx_5 = var_170
            int64_t rax_8 = sx.q(var_17c)
            var_170 = &rdx_5[rax_8]
            i_1 += 1
            *rdx_5 = sbb.d(rax_8.d, rax_8.d, r8_2 != 0)
            int32_t* rdx_6 = var_158
            var_158 = &rdx_6[sx.q(var_164)]
            *rdx_6 = zmm0_1
            int32_t* rdx_7 = var_140
            result = sx.q(result_2)
            var_140 = &rdx_7[result]
            *rdx_7 = zmm1_1
        while (i_1 s< *(arg2 + 0x40))
    
    int64_t var_80
    
    if (var_80 != 0)
        result = sub_140a74f90(var_80)
    
    int64_t var_110
    
    if (var_110 != 0)
        result = sub_140a74f90(var_110)
    
    if (var_1c0_1 != 0)
        return sub_140a74f90(var_1c0_1)
return result
