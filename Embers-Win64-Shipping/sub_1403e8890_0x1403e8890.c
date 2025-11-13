// 函数: sub_1403e8890
// 地址: 0x1403e8890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3 - 0x10000

if (arg2 - 1 s> 0)
    int16_t* r11_1 = arg1
    uint64_t i_1 = zx.q(arg2 - 1)
    uint64_t i
    
    do
        int32_t r9_1 = sx.d(*r11_1)
        int32_t r10_2 = *r11_1 s>> 0xf
        r11_1 = &r11_1[2]
        *(r11_1 - 4) =
            ((r10_2 + 1) s>> 1) * arg3 + ((zx.d(arg3.w) * r9_1) s>> 0x10) + (arg3 s>> 0x10) * r9_1
        arg3 += (((rdi * arg3) s>> 0xf) + 1) s>> 1
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rax_12 = sx.q(arg2)
void* r9_2 = &arg1[rax_12 * 2]
int32_t rcx = sx.d(*(r9_2 - 4))
int32_t result = (zx.d(arg3.w) * rcx) s>> 0x10
*(r9_2 - 4) =
    (((*(arg1 + (rax_12 << 2) - 4) s>> 0xf) + 1) s>> 1) * arg3 + result + (arg3 s>> 0x10) * rcx
return result
