// 函数: sub_14231c460
// 地址: 0x14231c460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int64_t* rdi = *(arg1 + 0x800)
void* result = &rdi[sx.q(*(arg1 + 0x808))]
uint64_t r14_1 = sx.q(*(arg1 + 0x808)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rsi_1 = *rdi
        result = sub_14221b2f0(rsi_1)
        
        if (result.b != 0)
            result = sub_142222210(rsi_1, arg2)
        
        rdi = &rdi[1]
        rbx += 1
    while (rbx != r14_1)

return result
