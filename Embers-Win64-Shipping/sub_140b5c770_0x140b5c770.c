// 函数: sub_140b5c770
// 地址: 0x140b5c770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1
uint64_t rdi_1 = zx.q(rax u>> 0x10)
uint32_t arg_c = zx.d(rax.w)
void* r8_1

if (data_143e05168 == 0)
    r8_1 = sub_140b58510(&data_143e05180)
    data_143e05168 = 1
else
    r8_1 = &data_143e05180

int64_t result =
    sub_140b5c5e0(zx.q((rdi_1.d.q u>> 0x20).d * 2) + *(r8_1 + (rdi_1 << 3) + 0x10), arg2)

if (arg1[1] == 0)
    return result

int32_t rdx_1 = arg2[1].d
int32_t rax_4
rax_4.b = rdx_1 s<= 0
int32_t rdi_2 = rdx_1 - 1

if (rdx_1 s<= 0)
    rdi_2 = 0

int32_t rax_6 = rax_4 + 1 + rdx_1
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_140594770(arg2)

int64_t rcx_3 = sx.q(rdi_2)
*(*arg2 + (rcx_3 << 1)) = 0x5f
*(*arg2 + (rcx_3 << 1) + 2) = 0
return sub_140a20c40(arg2, arg1[1] - 1)
