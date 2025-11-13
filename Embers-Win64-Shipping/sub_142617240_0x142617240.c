// 函数: sub_142617240
// 地址: 0x142617240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t* r13_1 = arg3

if (arg3 == 0)
    return 

int64_t rax_1 = sub_14260f690(arg1, arg3)
void* r11_1 = *(arg2 + 8)
int32_t i = 0
int32_t r12_3 = (rax_1 u>> (*(arg1 + 0xa0)).b).d & ((1 << (*(arg1 + 0x9c)).b).d - 1)

if (*(r11_1 + 0x18) s> 0)
    int64_t r15_1 = 0
    
    do
        int32_t* rsi_1 = *(arg2 + 0x10)
        int32_t j_1 = -1
        int32_t j = *(rsi_1 + r15_1)
        
        while (j != 0xffffffff)
            r11_1 = *(arg2 + 8)
            int32_t r10_1 = *(r11_1 + 0x20)
            int64_t* r9_3
            
            if (j u>= r10_1)
                r9_3 = (sx.q(j - r10_1) << 4) + *(arg2 + 0x80)
            else
                r9_3 = (zx.q(j) << 4) + *(arg2 + 0x20)
            
            if (*(r9_3 + 0xd) s< 0
                    || ((*r9_3 u>> (*(arg1 + 0xa0)).b).d & ((1 << (*(arg1 + 0x9c)).b).d - 1))
                    != r12_3)
                j_1 = j
                j = r9_3[1].d
            else
                int32_t j_2 = r9_3[1].d
                
                if (j_1 != 0xffffffff)
                    void* rcx_8
                    
                    if (j_1 u>= r10_1)
                        rcx_8 = (sx.q(j_1 - r10_1) << 4) + *(arg2 + 0x80)
                    else
                        rcx_8 = (zx.q(j_1) << 4) + *(arg2 + 0x20)
                    
                    *(rcx_8 + 8) = j_2
                else
                    *(rsi_1 + r15_1) = j_2
                
                int32_t rdx_5 = *(*(arg2 + 8) + 0x20)
                
                if (j u< rdx_5)
                    *(*(arg2 + 0x20) + zx.q(j) * 0x10 + 8) = *(arg2 + 4)
                    *(arg2 + 4) = j
                    j = j_2
                    r11_1 = *(arg2 + 8)
                else if (j u>= 0x80000000)
                    *((sx.q(j) << 4) + 0x800000008 + *(arg2 + 0x98)) = *(arg2 + 0xa8)
                    *(arg2 + 0xa8) = j - 0x80000000
                    j = j_2
                    r11_1 = *(arg2 + 8)
                else
                    int32_t rax_2 = j - rdx_5
                    *(*(arg2 + 0x80) + sx.q(rax_2) * 0x10 + 8) = *(arg2 + 0x90)
                    *(arg2 + 0x90) = rax_2
                    j = j_2
                    r11_1 = *(arg2 + 8)
        
        i += 1
        r15_1 += 0x20
    while (i s< *(r11_1 + 0x18))
    
    r13_1 = arg3

sub_142617060(arg1, arg2, r13_1)
