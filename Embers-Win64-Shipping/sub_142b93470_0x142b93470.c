// 函数: sub_142b93470
// 地址: 0x142b93470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 2) == 0)
    return 0x23

if (*arg2 != 0)
    return 7

int32_t rax_2 = arg2[3]
int32_t r9 = arg2[1]
int32_t r8_2

if (rax_2 == 0)
    r8_2 = r9
else
    r8_2 = (r9 * rax_2 + 0x24) s/ 0x48

int32_t rdx_1 = arg2[4]
int32_t r11 = arg2[2]
int32_t rdx_4

if (rdx_1 == 0)
    rdx_4 = r11
else
    rdx_4 = (r11 * rdx_1 + 0x24) s/ 0x48

if (r9 == 0)
label_142b93530:
    
    if (r11 != 0)
        r8_2 = rdx_4
else if (r11 == 0)
    rdx_4 = r8_2
else if (r9 == 0)
    goto label_142b93530

int32_t r9_2 = (rdx_4 + 0x20) & 0xffffffc0
int32_t r10_2 = (r8_2 + 0x20) & 0xffffffc0

if (r10_2 != 0 && r9_2 != 0)
    int64_t rcx_6 = sx.q(*(arg1 + 0x28))
    int32_t r8_3 = 0
    
    if (rcx_6.d s> 0)
        int64_t rdx_5 = 0
        int32_t* rcx_7 = *(arg1 + 0x30) + 8
        
        do
            if (r9_2 == ((rcx_7[1] + 0x20) & 0xffffffc0)
                    && (r10_2 == ((*rcx_7 + 0x20) & 0xffffffc0) || arg3 != 0))
                if (arg4 != 0)
                    *arg4 = r8_3
                
                return 0
            
            r8_3 += 1
            rdx_5 += 1
            rcx_7 = &rcx_7[4]
        while (rdx_5 s< rcx_6)

return 0x17
