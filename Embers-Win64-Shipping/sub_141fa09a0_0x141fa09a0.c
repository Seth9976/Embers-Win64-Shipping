// 函数: sub_141fa09a0
// 地址: 0x141fa09a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8
r8.b = 1
int64_t var_18
int64_t* rax_1 = (*(*arg1 + 0x78))(arg1, &var_18, r8)
int32_t r8_1 = rax_1[1].d
int16_t* rdx_1

if (r8_1 == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax_1

int32_t rcx = r8_1 - 1

if (r8_1 == 0)
    rcx = 0

int32_t result = sub_1405969c0(rcx, rdx_1)
int64_t rcx_1 = var_18

if (rcx_1 == 0)
    return result

sub_140a74f90(rcx_1)
return result
