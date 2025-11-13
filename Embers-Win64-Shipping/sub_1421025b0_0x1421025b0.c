// 函数: sub_1421025b0
// 地址: 0x1421025b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *(arg1 + 0xb8)

if (r15 == arg2)
    return 

*(arg1 + 0xb8) = 0xffffffff
sub_1423f1f10(data_143f5b298, arg1, r15, arg2)
*(arg1 + 0xb8) = arg2
int64_t rbp
rbp.b = 0
*(arg1 + 0xd4) += 1
int32_t rax_1 = *(arg1 + 0xc8)
int32_t rcx_1 = *(arg1 + 0xd4)
int64_t rdi_1 = sx.q(rax_1 - 1)

if (rax_1 - 1 s>= 0)
    int64_t rbx_2 = rdi_1 << 4
    int64_t temp1_1
    
    do
        int64_t rax_3 = *(arg1 + 0xc0)
        
        if (*(rbx_2 + rax_3 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_2 = *(rbx_2 + rax_3)
            
            if (rcx_2 == 0)
                rbp.b = 1
            else if ((*(*rcx_2 + 0x50))(rcx_2, zx.q(arg2), zx.q(r15)) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_1 = *(arg1 + 0xd4)

*(arg1 + 0xd4) = rcx_1 - 1

if (rbp.b != 0)
    return sub_140599630(arg1 + 0xc0, 0) __tailcall
