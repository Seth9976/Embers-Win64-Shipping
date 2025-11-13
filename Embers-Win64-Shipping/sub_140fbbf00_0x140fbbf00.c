// 函数: sub_140fbbf00
// 地址: 0x140fbbf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int64_t* rcx_1 = *(arg1 + 0x3f0) + 0x4b8
int64_t var_10 = 0
(*(*rcx_1 + 8))(rcx_1, &var_18)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rcx_3 = *(arg1 + 0x3a0)
var_18 = *(arg1 + 0x3b0)
void* rax_2 = *(arg1 + 0x3b8)
void* var_10_1 = rax_2

if (rax_2 != 0)
    *(rax_2 + 8) += 1

return (*(*rcx_3 + 0x240))(rcx_3, &var_18)
