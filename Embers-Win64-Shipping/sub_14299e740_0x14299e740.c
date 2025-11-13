// 函数: sub_14299e740
// 地址: 0x14299e740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* r15 = arg1
sub_142991430(*arg2, arg2[1])
arg2[1] = *arg2
int64_t* buffer1_6 = nullptr
int64_t* buffer1_9 = nullptr
int64_t* buffer1_10
__builtin_memset(&buffer1_10, 0, 0x18)
int64_t i = 0
int64_t r8_1 = *(r15 + 0x40)
int64_t rax_3
int64_t rdx_1
rdx_1:rax_3 = muls.dp.q(0x6bca1af286bca1b, *(r15 + 0x48) - r8_1)
int64_t rdx_2 = rdx_1 s>> 2
int128_t var_b8_1
int128_t var_80
uint64_t count_2
int64_t var_68

if (rdx_2 != neg.q(rdx_2 u>> 0x3f))
    void* r14_1 = nullptr
    int64_t rdx_15
    
    do
        void** rsi_1 = r14_1 + r8_1
        int64_t var_70 = 0
        int64_t var_68_1 = 0
        uint64_t count_3 = rsi_1[2]
        
        if (rsi_1[3] u>= 0x10)
            rsi_1 = *rsi_1
        
        int64_t rdi_1
        
        if (count_3 u>= 0x10)
            rdi_1 = count_3 | 0xf
            
            if (rdi_1 u> 0x7fffffffffffffff)
                rdi_1 = 0x7fffffffffffffff
            
            void* const rax_9
            
            if (rdi_1 + 1 u>= 0x1000)
                int64_t rcx_3 = rdi_1 + 0x28
                
                if (rcx_3 u<= rdi_1 + 1)
                    rcx_3 = -1
                
                int64_t rax_7 = j_sub_140a82f30(rcx_3)
                
                if (rax_7 == 0)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
                
                rax_9 = (rax_7 + 0x27) & 0xffffffffffffffe0
                *(rax_9 - 8) = rax_7
            else if (rdi_1 == -1)
                rax_9 = nullptr
            else
                rax_9 = j_sub_140a82f30(rdi_1 + 1)
            
            var_80.q = rax_9
            memcpy(rax_9, rsi_1, count_3.d + 1)
        else
            var_80 = *rsi_1
            rdi_1 = 0xf
        
        var_68 = rdi_1
        count_2 = count_3
        int128_t* rdx_5 = &var_80
        int128_t* r9 = var_80.q
        
        if (rdi_1 u>= 0x10)
            rdx_5 = r9
        
        void* rcx_9
        
        if (count_3 == 0)
        label_14299e8d2:
            rcx_9 = -ffffffffffffffff
        else
            void* rcx_7 = -ffffffffffffffff
            
            if (count_3 - 1 u< -1)
                rcx_7 = count_3 - 1
            
            void* rcx_8 = rcx_7 + rdx_5
            
            while (*rcx_8 != 0x2e)
                if (rcx_8 == rdx_5)
                    goto label_14299e8d2
                
                rcx_8 -= 1
            
            rcx_9 = rcx_8 - rdx_5
        
        if (rcx_9 != -1)
            int64_t var_50_1 = 0
            int64_t var_48_1 = 0xf
            char var_60 = 0
            
            if (count_3 u< rcx_9 + 1)
                sub_14058b100()
                noreturn
            
            void* rbx_1 = count_3 - (rcx_9 + 1)
            void* r8_3 = -ffffffffffffffff
            
            if (rbx_1 u< -1)
                r8_3 = rbx_1
            
            int128_t* rdx_6 = &var_80
            
            if (rdi_1 u>= 0x10)
                rdx_6 = r9
            
            sub_14058ad40(&var_60, rdx_6 + rcx_9 + 1, r8_3)
            
            if (var_68 u>= 0x10)
                void* rcx_12 = var_80.q
                void* rax_11 = rcx_12
                
                if (var_68 + 1 u>= 0x1000)
                    rcx_12 = *(rcx_12 - 8)
                    
                    if (rax_11 - rcx_12 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                
                j_sub_140a74f90(rcx_12)
            
            var_80 = var_60.o
            count_2.o = var_50_1.o
        
        int128_t* rbx_2 = var_b8_1.q
        
        if (var_b8_1:8.q == rbx_2)
            sub_140909240(&buffer1_10, rbx_2, &var_80)
        else
            sub_140592d30(rbx_2, &var_80)
            var_b8_1.q = &rbx_2[2]
        
        if (var_68 u>= 0x10)
            void* rcx_15 = var_80.q
            void* rax_14 = rcx_15
            
            if (var_68 + 1 u>= 0x1000)
                rcx_15 = *(rcx_15 - 8)
                
                if (rax_14 - rcx_15 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_15)
        
        i += 1
        r14_1 += 0x98
        r8_1 = *(r15 + 0x40)
        int64_t rax_17
        int64_t rdx_14
        rdx_14:rax_17 = muls.dp.q(0x6bca1af286bca1b, *(r15 + 0x48) - r8_1)
        rdx_15 = rdx_14 s>> 2
    while (i u< rdx_15 + (rdx_15 u>> 0x3f))
    buffer1_6 = buffer1_10
    buffer1_9 = buffer1_6

int64_t var_a0 = 0
int64_t rax_20
int64_t rdx_17
rdx_17:rax_20 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(r15 + 0x78) - *(r15 + 0x70))
int64_t rdx_18 = rdx_17 s>> 3
uint64_t result = rdx_18 u>> 0x3f

