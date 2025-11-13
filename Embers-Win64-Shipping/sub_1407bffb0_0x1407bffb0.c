// 函数: sub_1407bffb0
// 地址: 0x1407bffb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143dbb200
uint64_t var_238 = data_143dbb1f8.q
int32_t var_218
sub_14077e0c0(&var_218, arg2)
uint32_t var_208
sub_140767bd0(&var_208, arg2)
uint32_t var_1f0
sub_140767bd0(&var_1f0, arg2)
int16_t* rax_1 = *(arg2 + 0x10)
int32_t i_1 = 0
int32_t rdx_3 = zx.d(*rax_1) & 0x7fff
*(arg2 + 0x10) = &rax_1[1]
int32_t var_1d8 = rdx_3
int32_t var_1d0 = 0
int32_t rax_3
rax_3.b = rdx_3 != 0x7fff
void* var_1c8

if (rdx_3 == 0x7fff)
    var_1c8 = &var_1d0
else
    var_1c8 = zx.q(*(arg2 + 0x80) * rdx_3) + *(arg2 + 0x70)

void var_1c0
sub_14077d9a0(&var_1c0, arg2)
uint64_t result_1
uint64_t result = result_1
void* rdi = *(result + 8)
void* r15_1

if (rdi != 0)
    result = *(rdi + 0x778)
    r15_1 = *(result + 0x98)

int32_t var_1bc
void* var_1b0
int32_t var_1a4
void* var_198
int32_t result_2
void* var_180

if (rdi == 0 || r15_1 == 0 || *(rdi + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_16 = var_1c8
            i += 1
            var_1c8 = rdx_16 + (sx.q(rax_3) << 2)
            *rdx_16 = 0
            void* rdx_17 = var_1b0
            var_1b0 = rdx_17 + (sx.q(var_1bc) << 2)
            *rdx_17 = var_238.d
            void* rdx_18 = var_198
            var_198 = rdx_18 + (sx.q(var_1a4) << 2)
            *rdx_18 = var_238:4.d
            void* rdx_19 = var_180
            result = sx.q(result_2)
            var_180 = rdx_19 + (result << 2)
            *rdx_19 = rax
        while (i s< *(arg2 + 0x40))
else
    int32_t arg_18
    TEB* gsbase
    
    if (data_143ce2420
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce2420)
        
        if (data_143ce2420 == 0xffffffff)
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce23f8 = arg_18.q
            data_143ce2400 = data_14396f138
            data_143ce2408 = data_14396f140
            data_143ce240a = 0xffffffff
            data_143ce2410 = 0
            data_143ce2418 = 0
            atexit(sub_142cb2b20)
            _Init_thread_footer(&data_143ce2420)
    
    result = zx.q(*(r15_1 + 0xb0))
    arg_18 = result.d
    
    if (*(r15_1 + 0x40) s> 0)
        int64_t var_170_1 = data_14396f0c8
        int16_t rax_7 = data_14396f0d0
        int64_t var_178 = arg3
        int16_t var_168_1 = rax_7
        int32_t var_166_1 = 0xffffffff
        int64_t var_160_1 = 0
        int64_t var_158_1 = 0
        void* var_148
        void var_78
        sub_14077dfa0(&var_148, *(rdi + 0x778), sub_140745220(&var_78, &var_178))
        void* var_d8
        int64_t zmm6_1
        result, zmm6_1 =
            sub_14077dde0(&var_d8, *(rdi + 0x778), sub_140745220(&var_78, &data_143ce23f8))
        
        if (*(arg2 + 0x40) s> 0)
            do
                void* var_1e8
                int32_t* rdx_9 = var_1e8
                char r10_1 = 0
                int64_t var_238_1 = zmm6_1
                int32_t var_1e0
                var_1e8 = &rdx_9[sx.q(var_1e0)]
                void* var_200
                int32_t* rdx_10 = var_200
                int32_t var_1f8
                var_200 = &rdx_10[sx.q(var_1f8)]
                int64_t r8_2 = sx.q(*rdx_10)
                int32_t var_230_1 = rax
                
                if (r8_2.d s>= 0 && r8_2.d s< *(r15_1 + 0x40))
                    int64_t rdx_11 = sx.q(*(*(r15_1 + 0x38) + (r8_2 << 2)))
                    
                    if (rdx_11.d s>= 0 && rdx_11.d s< arg_18)
                        int32_t r9_1 = -1
                        int64_t var_a0
                        int64_t var_98
                        void* rax_15
                        
                        if (var_a0 != 0 && var_98 != 0)
                            rax_15 = *(var_d8 + 0x98)
                        
                        int32_t rcx_15
                        
                        if (var_a0 == 0 || var_98 == 0 || rax_15 == 0
                                || rdx_11.d u>= *(rax_15 + 0xb0))
                            rcx_15 = -1
                        else
                            r9_1 = *(var_a0 + (rdx_11 << 2))
                            rcx_15 = *(var_98 + (rdx_11 << 2))
                        
                        if (r9_1 == r8_2.d && rcx_15 == *rdx_9)
                            int64_t var_110
                            int64_t var_108
                            int64_t var_100
                            void* rax_17
                            
                            if (var_110 != 0 && var_108 != 0 && var_100 != 0)
                                rax_17 = *(var_148 + 0x98)
                            
                            int32_t var_228_1
                            int32_t var_220_1
                            
                            if (var_110 == 0 || var_108 == 0 || var_100 == 0 || rax_17 == 0
                                    || rdx_11.d u>= *(rax_17 + 0xb0))
                                var_228_1 = var_238.d
                                int32_t var_224_2 = var_238:4.d
                                var_220_1 = rax
                            else
                                var_228_1 = (*(var_110 + (rdx_11 << 2))).d
                                var_220_1 = (*(var_100 + (rdx_11 << 2))).d
                                int32_t var_224_1 = *(var_108 + (rdx_11 << 2))
                            
                            r10_1 = 1
                            var_238_1 = var_228_1.q
                            var_230_1 = var_220_1
                
                int32_t* rdx_12 = var_1c8
                int64_t rax_19 = sx.q(rax_3)
                var_1c8 = &rdx_12[rax_19]
                i_1 += 1
                *rdx_12 = sbb.d(rax_19.d, rax_19.d, r10_1 != 0)
                int32_t* rdx_13 = var_1b0
                var_1b0 = &rdx_13[sx.q(var_1bc)]
                *rdx_13 = var_238_1.d.d
                int32_t* rdx_14 = var_198
                var_198 = &rdx_14[sx.q(var_1a4)]
                *rdx_14 = var_238_1:4.d.d
                int32_t* rdx_15 = var_180
                result = sx.q(result_2)
                var_180 = &rdx_15[result]
                *rdx_15 = var_230_1.d
            while (i_1 s< *(arg2 + 0x40))
        
        int64_t var_b0
        
        if (var_b0 != 0)
            result = sub_140a74f90(var_b0)
        
        int64_t var_120
        
        if (var_120 != 0)
            result = sub_140a74f90(var_120)
        
        if (var_160_1 != 0)
            return sub_140a74f90(var_160_1)
return result
