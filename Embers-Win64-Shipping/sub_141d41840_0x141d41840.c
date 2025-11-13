// 函数: sub_141d41840
// 地址: 0x141d41840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rsi = *(arg1 + 0x350)

if (*rsi == 2)
    AcquireSRWLockShared(&rsi[0x18])

AcquireSRWLockShared(&rsi[0x20])
int64_t rdi = 0
int64_t* rbx = *(rsi + 8)
uint64_t r14_1 = sx.q(*(rsi + 0x10)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(rsi + 0x10))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx_2 = *rbx
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x28))(rcx_2)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

int64_t result = ReleaseSRWLockShared(&rsi[0x20])

if (*rsi != 2)
    return result

return ReleaseSRWLockShared(&rsi[0x18])
