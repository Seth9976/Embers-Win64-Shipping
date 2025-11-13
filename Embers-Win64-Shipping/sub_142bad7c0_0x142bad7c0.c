// 函数: sub_142bad7c0
// 地址: 0x142bad7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t r12 = arg3.d
int32_t result
void* var_198
int128_t var_68

if (*(arg1 + 0x8c) == 0xffffffff || (arg4.b & 8) != 0)
label_142bada71:
    int32_t r13_3 = arg4 & 1
    int32_t result_1
    
    if (r13_3 == 0 && arg1[0x11].b == r13_3.b)
        result_1 = r13_3 + 0x24
    else if (not(test_bit(arg4, 0xe)))
        int32_t result_2
        int512_t zmm1
        result_2, zmm1 = sub_142bb4c00(&var_198, arg1, arg2, arg4, 0)
        result_1 = result_2
        
        if (result_2 == 0)
            __builtin_strncpy(arg2 + 0x60, "ltuo", 4)
            *(arg2 + 0xc0) = 0
            *(arg2 + 0xb8) = 0
            int32_t result_3 = sub_142bb28c0(&var_198, zx.q(r12), 0, 0, zmm1, arg7)
            result_1 = result_3
            
            if (result_3 == 0)
                void* var_180
                
                if (*(arg2 + 0x60) != 0x636f6d70)
                    *(arg2 + 0x98) = *(var_180 + 0x18)
                    *(arg2 + 0xa8) = *(var_180 + 0x28)
                    *(arg2 + 0xb8) = *(var_180 + 0x38)
                    *(arg2 + 0xb8) &= 0xfffffdff
                    int32_t var_140
                    
                    if (var_140 != 0)
                        sub_142b95270(arg2 + 0x98, neg.d(var_140), 0)
                else
                    *(arg2 + 0xc0) = *(var_180 + 0x50)
                    *(arg2 + 0xc8) = *(var_180 + 0x58)
                void* var_b0
                
                if ((arg4.b & 2) == 0)
                    if (*(var_b0 + 0x1f5) == 0)
                        *(arg2 + 0xb8) |= 8
                    else
                        int32_t rcx_17 = *(var_b0 + 0x1f8)
                        
                        if (rcx_17 == 0)
                            *(arg2 + 0xb8) |= 0x20
                        else if (rcx_17 != 1)
                            if (rcx_17 == 4)
                                *(arg2 + 0xb8) |= 0x30
                            else if (rcx_17 != 5)
                                *(arg2 + 0xb8) |= 8
                            else
                                *(arg2 + 0xb8) |= 0x10
                result_1 = sub_142bb08d0(&var_198, r12)
            
            sub_142b92de0(&var_68, 0, *(var_198 + 0x98), 0)
            
            if (r13_3 == 0 && *(arg1[8] + 2) u< 0x18)
                *(arg2 + 0xb8) |= 0x100
    else
        result_1 = 6
    
    result = result_1
else
    void* rax_2 = *(arg2 + 8)
    
    if ((*(rax_2 + 4) & 0x7fff0000) != 0 || (*(rax_2 + 8) & 0x8000) != 0)
        goto label_142bada71
    
    int32_t rax_3 = *(arg1 + 0x1c)
    int32_t r13_1 = arg1[4].d
    result = sub_142bb27b0(arg1, arg2, arg3, arg4, arg5)
    
    if (result.b == 0x9d)
        void* rbx_1 = *(arg2 + 8)
        
        if ((*(rbx_1 + 8) & 1) != 0)
            goto label_142bada71
        
        int16_t var_1b0 = 0
        int16_t var_1b4 = 0
        int16_t var_1ac = 0
        int16_t var_1b8 = 0
        
        if (*(rbx_1 + 0x42c) != 0)
            char var_1c8
            var_1c8.q = &var_1ac
            (*(*(rbx_1 + 0x2d0) + 0x118))(rbx_1, 0, zx.q(r12), &var_1b0, var_1c8)
            
            if (*(rbx_1 + 0x190) == 0)
                int32_t rdx_1
                int32_t r8_2
                
                if (*(rbx_1 + 0x208) == 0xffff)
                    var_1b4 = *(rbx_1 + 0x13c)
                    rdx_1 = sx.d(*(rbx_1 + 0x13e))
                    r8_2 = sx.d(*(rbx_1 + 0x13c))
                else
                    var_1b4 = *(rbx_1 + 0x24e)
                    rdx_1 = sx.d(*(rbx_1 + 0x250))
                    r8_2 = sx.d(*(rbx_1 + 0x24e))
                
                if (r8_2 - rdx_1 s>= 0)
                    r8_2.w -= rdx_1.w
                    var_1b8 = r8_2.w
                else
                    rdx_1.w -= r8_2.w
                    var_1b8 = rdx_1.w
            else
                var_1c8.q = &var_1b8
                int64_t rdx
                rdx.b = 1
                (*(*(rbx_1 + 0x2d0) + 0x118))(rbx_1, rdx, zx.q(r12), &var_1b4, var_1c8)
            
            int32_t rcx_3 = sx.d(var_1b0)
            *(arg2 + 0x98) = 0
            *(arg2 + 0x30) = 0
            int32_t rax_8 = sub_142b93e80(rcx_3, rax_3)
            uint32_t rcx_4 = zx.d(var_1ac)
            *(arg2 + 0x38) = rax_8
            *(arg2 + 0x3c) = 0
            int32_t rax_9 = sub_142b93e80(rcx_4, rax_3)
            int32_t rcx_5 = sx.d(var_1b4)
            *(arg2 + 0x40) = rax_9
            *(arg2 + 0x44) = 0
            int32_t rax_10 = sub_142b93e80(rcx_5, r13_1)
            uint32_t rcx_6 = zx.d(var_1b8)
            *(arg2 + 0x48) = rax_10
            *(arg2 + 0x4c) = sub_142b93e80(rcx_6, r13_1)
            result = 0
            __builtin_strncpy(arg2 + 0x60, "stib", 4)
            *(arg2 + 0x82) = 1
            *(arg2 + 0x90) = 0
    else if (result == 0)
        void* rsi_1 = *(arg2 + 8)
        
        if ((*(rsi_1 + 8) & 1) != 0)
            int64_t rbx_2 = *(rsi_1 + 0xa0)
            memset(&var_198, 0, 0x140)
            int32_t var_178_1 = arg4
            var_68 = zx.o(0)
            var_198 = rsi_1
            int64_t* var_190_1 = arg1
            void* var_188_1 = arg2
            int64_t var_170_1 = rbx_2
            sub_142bb28c0(&var_198, zx.q(r12), 0, 1, arg6, arg7)
            sub_142b92de0(&var_68, 0, *(var_198 + 0x98), 0)
            bool cond:1_1 = *(arg2 + 0x40) != 0
            int32_t var_148
            *(arg2 + 0x50) = var_148
            int32_t var_8c
            *(arg2 + 0x54) = var_8c
            
            if (not(cond:1_1) && var_148 != 0)
                *(arg2 + 0x40) = sub_142b93e80(var_148, rax_3)
            
            if (*(arg2 + 0x4c) == 0)
                int32_t rcx_11 = *(arg2 + 0x54)
                
                if (rcx_11 != 0)
                    *(arg2 + 0x4c) = sub_142b93e80(rcx_11, r13_1)
        
        result = 0
    else if ((*(*(arg2 + 8) + 8) & 1) != 0)
        goto label_142bada71
__security_check_cookie(rax_1 ^ &var_1e8)
return result
