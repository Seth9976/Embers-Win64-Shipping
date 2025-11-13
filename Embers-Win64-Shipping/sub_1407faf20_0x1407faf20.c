// 函数: sub_1407faf20
// 地址: 0x1407faf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg2 + 0x10)
int32_t r9 = 0
int32_t* r10 = *(arg2 + 0x20)
uint32_t r8 = zx.d(*rax)
*(arg2 + 0x10) = &rax[1]
int32_t r8_1 = *r10
int32_t rax_3 = r8 & 0x7fff

if (rax_3 s>= r8_1)
    int64_t rcx = 0
    
    do
        rax_3 -= r8_1
        rcx += 1
        r8_1 = r10[rcx]
        r9 += 1
    while (rax_3 s>= r8_1)

return sub_14080fca0(arg1, 
    *(*(arg2 + 0x38) + (sx.q(*(*(*(arg2 + 0x18) + (sx.q(r9) << 3)) + sx.q(rax_3))) << 3)) + 0x10, 
    arg2) __tailcall
