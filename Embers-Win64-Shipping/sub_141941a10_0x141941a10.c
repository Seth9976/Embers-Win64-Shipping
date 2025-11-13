// 函数: sub_141941a10
// 地址: 0x141941a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t rax_1 = *(arg2 + 0x34)
*(arg2 + 0x34) += 1
*(arg2 + 0x38)
*(arg2 + 0x38) = rax_1
bool cond:0_1 = *(arg2 + 0x40) != 1
*(arg2 + 0x28) = 0
*(arg2 + 0x3c) = 0

if (not(cond:0_1))
    if (*(arg2 + 0x3d) == 0 && sub_141955bc0(*(arg2 + 0x20)) == 0)
        sub_141958330(*(arg2 + 0x18), *(arg2 + 0x20))
        *(arg2 + 0x3d) = 1
    
    if (*(arg2 + 0x3d) != 0)
        sub_141955ec0(arg2 + 0x18, arg2 + 0x20)
        *(arg2 + 0x3d) = 0
    
    data_143effcb0(0x8914, zx.q(*(arg2 + 0x18)))
    *(arg1 + 0x2f4) = *(arg2 + 0x18)

void* rax = data_1439c7510

if (rax == 0 || *(rax + 0x10) == 0)
    return 

int32_t rax_5 = 0

if (0 == *(arg2 + 0x34))
    *(arg2 + 0x34) = 0
else
    rax_5 = *(arg2 + 0x34)

void** rbx_2 = data_1439c7510
int32_t var_10_1 = rax_5
int64_t rdi_2 = sx.q(rbx_2[1].d)
int32_t rax_6 = (rdi_2 + 1).d
rbx_2[1].d = rax_6

if (rax_6 s> *(rbx_2 + 0xc))
    sub_1405a4f90(rbx_2)

*(*rbx_2 + rdi_2 * 0x10) = arg2.o
