// 函数: sub_142b4d230
// 地址: 0x142b4d230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
*arg1 = &icu_64::TextTrieMap::`vftable'
int32_t i_1 = 0
int32_t i = 0

if (*(arg1 + 0x1c) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t rdx_1 = arg1[6]
        int64_t rax_1 = arg1[2]
        int64_t* rcx = *(r14_1 + rax_1)
        
        if (rcx != 0)
            if (*(r14_1 + rax_1 + 0xe) != 0)
                (**rcx)(rcx, 1)
            else if (rdx_1 != 0)
                rdx_1()
        
        i += 1
        r14_1 = &r14_1[2]
    while (i s< *(arg1 + 0x1c))

sub_142a7dcd0(arg1[2])
void* result = arg1[4]

if (result != 0)
    if (*(result + 8) s> 0)
        do
            if (arg1[6] != 0)
                arg1[6](sub_142ae72d0(arg1[4], i_1 + 1))
            
            i_1 += 2
            result = arg1[4]
        while (i_1 s< *(result + 8))
    
    int64_t* rcx_4 = arg1[4]
    
    if (rcx_4 != 0)
        return (**rcx_4)(rcx_4, 1)

return result
