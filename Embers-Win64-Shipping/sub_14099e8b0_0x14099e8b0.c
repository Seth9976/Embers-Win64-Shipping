// 函数: sub_14099e8b0
// 地址: 0x14099e8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg2 + 0x18))
int32_t* rax = *arg3
int32_t i_1 = 0
arg3[3].d = 1
*(arg3 + 0x1c) = r11.d
arg3[4].d = 0
*(arg3 + 0x24) = 0
*rax = 0x3f2aaaab

if (r11.d s> 0 && r11.d u>= 4)
    int64_t rdi_1 = arg3[1]
    
    if (rdi_1 u> &arg3[1] || rdi_1 + (sx.q((r11 - 1).d) << 2) u< &arg3[1])
        int32_t rax_4 = r11.d & 0x80000003
        
        if (rax_4 s< 0)
            rax_4 = ((rax_4 - 1) | 0xfffffffc) + 1
        
        int32_t rcx_2 = r11.d - rax_4
        
        do
            i_1 += 4
        while (i_1 s< rcx_2)
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_2 + 3)
        __builtin_memset(rdi_1, 0, sx.q((temp1_1 + (temp0_1 & 3)) s>> 2) << 4 u>> 2 << 2)

int64_t i = sx.q(i_1)

if (i s< r11)
    if (r11 - i s>= 4)
        do
            *(arg3[1] + (i << 2)) = 0
            *(arg3[1] + (i << 2) + 4) = 0
            *(arg3[1] + (i << 2) + 8) = 0
            *(arg3[1] + (i << 2) + 0xc) = 0
            i += 4
        while (i s< r11 - 3)
    
    for (; i s< r11; i += 1)
        *(arg3[1] + (i << 2)) = 0

*(arg3[1] + (sx.q(*arg4) << 2)) = 0x3e2aaaab
int64_t result = arg3[1]
*(result + (sx.q(arg4[1]) << 2)) = 0x3e2aaaab
return result
