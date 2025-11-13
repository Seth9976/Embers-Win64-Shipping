// 函数: sub_1421e19d0
// 地址: 0x1421e19d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x2d8)
int32_t rdi = 0
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    result_1[1].d = 0xffffffff
    *(result_1 + 0xc) = arg2.b
    result_1[0x12] = 0
    result_1[0x13].d = 0
    *(result_1 + 0x9c) = 8
    result_1[0x14].d = 0xffff0001
    *(result_1 + 0xa4) = 0xff
    result_1[0x19] = 0
    result_1[0x1a].d = 0
    *(result_1 + 0xd4) = 2
    result_1[0x21] = 0
    result_1[0x22].d = 0
    *(result_1 + 0x114) = 3
    __builtin_memset(&result_1[0x23], 0, 0x18)
    *result = &data_1432f7118
    sub_1421d6a70(&result[0x2a])
    __builtin_memset(&result[0x56], 0, 0x14)
    result[0x55] = &data_142f40b50
    result[0x59] = 0

*(result + 0x144) = 2
int64_t r9 = sx.q(sub_1421f2210(arg1, arg3))
sub_1421fd0a0(arg1, result, *(**(arg1[0x27] + 0x50) + (r9 << 3)), r9.b)
int32_t rax_3 = (*(*arg1 + 0x50))(arg1, zx.q(arg2))

if ((arg1[5].b & 1) != 0)
    rdi = (*(*arg1 + 0x58))(arg1)

void** rdx_3 = *result
*(result + 0x294) = rax_3
result[0x53].d = rdi
rdx_3[5](result, rdx_3)
return result
