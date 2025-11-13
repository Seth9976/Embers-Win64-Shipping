// 函数: sub_1423cca10
// 地址: 0x1423cca10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b1a780(&var_18, arg1)
PWSTR rcx_1

if (rax[1].d == 0)
    rcx_1 = &data_142d40450
else
    rcx_1 = *rax

HINSTANCE result = sub_140b66bb0(rcx_1)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
