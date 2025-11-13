// 函数: sub_142b78970
// 地址: 0x142b78970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int64_t var_48 = -2
void* rsi = nullptr
int32_t arg_8 = 0
int32_t r13 = 0
int64_t* rcx = *(arg1 + 0xb8)
int64_t* result = (*(*rcx + 0x10))(rcx, arg4, arg1 + 8, arg3)

if (*arg3 s<= 0)
    *(arg1 + 0x48) = 0
    sub_142b77760(arg1)
    int16_t rax_1 = *(arg2 + 8)
    int32_t rax_3
    
    if (rax_1 s< 0)
        rax_3 = *(arg2 + 0xc)
    else
        rax_3 = sx.d(rax_1) s>> 5
    
    if (rax_3 != 0)
        int16_t rax_10 = *(arg1 + 0x10)
        int32_t rax_12
        
        if (rax_10 s< 0)
            rax_12 = *(arg1 + 0x14)
        else
            rax_12 = sx.d(rax_10) s>> 5
        
        int64_t r14_1 = sx.q(rax_12)
        int64_t* rax_13
        
        if (rax_12 != 0)
            int64_t rax_14 = 0x40 * r14_1
            
            if (mulu.dp.q(0x40, r14_1) u>> 0x40 != zx.o(0))
                rax_14 = -1
            
            uint64_t rax_15 = rax_14 + 8
            
            if (rax_14 u>= -8)
                rax_15 = -1
            
            rax_13 = j_sub_142a7dd00(rax_15)
        else
            rax_13 = j_sub_140a82f30(zx.q(rax_12 + 8))
        
        int64_t* var_40_1 = rax_13
        void (* arg_20)()
        void (* r15_1)()
        
        if (rax_13 == 0)
            r15_1 = nullptr
            arg_20 = nullptr
        else
            *rax_13 = r14_1
            r15_1 = &rax_13[1]
            arg_20 = r15_1
            int32_t var_58 = 0x42a47ff0
            `eh vector constructor iterator'(r15_1, 0x40, r14_1)
        
        if (r15_1 == 0)
            *arg3 = 7
            return sub_142b77760(arg1)
        
        int32_t rdi_1
        rdi_1.b = sub_142a486d0(arg1 + 8, 0) u> 0xffff
        int32_t rdi_2 = rdi_1 + 1
        void (* r14_2)() = r15_1 + 8
        int32_t r15_2 = 0
        
        while (true)
            int16_t rax_17 = *(arg1 + 0x10)
            int32_t rax_19
            
            if (rax_17 s< 0)
                rax_19 = *(arg1 + 0x14)
            else
                rax_19 = sx.d(rax_17) s>> 5
            
            if (rdi_2 s>= rax_19)
                break
            
            int32_t rax_20 = sub_142a486d0(arg1 + 8, rdi_2)
            
            if (sub_142b1ec20(*(arg1 + 0xc0), rax_20) != 0)
                int16_t rcx_10 = *r14_2
                int32_t r8_3
                
                if (rcx_10 s< 0)
                    r8_3 = *(r14_2 + 4)
                else
                    r8_3 = sx.d(rcx_10) s>> 5
                
                sub_142a49310(r14_2 - 8, 0, r8_3, arg1 + 8, r13, rdi_2 - r13)
                r15_2 += 1
                r14_2 += 0x40
                r13 = rdi_2
            
            int32_t rax_24
            rax_24.b = rax_20 u> 0xffff
            rdi_2 += rax_24 + 1
        
        int64_t r12_2 = sx.q(r15_2)
        void* rcx_12 = (r12_2 << 6) + arg_20
        int16_t rax_28 = *(rcx_12 + 8)
        int32_t r8_5
        
        if (rax_28 s< 0)
            r8_5 = *(rcx_12 + 0xc)
        else
            r8_5 = sx.d(rax_28) s>> 5
        
        sub_142a49310(rcx_12, 0, r8_5, arg1 + 8, r13, rdi_2 - r13)
        int64_t rdi_4 = sx.q(r12_2.d + 1)
        *(arg1 + 0x50) = sub_142a7dd00(rdi_4 << 3)
        *(arg1 + 0x58) = r12_2.d + 1
        int64_t rdi_5 = rdi_4 << 2
        *(arg1 + 0x60) = sub_142a7dd00(rdi_5)
        int64_t rax_31 = sub_142a7dd00(rdi_5)
        *(arg1 + 0x68) = rax_31
        *(arg1 + 0x70) = r12_2.d + 1
        
        if (*(arg1 + 0x50) == 0 || *(arg1 + 0x60) == 0 || rax_31 == 0)
            *arg_18 = 7
            
            if (*(arg_20 - 8) == 0)
                j_sub_140a74f90(arg_20 - 8)
            else
                (**arg_20)(arg_20, 3)
            
            return sub_142b77760(arg1)
        
        int32_t i = 0
        
        if (r12_2.d + 1 s> 0)
            int32_t* rcx_16 = nullptr
            
            do
                *(rcx_16 + *(arg1 + 0x68)) = 0
                i += 1
                rcx_16 = &rcx_16[1]
            while (i s< *(arg1 + 0x70))
        
        if (*(arg1 + 0x58) s> 0)
            void (** rdi_6)() = nullptr
            
            do
                int64_t rdx_2 = sx.q(rsi.d)
                *(rdi_6 + *(arg1 + 0x50)) = sub_142b78010(arg1, (rdx_2 << 6) + arg_20, 
                    *(arg1 + 0x60) + (rdx_2 << 2), arg_18)
                rsi = zx.q(rsi.d + 1)
                rdi_6 = &rdi_6[1]
            while (rsi.d s< *(arg1 + 0x58))
        
        if (*(arg_20 - 8) == 0)
            return j_sub_140a74f90(arg_20 - 8)
        
        return (**arg_20)(arg_20, 3)
    
    *(arg1 + 0x50) = sub_142a7dd00(zx.q(rax_3 + 8))
    *(arg1 + 0x60) = sub_142a7dd00(4)
    *(arg1 + 0x58) = 1
    int32_t* rax_6 = sub_142a7dd00(4)
    *(arg1 + 0x68) = rax_6
    *(arg1 + 0x70) = 1
    
    if (*(arg1 + 0x50) == 0 || *(arg1 + 0x60) == 0 || rax_6 == 0)
        *arg3 = 7
        return sub_142b77760(arg1)
    
    *rax_6 = 0
    int64_t* rax_7 = j_sub_142a7dd00(0x48)
    arg_18 = rax_7
    
    if (rax_7 != 0)
        *rax_7 = 1
        rsi = &rax_7[1]
        int64_t (* var_58_1)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg1) =
            sub_142a47ff0
        `eh vector constructor iterator'(rsi, 0x40, 1)
    
    **(arg1 + 0x50) = rsi
    **(arg1 + 0x60) = 1
    result = *(arg1 + 0x50)
    
    if (*result == 0)
        *arg3 = 7
        return sub_142b77760(arg1)

return result
