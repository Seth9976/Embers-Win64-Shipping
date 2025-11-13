// 函数: sub_142041d20
// 地址: 0x142041d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2bc) += 1
int64_t rbp
rbp.b = 0
int32_t rax = *(arg1 + 0x2b0)
int32_t rcx = *(arg1 + 0x2bc)
int64_t rdi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_2 = *(arg1 + 0x2a8)
        
        if (*(rbx_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_2)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, arg2) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(arg1 + 0x2bc)

*(arg1 + 0x2bc) = rcx - 1

if (rbp.b == 0)
    return rcx - 1

return sub_140599630(arg1 + 0x2a8, 0) __tailcall
