// 函数: sub_141e10ce0
// 地址: 0x141e10ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)

if (rbx == 0)
    return 0

void* rax = sub_1424682e0()
int32_t arg_10 = 0xffffffff
int32_t arg_14 = 0

if (rax != 0)
    int64_t arg_18
    sub_140d3a3a0(&arg_18, rax)
    arg_10.q = arg_18

int32_t arg_8
sub_141ab41e0(rbx, &arg_8, &arg_10)
int64_t rax_2 = sx.q(arg_8)
void* rbx_1

if (rax_2.d == 0xffffffff)
    rbx_1 = nullptr
else
    void* rcx_2 = *(rbx + 0x100)
    
    if (rcx_2 != 0)
        rbx = rcx_2
    
    rbx_1 = rbx + (rax_2 << 6)

void* rcx_5 = rbx_1 + 8

if (rbx_1 == 0)
    rcx_5 = nullptr

if (rcx_5 != 0)
    int64_t rdx_3 = sx.q(*(rcx_5 + 0x28))
    
    if (rdx_3.d != 0)
        void* rax_3 = *(rcx_5 + 0x20)
        
        if (rax_3 != 0)
            rcx_5 = rax_3
        
        return *(rcx_5 + (rdx_3 << 3) - 8)

return 0
