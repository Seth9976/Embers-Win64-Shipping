// 函数: sub_14186cec0
// 地址: 0x14186cec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rsi = *(arg1 + 8)
int64_t rbx
rbx.b = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x10)) << 3 u>> 3

if (rsi u> &rsi[sx.q(*(arg1 + 0x10))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rsi
        
        if ((*(*rcx + 0x18))(rcx, arg2) != 0 || rbx.b != 0)
            rbx.b = 1
        
        rsi = &rsi[1]
        rdi += 1
    while (rdi != r14_1)

return zx.q(rbx.b)
