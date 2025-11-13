// 函数: sub_14075ca40
// 地址: 0x14075ca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t* rbx = *(arg1 + 0x178)
int64_t rdi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x180)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x180))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            rsi += (*(*rcx + 0x40))(rcx)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

return zx.q(rsi + ((*(arg1 + 0x7c) + 0x40) << 3))
