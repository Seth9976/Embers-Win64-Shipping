// 函数: sub_140620560
// 地址: 0x140620560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *arg2
int64_t* rcx = *(arg1 + 0xc8)
char arg_10 = r8 << 4 | arg2[1]
int64_t r8_1 = 3
char arg_11 = arg2[2]
char arg_12 = arg2[3]

if (r8 - 0xc u<= 1)
    r8_1 = 2

return (*(*rcx + 0x50))(rcx, &arg_10, r8_1)
