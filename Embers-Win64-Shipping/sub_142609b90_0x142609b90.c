// 函数: sub_142609b90
// 地址: 0x142609b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg5 = 0

if (arg3 == 0)
    return 0x80000000

int32_t r14 = *(arg1 + 0x10)

if ((r14 u>> 0x1f).b != 0)
    memset(arg1 + 0x10, 0, 0x50)
    return 0x80000000

int64_t rax_5 = *(arg1 + 0x28)

if (rax_5 != *(arg1 + 0x30))
    void* i_4 = nullptr
    void* i_2
    
    if (arg3 - 1 s< 0)
    label_142609c4a:
        i_2 = *(arg1 + 0x18)
        *(arg1 + 0x10) = r14 | 0x40
    else
        int64_t* r15_1 = *(arg1 + 0x68)
        int64_t rsi_1 = sx.q(arg3 - 1)
        
        while (true)
            void* i_3 = sub_14260b1f0(r15_1, *(arg2 + (rsi_1 << 3)))
            i_2 = i_3
            
            if (i_3 != 0)
                break
            
            int64_t temp1_1 = rsi_1
            rsi_1 -= 1
            
            if (temp1_1 - 1 s< 0)
                goto label_142609c4a
    
    void* i
    
    do
        int32_t r8_1 = *(i_2 + 0x14)
        int32_t rax_7 = r8_1 & 0x3fffffff
        
        if (rax_7 != 0)
            i = (zx.q(rax_7 - 1) << 5) + **(arg1 + 0x68)
        else
            i = nullptr
        
        int32_t rbx_1
        
        if (i_4 != 0)
            rbx_1 = ((i_4 - **(arg1 + 0x68)) s>> 5).d + 1
        else
            rbx_1 = 0
        
        i_4 = i_2
        *(i_2 + 0x14) = ((r8_1 ^ rbx_1) & 0x3fffffff) ^ r8_1
        i_2 = i
    while (i != 0)
    int64_t rcx_4 = 0
    int64_t* rax_17
    uint64_t i_1
    
    do
        rdi += 1
        arg4[rcx_4] = *(i_4 + 0x18)
        rcx_4 += 1
        
        if (rcx_4 s>= sx.q(arg6))
            *(arg1 + 0x10) |= 0x10
            break
        
        int32_t rax_16 = *(i_4 + 0x14) & 0x3fffffff
        
        if (rax_16 == 0)
            break
        
        rax_17 = *(arg1 + 0x68)
        i_1 = zx.q(rax_16 - 1) << 5
        i_4 = i_1 + *rax_17
    while (i_1 != neg.q(*rax_17))
else
    *arg4 = rax_5
    rdi = 1

int32_t rbx_6 = *(arg1 + 0x10) & 0xffffff
memset(arg1 + 0x10, 0, 0x50)
*arg5 = rdi
return zx.q(rbx_6) | 0x40000000
