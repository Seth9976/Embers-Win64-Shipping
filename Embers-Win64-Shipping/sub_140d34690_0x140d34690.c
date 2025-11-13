// 函数: sub_140d34690
// 地址: 0x140d34690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140d21830(*(arg2 + 0x18), &var_18, 0, 0)
int16_t* const rbx = &data_142d40450
int16_t* const rdi

if (rax[1].d == 0)
    rdi = &data_142d40450
else
    rdi = *rax

int64_t var_28
int16_t** rax_1 = sub_140d21830(*(arg2 + 0x10), &var_28, 0, 0)

if (rax_1[1].d != 0)
    rbx = *rax_1

int16_t* const var_38 = rdi
sub_140af98a0("Unknown", 0x87d, u"Execution beyond end of script in %s on %s", rbx)
int64_t rcx_2 = var_28

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return sub_140afbb40() __tailcall
