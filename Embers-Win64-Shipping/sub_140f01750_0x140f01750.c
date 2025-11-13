// 函数: sub_140f01750
// 地址: 0x140f01750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
int64_t r8 = sub_140e149c0(*(*(data_143e29f28 + 0x20) + 8), &var_28)
int512_t zmm2
zmm2.o = arg2
uint64_t result = sub_140daa040(var_28, arg1 + 0x90, r8, arg3, arg4)
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        result = (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_20 + 8))(var_20, 1)

return result
