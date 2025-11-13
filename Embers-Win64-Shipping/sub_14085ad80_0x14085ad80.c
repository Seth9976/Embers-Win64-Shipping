// 函数: sub_14085ad80
// 地址: 0x14085ad80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(*arg2 + 8)
(*(*rdi + 0x1d8))(rdi, &data_14396e7c0)
int32_t rax_2 = sub_140b4e7c0(rdi, &data_14396e7c0)

if ((rdi[5].b & 1) != 0 && rax_2 s< 0x34)
    *(arg1 + 0x8c) = 2

int512_t zmm0
int512_t zmm1
zmm0, zmm1 = sub_140ce8e80(arg1, arg2)
uint64_t result = *arg2
void* rcx_3 = *(result + 8)

if (*(rcx_3 + 0x70) == 0 && (*(rcx_3 + 0x28) & 1) == 0)
    return result

return sub_142221160(arg1 + 0x8a0, arg2, zmm0, zmm1)
