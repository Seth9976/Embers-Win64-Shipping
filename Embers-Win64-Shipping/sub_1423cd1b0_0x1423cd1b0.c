// 函数: sub_1423cd1b0
// 地址: 0x1423cd1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rdi << 3)) = *arg2
int64_t rdi_1 = *arg1
int32_t r8_1 = arg1[1].d - 1

if (r8_1 s> 0)
    int64_t r11_1
    
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r8_1 - 1)
        r11_1 = sx.q((temp1_1 - temp0_1) s>> 1)
        int32_t* r9_1 = rdi_1 + (r11_1 << 3)
        int32_t* r10_1 = rdi_1 + (sx.q(r8_1) << 3)
        int64_t rdx_2 = **arg3
        
        if (*(rdx_2 + (zx.q(*r9_1) & 0xffffff) * 0x90 + 8) f<=
                *(rdx_2 + (zx.q(*r10_1) & 0xffffff) * 0x90 + 8))
            break
        
        if (r10_1 != r9_1)
            int64_t zmm1 = *r10_1
            *r10_1 = *r9_1
            *r9_1 = zmm1
        
        r8_1 = r11_1.d
    while (r11_1.d s> 0)

return zx.q(r8_1)
