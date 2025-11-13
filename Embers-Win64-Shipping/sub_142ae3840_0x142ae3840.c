// 函数: sub_142ae3840
// 地址: 0x142ae3840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t var_c8 = arg2
void var_b8
char i = (*(*arg3 + 0x50))(arg3, &var_b8, arg4)

if (*arg4 s<= 0)
    int32_t rsi_1 = 0
    
    for (i = sub_142ac2da0(&var_b8, 0, &var_c8, arg3); i != 0; 
            i = sub_142ac2da0(&var_b8, rsi_1, &var_c8, arg3))
        int32_t rdi_1 = 0
        
        for (int64_t j = 0; j s< 0x10; j += 1)
            char* rax_3 = (&data_14365a780)[j]
            void* r8_3 = var_c8 - rax_3
            uint32_t k
            uint32_t rdx_1
            
            do
                rdx_1 = zx.d(*rax_3)
                k = zx.d(*(rax_3 + r8_3))
                
                if (rdx_1 != k)
                    break
                
                rax_3 = &rax_3[1]
            while (k != 0)
            
            if (rdx_1 - k == 0)
                if (rdi_1 != 0x10)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                    sub_142a9c7e0(arg3, &var_88)
                    int64_t rcx_3 = *(arg1 + 8)
                    int16_t var_80
                    
                    if ((*((j << 6) + rcx_3 + 0x110) & 0xffe0) == 0 && (var_80 & 0xffe0) != 0)
                        void* rbx_4 = (sx.q(rdi_1) << 6) + rcx_3
                        sub_142a48100(rbx_4 + 0x108, &var_88)
                        sub_142a4a210(rbx_4 + 0x108)
                    
                    sub_142a47ff0(&var_88)
                
                break
            
            rdi_1 += 1
        
        rsi_1 += 1

__security_check_cookie(rax_1 ^ &var_e8)
return i
