// 函数: sub_141895cd0
// 地址: 0x141895cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd8) == 0)
    int64_t result
    result.b = 0
    return result

int64_t rbx = *arg2
int32_t rdi = arg2[1].d
int16_t* var_28 = nullptr
sub_1405a4c70(&var_28, sbb.d(arg3, arg3, rdi != 0) + 4 + rdi, 0)
memcpy(var_28, rbx, rdi * 2)
sub_140a20ba0(&var_28, &data_142fe4c20, 3)
int64_t* rcx_3 = *(arg1 + 0x18)
int16_t* var_18 = var_28
int32_t var_1c
int32_t var_c = var_1c
char rax_6 = (*(*rcx_3 + 0x150))(rcx_3, &var_18, zx.q(rcx_3[1].d))
int16_t* const rdx_4 = &data_142d40450
int16_t* const r8_4 = &data_142d40450

if (rdi != 0)
    r8_4 = var_18

if (arg2[1].d != 0)
    rdx_4 = *arg2

int64_t* rcx_4 = *(arg1 + 8)
char rbx_1

if ((*(*rcx_4 + 0x70))(rcx_4, rdx_4, r8_4) == 0 || rax_6 == 0)
    rbx_1 = 0
else
    rbx_1 = 1

int16_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return zx.q(rbx_1)
