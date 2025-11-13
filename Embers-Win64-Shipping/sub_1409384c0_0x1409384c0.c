// 函数: sub_1409384c0
// 地址: 0x1409384c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xdc) += 1
int64_t rbp
rbp.b = 0
int32_t rax = *(arg1 + 0xd0)
int32_t rcx = *(arg1 + 0xdc)
int64_t rdi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_2 = *(arg1 + 0xc8)
        
        if (*(rbx_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_2)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, arg2, zx.q(arg3)) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(arg1 + 0xdc)

*(arg1 + 0xdc) = rcx - 1

if (rbp.b == 0)
    return rcx - 1

return sub_140599630(arg1 + 0xc8, 0) __tailcall
