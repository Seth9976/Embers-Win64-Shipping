// 函数: sub_142aa7af0
// 地址: 0x142aa7af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx != 0)
    (**rcx)(rcx, 1)

*(arg1 + 0x20) = arg2

if (arg2 == 0)
    return 

char rax_2 = sub_142ab36d0(arg2, 0)
int64_t* rcx_2 = *(arg1 + 0x20)

if (rax_2 != 0)
    int64_t rax_3 = sub_142ab5250(rcx_2, 0)
    *(arg1 + 8) = rax_3
    int32_t rax_4 = 5
    
    if (0x80000000 + rax_3 u<= 0xffffffff)
        rax_4 = 2
    
    *(arg1 + 0x28) = rax_4
    return 

*(arg1 + 0x28) = 1
int64_t rax
int64_t zmm0_1
rax, zmm0_1 = sub_142ab5010(rcx_2)
*(arg1 + 8) = zmm0_1
