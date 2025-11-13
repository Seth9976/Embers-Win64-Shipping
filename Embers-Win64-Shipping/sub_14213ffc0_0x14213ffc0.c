// 函数: sub_14213ffc0
// 地址: 0x14213ffc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x30)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    void* rbx_1 = *(arg1 + 0x360)
    int64_t rdi_1 = *(rbx_1 + 0x410)
    sub_142077140(result_1, 0)
    result[5] = rdi_1
    *result = &data_1432dbc60
    result[4] = rbx_1
    result[1].d += 1

int64_t rbx_2 = sx.q(arg3[1].d)
int32_t rcx_1 = (rbx_2 + 1).d
arg3[1].d = rcx_1

if (rcx_1 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

*(*arg3 + (rbx_2 << 3)) = result
return result
