// 函数: sub_14230a8c0
// 地址: 0x14230a8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0xe0)
int32_t r9 = 0
int32_t r10 = 0
int32_t r11 = 0
int64_t r8_2 = sx.q(r8 - arg2)
int64_t rbx = sx.q(r8 - 1)

if (rbx s< r8_2)
    return 0

if (rbx - r8_2 + 1 s>= 2)
    int64_t i_1 = ((rbx - r8_2 - 1) u>> 1) + 1
    int64_t* rax_5 = **(arg1 + 0x58) + (rbx << 3)
    rbx -= i_1 * 2
    int64_t i
    
    do
        int64_t rcx_2 = *rax_5
        rax_5 = &rax_5[-2]
        r9 += *(rcx_2 + 0x3e0)
        r10 += *(rax_5[1] + 0x3e0)
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbx s>= r8_2)
    r11 = *(*(**(arg1 + 0x58) + (rbx << 3)) + 0x3e0)

return zx.q(r10 + r9 + r11)
