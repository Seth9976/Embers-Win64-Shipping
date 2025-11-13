// 函数: sub_141763950
// 地址: 0x141763950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg1 + 0x38))
int32_t rax = (rbp + 1).d
*(arg1 + 0x38) = rax

if (rax s> *(arg1 + 0x3c))
    sub_14177e5f0(arg1 + 0x30)

int64_t r15_2 = rbp * 0x140
sub_1417042c0(*(arg1 + 0x30) + r15_2, arg2)

if (*(arg1 + 0x7a) != 0)
    int32_t* rax_1 = j_sub_140a82f30(0x18)
    int32_t* rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        *rax_1 = rbp.d
        *(rax_1 + 8) = arg1
        rax_1[4] = 3
    
    int32_t rcx_3 = rbx_1[4]
    int64_t rax_2 = sx.q(*rbx_1)
    int64_t rdx_2 = *(rbx_1 + 8)
    void* rcx_5
    
    if (rcx_3 == 1)
        rcx_5 = rax_2 * 0xe0 + *(rdx_2 + 0x10)
    else if (rcx_3 != 2)
        rcx_5 = rax_2 * 0x140 + *(rdx_2 + 0x30)
    else
        rcx_5 = rax_2 * 0xe0 + *(rdx_2 + 0x20)
    
    *(rcx_5 + 0xc0) = *(arg1 + 0x80)
    *(r15_2 + *(arg1 + 0x30) + 0xc8) = rbx_1
    int64_t rbp_1 = sx.q(*(arg1 + 0x48))
    int32_t rax_5 = (rbp_1 + 1).d
    *(arg1 + 0x48) = rax_5
    
    if (rax_5 s> *(arg1 + 0x4c))
        sub_1405a4d70(arg1 + 0x40)
    
    *(*(arg1 + 0x40) + (rbp_1 << 3)) = rbx_1

return sub_141781730(arg1, *(arg1 + 0x30) + r15_2) __tailcall
