// 函数: sub_141e5ced0
// 地址: 0x141e5ced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t rdx = *(arg1 + 8)
arg2[1].d = 0

if (rdx s> *(arg2 + 0xc))
    sub_1405947f0(arg2, rdx)

if (*(arg1 + 8) s<= 0)
    return 

do
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    *(*arg2 + (rdi_1 << 1)) = i.w
    i += 1
while (i s< *(arg1 + 8))
