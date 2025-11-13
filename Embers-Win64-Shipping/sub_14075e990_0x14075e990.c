// 函数: sub_14075e990
// 地址: 0x14075e990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 0x12)

if (rax == 0xffff)
    if (*(arg1 + 8) != 0 && *(arg1 + 0x10) != 1)
        void* rax_1 = sub_140761a70(arg1 + 8)
        int16_t rcx_1 = *(rax_1 + 0x5c)
        int16_t rdx = (*(rax_1 + 0x58) - 1 + rcx_1) & neg.w(rcx_1)
        *(arg1 + 0x12) = rdx
        return zx.q(sx.d(rdx))
    
    rax = 0
    *(arg1 + 0x12) = 0

return zx.q(sx.d(rax))
