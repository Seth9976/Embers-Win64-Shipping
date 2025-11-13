// 函数: sub_141028440
// 地址: 0x141028440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x130)

if (result != 0)
    uint64_t rflags_1
    char temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(result)
    char rcx_1 = temp0_1
    
    if (result != 0)
        int32_t i
        
        do
            int32_t rdx_1 = 1 << rcx_1
            rcx_1 = 0x20
            i = not.d(rdx_1) & result
            result = i
            
            if (i != 0)
                uint64_t rflags_2
                char temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(i)
                rcx_1 = temp0_2
        while (i != 0)

return result
