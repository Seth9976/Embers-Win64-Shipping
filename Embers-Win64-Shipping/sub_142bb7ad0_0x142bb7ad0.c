// 函数: sub_142bb7ad0
// 地址: 0x142bb7ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_838
int64_t rax_1 = __security_cookie ^ &var_838
void* r15 = *(arg1 + 8)
int32_t r14 = arg4
char var_7e8 = 0
int64_t rdi = *(*(r15 + 0x2a0) + 0x18)
int32_t result

if (arg3 u< *(r15 + 0x10) || *(*(r15 + 0xd0) + 0x50) != 0)
    if (test_bit(r14, 0xa))
        r14 |= 3
    
    if (arg2 == 0)
        *(arg1 + 0xfc) = 0x10000
        *(arg1 + 0x100) = 0x10000
    else
        *(arg1 + 0xfc) = *(arg2 + 0x1c)
        *(arg1 + 0x100) = *(arg2 + 0x20)
    
    __builtin_strncpy(arg1 + 0x60, "ltuo", 4)
    *(arg1 + 0x98) = 0
    int64_t (* var_7f8_1)(void* arg1, int32_t arg2) = sub_142bbac80
    bool cond:0_1 = (r14.b & 3) == 0
    *(arg1 + 0xf8) = cond:0_1
    *(arg1 + 0xf9) = not.b(r14.b) & 1
    void var_7b8
    result = (*rdi)(&var_7b8, r15, arg2, arg1, *(r15 + 0x248), *(r15 + 0x2e0), cond:0_1, 
        r14 s>> 0x10 & 0xf, var_7f8_1)
    
    if (result == 0)
        uint8_t var_75b_1 = (r14 u>> 0xa).b & 1
        int32_t var_144_1 = *(r15 + 0x220)
        int64_t var_140_1 = *(r15 + 0x228)
        int64_t var_138_1 = *(r15 + 0x230)
        int64_t var_130_1 = *(r15 + 0x238)
        int64_t var_98_1 = *(r15 + 0x2f8)
        int32_t var_90_1 = *(r15 + 0x2f0)
        int64_t var_7d0
        int32_t result_2 = sub_142bbace0(&var_7b8, arg3, &var_7d0, &var_7e8)
        int32_t result_1 = result_2
        void* rcx_3 = &var_7b8
        
        if (result_2 != 0)
            (*(rdi + 8))(rcx_3)
        else
            char rax_20 = *(arg1 + 0xf8)
            int128_t var_128
            int128_t var_78 = var_128
            (*(rdi + 8))(rcx_3)
            *(arg1 + 0xb8) &= 1
            *(arg1 + 0xb8) |= 4
            int32_t var_778
            int64_t var_118
            
            if (not(test_bit(r14, 0xa)))
                *(arg1 + 0x40) = sub_142b96160(var_778) s>> 0x10
                *(arg1 + 0x50) = sub_142b96160(var_778) s>> 0x10
                *(*(arg1 + 0xf0) + 0xc) = 0
                int32_t rax_31 = r14 & 0x10
                int32_t rax_34
                
                if (rax_31 == 0)
                    int32_t var_774
                    *(arg1 + 0x4c) = sub_142b96160(var_774) s>> 0x10
                    rax_34 = sub_142b96160(var_774) s>> 0x10
                else
                    rax_34 = (*(r15 + 0x288) - *(r15 + 0x280)) s>> 0x10
                    *(arg1 + 0x4c) = rax_34
                
                *(arg1 + 0x54) = rax_34
                __builtin_strncpy(arg1 + 0x60, "ltuo", 4)
                
                if (arg2 != 0 && *(arg2 + 0x1a) u< 0x18)
                    *(arg1 + 0xb8) |= 0x100
                
                void* r13_1
                
                if (var_78.d != 0x10000 || var_78:0xc.d != 0x10000 || var_78:4.d != 0
                        || var_78:8.d != 0)
                    r13_1 = arg1 + 0x98
                    sub_142b95190(r13_1, &var_78)
                    int32_t rax_38 = sub_142b93e80(*(arg1 + 0x40), var_78.d)
                    int32_t rdx_4 = var_78:0xc.d
                    int32_t rcx_12 = *(arg1 + 0x4c)
                    *(arg1 + 0x40) = rax_38
                    *(arg1 + 0x4c) = sub_142b93e80(rcx_12, rdx_4)
                else
                    r13_1 = arg1 + 0x98
                
                int32_t r12_1 = var_118:4.d
                
                if (var_118.d != 0 || r12_1 != 0)
                    sub_142b95270(r13_1, var_118.d, r12_1)
                    *(arg1 + 0x40) += var_118.d
                    *(arg1 + 0x4c) += r12_1
                
                if ((r14.b & 1) == 0 || var_7e8 != 0)
                    int32_t r12_2 = *(arg1 + 0xfc)
                    int32_t r13_2 = *(arg1 + 0x100)
                    void* var_798
                    int32_t* rbx_2 = *(var_798 + 8)
                    int64_t var_758
                    
                    if (rax_20 == 0 || var_758 == 0)
                        int32_t i = sx.d(*(var_798 + 2))
                        
                        while (i s> 0)
                            int32_t rax_41 = sub_142b93e80(*rbx_2, r12_2)
                            int32_t rcx_15 = rbx_2[1]
                            *rbx_2 = rax_41
                            i -= 1
                            rbx_2[1] = sub_142b93e80(rcx_15, r13_2)
                            rbx_2 = &rbx_2[2]
                    
                    int32_t rax_43 = sub_142b93e80(*(arg1 + 0x40), r12_2)
                    int32_t rcx_17 = *(arg1 + 0x4c)
                    *(arg1 + 0x40) = rax_43
                    *(arg1 + 0x4c) = sub_142b93e80(rcx_17, r13_2)
                
                int32_t var_68
                sub_142b94c20(arg1 + 0x98, &var_68)
                int32_t r8_3 = var_68
                *(arg1 + 0x38) = r8_3
                int32_t var_60
                *(arg1 + 0x30) = var_60 - r8_3
                int32_t var_64
                int32_t var_5c
                *(arg1 + 0x34) = var_5c - var_64
                *(arg1 + 0x3c) = var_5c
                
                if (rax_31 != 0)
                    sub_142b9a4e0(arg1 + 0x30, *(arg1 + 0x4c))
                
                result_1 = result_2
            else
                void* rdi_1 = *(arg1 + 0xf0)
                int32_t var_780
                *(arg1 + 0x38) = sub_142b96160(var_780) s>> 0x10
                int32_t rax_23 = sub_142b96160(var_778)
                int128_t zmm0_1 = var_78
                *(arg1 + 0x40) = rax_23 s>> 0x10
                *(rdi_1 + 0x10) = zmm0_1
                *(rdi_1 + 0x20) = var_118
                *(rdi_1 + 0xc) = 1
            *(arg1 + 0xd0) = var_7d0
            int32_t var_7c8
            *(arg1 + 0xd8) = var_7c8
            int64_t* rcx_20 = *(*(r15 + 0xd0) + 0x50)
            
            if (rcx_20 != 0)
                (*(*rcx_20 + 8))(rcx_20[1], &var_7d0)
                *(arg1 + 0xd0) = 0
                *(arg1 + 0xd8) = 0
        
        result = result_1
else
    result = 6

__security_check_cookie(rax_1 ^ &var_838)
return result
