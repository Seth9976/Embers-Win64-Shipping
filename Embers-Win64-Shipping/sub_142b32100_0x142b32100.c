// 函数: sub_142b32100
// 地址: 0x142b32100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1f8 = -2
void var_218
uint64_t result = __security_cookie ^ &var_218
uint64_t result_1 = result

if (*arg4 s<= 0)
    int32_t i_1 = 0
    uint64_t rsi_1 = 0
    result = zx.q(*(arg1 + 0x220))
    
    if (result.d s> 0)
        void* rdx = arg1 + 0x128
        uint64_t i_3 = zx.q(result.d)
        uint64_t i
        
        do
            int64_t rcx = *rdx
            int32_t rcx_2
            
            if ((rcx.d u>> 0x18) - 6 u<= 0x3f)
                rcx_2 = rcx.d s>> 8 & 3
            else if ((-0x100000000000000 & rcx) != 0)
                rcx_2 = 0
            else if ((rcx.d & 0xff000000) == 0)
                int32_t rax_4 = 0xf
                
                if (rcx != 0)
                    rax_4 = 2
                
                rcx_2 = rax_4
            else
                rcx_2 = 1
            
            rdx += 8
            result = zx.q((rsi_1 + 1).d)
            
            if (rcx_2 != 0)
                result = zx.q(rsi_1.d)
            
            rsi_1 = zx.q(result.d)
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int64_t rdi_1 = 0
    
    if (rsi_1.d s<= 0)
    label_142b3232d:
        
        if (*(arg1 + 0x220) s> 0)
            void* rdx_4 = arg1 + 0x128
            
            do
                result = *rdx_4 & 0xffffffffffff3fff
                int32_t rcx_15
                
                if ((result.d u>> 0x18) - 6 u<= 0x3f)
                    rcx_15 = result.d s>> 8 & 3
                label_142b32378:
                    
                    if (rcx_15 == 0)
                        result |= (zx.q(rdi_1.d) & 3) << 0xe
                        rdi_1 s>>= 2
                    else if (rcx_15 == 2)
                        result |= 0x8000
                else if ((-0x100000000000000 & result) != 0)
                    result |= (zx.q(rdi_1.d) & 3) << 0xe
                    rdi_1 s>>= 2
                else if ((result.d & 0xff000000) == 0)
                    rcx_15 = 0xf
                    
                    if (result != 0)
                        rcx_15 = 2
                    
                    goto label_142b32378
                *rdx_4 = result
                i_1 += 1
                rdx_4 += 8
            while (i_1 s< *(arg1 + 0x220))
    else
        int16_t rax_5 = *(arg2 + 8)
        void* r8
        
        if ((rax_5.b & 0x11) == 0)
            r8 = arg2 + 0xa
            
            if ((2 & rax_5.b) == 0)
                r8 = *(arg2 + 0x18)
        else
            r8 = nullptr
        
        int32_t rdx_2
        
        if (rax_5 s< 0)
            rdx_2 = *(arg2 + 0xc)
        else
            rdx_2 = sx.d(rax_5) s>> 5
        
        int64_t* rcx_3 = *(arg1 + 0x28)
        struct icu_64::UObject::icu_64::CollationIterator::VTable* const var_1e8 =
            &icu_64::CollationIterator::`vftable'{for `icu_64::UObject'}
        int64_t var_1e0_1 = *rcx_3
        int64_t* var_1d8_1 = rcx_3
        int32_t var_1d0_1 = 0
        int64_t var_1b8[0x28]
        int64_t (* var_1c8_1)[0x28] = &var_1b8
        int32_t var_1c0_1 = 0x28
        char var_1bc_1 = 0
        int32_t var_78_1 = 0
        int64_t var_70_1 = 0
        int32_t var_68_1 = 0xffffffff
        char var_64_1 = 0
        var_1e8 = &icu_64::UTF16CollationIterator::`vftable'{for `icu_64::CollationIterator'}
        void* var_60_1 = r8
        void* var_58_1 = r8
        void* var_50_1 = r8 + (sx.q(rdx_2) << 1)
        int32_t rax_9 = sub_142b23000(&var_1e8, arg4) - 1
        
        if (*arg4 s<= 0)
            int32_t r9 = 0
            int32_t r8_1 = 0
            int64_t i_2 = 0
            
            if (rax_9 s> 0)
                int32_t rcx_7 = -2
                
                do
                    int64_t rax_10 = (*var_1c8_1)[i_2]
                    
                    if ((-0x100000000 & rax_10) != 0)
                        r8_1 += 1
                        rcx_7 += 2
                        uint64_t rax_12 = zx.q(rax_10.d u>> 0xe) & 3
                        
                        if (r8_1 s< rsi_1.d)
                            rdi_1 |= rax_12 << rcx_7.b
                        else if (r8_1 == rsi_1.d)
                            r9 = rax_12.d
                        else if (rax_12.d != r9)
                            r9 = 1
                            break
                    
                    i_2 += 1
                while (i_2 s< sx.q(rax_9))
            
            if (r8_1 s>= rsi_1.d)
                rdi_1 |= zx.q(r9) << ((rsi_1 << 1) + -fffffffffffffffe).b
            
            result = sub_142b28d80(&var_1e8)
            goto label_142b3232d
        
        *arg3 = "fetching root CEs for tailored string"
        result = sub_142b28d80(&var_1e8)

__security_check_cookie(result_1 ^ &var_218)
return result
