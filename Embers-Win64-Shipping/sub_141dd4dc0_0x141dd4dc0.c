// 函数: sub_141dd4dc0
// 地址: 0x141dd4dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t* rdi = *(arg1 + 0x190)
int64_t rbp
rbp.b = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x198)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x198))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0 && (rbx_1[0x11].b & 0x10) != 0)
            rbp.b |= (*(*rbx_1 + 0x290))(rbx_1, arg2, arg3, arg4)
            rbp.b |= sub_141f98ab0(arg2, rbx_1, arg3, arg4)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

return zx.q(rbp.b)
