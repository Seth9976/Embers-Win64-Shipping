// 函数: sub_14245b7a0
// 地址: 0x14245b7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
bool cond:0 = arg_8 != 0
*(arg2 + 0x20) = rdi + rax_2
int64_t rdx_1
rdx_1.b = cond:0
return (*(*arg1 + 0x340))(arg1, rdx_1)
