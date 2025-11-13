// 函数: sub_1407bcad0
// 地址: 0x1407bcad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_168
sub_14077d300(&var_168, arg2)
int64_t* result_1
int64_t* result = result_1
void* r14 = result[1]
void* r15_1

if (r14 != 0)
    result = *(r14 + 0x778)
    r15_1 = result[0x13]

int32_t var_13c
void* var_130
int32_t result_2
void* var_118

if (r14 == 0 || r15_1 == 0 || *(r15_1 + 0xb0) u<= 0 || *(r14 + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_7 = var_130
            i += 1
            var_130 = rdx_7 + (sx.q(var_13c) << 2)
            *rdx_7 = 0
            void* rdx_8 = var_118
            result = sx.q(result_2)
            var_118 = rdx_8 + (result << 2)
            *rdx_8 = 0
        while (i s< *(arg2 + 0x40))
else
    TEB* gsbase
    
    if (data_143ce2540
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce2540)
        
        if (data_143ce2540 == 0xffffffff)
            int64_t arg_18
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce2518 = arg_18
            data_143ce2520 = data_14396f138
            data_143ce2528 = data_14396f140
            data_143ce252a = 0xffffffff
            data_143ce2530 = 0
            data_143ce2538 = 0
            atexit(sub_142cb2960)
            _Init_thread_footer(&data_143ce2540)
    
    int32_t r15_2 = *(r15_1 + 0xb0)
    int64_t var_190_1 = data_14396f098
    int16_t rax_3 = data_14396f0a0
    int64_t var_198 = arg3
    int16_t var_188_1 = rax_3
    int32_t var_186_1 = 0xffffffff
    int64_t var_180_1 = 0
    int64_t var_178_1 = 0
    void var_108
    void var_d8
    sub_14077dd30(&var_d8, *(r14 + 0x778), sub_140745220(&var_108, &var_198))
    void var_88
    result = sub_14077dde0(&var_88, *(r14 + 0x778), sub_140745220(&var_108, &data_143ce2518))
    int32_t i_1 = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* var_150
            int32_t* rdx_4 = var_150
            char r9_1 = 0
            result = nullptr
            int32_t var_148
            var_150 = &rdx_4[sx.q(var_148)]
            int64_t rcx_7 = sx.q(*rdx_4)
            
            if (rcx_7.d s>= 0 && rcx_7.d s< r15_2)
                int64_t var_a0
                
                if (var_a0 != 0)
                    result = zx.q(*(var_a0 + (rcx_7 << 2)))
                
                r9_1 = 1
            
            int32_t* r8_2 = var_130
            int64_t rcx_8 = sx.q(var_13c)
            var_130 = &r8_2[rcx_8]
            i_1 += 1
            *r8_2 = sbb.d(rcx_8.d, rcx_8.d, r9_1 != 0)
            int32_t* r8_3 = var_118
            var_118 = &r8_3[sx.q(result_2)]
            *r8_3 = result.d
        while (i_1 s< *(arg2 + 0x40))
    
    int64_t var_60
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    int64_t var_b0
    
    if (var_b0 != 0)
        result = sub_140a74f90(var_b0)
    
    if (var_180_1 != 0)
        return sub_140a74f90(var_180_1)
return result
