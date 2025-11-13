// 函数: sub_1409c36d0
// 地址: 0x1409c36d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x18)
int32_t result_1 = 0
void* rdi_2 = &rbx[sx.q(*(arg1 + 0x20)) * 2]

if (rbx == rdi_2)
    return 0

int32_t result

do
    result = sub_140b21160(*rbx, rbx[1].d * 0xc, result_1)
    rbx = &rbx[2]
    result_1 = result
while (rbx != rdi_2)

return result
