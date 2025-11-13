// 函数: sub_14231bb90
// 地址: 0x14231bb90
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
            result = sub_142221cc0(rsi_1, arg2.d)
        
        rdi = &rdi[1]
        rbx += 1
    while (rbx != r14_1)

return result
