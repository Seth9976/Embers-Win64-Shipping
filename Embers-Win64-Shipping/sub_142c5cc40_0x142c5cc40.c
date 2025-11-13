// 函数: sub_142c5cc40
// 地址: 0x142c5cc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if (*(arg2 + 0x4b0) != 0)
    rax = sub_142c703e0(arg1, arg2)

int64_t rsi

if (*(arg2 + 0x4b0) == 0 || rax == 0)
    rsi.b = 0
else
    rsi.b = 1

if (*(arg2 + 0x4b1) != 0)
    rax = sub_142c70400(arg1, arg2)

int64_t rbp

if (*(arg2 + 0x4b1) == 0 || rax == 0)
    rbp.b = 0
else
    rbp.b = 1

if (arg2 != -0x4d8)
    for (int64_t* i = *(arg2 + 0x4d8); i != 0; i = i[2])
        if (*i == arg1)
            sub_142c6a090(arg2 + 0x4d8, i, 0)
            
            if (rsi.b != 0)
                sub_142c6ff80(arg2)
            
            break

if (arg2 == -0x4b8)
    return 

int64_t* rdx_1 = *(arg2 + 0x4b8)

if (rdx_1 == 0)
    return 

while (*rdx_1 != arg1)
    rdx_1 = rdx_1[2]
    
    if (rdx_1 == 0)
        return 

sub_142c6a090(arg2 + 0x4b8, rdx_1, 0)

if (rbp.b != 0)
    sub_142c6ff90(arg2)
