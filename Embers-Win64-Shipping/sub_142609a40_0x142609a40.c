// 函数: sub_142609a40
// 地址: 0x142609a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg3 = 0
int32_t r11 = *(arg1 + 0x10)

if ((r11 u>> 0x1f).b != 0)
    memset(arg1 + 0x10, 0, 0x50)
    return 0x80000000

int64_t rax_3 = *(arg1 + 0x28)
int64_t rcx_1 = *(arg1 + 0x30)

if (rax_3 != rcx_1)
    void* i_2 = *(arg1 + 0x18)
    
    if (*(i_2 + 0x18) != rcx_1)
        *(arg1 + 0x10) = r11 | 0x40
    
    void* const i_3 = nullptr
    void* i
    
    do
        int32_t r9 = *(i_2 + 0x14)
        int32_t rcx_3 = r9 & 0x3fffffff
        
        if (rcx_3 != 0)
            i = (zx.q(rcx_3 - 1) << 5) + **(arg1 + 0x68)
        else
            i = nullptr
        
        int32_t rax_4
        
        if (i_3 != 0)
            rax_4 = ((i_3 - **(arg1 + 0x68)) s>> 5).d + 1
        else
            rax_4 = 0
        
        i_3 = i_2
        *(i_2 + 0x14) = ((r9 ^ rax_4) & 0x3fffffff) ^ r9
        i_2 = i
    while (i != 0)
    int64_t rdx_2 = 0
    uint64_t i_1
    int64_t* rcx_11
    
    do
        rdi += 1
        arg2[rdx_2] = *(i_3 + 0x18)
        rdx_2 += 1
        
        if (rdx_2 s>= sx.q(arg4))
            *(arg1 + 0x10) |= 0x10
            break
        
        int32_t rax_8 = *(i_3 + 0x14) & 0x3fffffff
        
        if (rax_8 == 0)
            break
        
        rcx_11 = *(arg1 + 0x68)
        i_1 = zx.q(rax_8 - 1) << 5
        i_3 = i_1 + *rcx_11
    while (i_1 != neg.q(*rcx_11))
else
    *arg2 = rax_3
    rdi = 1

int32_t rbx_2 = *(arg1 + 0x10) & 0xffffff
memset(arg1 + 0x10, 0, 0x50)
*arg3 = rdi
return zx.q(rbx_2) | 0x40000000
