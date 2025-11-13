// 函数: sub_142b82c90
// 地址: 0x142b82c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
struct icu_64::UObject::icu_64::NFSubstitution::VTable** rdi = arg6
int16_t rax = rdi[1].w
int32_t r10_1

if (rax s< 0)
    r10_1 = *(rdi + 0xc)
else
    r10_1 = sx.d(rax) s>> 5

if (r10_1 != 0)
    int32_t rcx_1
    
    if (rax s< 0)
        rcx_1 = *(rdi + 0xc)
    else
        rcx_1 = sx.d(rax) s>> 5
    
    int16_t rcx_2
    
    if (rcx_1 == 0)
        rcx_2 = -1
    else
        void* rax_1 = rdi + 0xa
        
        if ((rax.b & 2) == 0)
            rax_1 = rdi[3]
        
        rcx_2 = *rax_1
    
    uint32_t rcx_3 = zx.d(rcx_2)
    
    if (rcx_3 == 0x3c)
        int64_t rax_11 = *arg2
        
        if (rax_11 != -1)
            if (rax_11 == -2 || rax_11 == -3 || rax_11 == -4)
                struct icu_64::UObject::icu_64::NFSubstitution::VTable** rax_17 =
                    j_sub_142a7dd00(0x20)
                arg6 = rax_17
                
                if (rax_17 == 0)
                    return nullptr
                
                sub_142b810d0(rax_17, arg1, arg4, rdi, arg7)
                *rax_17 = &icu_64::IntegralPartSubstitution::`vftable'{for `icu_64::NFSubstitution'}
                return rax_17
            
            if (*(arg4 + 0x98) == 0)
                struct icu_64::UObject::icu_64::NFSubstitution::VTable** rax_15 =
                    j_sub_142a7dd00(0x28)
                arg6 = rax_15
                
                if (rax_15 == 0)
                    return nullptr
                
                return sub_142b81050(rax_15, arg1, arg2, arg4, rdi, arg7)
            
            struct icu_64::UObject::icu_64::NFSubstitution::VTable** rax_13
            int64_t r8_4
            rax_13, r8_4 = j_sub_142a7dd00(0x38)
            arg6 = rax_13
            
            if (rax_13 == 0)
                return nullptr
            
            int512_t zmm2
            zmm2.o = zx.o(0)
            zmm2.q = float.d(*arg2)
            return sub_142b813b0(rax_13, arg1, r8_4, *(arg5 + 0x188), rdi, arg7)
    else
        if (rcx_3 == 0x3d)
            struct icu_64::UObject::icu_64::NFSubstitution::VTable** rax_9 = j_sub_142a7dd00(0x20)
            arg6 = rax_9
            
            if (rax_9 == 0)
                return nullptr
            
            return sub_142b814d0(rax_9, arg1, arg4, rdi, arg7)
        
        if (rcx_3 == 0x3e)
            int64_t rax_2 = *arg2
            
            if (rax_2 == -1)
                struct icu_64::UObject::icu_64::NFSubstitution::VTable** rax_3 =
                    j_sub_142a7dd00(zx.q((rax_2 + 0x21).d))
                arg6 = rax_3
                
                if (rax_3 == 0)
                    return nullptr
                
                sub_142b810d0(rax_3, arg1, arg4, rdi, arg7)
                *rax_3 = &icu_64::AbsoluteValueSubstitution::`vftable'{for `icu_64::NFSubstitution'}
                return rax_3
            
            if (rax_2 == -2 || rax_2 == -3 || rax_2 == -4)
                struct icu_64::UObject::icu_64::NFSubstitution::VTable** rax_7 =
                    j_sub_142a7dd00(0x28)
                arg6 = rax_7
                
                if (rax_7 == 0)
                    return nullptr
                
                return sub_142b80e30(rax_7, arg1, arg4, rdi, arg7)
            
            if (*(arg4 + 0x98) == 0)
                struct icu_64::UObject::icu_64::NFSubstitution::VTable** rax_5 =
                    j_sub_142a7dd00(0x30)
                arg6 = rax_5
                
                if (rax_5 == 0)
                    return nullptr
                
                return sub_142b80f70(rax_5, arg1, arg2, arg3, arg4, rdi, arg7)
    
    *arg7 = 9

return nullptr
