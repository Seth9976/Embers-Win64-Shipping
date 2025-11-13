// 函数: sub_141c4a5f0
// 地址: 0x141c4a5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
int64_t* rcx = *(arg1 + 0x10)
int32_t rax_1 = (*(*rcx + 0x10))(rcx)
int64_t* rcx_1 = *(arg1 + 0x10)
int32_t arg_8 = rax_1
char result = (*(*rcx_1 + 0x28))(rcx_1, arg1, &arg_8, rbx)

if (result != 0)
    return result

return sub_141c36bd0(*(arg1 + 0x10) + 0x50)
