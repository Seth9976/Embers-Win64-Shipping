// 函数: sub_14211a390
// 地址: 0x14211a390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[1].d == 0xffffffff
*arg1 = &data_1432d5628

if (not(cond:0))
    *(arg1 + 0x18c) |= 4
    sub_14198bce0(arg1)
    
    if ((*(arg1 + 0x18c) & 8) != 0)
        int64_t* rax_1 = sub_142006940()
        int64_t r8_1 = *rax_1
        (*(r8_1 + 0x158))(rax_1, arg1, r8_1)
        *(arg1 + 0x18c) &= 0xf7

char rax_3 = *(arg1 + 0x18c)

if ((rax_3 & 8) != 0)
    int64_t* rax_2 = sub_142006940()
    int64_t r8_2 = *rax_2
    (*(r8_2 + 0x158))(rax_2, arg1, r8_2)
    rax_3 = *(arg1 + 0x18c) & 0xf7

void* rbx = &arg1[0x2e]
*(arg1 + 0x18c) = rax_3 | 2

for (int64_t i = 4; i != 0; )
    rbx -= 0x58
    i -= 1
    sub_1421305d0(rbx)
    sub_1405d16e0(rbx, nullptr)
    int64_t rcx_4 = *(rbx + 0x38)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = *(rbx + 0x28)
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t rcx_6 = *(rbx + 0x18)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    sub_1405d1550(rbx + 0x10)
    sub_1405d1550(rbx)

return sub_1419948a0(arg1) __tailcall
