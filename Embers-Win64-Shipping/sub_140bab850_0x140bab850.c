// 函数: sub_140bab850
// 地址: 0x140bab850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

*(*arg1 + (rdi << 2)) = *arg2
int64_t r11 = *arg1
int32_t rcx_2 = arg1[1].d - 1

if (rcx_2 s> 0)
    int64_t rdx_2
    
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_2 - 1)
        rdx_2 = sx.q((temp1_1 - temp0_1) s>> 1)
        int32_t r10_1 = *(r11 + (rdx_2 << 2))
        int64_t rax_6 = sx.q(rcx_2)
        int32_t r9_1 = *(r11 + (rax_6 << 2))
        
        if (r9_1 s>= r10_1)
            break
        
        *(r11 + (rax_6 << 2)) = r10_1
        rcx_2 = rdx_2.d
        *(r11 + (rdx_2 << 2)) = r9_1
    while (rdx_2.d s> 0)

return zx.q(rcx_2)
