// 函数: sub_141d86c50
// 地址: 0x141d86c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_1 = (*(*arg1 + 0x98))()
int64_t rbp
rbp.b = 0
*(rax_1 + 0x14) += 1
int32_t rcx = *(rax_1 + 0x14)
int32_t rax_2 = rax_1[1].d
int64_t rdi = sx.q(rax_2 - 1)

if (rax_2 - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_4 = *rax_1
        
        if (*(rbx_2 + rax_4 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_4)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, arg2) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(rax_1 + 0x14)

*(rax_1 + 0x14) = rcx - 1

if (rbp.b == 0)
    return rcx - 1

return sub_140599630(rax_1, 0) __tailcall
