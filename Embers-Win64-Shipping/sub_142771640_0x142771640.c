// 函数: sub_142771640
// 地址: 0x142771640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2].b == 0)
    return nullptr

void*** result_1 = j_sub_140a82f30(0x190)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    result_1[1] = 0
    result_1[2] = 0
    *result = &data_14349d3e8
    sub_141c30760(&result[3])
    sub_140a1d270(&result[0x11], zx.o(0), sub_140b18f30())
    result[0x14] = 0
    *result = &data_14349d450
    result[0x15] = 0
    result[0x11] = &data_14349d4b8
    result[0x16].d = 0
    result[0x17] = 0
    result[0x18] = 0
    __builtin_memset(&result[0x1d], 0, 0x24)
    result[0x22] = 0
    result[0x23] = 0
    result[0x25] = 0
    result[0x26] = 0
    sub_141c2e3b0(&result[0x28])
    *(result + 0x16c) = 0
    *(result + 0x174) = 0
    result[0x2f] = 0x472c4400
    result[0x30] = 0
    result[0x31].b = 1
    int64_t* rax_1 = j_sub_140a82f30(0x90)
    
    if (rax_1 == 0)
        result[0x14] = 0
    else
        rax_1[2] = 0
        rax_1[5] = 0
        rax_1[0x11].d = 0
        rax_1[0x10] = -1
        sub_142774410(rax_1)
        result[0x14] = rax_1

if ((*result)[1](result, arg2, zx.q(arg3), zx.q(arg4)) == 0)
    return nullptr

int64_t rbx_2 = sx.q(arg1[1].d)
int32_t rcx_5 = (rbx_2 + 1).d
arg1[1].d = rcx_5

if (rcx_5 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rbx_2 << 3)) = result
return result
