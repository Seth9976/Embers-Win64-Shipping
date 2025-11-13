// 函数: sub_142823728
// 地址: 0x142823728
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 1
*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0xf
arg1[8] = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0
void* rax = arg3[1]

if (rax != 0)
    *(rax + 8) += 1

*(arg1 + 0x28) = *arg3
*(arg1 + 0x30) = arg3[1]
*(arg1 + 0x38) = arg2
int64_t* rbx = arg3[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rax_5 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rbx + 8))(rbx)

return arg1
