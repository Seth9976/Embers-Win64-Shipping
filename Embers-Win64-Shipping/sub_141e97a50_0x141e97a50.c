// 函数: sub_141e97a50
// 地址: 0x141e97a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x51]

if (rcx == 0 || (arg1[0x66].b & 4) == 0)
    return 

if (arg1[0x69].d == 0 && (*(*rcx + 0x548))() != 0)
    arg1[0x69].d += 1

char rax
int32_t zmm0_1
rax, zmm0_1 = sub_142489660(arg1)
int32_t rdi_1

if (rax == 0)
    rdi_1 = 0
else
    int64_t* rcx_2 = arg1[0x51]
    int64_t r8_1 = *rcx_2
    
    if ((*(r8_1 + 0x628))(rcx_2, (arg1[0x66].d u>> 3).b & 1, r8_1) == 0)
        rdi_1 = 0
    else
        rdi_1 = 1
        
        if ((arg1[0x66].d & 0x400) == 0)
            arg1[0x69].d += 1
            (*(*arg1 + 0x848))(arg1)
            arg1[0x67].d = zmm0_1
            sub_14248a320(arg1)

arg1[0x66].d &= 0xfffffbff
arg1[0x66].d |= rdi_1 << 0xa
