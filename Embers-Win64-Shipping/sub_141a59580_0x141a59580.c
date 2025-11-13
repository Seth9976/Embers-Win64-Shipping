// 函数: sub_141a59580
// 地址: 0x141a59580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* result = arg6
void* result_1 = result
uint64_t var_118 = arg4
void* result_3 = arg1

if (arg2 != 0)
    int32_t r8 = arg4[1].d
    uint64_t var_100_1 = *arg4
    int32_t var_f8_1 = r8
    
    if (arg2 == 2)
        int32_t* i_1 = *(arg1 + 0xc0)
        int32_t* i = arg1
        
        if (i_1 != 0)
            i = i_1
        
        for (result = &i[sx.q(*(arg1 + 0xc8)) * 6]; i != result; i = &i[6])
            if (*(i + 0x10) == arg3 && i[1] == var_100_1:4.d && *i == var_100_1.d && i[2] == r8)
                goto label_141a59a37
    
    result = sub_140d3c6e0(result_3 + 0x130)
    void* rsi_1 = result_3 + 0xd0
    void* result_4 = result
    void* rcx_3 = *(rsi_1 + 0x40)
    void* r9_1 = rsi_1
    
    if (rcx_3 != 0)
        r9_1 = rcx_3
    
    void* rdx = r9_1
    void* r8_1 = r9_1 + (sx.q(*(rsi_1 + 0x48)) << 3)
    int32_t rdx_4
    
    if (r9_1 != r8_1)
        while (*rdx != arg3)
            rdx += 8
            
            if (rdx == r8_1)
                goto label_141a596a1
        
        rdx_4 = ((rdx - r9_1) s>> 3).d
    
    uint128_t var_e8
    int128_t var_d8
    char result_2
    uint128_t zmm0
    
    if (r9_1 == r8_1 || rdx_4 == 0xffffffff)
    label_141a596a1:
        result = (*(*arg5 + 0x10))(arg5, &var_e8, result_4)
        
        if ((result_2 & 1) != 0)
            int64_t r14_1 = sx.q(*(rsi_1 + 0x48))
            int32_t rax_4 = (r14_1 + 1).d
            *(rsi_1 + 0x48) = rax_4
            
            if (rax_4 s> *(rsi_1 + 0x4c))
                sub_1407752f0(rsi_1, r14_1.d)
            
            void* rax_5 = *(rsi_1 + 0x40)
            
            if (rax_5 != 0)
                rsi_1 = rax_5
            
            char var_a0
            char rcx_7 = (var_a0 & 0xfe) | 2
            char var_a0_1 = rcx_7
            *(rsi_1 + (r14_1 << 3)) = arg3
            uint128_t var_c0
            int128_t zmm1
            
            if ((result_2 & 1) == 0)
                int128_t var_b0
                zmm1 = var_b0
                zmm0 = var_c0
            else
                zmm0 = var_e8
                char result_5 = result_2 & 0xfe
                zmm1 = var_d8
                result_2 = result_5
                rcx_7 = (rcx_7 ^ ((result_5 ^ rcx_7) & 2)) | 1
                var_a0_1 = rcx_7
                var_c0 = zmm0
                int128_t var_b0_1 = zmm1
            
            int32_t r8_5 = 0
            char var_70
            char rdx_7 = var_70 & 0xfe
            int32_t var_98 = 0
            char var_70_1 = rdx_7 | 2
            uint128_t var_90
            int128_t var_80
            
            if ((rcx_7 & 1) != 0)
                rcx_7 &= 0xfe
                var_a0_1 = rcx_7
                var_70_1 = (((rcx_7 ^ rdx_7) & 2) ^ rdx_7) | 1
                var_90 = zmm0
                var_80 = zmm1
            
            int64_t rsi_2 = sx.q(*(result_3 + 0x128))
            char var_48
            char rax_14 = (var_48 & 0xfe) | 2
            int32_t rax_15 = (rsi_2 + 1).d
            *(result_3 + 0x128) = rax_15
            
            if (rax_15 s> *(result_3 + 0x12c))
                sub_1407755b0(result_3 + 0x120)
                r8_5 = var_98
            
            int32_t* rcx_16 = rsi_2 * 0x58 + *(result_3 + 0x120)
            *rcx_16 = r8_5
            char rax_16 = (rcx_16[0xa].b & 0xfe) | 2
            rcx_16[0xa].b = rax_16
            
            if ((var_70_1 & 1) != 0)
                rcx_16[0xa].b = rax_16 | 1
                char rax_17 = var_70_1 & 0xfe
                char var_70_2 = rax_17
                rcx_16[0xa].b &= 0xfd
                rcx_16[0xa].b |= rax_17 & 2
                *(rcx_16 + 8) = var_90
                *(rcx_16 + 0x18) = var_80
            
            char rax_18 = (rcx_16[0x14].b & 0xfe) | 2
            rcx_16[0x14].b = rax_18
            
            if ((rax_14 & 1) != 0)
                rcx_16[0x14].b = rax_18 | 1
                char rax_19 = rax_14 & 0xfe
                char var_48_2 = rax_19
                rcx_16[0x14].b &= 0xfd
                rcx_16[0x14].b |= rax_19 & 2
                uint128_t var_68
                *(rcx_16 + 0x30) = var_68
                int128_t var_58
                *(rcx_16 + 0x40) = var_58
            
            sub_141a32310(&var_98)
            
            if ((var_a0_1 & 1) != 0)
                uint128_t* rcx_18 = &var_c0
                
                if ((var_a0_1 & 2) == 0)
                    rcx_18 = var_c0.q
                
                (**rcx_18)(rcx_18, 0)
                
                if ((var_a0_1 & 2) == 0)
                    sub_140a74f90(var_c0.q)
            
            if (arg2 == 2)
                int64_t rcx_20 = sx.q(*(result_3 + 0x128)) * 0x58
                int64_t rax_23 = *(result_3 + 0x120)
                *(rcx_20 + rax_23 - 0x58) += 1
                int64_t* rax_24 = var_118
                int32_t rax_25 = rax_24[1].d
                var_118 = *rax_24
                int32_t var_110_2 = rax_25
                sub_141a46610(&var_118, result_1, result_4)
            
            (*(*arg5 + 8))(arg5, result_4)
            result = zx.q(result_2)
            
            if ((result.b & 1) != 0)
                uint128_t* rcx_23 = &var_e8
                
                if ((result.b & 2) == 0)
                    rcx_23 = var_e8.q
                
                result.b &= 0xfe
                char var_c8_1 = result.b
                result = (**rcx_23)(rcx_23, 0)
                
                if ((var_c8_1 & 2) == 0)
                    result = sub_140a74f90(var_e8.q)
            
            if (arg2 == 2)
                goto label_141a599d7
    else if (arg2 == 2)
        int32_t* rbx_2 = sx.q(rdx_4) * 0x58 + *(result_3 + 0x120)
        
        if (*rbx_2 != 0)
        label_141a59802:
            zmm0 = zx.o(*arg4)
            int32_t rax_12 = arg4[1].d
            *rbx_2 += 1
            var_118 = zmm0.q
            int32_t var_110_1 = rax_12
            sub_141a46610(&var_118, result_1, result_4)
        label_141a599d7:
            int64_t rbx_4 = sx.q(*(result_3 + 0xc8))
            int32_t rax_28 = (rbx_4 + 1).d
            *(result_3 + 0xc8) = rax_28
            
            if (rax_28 s> *(result_3 + 0xcc))
                sub_141a63ee0(result_3, rbx_4.d)
            
            result = *(result_3 + 0xc0)
            int64_t rcx_26 = rbx_4 * 3
            
            if (result != 0)
                result_3 = result
            
            *(result_3 + (rcx_26 << 3)) = var_100_1.o
            *(result_3 + (rcx_26 << 3) + 0x10) = arg3
        else
            result = (*(*arg5 + 0x10))(arg5, &var_e8, result_4)
            char result_6 = result_2
            
            if ((result_6 & 1) != 0)
                char rax_8 = rbx_2[0x14].b
                
                if ((rax_8 & 1) != 0)
                    void* rcx_9 = &rbx_2[0xc]
                    
                    if ((arg2 & rax_8) == 0)
                        rcx_9 = *(rbx_2 + 0x30)
                    
                    rbx_2[0x14].b = rax_8 & 0xfe
                    (**rcx_9)(rcx_9, 0)
                    
                    if ((rbx_2[0x14].b & 2) == 0)
                        sub_140a74f90(*(rbx_2 + 0x30))
                    
                    result_6 = result_2
                
                if ((result_6 & 1) != 0)
                    result_6 &= 0xfe
                    rbx_2[0x14].b = (((rbx_2[0x14].b ^ result_6) & 2) ^ rbx_2[0x14].b) | 1
                    *(rbx_2 + 0x30) = var_e8
                    *(rbx_2 + 0x40) = var_d8
                    
                    if ((result_6 & 1) != 0)
                        uint128_t* rcx_11 = &var_e8
                        
                        if ((result_6 & 2) == 0)
                            rcx_11 = var_e8.q
                        
                        (**rcx_11)(rcx_11, 0)
                        
                        if ((result_6 & 2) == 0)
                            sub_140a74f90(var_e8.q)
                
                goto label_141a59802

label_141a59a37:
__security_check_cookie(rax_1 ^ &var_138)
return result
