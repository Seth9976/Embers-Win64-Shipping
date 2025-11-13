// 函数: sub_1403dfba0
// 地址: 0x1403dfba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = sx.d(*(arg1 + 0x914))
uint64_t rsi = zx.q(sx.d(arg2.w))
int32_t rbp = 0
uint32_t rax = (rsi * 5).d
*(arg1 + 0x91c) = rax
int32_t r15_1 = r15 * sx.d(rax.w)

if (*(arg1 + 0x90c) != arg2 || *(arg1 + 0x910) != arg3)
    int32_t rax_2 = sub_1403df310(arg1 + 0x990, rsi.d * 0x3e8, arg3, 0)
    *(arg1 + 0x910) = arg3
    rbp = rax_2

int32_t rcx_1 = *(arg1 + 0x90c)

if (rcx_1 != arg2 || r15_1 != *(arg1 + 0x918))
    void* const rax_3
    void* const rdx_2
    
    if (arg2 != 8)
        rax_3 = &data_1436fcbe8
        rdx_2 = &data_1436fcc20
    else
        rax_3 = &data_1436fcc10
        rdx_2 = &data_1436fcc0c
    
    if (*(arg1 + 0x914) != 4)
        rax_3 = rdx_2
    
    *(arg1 + 0x958) = rax_3
    
    if (rcx_1 != arg2)
        *(arg1 + 0x920) = (rsi * 5).d << 2
        void* const rax_7
        
        if (((arg2 - 8) & 0xfffffffb) == 0)
            *(arg1 + 0x924) = 0xa
            rax_7 = &data_1436fd090
        else
            *(arg1 + 0x924) = 0x10
            rax_7 = &data_1436fcc30
        
        *(arg1 + 0xac0) = rax_7
        
        if (arg2 == 0x10)
            *(arg1 + 0x950) = &data_1436fc868
        else if (arg2 == 0xc)
            *(arg1 + 0x950) = &data_1436fc854
        else if (arg2 == 8)
            *(arg1 + 0x950) = &data_1436fc848
        
        *(arg1 + 0x948) = 1
        *(arg1 + 0x904) = 0x64
        *(arg1 + 0x908) = 0xa
        *(arg1 + 0x105c) = 0
        memset(arg1 + 0x544, 0, 0x3c0)
        memset(arg1 + 0x504, 0, 0x40)
    
    *(arg1 + 0x90c) = arg2
    *(arg1 + 0x918) = r15_1

return zx.q(rbp)
