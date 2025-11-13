// 函数: sub_142b60890
// 地址: 0x142b60890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_418 = -2
void var_498
int64_t rax_1 = __security_cookie ^ &var_498
int64_t r12 = sx.q(arg2)
int32_t* result = arg8

if (*result s<= 0)
    if (*(arg1 + 0x230) == 1)
        void* rdx_1 = arg1 + 0x238
        void* var_440_1 = rdx_1
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_408 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_400_1 = 2
        int64_t rcx = *(arg1 + 0x280)
        void* rax_5 = (r12 << 4) + rcx
        int32_t rbx_2 = zx.d(*(rax_5 + 8)) + *(rax_5 + 4)
        int32_t r12_1 = r12.d + 1
        int64_t r14_2 = sx.q(r12_1) << 4
        int32_t* r15_1 = r14_2 + rcx
        int32_t i = *r15_1
        int32_t rsi_1 = r15_1[1]
        
        while (i != 1)
            if (((i - 2) & 0xfffffffd) == 0)
                sub_142a48d00(&var_408, rdx_1, rbx_2, rsi_1 - rbx_2)
                
                if (i == 4)
                    void* rdx_3
                    int32_t r9_5
                    
                    if (*(arg3 + 0xd8) == 0)
                        void* rax_11 = sub_142aa8370(sub_142b60e50(arg1, result), arg3 + 0x10, 
                            &var_408, result)
                        int16_t rcx_8 = *(rax_11 + 8)
                        
                        if (rcx_8 s< 0)
                            r9_5 = *(rax_11 + 0xc)
                        else
                            r9_5 = sx.d(rcx_8) s>> 5
                        
                        rdx_3 = rax_11
                    else
                        rdx_3 = arg3 + 0x98
                        int16_t rax_9 = *(rdx_3 + 8)
                        
                        if (rax_9 s< 0)
                            r9_5 = *(rdx_3 + 0xc)
                        else
                            r9_5 = sx.d(rax_9) s>> 5
                    
                    sub_142a48d00(&var_408, rdx_3, 0, r9_5)
                
                rbx_2 = zx.d(r15_1[2].w) + r15_1[1]
                rdx_1 = var_440_1
            else if (i == 5)
                sub_142a48d00(&var_408, rdx_1, rbx_2, rsi_1 - rbx_2)
                int64_t rcx_3 = *(arg1 + 0x280)
                
                if (*(r14_2 + rcx_3 + 0xc) s>= r12_1)
                    r12_1 = *(r14_2 + rcx_3 + 0xc)
                
                int64_t rax_8 = sx.q(r12_1) * 2
                rbx_2 = zx.d(*(rcx_3 + (rax_8 << 3) + 8)) + *(rcx_3 + (rax_8 << 3) + 4)
                sub_142b74e60(var_440_1, rsi_1, rbx_2, &var_408)
                rdx_1 = var_440_1
            
            r12_1 += 1
            r14_2 = sx.q(r12_1) << 4
            r15_1 = r14_2 + *(arg1 + 0x280)
            i = *r15_1
            rsi_1 = r15_1[1]
        
        sub_142a48d00(&var_408, rdx_1, rbx_2, rsi_1 - rbx_2)
        int32_t var_3fc
        int32_t r9_10
        
        if (var_400_1 s< 0)
            r9_10 = var_3fc
        else
            r9_10 = sx.d(var_400_1) s>> 5
        
        if (sub_142a491f0(&var_408, 0x7b, 0, r9_10) s< 0)
            char rax_20 = var_400_1.b
            void* rdx_8
            
            if ((rax_20 & 0x11) == 0)
                void var_3fe
                rdx_8 = &var_3fe
                void* var_3f0
                
                if ((rax_20 & 2) == 0)
                    rdx_8 = var_3f0
            else
                rdx_8 = nullptr
            
            int64_t* rcx_18 = *arg7
            (*(*rcx_18 + 0x20))(rcx_18, rdx_8)
            int32_t rax_24
            
            if (var_400_1 s< 0)
                rax_24 = var_3fc
            else
                rax_24 = sx.d(var_400_1) s>> 5
            
            arg7[1].d += rax_24
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_3c8 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_3c0_1 = 2
            struct icu_64::UObject::icu_64::Format::VTable* var_388
            sub_142b5e170(&var_388, &var_3c8, arg1 + 0x148, result)
            int32_t var_158
            
            if (var_158 != 1)
                void var_160
                sub_142b74f70(&var_160)
                int32_t var_158_1 = 1
            
            var_388->__offset(0x50).q(&var_388, &var_408, 0, result)
            sub_142b5ff60(&var_388, 0, 0, arg4, arg5, arg6, arg7, 0, result)
            sub_142b5e3d0(&var_388)
            sub_142a47ff0(&var_3c8)
        
        result = sub_142a47ff0(&var_408)
    else
        result = sub_142b5ff60(arg1, r12.d, arg3, arg4, arg5, arg6, arg7, 0, result)

__security_check_cookie(rax_1 ^ &var_498)
return result
