// 函数: sub_140b1b350
// 地址: 0x140b1b350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = *arg1
void* rdi_1 = arg1[1] - rsi
*arg2 = 0
int32_t rdi_2 = (rdi_1 s>> 1).d
arg2[1] = 0

if (rsi != 0 && *rsi != 0 && rdi_2 s> 0)
    int32_t rdx = 0
    
    if (rdi_2 + 1 s> 0)
        sub_1405947f0(arg2, rdi_2 + 1)
        rdx = arg2[1].d
    
    int32_t rax_3 = rdi_2 + 1 + rdx
    arg2[1].d = rax_3
    
    if (rax_3 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rsi, rdi_2 * 2)
    *(*arg2 + (sx.q(arg2[1].d) << 1) - 2) = 0

return arg2
