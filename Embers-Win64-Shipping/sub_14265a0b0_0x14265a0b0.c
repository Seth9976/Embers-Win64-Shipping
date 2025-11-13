// 函数: sub_14265a0b0
// 地址: 0x14265a0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t* rbx = *(arg1 + 0x90)
int64_t rdi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x98)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x98))])
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rcx = *rbx
        
        if (rcx != 0)
            int64_t* rcx_1 = *(rcx + 0x2e0)
            
            if (rcx_1 != 0)
                int64_t rdx_1 = *rcx_1
                rsi += (*(rdx_1 + 0x48))(rcx_1, rdx_1)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

return zx.q(rsi)
