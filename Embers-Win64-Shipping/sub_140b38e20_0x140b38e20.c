// 函数: sub_140b38e20
// 地址: 0x140b38e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8_1 = arg2 - 1 + ((arg1[2] - *arg1) s>> 1)
int64_t r8_2 = r8_1 | r8_1 u>> 1
int64_t r8_3 = r8_2 | r8_2 u>> 2
int64_t r8_4 = r8_3 | r8_3 u>> 4
int64_t r8_5 = r8_4 | r8_4 u>> 8
int64_t rax_14 = sub_140a82f30(((r8_5 u>> 0x10 | r8_5) << 1) + 2, 0)
int64_t rdx = *arg1
int64_t r14 = ((arg1[1] - rdx) s>> 1) * 2
memcpy(rax_14, rdx, r14.d)

if (arg1[3].b != 0)
    sub_140a74f90(*arg1)

*arg1 = rax_14
arg1[1] = r14 + rax_14
void* result = ((r8_5 u>> 0x10 | r8_5) << 1) + 2 + rax_14
arg1[2] = result
arg1[3].b = 1
return result
