// 函数: sub_142ada150
// 地址: 0x142ada150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_110 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t rbx = 0
int32_t rdi
rdi.b = arg4 == 7
int32_t rbp = 0
int32_t r15 = -1
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_80 = 2
int32_t var_124 = 0
int32_t r14_1

if (rdi s>= arg6)
    r14_1 = neg.d(arg3)
else
    void* rsi_3 = (sx.q(rdi) << 6) + arg5
    
    do
        int32_t rax_3 = sub_142ada3a0(arg2, arg3, rsi_3)
        
        if (rax_3 s> rbp)
            r15 = rdi
            rbp = rax_3
        
        if (arg7 != 0)
            int32_t var_128 = 0
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_c0_1 = 2
            void** var_108 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_100_1 = 2
            sub_142b62570(&var_108, arg7, 1, 1, &var_128)
            sub_142b62c00(&var_108, rsi_3, &var_c8, &var_128)
            j_sub_142a47ff0(&var_108)
            
            if (var_128 s<= 0)
                int32_t rax_4 = sub_142ada3a0(arg2, arg3, &var_c8)
                
                if (rax_4 s> rbp)
                    r15 = rdi
                    rbp = rax_4
                    var_124 = 1
            
            sub_142a47ff0(&var_c8)
        
        rdi += 1
        rsi_3 += 0x40
    while (rdi s< arg6)
    
    if (r15 s< 0)
        r14_1 = neg.d(arg3)
    else
        if (arg4 s< 0x17)
            char* rax_6 = (*(*arg8 + 0xb0))(arg8)
            int32_t rdx_4
            int32_t r8_3
            
            while (true)
                char rcx_8 = rax_6[rbx]
                rbx += 1
                
                if (rcx_8 == data_14363f540[7][rbx])
                    if (rbx != 7)
                        continue
                    else if (arg4 == 2 && r15 == 0xd)
                        rdx_4 = arg4
                        r8_3 = (rbx - 1).d
                        break
                
                r8_3 = r15 + 1
                
                if (arg4 != 1)
                    r8_3 = r15
                
                rdx_4 = arg4
                break
            
            sub_142a6c030(arg8, rdx_4, r8_3)
            
            if (arg7 != 0)
                sub_142a6c030(arg8, 0x16, var_124)
        
        r14_1 = arg3 + rbp

sub_142a47ff0(&var_88)
__security_check_cookie(rax_1 ^ &var_158)
return zx.q(r14_1)
