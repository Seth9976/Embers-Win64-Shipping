// 函数: sub_140cfc5c0
// 地址: 0x140cfc5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
char rsi = 0
int32_t var_58 = 0

if ((arg4 & 0x10000000) != 0)
    return sub_140a20ba0(arg2, &data_142e14130, 2) __tailcall

sub_140b5b8a0(arg3[2], 0)
int16_t* var_38
int16_t* const rbp

if (sub_140d3c6e0(arg3) == 0)
    rbp = u"(null)"
else
    var_58.q = *(sub_140d3c6e0(arg3) + 0x18)
    sub_140b63b70(&var_58, &var_38)
    rbp = &data_142d40450
    rsi = 1
    int32_t var_30
    
    if (var_30 != 0)
        rbp = var_38

int64_t var_50 = *(arg3 + 8)
int64_t var_28
int64_t* rax_4 = sub_140b63b70(&var_50, &var_28)

if (rax_4[1].d != 0)
    *rax_4

int64_t var_48
sub_140a2e390(&var_48, u"%s.%s", rbp)
int32_t var_40

if (var_40 != 0)
    rbx = var_40 - 1

int64_t result = sub_140a20ba0(arg2, var_48, rbx)
int64_t rcx_10 = var_48

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = var_28

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

if ((rsi & 1) != 0)
    int16_t* rcx_12 = var_38
    
    if (rcx_12 != 0)
        return sub_140a74f90(rcx_12)

return result
