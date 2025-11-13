// 函数: sub_140897b00
// 地址: 0x140897b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg1[1]
int64_t r11 = *arg1
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, r9 - r11)
uint64_t rax_2 = rdx s>> 2 u>> 0x3f
int64_t r8_4 = (r9 - r11) s/ 0x18

if (arg2 u< r8_4)
    int64_t* rbx = r11 + arg2 * 0x18
    int64_t rax_4 = sub_14058d8f0(rbx, r9)
    arg1[1] = rbx
    return rax_4

if (arg2 u> r8_4)
    int64_t rax_5
    int64_t rdx_2
    rdx_2:rax_5 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r11)
    int64_t rdx_3 = rdx_2 s>> 2
    rax_2 = rdx_3 u>> 0x3f
    
    if (arg2 u> rdx_3 + rax_2)
        return sub_140895e60(arg1, arg2)
    
    int64_t i_1 = arg2 - r8_4
    
    if (arg2 != r8_4)
        rax_2 = 0
        int64_t i
        
        do
            __builtin_memset(r9, 0, 0x18)
            r9 += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg1[1] = r9

return rax_2
