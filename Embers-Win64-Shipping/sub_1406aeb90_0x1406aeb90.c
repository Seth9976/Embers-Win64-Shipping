// 函数: sub_1406aeb90
// 地址: 0x1406aeb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x20)
void*** result = result_1

if (result_1 == 0)
    result = result_1
else
    result[1].d = arg2
    *result = &data_142d8b590
    __builtin_memset(result + 0xc, 0, 0x14)

result[3] = *(arg1 + 8)
void* rax_1 = *(arg1 + 8)
int64_t rcx = *(rax_1 + 0x10)

if (rcx != 0)
    result[2] = rcx
    *(*(*(arg1 + 8) + 0x10) + 0x18) = result
    rax_1 = *(arg1 + 8)

*(rax_1 + 0x10) = result
*(arg1 + 8) = result
return result
