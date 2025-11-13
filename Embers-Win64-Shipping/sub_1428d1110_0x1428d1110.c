// 函数: sub_1428d1110
// 地址: 0x1428d1110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
uint32_t result = arg3 - 1
int64_t rbx = arg1

if (result u<= 0x7f)
    int128_t var_58 = *arg5
    arg7(arg5, arg5, arg4)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(arg3 + 7)
    int32_t i_4 = (temp1_1 + (temp0_1 & 7)) s>> 3
    int64_t i_3 = sx.q(i_4)
    int64_t i_2 = i_3
    char var_48[0x18]
    
    if (arg6 == 0)
        int64_t i = 0
        int32_t r10_1 = 0
        
        if (i_4 s> 0 && i_3.d u>= 0x10)
            int32_t rdx_4 = (i_3 - 1).d
            void* r14_1 = &var_58 + sx.q(rdx_4 + 0x10)
            int64_t rax_7 = sx.q(rdx_4)
            void* rdx_5 = rax_7 + arg5
            
            if (&var_48 u> rdx_5 || r14_1 u< arg5)
                int64_t rcx_4 = rax_7 + arg2
                
                if ((&var_48 u> rcx_4 || r14_1 u< arg2) && (arg2 u> rdx_5 || rcx_4 u< arg5)
                        && (arg2 u> rax_7 + rbx || rcx_4 u< rbx))
                    int32_t rax_10 = i_3.d & 0x8000000f
                    
                    if (rax_10 s< 0)
                        rax_10 = ((rax_10 - 1) | 0xfffffff0) + 1
                    
                    do
                        r10_1 += 0x10
                        int128_t* rax_13 = &var_48[i]
                        i += 0x10
                        int128_t zmm1 = *(rax_13 + rbx - &var_48)
                        int128_t zmm0 = *(rax_13 + arg5 - &var_48)
                        *rax_13 = zmm1
                        *(rax_13 + arg2 - &var_48) = zmm0 ^ zmm1
                    while (i s< sx.q(i_3.d - rax_10))
        
        int64_t r8_1 = sx.q(r10_1)
        
        while (r8_1 s< i_2)
            char* rdx_8 = &var_48[r8_1]
            r8_1 += 1
            char rcx_7 = *(rdx_8 + rbx - &var_48)
            char rax_14 = rdx_8[arg5 - &var_48] ^ rcx_7
            *rdx_8 = rcx_7
            *(rdx_8 + arg2 - &var_48) = rax_14
    else if (i_4 s> 0)
        void* rcx_2 = arg5 - rbx
        void* rdx_3 = &var_48 - rbx
        char* rdi_1 = arg2 - rbx
        int64_t i_1
        
        do
            char rax_5 = *(rcx_2 + rbx) ^ *rbx
            *(rdx_3 + rbx) = rax_5
            rdi_1[rbx] = rax_5
            rbx += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(arg3)
    int32_t rdx_10 = temp2_1 & 7
    int32_t rax_17 = temp3_1 + rdx_10
    int32_t rax_19 = (rax_17 & 7) - rdx_10
    int64_t rbx_2 = sx.q(rax_17 s>> 3)
    result = &var_58
    
    if (rax_19 != 0)
        char r8_2 = *(&var_58:1 + rbx_2)
        char r9 = *(&var_58:4 + rbx_2)
        *arg5 = *(&var_58 + rbx_2) << rax_19.b | r8_2 u>> (8 - rax_19.b)
        uint8_t rdx_12 = *(&var_58:2 + rbx_2)
        *(arg5 + 1) = r8_2 << rax_19.b | rdx_12 u>> (8 - rax_19.b)
        uint8_t r8_3 = *(&var_58:3 + rbx_2)
        char rdx_13 = *(&var_58:5 + rbx_2)
        *(arg5 + 2) = r8_3 u>> (8 - rax_19.b) | rdx_12 << rax_19.b
        char rcx_16 = rax_19.b
        char r8_4 = *(&var_58:6 + rbx_2)
        *(arg5 + 3) = r9 u>> (8 - rax_19.b) | r8_3 << rcx_16
        char rcx_18 = rax_19.b
        char rdx_14 = *(&var_58:7 + rbx_2)
        *(arg5 + 5) = r8_4 u>> (8 - rax_19.b) | rdx_13 << rcx_18
        *(arg5 + 6) = r8_4 << rcx_18 | rdx_14 u>> (8 - rax_19.b)
        char r8_5 = *(&var_58:8 + rbx_2)
        *(arg5 + 4) = r9 << rcx_16 | rdx_13 u>> (8 - rax_19.b)
        *(arg5 + 7) = rdx_14 << rax_19.b | r8_5 u>> (8 - rax_19.b)
        char rdx_15 = *(&var_58:9 + rbx_2)
        *(arg5 + 8) = r8_5 << rax_19.b | rdx_15 u>> (8 - rax_19.b)
        uint8_t r8_6 = *(&var_58:0xa + rbx_2)
        *(arg5 + 9) = rdx_15 << rax_19.b | r8_6 u>> (8 - rax_19.b)
        char rdx_16 = *(&var_58:0xb + rbx_2)
        *(arg5 + 0xa) = r8_6 << rax_19.b | rdx_16 u>> (8 - rax_19.b)
        char r8_7 = *(&var_58:0xc + rbx_2)
        *(arg5 + 0xb) = rdx_16 << rax_19.b | r8_7 u>> (8 - rax_19.b)
        char rdx_17 = *(&var_58:0xd + rbx_2)
        *(arg5 + 0xc) = r8_7 << rax_19.b | rdx_17 u>> (8 - rax_19.b)
        char r8_8 = *(&var_58:0xe + rbx_2)
        *(arg5 + 0xd) = rdx_17 << rax_19.b | r8_8 u>> (8 - rax_19.b)
        uint8_t rdx_18 = *(&var_58:0xf + rbx_2)
        result.b = var_48[rbx_2] u>> (8 - rax_19.b)
        result.b |= rdx_18 << rax_19.b
        *(arg5 + 0xe) = r8_8 << rax_19.b | rdx_18 u>> (8 - rax_19.b)
        *(arg5 + 0xf) = result.b
    else
        *arg5 = *(&var_58 + rbx_2)

__security_check_cookie(rax_1 ^ &var_78)
return result
