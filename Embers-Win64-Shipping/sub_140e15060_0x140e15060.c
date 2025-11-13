// 函数: sub_140e15060
// 地址: 0x140e15060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x910)
int64_t* rdi = data_143e20d08
int128_t zmm6

if (rcx == 0)
    zmm6 = 0x3f800000
else
    (*(*rcx + 0xf8))(rcx)
    zmm6 = arg3

(*(*rdi + 0x48))(rdi)
arg3.d = arg3.d f* zmm6.d
*(arg2 + 4) = 0
*arg2 = arg3.d
return arg2
