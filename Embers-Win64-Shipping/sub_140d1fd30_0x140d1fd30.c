// 函数: sub_140d1fd30
// 地址: 0x140d1fd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t result = sub_140bdc2b0(*(arg1 + 0x10), arg2, 1)

if (result != 0)
    return result

int64_t var_18
int64_t* rax = sub_140d21830(arg1, &var_18, 0, 0)
int16_t* const rbx_1 = &data_142d40450
int16_t* const rsi_1

if (rax[1].d == result.d)
    rsi_1 = &data_142d40450
else
    rsi_1 = *rax

int64_t var_28
int64_t* rax_1 = sub_140b63b70(&arg_10, &var_28)

if (rax_1[1].d != 0)
    rbx_1 = *rax_1

int16_t* const var_38_1 = rsi_1
sub_140af98a0("Unknown", 0x4d6, u"Failed to find function %s in %s", rbx_1)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_140afbb40()
return result
