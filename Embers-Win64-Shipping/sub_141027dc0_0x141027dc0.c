// 函数: sub_141027dc0
// 地址: 0x141027dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x130)

if (result != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(result)
    int32_t rcx_1 = temp0_1
    
    if (result != 0)
        int32_t i
        
        do
            void* r8_1 = *(arg1 + (zx.q(rcx_1) << 3) + 0x140)
            int32_t rdx_1 = 1 << rcx_1.b
            rcx_1 = 0x20
            i = not.d(rdx_1) & result
            result = i
            *(r8_1 + 0x28a) = arg2
            
            if (i != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(i)
                rcx_1 = temp0_2
        while (i != 0)

return result
