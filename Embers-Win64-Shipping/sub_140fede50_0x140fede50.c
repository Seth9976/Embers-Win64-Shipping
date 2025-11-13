// 函数: sub_140fede50
// 地址: 0x140fede50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = *(arg2 + 0x34)
int32_t i_4 = *(arg3 + 0x34)
int32_t i_2 = i_3

if (i_4 u<= i_3)
    i_2 = i_4

int32_t rbx = i_3 - i_2

if (i_2 != 0)
    int32_t rdi_1 = i_4 - i_2 - rbx
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        int64_t* rcx = *(arg1 + 0x150)
        (*(*rcx + 0x170))(rcx, *(arg2 + 0xa0), zx.q(rbx), 0, 0, 0, *(arg3 + 0xa0), rdi_1 + rbx, 0)
        rbx += 1
        i = i_1
        i_1 -= 1
    while (i != 1)

*arg4 -= 1
return arg4
