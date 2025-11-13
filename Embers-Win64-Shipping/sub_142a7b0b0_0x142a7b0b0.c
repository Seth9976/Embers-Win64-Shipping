// 函数: sub_142a7b0b0
// 地址: 0x142a7b0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
uint64_t result = zx.q(*arg3)

if (result.d s<= 0)
    int64_t rcx = sx.q(*(*(arg1 + 8) + 0x84))
    
    if (rcx.d s> 8)
        result = sub_142a7dd00(rcx << 3)
        *(arg1 + 0xc0) = result
    
    if (rcx.d s<= 8 || result != 0)
        struct icu_64::UObject::icu_64::UVector64::VTable** rax_1 = j_sub_142a7dd00(0x20)
        struct icu_64::UObject::icu_64::UVector64::VTable** arg_18 = rax_1
        
        if (rax_1 == 0)
            result = 0
        else
            result = sub_142aeb0c0(rax_1, arg3)
        
        *(arg1 + 0xb0) = result
        
        if (result == 0)
            *(arg1 + 0x13c) = 7
            *arg3 = 7
        else
            sub_142a7c840(arg1, arg2, arg4)
            result = zx.q(*arg3)
            
            if (result.d s> 0)
                *(arg1 + 0x13c) = result.d
            else
                int32_t rax_2 = *(arg1 + 0x13c)
                
                if (rax_2 s<= 0)
                    *(arg1 + 0x40) = 0
                    int64_t rax_3 = *(arg1 + 0x30)
                    *(arg1 + 0x48) = rax_3
                    *(arg1 + 0x70) = 0
                    *(arg1 + 0x78) = rax_3
                    *(arg1 + 0x50) = 0
                    *(arg1 + 0x58) = rax_3
                    *(arg1 + 0x60) = 0
                    *(arg1 + 0x68) = rax_3
                    *(arg1 + 0x88) = 0
                    *(arg1 + 0x90) = 0
                    *(arg1 + 0x98) = -1
                    *(arg1 + 0xa0) = 0
                    *(arg1 + 0x82) = 0
                    *(arg1 + 0xa8) = 0
                    *(arg1 + 0x10c) = 0
                    *(arg1 + 0x110) = 0x2710
                    int32_t rdx_2 = 0x1e8480
                    int32_t rcx_4 = *(*(arg1 + 8) + 0x80)
                    
                    if (rcx_4 s> 0x1e8480)
                        rdx_2 = rcx_4
                    
                    sub_142aeb3e0(*(arg1 + 0xb0), rdx_2)
                    *(arg1 + 0x114) = 0x7a1200
                else
                    *arg3 = rax_2
                
                result = zx.q(*arg3)
                
                if (result.d s> 0)
                    *(arg1 + 0x13c) = result.d
    else
        *(arg1 + 0x13c) = 7
        *arg3 = 7
else
    *(arg1 + 0x13c) = result.d

return result
