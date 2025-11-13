// 函数: sub_140fc6c70
// 地址: 0x140fc6c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = arg3
int64_t var_38 = arg4
void*** rax = j_sub_140a82f30(0x90)
void*** rdx_1

if (rax == 0)
    rdx_1 = nullptr
else
    int64_t var_28 = arg1
    void arg_28
    void arg_30
    void arg_38
    rdx_1 = sub_140fc42b0(rax, &var_28, &var_30, &var_38, &arg_28, &arg_30, &arg_38, arg2)

int64_t* rcx_1 = data_143db7ac8
int64_t result

if (rcx_1 == 0)
    result = sub_140fc5a80(rdx_1)
else
    result = (*(*rcx_1 + 0x10))(rcx_1, rdx_1)

if (*arg2 == 0)
    return result

void* rax_3 = arg2[2]
void* rcx_3 = &arg2[4]

if (rax_3 != 0)
    rcx_3 = rax_3

return (*(*rcx_3 + 0x10))(rcx_3)
