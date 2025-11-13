// 函数: sub_141b70580
// 地址: 0x141b70580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
arg1[1] = 1
void*** rax = sub_140a84c80(0, 0x30, 0)
int64_t* rbx = rax

if (rax != 0)
    sub_141b79640(rax, arg2, arg3)

void var_18

if (&var_18 != &arg1[8])
    if (rbx != 0)
        (*(*rbx + 0x40))(rbx, &arg1[8])
    else if (*(arg1 + 0x10) != 0)
        int64_t* rcx_2 = *(arg1 + 8)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x38))(rcx_2, 0)
            int64_t rcx_3 = *(arg1 + 8)
            
            if (rcx_3 != 0)
                *(arg1 + 8) = sub_140a84c80(rcx_3, 0, 0)
            
            *(arg1 + 0x10) = 0

if (rbx != 0)
    (*(*rbx + 0x38))(rbx, 0)
    int64_t rax_5 = sub_140a84c80(rbx, 0, 0)
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)

return arg1
