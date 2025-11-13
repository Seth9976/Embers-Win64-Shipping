// 函数: sub_14173e060
// 地址: 0x14173e060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[4]
int64_t rax = sx.q(*arg1)
int64_t r8 = *(arg1 + 8)

if (r9 == 1)
    void* rax_2 = rax * 0xe0 + *(r8 + 0x10)
    int32_t rax_3 = *(rax_2 + 0x78)
    *arg2 = *(rax_2 + 0x70)
    arg2[1].d = rax_3
    return arg2

if (r9 != 2)
    void* rax_11 = rax * 0x140 + *(r8 + 0x30)
    int32_t rax_12 = *(rax_11 + 0x78)
    *arg2 = *(rax_11 + 0x70)
    arg2[1].d = rax_12
    return arg2

void* rax_6 = rax * 0xe0 + *(r8 + 0x20)
int32_t rax_7 = *(rax_6 + 0x78)
*arg2 = *(rax_6 + 0x70)
arg2[1].d = rax_7
return arg2
