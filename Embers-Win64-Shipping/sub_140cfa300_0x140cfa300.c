// 函数: sub_140cfa300
// 地址: 0x140cfa300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg4)
int64_t r11 = 0

if (r10 s>= 4)
    void* rcx = arg2 + 8
    int64_t* r9_1 = arg3 - arg2
    int64_t i_2 = ((r10 - 4) u>> 2) + 1
    r11 = i_2 << 2
    int64_t i
    
    do
        *(rcx - 8) = *(r9_1 + rcx - 8)
        *rcx = *(r9_1 + rcx)
        *(rcx + 8) = *(r9_1 + rcx + 8)
        *(rcx + 0x10) = *(r9_1 + rcx + 0x10)
        rcx += 0x20
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r11 s>= r10)
    return 

void* rcx_1 = arg2 + (r11 << 3)
int64_t i_3 = r10 - r11
int64_t i_1

do
    *rcx_1 = *(rcx_1 + arg3 - arg2)
    rcx_1 += 8
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
