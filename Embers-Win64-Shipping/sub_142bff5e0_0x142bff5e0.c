// 函数: sub_142bff5e0
// 地址: 0x142bff5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == &data_14369a5d0)
    return 0

uint16_t r9 = zx.w(*arg1)
uint64_t r10 = zx.q(arg1[1])

if (r9 * 0x100 == neg.w(r10.w))
    return 2

uint64_t r11 = zx.q(arg1[2])
int32_t rax = 0
int32_t i_1 = r11.d
char* rdx_3 = &arg1[3 + ((zx.q(r9.b) << 8) + r10) * r11]

if (r11.d != 0)
    int32_t i
    
    do
        uint32_t rcx_4 = zx.d(*rdx_3)
        rdx_3 = &rdx_3[1]
        rax = (rax << 8) + rcx_4
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(rax + ((zx.d(r9.b) << 8) + (r10 + 1).d) * r11.d + 2)
