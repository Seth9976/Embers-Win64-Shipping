// 函数: sub_141b93140
// 地址: 0x141b93140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rsi = *arg2
void* result = &rsi[arg2[1]]
uint64_t r14_1 = sx.q(arg2[1].d) << 3 u>> 3

if (rsi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rsi
        result = (*(*rbx_1 + 0x280))(rbx_1)
        
        if (result != 0)
            void* rax_3 = (*(*rbx_1 + 0x280))(rbx_1)
            result = sub_141b719f0(*(arg1 + 0x10), *(rax_3 + 0x18))
            
            if (result != 0)
                int64_t r9_1 = *result
                result = (*(r9_1 + 0x148))(result, sx.q(*(result + 0x4c)) + arg1, rbx_1, r9_1)
        
        rsi = &rsi[1]
        rdi += 1
    while (rdi != r14_1)

return result
