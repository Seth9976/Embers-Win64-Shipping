// 函数: sub_141a75120
// 地址: 0x141a75120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_10 = 0x18
int32_t var_14 = 0
int32_t var_18 = 0
int32_t var_c = 1
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int32_t* rax_2 = *(arg2 + 0x38)
int32_t* rdx_2 = &var_18

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
return (*(*arg1 + 0x20))(arg1, rdx_2)
