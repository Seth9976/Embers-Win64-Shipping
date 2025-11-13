// 函数: sub_140edc170
// 地址: 0x140edc170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x30))
int32_t rax = (rsi + 1).d
*(arg1 + 0x30) = rax

if (rax s> *(arg1 + 0x34))
    sub_1405a4f90(arg1 + 0x28)

int64_t* rcx_3 = (rsi << 4) + *(arg1 + 0x28)
*rcx_3 = *arg3
void* rax_2 = arg3[1]
rcx_3[1] = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

int64_t* rbx = *(arg1 + 0x10)
int64_t rcx_4 = 0

if (rbx != 0)
    int32_t rax_3 = rbx[1].d
    
    if (rax_3 != 0)
        rbx[1].d = rax_3 + 1
        rax_3.b = 1
    
    if (rax_3.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx_4 = *(arg1 + 8)

*arg2 = rcx_4
arg2[1] = rbx

if (rbx != 0)
    int32_t rax_4 = rbx[1].d
    rbx[1].d = rax_4
    
    if (rax_4 == 0)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg3[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
