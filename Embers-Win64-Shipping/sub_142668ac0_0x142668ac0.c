// 函数: sub_142668ac0
// 地址: 0x142668ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg2 + 0x30)
*(arg1 + 0x40) = 0

if (rdx s> *(arg1 + 0x44))
    sub_140638cc0(arg1 + 0x38, rdx)

int64_t* rsi = *(arg2 + 0x28)
void* rbp_2 = &rsi[sx.q(*(arg2 + 0x30)) * 4]

while (rsi != rbp_2)
    int64_t rdi_1 = sx.q(*(arg1 + 0x40))
    int32_t rax_1 = (rdi_1 + 1).d
    *(arg1 + 0x40) = rax_1
    
    if (rax_1 s> *(arg1 + 0x44))
        sub_140638a00(arg1 + 0x38)
    
    int64_t rax_2 = *(arg1 + 0x38)
    int64_t rcx_2 = rdi_1 * 3
    *(rax_2 + (rcx_2 << 2)) = *rsi
    int32_t rax = rsi[1].d
    rsi = &rsi[4]
    *(rax_2 + (rcx_2 << 2) + 8) = rax
