// 函数: sub_142221320
// 地址: 0x142221320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(*arg2 + 8)
int512_t zmm0
int512_t zmm1
zmm0, zmm1 = sub_140ce8e80(arg1, arg2)
int64_t r9 = *(rsi + 0x70)
bool result_1 = r9 != 0
int64_t* rcx = *(*arg2 + 8)
int64_t* rdx = rcx[1]
int64_t r8 = *rdx
int32_t arg_18
bool result

if (r8 + 4 u> rdx[1])
    int32_t rax_4
    rax_4.b = r9 != 0
    arg_18 = rax_4
    (*(*rcx + 0x150))(rcx, &arg_18, 4)
    result = arg_18 != 0
    result_1 = result
else
    result_1 = *r8 != 0
    int64_t* rax_3 = rcx[1]
    *rax_3 += 4
    result = result_1

if (result == 0)
    if ((*(rsi + 0x28) & 1) != 0)
        arg_18.q = *(arg1 + 0x18)
        int16_t* var_18
        sub_140b63b70(&arg_18, &var_18)
        int16_t* const r9_1 = &data_142d40450
        int32_t var_10
        
        if (var_10 != 0)
            r9_1 = var_18
        
        zmm1 = sub_140af98a0("Unknown", 0x53, 
            This platform requires cooked packages, and this SubUV animation does not contain cooked "
        "data %s.", r9_1)
        int16_t* rcx_2 = var_18
        
        if (rcx_2 != 0)
            zmm1 = sub_140a74f90(rcx_2)
        
        result, zmm0 = sub_140afbb40()
    
    if ((*(rsi + 0x28) & 1) == 0 || result_1 == 0)
        return result

return sub_142221160(arg1 + 0x40, arg2, zmm0, zmm1)
