// 函数: sub_141d93880
// 地址: 0x141d93880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xc0)

if (result == 0)
    return nullptr

result[1].d = 1
*(result + 0xc) = 1
*result = &data_143239520
int64_t rax = *arg1
int64_t* rbx_1 = arg1[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

int32_t rcx = *arg2
result[2] = &data_143239228
result[3] = rax
result[4] = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

result[5].d = rcx
__builtin_memset(result + 0x2c, 0, 0x14)
result[2] = &data_143239248
result[8] = *arg3
result[0xa] = arg3[2]
arg3[2] = 0
*(result + 0x60) = *(arg3 + 0x20)
*(result + 0x70) = *(arg3 + 0x30)

if (result[8] != 0)
    *arg3 = 0

result[0x10] = *arg4
result[0x12] = arg4[2]
arg4[2] = 0
*(result + 0xa0) = *(arg4 + 0x20)
*(result + 0xb0) = *(arg4 + 0x30)

if (result[0x10] != 0)
    *arg4 = 0

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return result
