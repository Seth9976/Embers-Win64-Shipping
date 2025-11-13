// 函数: sub_142bf8f10
// 地址: 0x142bf8f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(*(arg1 + 0x19))
uint64_t r8 = 0
void* rax_2 = (zx.q(*(arg1 + 0x18)) << 8) + arg1
int32_t r10_2 = zx.d(*(r10 + rax_2 + 1)) + 1
uint32_t r9_1 = zx.d(*(r10 + rax_2)) << 8

if (r10_2 != neg.d(r9_1))
    void* r9_4 = (zx.q(*(arg1 + 0x18)) << 8) + zx.q(*(arg1 + 0x19)) + arg1
    
    do
        void* rcx
        
        if (r8.d u<= (zx.d(*r9_4) << 8) + zx.d(*(r9_4 + 1)))
            rcx = r9_4 + 2 + (r8 << 3)
        else
            rcx = &data_14369a5d0
        
        if ((zx.d(*(rcx + 1)) << 0x10) + (zx.d(*(rcx + 2)) << 8) + (zx.d(*rcx) << 0x18)
                + zx.d(*(rcx + 3)) == 0x73666e74 && arg2 u< (zx.d(*(rcx + 4)) << 8) + 1 + zx.d(*(rcx + 5)))
            void* rax_16 =
                sub_142bf9680(rcx, arg2, zx.q(*(arg1 + 0x19)) + (zx.q(*(arg1 + 0x18)) << 8) + arg1)
            return arg3 + 4 + (((zx.q(*(rax_16 + 5)) << 8) + zx.q(*(rax_16 + 6))) << 8)
                + zx.q(*(rax_16 + 7))
        
        r8 = zx.q(r8.d + 1)
    while (r8.d u< r10_2 + r9_1)

return &data_14369a5d0
