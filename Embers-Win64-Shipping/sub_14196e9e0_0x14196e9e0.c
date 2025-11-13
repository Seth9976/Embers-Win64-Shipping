// 函数: sub_14196e9e0
// 地址: 0x14196e9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x18) s<= 0)
    return 

int64_t rdi_1 = 0

do
    int32_t* rdx_2 = *(arg1 + 0x10) + rdi_1
    int32_t rax_1 = *rdx_2
    
    if (rax_1 == 0)
        int64_t* rcx_3 = data_143f0f180
        (*(*rcx_3 + 0x148))(rcx_3, *(rdx_2 + 8), *(rdx_2 + 0x10))
    else if (rax_1 == 1)
        int64_t* rcx_2 = data_143f0f180
        (*(*rcx_2 + 0x120))(rcx_2, *(rdx_2 + 8), *(rdx_2 + 0x10))
    else if (rax_1 == 2)
        int64_t* rcx_1 = data_143f0f180
        (*(*rcx_1 + 0x1c0))(rcx_1, *(rdx_2 + 8), *(rdx_2 + 0x10), zx.q(rdx_2[6]), rdx_2[7].b)
    else if (rax_1 == 3)
        int64_t* rcx = data_143f0f180
        (*(*rcx + 0x1b8))(rcx, *(rdx_2 + 8), *(rdx_2 + 0x10))
    
    i += 1
    rdi_1 += 0x20
while (i s< *(arg1 + 0x18))
