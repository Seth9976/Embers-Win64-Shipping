// 函数: sub_141b92c20
// 地址: 0x141b92c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x2f8)

if (rbx == 0)
    return 

int64_t arg_8 = arg2
int64_t rax_1 = sub_141bca720(rbx, &arg_8)
int32_t rax
int64_t r8_1
rax, r8_1 = sub_1419e1590(rbx + 0x630, 0)

if (*(rbx + 0x490) != 0)
    int64_t* rcx_2 = *(rbx + 0x488)
    
    if (rcx_2 != 0)
        int64_t rdx_1 = *rcx_2
        rax, r8_1 = (*(rdx_1 + 0x28))(rcx_2, rdx_1)
        
        if (rax.b != 0)
            int64_t* rcx_3
            
            if (*(rbx + 0x490) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(rbx + 0x488)
            
            rax, r8_1 = (*(*rcx_3 + 0x48))(rcx_3)
            *(rbx + 0x480) = rax

if (*(rbx + 0x480) == 0)
    return 

r8_1.b = 1
(*(*(rbx + 0x4f8) + 0x28))(rbx + 0x4f8, rax_1, r8_1, 0)
(*(*(rbx + 0x4f8) + 0x40))(rbx + 0x4f8, 3)
