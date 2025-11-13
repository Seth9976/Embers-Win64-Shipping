// 函数: sub_1418f9b10
// 地址: 0x1418f9b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140af3aa0()

if (result != 0)
    while (arg1[4] != 0)
        result = (*(*arg1 + 0x18))(arg1)
    
    arg1[8].b = 1

int64_t* rcx_1 = arg1[3]

if (rcx_1 != 0)
    result = (*(*rcx_1 + 0x10))(rcx_1)
    rcx_1 = arg1[3]

if (*(arg1 + 0xa) != 0 && arg1[1].b != 0)
    int128_t zmm0_1 = sub_1418c8680(*(arg1[0xa] + 0x140))
    sub_140b00890(*(arg1 + 0xd))
    result = sub_14196aaf0(arg1[3], zmm0_1)
    data_143f0f1f4 = 0
    rcx_1 = arg1[3]
    *(arg1 + 0xa) = 0

arg1[1].b = 0

if (rcx_1 != 0)
    result = (**rcx_1)(rcx_1, 1)
    arg1[3] = 0

arg1[0x1a].b = 0
return result
