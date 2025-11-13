// 函数: sub_142b8fe40
// 地址: 0x142b8fe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0x214))
int32_t r9 = *(arg1 + 0x210)
int64_t r11 = sx.q(*(arg2 + 0x214))
int32_t rbx = *(arg2 + 0x210)
int32_t rdx = r9 + r10.d
int32_t rax = rbx + r11.d

if (rdx s< rax)
    return 0xffffffff

if (rdx s> rax)
    return 1

int32_t rdx_1 = rdx - 1
int32_t rax_3 = r11.d

if (r10.d s< r11.d)
    rax_3 = r10.d

if (rdx_1 s>= rax_3)
    int64_t r8_1 = sx.q(rdx_1)
    int64_t r9_3 = (r8_1 - r11) << 2
    int32_t rax_8
    
    do
        int32_t rcx
        
        if (rdx_1 s>= r9 + r10.d)
            rcx = 0
        else if (r8_1 s>= r10)
            rcx = *(*(arg1 + 0x200) + ((r11 - r10) << 2) + r9_3)
        else
            rcx = 0
        
        int32_t rax_6
        
        if (rdx_1 s>= rbx + r11.d)
            rax_6 = 0
        else if (r8_1 s>= r11)
            rax_6 = *(r9_3 + *(arg2 + 0x200))
            
            if (rcx u< rax_6)
                return 0xffffffff
        else
            rax_6 = 0
        
        if (rcx u> rax_6)
            return 1
        
        rdx_1 -= 1
        r8_1 -= 1
        r9_3 -= 4
        rax_8 = r11.d
        
        if (r10.d s< r11.d)
            rax_8 = r10.d
    while (rdx_1 s>= rax_8)

return 0
