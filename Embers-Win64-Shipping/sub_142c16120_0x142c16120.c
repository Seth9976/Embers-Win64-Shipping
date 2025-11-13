// 函数: sub_142c16120
// 地址: 0x142c16120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
uint32_t rdi_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
uint32_t rsi_1 = zx.d(arg1[4]) << 8
uint32_t rax_1 = zx.d(arg1[5])

if (rsi_1 != neg.d(rax_1))
    do
        int128_t* const rax_3
        
        if (i u< (zx.d(arg1[4]) << 8) + zx.d(arg1[5]))
            rax_3 = &arg1[(zx.q(i) + 3) << 1]
        else
            rax_3 = &data_14369a5d0
        
        uint16_t rdx = zx.w(*rax_3)
        uint64_t r8_1 = zx.q(*(rax_3 + 1))
        void* rcx_5
        
        if (0 != rdx * 0x100 + r8_1.w)
            rcx_5 = &arg1[(zx.q(rdx.b) << 8) + r8_1]
        else
            rcx_5 = &data_14369a5d0
        
        sub_142c166d0(rcx_5, arg2, rdi_2)
        i += 1
    while (i u< rsi_1 + rax_1)

return 0
