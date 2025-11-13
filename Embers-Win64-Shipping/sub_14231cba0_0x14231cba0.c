// 函数: sub_14231cba0
// 地址: 0x14231cba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2b4) &= 0xbf
*(arg1 + 0x2b4) |= arg2 << 6
void* result = sub_141f64a80(arg1)
void* result_1 = result

if (result != 0)
    int32_t i = 0
    
    if (*(arg1 + 0x808) s> 0)
        void** rbx_1 = nullptr
        
        do
            result = *(arg1 + 0x800)
            void* rcx = *(rbx_1 + result)
            
            if (rcx != 0)
                result = *(result_1 + 0x40)
                int64_t rdx = *(rbx_1 + result)
                
                if (rdx != 0)
                    char rax_1 = arg2
                    
                    if (arg2 != 0 && (*(rdx + 0x12c) & 0x40) == 0)
                        rax_1 = 0
                    
                    result = sub_1422218c0(rcx, rax_1)
            
            i += 1
            rbx_1 = &rbx_1[1]
        while (i s< *(arg1 + 0x808))

return result
