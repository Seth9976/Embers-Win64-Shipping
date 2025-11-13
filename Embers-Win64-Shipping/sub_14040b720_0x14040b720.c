// 函数: sub_14040b720
// 地址: 0x14040b720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = arg1

if (arg3 s<= 1)
    return 1

int32_t r10 = 0
int32_t rcx = 0
int64_t rax_4 = sx.q(divs.dp.d(sx.q(arg2), arg3))

do
    int64_t r9_1 = 0
    void* rdx_2 = r11
    
    do
        rdx_2 += 4
        int32_t r8
        r8.b = *(rdx_2 - 4) != 0
        r9_1 += 1
        r10 |= r8 << rcx.b
    while (r9_1 s< rax_4)
    
    rcx += 1
    r11 += rax_4 << 2
while (rcx s< arg3)

return zx.q(r10)
