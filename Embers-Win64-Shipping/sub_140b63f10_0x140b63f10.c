// 函数: sub_140b63f10
// 地址: 0x140b63f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1] = *arg2
int32_t rax_1 = *arg1
uint64_t rdi_1 = zx.q(rax_1 u>> 0x10)
uint32_t arg_c = zx.d(rax_1.w)
void* r8_1

if (data_143e05168 == 0)
    r8_1 = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    r8_1 = &data_143e05180

uint64_t result =
    sub_140b5c6a0(zx.q((rdi_1.d.q u>> 0x20).d * 2) + *(r8_1 + (rdi_1 << 3) + 0x10), arg2)
int32_t rdi_2 = arg1[1]

if (rdi_2 == 0)
    return result

int16_t* rcx_2 = arg2[1]

if (&rcx_2[1] u>= arg2[2])
    sub_140b38e20(arg2, 1)
    rcx_2 = arg2[1]

*rcx_2 = 0x5f
arg2[1] += 2
return sub_140b33460(arg2, u"%d", zx.q(rdi_2 - 1))
