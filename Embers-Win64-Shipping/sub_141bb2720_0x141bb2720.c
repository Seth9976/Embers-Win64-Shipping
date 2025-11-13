// 函数: sub_141bb2720
// 地址: 0x141bb2720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x38)
int64_t* rax = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
        rax = nullptr
    else
        rbx[1].d = rax_1 + 1
        rax = rbx

int64_t* rcx = nullptr

if (rax != 0)
    rcx = *(arg1 + 0x30)

void* rax_4 = (*(*rcx + 0x90))(rcx, zx.q(*(arg1 + 0x40)))
*(arg2 + 0x10) = 0
void* rsi = rax_4
*(arg2 + 0x18) = 0

if (arg2 != rax_4)
    sub_14059a8e0(arg2, *(rax_4 + 0x18))
    int32_t rax_5 = *(rsi + 0x18)
    *(arg2 + 0x18) = rax_5
    
    if (rax_5 != 0)
        void* rcx_2 = *(rsi + 0x10)
        void* rdx_3 = *(arg2 + 0x10)
        
        if (rcx_2 != 0)
            rsi = rcx_2
        
        void* rcx_3 = arg2
        
        if (rdx_3 != 0)
            rcx_3 = rdx_3
        
        memcpy(rcx_3, rsi, (zx.q(rax_5 + 0x1f) u>> 5 << 2).d)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
