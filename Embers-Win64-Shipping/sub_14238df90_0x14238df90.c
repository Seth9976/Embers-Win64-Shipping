// 函数: sub_14238df90
// 地址: 0x14238df90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x168) s<= 0)
    return 

do
    int64_t rsi_1 = sx.q(*(arg2 + 0x48))
    int64_t rdi_3 = (sx.q(i) << 7) + *(arg1 + 0x160)
    int32_t rax_1 = (rsi_1 + 1).d
    *(arg2 + 0x48) = rax_1
    
    if (rax_1 s> *(arg2 + 0x4c))
        sub_140809370(arg2, rsi_1.d)
    
    void* rax = *(arg2 + 0x40)
    void* rcx_1 = arg2
    
    if (rax != 0)
        rcx_1 = rax
    
    i += 1
    *(rcx_1 + (rsi_1 << 3)) = rdi_3
while (i s< *(arg1 + 0x168))
