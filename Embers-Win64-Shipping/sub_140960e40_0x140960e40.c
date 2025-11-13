// 函数: sub_140960e40
// 地址: 0x140960e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *(arg1 + 0x18)
int16_t* var_28
sub_140b63b70(&arg_8, &var_28)
int16_t* const rdi = &data_142d40450
int64_t var_18
int64_t* rax_1 = sub_140b63b70(arg1 + 0x190, &var_18)
int16_t* const r8

if (rax_1[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_1

if (*(arg1 + 0x228) != 0)
    rdi = u"(PEER)"

int16_t* const var_38 = rdi
sub_140a2e390(arg2, u"%s %s%s", r8)
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int16_t* rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg2
