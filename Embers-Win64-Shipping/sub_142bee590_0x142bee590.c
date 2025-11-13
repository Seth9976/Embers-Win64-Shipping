// 函数: sub_142bee590
// 地址: 0x142bee590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = arg1
char* rbx = arg1

if (*arg1 != 0)
    do
        char rax_1 = *rbx
        
        if (rax_1 == 0x20)
            break
        
        if (rax_1 == 9)
            break
        
        rbx = &rbx[1]
    while (*rbx != 0)

char rax_2 = *rbx
int32_t rsi = -1

if (rax_2 != 0)
    rsi = sx.d(rax_2)
    *rbx = 0

int64_t* rax_3

if (*arg1 != 0)
    rax_3 = sub_142b993e0(arg1, arg5 + 0xa0)

void* rax_7

if (*arg1 == 0 || rax_3 == 0)
    rax_7 = nullptr
else
    int64_t rax_4 = *rax_3
    
    if (rax_4 u< 0x53)
        rax_7 = &(&data_143698ce0)[rax_4 * 3]
    else
        rax_7 = *(arg5 + 0x90) + (rax_4 - 0x53) * 0x18

if (rsi != 0xffffffff)
    *rbx = rsi.b

if (rax_7 != 0 && *(rax_7 + 8) != 1)
    return 0

void* rax_10 = &arg1[zx.q(arg2)]

if (*rbx != 0)
    *rbx = 0
    rbx = &rbx[1]

char i = *rbx

if (i != 0)
    while (i == 0x20 || i == 9)
        i = rbx[1]
        rbx = &rbx[1]
        
        if (i == 0)
            break

char* r8 = &rbx[1]

if (*rbx != 0x22)
    r8 = rbx

*arg4 = r8

if (rax_10 u> r8)
    void* rcx_1
    
    do
        char rdx_1 = *(rax_10 - 1)
        rcx_1 = rax_10 - 1
        
        if (rdx_1 != 0x20 && rdx_1 != 9)
            if (rax_10 u> r8 && *(rax_10 - 1) == 0x22)
                *(rax_10 - 1) = 0
            
            break
        
        *rcx_1 = 0
        rax_10 = rcx_1
    while (rcx_1 u> r8)

return 1
