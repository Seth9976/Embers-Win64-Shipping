// 函数: sub_1407bea30
// 地址: 0x1407bea30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = data_14399f720
int32_t var_218
sub_14077d5d0(&var_218, arg2)
uint64_t result_1
uint64_t result = result_1
void* rdi = *(result + 8)
void* r14_1

if (rdi != 0)
    result = *(rdi + 0x778)
    r14_1 = *(result + 0x98)

int32_t var_1d4
void* var_1c8
int32_t var_1bc
void* var_1b0
int32_t var_1a4
void* var_198
int32_t var_18c
void* var_180
int32_t result_2
void* var_168

if (rdi == 0 || r14_1 == 0 || *(rdi + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_12 = var_1c8
            i += 1
            var_1c8 = rdx_12 + (sx.q(var_1d4) << 2)
            *rdx_12 = 0
            void* rdx_13 = var_1b0
            var_1b0 = rdx_13 + (sx.q(var_1bc) << 2)
            *rdx_13 = zmm6.d
            void* rdx_14 = var_198
            var_198 = rdx_14 + (sx.q(var_1a4) << 2)
            *rdx_14 = zmm6:4.d
            void* rdx_15 = var_180
            var_180 = rdx_15 + (sx.q(var_18c) << 2)
            *rdx_15 = zmm6:8.d
            void* rdx_16 = var_168
            result = sx.q(result_2)
            var_168 = rdx_16 + (result << 2)
            *rdx_16 = zmm6:0xc.d
        while (i s< *(arg2 + 0x40))
else
    int32_t i_1 = 0
    int32_t arg_18
    TEB* gsbase
    
    if (data_143ce24b0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce24b0)
        
        if (data_143ce24b0 == 0xffffffff)
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce2488 = arg_18.q
            data_143ce2490 = data_14396f138
            data_143ce2498 = data_14396f140
            data_143ce249a = 0xffffffff
            data_143ce24a0 = 0
            data_143ce24a8 = 0
            atexit(sub_142cb2ac0)
            _Init_thread_footer(&data_143ce24b0)
    
    result = zx.q(*(r14_1 + 0xb0))
    arg_18 = result.d
    
    if (*(r14_1 + 0x40) s> 0)
        int64_t var_240_1 = data_14396f0f8
        int16_t rax_3 = data_14396f100
        int64_t var_248 = arg3
        int16_t var_238_1 = rax_3
        int32_t var_236_1 = 0xffffffff
        int64_t var_230_1 = 0
        int64_t var_228_1 = 0
        void* var_158
        void var_78
        sub_14077dbe0(&var_158, *(rdi + 0x778), sub_140745220(&var_78, &var_248))
        void* var_d8
        int128_t zmm6_1
        result, zmm6_1 =
            sub_14077dde0(&var_d8, *(rdi + 0x778), sub_140745220(&var_78, &data_143ce2488))
        
        if (*(arg2 + 0x40) s> 0)
            int32_t zmm2_1 = arg_18
            int32_t zmm3 = arg_18
            int32_t zmm4_1 = arg_18
            int32_t zmm5_1 = arg_18
            
            do
                void* var_1e8
                int32_t* rdx_4 = var_1e8
                char r10_1 = 0
                int128_t var_268_1 = zmm6_1
                int32_t var_1e0
                var_1e8 = &rdx_4[sx.q(var_1e0)]
                void* var_200
                int32_t* rdx_5 = var_200
                int32_t var_1f8
                var_200 = &rdx_5[sx.q(var_1f8)]
                int64_t r8_2 = sx.q(*rdx_5)
                
                if (r8_2.d s>= 0 && r8_2.d s< *(r14_1 + 0x40))
                    int64_t rdx_6 = sx.q(*(*(r14_1 + 0x38) + (r8_2 << 2)))
                    
                    if (rdx_6.d s>= 0 && rdx_6.d s< arg_18)
                        int64_t var_a0
                        int64_t var_98
                        void* rax_10
                        
                        if (var_a0 != 0 && var_98 != 0)
                            rax_10 = *(var_d8 + 0x98)
                        
                        int32_t rcx_9
                        int32_t r9_2
                        
                        if (var_a0 == 0 || var_98 == 0 || rax_10 == 0
                                || rdx_6.d u>= *(rax_10 + 0xb0))
                            r9_2 = -1
                            rcx_9 = -1
                        else
                            r9_2 = *(var_a0 + (rdx_6 << 2))
                            rcx_9 = *(var_98 + (rdx_6 << 2))
                        
                        if (r9_2 == r8_2.d && rcx_9 == *rdx_4)
                            int64_t var_120
                            int64_t var_118
                            int64_t var_110
                            int64_t var_108
                            void* rax_12
                            
                            if (var_120 != 0 && var_118 != 0 && var_110 != 0 && var_108 != 0)
                                rax_12 = *(var_158 + 0x98)
                            
                            int32_t var_258_1
                            
                            if (var_120 == 0 || var_118 == 0 || var_110 == 0 || var_108 == 0
                                    || rax_12 == 0 || rdx_6.d u>= *(rax_12 + 0xb0))
                                var_258_1 = zmm2_1
                                int32_t var_254_2 = zmm3
                                int32_t var_250_2 = zmm4_1
                                int32_t var_24c_2 = zmm5_1
                            else
                                var_258_1 = (*(var_120 + (rdx_6 << 2))).d
                                int32_t var_254_1 = *(var_118 + (rdx_6 << 2))
                                int32_t var_250_1 = (*(var_110 + (rdx_6 << 2))).d
                                int32_t var_24c_1 = *(var_108 + (rdx_6 << 2))
                            
                            r10_1 = 1
                            var_268_1 = var_258_1.o
                
                int32_t* rdx_7 = var_1c8
                int64_t rax_13 = sx.q(var_1d4)
                var_1c8 = &rdx_7[rax_13]
                i_1 += 1
                *rdx_7 = sbb.d(rax_13.d, rax_13.d, r10_1 != 0)
                int32_t* rdx_8 = var_1b0
                var_1b0 = &rdx_8[sx.q(var_1bc)]
                *rdx_8 = var_268_1.d.d
                int32_t* rdx_9 = var_198
                var_198 = &rdx_9[sx.q(var_1a4)]
                *rdx_9 = var_268_1:4.d.d
                int32_t* rdx_10 = var_180
                var_180 = &rdx_10[sx.q(var_18c)]
                *rdx_10 = var_268_1:8.d.d
                int32_t* rdx_11 = var_168
                result = sx.q(result_2)
                var_168 = &rdx_11[result]
                *rdx_11 = var_268_1:0xc.d.d
            while (i_1 s< *(arg2 + 0x40))
        
        int64_t var_b0
        
        if (var_b0 != 0)
            result = sub_140a74f90(var_b0)
        
        int64_t var_130
        
        if (var_130 != 0)
            result = sub_140a74f90(var_130)
        
        if (var_230_1 != 0)
            return sub_140a74f90(var_230_1)
return result
