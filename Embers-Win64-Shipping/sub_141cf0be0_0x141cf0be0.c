// 函数: sub_141cf0be0
// 地址: 0x141cf0be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)

if (rcx != 0 && sub_140a744f0(&data_143db7b00, (*(*rcx + 0x68))(rcx)) != 0)
    sub_140a87b60(&data_143db7b00, *(arg1 + 8), arg2)

int64_t* rcx_1 = *(arg1 + 8)

if (rcx_1 == 0)
    return 

*(arg1 + 8) = 0
jump(**rcx_1)
