// 函数: sub_142a48d70
// 地址: 0x142a48d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t rsi = arg4
void* result = arg1

if ((*(arg1 + 8) & 0x11) == 0 && arg4 != 0 && arg2 != 0)
    int64_t rdx = arg2 + (sx.q(arg3) << 1)
    int64_t var_88_1 = rdx
    
    if (arg4 s>= 0)
        goto label_142a48de1
    
    int32_t rax_3 = std::_WChar_traits<wchar_t>::length(rdx)
    rsi = rax_3
    
    if (rax_3 != 0)
        rdx = var_88_1
    label_142a48de1:
        int16_t rax_4 = *(result + 8)
        int32_t rbp_2
        
        if (rax_4 s< 0)
            rbp_2 = *(result + 0xc)
        else
            rbp_2 = sx.d(rax_4) s>> 5
        
        int32_t rdi_1 = rsi + rbp_2
        void* r8 = result + 0xa
        
        if ((rax_4.b & 2) == 0)
            r8 = *(result + 0x18)
        
        if ((rax_4.b & 0x19) != 0 || ((rax_4.b & 4) != 0 && *(*(result + 0x18) - 4) != 1)
                || r8 u>= rdx + (sx.q(rsi) << 1) || rdx u>= r8 + (sx.q(rbp_2) << 1))
            char rax_12 = (*(result + 8)).b
            int32_t rcx_9 = 0x1b
            
            if ((rax_12 & 2) == 0)
                rcx_9 = *(result + 0x10)
            
            char rax_16
            
            if (rdi_1 s> rcx_9 || (rax_12 & 0x19) != 0
                    || ((rax_12 & 4) != 0 && *(*(result + 0x18) - 4) != 1))
                int32_t r8_1 = 0x7ffffff5
                
                if ((rdi_1 s>> 2) + 0x80 s<= 0x7ffffff5 - rdi_1)
                    r8_1 = (rdi_1 s>> 2) + 0x80 + rdi_1
                
                arg4.b = 1
                rax_16 = sub_142a487e0(result, rdi_1, r8_1, arg4.b, 0, 0)
            
            if ((rdi_1 s<= rcx_9 && (rax_12 & 0x19) == 0
                    && ((rax_12 & 4) == 0 || *(*(result + 0x18) - 4) == 1)) || rax_16 != 0)
                void* rcx_14 = result + 0xa
                
                if ((*(result + 8) & 2) == 0)
                    rcx_14 = *(result + 0x18)
                
                void* rcx_15 = rcx_14 + (sx.q(rbp_2) << 1)
                
                if (var_88_1 != rcx_15 && rsi s> 0)
                    memmove(rcx_15, var_88_1, rsi * 2)
                
                if (rdi_1 s> 0x3ff)
                    *(result + 8) |= 0xffe0
                    *(result + 0xc) = rdi_1
                else
                    *(result + 8) &= 0x1f
                    rdi_1.w <<= 5
                    *(result + 8) |= rdi_1.w
        else
            struct icu_64::UObject::VTable* var_78 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            char var_70_1 = 2
            sub_142a48d70(&var_78, rdx, 0, zx.q(rsi))
            void* var_60
            
            if ((var_70_1 & 1) == 0)
                void var_6e
                void* rdx_1 = &var_6e
                
                if ((var_70_1 & 2) == 0)
                    rdx_1 = var_60
                
                result = sub_142a48d70(result, rdx_1, 0, zx.q(rsi))
            else
                sub_142a4ab40(result)
            
            var_78 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            
            if ((var_70_1 & 4) != 0)
                int32_t rax_11 = *(var_60 - 4)
                *(var_60 - 4) -= 1
                
                if (rax_11 == 1)
                    sub_142a7dcd0(var_60 - 4)
            
            var_78 = &icu_64::Replaceable::`vftable'{for `icu_64::UObject'}
            sub_142a47900(&var_78)

__security_check_cookie(rax_1 ^ &var_b8)
return result
