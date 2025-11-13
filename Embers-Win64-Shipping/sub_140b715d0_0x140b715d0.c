// 函数: sub_140b715d0
// 地址: 0x140b715d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = *(arg1 + 0x10)
int32_t r8 = 0
char* rdx = *(arg1 + 8)
int32_t r9 = 0
uint32_t r10 = 0

if (r11 s<= 0)
    return 

if (r11 + 0xfff s>= 0x2000)
    int64_t i_1 = ((r11 - 0x1001) u>> 0xd) + 1
    r11 += neg.q(i_1) << 0xd
    int64_t i
    
    do
        r8 += zx.d(*rdx)
        r9 += zx.d(rdx[0x1000])
        rdx = &rdx[0x2000]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r11 s> 0)
    r10 = zx.d(*rdx)

if (r10 + r9 + r8 == 0xbadf00d)
    return sub_140b73230(zx.o(0)) __tailcall
