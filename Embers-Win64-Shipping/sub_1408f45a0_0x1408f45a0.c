// 函数: sub_1408f45a0
// 地址: 0x1408f45a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_142897860(arg4)
int64_t rdi = sx.q(arg3[1].d)

if (rax s> rdi.d)
    arg3[1].d = rax
    
    if (rax s> *(arg3 + 0xc))
        sub_1405daba0(arg3)
    
    memset(rdi + *arg3, 0, sx.q(rax - rdi.d))
else if (rax s< rdi.d && rax != rdi.d)
    arg3[1].d = rax
    sub_1405dac10(arg3)

int32_t result = sub_142897580(zx.q(arg2[1].d), *arg2, *arg3, arg4, 1)

if (result == 0xffffffff)
    arg3[1].d = 0
    
    if (*(arg3 + 0xc) != 0)
        sub_1405c5510(arg3, 0)

return result
