// 函数: sub_140baa8f0
// 地址: 0x140baa8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b63b70(arg1 + 0x14, &var_18)
int16_t* const r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

sub_140a2e390(arg2, u"FAsyncPackage %s", r8)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg2
