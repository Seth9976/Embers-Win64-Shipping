// 函数: sub_140e65190
// 地址: 0x140e65190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = 0
int32_t rax_1
int64_t* rcx
int64_t* rbx

if (*(arg1 + 0x1b8) s<= 0)
    rbx = 0.q
    rax_1 = 2
    rcx = nullptr
else
    int64_t rax = *(arg1 + 0x1b0)
    int64_t r8_2 = sx.q(*(arg1 + 0x1b8)) * 2
    rbx = *(rax + (r8_2 << 3) - 8)
    rdx = *(rax + (r8_2 << 3) - 0x10)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rax_1 = 1
    rcx = rbx

*arg2 = rdx
arg2[1] = rcx

if (rcx != 0)
    rcx[1].d += 1

if ((rax_1.b & 2) != 0)
    rax_1 &= 0xfffffffd

if ((rax_1.b & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
