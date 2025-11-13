// 函数: sub_140747d00
// 地址: 0x140747d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t* rdi = *arg1
void* result = &rdi[arg1[1]]
uint64_t r14_1 = sx.q(arg1[1].d) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            (*(*rbx_1 + 0x18))(rbx_1)
            result = (**rbx_1)(rbx_1, 1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return result
