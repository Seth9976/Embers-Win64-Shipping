// 函数: sub_142aa5660
// 地址: 0x142aa5660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2

if (*arg3 s<= 0)
    int64_t arg_10 = arg4
    int32_t rsi
    
    if (arg2 != 0xffffffff)
        if (arg2 - 0x1000 u> 3)
            *arg3 = 1
            return arg1
        
        rsi = arg2 - 0x1000
    else
        rsi = arg4.d | arg2
    
    void* rcx = *(arg1 + 0x10)
    
    if (rsi == (*(rcx + 0x18) s>> 4 & 7))
        *(arg1 + 0x108) |= 0x100
        return arg1
    
    void* r15_1 = *(*(arg1 + 0x18) + 0x20)
    
    if (rcx != r15_1 || rsi != 0xffffffff)
        struct icu_64::SharedObject::icu_64::CollationSettings::VTable** rax_7 =
            sub_142aa1030(arg1 + 0x10)
        
        if (rax_7 != 0)
            if (rdi == 0xffffffff)
                rdi = (*(r15_1 + 0x18) s>> 4 & 7) + 0x1000
            
            int32_t rax_9 = sub_142aa6280(*(arg1 + 8), rdi)
            sub_142b27390(rax_7, rsi, *(r15_1 + 0x18), arg3)
            
            if (*arg3 s<= 0)
                *(rax_7 + 0x1c) = rax_9
                rax_7[0xa].d = sub_142b21a80(*(arg1 + 8), rax_7, rax_7 + 0x54, 0x180)
                
                if (rsi != 0xffffffff)
                    *(arg1 + 0x108) |= 0x100
                else
                    *(arg1 + 0x108) &= 0xfffffeff
        else
            *arg3 = 7
    else
        *(arg1 + 0x108) &= 0xfffffeff

return arg1
