// 函数: sub_141fa0910
// 地址: 0x141fa0910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8
r8.b = 1
int64_t var_18
int16_t** rax_1
int64_t r8_1
rax_1, r8_1 = (*(*arg1 + 0x78))(arg1, &var_18, r8)
int64_t r9 = *arg2
r8_1.b = 1
int64_t var_28
int16_t** rax_2 = (*(r9 + 0x78))(arg2, &var_28, r8_1, r9)
int16_t* const rcx_1 = &data_142d40450
int16_t* rdx_2

if (rax_1[1].d == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *rax_1

if (rax_2[1].d != 0)
    rcx_1 = *rax_2

int32_t rax_3 = sub_140a54510(rcx_1, rdx_2)
int64_t rcx_2 = var_28
int64_t* rbx
rbx.b = rax_3 == 0

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return zx.q(rbx.b)
