// 函数: sub_1423e27c0
// 地址: 0x1423e27c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_141992c00(&arg_8, 1)

if (*(arg1 + 0x88) == 0)
    char rax_2 = (*(*(arg1 - 0x10) + 0xf0))(arg1 - 0x10)
    int64_t rdx_1 = *(arg1 - 0x10)
    int32_t rsi_1 = *(arg1 + 0x9c)
    int32_t rbp_1 = *(arg1 + 0x98)
    int64_t rax_3 = (*(rdx_1 + 0x40))(arg1 - 0x10, rdx_1)
    int64_t* rcx_3 = data_143f0f180
    void arg_10
    (*(*rcx_3 + 0x3b0))(rcx_3, &arg_10, rax_3, zx.q(rbp_1), rsi_1, rax_2, 0)
    sub_1405d1600(arg1 + 0x88, &arg_10)
    sub_1405d1550(&arg_10)
    int64_t r8_2 = *(arg1 + 0x88)
    
    if (r8_2 != 0)
        int64_t* rcx_6 = data_143f0f180
        (*(*rcx_6 + 0x338))(rcx_6, &arg_10, r8_2)
        sub_1405d1600(arg1 - 8, &arg_10)
        sub_1405d1550(&arg_10)

return sub_141994c70(&arg_8)
