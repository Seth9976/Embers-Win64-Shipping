// 函数: sub_141eaf730
// 地址: 0x141eaf730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0x2f8)
int64_t* rdi = *(arg1 + 0x2f0)

if (i_2 != 0)
    int32_t i
    
    do
        j_sub_140a74f90(*rdi)
        rdi = &rdi[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

*(arg1 + 0x2f8) = 0

if (*(arg1 + 0x2fc) != 0)
    sub_140638c50(arg1 + 0x2f0, 0)

*(arg1 + 0x234) &= 0xfb

for (void* i_1 = *(arg1 + 0x40); i_1 != 0; i_1 = *(i_1 + 0x40))
    if ((*(i_1 + 0xcc) & 0x10000080) != 0)
        int64_t rax_1 = *(i_1 + 0x118)
        int64_t r9_1 = *(arg1 + 0x118)
        int64_t arg_8 = 0
        sub_141e964c0(arg1, &arg_8, i_1, r9_1, rax_1)
        break

*(arg1 + 0x234) |= 4
