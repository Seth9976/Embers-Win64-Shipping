// 函数: sub_1429d9440
// 地址: 0x1429d9440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 3
int32_t* rcx = *(arg1 + 0x10)
sub_1429d8580(&rcx[6], sx.q(*rcx * 2), &arg_8)
int32_t* r9 = *(arg1 + 0x10)
int32_t i = 0

if (*r9 s> 0)
    int64_t rdx_1 = 0
    int32_t r8_1 = 0
    
    do
        rdx_1 += 8
        i += 1
        *(*(r9 + 0x18) + rdx_1 - 4) = r8_1
        r8_1 += 3
        r9 = *(arg1 + 0x10)
    while (i s< *r9)

return i
