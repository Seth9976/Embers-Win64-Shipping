// 函数: sub_141e70260
// 地址: 0x141e70260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
__builtin_memset(&arg1[2], 0, 0x24)
*(arg1 + 0x30) = 0
*(arg1 + 0x38) = arg4
arg1[0x10] = 0
InitializeCriticalSection(&arg1[0x12])
SetCriticalSectionSpinCount(&arg1[0x12], 0xfa0)
int64_t* rax = j_sub_140a82f30(0x20)

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    rax[1] = 0

*(arg1 + 0x78) = rax
*(arg1 + 0x70) = rax
arg1[0x20].b = 0
sub_141e858b0(&arg1[2], arg3)
int32_t rsi = 0

if (arg3 != 0)
    do
        int64_t rdi_1 = sx.q(arg1[4])
        int32_t rax_1 = (rdi_1 + 1).d
        arg1[4] = rax_1
        
        if (rax_1 s> arg1[5])
            sub_1407755b0(&arg1[2])
        
        int64_t* rcx_5 = rdi_1 * 0x58 + *(arg1 + 8)
        *rcx_5 = 0
        rcx_5[1] = 0
        rcx_5[2].d = 0xffffffff
        rcx_5[3] = 0
        rcx_5[4] = 0
        rcx_5[8].d = rsi
        rsi += 1
        rcx_5[5].d = 0
        rcx_5[6] = 0
        rcx_5[7] = 0
        *(rcx_5 + 0x44) = 0
        rcx_5[9].d = 0
        rcx_5[0xa] = 0
    while (rsi u< arg3)

return arg1
