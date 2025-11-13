// 函数: sub_1407c04d0
// 地址: 0x1407c04d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = data_143dbb200
uint64_t var_218 = data_143dbb1f8.q
int32_t var_1f8
sub_14077e0c0(&var_1f8, arg2)
uint32_t var_1e8
sub_140767bd0(&var_1e8, arg2)
int16_t* rax = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t rdx_2 = zx.d(*rax) & 0x7fff
*(arg2 + 0x10) = &rax[1]
int32_t var_1d0 = rdx_2
int32_t var_1c8 = 0
int32_t rax_2
rax_2.b = rdx_2 != 0x7fff
void* var_1c0

if (rdx_2 == 0x7fff)
    var_1c0 = &var_1c8
else
    var_1c0 = zx.q(*(arg2 + 0x80) * rdx_2) + *(arg2 + 0x70)

void var_1b8
sub_14077d9a0(&var_1b8, arg2)
int64_t result_1
int64_t result = result_1
void* r14 = *(result + 8)
void* r15_1

if (r14 != 0)
    result = *(r14 + 0x778)
    r15_1 = *(result + 0x98)

int32_t var_1b4
void* var_1a8
int32_t var_19c
void* var_190
int32_t result_2
void* var_178

if (r14 == 0 || r15_1 == 0 || *(r15_1 + 0xb0) u<= 0 || *(r14 + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_13 = var_1c0
            i += 1
            var_1c0 = rdx_13 + (sx.q(rax_2) << 2)
            *rdx_13 = 0
            void* rdx_14 = var_1a8
            var_1a8 = rdx_14 + (sx.q(var_1b4) << 2)
            *rdx_14 = var_218.d
            void* rdx_15 = var_190
            var_190 = rdx_15 + (sx.q(var_19c) << 2)
            *rdx_15 = var_218:4.d
            void* rdx_16 = var_178
            result = sx.q(result_2)
            var_178 = rdx_16 + (result << 2)
            *rdx_16 = r12
        while (i s< *(arg2 + 0x40))
else
    TEB* gsbase
    
    if (data_143ce25d0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce25d0)
        
        if (data_143ce25d0 == 0xffffffff)
            int64_t arg_10
            sub_140b58170(&arg_10, "ID", 1)
            data_143ce25a8 = arg_10
            data_143ce25b0 = data_14396f138
            data_143ce25b8 = data_14396f140
            data_143ce25ba = 0xffffffff
            data_143ce25c0 = 0
            data_143ce25c8 = 0
            atexit(sub_142cb2a00)
            _Init_thread_footer(&data_143ce25d0)
    
    int32_t r15_2 = *(r15_1 + 0xb0)
    int64_t var_160_1 = data_14396f0c8
    int16_t rax_6 = data_14396f0d0
    int64_t var_168 = arg3
    int16_t var_158_1 = rax_6
    int32_t var_156_1 = 0xffffffff
    int64_t var_150_1 = 0
    int64_t var_148_1 = 0
    void* var_138
    void var_c8
    sub_14077dfa0(&var_138, *(r14 + 0x778), sub_140745220(&var_c8, &var_168))
    void var_98
    uint64_t zmm6_1
    result, zmm6_1 = sub_14077dde0(&var_98, *(r14 + 0x778), sub_140745220(&var_c8, &data_143ce25a8))
    
    if (*(arg2 + 0x40) s> 0)
        int32_t zmm3 = var_218:4.d
        int32_t zmm4_1 = var_218.d
        void* rbx_3 = var_138
        
        do
            void* var_1e0
            int32_t* rdx_8 = var_1e0
            char r8_2 = 0
            uint64_t var_208_1 = zmm6_1
            int32_t var_200_1 = r12
            int32_t var_1d8
            var_1e0 = &rdx_8[sx.q(var_1d8)]
            int64_t rax_10 = sx.q(*rdx_8)
            
            if (rax_10.d s>= 0 && rax_10.d s< r15_2)
                int64_t var_100
                int64_t var_f8
                int64_t var_f0
                void* rcx_12
                
                if (var_100 != 0 && var_f8 != 0 && var_f0 != 0)
                    rcx_12 = *(rbx_3 + 0x98)
                
                int32_t var_210_1
                
                if (var_100 == 0 || var_f8 == 0 || var_f0 == 0 || rcx_12 == 0
                        || rax_10.d u>= *(rcx_12 + 0xb0))
                    var_218.d = zmm4_1
                    var_218:4.d = zmm3
                    var_210_1 = r12
                else
                    var_218.d = (*(var_100 + (rax_10 << 2))).d
                    var_210_1 = (*(var_f0 + (rax_10 << 2))).d
                    var_218:4.d = *(var_f8 + (rax_10 << 2))
                
                r8_2 = 1
                var_208_1 = var_218
                var_200_1 = var_210_1
            
            int32_t* rdx_9 = var_1c0
            int64_t rax_12 = sx.q(rax_2)
            var_1c0 = &rdx_9[rax_12]
            i_1 += 1
            *rdx_9 = sbb.d(rax_12.d, rax_12.d, r8_2 != 0)
            int32_t* rdx_10 = var_1a8
            var_1a8 = &rdx_10[sx.q(var_1b4)]
            *rdx_10 = var_208_1.d.d
            int32_t* rdx_11 = var_190
            var_190 = &rdx_11[sx.q(var_19c)]
            *rdx_11 = var_208_1:4.d.d
            int32_t* rdx_12 = var_178
            result = sx.q(result_2)
            var_178 = &rdx_12[result]
            *rdx_12 = var_200_1.d
        while (i_1 s< *(arg2 + 0x40))
    
    int64_t var_70
    
    if (var_70 != 0)
        result = sub_140a74f90(var_70)
    
    int64_t var_110
    
    if (var_110 != 0)
        result = sub_140a74f90(var_110)
    
    if (var_150_1 != 0)
        return sub_140a74f90(var_150_1)
return result
