// 函数: sub_141037da0
// 地址: 0x141037da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x30)
int64_t result = -1
int32_t rsi_1

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    rsi_1 = temp0_1

if (i_1 == 0 || i_1 == 0)
    *(arg1 + 0x48) = -1
else
    int32_t i
    
    do
        uint64_t rdi_1 = zx.q(rsi_1)
        int64_t* rcx = *(*(arg1 + (rdi_1 << 3) + 0x98) + 0x18)
        int64_t result_1 = (*(*rcx + 0x40))(rcx)
        *(arg1 + (rdi_1 << 3) + 0x78) = result_1
        char rcx_1 = rsi_1.b
        rsi_1 = 0x20
        
        if (result_1 u<= result)
            result = result_1
        
        i = not.d(1 << rcx_1) & i_1
        i_1 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bit_scan_forward(i)
            rsi_1 = temp0_2
    while (i != 0)
    *(arg1 + 0x48) = result

return result
