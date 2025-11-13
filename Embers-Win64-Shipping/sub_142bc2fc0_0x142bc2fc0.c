// 函数: sub_142bc2fc0
// 地址: 0x142bc2fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_828
int64_t rax_1 = __security_cookie ^ &var_828
void* r13 = *(arg1 + 8)
int32_t r14 = arg4
void* rsi = arg1
void* rdi = *(r13 + 0xe0)
int32_t result

if (arg3 u< *(r13 + 0x10))
    if (test_bit(r14, 0xa))
        r14 |= 3
    
    *(arg1 + 0xfc) = *(arg2 + 0x1c)
    *(arg1 + 0x100) = *(arg2 + 0x20)
    void* rax_4 = arg1 + 0x98
    uint64_t (* var_7e8_1)(void* arg1, int32_t arg2, int512_t arg3 @ zmm1) = sub_142bc3cd0
    *rax_4 = 0
    *(arg1 + 0x9a) = 0
    arg1.b = (r14.b & 3) == 0
    __builtin_strncpy(rsi + 0x60, "ltuo", 4)
    *(rsi + 0xf8) = arg1.b
    *(rsi + 0xf9) = not.b(r14.b) & 1
    void var_7b8
    result = (**(rdi + 0x18))(&var_7b8, r13, arg2, rsi, 0, 0, arg1.b, r14 s>> 0x10 & 0xf, var_7e8_1)
    
    if (result == 0)
        uint8_t var_75b_1 = (r14 u>> 0xa).b & 1
        int32_t result_1 = sub_142bc3cd0(&var_7b8, arg3, arg5)
        void* rcx_2 = &var_7b8
        
        if (result_1 != 0)
            (*(*(rdi + 0x18) + 8))(rcx_2)
        else
            char rax_11 = *(rsi + 0xf8)
            int128_t var_128
            int128_t var_78 = var_128
            int64_t rdx_2 = *(rdi + 0x18)
            char rax_12 = *(rsi + 0xf9)
            (*(rdx_2 + 8))(rcx_2, rdx_2)
            *(rsi + 0xb8) &= 1
            *(rsi + 0xb8) |= 4
            int32_t var_778
            int64_t var_118
            
            if (not(test_bit(r14, 0xa)))
                *(rsi + 0x40) = sub_142b96160(var_778) s>> 0x10
                *(rsi + 0x50) = sub_142b96160(var_778) s>> 0x10
                *(*(rsi + 0xf0) + 0xc) = 0
                int32_t rax_24 = (*(r13 + 0x154) - *(r13 + 0x14c)) s>> 0x10
                *(rsi + 0x4c) = rax_24
                *(rsi + 0x54) = rax_24
                __builtin_strncpy(rsi + 0x60, "ltuo", 4)
                
                if (*(arg2 + 0x1a) u< 0x18)
                    *(rsi + 0xb8) |= 0x100
                
                void* r13_1
                
                if (var_78.d != 0x10000 || var_78:0xc.d != 0x10000 || var_78:4.d != 0
                        || var_78:8.d != 0)
                    r13_1 = rsi + 0x98
                    sub_142b95190(r13_1, &var_78)
                    int32_t rax_25 = sub_142b93e80(*(rsi + 0x40), var_78.d)
                    int32_t rdx_5 = var_78:0xc.d
                    int32_t rcx_9 = *(rsi + 0x4c)
                    *(rsi + 0x40) = rax_25
                    *(rsi + 0x4c) = sub_142b93e80(rcx_9, rdx_5)
                else
                    r13_1 = rsi + 0x98
                
                int32_t r12_1 = var_118:4.d
                
                if (var_118.d != 0 || r12_1 != 0)
                    sub_142b95270(r13_1, var_118.d, r12_1)
                    *(rsi + 0x40) += var_118.d
                    *(rsi + 0x4c) += r12_1
                
                if ((r14.b & 1) == 0 || rax_12 != 0)
                    int32_t r12_2 = *(rsi + 0xfc)
                    int32_t r13_2 = *(rsi + 0x100)
                    void* var_798
                    int32_t* rbx_2 = *(var_798 + 8)
                    int64_t var_758
                    
                    if (rax_11 == 0 || var_758 == 0)
                        int32_t i = sx.d(*(var_798 + 2))
                        
                        while (i s> 0)
                            int32_t rax_28 = sub_142b93e80(*rbx_2, r12_2)
                            int32_t rcx_12 = rbx_2[1]
                            *rbx_2 = rax_28
                            i -= 1
                            rbx_2[1] = sub_142b93e80(rcx_12, r13_2)
                            rbx_2 = &rbx_2[2]
                    
                    int32_t rax_30 = sub_142b93e80(*(rsi + 0x40), r12_2)
                    int32_t rcx_14 = *(rsi + 0x4c)
                    *(rsi + 0x40) = rax_30
                    *(rsi + 0x4c) = sub_142b93e80(rcx_14, r13_2)
                
                int32_t var_68
                sub_142b94c20(rax_4, &var_68)
                int32_t r8_2 = var_68
                *(rsi + 0x38) = r8_2
                int32_t var_60
                *(rsi + 0x30) = var_60 - r8_2
                int32_t var_64
                int32_t var_5c
                *(rsi + 0x34) = var_5c - var_64
                *(rsi + 0x3c) = var_5c
                
                if ((r14.b & 0x10) != 0)
                    sub_142b9a4e0(rsi + 0x30, *(rsi + 0x4c))
            else
                void* rdi_1 = *(rsi + 0xf0)
                int32_t var_780
                *(rsi + 0x38) = sub_142b96160(var_780) s>> 0x10
                int32_t rax_15 = sub_142b96160(var_778)
                int128_t zmm0_1 = var_78
                *(rsi + 0x40) = rax_15 s>> 0x10
                *(rdi_1 + 0x10) = zmm0_1
                *(rdi_1 + 0x20) = var_118
                *(rdi_1 + 0xc) = 1
        
        result = result_1
else
    result = 6

__security_check_cookie(rax_1 ^ &var_828)
return result
