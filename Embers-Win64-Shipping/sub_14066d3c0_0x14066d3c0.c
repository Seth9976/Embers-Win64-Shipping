// 函数: sub_14066d3c0
// 地址: 0x14066d3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x36]
int64_t var_18
void* rax_1 = (**rcx)(rcx, &var_18)
int64_t rcx_1 = var_18
int32_t rdx_1 = *(rax_1 + 8)
int64_t result = 0
int32_t rbx = rdx_1 - 1

if (rdx_1 == 0)
    rbx = 0

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

if (rbx == 0)
    return result

return sub_140671b40(arg1)
