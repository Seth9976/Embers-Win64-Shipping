// 函数: sub_1421dad20
// 地址: 0x1421dad20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = *(*(arg2 + 0x108) + 8)
int32_t rax_2 = (*(*arg1 + 0x58))()
int64_t r9 = *arg1
int32_t rax_3 = (*(r9 + 0x50))(arg1, zx.q(rsi), arg3, r9)
void*** result_1 = j_sub_140a82f30(0x2d8)
int64_t* result = result_1

if (result_1 == 0)
    result = result_1
else
    sub_1421d73b0(result_1, 2, rsi.b)
    *result = &data_1432f7118
    sub_1421d6a70(&result[0x2a])
    result[0x52].b = 0xff
    *(result + 0x294) = rax_3
    result[0x53].d = rax_2
    __builtin_memset(&result[0x56], 0, 0x14)
    result[0x55] = &data_142f40b50
    result[0x59] = 0
    result[0x5a] = 0

(*(*result + 0x28))(result)
result[0x29].b = 1
int32_t rax_5 = sub_1421f2210(arg1, arg2)
sub_1421fd0a0(arg1, result, *(**(arg1[0x27] + 0x50) + (sx.q(rax_5) << 3)), rax_5.b)
return result
