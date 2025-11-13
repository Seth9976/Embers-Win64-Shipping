// 函数: sub_142a983b0
// 地址: 0x142a983b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t* var_f8 = arg3
int64_t* r14 = arg2
struct icu_64::UObject::icu_64::StringTrieBuilder::VTable** rax_2 = j_sub_142a7dd00(0x70)
struct icu_64::UObject::icu_64::StringTrieBuilder::VTable** var_d8 = rax_2
struct icu_64::UObject::icu_64::BreakIterator::VTable** result = nullptr
struct icu_64::StringTrieBuilder::icu_64::UCharsTrieBuilder::VTable** rdi

if (rax_2 == 0)
    rdi = nullptr
else
    rdi = sub_142b109a0(rax_2)

struct icu_64::StringTrieBuilder::icu_64::UCharsTrieBuilder::VTable** var_a0 = rdi

if (rdi == 0 && *arg3 s<= rdi.d)
    *arg3 = 7

struct icu_64::UObject::icu_64::StringTrieBuilder::VTable** rax_4 = j_sub_142a7dd00(0x70)
struct icu_64::UObject::icu_64::StringTrieBuilder::VTable** var_d8_1 = rax_4
struct icu_64::StringTrieBuilder::icu_64::UCharsTrieBuilder::VTable** rcx_2

if (rax_4 == 0)
    rcx_2 = nullptr
else
    rcx_2 = sub_142b109a0(rax_4)

struct icu_64::StringTrieBuilder::icu_64::UCharsTrieBuilder::VTable** var_98 = rcx_2

if (rcx_2 == 0 && *arg3 s<= rcx_2.d)
    *arg3 = 7

