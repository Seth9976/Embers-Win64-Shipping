// 函数: sub_1425f2e70
// 地址: 0x1425f2e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa0) == 0)
    __builtin_memset(arg2, 0, 0x28)
    *(arg2 + 0x24) = 1
    arg2[5] = 0
    arg2[6] = 0
    return arg2

int64_t* rcx = *(arg1 + 0xa8)
int16_t* rax_1 = (*(*rcx + 0x10))(rcx)
int64_t* rcx_1 = *(arg1 + 0xa8)
int64_t r8 = *rcx_1
void var_38
int32_t* rax_2 = (*(r8 + 0x40))(rcx_1, &var_38, r8)
*arg2 = 0
arg2[1] = 0

if (rax_1 != 0 && *rax_1 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (rax_1[rdi_1] != 0)
    
    int32_t rdx_1 = 0
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(arg2, rdi_1.d + 1)
        rdx_1 = arg2[1].d
    
    int32_t rax_3 = rdx_1 + rdi_1.d + 1
    arg2[1].d = rax_3
    
    if (rax_3 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rax_1, (rdi_1.d + 1) * 2)

arg2[2].d = *rax_2
*(arg2 + 0x14) = rax_2[1]
arg2[3].d = rax_2[2]
*(arg2 + 0x1c) = rax_2[3]
arg2[4].d = rax_2[4]
*(arg2 + 0x24) = rax_2[5]
arg2[5] = 0
arg2[5] = *(rax_2 + 0x18)
*(rax_2 + 0x18) = 0
arg2[6].d = rax_2[8]
*(arg2 + 0x34) = rax_2[9]
*(rax_2 + 0x20) = 0
void var_20
sub_140846380(&var_20)
return arg2
