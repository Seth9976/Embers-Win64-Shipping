// 函数: sub_1422651a0
// 地址: 0x1422651a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm3
zmm3.o = *(arg2 + 0x30)
int512_t zmm2
zmm2.o = *(arg2 + 0x28)
*arg1 = 0
int64_t* rcx = data_143ef8520
*arg1 = (*(*rcx + 0x100))(rcx, arg2, zmm2, zmm3)
return arg1
