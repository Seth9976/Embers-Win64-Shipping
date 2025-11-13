// 函数: sub_1407be760
// 地址: 0x1407be760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_168
sub_14077d090(&var_168, arg2)
int64_t result_1
int64_t result = result_1
void* r14 = *(result + 8)
void* r15_1

if (r14 != 0)
    result = *(r14 + 0x778)
    r15_1 = *(result + 0x98)

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
    
    if (data_143ce2510
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce2510)
        
        if (data_143ce2510 == 0xffffffff)
            int64_t arg_18
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce24e8 = arg_18
            data_143ce24f0 = data_14396f138
            data_143ce24f8 = data_14396f140
            data_143ce24fa = 0xffffffff
            data_143ce2500 = 0
            data_143ce2508 = 0
            atexit(sub_142cb2900)
            _Init_thread_footer(&data_143ce2510)
    
    int32_t r15_2 = *(r15_1 + 0xb0)
    int64_t var_190_1 = data_14396f0a8
    int16_t rax_3 = data_14396f0b0
    int64_t var_198 = arg3
    int16_t var_188_1 = rax_3
    int32_t var_186_1 = 0xffffffff
    int64_t var_180_1 = 0
    int64_t var_178_1 = 0
    void* var_108
    void var_b8
    sub_14077da80(&var_108, *(r14 + 0x778), sub_140745220(&var_b8, &var_198))
    void var_88
    result = sub_14077dde0(&var_88, *(r14 + 0x778), sub_140745220(&var_b8, &data_143ce24e8))
    int32_t i_1 = 0
    
    if (*(arg2 + 0x40) s> 0)
        void* rbx_3 = var_108
        
        do
            void* var_150
            int32_t* rdx_4 = var_150
            char r9_1 = 0
            int32_t r8_2 = 0
            int32_t var_148
            var_150 = &rdx_4[sx.q(var_148)]
            int64_t rax_7 = sx.q(*rdx_4)
            
            if (rax_7.d s>= 0 && rax_7.d s< r15_2)
                int64_t var_d0
                
                if (var_d0 != 0)
                    void* rcx_7 = *(rbx_3 + 0x98)
                    
                    if (rcx_7 != 0 && rax_7.d u< *(rcx_7 + 0xb0))
                        r8_2 = *(var_d0 + (rax_7 << 2))
                
                r9_1 = 1
            
            int32_t* rdx_5 = var_130
            int64_t rax_8 = sx.q(var_13c)
            var_130 = &rdx_5[rax_8]
            i_1 += 1
            *rdx_5 = sbb.d(rax_8.d, rax_8.d, r9_1 != 0)
            int32_t* rdx_6 = var_118
            result = sx.q(result_2)
            var_118 = &rdx_6[result]
            *rdx_6 = r8_2
        while (i_1 s< *(arg2 + 0x40))
    
    int64_t var_60
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    int64_t var_e0
    
    if (var_e0 != 0)
        result = sub_140a74f90(var_e0)
    
    if (var_180_1 != 0)
        return sub_140a74f90(var_180_1)
return result
