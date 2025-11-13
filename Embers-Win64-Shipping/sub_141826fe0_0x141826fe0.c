// 函数: sub_141826fe0
// 地址: 0x141826fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
int64_t r12 = *arg2

if (rbx != 0)
    rbx[1].d += 1

void* rsi = *arg1
int64_t rbp = sx.q(*(rsi + 0x28))
int32_t rax = (rbp + 1).d
*(rsi + 0x28) = rax

if (rax s> *(rsi + 0x2c))
    sub_1405a4f90(rsi + 0x20)

int64_t* rax_3 = (rbp << 4) + *(rsi + 0x20)
*rax_3 = r12
rax_3[1] = rbx

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rsi_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rbx + 8))(rbx, zx.q(rsi_1))

void* rbx_1 = *arg1
int64_t rdi = sx.q(*(rbx_1 + 0x38))
int32_t rax_7 = (rdi + 1).d
*(rbx_1 + 0x38) = rax_7

if (rax_7 s> *(rbx_1 + 0x3c))
    sub_1405a4f90(rbx_1 + 0x30)

int64_t* rcx_6 = (rdi << 4) + *(rbx_1 + 0x30)
*rcx_6 = *arg2
void* rax_9 = arg2[1]
rcx_6[1] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

rbp.b = 0
int64_t* rsi_3 = *arg1 + 0xa8
*(rsi_3 + 0x14) += 1
int32_t rax_10 = rsi_3[1].d
int32_t rcx_7 = *(rsi_3 + 0x14)
int64_t rdi_1 = sx.q(rax_10 - 1)

if (rax_10 - 1 s>= 0)
    int64_t rbx_3 = rdi_1 << 4
    int64_t temp2_1
    
    do
        int64_t rax_12 = *rsi_3
        
        if (*(rbx_3 + rax_12 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_8 = *(rbx_3 + rax_12)
            
            if (rcx_8 == 0)
                rbp.b = 1
            else if ((*(*rcx_8 + 0x50))(rcx_8) == 0)
                rbp.b = 1
        
        rbx_3 -= 0x10
        temp2_1 = rdi_1
        rdi_1 -= 1
    while (temp2_1 - 1 s>= 0)
    rcx_7 = *(rsi_3 + 0x14)

int32_t result = rcx_7 - 1
*(rsi_3 + 0x14) = result

if (rbp.b == 0)
    return result

return sub_140599630(rsi_3, 0)
