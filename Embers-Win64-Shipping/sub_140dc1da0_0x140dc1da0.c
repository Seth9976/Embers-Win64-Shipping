// 函数: sub_140dc1da0
// 地址: 0x140dc1da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm2
zmm2.o = arg2
void arg_8
int64_t* result = (*(*arg1 + 0x170))(arg1, &arg_8, zmm2)

if (result != &arg1[0x2b])
    if (arg1[0x2c].b != 0)
        arg1[0x2c].b = 0
    
    arg1[0x2b] = *result
    arg1[0x2c].b = 1

return result
