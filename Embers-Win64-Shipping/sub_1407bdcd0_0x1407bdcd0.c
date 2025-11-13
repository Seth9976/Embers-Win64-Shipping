// 函数: sub_1407bdcd0
// 地址: 0x1407bdcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = -1
int32_t var_1b8
sub_14077d880(&var_1b8, arg2)
uint64_t result_1
uint64_t result = result_1
void* rdi = *(result + 8)
void* r14_1

if (rdi != 0)
    result = *(rdi + 0x778)
    r14_1 = *(result + 0x98)

int32_t var_174
void* var_168
int32_t var_15c
void* var_150
int32_t result_2
void* var_138

if (rdi == 0 || r14_1 == 0 || *(rdi + 0x728) != 0)
    int32_t i = 0
    
    if (*(arg2 + 0x40) s> 0)
        do
            void* rdx_14 = var_168
            i += 1
            var_168 = rdx_14 + (sx.q(var_174) << 2)
            *rdx_14 = 0
            void* rdx_15 = var_150
            var_150 = rdx_15 + (sx.q(var_15c) << 2)
            *rdx_15 = 0xffffffff
            void* rdx_16 = var_138
            result = sx.q(result_2)
            var_138 = rdx_16 + (result << 2)
            *rdx_16 = 0xffffffff
        while (i s< *(arg2 + 0x40))
else
    int32_t i_1 = 0
    int32_t arg_18
    TEB* gsbase
    
    if (data_143ce24e0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce24e0)
        
        if (data_143ce24e0 == 0xffffffff)
            sub_140b58170(&arg_18, "ID", 1)
            data_143ce24b8 = arg_18.q
            data_143ce24c0 = data_14396f138
            data_143ce24c8 = data_14396f140
            data_143ce24ca = 0xffffffff
            data_143ce24d0 = 0
            data_143ce24d8 = 0
            atexit(sub_142cb2aa0)
            _Init_thread_footer(&data_143ce24e0)
    
    result = zx.q(*(r14_1 + 0xb0))
    arg_18 = result.d
    
    if (*(r14_1 + 0x40) s> 0)
        int64_t var_1e0_1 = data_14396f138
        int16_t rax_3 = data_14396f140
        int64_t var_1e8 = arg3
        int16_t var_1d8_1 = rax_3
        int32_t var_1d6_1 = 0xffffffff
        int64_t var_1d0_1 = 0
        int64_t var_1c8_1 = 0
        void* var_c8
        void var_68
        sub_14077dde0(&var_c8, *(rdi + 0x778), sub_140745220(&var_68, &var_1e8))
        void* var_128
        result = sub_14077dde0(&var_128, *(rdi + 0x778), sub_140745220(&var_68, &data_143ce24b8))
        
        if (*(arg2 + 0x40) s> 0)
            int64_t rcx_6 = arg_20
            
            do
                void* var_188
                int32_t* r8_2 = var_188
                int64_t rbx_2
                rbx_2.b = 0
                int32_t var_180
                var_188 = &r8_2[sx.q(var_180)]
                void* var_1a0
                int32_t* r8_3 = var_1a0
                int64_t rax_8 = rcx_6
                int32_t var_198
                var_1a0 = &r8_3[sx.q(var_198)]
                int64_t r10_1 = sx.q(*r8_3)
                
                if (r10_1.d s>= 0 && r10_1.d s< *(r14_1 + 0x40))
                    int64_t r9_1 = sx.q(*(*(r14_1 + 0x38) + (r10_1 << 2)))
                    
                    if (r9_1.d s>= 0 && r9_1.d s< arg_18)
                        int64_t var_f0
                        int64_t var_e8
                        void* rdx_8
                        
                        if (var_f0 != 0 && var_e8 != 0)
                            rdx_8 = *(var_128 + 0x98)
                        
                        int32_t r8_5
                        int32_t r11_2
                        
                        if (var_f0 == 0 || var_e8 == 0 || rdx_8 == 0 || r9_1.d u>= *(rdx_8 + 0xb0))
                            r11_2 = -1
                            r8_5 = -1
                        else
                            r11_2 = *(var_f0 + (r9_1 << 2))
                            r8_5 = *(var_e8 + (r9_1 << 2))
                        
                        if (r11_2 == r10_1.d && r8_5 == *r8_2)
                            int64_t var_90
                            int32_t* var_88
                            void* rax_10
                            
                            if (var_90 != 0 && var_88 != 0)
                                rax_10 = *(var_c8 + 0x98)
                            
                            if (var_90 == 0 || var_88 == 0 || rax_10 == 0
                                    || r9_1.d u>= *(rax_10 + 0xb0))
                                rax_8 = -1
                                arg_20 = -1
                            else
                                arg_20.d = *((r9_1 << 2) + var_90)
                                arg_20:4.d = var_88[r9_1]
                                rax_8 = arg_20
                            
                            rbx_2.b = 1
                
                int32_t* r9_2 = var_168
                char temp0_1 = rbx_2.b
                rbx_2.b = neg.b(rbx_2.b)
                int64_t rdx_10 = sx.q(var_174)
                var_168 = &r9_2[rdx_10]
                i_1 += 1
                *r9_2 = sbb.d(rdx_10.d, rdx_10.d, temp0_1 != 0)
                int32_t* r9_3 = var_150
                var_150 = &r9_3[sx.q(var_15c)]
                *r9_3 = rax_8.d
                int32_t* r9_4 = var_138
                result = rax_8 u>> 0x20
                var_138 = &r9_4[sx.q(result_2)]
                *r9_4 = result.d
            while (i_1 s< *(arg2 + 0x40))
        
        int64_t var_100
        
        if (var_100 != 0)
            result = sub_140a74f90(var_100)
        
        int64_t var_a0
        
        if (var_a0 != 0)
            result = sub_140a74f90(var_a0)
        
        if (var_1d0_1 != 0)
            return sub_140a74f90(var_1d0_1)
return result