if (rdx_18 != neg.q(result))
    int64_t r14_2 = 0
    int64_t var_d8_1 = 0
    
    while (true)
        int64_t i_1 = 0
        int64_t i_2 = 0
        int64_t r8_5 = *(r15 + 0x40)
        int64_t rax_22
        int64_t rdx_20
        rdx_20:rax_22 = muls.dp.q(0x6bca1af286bca1b, *(r15 + 0x48) - r8_5)
        int64_t rdx_21 = rdx_20 s>> 2
        
        if (rdx_21 != neg.q(rdx_21 u>> 0x3f))
            int64_t rbx_4 = 0
            int64_t var_c8_1 = 0
            int64_t* buffer1_3 = buffer1_6
            int64_t rdx_26
            
            do
                int64_t* buffer2_2 = *(r15 + 0x70) + r14_2
                
                if (*(buffer2_2 + 0x24) == *(rbx_4 + r8_5 + 0x2c))
                    if (*(buffer2_2 + 0x2c) == 0)
                        int64_t* buffer2_1 = buffer2_2
                        
                        if (buffer2_2[3] u>= 0x10)
                            buffer2_1 = *buffer2_2
                        
                        int64_t* buffer1_1 = buffer1_3
                        
                        if (buffer1_3[3] u>= 0x10)
                            buffer1_1 = *buffer1_3
                        
                        uint64_t count_1 = buffer1_3[2]
                        int32_t rax_31
                        
                        if (count_1 == buffer2_2[2])
                            rax_31 = memcmp(buffer1_1, buffer2_1, count_1)
                        
                        if (count_1 != buffer2_2[2] || rax_31 != 0)
                            buffer2_2.b = 0
                        else
                            buffer2_2.b = 1
                    else
                        sub_140592d30(&var_80, buffer1_3)
                        int128_t* buffer1_7 = &var_80
                        int128_t* buffer1_2 = var_80.q
                        int64_t r15_1 = var_68
                        
                        if (r15_1 u>= 0x10)
                            buffer1_7 = buffer1_2
                        
                        int128_t* buffer1_4 = &var_80
                        
                        if (r15_1 u>= 0x10)
                            buffer1_4 = buffer1_2
                        
                        uint64_t count = count_2
                        void* rax_26 = buffer1_4 + count
                        int128_t* buffer1_8 = &var_80
                        
                        if (r15_1 u>= 0x10)
                            buffer1_8 = buffer1_2
                        
                        void* rsi_3 = rax_26 - buffer1_8
                        
                        if (buffer1_8 u> rax_26)
                            rsi_3 = nullptr
                        
                        if (rsi_3 != 0)
                            char* rbx_5 = nullptr
                            
                            do
                                *(rbx_5 + buffer1_7) = tolower(sx.d(*(rbx_5 + buffer1_8)))
                                rbx_5 = &rbx_5[1]
                            while (rbx_5 != rsi_3)
                            
                            r15_1 = var_68
                            count = count_2
                            buffer1_2 = var_80.q
                        
                        int64_t* buffer2 = buffer2_2
                        
                        if (buffer2_2[3] u>= 0x10)
                            buffer2 = *buffer2_2
                        
                        int128_t* buffer1 = &var_80
                        
                        if (r15_1 u>= 0x10)
                            buffer1 = buffer1_2
                        
                        int32_t rax_28
                        
                        if (count == buffer2_2[2])
                            rax_28 = memcmp(buffer1, buffer2, count)
                        
                        if (count != buffer2_2[2] || rax_28 != 0)
                            buffer2_2.b = 0
                        else
                            buffer2_2.b = 1
                        
                        if (r15_1 u>= 0x10)
                            int128_t* buffer1_5 = buffer1_2
                            
                            if (r15_1 + 1 u>= 0x1000)
                                buffer1_2 = *(buffer1_2 - 8)
                                
                                if (buffer1_5 - buffer1_2 - 8 u> 0x1f)
                                    _invalid_parameter_noinfo_noreturn()
                                    noreturn
                            
                            j_sub_140a74f90(buffer1_2)
                        
                        r15 = arg1
                        rbx_4 = var_c8_1
                        i_1 = i_2
                        r14_2 = var_d8_1
                    
                    if (buffer2_2.b != 0)
                        int64_t* rdi_5 = *(r15 + 0x70) + r14_2
                        int128_t* rbx_6 = arg2[1]
                        
                        if (arg2[2] == rbx_6)
                            sub_1429916a0(arg2, rbx_6, rdi_5)
                        else
                            sub_140592d30(rbx_6, rdi_5)
                            rbx_6[2].d = rdi_5[4].d
                            *(rbx_6 + 0x24) = *(rdi_5 + 0x24)
                            *(rbx_6 + 0x28) = rdi_5[5].d
                            *(rbx_6 + 0x2c) = *(rdi_5 + 0x2c)
                            arg2[1] += 0x30
                        
                        break
                
                i_1 += 1
                i_2 = i_1
                rbx_4 += 0x98
                var_c8_1 = rbx_4
                buffer1_3 = &buffer1_3[4]
                r8_5 = *(r15 + 0x40)
                int64_t rax_32
                int64_t rdx_25
                rdx_25:rax_32 = muls.dp.q(0x6bca1af286bca1b, *(r15 + 0x48) - r8_5)
                rdx_26 = rdx_25 s>> 2
            while (i_1 u< rdx_26 + (rdx_26 u>> 0x3f))
        
        int64_t r8_8 = var_a0 + 1
        var_a0 = r8_8
        r14_2 += 0x30
        var_d8_1 = r14_2
        int64_t rax_39
        int64_t rdx_30
        rdx_30:rax_39 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(r15 + 0x78) - *(r15 + 0x70))
        int64_t rdx_31 = rdx_30 s>> 3
        result = rdx_31 u>> 0x3f
        
        if (r8_8 u>= rdx_31 + result)
            break
        
        buffer1_6 = buffer1_9

int64_t* buffer1_11 = buffer1_9

if (buffer1_11 != 0)
    sub_1409091b0(buffer1_11, var_b8_1.q)
    int64_t* buffer1_12 = buffer1_11
    
    if (((var_b8_1:8.q - buffer1_11) & 0xffffffffffffffe0) u>= 0x1000)
        buffer1_11 = buffer1_11[-1]
        
        if (buffer1_12 - buffer1_11 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    result = j_sub_140a74f90(buffer1_11)

__security_check_cookie(rax_1 ^ &var_f8)
return result
