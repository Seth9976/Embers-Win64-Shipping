// 函数: sub_142235390
// 地址: 0x142235390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140790310(*(arg1 + 0x20)) != 0)
    sub_141d41d10(*(arg1 + 0x20), 0)

*(arg1 + 0x1c) += 1
int64_t rbp
rbp.b = 0
int32_t rax_1 = *(arg1 + 0x10)
int32_t rcx_2 = *(arg1 + 0x1c)
int64_t rbx = sx.q(rax_1 - 1)

if (rax_1 - 1 s>= 0)
    int64_t rdi_2 = rbx << 4
    int64_t temp1_1
    
    do
        int64_t rax_3 = *(arg1 + 8)
        
        if (*(rdi_2 + rax_3 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_3 = *(rdi_2 + rax_3)
            
            if (rcx_3 == 0)
                rbp.b = 1
            else if ((*(*rcx_3 + 0x50))(rcx_3) == 0)
                rbp.b = 1
        
        rdi_2 -= 0x10
        temp1_1 = rbx
        rbx -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_2 = *(arg1 + 0x1c)

*(arg1 + 0x1c) = rcx_2 - 1

if (rbp.b == 0)
    return rcx_2 - 1

return sub_140599630(arg1 + 8, 0) __tailcall
