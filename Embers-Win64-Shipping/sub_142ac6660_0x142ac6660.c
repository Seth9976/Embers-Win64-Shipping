// 函数: sub_142ac6660
// 地址: 0x142ac6660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
uint128_t zmm6
uint128_t var_38 = zmm6
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t* rdi = arg3
void* rbx = arg6
int32_t* result = arg7

if (*result s<= 0 && (*(arg2 + 8) & 0xffe0) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_80_1 = 2
    
    if (arg4 s> 0)
        int16_t* rbp_1 = rbx + 8
        uint64_t i_1 = zx.q(arg4)
        uint64_t i
        
        do
            (*(*arg1 + 0x48))(arg1, arg2, zx.q(*rdi), rbx, var_98)
            
            if ((*rbp_1 & 0xffe0) == 0)
                if ((var_80_1 & 0xffe0) == 0)
                    int512_t zmm2
                    zmm2.o = zx.o(arg5)
                    (*(*arg1 + 0x30))(arg1, arg2, zmm2, &var_88)
                
                (*(*arg1 + 0x40))(arg1, &var_88, zx.q(*rdi), rbx)
            
            rbx += 0x40
            rbp_1 = &rbp_1[0x20]
            rdi = &rdi[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    result = sub_142a47ff0(&var_88)

__security_check_cookie(rax_1 ^ &var_b8)
return result
