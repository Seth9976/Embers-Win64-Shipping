// 函数: sub_1407bc780
// 地址: 0x1407bc780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_188
sub_14077d790(&var_188, arg2)
uint64_t result_1
uint64_t result = result_1
void* rsi = *(result + 8)
void* r14_1

if (rsi != 0)
    result = *(rsi + 0x778)
    r14_1 = *(result + 0x98)

int32_t var_144
void* var_138
int32_t result_2
void* var_120

if (rsi == 0 || r14_1 == 0 || *(rsi + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_9 = var_138
            i += 1
            var_138 = rdx_9 + (sx.q(var_144) << 2)
            *rdx_9 = 0
            void* rdx_10 = var_120
            result = sx.q(result_2)
            var_120 = rdx_10 + (result << 2)
            *rdx_10 = 0
        while (i s< *(arg2 + 0x40))
else
    int32_t arg_18
    TEB* gsbase
    
    if (data_143ce2390
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce2390)
        
        if (data_143ce2390 == 0xffffffff)
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce2368 = arg_18.q
            data_143ce2370 = data_14396f138
            data_143ce2378 = data_14396f140
            data_143ce237a = 0xffffffff
            data_143ce2380 = 0
            data_143ce2388 = 0
            atexit(sub_142cb2a80)
            _Init_thread_footer(&data_143ce2390)
    
    result = zx.q(*(r14_1 + 0xb0))
    arg_18 = result.d
    
    if (*(r14_1 + 0x40) s> 0)
        int64_t var_1b0_1 = data_14396f098
        int16_t rax_3 = data_14396f0a0
        int64_t var_1b8 = arg3
        int16_t var_1a8_1 = rax_3
        int32_t var_1a6_1 = 0xffffffff
        int64_t var_1a0_1 = 0
        int64_t var_198_1 = 0
        void var_b8
        void var_88
        sub_14077dd30(&var_88, *(rsi + 0x778), sub_140745220(&var_b8, &var_1b8))
        void* var_118
        result = sub_14077dde0(&var_118, *(rsi + 0x778), sub_140745220(&var_b8, &data_143ce2368))
        int32_t i_1 = 0
        
        if (*(arg2 + 0x40) s> 0)
            do
                void* var_158
                int32_t* rdx_4 = var_158
                char r11_1 = 0
                int32_t var_150
                var_158 = &rdx_4[sx.q(var_150)]
                void* var_170
                int32_t* rdx_5 = var_170
                result = 0
                int32_t var_168
                var_170 = &rdx_5[sx.q(var_168)]
                int64_t r9_1 = sx.q(*rdx_5)
                
                if (r9_1.d s>= 0 && r9_1.d s< *(r14_1 + 0x40))
                    int64_t r8_2 = sx.q(*(*(r14_1 + 0x38) + (r9_1 << 2)))
                    
                    if (r8_2.d s>= 0 && r8_2.d s< arg_18)
                        int64_t var_e0
                        int64_t var_d8
                        void* rcx_10
                        
                        if (var_e0 != 0 && var_d8 != 0)
                            rcx_10 = *(var_118 + 0x98)
                        
                        int32_t rcx_11
                        int32_t r10_2
                        
                        if (var_e0 == 0 || var_d8 == 0 || rcx_10 == 0
                                || r8_2.d u>= *(rcx_10 + 0xb0))
                            r10_2 = -1
                            rcx_11 = -1
                        else
                            r10_2 = *(var_e0 + (r8_2 << 2))
                            rcx_11 = *(var_d8 + (r8_2 << 2))
                        
                        if (r10_2 == r9_1.d && rcx_11 == *rdx_4)
                            int64_t var_50
                            
                            if (var_50 != 0)
                                result = zx.q(*(var_50 + (r8_2 << 2)))
                            
                            r11_1 = 1
                
                int32_t* r8_3 = var_138
                int64_t rcx_12 = sx.q(var_144)
                var_138 = &r8_3[rcx_12]
                i_1 += 1
                *r8_3 = sbb.d(rcx_12.d, rcx_12.d, r11_1 != 0)
                int32_t* r8_4 = var_120
                var_120 = &r8_4[sx.q(result_2)]
                *r8_4 = result.d
            while (i_1 s< *(arg2 + 0x40))
        
        int64_t var_f0
        
        if (var_f0 != 0)
            result = sub_140a74f90(var_f0)
        
        int64_t var_60
        
        if (var_60 != 0)
            result = sub_140a74f90(var_60)
        
        if (var_1a0_1 != 0)
            return sub_140a74f90(var_1a0_1)
return result
