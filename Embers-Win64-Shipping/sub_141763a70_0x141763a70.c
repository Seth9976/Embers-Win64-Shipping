// 函数: sub_141763a70
// 地址: 0x141763a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(*(arg1 + 0x18))
int32_t rax = (rsi + 1).d
*(arg1 + 0x18) = rax

if (rax s> *(arg1 + 0x1c))
    sub_1407c39b0(arg1 + 0x10)

int64_t r15 = rsi * 0xe0
int128_t* rcx_2 = *(arg1 + 0x10) + r15
*rcx_2 = *arg2
rcx_2[1] = arg2[1]
rcx_2[2] = arg2[2]
rcx_2[3] = arg2[3]
rcx_2[4] = arg2[4]
rcx_2[5] = arg2[5]
rcx_2[6] = arg2[6]
rcx_2[7] = arg2[7]
*(rcx_2 + 0x80) = *(arg2 + 0x80)
rcx_2[9] = arg2[9]
rcx_2[0xa] = arg2[0xa]
rcx_2[0xb] = arg2[0xb]
rcx_2[0xc] = arg2[0xc]
rcx_2[0xd] = arg2[0xd]

if (*(arg1 + 0x7a) != 0)
    int32_t* rax_1 = j_sub_140a82f30(0x18)
    int32_t* rbx_2 = rax_1
    
    if (rax_1 == 0)
        rbx_2 = nullptr
    else
        *rax_1 = rsi.d
        *(rax_1 + 8) = arg1
        rax_1[4] = 1
    
    int32_t rdx_1 = rbx_2[4]
    int64_t rax_2 = sx.q(*rbx_2)
    int64_t rcx_4 = *(rbx_2 + 8)
    void* rax_4
    
    if (rdx_1 == 1)
        rax_4 = rax_2 * 0xe0 + *(rcx_4 + 0x10)
    else if (rdx_1 != 2)
        rax_4 = rax_2 * 0x140 + *(rcx_4 + 0x30)
    else
        rax_4 = rax_2 * 0xe0 + *(rcx_4 + 0x20)
    
    *(rax_4 + 0xc0) = 0x80000001
    *(r15 + *(arg1 + 0x10) + 0xc8) = rbx_2
    int64_t r14_1 = sx.q(*(arg1 + 0x48))
    int32_t rax_9 = (r14_1 + 1).d
    *(arg1 + 0x48) = rax_9
    
    if (rax_9 s> *(arg1 + 0x4c))
        sub_1405a4d70(arg1 + 0x40)
    
    *(*(arg1 + 0x40) + (r14_1 << 3)) = rbx_2

return sub_141781730(arg1, *(arg1 + 0x10) + r15) __tailcall
