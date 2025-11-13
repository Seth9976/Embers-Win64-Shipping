// 函数: sub_140b02200
// 地址: 0x140b02200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 0x10)
int32_t rax = arg2[1].d + 0x10
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"Compound Change", 0x20)

if (*(arg1 + 0x10) s<= 0)
    sub_140a20ba0(arg2, u" (empty)", 8)
else
    int64_t rcx_3 = *(arg1 + 8)
    uint64_t r8_1 = 0
    int64_t rdx_1 = rcx_3 + (sx.q(*(arg1 + 0x10)) << 3)
    
    while (rcx_3 != rdx_1)
        int32_t rax_2 = (r8_1 + 1).d
        
        if (*rcx_3 == 0)
            rax_2 = r8_1.d
        
        rcx_3 += 8
        r8_1 = zx.q(rax_2)
    
    int64_t var_18
    sub_140a2e390(&var_18, u" (%i sub-change%s)", r8_1)
    int32_t var_10
    
    if (var_10 != 0)
        rdi = var_10 - 1
    
    sub_140a20ba0(arg2, var_18, rdi)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

return arg2
