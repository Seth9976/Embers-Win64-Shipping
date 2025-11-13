// 函数: sub_142c05540
// 地址: 0x142c05540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg3.d
uint64_t result

if (arg3.d u< 0x1fffffff && sub_142bf7510(arg2, arg1, (arg3 << 3).d).b != 0)
    int32_t rsi = 0
    
    if (rbp == 0)
    label_142c056cb:
        result.b = 1
    else
        void* rdi_1 = arg1 + 3
        
        while (true)
            int64_t r8_1 = *(arg2 + 8)
            int32_t rcx_1
            
            if (r8_1 u<= rdi_1 - 3 && rdi_1 - 3 u<= *(arg2 + 0x10) && arg2[4] - (rdi_1 - 3).d u>= 8)
                rcx_1 = arg2[6]
                arg2[6] = rcx_1 - 1
            
            char r11_1
            
            if (r8_1 u> rdi_1 - 3 || rdi_1 - 3 u> *(arg2 + 0x10) || arg2[4] - (rdi_1 - 3).d u< 8
                    || rcx_1 s<= 0)
                r11_1 = 0
            else
                r11_1 = 1
            
            char const* const rax_3 = "OUT-OF-RANGE"
            
            if (r11_1 != 0)
                rax_3 = &data_14369cdc0
            
            char const* const var_38_1 = rax_3
            uint64_t var_40_1 = *(arg2 + 0x10)
            int64_t var_48_1 = r8_1
            int32_t var_50_1 = 8
            void* var_58_1 = rdi_1 + 5
            void* var_60_1 = rdi_1 - 3
            char const* const var_68_1 = "check_range [%p..%p] (%d bytes) in [%p..%p] -> %s"
            int64_t var_70_1 = 0
            int32_t var_78_1 = *arg2 + 1
            
            if (r11_1 != 0)
                uint16_t r8_3 = zx.w(*(rdi_1 - 3))
                uint16_t r10_2 = zx.w(*(rdi_1 - 1))
                uint32_t r9_1 = zx.d(*(rdi_1 - 2))
                uint32_t r11_2 = zx.d(*rdi_1)
                
                if (r8_3 * 0x100 + r9_1.w u<= r10_2 * 0x100 + r11_2.w && SecImpl::FInit(rdi_1 + 1, 
                        arg2, arg4, ((zx.d(r10_2.b) - zx.d(r8_3.b)) << 8) - r9_1 + 1 + r11_2).b != 0)
                    rsi += 1
                    rdi_1 += 8
                    
                    if (rsi u>= rbp)
                        goto label_142c056cb
                    
                    continue
            
            result.b = 0
            break
    
    return result

result.b = 0
return result
