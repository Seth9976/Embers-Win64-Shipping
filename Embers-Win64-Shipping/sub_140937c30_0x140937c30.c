// 函数: sub_140937c30
// 地址: 0x140937c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)

if (r14.d u> 3)
    return 

int64_t r10_1 = r14 * 3
*(arg1 + (r10_1 << 3) + 0x34) += 1
int64_t rbp
rbp.b = 0
int32_t rax_1 = *(arg1 + (r10_1 << 3) + 0x28)
void* rsi_1 = arg1 + (r10_1 << 3)
int32_t rcx = *(rsi_1 + 0x34)
int64_t rdi_1 = sx.q(rax_1 - 1)

if (rax_1 - 1 s>= 0)
    int64_t rbx_2 = rdi_1 << 4
    int64_t temp1_1
    
    do
        int64_t rax_3 = *(rsi_1 + 0x20)
        
        if (*(rbx_2 + rax_3 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_3)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, zx.q(r14.d), zx.q(arg3), zx.q(arg4), arg5) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(rsi_1 + 0x34)

*(rsi_1 + 0x34) = rcx - 1

if (rbp.b != 0)
    sub_140599630(rsi_1 + 0x20, 0)
