// 函数: sub_142902860
// 地址: 0x142902860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb0)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t rdi = arg1
int64_t r14 = arg3
int32_t var_58 = *arg4
int64_t rsi = arg2
int32_t var_54 = arg4[1]
int32_t var_50 = arg4[2]
int32_t var_4c = arg4[3]
int32_t var_48 = arg4[4]
int32_t var_44 = arg4[5]
int32_t var_40 = arg4[6]
int32_t var_3c = arg4[7]
int32_t var_38 = *arg5
int32_t var_34 = arg5[1]
int32_t var_30 = arg5[2]
uint64_t i = zx.q(arg5[3])
int32_t var_2c = i.d
int32_t var_68
__builtin_strncpy(&var_68, "expand 32-byte k", 0x10)

if (arg3 != 0)
    int64_t rbx_1
    int64_t temp0_1
    
    do
        rbx_1 = 0x40
        
        if (r14 u< 0x40)
            rbx_1 = r14
        
        int32_t var_a8[0x4]
        sub_142902aa0(&var_a8, &var_68)
        i = 0
        
        if (rbx_1 != 0)
            if (rbx_1 u>= 0x40)
                int64_t rdx_2 = rdi - 1 + rbx_1
                
                if ((rdi u> &var_58:1 + rbx_1 - 0x52 || rdx_2 u< &var_a8)
                        && (rdi u> rsi - 1 + rbx_1 || rdx_2 u< rsi))
                    void* rdx_4 = rsi - &var_a8
                    void* r8_1 = rdi - &var_a8
                    
                    do
                        void var_98
                        int128_t zmm0_1 = *(&var_98 + i)
                        *(rdi + i) = *(rsi + i) ^ *(&var_a8 + i)
                        int128_t zmm1_1 = *(&var_98 + rdx_4 + i) ^ zmm0_1
                        void var_88
                        zmm0_1 = *(&var_88 + i)
                        *(&var_98 + r8_1 + i) = zmm1_1
                        zmm1_1 = *(&var_88 + rdx_4 + i) ^ zmm0_1
                        void var_78
                        zmm0_1 = *(&var_78 + i)
                        *(&var_88 + r8_1 + i) = zmm1_1
                        *(&var_78 + r8_1 + i) = *(&var_78 + rdx_4 + i) ^ zmm0_1
                        i += 0x40
                    while (i u< (rbx_1 & 0xffffffffffffffc0))
            
            while (i u< rbx_1)
                void* rdx_5 = &var_a8 + i
                i += 1
                *(rdi - &var_a8 + rdx_5) = *(rsi - &var_a8 + rdx_5) ^ *rdx_5
        
        var_38 += 1
        rdi += rbx_1
        rsi += rbx_1
        temp0_1 = r14
        r14 -= rbx_1
    while (temp0_1 != rbx_1)

__security_check_cookie(rax_1 ^ &var_c8)
return i
