// 函数: sub_14226a6f0
// 地址: 0x14226a6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
int64_t* rdi = nullptr

if (arg1 != 0)
    int64_t* rcx = *(arg1 + 0x60)
    
    if (rcx != 0)
        rbx = (*(*rcx + 0x30))(rcx)
    
    rdi = rbx
    
    if (rbx != 0)
        (*(*rbx + 0x358))(rbx, 0, 0)

(*arg2)(*(arg2 + 8))

if (rdi == 0)
    int64_t rax_4
    rax_4.b = 0
    return rax_4

int64_t rdx = *rbx
(*(rdx + 0x360))(rbx, rdx)
int64_t rax_5
rax_5.b = 1
return rax_5
