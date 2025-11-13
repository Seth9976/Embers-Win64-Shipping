// 函数: sub_142b35530
// 地址: 0x142b35530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_98 = arg1
*arg1 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
arg1[1].w = 2
arg1[8] = 0
arg1[9] = 0
arg1[0x10] = arg2
arg1[0x11] = sub_142a7dd00(0x50)
arg1[0x12].d = 0
*(arg1 + 0x94) = 0xa
arg1[0x13].w = 0
*(arg1 + 0x9a) = 1
__builtin_memset(&arg1[0xa], 0, 0x30)

if (*arg5 s<= 0)
    void* rbx_2 = (sx.q(arg4) << 6) + arg3
    int16_t rax_3 = *(rbx_2 + 8)
    int32_t rcx_1
    
    if (rax_3 s< 0)
        rcx_1 = *(rbx_2 + 0xc)
    else
        rcx_1 = sx.d(rax_3) s>> 5
    
    if (rcx_1 != 0)
        int32_t rcx_3
        
        if (rax_3 s< 0)
            rcx_3 = *(rbx_2 + 0xc)
        else
            rcx_3 = sx.d(rax_3) s>> 5
        
        void* rcx_4
        
        if (rcx_3 != 0)
            rcx_4 = rbx_2 + 0xa
            
            if ((rax_3.b & 2) == 0)
                rcx_4 = *(rbx_2 + 0x18)
        
        if (rcx_3 == 0 || *rcx_4 != 0x25)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
            sub_142a48aa0(arg1, sub_142a47a60(&var_88, 1, u"%default", 0xffffffff), 0)
            sub_142a47ff0(&var_88)
        else
            int32_t r9_1
            
            if (rax_3 s< 0)
                r9_1 = *(rbx_2 + 0xc)
            else
                r9_1 = sx.d(rax_3) s>> 5
            
            int64_t rsi_1 = sx.q(sub_142a491f0(rbx_2, 0x3a, 0, r9_1))
            
            if (rsi_1.d != 0xffffffff)
                sub_142a4afe0(arg1)
                int16_t rax_5 = arg1[1].w
                int32_t r8_1
                
                if (rax_5 s< 0)
                    r8_1 = *(arg1 + 0xc)
                else
                    r8_1 = sx.d(rax_5) s>> 5
                
                sub_142a49310(arg1, 0, r8_1, rbx_2, 0, rsi_1.d)
                int64_t rbp_1 = rsi_1 * 2
                char i
                
                do
                    if (rsi_1.d s>= sub_142a4a1f0(rbx_2))
                        break
                    
                    rsi_1 = zx.q(rsi_1.d + 1)
                    rbp_1 += 2
                    int16_t rcx_9 = *(rbx_2 + 8)
                    int32_t rax_8
                    
                    if (rcx_9 s< 0)
                        rax_8 = *(rbx_2 + 0xc)
                    else
                        rax_8 = sx.d(rcx_9) s>> 5
                    
                    int16_t rcx_10
                    
                    if (rsi_1.d u>= rax_8)
                        rcx_10 = -1
                    else
                        void* rax_9 = rbx_2 + 0xa
                        
                        if ((rcx_9.b & 2) == 0)
                            rax_9 = *(rbx_2 + 0x18)
                        
                        rcx_10 = *(rax_9 + rbp_1)
                    
                    i = sub_142b13730(zx.d(rcx_10))
                while (i != 0)
                
                if (rsi_1.d != 0x7fffffff)
                    sub_142a49390(rbx_2, 0, rsi_1.d, 0, 0, 0)
                else if ((*(rbx_2 + 8) & 1) == 0)
                    *(rbx_2 + 8) &= 0x1f
                else
                    *(rbx_2 + 8) = 2
            else
                *arg5 = 9
        
        int16_t rax_11 = *(rbx_2 + 8)
        int32_t rax_13
        
        if (rax_11 s< 0)
            rax_13 = *(rbx_2 + 0xc)
        else
            rax_13 = sx.d(rax_11) s>> 5
        
        if (rax_13 == 0)
            *arg5 = 9
        
        int32_t rcx_16 = 0
        int16_t rax_14 = arg1[1].w
        int32_t rdx_3
        
        if (rax_14 s< 0)
            rdx_3 = *(arg1 + 0xc)
        else
            rdx_3 = sx.d(rax_14) s>> 5
        
        if (rdx_3 s< 0)
            if (rax_14 s< 0)
                rcx_16 = *(arg1 + 0xc)
            else
                rcx_16 = sx.d(rax_14) s>> 5
        
        int32_t rdx_5
        
        if (rax_14 s< 0)
            rdx_5 = *(arg1 + 0xc)
        else
            rdx_5 = sx.d(rax_14) s>> 5
        
        int32_t rax_15
        rax_15.b = sub_142a4a330(arg1, &data_14366c350, 0, 2, rcx_16, rdx_5 - rcx_16) != 0
        *(arg1 + 0x99) = rax_15.b
        int16_t rax_16 = arg1[1].w
        int32_t rdx_8
        
        if (rax_16 s< 0)
            rdx_8 = *(arg1 + 0xc)
        else
            rdx_8 = sx.d(rax_16) s>> 5
        
        char rax_17 = sub_142a48fb0(arg1, rdx_8 - 8, 8, u"@noparse", 0, 8)
        
        if (rax_17 == 0)
            *(arg1 + 0x9a) = rax_17
            int16_t rax_18 = arg1[1].w
            int32_t rcx_21
            
            if (rax_18 s< 0)
                rcx_21 = *(arg1 + 0xc)
            else
                rcx_21 = sx.d(rax_18) s>> 5
            
            if ((arg1[1].b & 1) == 0 || rcx_21 != 8)
                int32_t rdx_11
                
                if (rax_18 s< 0)
                    rdx_11 = *(arg1 + 0xc)
                else
                    rdx_11 = sx.d(rax_18) s>> 5
                
                if (rcx_21 - 8 u< rdx_11)
                    if (rcx_21 - 8 s> 0x3ff)
                        arg1[1].w = rax_18 | 0xffe0
                        *(arg1 + 0xc) = rcx_21 - 8
                    else
                        int32_t rcx_23
                        rcx_23.w = (rcx_21 - 8).w << 5
                        rcx_23.w |= rax_18 & 0x1f
                        arg1[1].w = rcx_23.w
            else
                sub_142a4afe0(arg1)
    else
        *arg5 = 9

__security_check_cookie(rax_1 ^ &var_d8)
return arg1
