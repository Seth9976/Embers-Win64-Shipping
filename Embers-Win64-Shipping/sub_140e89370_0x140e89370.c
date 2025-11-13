// 函数: sub_140e89370
// 地址: 0x140e89370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2.q f== *(arg1 + 0x2f8))
    return 

int64_t rbp
rbp.b = 0
*(arg1 + 0x2f8) = arg2.q
*(arg1 + 0x31c) += 1
int32_t rax_1 = *(arg1 + 0x310)
int32_t rcx = *(arg1 + 0x31c)
int64_t rdi_1 = sx.q(rax_1 - 1)

if (rax_1 - 1 s>= 0)
    int64_t rbx_2 = rdi_1 << 4
    int64_t temp1_1
    
    do
        int64_t rax_3 = *(arg1 + 0x308)
        
        if (*(rbx_2 + rax_3 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_3)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, arg2) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(arg1 + 0x31c)

*(arg1 + 0x31c) = rcx - 1

if (rbp.b != 0)
    sub_140599630(arg1 + 0x308, 0)
