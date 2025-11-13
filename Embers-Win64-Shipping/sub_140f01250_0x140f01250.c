// 函数: sub_140f01250
// 地址: 0x140f01250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_28)
int16_t rax_1
int512_t result
rax_1, result = sub_140da8a50(var_28, arg1, 0x3f800000)
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(rax_1))
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp1_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

result.o = zmm6
return result
