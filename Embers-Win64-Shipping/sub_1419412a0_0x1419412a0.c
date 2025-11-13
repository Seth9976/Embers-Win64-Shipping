// 函数: sub_1419412a0
// 地址: 0x1419412a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405c2d80(&data_1439c9558, arg1[0xe])
int512_t zmm1 = sub_1405c2d80(&data_1439c95a0, arg1[0xf])
arg1[0xe] = 0
arg1[0xf] = 0
char result = arg1[0x39].b - 1

if (result u<= 1)
    sub_141933720(arg1, zmm1)
    result = sub_141941300(arg1)
    arg1[0x39].b = 3

return result
