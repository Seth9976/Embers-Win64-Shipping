// 函数: sub_140ff9380
// 地址: 0x140ff9380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10 = zx.d(*(arg2 + 0x2c))
int64_t rax_1

if (r10 == 0)
    rax_1 = *(arg1 + 0x43c0)
label_140ff93df:
    uint32_t count = zx.d(arg5)
    uint32_t rdi_1 = zx.d(arg4)
    void* rsi_1 = *(rax_1 + (sx.q(arg3) << 3))
    memcpy(zx.q(rdi_1) + *(rsi_1 + 0x30), arg6, count)
    uint32_t rax = *(rsi_1 + 0x38)
    uint32_t rdi_2 = rdi_1 + count
    
    if (rdi_2 u>= rax)
        rax = rdi_2
    
    *(rsi_1 + 0x38) = rax
else
    if (r10 == 1)
        rax_1 = *(arg1 + 0x43d0)
        goto label_140ff93df
    
    if (r10 == 2)
        rax_1 = *(arg1 + 0x43e0)
        goto label_140ff93df
    
    if (r10 == 3)
        rax_1 = *(arg1 + 0x43f0)
        goto label_140ff93df
    
    if (r10 == 4)
        rax_1 = *(arg1 + 0x4400)
        goto label_140ff93df
