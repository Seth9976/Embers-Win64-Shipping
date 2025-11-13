// 函数: sub_141eb54c0
// 地址: 0x141eb54c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[8] = 0
arg1[9].d = 0
*(arg1 + 0x4c) = 8
arg1[0xc] = 0
arg1[0xd].d = 0
*(arg1 + 0x6c) = 4
arg1[2].b = arg4
arg1[3].d = 0
*arg1 = arg2
*(arg1 + 0x11) = 1
*(arg1 + 0x1e) = 1
*(arg1 + 0x1c) = 0
*(arg1 + 0x15) = 0

if (arg5 != 0)
    int64_t rsi_1 = sx.q(arg1[0xd].d)
    void* rdi_1 = &arg1[0xa]
    int32_t r14_1 = *(arg5 + 0xc)
    int32_t rax_1 = (rsi_1 + 1).d
    *(rdi_1 + 0x18) = rax_1
    
    if (rax_1 s> *(rdi_1 + 0x1c))
        sub_140dbc4b0(rdi_1, rsi_1.d)
    
    void* rax_2 = *(rdi_1 + 0x10)
    
    if (rax_2 != 0)
        rdi_1 = rax_2
    
    *(rdi_1 + (rsi_1 << 2)) = r14_1
    arg1[1] = *(arg5 + 0x18)

return arg1
