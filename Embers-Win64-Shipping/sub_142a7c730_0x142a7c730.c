// 函数: sub_142a7c730
// 地址: 0x142a7c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax
int512_t zmm1
rax, zmm1 = sub_142aea9e0(*(arg1 + 0x20), arg2, arg1 + 0x13c)
void* rdx = *(arg1 + 8)
*(arg1 + 0x20) = rax

if (*(rdx + 0xc8) != 0)
    *(arg1 + 0x28) = sub_142aea410(*(arg1 + 0x28), rax, 0, 1, zmm1, arg1 + 0x13c)

if (*(arg1 + 0x13c) s<= 0)
    int64_t rax_2 = sub_142aea860(*(arg1 + 0x20))
    int64_t* rcx_3 = *(arg1 + 0x18)
    *(arg1 + 0x30) = rax_2
    *(arg1 + 0x40) = 0
    *(arg1 + 0x48) = rax_2
    *(arg1 + 0x70) = 0
    *(arg1 + 0x78) = rax_2
    *(arg1 + 0x50) = 0
    *(arg1 + 0x58) = rax_2
    *(arg1 + 0x60) = 0
    *(arg1 + 0x68) = rax_2
    *(arg1 + 0x88) = 0
    *(arg1 + 0x90) = 0
    *(arg1 + 0x98) = -1
    *(arg1 + 0xa0) = 0
    *(arg1 + 0x82) = 0
    *(arg1 + 0xa8) = 0
    *(arg1 + 0x10c) = 0
    *(arg1 + 0x110) = 0x2710
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)
    
    int64_t* rcx_4 = *(arg1 + 0x140)
    *(arg1 + 0x18) = 0
    *(arg1 + 0x138) = 1
    
    if (rcx_4 != 0)
        int64_t rdx_2 = *(arg1 + 0x20)
        int32_t arg_8 = 0
        (*(*rcx_4 + 0x30))(rcx_4, rdx_2, &arg_8)

return arg1
