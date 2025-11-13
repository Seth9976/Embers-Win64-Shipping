// 函数: sub_141ca6e30
// 地址: 0x141ca6e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b63b70(arg1 + 0x18, &var_18)
int64_t var_38
int64_t var_28
int64_t* rax_2 = sub_140baa460(&var_38, sub_140b63b70(arg1 + 8, &var_28))
int16_t* const rcx_3 = &data_142d40450
int16_t* rdx_3

if (rax[1].d == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *rax

if (rax_2[1].d != 0)
    rcx_3 = *rax_2

int32_t rax_3 = sub_140a54510(rcx_3, rdx_3)
int64_t rcx_4 = var_38
void* rbx
rbx.b = rax_3 == 0

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return zx.q(rbx.b)
