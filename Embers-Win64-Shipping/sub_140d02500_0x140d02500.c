// 函数: sub_140d02500
// 地址: 0x140d02500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x80)
int64_t var_18
int64_t* rax_1 = (*(*rcx + 0x68))(rcx, &var_18)
int16_t* const rdi = &data_142d40450

if (rax_1[1].d != 0)
    *rax_1

int64_t* rcx_1 = *(arg1 + 0x78)
int64_t var_28
int16_t** rax_3 = (*(*rcx_1 + 0x68))(rcx_1, &var_28)

if (rax_3[1].d != 0)
    rdi = *rax_3

sub_140a2e390(arg2, u"%s %s", rdi)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg2
