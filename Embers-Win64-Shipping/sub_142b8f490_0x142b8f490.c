// 函数: sub_142b8f490
// 地址: 0x142b8f490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142b8f740(arg1, arg2)
int32_t rcx = *(arg1 + 0x214)
int32_t rax = *(arg2 + 0x214)
int32_t rdx = *(arg2 + 0x210)
int32_t r10_1 = *(arg1 + 0x210) + rcx
int32_t r9 = rdx + rax

if (r10_1 s< r9)
    r10_1 = r9

if (r10_1 - rcx + 1 s> 0x80)
    abort()
    noreturn

uint32_t i_2 = 0
int32_t result = rax - rcx
int32_t i = 0

if (rdx s> 0)
    int64_t rdi_1 = 0
    int64_t r11_1 = sx.q(result) << 2
    uint32_t i_3
    
    do
        r11_1 += 4
        int64_t rdx_1 = *(arg1 + 0x200)
        rdi_1 += 4
        result += 1
        i += 1
        int32_t r8_3 = *(rdi_1 + *(arg2 + 0x200) - 4) + i_2 + *(rdx_1 + r11_1 - 4)
        i_3 = r8_3 u>> 0x1c
        i_2 = i_3
        *(rdx_1 + r11_1 - 4) = r8_3 & 0xfffffff
    while (i s< *(arg2 + 0x210))
    
    if (i_3 != 0)
        int64_t r10_4 = sx.q(result) << 2
        uint32_t i_1
        
        do
            int64_t rdx_2 = *(arg1 + 0x200)
            r10_4 += 4
            result += 1
            int32_t r8_5 = *(rdx_2 + r10_4 - 4) + i_2
            i_1 = r8_5 u>> 0x1c
            i_2 = i_1
            *(rdx_2 + r10_4 - 4) = r8_5 & 0xfffffff
        while (i_1 != 0)

int32_t result_1 = *(arg1 + 0x210)

if (result s< result_1)
    result = result_1

*(arg1 + 0x210) = result
return result
