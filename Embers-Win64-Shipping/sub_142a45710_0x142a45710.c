// 函数: sub_142a45710
// 地址: 0x142a45710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char* rdi = arg4
struct icu_64::UObject::icu_64::Locale::VTable** var_a8 = arg1
*arg1 = &icu_64::Locale::`vftable'{for `icu_64::UObject'}
arg1[5] = &arg1[6]
int32_t r15 = 0
arg1[0x1a] = 0

if (arg2 != 0 || arg3 != 0 || arg4 != 0)
    int32_t var_c8 = 0
    int64_t rax_3 = 0
    uint64_t rbx_1 = 0
    int32_t var_c0 = 0
    int64_t rsi_1 = -1
    
    if (arg2 != 0)
        rax_3 = -1
        
        do
            rax_3 += 1
        while (arg2[rax_3] != 0)
    
    if (arg2 == 0 || rax_3.d u<= 0x15555555)
        int16_t var_8c
        char* var_98 = &var_8c:1
        int32_t var_90_1 = 0x28
        var_8c = 0
        int32_t var_60_1 = 0
        sub_142a8cbd0(&var_98, arg2, rax_3.d, &var_c8)
        char* rax_4
        
        if (arg3 != 0)
            rax_4 = -ffffffffffffffff
            
            do
                rax_4 = &rax_4[1]
            while (*(rax_4 + arg3) != 0)
            
            r15 = rax_4.d
        
        if (arg3 != 0 && rax_4.d u> 0x15555555)
            sub_142a46dc0(arg1)
        else if (rdi == 0)
        label_142a45862:
            
            if (arg5 == 0)
                rsi_1 = var_c0.q
            label_142a4589a:
                uint128_t zmm1
                
                if (rbx_1.d != 0 || r15 != 0)
                    sub_142a8cb30(&var_98, 0x5f, &var_c8)
                    
                    if (r15 != 0)
                        zmm1 = *sub_142a85330(&var_c0, arg3)
                        sub_142a8cbd0(&var_98, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, &var_c8)
                    
                    if (rbx_1.d != 0)
                        sub_142a8cbd0(sub_142a8cb30(&var_98, 0x5f, &var_c8), rdi, rbx_1.d, &var_c8)
                
                if (rsi_1.d != 0)
                    int32_t* r8_5 = &var_c8
                    char** rcx_9 = &var_98
                    
                    if (strchr(arg5, 0x3d) == 0)
                        sub_142a8cb30(rcx_9, 0x5f, r8_5)
                        
                        if (rbx_1.d == 0)
                            sub_142a8cb30(&var_98, 0x5f, &var_c8)
                    else
                        sub_142a8cb30(rcx_9, 0x40, r8_5)
                    
                    zmm1 = *sub_142a85330(&var_c0, arg5)
                    sub_142a8cbd0(&var_98, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, &var_c8)
                
                if (var_c8 s<= 0)
                    sub_142a46540(arg1, var_98, 0)
                else
                    sub_142a46dc0(arg1)
            else
                do
                    rsi_1 += 1
                while (arg5[rsi_1] != 0)
                
                if (rsi_1.d u<= 0x15555555)
                    goto label_142a4589a
                
                sub_142a46dc0(arg1)
        else
            while (*rdi == 0x5f)
                rdi = &rdi[1]
            
            rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rdi[rbx_1] != 0)
            
            if (rbx_1.d u<= 0x15555555)
                int64_t rax_5 = sx.q(rbx_1.d)
                
                if (rax_5 s> 1)
                    while (rdi[rax_5 - 1] == 0x5f)
                        rbx_1 = zx.q(rbx_1.d - 1)
                        rax_5 -= 1
                        
                        if (rax_5 s<= 1)
                            break
                
                goto label_142a45862
            
            sub_142a46dc0(arg1)
        
        if (var_8c.b != 0)
            sub_142a7dcd0(var_98)
    else
        sub_142a46dc0(arg1)
else
    sub_142a46540(arg1, arg2, arg3.b)

__security_check_cookie(rax_1 ^ &var_e8)
return arg1
