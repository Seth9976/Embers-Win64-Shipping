// 函数: sub_1403785fc
// 地址: 0x1403785fc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rdx_2 = arg1[7]
int32_t r9 = 1

if (rdx_2 != 8 && rdx_2 != 0x10 && rdx_2 != 0x18 && rdx_2 != 0x20)
    r9 = 0

if (*arg1 == 0xfffe)
    int16_t rax_1 = arg1[9]
    
    if (rax_1 != 0 && rax_1 != 8 && rax_1 != 0x10 && rax_1 != 0x14 && rax_1 != 0x18
            && rax_1 != 0x20)
        r9 = 0
    
    if (rax_1 u> rdx_2)
        r9 = 0

uint32_t r8 = zx.d(arg1[6])
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(zx.d(rdx_2) * zx.d(arg1[1]))

if (r8 != (temp1 + (temp0 & 7)) s>> 3)
    r9 = 0

if (*(arg1 + 8) != r8 * *(arg1 + 4))
    r9 = 0

return zx.q(r9)
