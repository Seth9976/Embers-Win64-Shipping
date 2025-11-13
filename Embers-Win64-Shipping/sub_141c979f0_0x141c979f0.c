// 函数: sub_141c979f0
// 地址: 0x141c979f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* rsi = *arg2
void* result = &rsi[arg2[1]]
uint64_t r15_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rsi u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t r14_1 = *rsi
        int64_t* rbx_2 = **arg1
        int64_t rdi_1 = sx.q(rbx_2[1].d)
        int32_t rax_1 = (rdi_1 + 1).d
        rbx_2[1].d = rax_1
        
        if (rax_1 s> *(rbx_2 + 0xc))
            sub_1405a4d70(rbx_2)
        
        result = *rbx_2
        rsi = &rsi[1]
        rbp += 1
        *(result + (rdi_1 << 3)) = r14_1
    while (rbp != r15_1)

return result
