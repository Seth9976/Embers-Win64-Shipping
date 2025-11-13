// 函数: sub_1425fe110
// 地址: 0x1425fe110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0xa8)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    __builtin_memset(&result_1[1], 0, 0x19)
    result_1[5] = arg1
    *result = &data_14344caf8
    result[6].d = 6
    __builtin_memset(&result[0x12], 0, 0x15)
    result[0xa] = 0
    result[0xb].d = 0
    result[0xe] = 0
    result[0xf].d = 0
    result[0x10] = 0
    result[0x11].d = 0

int64_t var_20 = 0
int64_t var_38
__builtin_memset(&var_38, 0, 0x14)
int64_t var_18 = 0
int64_t* rax_1 = (*(*arg1 + 0xa0))(arg1, arg2)
result[0x12] = rax_1
rax_1[1] = arg2

if ((*(*rax_1 + 0x58))(rax_1, arg2, &var_38) == 0)
    *(arg2 + 0x169) = 1
    *(arg2 + 0x204) = 0
    (**result)(result, 1)
    result = nullptr
else
    *(arg2 + 0x16e) &= 0xfb
    *(arg2 + 0x16e) |= 8
    int64_t var_30
    *(arg2 + 0x208) = var_30.d
    *(arg2 + 0x204) = var_38:4.d
    int32_t rax_6 = var_30:4.d
    
    if (rax_6 != 0)
        *(arg2 + 0x274) = rax_6
    
    int32_t var_28
    
    if (not(var_28 f== 0f))
        *(arg2 + 0xf8) = var_28
    
    result[7].w = 1
    *(result + 0x3a) = *(arg2 + 0x204)
    int32_t rax_8 = (int.q(sub_142366f80(arg2))).d
    *(result + 0x46) = 0x10
    *(result + 0x3c) = rax_8
    int32_t rax_9 = *(arg2 + 0x204)
    *(result + 0xc) = rax_9
    rax_9.w *= 2
    *(result + 0x44) = rax_9.w
    float zmm0_2 = sub_142366f80(arg2)
    int64_t rax_10 = sx.q(*(result + 0xc))
    float zmm1_1 = float.s(rax_10 * 2)
    
    if (rax_10 * 2 s< 0)
        zmm1_1 = zmm1_1 + 1.84467441e+19f
    
    result[0xa] = 0
    result[0xb].d = 0
    result[8].d = (int.q(zmm0_2 * zmm1_1)).d

if (var_20 != 0)
    sub_140a74f90(var_20)

return result
