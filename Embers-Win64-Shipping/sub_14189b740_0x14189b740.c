// 函数: sub_14189b740
// 地址: 0x14189b740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1[1]
int16_t* rsi = *arg1
int32_t rcx = 0
*arg2 = 0
arg2[1] = 0

if (rsi != 0 && *rsi != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (rsi[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(arg2, rdi_1.d + 1)
        rcx = arg2[1].d
    
    int32_t rax_1 = rcx + rdi_1.d + 1
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rsi, (rdi_1.d + 1) * 2)

arg2[2].d = 4
arg2[4] = *r14
void* rax_3 = r14[1]
arg2[5] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[6].d = r14[2].d
arg2[7].b = 1
return arg2
