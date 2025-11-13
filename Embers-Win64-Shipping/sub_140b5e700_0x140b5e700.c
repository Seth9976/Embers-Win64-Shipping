// 函数: sub_140b5e700
// 地址: 0x140b5e700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
uint32_t rbx_1 = rax u>> 0x10
uint32_t arg_c = zx.d(rax.w)
void* rdx

if (data_143e05168 == 0)
    rdx = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    rdx = &data_143e05180

int16_t* rbx_3 = zx.q((rbx_1.q u>> 0x20).d * 2) + *(rdx + (zx.q(rbx_1) << 3) + 0x10)
sub_140b5d780(rbx_3, arg2)
*(arg2 + (zx.q(*rbx_3) u>> 6 << 1)) = 0
return zx.q(zx.d(*rbx_3) u>> 6)
