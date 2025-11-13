// 函数: sub_142698d10
// 地址: 0x142698d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142427bf0(arg1)
*arg1 = &data_14345abb8
arg1[0x4b] = &data_14345b208
arg1[0x4c] = sub_14269c3a0()
void* rcx = arg1[0x47]

if (rcx != 0)
    sub_141f256b0(rcx, 0)
    int64_t* rcx_1 = arg1[0x47]
    int64_t r8_1
    r8_1.b = 1
    (*(*rcx_1 + 0x620))(rcx_1, data_143f3a590, r8_1)

return arg1
