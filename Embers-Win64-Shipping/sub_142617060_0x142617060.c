// 函数: sub_142617060
// 地址: 0x142617060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r10 = (*(arg1 + 0xa0)).b
int64_t r14 = 0
char r11 = (*(arg1 + 0x9c)).b
int64_t rbp

if (arg3 != 0)
    int64_t rax_1
    int64_t rdx
    rdx:rax_1 = muls.dp.q(0x2e8ba2e8ba2e8ba3, arg3 - *(arg1 + 0x90))
    int64_t rdx_1 = rdx s>> 5
    rbp = zx.q((rdx_1 u>> 0x3f).d + rdx_1.d) << r10 | zx.q(*arg3) << (r10 + r11)
else
    rbp = 0

uint64_t result = *(arg2 + 8)
uint64_t i_3 = zx.q(*(result + 0x70))

if (i_3.d != 0)
    uint64_t i_1 = zx.q(i_3.d)
    uint64_t i_2 = i_3
    uint64_t i
    
    do
        int64_t rsi_1 = *(arg2 + 0x70)
        int32_t rbx_1 = -1
        result = zx.q(*(rsi_1 + r14 + 0xc))
        
        if (result.d != 0xffffffff)
            int32_t j
            
            do
                int64_t rdi_1 = *(arg2 + 0x98)
                int64_t r11_3 = (sx.q(result.d) - -0x80000000) * 2
                j = *(rdi_1 + (r11_3 << 3) + 8)
                
                if (((*(rdi_1 + (r11_3 << 3)) u>> (*(arg1 + 0xa0)).b).d
                        & ((1 << (*(arg1 + 0x9c)).b).d - 1)) != ((rbp u>> r10).d & ((1 << r11).d - 1)))
                    rbx_1 = result.d
                else
                    if (rbx_1 != 0xffffffff)
                        *((sx.q(rbx_1) << 4) + 0x800000008 + rdi_1) = j
                    else
                        *(rsi_1 + r14 + 0xc) = j
                    
                    int32_t rdx_4 = *(*(arg2 + 8) + 0x20)
                    
                    if (result.d u< rdx_4)
                        *(*(arg2 + 0x20) + zx.q(result.d) * 0x10 + 8) = *(arg2 + 4)
                        *(arg2 + 4) = result.d
                    else if (result.d u>= 0x80000000)
                        *(*(arg2 + 0x98) + (r11_3 << 3) + 8) = *(arg2 + 0xa8)
                        *(arg2 + 0xa8) = result.d - 0x80000000
                    else
                        int32_t rax_6 = result.d - rdx_4
                        *(*(arg2 + 0x80) + sx.q(rax_6) * 0x10 + 8) = *(arg2 + 0x90)
                        *(arg2 + 0x90) = rax_6
                
                result = zx.q(j)
            while (j != 0xffffffff)
            i_1 = i_2
        
        r14 += 0x14
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

return result
