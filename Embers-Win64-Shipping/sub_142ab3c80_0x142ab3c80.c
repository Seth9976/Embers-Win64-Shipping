// 函数: sub_142ab3c80
// 地址: 0x142ab3c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = zx.q(arg3)
int64_t rdi = sx.q(arg3)

if (arg3 s<= 0x10)
    int64_t r10_1 = 0
    
    if (i_2.d s> 0)
        int32_t rcx_1 = 0
        void* r8_1 = arg2 - 1 + rdi
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            int32_t rax_1 = sx.d(*r8_1)
            r8_1 -= 1
            int64_t rdx_4 = sx.q(rax_1 - 0x30) << rcx_1.b
            rcx_1 += 4
            r10_1 |= rdx_4
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x30) = r10_1
else
    sub_142ab3600(arg1, i_2.d)
    char* r10 = nullptr
    
    if (i_2.d s> 0)
        char* rdx_2 = arg2 - 1 + rdi
        
        do
            char rcx = *rdx_2
            rdx_2 = &rdx_2[-1]
            r10[*(arg1 + 0x30)] = rcx - 0x30
            r10 = &r10[1]
        while (r10 s< rdi)

*(arg1 + 0xc) = arg4 - i_2.d
*(arg1 + 0x10) = i_2.d
