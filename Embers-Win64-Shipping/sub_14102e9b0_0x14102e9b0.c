// 函数: sub_14102e9b0
// 地址: 0x14102e9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = &__return_addr
int32_t i_1 = *(arg1 + 0x130)

if (i_1 != 0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(i_1)
    int32_t rsi_1 = temp0_1
    
    if (i_1 != 0)
        do
            void* rdi_1 = *(arg1 + (zx.q(rsi_1) << 3) + 0x140)
            sub_1410355b0(rdi_1, sub_141021a40(arg2, arg6, *(rdi_1 + 0x138)), arg2, arg6, arg3, 
                arg4, arg5, arg7, arg8, arg9, arg10, arg11, arg12)
            int32_t rax_2 = 1 << rsi_1.b
            rsi_1 = 0x20
            i = not.d(rax_2) & i_1
            i_1 = i
            
            if (i != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(i)
                rsi_1 = temp0_2
        while (i != 0)

return i
