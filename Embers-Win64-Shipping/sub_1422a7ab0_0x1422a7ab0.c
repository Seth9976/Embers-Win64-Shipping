// 函数: sub_1422a7ab0
// 地址: 0x1422a7ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x22a) ^= (*(arg1 + 0x22a) ^ *(arg2 + 0x22a)) & 2
char rax_1 = *(arg1 + 0x22a)
char r8 = ((rax_1 ^ *(arg2 + 0x22a)) & 4) ^ rax_1
int64_t rax_2 = *arg1
*(arg1 + 0x22a) = r8
(*(rax_2 + 0x698))(arg3, &arg2[0x4b], r8)
int64_t var_18
int64_t result = (*(*arg1 + 0x678))(arg1, sub_1422a12b0(arg2, &var_18))
int64_t rcx_2 = var_18

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
