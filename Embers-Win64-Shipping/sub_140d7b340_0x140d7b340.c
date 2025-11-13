// 函数: sub_140d7b340
// 地址: 0x140d7b340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int32_t rax = ImmGetCompositionStringW(arg2, arg3, nullptr, 0)
int32_t rdx_1 = arg1[1].d
int64_t r14 = sx.q(rax)
uint32_t rdi_1 = (r14 u>> 1).d

if (rdi_1 + 1 s> rdx_1)
    arg1[1].d = rdi_1 + 1
    
    if (rdi_1 + 1 s> *(arg1 + 0xc))
        sub_140594770(arg1)
else if (rdi_1 + 1 s< rdx_1 && rdi_1 + 1 != rdx_1)
    arg1[1].d = rdi_1 + 1
    sub_1405a50a0(arg1)

ImmGetCompositionStringW(arg2, arg3, *arg1, r14.d)
*(*arg1 + (sx.q(rdi_1) << 1)) = 0
return arg1
