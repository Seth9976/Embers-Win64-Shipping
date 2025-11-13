// 函数: sub_140b5e5a0
// 地址: 0x140b5e5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
uint64_t rbx_1 = zx.q(rax u>> 0x10)
uint32_t arg_c = zx.d(rax.w)
void* rdx

if (data_143e05168 == 0)
    rdx = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    rdx = &data_143e05180

return zx.q((rbx_1.d.q u>> 0x20).d * 2) + *(rdx + (rbx_1 << 3) + 0x10)
