// 函数: sub_140ce11a0
// 地址: 0x140ce11a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int64_t var_18
int64_t* rax = sub_140b63b70(&arg_8, &var_18)
int16_t* rdx_1

if (rax[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax

int64_t rax_1 = sub_140d1fe00(nullptr, rdx_1)
int64_t rcx_1 = var_18
int64_t rbx
rbx.b = rax_1 != 0

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return zx.q(rbx.b)
