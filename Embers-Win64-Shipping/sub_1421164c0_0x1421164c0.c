// 函数: sub_1421164c0
// 地址: 0x1421164c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce8e80(arg1, arg2)
int64_t* rcx = *(*arg2 + 8)
(*(*rcx + 0x1d8))(rcx, &data_1439a9478)
int64_t* rbx_1 = *(*arg2 + 8)
(*(*rbx_1 + 0x1d8))(rbx_1, &data_1439a9478)

if ((rbx_1[5].b & 1) != 0 && rbx_1[8].d s< 0x18c)
    int32_t rax_4 = *(arg1 + 0x64)
    *(arg1 + 0x68) = *(arg1 + 0x54)
    *(arg1 + 0x78) = rax_4

int32_t result = sub_140b4e7c0(rbx_1, &data_1439a9478)

if (result s< 0x23)
    result = *(arg1 + 0x50)
    *(arg1 + 0x7c) = *(arg1 + 0x40)
    *(arg1 + 0x8c) = result

return result
