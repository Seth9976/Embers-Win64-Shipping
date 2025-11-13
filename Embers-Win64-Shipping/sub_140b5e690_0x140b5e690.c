// 函数: sub_140b5e690
// 地址: 0x140b5e690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
uint64_t rbx_1 = zx.q(rax u>> 0x10)
uint32_t arg_c = zx.d(rax.w)
void* r8

if (data_143e05168 == 0)
    r8 = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    r8 = &data_143e05180

sub_140b5e790(zx.q((rbx_1.d.q u>> 0x20).d * 2) + *(r8 + (rbx_1 << 3) + 0x10), arg2)
return arg2
