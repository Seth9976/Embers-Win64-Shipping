// 函数: sub_140937d10
// 地址: 0x140937d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)

if (r14.d u> 3)
    return 

int64_t rbp
rbp.b = 0
*(arg1 + ((r14 * 3 + 0x1f) << 3) + 0x14) += 1
int64_t* rsi_3 = arg1 + ((r14 * 3 + 0x1f) << 3)
int32_t rax_1 = rsi_3[1].d
int32_t rcx = *(rsi_3 + 0x14)
int64_t rdi_1 = sx.q(rax_1 - 1)

if (rax_1 - 1 s>= 0)
    int64_t rbx_2 = rdi_1 << 4
    int64_t temp1_1
    
    do
        int64_t rax_3 = *rsi_3
        
        if (*(rbx_2 + rax_3 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_3)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, zx.q(r14.d), zx.q(arg3)) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi_1
        rdi_1 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(rsi_3 + 0x14)

*(rsi_3 + 0x14) = rcx - 1

if (rbp.b != 0)
    sub_140599630(rsi_3, 0)
