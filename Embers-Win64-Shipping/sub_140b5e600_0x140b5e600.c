// 函数: sub_140b5e600
// 地址: 0x140b5e600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx_1 = zx.q(arg1 u>> 0x10)
uint32_t arg_14 = zx.d(arg1.w)
void* rdx

if (data_143e05168 == 0)
    rdx = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    rdx = &data_143e05180

return zx.q((rbx_1.d.q u>> 0x20).d * 2) + *(rdx + (rbx_1 << 3) + 0x10)
