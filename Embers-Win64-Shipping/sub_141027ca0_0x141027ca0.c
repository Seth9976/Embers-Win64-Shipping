// 函数: sub_141027ca0
// 地址: 0x141027ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg2
int64_t result = -1

if (arg2 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(arg2)
    int32_t rdi_1 = temp0_1
    int32_t i
    
    do
        int64_t* rcx = *(*(arg1 + (zx.q(rdi_1) << 3) + 0x98) + 0x18)
        int64_t result_1 = (*(*rcx + 0x40))(rcx)
        char rcx_1 = rdi_1.b
        rdi_1 = 0x20
        
        if (result_1 u<= result)
            result = result_1
        
        i = not.d(1 << rcx_1) & i_1
        i_1 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i)
            rdi_1 = temp0_2
    while (i != 0)

return result