if (*arg3 s<= 0)
    int32_t var_128_1 = 0
    int32_t var_11c_1 = 0
    int64_t rsi_1 = sx.q(*(arg1 + 0x10))
    void* rax_6 = sub_142a98f00(rsi_1)
    void* var_90_1 = rax_6
    int32_t* rbx_1 = nullptr
    int64_t var_b8_1 = 0
    
    if (rsi_1.d s> 0)
        int64_t count = rsi_1 << 2
        int32_t* rax_7 = sub_142a7dd00(count)
        
        if (rax_7 != 0)
            memset(rax_7, 0, count)
            sub_142a7dcd0(0)
            rbx_1 = rax_7
            int32_t* var_b8_2 = rbx_1
    
    int64_t* rsi_4 = nullptr
    int64_t* var_e8_1 = nullptr
    int64_t* rbp_1 = nullptr
    int64_t* var_c8_1 = nullptr
    int64_t var_d8_2 = 0
    
    if (*(arg1 + 0x10) s<= 0)
    label_142a98581:
        int32_t r13_1 = 0
        int32_t var_120_1 = 0
        int64_t r15 = 0
        int64_t var_118_1 = 0
        int64_t rax_11 = rsi_1
        
        if (rax_11 s> 0)
            void* rbp_2 = rax_6 + 8
            void* var_d0_1 = rax_6 + 8
            
            do
                int16_t rax_13 = *rbp_2
                int32_t r9_2
                
                if (rax_13 s< 0)
                    r9_2 = *(rbp_2 + 4)
                else
                    r9_2 = sx.d(rax_13) s>> 5
                
                int32_t rax_15 = sub_142a491f0(rbp_2 - 8, 0x2e, 0, r9_2)
                
                if (rax_15 s> 0xffffffff)
                    int16_t rcx_11 = *rbp_2
                    int32_t rcx_13
                    
                    if (rcx_11 s< 0)
                        rcx_13 = *(rbp_2 + 4)
                    else
                        rcx_13 = sx.d(rcx_11) s>> 5
                    
                    if (rax_15 + 1 != rcx_13)
                        int32_t rdx_4 = -1
                        int32_t var_124_1 = 0xffffffff
                        int32_t rcx_14 = 0
                        int32_t var_100_1 = 0
                        int64_t r12_2 = 0
                        void* r15_1 = rax_6 + 8
                        int64_t rax_16 = var_118_1
                        
                        do
                            if (r12_2 != rax_16)
                                char rax_17
                                
                                if ((*r15_1 & 1) == 0)
                                    int16_t rcx_15 = *r15_1
                                    int32_t rax_19
                                    
                                    if (rcx_15 s< 0)
                                        rax_19 = *(r15_1 + 4)
                                    else
                                        rax_19 = sx.d(rcx_15) s>> 5
                                    
                                    int32_t r8_1 = 0
                                    
                                    if (rax_19 s< 0)
                                        r8_1 = rax_19
                                    
                                    int32_t rdx_5
                                    
                                    if (rax_15 + 1 s>= 0)
                                        int32_t rax_20 = rax_19 - r8_1
                                        rdx_5 = rax_15 + 1
                                        
                                        if (rax_15 + 1 s> rax_20)
                                            rdx_5 = rax_20
                                    else
                                        rdx_5 = 0
                                    
                                    void* r9_3 = r15_1 + 2
                                    
                                    if ((rcx_15.b & 2) == 0)
                                        r9_3 = *(r15_1 + 0x10)
                                    
                                    rax_17 =
                                        sub_142a48fb0(rbp_2 - 8, 0, rax_15 + 1, r9_3, r8_1, rdx_5)
                                    rcx_14 = var_100_1
                                    rdx_4 = var_124_1
                                else
                                    rax_17 = not.b(*rbp_2) & 1
                                
                                if (rax_17 == 0)
                                    int32_t rax_21 = rbx_1[r12_2]
                                    
                                    if (rax_21 != 0)
                                        if ((rax_21.b & 1) != 0)
                                            rdx_4 = rcx_14
                                        
                                        var_124_1 = rdx_4
                                    else
                                        rbx_1[r12_2] = 3
                                
                                rax_16 = var_118_1
                            
                            rcx_14 += 1
                            var_100_1 = rcx_14
                            r12_2 += 1
                            r15_1 += 0x40
                        while (r12_2 s< rsi_1)
                        
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                        Concurrency::details::_SyncOriginator<uint64_t>::_SyncOriginator<uint64_t>(
                            &var_88, (sx.q(var_120_1) << 6) + rax_6, 0, rax_15 + 1)
                        r15 = var_118_1
                        
                        if (var_124_1 == 0xffffffff && rbx_1[r15] == 0)
                            int16_t var_80
                            int32_t r8_4
                            int32_t var_7c
                            
                            if (var_80 s< 0)
                                r8_4 = var_7c
                            else
                                r8_4 = sx.d(var_80) s>> 5
                            sub_142a49810(&var_88, 0, r8_4)
                            sub_142b10b60(rdi, &var_88, 1, var_f8)
                            var_128_1 += 1
                            rbx_1[r15] = 3
                        
                        sub_142a47ff0(&var_88)
                        rbp_2 = var_d0_1
                
                var_120_1 += 1
                r15 += 1
                var_118_1 = r15
                rbp_2 += 0x40
                var_d0_1 = rbp_2
            while (r15 s< rsi_1)
            
            rsi_4 = var_e8_1
            rbp_1 = var_c8_1
            r14 = arg2
            rax_11 = rsi_1
        
        result = nullptr
        int64_t r12_3 = 0
        
        if (rax_11 s> 0)
            void* r15_2 = rax_6 + 8
            
            do
                if (rbx_1[r12_3] != 0)
                    sub_142b10b60(rcx_2, (sx.q(r13_1) << 6) + rax_6, 2, var_f8)
                    var_11c_1 += 1
                else
                    int16_t rax_23 = *r15_2
                    int32_t r8_6
                    
                    if (rax_23 s< 0)
                        r8_6 = *(r15_2 + 4)
                    else
                        r8_6 = sx.d(rax_23) s>> 5
                    
                    sub_142a49810(r15_2 - 8, 0, r8_6)
                    sub_142b10b60(rdi, (sx.q(r13_1) << 6) + rax_6, 2, var_f8)
                    var_128_1 += 1
                
                r13_1 += 1
                r12_3 += 1
                r15_2 += 0x40
            while (r12_3 s< rsi_1)
            
            rsi_4 = var_e8_1
            rbp_1 = var_c8_1
            r14 = arg2
            result = nullptr
        
        if (var_128_1 s<= 0)
        label_142a9889c:
            
            if (var_11c_1 s<= 0)
            label_142a988c1:
                struct icu_64::UObject::icu_64::BreakIterator::VTable** rax_27 =
                    j_sub_142a7dd00(0x160)
                struct icu_64::UObject::icu_64::BreakIterator::VTable** var_c0_2 = rax_27
                
                if (rax_27 != 0)
                    int64_t* r9_8 = rsi_4
                    rsi_4 = nullptr
                    int64_t var_e8_3
                    __builtin_memset(&var_e8_3, 0, 0x18)
                    int64_t* r8_9 = rbp_1
                    rbp_1 = nullptr
                    r14 = nullptr
                    result = sub_142a97c80(rax_27, arg2, r8_9, r9_8, var_f8)
            else
                rbp_1 = sub_142b10c70(rcx_2, 0, var_f8)
                
                if (*var_f8 s<= 0)
                    goto label_142a988c1
        else
            int64_t* rax_25 = sub_142b10c70(rdi, 0, var_f8)
            rsi_4 = rax_25
            int64_t* var_e8_2 = rax_25
            
            if (*var_f8 s<= 0)
                goto label_142a9889c
    else
        void* rax_8 = arg1 + 8
        int32_t* r12_1 = rbx_1
        
        while (true)
            void* rax_9 = sub_142ae72d0(rax_8, result.d)
            
            if (rax_9 == 0)
                *var_f8 = 7
                result = nullptr
                break
            
            sub_142a48100((sx.q(result.d) << 6) + rax_6, rax_9)
            *r12_1 = 0
            r12_1 = &r12_1[1]
            result = zx.q(result.d + 1)
            rax_8 = arg1 + 8
            
            if (result.d s>= *(arg1 + 0x10))
                goto label_142a98581
    
    if (rbp_1 != 0)
        sub_142a97dd0(rbp_1)
        sub_142a47920(rbp_1)
    
    if (rsi_4 != 0)
        sub_142a97dd0(rsi_4)
        sub_142a47920(rsi_4)
    
    sub_142a7dcd0(rbx_1)
    
    if (rax_6 != 0)
        if (*(rax_6 - 8) == 0)
            j_sub_140a74f90(rax_6 - 8)
        else
            (**rax_6)(rax_6, 3)

if (rcx_2 != 0)
    (*rcx_2)->__offset(0x0).q(rcx_2, 1)

if (rdi != 0)
    struct icu_64::StringTrieBuilder::icu_64::UCharsTrieBuilder::VTable* r8_10 = *rdi
    r8_10->__offset(0x0).q(rdi, 1, r8_10)

if (r14 != 0)
    int64_t r8_11 = *r14
    (*r8_11)(r14, 1, r8_11)

__security_check_cookie(rax_1 ^ &var_158)
return result
