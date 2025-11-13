// 函数: sub_141ffdd80
// 地址: 0x141ffdd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint64_t rax = zx.q(*(arg1 + 0x5b))

if ((rax.b & 4) != 0 || *(arg1 + 0x59) != 1)
    return 

*(arg1 + 0x59) = 0
rax.b &= 0xfb
*(arg1 + 0x5b) = rax.b
*(arg1 + 0x68) = 0

if (*(arg1 + 0x6c) != 0)
    sub_1405947f0(arg1 + 0x60, 0)

int64_t* i = *(arg1 + 0x28)

for (void* rbp_1 = &i[sx.q(*(arg1 + 0x30))]; i != rbp_1; i = &i[1])
    void* rax_1 = *i
    int64_t rdi_1 = 0
    int64_t* rbx_2 = *(rax_1 + 0xd0)
    uint64_t rsi_2 = sx.q(*(rax_1 + 0xd8)) << 3 u>> 3
    
    if (rbx_2 u> &rbx_2[sx.q(*(rax_1 + 0xd8))])
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            sub_141ffdd80(**rbx_2)
            rdi_1 += 1
            rbx_2 = &rbx_2[1]
        while (rdi_1 != rsi_2)
