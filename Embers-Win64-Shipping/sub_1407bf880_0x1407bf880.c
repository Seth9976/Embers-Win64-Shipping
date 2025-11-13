// 函数: sub_1407bf880
// 地址: 0x1407bf880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = data_143dbb1f0.d
int128_t zmm7 = data_143dbb1f0:4.d
int32_t var_1d8
sub_14077d880(&var_1d8, arg2)
uint64_t result_1
uint64_t result = result_1
void* rdi = *(result + 8)
void* r14_1

if (rdi != 0)
    result = *(rdi + 0x778)
    r14_1 = *(result + 0x98)

int32_t var_194
void* var_188
int32_t var_17c
void* var_170
int32_t result_2
void* var_158

if (rdi == 0 || r14_1 == 0 || *(rdi + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_10 = var_188
            i += 1
            var_188 = rdx_10 + (sx.q(var_194) << 2)
            *rdx_10 = 0
            void* rdx_11 = var_170
            var_170 = rdx_11 + (sx.q(var_17c) << 2)
            *rdx_11 = zmm6.d
            void* rdx_12 = var_158
            result = sx.q(result_2)
            var_158 = rdx_12 + (result << 2)
            *rdx_12 = zmm7.d
        while (i s< *(arg2 + 0x40))
else
    int32_t i_1 = 0
    int32_t arg_18
    TEB* gsbase
    
    if (data_143ce23f0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce23f0)
        
        if (data_143ce23f0 == 0xffffffff)
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce23c8 = arg_18.q
            data_143ce23d0 = data_14396f138
            data_143ce23d8 = data_14396f140
            data_143ce23da = 0xffffffff
            data_143ce23e0 = 0
            data_143ce23e8 = 0
            atexit(sub_142cb2ae0)
            _Init_thread_footer(&data_143ce23f0)
    
    result = zx.q(*(r14_1 + 0xb0))
    arg_18 = result.d
    
    if (*(r14_1 + 0x40) s> 0)
        int64_t var_200_1 = data_14396f0b8
        int16_t rax_3 = data_14396f0c0
        int64_t var_208 = arg3
        int16_t var_1f8_1 = rax_3
        int32_t var_1f6_1 = 0xffffffff
        int64_t var_1f0_1 = 0
        int64_t var_1e8_1 = 0
        void* var_e8
        void var_88
        sub_14077dec0(&var_e8, *(rdi + 0x778), sub_140745220(&var_88, &var_208))
        void* var_148
        int32_t zmm6_1
        result, zmm6_1 =
            sub_14077dde0(&var_148, *(rdi + 0x778), sub_140745220(&var_88, &data_143ce23c8))
        
        if (*(arg2 + 0x40) s> 0)
            int32_t zmm3 = arg_18
            
            do
                void* var_1a8
                int32_t* rdx_4 = var_1a8
                char r10_1 = 0
                int32_t zmm0_1 = zmm6_1
                int32_t zmm1_1 = zmm7.d
                int32_t var_1a0
                var_1a8 = &rdx_4[sx.q(var_1a0)]
                void* var_1c0
                int32_t* rdx_5 = var_1c0
                int32_t var_1b8
                var_1c0 = &rdx_5[sx.q(var_1b8)]
                int64_t r9_1 = sx.q(*rdx_5)
                
                if (r9_1.d s>= 0 && r9_1.d s< *(r14_1 + 0x40))
                    int64_t rdx_6 = sx.q(*(*(r14_1 + 0x38) + (r9_1 << 2)))
                    
                    if (rdx_6.d s>= 0 && rdx_6.d s< arg_18)
                        int64_t var_110
                        int64_t var_108
                        void* rax_10
                        
                        if (var_110 != 0 && var_108 != 0)
                            rax_10 = *(var_148 + 0x98)
                        
                        int32_t rcx_8
                        int32_t r8_2
                        
                        if (var_110 == 0 || var_108 == 0 || rax_10 == 0
                                || rdx_6.d u>= *(rax_10 + 0xb0))
                            r8_2 = -1
                            rcx_8 = -1
                        else
                            r8_2 = *(var_110 + (rdx_6 << 2))
                            rcx_8 = *(var_108 + (rdx_6 << 2))
                        
                        if (r8_2 == r9_1.d && rcx_8 == *rdx_4)
                            int64_t var_b0
                            int64_t var_a8
                            void* rax_12
                            
                            if (var_b0 != 0 && var_a8 != 0)
                                rax_12 = *(var_e8 + 0x98)
                            
                            if (var_b0 == 0 || var_a8 == 0 || rax_12 == 0
                                    || rdx_6.d u>= *(rax_12 + 0xb0))
                                zmm0_1 = zmm3
                                zmm1_1 = arg4
                            else
                                zmm0_1 = *(var_b0 + (rdx_6 << 2))
                                zmm1_1 = *(var_a8 + (rdx_6 << 2))
                            
                            r10_1 = 1
                
                int32_t* rdx_7 = var_188
                int64_t rax_13 = sx.q(var_194)
                var_188 = &rdx_7[rax_13]
                i_1 += 1
                *rdx_7 = sbb.d(rax_13.d, rax_13.d, r10_1 != 0)
                int32_t* rdx_8 = var_170
                var_170 = &rdx_8[sx.q(var_17c)]
                *rdx_8 = zmm0_1
                int32_t* rdx_9 = var_158
                result = sx.q(result_2)
                var_158 = &rdx_9[result]
                *rdx_9 = zmm1_1
            while (i_1 s< *(arg2 + 0x40))
        
        int64_t var_120
        
        if (var_120 != 0)
            result = sub_140a74f90(var_120)
        
        int64_t var_c0
        
        if (var_c0 != 0)
            result = sub_140a74f90(var_c0)
        
        if (var_1f0_1 != 0)
            return sub_140a74f90(var_1f0_1)
return result
