// 函数: sub_142a5ebf0
// 地址: 0x142a5ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0x170)

if (rdx == 0)
    return 

void* rdx_2 = *rdx + 0x1e0
bool cond:0_1

if ((*(arg2 + 8) & 1) == 0)
    int16_t rax_1 = *(arg2 + 8)
    int32_t r8_2
    
    if (rax_1 s< 0)
        r8_2 = *(arg2 + 0xc)
    else
        r8_2 = sx.d(rax_1) s>> 5
    
    int16_t rax_2 = *(rdx_2 + 8)
    int32_t rax_4
    
    if (rax_2 s< 0)
        rax_4 = *(rdx_2 + 0xc)
    else
        rax_4 = sx.d(rax_2) s>> 5
    
    if ((*(rdx_2 + 8) & 1) != 0 || r8_2 != rax_4)
        goto label_142a5ec7c
    
    cond:0_1 = sub_142a490e0(arg2, rdx_2, r8_2) != 0
else
    cond:0_1 = (*(rdx_2 + 8) & 1) != 0

if (cond:0_1)
    return 

label_142a5ec7c:
sub_142a48100(**(arg1 + 0x170) + 0x1e0, arg2)
int32_t arg_8 = 0
sub_142a5f4f0(arg1, &arg_8)
