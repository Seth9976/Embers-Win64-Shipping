// 函数: sub_14196f9d0
// 地址: 0x14196f9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2].b = 1
int64_t* rcx = arg1[4]

if (rcx != 0)
    (*(*rcx + 0xc8))(rcx, zx.q(arg1[0x12].d))

int64_t* rcx_1 = arg1[5]

if (rcx_1 != 0 && rcx_1 != arg1[4])
    (*(*rcx_1 + 0xc8))(rcx_1, zx.q(arg1[0x12].d))

int64_t* i = *arg1

while (i != 0)
    int64_t* i_1 = i
    i = i[1]
    data_143f0f190 = i_1
    void arg_8
    (**i_1)(i_1, arg1, &arg_8)

arg1[2].b = 0
sub_140b16b40(&arg1[6], 0)
arg1[1] = arg1
*(arg1 + 0x14) = 0
*arg1 = 0
int32_t rax_4 = data_143f02b8c
data_143f02b8c += 1
arg1[3].d = rax_4 + 1
arg1[0x13] = 0
int32_t result = *(arg1 + 0x8c)
arg1[0x12].d = result
return result
