// 函数: sub_1407be400
// 地址: 0x1407be400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_188
sub_14077d4f0(&var_188, arg2)
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
    
    if (data_143ce2360
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce2360)
        
        if (data_143ce2360 == 0xffffffff)
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce2338 = arg_18.q
            data_143ce2340 = data_14396f138
            data_143ce2348 = data_14396f140
            data_143ce234a = 0xffffffff
            data_143ce2350 = 0
            data_143ce2358 = 0
            atexit(sub_142cb2a20)
            _Init_thread_footer(&data_143ce2360)
    
    result = zx.q(*(r14_1 + 0xb0))
    arg_18 = result.d
    
    if (*(r14_1 + 0x40) s> 0)
        int64_t var_1b0_1 = data_14396f0a8
        int16_t rax_3 = data_14396f0b0
        int64_t var_1b8 = arg3
        int16_t var_1a8_1 = rax_3
        int32_t var_1a6_1 = 0xffffffff
        int64_t var_1a0_1 = 0
        int64_t var_198_1 = 0
        void* var_b8
        void var_68
        sub_14077da80(&var_b8, *(rsi + 0x778), sub_140745220(&var_68, &var_1b8))
        void* var_118
        result = sub_14077dde0(&var_118, *(rsi + 0x778), sub_140745220(&var_68, &data_143ce2338))
        int32_t i_1 = 0
        
        if (*(arg2 + 0x40) s> 0)
            do
                void* var_158
                int32_t* rdx_4 = var_158
                char r11_1 = 0
                int32_t r10_1 = 0
                int32_t var_150
                var_158 = &rdx_4[sx.q(var_150)]
                void* var_170
                int32_t* rdx_5 = var_170
                int32_t var_168
                var_170 = &rdx_5[sx.q(var_168)]
                int64_t r8_2 = sx.q(*rdx_5)
                
                if (r8_2.d s>= 0 && r8_2.d s< *(r14_1 + 0x40))
                    int64_t rdx_6 = sx.q(*(*(r14_1 + 0x38) + (r8_2 << 2)))
                    
                    if (rdx_6.d s>= 0 && rdx_6.d s< arg_18)
                        int32_t r9_1 = -1
                        int64_t var_e0
                        int64_t var_d8
                        void* rax_10
                        
                        if (var_e0 != 0 && var_d8 != 0)
                            rax_10 = *(var_118 + 0x98)
                        
                        int32_t rcx_9
                        
                        if (var_e0 == 0 || var_d8 == 0 || rax_10 == 0
                                || rdx_6.d u>= *(rax_10 + 0xb0))
                            rcx_9 = -1
                        else
                            r9_1 = *(var_e0 + (rdx_6 << 2))
                            rcx_9 = *(var_d8 + (rdx_6 << 2))
                        
                        if (r9_1 == r8_2.d && rcx_9 == *rdx_4)
                            int64_t var_80
                            
                            if (var_80 != 0)
                                void* rax_12 = *(var_b8 + 0x98)
                                
                                if (rax_12 != 0 && rdx_6.d u< *(rax_12 + 0xb0))
                                    r10_1 = *(var_80 + (rdx_6 << 2))
                            
                            r11_1 = 1
                
                int32_t* rdx_7 = var_138
                int64_t rax_13 = sx.q(var_144)
                var_138 = &rdx_7[rax_13]
                i_1 += 1
                *rdx_7 = sbb.d(rax_13.d, rax_13.d, r11_1 != 0)
                int32_t* rdx_8 = var_120
                result = sx.q(result_2)
                var_120 = &rdx_8[result]
                *rdx_8 = r10_1
            while (i_1 s< *(arg2 + 0x40))
        
        int64_t var_f0
        
        if (var_f0 != 0)
            result = sub_140a74f90(var_f0)
        
        int64_t var_90
        
        if (var_90 != 0)
            result = sub_140a74f90(var_90)
        
        if (var_1a0_1 != 0)
            return sub_140a74f90(var_1a0_1)
return result
