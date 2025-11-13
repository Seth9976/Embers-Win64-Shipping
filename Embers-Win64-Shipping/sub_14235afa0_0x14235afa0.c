// 函数: sub_14235afa0
// 地址: 0x14235afa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x50)
int32_t r8 = 0
int32_t rbx = 0

if (rdi != 0)
    rbx = rdi[1].d

int32_t r9 = 0
int64_t r11 = sx.q(rbx - 1)
int64_t rbx_2 = sx.q(rbx - arg2)
int32_t r10 = 0

if (r11 s< rbx_2)
    return 0

if (r11 - rbx_2 + 1 s>= 2)
    int64_t i_1 = ((r11 - rbx_2 - 1) u>> 1) + 1
    int64_t* rcx = *rdi + (r11 << 3)
    r11 -= i_1 * 2
    int64_t i
    
    do
        int64_t rax_6 = *rcx
        rcx = &rcx[-2]
        r9 += *(rax_6 + 0x4c)
        r10 += *(rcx[1] + 0x4c)
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r11 s>= rbx_2)
    r8 = *(*(*rdi + (r11 << 3)) + 0x4c)

return zx.q(r10 + r9 + r8)
