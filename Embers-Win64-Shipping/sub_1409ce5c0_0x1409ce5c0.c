// 函数: sub_1409ce5c0
// 地址: 0x1409ce5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int32_t* rdi = *arg3
void* result = &rdi[arg3[1]]
uint64_t r14_1 = sx.q(arg3[1].d) << 2 u>> 2

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int32_t rbx_1 = *rdi
        sub_1409b6490(arg1, arg2, rbx_1)
        result = sub_1409d8340(arg1 + 0x40, rbx_1, 1)
        rsi += 1
        *(arg1 + 0xdc) = 1
        rdi = &rdi[1]
    while (rsi != r14_1)

return result
