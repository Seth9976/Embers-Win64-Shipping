// 函数: sub_140b5e790
// 地址: 0x140b5e790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi = zx.d(*arg1)
uint32_t rdi_1 = rdi u>> 6
*arg2 = 0
arg2[1] = 0

if ((rdi.w & 1) == 0)
    if (arg1 != -2 && arg1[1].b != 0 && rdi_1 != 0)
        sub_1405947f0(arg2, rdi_1 + 1)
        int32_t rax_4 = rdi_1 + 1 + arg2[1].d
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        sub_1405a7220(*arg2, rdi_1, &arg1[1], rdi_1, 0x3f)
        *(*arg2 + (sx.q(arg2[1].d) << 1) - 2) = 0
else if (arg1 != -2 && arg1[1] != 0 && rdi_1 != 0)
    sub_1405947f0(arg2, rdi_1 + 1)
    int32_t rax_2 = rdi_1 + 1 + arg2[1].d
    arg2[1].d = rax_2
    
    if (rax_2 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, &arg1[1], rdi_1 * 2)
    *(*arg2 + (sx.q(arg2[1].d) << 1) - 2) = 0

return arg2
