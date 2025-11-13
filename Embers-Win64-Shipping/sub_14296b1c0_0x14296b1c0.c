// 函数: sub_14296b1c0
// 地址: 0x14296b1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
sub_1428a5c40(*(arg1 + 0x28))
data_143fed138 = 1
FILE* rax = fopen("conout$", U"ww")
data_143fed130 = rax

if (rax == 0)
    data_143fed130 = __acrt_iob_func((&rax->_Placeholder + 2).d)

BOOL rax_3 = GetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), &data_143fed120)
FILE* rax_4

if (rax_3 == 0)
    data_143fed138 = rax_3
    rax_4 = fopen("conin$", &data_142d948d8)
    data_143fed128 = rax_4

if (rax_3 != 0 || rax_4 == 0)
    data_143fed128 = __acrt_iob_func(0)

return 1
