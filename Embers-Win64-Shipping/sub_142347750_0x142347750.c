// 函数: sub_142347750
// 地址: 0x142347750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143e29f28
void arg_8
int32_t* rax_1 = (*(*rcx + 0x58))(rcx, &arg_8)
float zmm1 = *rax_1
int32_t rcx_1 = int.d(zmm1 + zmm1 + 0.5f)
zmm1 = rax_1[1]
*(arg1 + 0x220) = rcx_1 s>> 1
int32_t result = int.d(zmm1 + zmm1 + 0.5f) s>> 1
*(arg1 + 0x224) = result
return result
