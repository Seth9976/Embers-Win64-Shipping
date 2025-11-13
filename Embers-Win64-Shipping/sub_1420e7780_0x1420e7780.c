// 函数: sub_1420e7780
// 地址: 0x1420e7780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x30))
void* rdi_1 = *(arg1 + 0x20) + 0xa8

if (rsi.d != 0)
    int32_t rax_1 = *(rdi_1 + 8)
    int32_t rdx_1 = rax_1 + rsi.d
    
    if (rdx_1 s> *(rdi_1 + 0xc))
        sub_140638c50(rdi_1, rdx_1)
        rax_1 = *(rdi_1 + 8)
    
    memcpy(*rdi_1 + (sx.q(rax_1) << 3), *(arg1 + 0x28), (rsi << 3).d)
    *(rdi_1 + 8) += rsi.d

*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) s<= 0xffffffff)
    sub_140638c50(arg1 + 0x28, 0)
