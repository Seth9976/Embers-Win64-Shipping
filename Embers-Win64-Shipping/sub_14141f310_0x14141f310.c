// 函数: sub_14141f310
// 地址: 0x14141f310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1 + 0x15b8
int32_t r11 = 0
void* rax = *(r9 + 0x10)
int32_t rbx = 0

if (rax != 0)
    r9 = rax

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3)

if (test_bit(*(r9 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)), arg3 & 0x1f))
    int64_t rdx_3 = sx.q(arg3)
    
    if ((*(*(arg1 + 0x1658) + rdx_3 * 0x10 + 8) & 2) != 0)
        int64_t rax_7 = *(arg1 + 0x1d80)
        
        if (arg3 != 0)
            r11 = *(rax_7 + (rdx_3 << 2) - 4)
        
        rbx = *(rax_7 + (rdx_3 << 2))

*arg2 = 1
*(arg2 + 4) = r11
*(arg2 + 0xc) = rbx
arg2[8] = 0
return arg2
