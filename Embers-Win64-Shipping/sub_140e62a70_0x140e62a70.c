// 函数: sub_140e62a70
// 地址: 0x140e62a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = data_143e24360 != 0
int64_t* rsi_1 = *(arg1 + 8) + 0xd0
int64_t rbp
rbp.b = 0
*(rsi_1 + 0x14) += 1
int32_t rax = rsi_1[1].d
int32_t rcx = *(rsi_1 + 0x14)
int64_t rdi = sx.q(rax - 1)

if (rax - 1 s>= 0)
    int64_t rbx_2 = rdi << 4
    int64_t temp1_1
    
    do
        int64_t rax_2 = *rsi_1
        
        if (*(rbx_2 + rax_2 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_1 = *(rbx_2 + rax_2)
            
            if (rcx_1 == 0)
                rbp.b = 1
            else if ((*(*rcx_1 + 0x50))(rcx_1, zx.q(r14.b)) == 0)
                rbp.b = 1
        
        rbx_2 -= 0x10
        temp1_1 = rdi
        rdi -= 1
    while (temp1_1 - 1 s>= 0)
    rcx = *(rsi_1 + 0x14)

*(rsi_1 + 0x14) = rcx - 1

if (rbp.b != 0)
    sub_140599630(rsi_1, 0)

int32_t result
result.b = 1
return result
