// 函数: sub_140e76be0
// 地址: 0x140e76be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
int64_t* result = sub_140da2300(&var_18, arg1 + 0x68, arg2)
void* rcx_1 = var_18

if (rcx_1 != 0)
    result = sub_140e238f0(rcx_1, 
        _mm_unpacklo_ps(_mm_cvtepi32_ps(zx.o(arg3)), _mm_cvtepi32_ps(zx.o(arg4)).q)[0].q)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        result = (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_10 + 8))(var_10, 1)

return result
