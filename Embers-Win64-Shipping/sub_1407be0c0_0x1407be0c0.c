// 函数: sub_1407be0c0
// 地址: 0x1407be0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = -1
int32_t var_188
sub_14077d3e0(&var_188, arg2)
int64_t* result_1
int64_t* result = result_1
void* r14 = result[1]
void* r15_1

if (r14 != 0)
    result = *(r14 + 0x778)
    r15_1 = result[0x13]

int32_t var_15c
void* var_150
int32_t var_144
void* var_138
int32_t result_2
void* var_120

if (r14 == 0 || r15_1 == 0 || *(r15_1 + 0xb0) u<= 0 || *(r14 + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_11 = var_150
            i += 1
            var_150 = rdx_11 + (sx.q(var_15c) << 2)
            *rdx_11 = 0
            void* rdx_12 = var_138
            var_138 = rdx_12 + (sx.q(var_144) << 2)
            *rdx_12 = 0xffffffff
            void* rdx_13 = var_120
            result = sx.q(result_2)
            var_120 = rdx_13 + (result << 2)
            *rdx_13 = 0xffffffff
        while (i s< *(arg2 + 0x40))
else
    int32_t i_1 = 0
    TEB* gsbase
    
    if (data_143ce2690
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce2690)
        
        if (data_143ce2690 == 0xffffffff)
            int64_t arg_20
            sub_140b58170(&arg_20, "ID", 1)
            data_143ce2668 = arg_20
            data_143ce2670 = data_14396f138
            data_143ce2678 = data_14396f140
            data_143ce267a = 0xffffffff
            data_143ce2680 = 0
            data_143ce2688 = 0
            atexit(sub_142cb2980)
            _Init_thread_footer(&data_143ce2690)
    
    int32_t r15_2 = *(r15_1 + 0xb0)
    int64_t var_1b0_1 = data_14396f138
    int16_t rax_3 = data_14396f140
    int64_t var_1b8 = arg3
    int16_t var_1a8_1 = rax_3
    int32_t var_1a6_1 = 0xffffffff
    int64_t var_1a0_1 = 0
    int64_t var_198_1 = 0
    void* var_118
    void var_b8
    sub_14077dde0(&var_118, *(r14 + 0x778), sub_140745220(&var_b8, &var_1b8))
    void var_88
    result = sub_14077dde0(&var_88, *(r14 + 0x778), sub_140745220(&var_b8, &data_143ce2668))
    
    if (*(arg2 + 0x40) s> 0)
        void* r14_1 = var_118
        
        do
            void* var_170
            int32_t* r8_2 = var_170
            char r10_1 = 0
            int64_t rax_7 = -1
            int32_t var_168
            var_170 = &r8_2[sx.q(var_168)]
            int64_t rdx_5 = sx.q(*r8_2)
            
            if (rdx_5.d s>= 0 && rdx_5.d s< r15_2)
                int64_t var_e0
                int64_t var_d8
                void* rax_8
                
                if (var_e0 != 0 && var_d8 != 0)
                    rax_8 = *(r14_1 + 0x98)
                
                if (var_e0 == 0 || var_d8 == 0 || rax_8 == 0 || rdx_5.d u>= *(rax_8 + 0xb0))
                    arg_18 = -1
                    rax_7 = -1
                else
                    int64_t rdx_6 = rdx_5 << 2
                    arg_18.d = *(rdx_6 + var_e0)
                    arg_18:4.d = *(rdx_6 + var_d8)
                    rax_7 = arg_18
                
                r10_1 = 1
            
            int32_t* r9_1 = var_150
            int64_t rdx_7 = sx.q(var_15c)
            var_150 = &r9_1[rdx_7]
            i_1 += 1
            *r9_1 = sbb.d(rdx_7.d, rdx_7.d, r10_1 != 0)
            int32_t* r9_2 = var_138
            var_138 = &r9_2[sx.q(var_144)]
            *r9_2 = rax_7.d
            int32_t* r9_3 = var_120
            result = rax_7 u>> 0x20
            var_120 = &r9_3[sx.q(result_2)]
            *r9_3 = result.d
        while (i_1 s< *(arg2 + 0x40))
    
    int64_t var_60
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    int64_t var_f0
    
    if (var_f0 != 0)
        result = sub_140a74f90(var_f0)
    
    if (var_1a0_1 != 0)
        return sub_140a74f90(var_1a0_1)
return result
