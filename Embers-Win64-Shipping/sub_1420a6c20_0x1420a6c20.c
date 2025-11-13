// 函数: sub_1420a6c20
// 地址: 0x1420a6c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143f475d0
int32_t result = (*(*rcx + 0x90))(rcx)
data_143f47540 = result

if (result != 0)
    int64_t rcx_1 = sx.q(arg1[2].d)
    int64_t rax_1 = *arg1
    int64_t r9_1 = sx.q(*(arg1 + 0x24))
    arg1[3] += r9_1
    arg1[3] -= zx.q(*(rax_1 + (rcx_1 << 2)))
    *(rax_1 + (rcx_1 << 2)) = r9_1.d
    int32_t rcx_2 = arg1[1].d
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(arg1[2].d + 1)
    *(arg1 + 0x24) = 0
    result = divs.dp.d(temp2_1:temp3_1, rcx_2)
    arg1[2].d = mods.dp.d(temp2_1:temp3_1, rcx_2)
    int32_t r8_1
    r8_1.b = arg1[4].d != rcx_2
    arg1[4].d += r8_1

return result
