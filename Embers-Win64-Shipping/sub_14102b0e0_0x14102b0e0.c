// 函数: sub_14102b0e0
// 地址: 0x14102b0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int32_t i_1 = *(arg1 + 0x130)
int32_t result = arg3

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    int32_t rdi_1 = temp0_1
    
    if (i_1 != 0)
        int32_t i
        
        do
            sub_14102af40(*(arg1 + (zx.q(rdi_1) << 3) + 0x140), arg2, zx.q(result), zx.q(arg4), 
                arg5, arg6, arg7, arg8)
            int32_t rax = 1 << rdi_1.b
            rdi_1 = 0x20
            i = not.d(rax) & i_1
            i_1 = i
            
            if (i != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(i)
                rdi_1 = temp0_2
            
            arg2 = arg_10
            result = arg3
        while (i != 0)

return result
